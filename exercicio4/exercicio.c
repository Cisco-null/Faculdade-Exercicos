#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float raio(){
    float raio;
    printf("Digite um valor para o raio: \n");
    scanf("%f", &raio);
    return(raio);
}

float calculo(float raio){
    float  area;
   area=4.0*3.1415*pow(raio,2);

    return(area);
}

void imprimeCalculo(float calculo){
    printf("o valor do calculo  e: %.2f \n", calculo);
}


int main(){
    float area, r;

    r = raio();
    area = calculo(r);
    imprimeCalculo(area);

    system("pause");
    return(0);

}