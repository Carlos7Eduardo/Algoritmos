//1
//#include <stdio.h>
//#include <math.h>
//int main(){
//
//float nl, as, ef, media;
//printf("Nota Trabalho no laboratorio: ");
//scanf("%f%*c", &nl);
//printf("Nota da Avalicao Trimestral:");
//scanf("%f%*c", &as);
//printf("Nota do Exame Final:");
//scanf("%f%*c", &ef);
//
//media=(nl * 2 + as * 3 + ef * 5) / 10;
//printf("media ponderada:", media );
//
//if((media>=8) && (media<10)){
//    printf("Obteve  conceito A");
//}
//if((media>=7) && (media<8)){
//    printf("Obteve conceito B");
//}
//if((media>=6) && (media<7)){
//    printf("Obteve conceito C");
//}
//if((media>=5) && (media<6)){
//    printf("Obteve conceito D");
//}
//if((media>=0) && (media<5)){
//    printf("Obteve conceito E");
//}
//}

//2
//#include <stdio.h>
//#include <math.h>
//int main(){
//float nota1, nota2, nota3, media, nota_exame;
//
//printf("Digite a primeira nota: ");
//scanf("%f%*c", &nota1);
//printf("Digite a segunda nota: ");
//scanf("%f%*c", &nota2);
//printf("Digite a terceira nota: ");
//scanf("%f%*c", &nota3);
//media=(nota1 + nota2 + nota3) / 3;
//printf("Media Aritmetica:", media);
//
//if((media>=0) && (media<3)){
//    printf("reprovado");
//}
//if((media>=3) && (media<7)){
//nota_exame= 12 - media;
//printf("Deve tirar a nota: %.1f\n para ser aprovado", nota_exame);
//}
//if((media>=7) && (media<7)){
//    printf("Reprovado");
//}
//}

//3
//#include <stdio.h>
//#include <math.h>
//int main(){
//float num1, num2;
//
//printf("Digite o primeiro numero: ");
//scanf("%f%*c", &num1);
//printf("Digite o segundo numero: ");
//scanf("%f%*c", &num2);
//
//if(num1 > num2){
//    printf("O maior numero e: %f", num1);
//}
//if(num2 > num1){
//    printf("O maior numero e: %f", num2);
//}
//if(num1 == num2){
//    printf("Os Numeros sao iguais:");
//}
//}

//4
//#include <stdio.h>
//#include <math.h>
//int main(){
//float num1, num2, num3;
//printf("Digite o primeino numero: ");
//scanf("%f%*c", &num1);
//printf("Digite o segundo numero:");
//scanf("%f%*c", &num2);
//printf("Digite o segundo numero:");
//scanf("%f%*c", &num3);
//
//if((num1 < num2) && (num1 < num3))  {
//   if(num2 < num3)
//
//
//printf("A ordem crecente e: %f - %f - %f", num1, num2, num3 );
//}
//else{
//    printf("A ordem crescente e: %f - %f - %f", num1, num2, num3);
//}
//if((num1 < num1) && (num2 < num3)){
//   printf("A ordem crescente e: %f - %f - %f", num2, num1, num3);
//}
//  else{
//    printf("A onder crescente e: %f - %f - %f", num2, num3, num1);
//  }
//if((num3 < num1) && (num3 < num2)){
//   if(num1 < num2)
//        printf("A ordem crescente e: %f - %f - %f", num3, num1, num2 );
//        }
//    else{
//    printf("A ordem crescente e: %f - %f - %f", num3, num2, num1);
//}
//}

////5
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//
//float num1, num2, num3, num4;
//printf("Digite tres numeros em ordem crescente: ");
//scanf("%f%*c", &num1);
//scanf("%f%*c", &num2);
//scanf("%f%*c", &num3);
//
//printf("Digite um numero (fora de ordem): ");
//scanf("%f%*c", &num4);
//
//if(num4 > num3) {
//    printf("A ordem decrescente e: %f - %f - %f - %f", num4, num3, num2, num1);
//}
//if((num4 > num2) && (num4 < num3)){
//    printf("A ordem decrescente e: %f - %f- %f - %f", num3, num4, num2, num1);
//}
//if((num4 > num1) && (num4 < num2)){
//
// printf("A ordem decrescente e: &f - %f - %f - %f", num3, num2, num4, num1);
//}
//if(num4 < num1){
//printf("A ordem decrescente e: &f - %f - %f - %f", num3, num2, num1, num4);
//}
//return 0;
//}

////6
////arrumar
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//int num;
//
//printf("Digite um numero: ");
//scanf("%d%*c, &num");
//
//if(num % 2 == 1){
//    printf("O numero e par");
//}
//else{
//    printf("O numero e impar");
//}
//
//return 0;
//}

//7

//#include <stdio.h>
//#include <math.h>
//int main(){
//int i;
//float a, b, c;
//printf("Digite 1, 2 ou 3 para I: ");
//scanf("%d%*c", &i);
//printf("Digite um valor para A: ");
//scanf("%f%*c", &a);
//printf("Digite um valor para B: ");
//scanf("%f%*c", &b);
//printf("Digite um valor para C:");
//scanf("%f%*c", &c);
//
//
//if(i == 1){
//  if((a < b) && (a < c))
//        if(b < c)
//        printf("Os valores em ordem crescente sao: - %f - %f - %f", a, b, c);
//  else
//    printf("Os valores em ordem crescente sao: - %f - %f - %f", c, b, a);
//}
//if(i==2){
//    if((a > b) && (a > c))
//        if(b > c)
//        printf("Os valores em ordem decrescente sao: - %f - %f - %f", a, b, c);
//    else
//        printf("Os valores em ordem decrescente sao: - %f - %f - %f", a, c, b);
//    if((b > a) && (b > c))
//        if(a > c)
//        printf("Os valores em ordem decrescente sao: - %f - %f - %f", b, a, c);
//    else
//        printf("Os valores em ordem decrescente sao: - %f - %f - %f", c, b, a);
//}
//if( i ==3) {
//    if(( a > b) && (a > c))
//        printf("A ordem desejada e: - %f - %f - %f", b , a, c);
//    if((b > a) && (b > c))
//        printf("A ordem desejada e: - %f - %f - %f",a, b, c);
//    if((c > a) && (c > b))
//    printf("A ordem desejada e: - %f - %f - %f", a, c, b);
//
//}
//
//}

//8
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <math.h>
//
//int main() {
//
//  int i = 0, opcaoUsuario, numeros[2] = {}, soma, raizQuadrada;
//  printf("Menu de opcoes:\n");
//  while (i < 2){
//    if (i == 0) {
//      printf("%d. Somar dois numeros:\n", (i+1));
//    }
//    else if (i == 1) {
//      printf("%d. Raiz quadrada de um numero:\n", (i+1));
//    }
//    i++;
//  }
//  i = 0;
//  printf("Digite a opção desejada: ");
//  scanf("%d%*c", &opcaoUsuario);
//  if (opcaoUsuario == 1) {
//    printf("digite os dois números para obter a sua soma:\n");
//    while (i < 2){
//      printf("%dº número: ", (i+1));
//      scanf("%d%*c", &numeros[i]);
//      i++;
//    }
//    soma = numeros[0] + numeros[1];
//    printf("A soma de %d + %d é: %d", numeros[0], numeros[1], soma);
//  }
//  else if (opcaoUsuario == 2) {
//    printf("Digite o número para obter sua raiz quadrada: ");
//    scanf("%d%*c", &numeros[0]);
//    raizQuadrada = sqrt(numeros[0]);
//    printf("A raiz quadrada de %d é: %d", numeros[0], raizQuadrada);
//  }
//  return 0;
//}

//9
//#include <stdio.h>
//#include <time.h>
//
//int main() {
//  struct tm *data_hora_atual;
//  time_t segundos;
//  time(&segundos);
//  data_hora_atual = localtime(&segundos);
//  int hora = data_hora_atual->tm_hour;
//  int minuto = data_hora_atual->tm_min;
//  int segundo = data_hora_atual->tm_sec;
//  int dia = data_hora_atual->tm_mday;
//  int diaAno = data_hora_atual->tm_yday;
//  int diaSemana = data_hora_atual->tm_wday;
//  int mes = data_hora_atual->tm_mon+1;
//  int ano = data_hora_atual->tm_year+1900;
//
//  printf("\nDia: %d\n", dia);
//  printf("\nMes: %d\n", mes);
//  printf("\nAno: %d\n\n", ano);
//  printf("\nDia do ano: %d\n", diaAno);
//  printf("\nDia da semana: %d\n\n", diaSemana);
//
//  printf("\nHora: %d:", hora);
//  printf("%d:", minuto);
//  printf("%d\n",segundo);
//
//  printf("\nData: %d / ", dia);
//  switch (mes)
//  {
//  case 1:
//    printf("Janeiro");
//    break;
//  case 2:
//    printf("Fevereiro");
//    break;
//  case 3:
//    printf("Março");
//    break;
//  case 4:
//    printf("Abril");
//    break;
//  case 5:
//    printf("Maio");
//    break;
//  case 6:
//    printf("Junho");
//    break;
//  case 7:
//    printf("Julho");
//    break;
//  case 8:
//    printf("Agosto");
//    break;
//  case 9:
//    printf("Setembro");
//    break;
//  case 10:
//    printf("Outubro");
//    break;
//  case 11:
//    printf("Novembro");
//    break;
//  default:
//    printf("Dezembro");
//    break;
//  }
//  printf(" / %d\n\n", ano);
//  return 0;
//}

//10
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//int main() {
//  UINT CPAGE_UTF8 = 65001;
//  SetConsoleOutputCP(CPAGE_UTF8);
//
//  int dia1, mes1, ano1, dia2, mes2, ano2, somaData1, somaData2;
//  printf("Digite respectivamente o dia, mês e ano de uma data da sua escolha: ");
//  scanf("%d%*c %d%*c %d%*c", &dia1, &mes1, &ano1);
//  printf("Digite respectivamente o dia, mês e ano de outra data da sua escolha: ");
//  scanf("%d%*c %d%*c %d%*c", &dia2, &mes2, &ano2);
//  somaData1 = dia1 + mes1 + ano1;
//  somaData2 = dia2, mes2, ano2;
//
//  if (somaData1 > somaData2) {
//    printf("A maior data digitada foi %d / %d / %d", dia1, mes1, ano1);
//  }
//  else {
//    printf("A maior data digitada foi %d / %d / %d", dia2, mes2, ano2);
//  }
//  return 0;
//}
