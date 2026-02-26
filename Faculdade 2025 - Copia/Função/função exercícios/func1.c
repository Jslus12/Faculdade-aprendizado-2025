#include <stdio.h>
#define POS 10

int lernumerosnormais(int n[], int t){
    for(int i = 0; i < t; i++){
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }
    return 0;
}

int numerosinvertidospaia(int n[], int t){
    printf("Valores invertidos: ");
    for(int i = t - 1; i >= 0; i--)
        printf("%d ", n[i]);
    return 0;
}

int main(){
    int n[POS];
    lernumerosnormais(n, POS);
    numerosinvertidospaia(n, POS);
    return 0;
}