# include<stdio.h>
# include<math.h>
int main(){
    int a,b,c;
    printf("please enter with you need need square\n");
    scanf("%d",&a);
     printf("please enter power value \n");
    scanf("%d",&b);
    c=pow(a,b);
    printf("your result is = %d",c);
    return 0;
}