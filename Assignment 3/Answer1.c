/*1. Write a program to check whether a given number is positive or non-positive.*/

#include<stdio.h>
int main()
{
int n;
// Taking input from user  
printf("Enter the number :");
scanf("%d",&n);
// finding given number is positive or not using if else condition
if(n>=0){
    printf("This number is positive ");
}
else{
    printf("This number is negative ");
}
return 0;
}
