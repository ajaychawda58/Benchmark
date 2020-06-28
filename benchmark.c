#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"str.h"



int main(){

double start_time = 0.0;
double end_time = 0.0;

double bench_time = 0.0;

int j;

int N[] = {10,100,1000,10000,20000, 40000, 60000, 80000, 100000,1000000,2000000,3000000,4000000,5000000,6000000,7000000,8000000,9000000,10000000};
//int N[] = {100000,5000000};
for (j=0; j<(sizeof(N)/sizeof(int)); j++){

if(N[j] < 1000000){
int i;
start_time = (double)clock()*1000 /(double) CLOCKS_PER_SEC;
for(i=0; i< 10000; i++){
add(N[j]);
}
end_time = (double)clock()*1000 / (double) CLOCKS_PER_SEC;
bench_time = end_time - start_time;
printf("For size %d \t", N[j]);
printf("Time:%F\t", (bench_time/10000));

double flops = (N[j] * 2)/(bench_time/10000000);

printf("FLOPS:%F\n", flops);
printf("GFLOPS:%F\n", (flops/(1024*1024)));
}

else{
start_time = (double)clock()*1000 /(double) CLOCKS_PER_SEC;

add(N[j]);

end_time = (double)clock()*1000 / (double) CLOCKS_PER_SEC;
bench_time = end_time - start_time;

printf("For size %d \t", N[j]);
printf("Time:%F\t", (bench_time));

double flops = (N[j] * 2)/(bench_time/1000);

printf("FLOPS:%F\n", flops);
printf("GFLOPS:%F\n", (flops/(1024*1024)));
}
}
}



