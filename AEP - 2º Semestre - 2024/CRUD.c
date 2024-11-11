#include <curses.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char *chave = "vlUv21IMYdlH6FEM";

char usuarios[20][2][20]; // Matriz para armazenar nome e senha
int totuser = 0;

// Funções Auxiliares

void limparTela() { clear(); refresh(); }
void pausa() { printw("Pressione ENTER para continuar..."); refresh(); getch(); }

void criptografa(char *s, const char *chave) {
    int chave_len = strlen(chave);
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = s[i] + chave[i % chave_len];  // Embaralha com a chave (soma os valores ASCII)
    }
}

void descriptografa(char *s, const char *chave) {
    int chave_len = strlen(chave);
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = s[i] - chave[i % chave_len];  // Desembaralha com a chave (subtrai os valores ASCII)
    }
}

int busca(char *chave) {
    for (int i = 0; i < totuser; i++) {
        if (strcmp(usuarios[i][0], chave) == 0) return i;
    }
    return -1;
}

int senha(char *s) {
    bool maiusc = false;
    bool minusc = false;
    bool digito = false;
    bool ponto = false;

    if (strlen(s) < 8 || strlen(s) > 20) {
        return 0; // Senha inválida
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) maiusc = true;
        if (islower(s[i])) minusc = true;
        if (isdigit(s[i])) digito = true;
        if (ispunct(s[i])) ponto = true;
    }

    return maiusc && minusc && digito && ponto;
}

void classifica() {
    char temp[20];
    for (int i = 0; i < totuser - 1; i++) {
        for (int j = i + 1; j < totuser; j++) {
            if (strcmp(usuarios[j][0], usuarios[i][0]) < 0) 
            {
                strcpy(temp, usuarios[i][0]);
                strcpy(usuarios[i][0], usuarios[j][0]);
                strcpy(usuarios[j][0], temp);

                strcpy(temp, usuarios[i][1]);
                strcpy(usuarios[i][1], usuarios[j][1]);
                strcpy(usuarios[j][1], temp);
            }
        }
    }
}

// Funções de Leitura e Escrita

void leArquivo() {
    FILE *arq = fopen("DADOS.TXT", "r");
    if (arq == NULL) return;

    totuser = 0;
    while (fscanf(arq, "%s %s", usuarios[totuser][0], usuarios[totuser][1]) != EOF && totuser < 20) {
        descriptografa(usuarios[totuser][0], chave);
        descriptografa(usuarios[totuser][1], chave);
        totuser++;
    }
    fclose(arq);
}

void salvaArquivo() {
    FILE *arq = fopen("DADOS.TXT", "w");
    if (arq == NULL) return;

    for (int i = 0; i < totuser; i++) {
        criptografa(usuarios[i][0], chave);
        criptografa(usuarios[i][1], chave);
        fprintf(arq, "%s %s\n", usuarios[i][0], usuarios[i][1]);
        descriptografa(usuarios[i][0], chave);
        descriptografa(usuarios[i][1], chave);
    }
    fclose(arq);
}

// Funções Principais

void inserir() {
    char senha2[20];
    limparTela();
    echo();
    do {
        printw("Nome de Usuario: ");
        scanw("%s", usuarios[totuser][0]);
        if (busca(usuarios[totuser][0]) >= 0) {
            printw("Usuário já cadastrado!\n");
            pausa();
        }
    } while (busca(usuarios[totuser][0]) >= 0 || strlen(usuarios[totuser][0]) < 3);

    do {
        printw("Senha: ");
        scanw("%s", usuarios[totuser][1]);
    } while (!senha(usuarios[totuser][1]));

    do {
        printw("Repita a Senha: ");
        scanw("%s", senha2);
    } while (!senha(senha2) || strcmp(usuarios[totuser][1], senha2) != 0);

    totuser++;
    noecho();
    salvaArquivo();
    classifica();
    limparTela();
}

void alterar() {
    char senha2[20], usuario[20];
    int p;
    limparTela();
    echo();

    do {
        printw("Nome do Usuario: ");
        scanw("%s", usuario);
        p = busca(usuario);
        if (p < 0) {
            printw("Usuário não encontrado!\n");
            pausa();
        }
    } while (p < 0 || strlen(usuario) < 3);

    do {
        printw("Nova Senha: ");
        scanw("%s", usuarios[p][1]);
    } while (!senha(usuarios[p][1]));

    do {
        printw("Repita a Senha: ");
        scanw("%s", senha2);
    } while (!senha(senha2) || strcmp(usuarios[p][1], senha2) != 0);

    noecho();
    salvaArquivo();
    limparTela();
}

void excluir() {
    char usuario[20], confirma;
    int p;
    limparTela();
    echo();

    do {
        printw("Nome do Usuario: ");
        scanw("%s", usuario);
        p = busca(usuario);
        if (p < 0) {
            printw("Usuário não encontrado!\n");
            pausa();
        }
    } while (p < 0 || strlen(usuario) < 3);

    printw("Deseja realmente excluir esse usuário? (S/N) ");
    scanw(" %c", &confirma);
    if (toupper(confirma) == 'S') {
        for (int i = p; i < totuser - 1; i++) {
            strcpy(usuarios[i][0], usuarios[i + 1][0]);
            strcpy(usuarios[i][1], usuarios[i + 1][1]);
        }
        totuser--;
        noecho();
        salvaArquivo();
    }
    limparTela();
}

void listar() {
    limparTela();
    printw("---------------------------------------------------------\n");
    printw("Usuário         Senha\n");
    printw("---------------------------------------------------------\n");

    for (int i = 0; i < totuser; i++) {
        printw("%-15s\n", usuarios[i][0]);
    }
    printw("---------------------------------------------------------\n");
    pausa();
    limparTela();
}

// Funções de exibição do Menu

void draw_menu(WINDOW *menu, int destaque) {
    int x, y, i;
    char options[10][30] = { "Inserir Usuário", "Alterar Senha", "Excluir Usuário", "Listar Usuários", "Fechar" };

    box(menu, 0, 0);
    for (i = 0; i < 5; ++i) {
        y = i + 1;
        x = (getmaxx(menu) - strlen(options[i])) / 2;
        if (destaque == i + 1) {
            wattron(menu, A_REVERSE);
            mvwprintw(menu, y, x, options[i]);
            wattroff(menu, A_REVERSE);
        } else {
            mvwprintw(menu, y, x, options[i]);
        }
    }
    wrefresh(menu);
}

void menu() {
    WINDOW *menu;
    int destaque = 1;
    int escolha;
    int tecla;
    bool loop = true;

    initscr();
    clear();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);

    int height = 7;
    int width = 25;
    int start_y = (LINES - height) / 2; // Posição vertical centralizada
    int start_x = (COLS - width) / 2; // Posição horizontal centralizada

    menu = newwin(height, width, start_y, start_x);
    keypad(menu, TRUE);

    while (loop) {
        draw_menu(menu, destaque);
        tecla = wgetch(menu);

        switch (tecla) {
            case KEY_UP:
                if (destaque == 1)
                    destaque = 5;
                else
                    --destaque;
                break;
            case KEY_DOWN:
                if (destaque == 5)
                    destaque = 1;
                else
                    ++destaque;
                break;
            case 10:
                escolha = destaque;
                clear();
                switch (escolha) {
                    case 1: 
                        inserir(); 
                        break;
                    case 2: 
                        alterar(); 
                        break;
                    case 3: 
                        excluir(); 
                        break;
                    case 4: 
                        listar(); 
                        break;
                }
                break;
        }
        if (escolha == 5) loop = false;
    }
    endwin();
}

int main() {
    leArquivo();
    classifica();
    menu();
    return 0;
}
