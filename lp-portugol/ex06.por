programa {
  funcao inicio() {
    // exibindo variável
    real nota1, nota2, media

    //solicitando notas
    escreva("Diga a primeira nota: ")
    leia(nota1)
    escreva("Diga a segunda nota: ")
    leia(nota2)

    //calculando media
    media = (nota1 + nota2)/2

    //aprovado ou reprovado
    se(media >= 6) {
      escreva("Parabéns você está aprovado! ")
    }
    se(media <= 5) {
      escreva("Você está em recuperação! ")
    }
    se(media < 4) {
      escreva("Você está reprovado! ")
    }
      escreva("\nMedia: ", media)
    }
  }
}
