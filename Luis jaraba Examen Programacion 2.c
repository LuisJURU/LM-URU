#include <stdio.h>
#include <math.h>

float a, b, c, X1, X2; //Caso 1
float r=0, pi=3.14;//Caso 2
float Xo, Vot, t, a;//Caso 3
int opcion;

//CASO 1
void Valor_abc()
{
	printf("Ingrese el Valor de A: ");
	scanf("%f", &a);
	printf("\nIngrese el Valor de B: ");
	scanf("%f", &b);
	printf("\nIngrese el Valor de C: ");
	scanf("%f", &c);
}

float FuncPol_X1(float a, float b, float c)
{
	float R1 = 0;

	R1 = X1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	return R1;
}

float FuncPol_X2(float a, float b, float c)
{
	float R2 = 0;

	R2 = X2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	return R2;
}

//CASO 2

void Valor_Esfera ()
{
	printf("Ingrese el Valor del Radio: ");
	scanf("%f", &r);
}

float FuncEsfera (float r)
{
	float Vol = 0;

	if(r > 0)
	{
		Vol = ((1.33)*(pi*pow(r,3)));
	}
	else
	{
		printf("Ingrese un numero Valido, por favor intentalo nuevamente");

	}
	return Vol;
}

//CASO 3

void Valor_MRUV ()
{
	printf("Ingrese el Valor de Xo: ");
	scanf("%f", &Xo);

	printf("\nIngrese el Valor de Vot: ");
	scanf("%f", &Vot);

	printf("\nIngrese el Valor de t: ");
	scanf("%f", &t);

	printf("\nIngrese el Valor de a: ");
	scanf("%f", &a);
}

float FuncMRUV(float Xo, float Vot, float t, float a)
{
	float Xf = 0;

	Xf = (Xo + Vot + (a*(pow(t,2))/2));

	return Xf;
}

int main()
{
	printf("\n- Menu De Operaciones - \n");
	printf("\n1. Calculas las Raices de Polinomio de 2do Grado");
	printf("\n2. Calcular el Volumen de una Esfera");
	printf("\n3. Calcular El MRUV de un automovil\n");
	printf("\n - Ingrese un numero mayor a 3 para finalizar -\n");
	scanf("%i", &opcion);
		switch(opcion)
		{
			case 1:
			    system("CLS");
				Valor_abc();

				printf("El Valor de X1 es: %.2f\n", FuncPol_X1 (a,b,c));
				printf("El Valor de X2 es: %.2f\n", FuncPol_X2 (a,b,c));
				break;

			case 2:
			    system("CLS");
				Valor_Esfera();
				printf("EL valor del Radio de la Esfera es: %.2f", FuncEsfera(r));
				break;

			case 3:
			    system("CLS");
				Valor_MRUV();
				printf("La Veolocidad Final del Vehiculo es: %.2f", FuncMRUV(Xo, Vot, t, a));
				break;


		}
	return 0;
}
