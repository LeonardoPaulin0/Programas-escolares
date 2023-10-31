#include <iostream>
#include <math.h>

using namespace std;


float delta (float a, float b, float c){
    return pow(b,2)-4*a*c;
}

float x1 (float a, float b, float c){
        return (-b+sqrt(delta(a,b,c))/(2*a));
}
float x2 (float a, float b, float c){
        return (-b-sqrt(delta(a,b,c))/(2*a));
}


int raizes (float a, float b, float c, float *x1, float *x2)
{
    if (delta(a,b,c)<0)
        return 1;
    else{
        *x1=(-b+sqrt(delta(a,b,c))/(2*a));
        *x2=(-b-sqrt(delta(a,b,c))/(2*a));
        return 0;
    }
}

int main()
{
    float A, B, C, X1, X2;
	    int flag;
	    printf("\nDigite o valor de A: ");
	    scanf("%f",&A);
	    printf("\nDigite o valor de B: ");
	    scanf("%f",&B);
	    printf("\nDigite o valor de C: ");
	    scanf("%f",&C);

    printf("\nO valor de delta = %f\n",delta(A,B,C));
    
    if (delta(A,B,C)<0)
        printf("\n\nNao existem raizes reais.\n\n");
    else{
            printf("\nX1    = %f\n",x1(A,B,C));
            printf("\nX2    = %f\n",x2(A,B,C));
    }

     printf("\n\nx1 e x2 em uma função ultilizando ponteiro\n\n");
     
     flag=raizes(A,B,C,&X1,&X2);
     
     if (flag==1)
        printf("\n\nNao existem raizes reais\n\n");
     else{
        printf("\nX1    = %f\n",X1);
        printf("\nX2    = %f\n",X2);
    }

    return 0;
}



