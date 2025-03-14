#include <stdio.h>
int main(){

    int torre = 0;
    int bispo;
    int rainha = 0;
    int cavalo = 1;
    ;

        printf("Mova a torre\n");

    while(torre < 5){ // mover a torre 5 casas para a direita
        printf("Direita \n"); // imprime a direção do movimento
        torre++; // incremento para evitar o loop infinito
    }

        printf("Mova o bispo\n");

    do{ printf("escolha o número de casas de 1 a 5 para mover o bispo: \n"); // mover o bispo 'x' casas
        scanf("%d", &bispo);
        if(bispo > 5){ //se escolhido um número maior que 5 o programa retorna para o usuário escolher novamente
            printf("Você escolheu um número maior que 5. Escolha certo dessa vez: \n");
        }else { 
            printf("%d casas direita,cima\n", bispo); //imprime a direção e o total de casas que o bispo irá percorrer
        }

    }while(bispo > 5);

            printf("Mova a rainha\n");

    for(rainha = 0; rainha < 8; rainha++){ // mover a rainha 8 casas para a esquerda
            printf("Esquerda\n"); // imprime a direção do movimento
    }
    
            printf("Mova o cavalo\n");
    
    while(cavalo--){ //loop externo
        for(int i = 0; i < 2; i++){ //loop interno
            printf("Baixo\n"); // move o cavalo duas casas para baixo
        }
        printf("Esquerda\n"); // move o cavalo uma casa para a esquerda
    }
    return 0;

}