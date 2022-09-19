/*2. Write a program to check whether a given number is divisible by 5 or not*/

#include<stdio.h>
int main()
{
int n;
//taking input from user 
printf("Enter the number :");
scanf("%d",&n);
// checking condition 
if(n%5==0){
    printf("Yes %d number is divible by 5\n",n);
}
else{
    printf("No %d is not divisble by 5",n);
}
return 0;
}
