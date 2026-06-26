#include <stdio.h>
#define NUM 998244353 //eu lembrei só agora que posso fazer isso aaaa mas tanto faz, da na mesma
int main(){
    long long int A,B,C;
    scanf("%lld %lld %lld",&A,&B,&C);
    long long int fechadaA = (A*(A+1)/2)%998244353;
    long long int fechadaB = (B*(B+1)/2)%998244353;
    long long int fechadaC = (C*(C+1)/2)%998244353;
    printf("%lld",(((fechadaA*fechadaB)%NUM)*fechadaC)%NUM);
    return 0;
}
