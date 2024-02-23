programa {
  funcao inicio() {
    //Exibindo variável
    inteiro a, b, c, operacao, resultado
    
    //solicitando dados do usuário
    escreva("Digite o primeiro valor: ")
    leia(a)
    escreva("Digite o segundo valor: ")
    leia(b)

    //calculando
    se(a == b) {
      c = (a + b)
    }senao{
      c = (a * b)
    }
    //Exibindo resultado
    escreva("\n=== Exibindo resultado === ")
    escreva("\nTa aí: ", c)
  }
}
