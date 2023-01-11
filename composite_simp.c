#include<stdio.h>
float f(float x){
    return (1 + x*x*x);
}
int main(){
    int i;
    float n;
    float h,I,a,b;
    printf("enter a and b: "); 
    scanf("%f%f",&a,&b);
    printf("enter value of n ");
    scanf("%f",&n);
    h = (b-a)/n;
    float sum_even,sum_odd;
    for(i = 1 ; i < n-1;i++ ){
        if(i %2 == 0){
            sum_even = sum_even + f(a + i*h);
        }
        else{
            sum_odd = sum_odd + f(a+i*h);
        }
    }
    I = h/3 * (f(a)+4 * (sum_odd + f(a+h)/2)+2 *(sum_even)+f(b));
    printf("value of I = %f",I);
}