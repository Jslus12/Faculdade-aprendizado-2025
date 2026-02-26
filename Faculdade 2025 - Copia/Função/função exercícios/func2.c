#include <stdio.h>
#define POS 10

int lernumerosmassa(int v[]){
    printf("Digite 10 numeros inteiros positivos:\n");
    for(int i = 0; i < POS; i++)
        scanf("%d", &v[i]);
    return 0;
}

int operacaomassa(int v1[], int v2[]){
    for(int i = 0; i < POS; i++)
        if (i % 2 == 0){
            v2[i] = v1[i] * 3;
        }
        else{
            v2[i] = v1[i] / 2;
        }

    return 0;

}

int resultado(int v1[], int v2[]){
    printf("\nVetor 1: ");
        for(int i = 0; i < POS; i++)
            printf("%d ", v1[i]);

    printf("\nVetor 2: ");
        for(int i = 0; i < POS; i++)
            printf("%d ", v2[i]);

    printf("\n");
    return 0;


}

int main(){
    int v1[POS], v2[POS];
     lernumerosmassa(v1);
        operacaomassa(v1, v2);
            resultado(v1, v2);
                    return 0;
}