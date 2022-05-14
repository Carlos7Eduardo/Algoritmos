//1-Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE
//#include <iostream>
//#include <stdio.h>
//int main(){
//soma=0;
//int numero,soma;
//for(int i=0;i<10;i++){
//printf("Soma dos numeros ate 10 usando for\n");
//scanf("%d%*c", &numero);
//soma=numero+soma;
//}
//printf("A soma e: %d", soma);
//}
//#include <iostream>
//#include <stdio.h>
//int main(){
//int numero, soma;
//soma=0;
//int i=0;
//while(i<10){
//    printf("Digite o numero %d\n", i+1);
//    scanf("%d%*c", &numero);
//    soma=numero+soma;
//    i++;
//}
//printf("A soma e:%d", soma);
//}
//#include <iostream>
//#include <stdio.h>
//int main(){
//int numero, soma;
//soma=0;
//int i=0;
//do{
//    printf("Digite o numero %d\n", i+1);
//    scanf("%d%*c", &numero);
//    soma=numero+soma;
//    i++;
//}while (i<10);{
//printf("A soma e:%d", soma);
//}
//}

//2 Efetue um programa que mostre todos os números inteiros ímpares situados na faixa de 1000 a 1500. Esse algoritmo deve ser feito duas vezes uma usando o FOR,WHILE;
//#include <stdio.h>
//int main(){
//printf("Numero impares de 1000 a 1500\n");
//for(int i=1000; i<1500; i++){
//    if(i%2!=0){
//        printf("Numero impar:%d\n", i);
//    }
//}
//}
//#include <stdio.h>
//int main(){
//int i=1000;
//while(i<1500){
//    if(i%2!=0){
//        printf("Numero impar:%d\n", i);
//    }
//    i++;
//}
//}

//3Efetue um programa que mostre todos os números inteiros ímpares situados numa  faixa de dois números digitados pelo usuário. Esse algoritmo deve ser feito duas vezes uma usando o WHILE e DO-WHILE
//#include <stdio.h>
//int main(){
//int numeroInicial, numeroFinal;
//int i=numeroInicial;
//printf("Digite o numero inicial:\n");
//scanf("%d%*c", &numeroInicial);
//printf("Digite o numero final\n");
//scanf("%d%*c", &numeroFinal);
//
//while(i<numeroFinal){
//    if(i%2!=0){
//        printf("Numero impar:%d\n", i);
//    }
//    i++;
//}
//}
#include <stdio.h>
int main(){
int numeroInical, numeroFinal;
int i=numeroInical;

do{
printf("Digite o numero inicial:\n");
scanf("%d%*c", &numeroInicial);
printf("Digite o numero final\n");
scanf("%d%*c", &numeroFinal);
i++;
}while(i<numeroFinal){
if(i%2!=0){
    printf("Numero impar:%d\n", i);
}
}
}
