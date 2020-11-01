/*this program check odd even a number
Name - Ajay kumar */
# include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number to check even or odd \n");
    scanf("%d",&a);
     b = a%2;
     if (b==0)
     {
         printf("your number is :even = %d \n",a);
     }
     else if (b!=0)
     {
         printf("your number is : odd = %d \n",a);
     }
     printf("well done \n");
   return 0;
}