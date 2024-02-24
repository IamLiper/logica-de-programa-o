programa {
  funcao inicio() {
    real kgapple, kgmo, valormo, valorapple, precoTotal, geral, desconto

    escreva("Digite quantos kg de morango: ")
    leia(kgmo)
    escreva("Digite quantos kg de maça: ")
    leia(kgapple)

    valormo = 2.50
    valorapple = 1.80

    se(kgmo >5) {
      valormo = 2.20
    }

    se(kgapple >5) {
      valorapple = 1.50
    }

    precoTotal = valormo * kgmo + kgapple * valorapple
    geral = kgmo + kgapple
    desconto = precoTotal * 0.1

    se(geral > 8 ou precoTotal > 25) {
      precoTotal = precoTotal - desconto
    }

    escreva("Resultado final: ", precoTotal)
  }
}
