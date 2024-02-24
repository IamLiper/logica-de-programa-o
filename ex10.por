programa {
  funcao inicio() {
    real litros, valor, total, desconto
    caracter combustivel
    cadeia tipo

    escreva("Qual tipo de combustível? A(Álcool) ou G(Gasolina): ")
    leia(combustivel)
    escreva("Quantos litros? ")
    leia(litros)

    escolha(combustivel) {
      caso "A":
      tipo = "alcool"
      valor = 3.79
      total = valor * litros
      se(litros <= 25){
        desconto = total * 0.02
      }senao{
        desconto = total * 0.04
      }
      pare
      caso "G":
      tipo = "gasolina"
      valor = 6.59
      total = valor * litros
      se(litros <= 25) {
        desconto = total * 0.3
      }senao{
        desconto = total * 0.05
      }
      pare
    }

    escreva("\nCombustível: ", tipo)
    escreva("\nValor: ", total)
  }
}
