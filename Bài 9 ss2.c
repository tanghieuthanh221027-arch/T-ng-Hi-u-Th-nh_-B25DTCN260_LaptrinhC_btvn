#include <stdio.h>
#include <math.h>

int main (){
	int a = 3 , b = 4 , c = 5 ;
	float result = pow(a,3) + pow(b,2) + 2 * c + sqrt(a + b - c);
	printf("%f" , result); 
	return 0 ; 
} 
