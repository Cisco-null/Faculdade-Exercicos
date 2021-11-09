#include <stdio.h>
#include <stdlib.h>

int dobro(int numero){
    return numero * 2;
}



int main(){
    int numero, dob;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    dob = dobro(numero);
    printf("o dobro e: %d \n", dob);

    system("pause");
    return 0;

}
