programa {
  funcao inicio() {
    //exibindo variável
    inteiro verde, azul, amarelo, vermelho, preco, cor
    cadeia cd
    //solicitando informações
    escreva("O nome do produto: ")
    leia(cd)
    escreva("Diga a cor: ")
    leia(cor)

    //Pesquisando o preço
    se(cor == verde) {
      escreva("O preço é R$ 10,00")
    }
    se(cor == azul) {
      escreva("O preço é R$ 20,00")
    }
    se(cor == amarelo) {
      escreva("O preço é R$ 30,00")
    }
    se(cor == vermelho) {
      escreva("O preço é R$ 40, 00")
    }senao{
      escreva("Opção inválida!")
    }
  }
}
