programa {
  funcao inicio() {
    //Exibindo variáveis
    cadeia nome, sexo, estadoCivil
    inteiro anosDeCasada
    
    //solicitando dados do usuário
    escreva("Digite seu Nome: ")
    leia(nome)

    escreva("Digite o seu cstado cívil (S/C): ")
    leia(estadoCivil)

    escreva("Digite o seu sexo com (M/F): ")
    leia(sexo)
      
    se (sexo == "F" e estadoCivil == "casada") {
      escreva("Digite Quantos anos de casada: ")
      leia(anosDeCasada)
    }

    escreva("=== Exibindo resultado ===")
    escreva("\nNome: ", nome)
    escreva("\nestado civil: ", estadoCivil)
    escreva("\nSexo: ", sexo)

    se (sexo == "F" e estadoCivil == "casada") {
      escreva("\nAnos de casada: ", anosDeCasada)
    }
  }
}
