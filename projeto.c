#include <stdio.h>

int soma(int a, int b)
{
	int soma_num = a + b;
	return soma_num;
}

int subtracao(int a, int b)
{
	int sub = a - b;
	return sub;
}

int multiplicacao(int a, int b)
{
	int mult = a * b;
	return mult;
}

int divisao(int a, int b)
{
	int div = a / b;
	return div;
	
}
int main()
{
	printf ("A soma dos dois numeros e: %d\n",soma(5,5));
	printf ("A subtracao dos dois numeros e: %d\n",subtracao(5,2));
	printf("A multiplicacao dos numeros e: %d\n",multiplicacao(10,5));
	printf("A divisao dos numeros e: %d\n",divisao(10,5));
	return 0;
}
