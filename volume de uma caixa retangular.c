#include<stdio.h>
#include<locale.h>

float volumer(float n1, float n2, float n3){
    float volume = n1 * n2 * n3;
    return(volume);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float c, l, a, v;
    printf("Informe o comprimento: ");
    scanf("%f", &c);
    printf("Informe a largura: ");
    scanf("%f", &l);
    printf("Informe a altura: ");
    scanf("%f", &a);
    v = volumer(c, l, a);
    printf("O volume do retangulo é: %.2f", v);
}