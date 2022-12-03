//Q.Print first n no. of sum and also print revers.

#include<stdio.h>

int main(){
    int n;
    printf("enter n=");
    scanf("%d", &n);
     int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("%d\n", sum);


    for(int i=n;i>=1;i--){
        printf("revers order:%d \n", i);
    }
    return 0;

}

//Q.Print the table of a number input by user.


#include<stdio.h>

int main(){
    int n;
    printf("enter n=");
    scanf("%d", &n);

    for(int i=1,Table;i<=10;i++){
        Table=n*i;
        printf("%d \n", Table);
    }

    return 0;
}

//Q.Keep taking numbers as input from user until user enter an odd number.

#include<stdio.h>
int main (){
    int n;

    do{

        printf("enter n:");
        
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 2 != 0 ){
            break;
        }



    }while (1);

    printf("its odd no. end");
    return 0;
}
//Q.Keep taking numbers as input from user until user enter multiply 7.
#include<stdio.h>
int main (){
    int n;

    do{

        printf("enter n:");
        
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 7 == 0 ){
            break;
        }



    }while (1);

    printf("the multiply 0f 7");
    return 0;
}