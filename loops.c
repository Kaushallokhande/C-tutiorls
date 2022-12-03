//Infinity LOOP
#include<stdio.h>

int main(){
    int i;
    for(i=1;i;i=i+1){
        printf("Hello Killer \n");
    }

    return 0;
}

//1-100 values print
/*In from of Loop*/
#include<stdio.h>

int main(){
    int a;
    for(a=1;a<=100;a = a + 1){
        printf("%d \n", a);
    }
    return 0;
}

//Q.Print the no. from 0-10?
#include<stdio.h>

int main(){
    int x;
    for(x=0;x<=10;x=x+1){
        printf("%d \n",x);
    }
    return 0;
}

//Q.Print 2 table
#include<stdio.h>

int main(){
    int y;/*  y+=2   :: y = y + 2 */
    for(y=2;y<=20;y+=2){
        printf("%d \n",y);
    }
    return 0;
}
//float loop
#include<stdio.h>
int main()
{
    float x;
    for(x=0;x<=3.14;x+=0.1){
        printf("%f \n",x);
    }
    return 0;
}

//char loop
#include<stdio.h>

int main(){
    char ch;
    for(ch='a';ch<='z';ch++){  
        printf("%c \n", ch);
     }
    return 0;
  }

//While Loop
#include<stdio.h>

int main(){
    int i=1;
    while(i<=5){
        printf("Hello Killer \n",i);
        i++;
    }
    return 0;
}

//Q.Print the no. form 0-n by user
#include<stdio.h>
#include<math.h>

int main(){
    int i,n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=0;i<=n;i = i + 1){
        printf("%d \n", i);
    }

    
    return 0;
}
/*by while*/
#include<stdio.h>
#include<math.h>

int main(){
    int o=0,n;
    printf("Enter n :");
    scanf("%d", &n);

    while(o<=n){
        printf("%d \n",o);
        o+=1;
    }
    return 0;
}

//Keep taking numbers as input from user until user enters a number which is multiple of 7?
//a to z print alphabhats

#include<stdio.h>

int main(){
    for(char ch='a'; ch<='z';ch++){
        printf("%c \n", ch);
    }


    return 0;
}

//Q.print the Sum of frist n natural numbers?

#include<stdio.h>
#include<math.h>

int main(){

    int n,sum = 0;
    printf("Enter n=");
    scanf("%d", &n);
     for(i=1;i<=n;i++){
        sum = sum + i;

     }
     printf("%d",sum);

    

    return 0;
}

//Break concept
#include<stdio.h>

int main(){
    for( int i=1;i<=5;i++) {
        if(i == 3) {
            break;
        }
        printf("%d\n", i);
    }
    printf("End");
    return 0;
}
 //Continue Concept
#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
} 

//Q.Print all no. from 1 to 10 except 6.
#include<stdio.h>

int main(){
    for(int i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}

//Q.Print all even no. from 5 to 50.
#include<stdio.h>

int main(){
    for(int i=5;i<=50;i++){
        if(i%2 !=0){
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}

//Q.Print all odd no. from 5 to 50.
#include<stdio.h>

int main(){
    for(int i=5;i<=50;i++){
        if(i%2 ==0){
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}

//Q.Print the Factorial of a no. n.
#include<stdio.h>

int main(){ 
    int n;
    printf("enter n:");
    scanf("%d", &n);

    int f=1;
    for(int i=1;i<=n;i++){
        f =f * i;
        
    }printf("%d\n", f);

    return 0;
}

//Q.Calculate the sum of all no. b/w  5 to 50 including (5 and 50).

#include<stdio.h>

int main(){
    int sum =0;
    for(int i = 5; i<=50;i++){
        sum = sum +i;
    }
    printf("sum b/w 5 and 50:%d", sum);


    return 0;
}