// write a program to clculate sum of first N natural number

#include<stdio.h>
int main(){
     int n ,sum =0;
     printf("enter a number");
     scanf("%d",&n);
     for(int i = 1; i<=n;i++){
        sum+=i;}
        printf("sum = %d",sum);
     return 0;
}

// write a program to print multiplication table of a given number

#include<stdio.h>
int main(){
    int n;

    printf("enter a number");
    scanf("%d",&n);
     for(int i =1;i<=10;i++){
        printf("%d %d %d\n",n,i,n*i);
     }
    return 0;
}  


// find factorial of a number

#include<stdio.h>
int main(){
    int n; long long fact =1;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("factorial of %d = %11d",n,fact);
    return 0;
}  

//  count digit in anumber


#include<stdio.h>
int main(){
    int n, count = 0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;

    }
    printf("%d",count);
    
    return 0;
}