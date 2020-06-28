#include<stdio.h>
#include<stdlib.h>

int add( int N){
int n,i; 
double *x;
double *y;
n = sizeof(double);
 
x = (double*)malloc(N * n);
y = (double*)malloc(N * n);

for(i=0; i<N; i+=2){
x[i] = (rand());
y[i] = 2.3*x[i]+y[i];
//printf("Iteration%d\n", i);
}

}


