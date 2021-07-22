#include <iostream>
#include <stdio.h>
#include <math.h>

// BY BLADIMIR LOPEZ

int main(int argc, char** argv) {
	int iteraciones,i=1; float p0,tol,p,fPo,deri_fPo;
	printf("      ---------------------------------------------------------\n");
	printf("                               BIENVENIDO\n");
	printf("                            METODO DE NEWTON\n");
	printf("      ---------------------------------------------------------\n\n");
	printf("      >> Funcion: f(x)= x^3 + 4x^2 - 10\n");
    printf("      >> Funcion derivada: f'(x) = 3x^2 + 8x\n\n");
    printf("      Ingrese Tolerancia: ");scanf("%f",&tol);
	printf("      Ingrese P0 (valor semilla): ");scanf("%f",&p0);
	printf("      Ingrese numero de iteraciones: ");scanf("%d",&iteraciones);
    printf("\n      i      Po        f(Po)        f'(Po)        p\n");
    
    while(i <= iteraciones){
    	fPo = pow(p0,3)+4*pow(p0,2)-10;
    	deri_fPo = 3*pow(p0,2)+8*p0;
    	p = p0 - fPo/deri_fPo;
    	printf("      %d   %f   %f   %f   %f\n",i,p0,fPo,deri_fPo,p);
    	if(fabs(p-p0)<tol){
    		printf("\n      EXITO EN LA %d ITERACION, P = %f \n\n",i,p);
			system("pause");
			exit(-1);
		}
		i++;
		p0 = p;
	}
	printf("El metodo fallo despues de %d iteraciones",i);
	return 0;
}
