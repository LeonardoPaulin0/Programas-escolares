#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

  float delta(float A, float B, float C){
  	return (B*B)-4*A*C;
  }
 
void x1(float(*delta)(float), float A, float B, float C){
    float resul;
    
	resul = -B+ sqrt(delta(A,B,C))/(2*A);
 
 printf("O valor de X1 eh %.2f",resul);
}





int main(){
	int A=3, B=4, C=1;
	
	printf("O valor de delta eh %.2f\n",delta(A,B,C));
	xi(delta,A,B,C);
	
	
	
	return 0;
}
