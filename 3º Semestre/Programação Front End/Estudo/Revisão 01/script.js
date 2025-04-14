let produtos = [];

function cadastro () {
    let nome = document.getElementById("Nome").value;
    let preco = document.getElementById("Preco").value;
    let categoria = document.getElementById("Categoria").value;

    adicionar(nome,preco,categoria);
    atualizaTabela();
    limparCampo();
}

function adicionar (nome, preco, categoria) {
    produtos.push(
        {"Nome" : nome, "Preco" : preco, "Categoria" : categoria}
    );
}

function atualizaTabela () {
    let tabela = document.getElementById("tabelaBody");
    tabela.innerHTML = ""

    produtos.forEach((item) => {
        tabela.innerHTML += `
            <tr>
                <td>${item.Nome}</td>
                <td>${item.Preco}</td>
                <td>${item.Categoria}</td>
            </tr>
        `;
    });
}

function limparCampo () {
    document.getElementById("Nome").value = "";
    document.getElementById("Preco").value = "";
    document.getElementById("Categoria").value = "";
    document.getElementById("verificacao").value = "";
}

function verificar () {
    let nomeVerificado = document.getElementById("verificacao").value;
    let encontrado = false;

    produtos.forEach((item) => {
        if (item.Nome === nomeVerificado)
        {
            alert("Produto Encontrado!");
            encontrado = true;
        }
    });

    if (!encontrado)
    {
        alert("Produto Não Encontrado!");
    }
}

function remover () {
    let nomeVerificado = document.getElementById("verificacao").value;
    
    produtos.forEach((item,index) => {
        if (item.Nome === nomeVerificado)
        {
            produtos.splice(index, 1);
        }
    })

    atualizaTabela();
}
