#include <stdio.h>
#include <math.h>

int main (){
	int a = 5 , b = 4 , c = 2 ;
	float result = ((pow(a,2) + sqrt(pow(b,2) + 4 * a * c )) / (2 * a))- (pow(b,3) / pow(c,2))+ (sqrt(fabs(a - b))); 
	printf("%.2f" , result); 
	return 0 ; 
} 
