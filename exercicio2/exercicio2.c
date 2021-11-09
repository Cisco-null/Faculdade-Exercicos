#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int v(float raio){
    return (4.0/3.0) * 3.14 * pow(raio, 3);
}

int main(){
    float raio, volume;
    printf("Escreva o valor de raio: \n");
    scanf("%f", &raio);

    volume = (4.0/3.0) * 3.14 * pow(raio, 3);

    printf("O volume e: %.2f \n", volume);

    system("pause");
    return 0;

}