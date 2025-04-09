let lista = [];

function salvar () {
    let nome = document.getElementById("name").value;
    let idade = document.getElementById("age").value;

    adicionar(nome, idade);
    apresentar();
    limpar();
}

function adicionar (nome, idade) {
    lista.push(
        {'Nome': nome, 'Idade': idade}
    );
}

function apresentar () {
    console.log("------------------ Lista De Nomes ------------------");
    lista.forEach(function (item) {
        console.log("Nome: " + item.Nome + "\nIdade: " + item.Idade);
    }
    );
    console.log("----------------------------------------------------");
}

function limpar () {
    document.getElementById("name").value = "";
    document.getElementById("age").value = "";
    document.getElementById("nomeVerificado").value = "";
}

function verificar () {
    let nomeExiste = false;
    let nomeVerificar = document.getElementById("nomeVerificado").value;

    lista.forEach(function (item) {
        if (item.Nome === nomeVerificar) {
            alert ("Nome encontrado na lista!");
            nomeExiste = true;
        }
    }
    );

    if (!nomeExiste) {
        alert ("Nome não encontrado na lista!");
        limpar();
    }
}

function remover () {
    let nomeRemover = document.getElementById("nomeVerificado").value;

    lista.forEach(function (item, index) {
        if (item.Nome === nomeRemover) {
            lista.splice(index, 1);
            alert ("Nome removido da lista!");
            limpar();
            apresentar();
        }
    }
);
}