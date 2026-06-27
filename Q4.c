#include <stdio.h>

int main() {
    int vetor[4];
    int maior = 0;
    int maiori = 0;
    //finalmente um fácil
    for(int i=0; i<4; i++) {
        scanf("%d",&vetor[i]);
        if(vetor[i]>maior) {
            maior=vetor[i];
            maiori=i;
        }
    }
    for(int i=0; i<4; i++) {
        if(i!=maiori) {
            printf("%d ",maior-vetor[i]);
        }
    }
    return 0;
}
