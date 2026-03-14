#include <stdio.h>
#include <math.h>

int main(void) {

    float peso, altura;

    printf("Bem-Vindo a calculadora de IMC!");
    
    printf("\nDigite seu peso: \n");
    scanf("%f", &peso);

    printf("Agora digite sua altura: \n");
    scanf("%f", &altura);

    float imc = peso / pow(altura, 2);

    printf("Seu imc e: %.2f", imc);

    if (imc < 17) {
        printf("\nVoce esta muito abaixo do peso");
    }  
    else if(imc >= 17 && imc < 18.5) {
        printf("\nVoce esta abaixo do peso");
    }
    else if(imc >= 18.5 && imc < 25.5) {
        printf("\nVoce esta no peso ideal");
    }
    else if(imc >= 25.5 && imc < 30) {
        printf("\nVoce esta sobrepeso");
    }
    else if(imc >= 30 && imc < 35) {
        printf("\nVoce esta com obesidade");
    }
    else if(imc >= 35 && imc < 40) {
        printf("\nvoce esta com obesidade severa");
    }
    else if(imc < 40) {
        printf("\nvoce esta com obesidade morbida");
    }

}