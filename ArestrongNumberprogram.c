#include<stdio.h>
#include<math.h>
int main(){
    int n, r, sum = 0, c;
    printf("Enter Number: ");
    scanf("%d", &n);
    c = n;
    while (n>0)
    {
        r = n%10;
        sum = (r*r*r)+ sum;
        n=n/10;
    }
    if (c = sum)
    {
        printf("It's Arestrong Number");
    }
    
    else {
        printf("not an Arestrong no.");
    }
    return 0;
}