//1
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//int n1,n2,n3,n4 , soma;
//printf("digite c o valor de n1:\n");
//scanf("%d%*c",&n1);
//printf("digite c o valor de n2:\n");
//scanf("%d%*c,&n2");
//printf("digite c o valor de n3:\n");
//scanf("%d%*c,&n3");
//printf("digite c o valor de n4:\n");
//scanf("%d%*c, &n4");
//soma=n1+n2+n3+n4;
//printf("soma � %d", soma);
//}
//
//2
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//float n1,n2,n3,media;
//printf("digite uma nota: ");
//scanf("%f", &n1 );
//printf("\n digite uma nota: ");
//scanf("%f", &n2);
//printf("\n digite uma nota: ");
//scanf("%f", &n3);
//
//media =(n1+n2+n3)/3;
//
//printf("\n A media das notas � %.1f", media);
//}
//


//3

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//  float n1,n2,n3, media;
//  float p1,p2,p3;
//  printf("Digite a nota 01\n");
//  scanf("%f%*c",&n1);
//  printf("Digite a nota 02\n");
//  scanf("%f%*c",&n2);
//  printf("Digite a nota 03\n");
//  scanf("%f%*c",&n3);
//  printf("Digite a Peso 01\n");
//  scanf("%f%*c",&p1);
//  printf("Digite a Peso 02\n");
//  scanf("%f%*c",&p2);
//  printf("Digite a Peso 03\n");
//  scanf("%f%*c",&p3);
//  media=(n1*p1+n2*p2+n3*p3) / (p1+p2+p3);
//  printf("A m�dia poderada �:%.2f\n",media);
//}
//
//4
//
//#include <stdio.h>
//
//int main() {
//
//  float salario, aumento, novoSalario;
//
//
//  printf("Digite o valor do seu salario: $");
//  scanf("%f%*c", &salario);
//
//
//  aumento = salario * 25/100;
//  novoSalario = salario + aumento;
//
//  printf("Seu novo salario e: $%.2f\n", novoSalario);
//  return 0;
//}

//////5
//#include <stdio.h>
//
//int main() {
//float salario,novoSalario;
//int percentualAumento;
//
//printf("Salario: $");
//scanf("%f%*c", &salario);
//printf("Percentual de Aumento: ");
//scanf("%d%*c", &percentualAumento);
//
//novoSalario = salario*percentualAumento/100 + salario;
//
//printf("Novo Salario %.2f\n", novoSalario);
//return 0;
//
//}

//
//6

//#include <stdio.h>
//int main(){
//float salarioBase, salarioAreceber;
//
//printf("Digite o Salario Base; $");
//scanf("%f%*c", &salarioBase);
//
//float gratificacao = salarioBase * 5/100;
//float imposto = salarioBase - (salarioBase - salarioBase * 7/100);
//salarioAreceber = salarioBase + gratificacao - imposto;
//
//printf("Salario a Receber: $%2.f \n", salarioAreceber);
//return 0;
//
//}

//7
//#include <stdio.h>
//int main() {
//  float salarioBase, salarioAreceber;
//
//  printf("Informe o salario base do colaborador: $");
//  scanf("%f%*c", &salarioBase);
//
//  float imposto = salarioBase - (salarioBase - (salarioBase*10/100));
//  salarioAreceber = salarioBase + 50 - imposto;
//  printf("Salario a receber: $%.2f \n", salarioAreceber);
//  return 0;
//}

//8

//    #include <stdio.h>
//
//    int main() {
//      float deposito;
//      int taxaJuros;
//
//      printf("Valor do deposito: $");
//      scanf("%f%*c", &deposito);
//      printf("Taxa de juros: ");
//      scanf("%d%*c", &taxaJuros);
//
//      float valorRendimento = deposito - (deposito - (deposito*taxaJuros/100));
//      float valorTotal = deposito + valorRendimento;
//
//      printf("O valor do rendimento � $%.2f reais e o total do valor depositado ap�s o rendimento ficou $%.2f reais\n", valorRendimento, valorTotal);
//      return 0;
//    }

//9

//#include <stdio.h>
//
//int main() {
//  float base = 10;
//  float altura = 20;
//  float area = (base * altura) / 2;
//  printf("A area de um tri�ngulo com base de %.1fm e altura de %.1f � igual a: %.1f\n", base, altura, area);
//return 0;
//}

//10
//#include <stdio.h>
//
//int main() {
//  int raio = 10;
//  float pi = 3.14;
//
//  float areaCirculo = pi *(raio*raio);
//  printf("O a area do circulo � %.1f \n", areaCirculo);
//return 0;
//}


