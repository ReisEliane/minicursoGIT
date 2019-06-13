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
int main()
{
	printf ("A soma dos dois numeros e: %d\n",soma(5,5));
	printf ("A subtracao dos dois numeros e: %d\n",subtracao(5,2));
	return 0;
}
