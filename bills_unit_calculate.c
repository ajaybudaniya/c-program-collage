/* this ptogram is claculate your home electricity bill payment
 - payment assume 

 .................*assume this data for sample*......................
           first 50 unit= 5 rupees ( stand revised)
            51 to 300 = 6 rupees
            301 to 1000 = 7 rupees
            1001 to so on = 8 rupess
    ................*check your bill *............
.............*data *......................
Name - Ajay kumar
     */

# include<stdio.h>
int main(){
int a,b,c;
printf("please enter your unit \n");
scanf("%d",&a);
if (a<=50)
{
    printf("your unit is less then 50 unit then you pay standred revised ... \n");
    printf("your pay amount = '%d' rupees\n",a*5);
}
else if (a>=51 && a<=300)
{
    printf("you are pay 6 rupees per unit because more than stand revised 50 units same charge and differet charge for 50+ ... \n");
    int amount = 250+((a-50)*6);
    printf("your pay amount = '%d'rupees \n", amount);
}
else if (a>=301 && a<=1000 )
{
    printf("you are pay 7 rupees per unit because more than stand revised 50 units same charge and differet charge for 50 and 51 to 300 pay 6 rupees ... \n");
    int amount = 250+(250*6)+((a-300)*7);
    printf("your pay amount = '%d'rupees \n", amount); 
}
else
{
    printf("you are using more power than pay more standard charge to first 50 than so on ... \n");
    int amt =250+(250*6)+(700*7)+((a-1000)*8);
    printf("total pay amount is = '%d'rupees \n",amt);
}
printf("thanks for using the programs to calculate your bill \n");


    return 0;
}