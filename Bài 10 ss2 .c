#include<stdio.h>
#include<math.h>

int main(){ 
    int a=5 , b= 3 , c = 2;
    float S = ( sqrt ( pow ( a , 2) + pow ( b , 2)) / ( c +1)) + ( a * b) /(float)c - sqrt ( fabs (a-b) + pow ( c,2));
    printf(" S = %.2f", S);
return 0;
}
