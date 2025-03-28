const calculator = document.querySelector('.calculator');
const keys = calculator.querySelector('.keys');
const display = document.querySelector('.display');
let teclaAnterior = '';

keys.addEventListener('click', e => {
  if (e.target.matches('button')) {
    const key = e.target;
    const action = key.dataset.action;
    const keyContent = key.textContent;
    const displayedNum = display.textContent;
    
    if (!action) {
      if (displayedNum === '0' || teclaAnterior === 'operador' || teclaAnterior === 'calcular') {
        removerDepressed();
        display.textContent = keyContent;
      } else {
        display.textContent = displayedNum + keyContent;
      }
      teclaAnterior = 'numero';
    }

    if (action === 'decimal') {
      if (teclaAnterior === 'operador' || teclaAnterior === 'calcular') {
        display.textContent = '0.';
        removerDepressed();
      } else if (!displayedNum.includes('.')) {
        display.textContent = displayedNum + '.';
      }
      teclaAnterior = 'decimal';
    }

    if (action === 'somar' || action === 'subtrair' || action === 'multiplicar' || action === 'dividir') {
      removerDepressed();
      
      key.classList.add('is-depressed');
      teclaAnterior = 'operador';
      calculator.dataset.num1 = displayedNum;
      calculator.dataset.operador = action;
    }

    if (action === 'calcular') {
      const num1 = calculator.dataset.num1;
      const operador = calculator.dataset.operador;
      const num2 = displayedNum;
      
      if (num1) {
        display.textContent = calcular(num1, operador, num2);
      }
      teclaAnterior = 'calcular';
    }

    if (action === 'limpar') {
      removerDepressed();
      display.textContent = '0';
      teclaAnterior = '';
    }
  }
});

function calcular(num1, operador, num2) {
  let resultado = '';
  if (operador === 'somar') {
    resultado = parseFloat(num1) + parseFloat(num2);
  } else if (operador === 'subtrair') {
    resultado = parseFloat(num1) - parseFloat(num2);
  } else if (operador === 'multiplicar') {
    resultado = parseFloat(num1) * parseFloat(num2);
  } else if (operador === 'dividir') {
    resultado = parseFloat(num1) / parseFloat(num2);
  }
  return resultado.toString();
}

function removerDepressed() {
  Array.from(keys.children).forEach(k => k.classList.remove('is-depressed'));
}
