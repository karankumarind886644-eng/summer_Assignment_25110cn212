//  write a program to find sum of digit of number
// #include<stdio.h> 
// int main(){
//     int n,sum=0,remainder;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n!=0){
//         remainder = n%10;
//         sum= sum +remainder;
//         n = n/10;
//     }
//     printf("sum of digit =%d",sum);
//     return 0;
// }   


// write a program reverse of number

// #include<stdio.h> 
// int main(){
//     int n,reverse=0,remainder;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n!=0){
//         remainder = n%10;
//         reverse=    reverse*10+remainder;
//         n = n/10;
//     }
//     printf("reverseof number =%d",reverse);
//     return 0;
// }


// write a program to find product of digit

// #include<stdio.h> 
// int main(){
//     int n,product=1,remainder;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n!=0){
//         remainder = n%10;
//         product = product*remainder;
//         n = n/10;
//     }
//     printf("product of number =%d",product);
//     return 0;
// }

// write a program to check whether a number is palindrome

#include<stdio.h> 
int main(){
    int n,reverse =0,remainder,sum;
    printf("enter the number");
    scanf("%d",&n);
    sum =n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n =n/10;

    }
    if(sum  ==reverse)
    printf("pelindrome number");
    else
    printf("not a pelindrome number");
    return 0;
}