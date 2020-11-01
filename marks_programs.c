/* this program check your grade basis of your marks 
Name - Ajay Kumar
*/

# include<stdio.h>
int main(){
  int a;
printf("please enter your marks to get in your class \n");
scanf("%d",&a);
if (a>=75 &&a<=100)
{
    printf("well done :you are eligible to  Distinction \n");
} 
 else if (a>=60 && a<75)
{
    printf("you are eligible to 1st Division \n");
}
 else if (a>=50 && a<60)
{
 printf("you are eligible to 2st Division \n");
}
else if (a>=33 && a<50)
{
    printf("you are eligible to 3st Division \n");
}
else if (a>=0 && a<33)
{
    printf("sorry bhai you are fail ! better luck next time \n");
}
else
{
    printf("you are cross your limitations please go back and select only between 'o' to '100' only \n " );
}
printf("thanks for using my program see you soon!");
    return 0;
}