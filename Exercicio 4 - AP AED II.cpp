// Exercicio 4 - )  Crie um sistema de caixa eletro^nico, utilizando menus (switch) e outros recursos, que realizem operac�o~es financeiras a partir de func�o~es especificamente projetadas para tal.
//Lembre-se de que o caixa eletro^nico e� um programa que roda como repetic�a~o conti�nua, ate� que o usua�rio decida encerrar as operac�o~es. Opera��es: Dep�sito, Saque e Saldo.  

#include <stdio.h>

//Logica do programa : 

float saldo = 0.0; // Vari�vel global para armazenar o saldo do cliente

void deposito(float valor) { //Logica do deposito = saldo=+ valor --> Adicionando $ na conta
    saldo += valor;
    printf("Deposito realizado com sucesso!\n");
}

void saque(float valor) { //logica do Saque = Se o valor de saque for menor que valor de saldo, a opera��o n�o � realizada, por�m se valor de saque for menor ou igual ao de saldo a opera��o ser� realizada. 
    if (valor > saldo) {
        printf("Saldo insuficiente para realizar o saque!\n");
    } else {
        saldo -= valor;
        printf("Saque realizado com sucesso!\n");
    }
}

void exibirSaldo() {
    printf("Seu saldo atual eh: %.2f\n", saldo);
}


// Processamento do programa :

int main() {
	
    int opcao;
    float valor;
    
    do { //Aqui, o usuario escolhe a funcionalidade que deseja utilizar
        printf("Selecione uma opcao:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Saldo\n");
        printf("0 - Encerrar\n");
        scanf("\n%d", &opcao);
        
        switch (opcao) { // O que acontecer� em cada caso : 
        
            case 1: //Usu�rio ir� inserir o quanto quer depositar
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);
                deposito(valor);
                break; 
                
            case 2: // Usu�rio ir� inserir o quanto quer sacar
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                saque(valor);
                break;
                
            case 3: //Ir� mostrar quanto o usu�rio tem de saldo
                exibirSaldo();
                break;
                
            case 0: //Ir� encerar do programa
                printf("Encerrando o programa...\n");
                break;
                
            default:
                printf("Opcao invalida!\n");
                break;
        }
        
        printf("\n");
    } while (opcao != 0);
    
    return 0;
}
