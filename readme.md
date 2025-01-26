# Calculadora Simples em C

Este programa é uma calculadora básica desenvolvida em linguagem C. Ele permite realizar operações matemáticas simples como soma, subtração, multiplicação e divisão com dois números fornecidos pelo usuário. Além disso, o programa oferece a possibilidade de realizar novas operações em sequência.

---

## Funcionalidades

1. **Operações Matemáticas:**
   - Soma
   - Subtração
   - Multiplicação
   - Divisão

2. **Execução Contínua:**
   - Permite realizar múltiplas operações sem reiniciar o programa.

---

## Código-Fonte

```c
#include <stdio.h>

int main(void) {
    float x = 0, y = 0, resultado = 0;
    int op;
    do {
        printf("\n\t1 - Soma\n\t2 - Subtracao\n\t3 - Multiplicacao\n\t4 - Divisao");
        scanf("%i", &op);
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &y);
        switch(op) {
            case 1:
                resultado = x + y;
                break;
            case 2:
                resultado = x - y;
                break;
            case 3:
                resultado = x * y;
                break;
            case 4: 
                resultado = x / y;
                break;
            default:            
                printf("\n Escolha uma opcao entre Soma Subtracao Multiplicacao Divisao\n");
                break;      
        }
        printf("\n\t O resultado e: %0.2f", resultado);
        printf(" Digite 1 para continuar: ");
        scanf("%i", &op);
    } while(op == 1);
    return 0;
}
```

---

## Estrutura do Programa

### Entrada de Dados

1. O programa solicita ao usuário:
   - A operação desejada (soma, subtração, multiplicação ou divisão).
   - Dois números (float) para realizar a operação.

### Processamento

1. O programa utiliza um laço `do-while` para permitir a execução contínua.
2. Um `switch` é utilizado para determinar qual operação será realizada com base na escolha do usuário.
3. O cálculo é realizado e armazenado na variável `resultado`.

### Saída de Dados

1. O resultado da operação é exibido com duas casas decimais.
2. O programa pergunta se o usuário deseja continuar executando novas operações.

---

## Exemplo de Execução

### Entrada:
```plaintext
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
Escolha uma operacao: 1
Digite o primeiro numero: 10
Digite o segundo numero: 5
```

### Saída:
```plaintext
 O resultado e: 15.00
Digite 1 para continuar: 0
```

---

## Requisitos para Execução

1. Um compilador de C, como GCC.
2. Um ambiente de desenvolvimento ou terminal para compilar e executar o programa.

---

## Como Compilar e Executar

1. Salve o código em um arquivo com a extensão `.c`, por exemplo, `calculadora_simples.c`.
2. Abra o terminal e navegue até o diretório onde o arquivo está salvo.
3. Compile o código com o seguinte comando:

   ```bash
   gcc calculadora_simples.c -o calculadora_simples
   ```

4. Execute o programa com o comando:

   ```bash
   ./calculadora_simples
   ```

---

## Considerações

- O programa não realiza verificações avançadas, como evitar divisões por zero. Para melhorar a robustez, pode-se adicionar verificações adicionais.
- Permite operações contínuas sem a necessidade de reiniciar, otimizando o uso do programa.
- Caso a entrada seja inválida, o programa exibe uma mensagem de erro simples e retorna ao menu principal.

---

## Autor

Este programa foi desenvolvido como um exemplo didático para prática de estruturas de controle, laços e manipulação de entradas em C.
