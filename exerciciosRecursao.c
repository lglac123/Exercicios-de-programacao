#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float SerieHarmonicaRec(int n){
    if(n==0){
        return 1;
    }
    float soma=1/n;
    return soma+SerieHarmonicaRec(n--);
}

int soma(int*v,int n){
    int soma=*v;
    if(n==0){
        return soma;
    }
    return soma+soma(v++,n--);
}

int somaPar(int*v,int n){
    if(*v%2==0){
        int soma=*v;
    }
    if(n==0){
        return soma;
    }
    return soma+soma(v++,n--);
}

int somaDigitos(int n){
    if(n%10==n){
        return n;
    }
    return n+somaDigitos(n/10);
}

int mdc(int a,int b){
    if(a>=b && b>0){
        if(a%b==0){
            return b;
        }
        return mdc(b,a%b);
    }
}

int main(){

    return 0;
}