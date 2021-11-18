#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numeroA(){
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    return numero;
}

int numeroB(){
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    return numero;
}

int numeroC(){
    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    return numero;
}

int bask(int numeroA, int numeroB, int numeroC, float *x1, float *x2){


    int del = (numeroB*numeroB) - (4*numeroA*numeroC);
    printf("delta = %d\n",del);

    if (del < 0){
        printf("Nao e uma equacao de segundo grau! \n");
        return 0;
    }

    // raiz positiva
    *x1 = (-numeroB+sqrt(del))/(2*numeroA);
    // raiz negativa
    *x2 = (-numeroB-sqrt(del))/(2*numeroA);
    return 1;
}


int main(){
    int numero1, numero2, numero3;

    float raiz1,raiz2;

    float* x1=&raiz1; //& => ponteiro 
    float* x2=&raiz2;

    numero1=numeroA();
    numero2=numeroB();
    numero3=numeroC();


    int res = bask(numero1,numero2,numero3,x1,x2);

    if(res == 1){
        printf("X1 = %f\n",raiz1);
        printf("X2 = %f\n",raiz2);
    }
    
    system("pause");
    return 0;

}