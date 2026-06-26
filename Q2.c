#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    
    while(T--){
        int n;
        scanf("%d",&n);
        char R[1001];//não é hoje que vou esquecer o \0 maldito >:(
        char B[1001];
        scanf("%s",R);
        scanf("%s",B);
        int red=0;
        int blue=0;
        for(int i=0; i<n; i++){
            if(R[i]>B[i]){
                red++;
            } else if(B[i]>R[i]){
                blue++;
            }
        }
        if(red>blue){
            printf("RED\n");
        } else if(blue>red){
            printf("BLUE\n");
        } else {
            printf("EQUAL\n");
        }
    }
    return 0;
}
