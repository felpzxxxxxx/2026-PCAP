/*
* Disciplina : 2026-PCAP
* Projeto: Fliperama em C
* Autor : Felipe Gravina
* LIAC : menu com validação 

*/
#include <stdio.h> 

#define DONO "FELIPE"

void linha() {
    printf("==============================================================\n");
}

void titulo(char texto []){
    linha();
    printf("   %s\n", texto);
    linha();
}

int ler_numero(char mensagem[], int minimo, int maximo) {
    int numero, lidos;

    printf("    %s: ", mensagem);
    lidos = scanf("%d", &numero);
    while (lidos != 1 || numero < minimo || numero > maximo){
        if (lidos !=1){
            scanf("%*s");
        }
        printf("Opcao invalida! Tente Denovo; ");
        lidos = scanf("%d", &numero);
    }
    return numero;
}

void mostrar_menu(){ 
    linha();
    printf("    FLIPERAMA DO %s\n", DONO);
    linha();
    printf("[1] Adivinhe o numero\n");
    printf("[2] Cadastrar Jogadores\n");
    printf("[3] Listar Jogadores\n");
    printf("[0] Sair\n");
    linha();
}






int main(){
   int opcao;

   mostrar_menu();
   opcao = ler_numero("Sua escolha", 0, 3);
   while (opcao !=0 ){
    if (opcao == 1){
        printf("O jogo entrar na fase 1.\n");
    }else if (opcao ==2) {
        printf("O cadastro entra na fase 2.\n");
    }else{ printf("A listra entra na fase 3.\n");
    }
    mostrar_menu();
    opcao = ler_numero("Sua Escolha", 0, 3);
   }

   titulo("Ate a proxima!");
    return 0;
}