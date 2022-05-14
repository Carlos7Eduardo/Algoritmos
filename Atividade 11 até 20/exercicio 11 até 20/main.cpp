//11
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//
//int num;
//
//printf("Digite o Numero: ");
//scanf("%d%*c", &num);
//int quad = pow(num, 2);
//int cube = pow(num, 3);
//float r2 = sqrt(num);
//float r3 = cbrt(num);
//
//printf("O numero %d ao quadrado e: %d\n", num, quad);
//printf("O numero %d ao cubo e: %d\n", num, cube);
//printf("A raiz quadrada do numero %d e: %.2f\n", num, r2);
//printf("A raiz cubica do numero %d e: %.2f\n", num, r3);
//return 0;
//}

//12
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//int num1, num2;
//
//printf("Digite um numero: ");
//scanf("%d%*c", &num1);
//printf("Digite um numero: ");
//scanf("%d%*c", &num2);
//
//int resultado = pow(num1, num2);
//printf("Os numeros %d elevado ao numero %d e igual a: %d\n", num1, num2, resultado);
//return 0;
//}



//13
// int main(){
// float milhas, pes, polegadas, jardas;
//
// printf("Digite pes:");
// scanf("%f%*c", &pes);
//
//
// polegadas = pes * 12;
// jardas = pes / 3;
// milhas = jardas / 1760;
//
// printf("A) %.1f\n", polegadas);
// printf("B) %.1f\n", jardas);
// printf("C) %.1f\n", milhas);
//return 0;
// }

//14
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//
//int anoNascimento, anoAtual, idade, idadeFuturo;
//printf("Digite o ano do nascimento: ");
//scanf("%d%*c" , &anoNascimento);
//printf("Digite o ano Atual: ");
//scanf("%d%*c", &anoAtual);
//
//idade = anoAtual - anoNascimento;
//idadeFuturo = 2050 - anoNascimento;
//printf("Sua Idade e: %d\n.", idade);
//printf("Voce Tera %d Anos em 2050.\n", idadeFuturo);
//return 0;
//
//}

//15
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//
//float precoFabrica, perceLucro, percImposto, lucroDistribuidor, imposto, precoFinal;
//printf("Digite o preco de Fabrica do Veiculo:$ ");
//scanf("%f%*c", &precoFabrica);
//printf("Digite o Percentual do Lucro do Distribuidor: ");
//scanf("%f%*c", &perceLucro);
//printf("Digite o Percentual do Imposto: ");
//scanf("%f%*c", &percImposto);
//
//lucroDistribuidor = precoFabrica * perceLucro / 100;
//imposto = precoFabrica * percImposto / 100;
//precoFinal = precoFabrica + lucroDistribuidor + imposto;
//printf("O Lucro do Distribuidor Sobre um Veiculo no Valor de $%.2f Sera de $%2.f\n",precoFabrica, lucroDistribuidor);
//printf("O Valor do Imposto Sera de $%.2f \n", imposto);
//printf(" O Preco Final do Veiculo Sera de $%.2f\n", precoFinal);
//return 0;
//
//}

//16

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//float salarioMinimo, horasTrabalhadas, valorHora, salarioBruto, imposto, salarioAreceber;
//
//printf("Digite o Salario Minimo: $");
//scanf("%f%*c", &salarioMinimo);
//printf("Digite o Total de Horas Trabalhadas: ");
//scanf("%f%*c", &horasTrabalhadas);
//
//valorHora = salarioMinimo / 2;
//salarioBruto = horasTrabalhadas * valorHora;
//imposto = salarioBruto * 3 / 100;
//salarioAreceber = salarioBruto - imposto;
//printf("Salario a Receber %2.f\n", salarioAreceber);
//return 0;
//
//}

////17
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//float salario, cheque1, cheque2, cpmf1, cpmf2;
//
//printf("Valor Salario Depositado: $");
//scanf("%f%*c", &salario);
//printf("Cheque Descontado: $");
//scanf("%f%*c", &cheque1);
//printf("Cheque Descontado: $");
//scanf("Cheque Descontado: $");
//scanf("%f%*c", &cheque2);
//cpmf1 = cheque1 * 0,38 / 100;
//cpmf2 = cheque2 * 0,38 / 100;
//salario = salario - (cheque1 + cpmf1) - (cheque2 + cpmf2);
//
//printf("O Salario Bancario Atual e de: $%2.f\n", salario);
//return 0;
//}

//18
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//float pesoRacao, racaoDiaria, gastoRacao, quantidadeRestante;
//  printf("Digite o Peso do Saco de Racao: Kg");
//  scanf("%f%*c", &pesoRacao);
//  printf("Digite a Quantidade de Racao Diaria em Gramas: ");
//  scanf("%f%*c", &racaoDiaria);
//
//  pesoRacao *= 1000;
//  gastoRacao = racaoDiaria * 5;
//  quantidadeRestante = (pesoRacao - gastoRacao) / 1000;
//  printf("A Quantidade de Racao estante apos 5 Dias e de: %.1fKg\n", quantidadeRestante);
//  return 0;
//}

////19
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main(){
//float alturaDegrau, alturaObjetivo, quantidadeDegraus;
//printf("Digite a Altura em Metro do Degrau da Escada: ");
//scanf("%f%*c", &alturaDegrau);
//printf("Digite a Altura que Voce Deseja Alcancar: ");
//scanf("%f%*c", &alturaObjetivo);
//
//quantidadeDegraus = alturaObjetivo / alturaDegrau;
//printf("Voce Precisa-ra Subir %.0f Metros de Altura\n", quantidadeDegraus, alturaObjetivo);
//return 0;
//}

//20
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main(){
//float anguloEscada, altura, radiano, escada;
//float pi = 3.14;
//printf("Digite a Media do Angulo Formado Pela Escada na Parece: ");
//scanf("%f%*c", &anguloEscada);
//printf("Digite a Altura Alcancada Pela Escada: ");
//scanf("%f%*c", &altura);
//
//radiano = anguloEscada * pi / 100;
//escada = altura / radiano;
//printf("A Escada Tem: %.1f Metros de Comprimento. \n", escada);
//return 0;
//
//}
