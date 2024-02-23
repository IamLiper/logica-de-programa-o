programa {
  funcao inicio() {
    //Exibindo variável
    inteiro n1, n2, soma, multiplicacao, divisao, media, resultado
    cadeia operacao

    //Solicitando dados do usuário
    escreva("Escolha a operacao (+,-,*,/) ")
    leia(operacao)
    escreva("Digite o perimeiro valor: ")
    leia(n1)
    escreva("Digite o segundo valor: ")
    leia(n2)

    //calculando...
    escolha(operacao) {
      caso "+":
      resultado = n1 + n2
      pare
      caso "-":
      resultado = n1 - n2
      pare
      caso "*":
      resultado = n1 * n2
      pare
      caso "/": 
      resultado = n1 / n2
      pare
      caso contrario: 
      escreva("Inválido")
    }

    //Exibindo resultado
    escreva("\n=== Exibindo resultado === ")
    escreva("\nResultado: ", resultado)
  }
}
