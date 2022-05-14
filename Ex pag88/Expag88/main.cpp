//1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main (){
//int n1, n2, n3, n4;
//int media;
//
//printf("Digite a primeira nota: ");
//scanf("%d%*c", &n1);
//printf("Digite a segunda nota: ");
//scanf("%d%*c", &n2);
//printf("Digite a terceira nota: ");
//scanf("%d%*c", &n3);
//printf("Digtie a quarta nota: ");
//scanf("%d%*c", &n4);
//
//media=(n1 + n2 + n3 + n4)/4;
//
//if(media >= 7);{
//    printf("Aluno aprovado");
//
//else(media >= 6)
//    printf("Aluno reprovado");
//}
//}

//2
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//
//#define MEDIA_REPROVADO 4
//#define MEDIA_APROVADO 7
//int main() {
//  float mediaAritimetica, notas[2] = {};
//  int i =0;
//  for (i = 0; i < 2; i++){
//    printf("Digite a nota: ");
//    scanf("%f%*c", &notas[i]);
//    mediaAritimetica += notas[i];
//  }
//  mediaAritimetica /= (i);
//  if (mediaAritimetica < MEDIA_REPROVADO){
//    printf("Média %.1f - REPROVADO\n", mediaAritimetica);
//  }
//  else if (mediaAritimetica >= MEDIA_REPROVADO && mediaAritimetica < MEDIA_APROVADO){
//    printf("Média %.1f - EXAME\n", mediaAritimetica);
//  }
//  else {
//    printf("Média %.1f - APROVADO\n", mediaAritimetica);
//  }
//  return 0;
//}

//3
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//
//int n1, n2;
//
//printf("Informe o primeiro numero:");
//
//scanf("%d%*c", &n1);
//
//printf("Informe o segundo numero:");
//
//scanf("%d%*c", &n2);
//
//if(n1<n2){
//
//printf("Entre %d e %d o menor e: %d", n1, n2, n1);
//
//}else if (n2<n1){
//
//printf("Entre %d e %d o menor e: %d", n1, n2, n2);
//
//}else{
//
//printf("Os números são iguais.");
//
//}
//
//return 0;
//
//}

//4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float n1, n2, n3;
printf("Digite o primeiro numero: ");
scanf("%f%*c", &n1);
printf("Digite o segundo numero: ");
scanf("%f%*c", &n2);
printf("Digite o terceiro numero: ");
scanf("%f%*c", &n3);

if ((n1>=n2) && (n1>=n3)){
    printf(" O numero maior e:", &n1);
}else
if((n2>=n1) && (n2>=n3)){
    printf("O numero maior e:", &n2);
}else
if((n3>=n1) && (n3>=n2)){
    printf("O numero maior e:" ,&n3);
}
}
