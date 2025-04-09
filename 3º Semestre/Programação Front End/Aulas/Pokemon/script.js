fetch("https://pokeapi.co/api/v2/pokemon?offset=20&limit=2")
  .then(request => request.json())
  .then(dados => console.log(dados));
