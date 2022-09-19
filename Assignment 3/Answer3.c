/*3. Write a program to check whether a given number is an even number or an odd
number.*/

#include<stdio.h>
int main()
{
int n;
//taking input from user 
printf("Enter the number to find its even or odd :");
scanf("%d",&n);
// checking condition of even 
if(n%2==0){
    printf("%d is Even \n",n);
}
// else its odd number
else{
    printf("%d is odd ",n);
}
return 0;
}
