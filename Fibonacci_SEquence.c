//Q.Write a function to print nth terms of the fibonacci sequence.

#include<stdio.h>
#include<math.h>

int fib(int n);
int main(){
   printf("%d", fib(8));//Here 8th term 
    return 0;
}
int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    
    int fibu1=fib(n-1);
    int fibu2=fib(n-2);
    int fibn=fibu1+fibu2;
    return fibn;
}