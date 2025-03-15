#include <stdio.h>
void moverTorre (int casas){ //recursividade usada para mover a torre
    if(casas > 0){
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){ //recursividade usada para mover o bispo
    if(casas > 0){
    for(int i = 5; i <= casas; i++){ //uso de loops aninhados
        for(int j = 0; j < i; j++){
            printf("Direita,cima \n");
            
        }
          
    }

    moverBispo(casas - 1);
}
}
void moverRainha(int casas){ //recursividade usada para mover a rainha
    if(casas > -3){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){
    int casas = 5; // variavel usada para determinar a referencia da quantidade usada nas recursividades 
    

    printf("MOVIMENTO TORRE: \n");
    moverTorre(casas); // codigo usado para chamar a recursividade da torre
    printf("\n");

    
    printf("MOVIMENTO BISPO: \n"); // codigo usado para chamar a recursividade do bispo
    moverBispo(casas);
    printf("\n");


    printf("MOVIMENTO RAINHA: \n"); // codigo usado para chamar a recursividade da rainha
    moverRainha(casas);
    printf("\n");


    printf("MOVIMENTO CAVALO: \n");

    for(int i = 1; i < 2 ; i++){ // uso de loops aninhados para determinar o movimento do cavalo
        for(int j = 0; j <= i; j++){
            printf("Cima\n"); 
        }
            printf("Direita");
    }

    return 0;
}