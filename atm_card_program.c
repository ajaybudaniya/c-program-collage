# include<stdio.h>
int main(){
    int a,b,c,d;
    printf("please enter your language to comfort \n 1= English \n 2= Hindi \n");
    scanf("%d" ,&a);
    if(a==1){
             printf("you select english \n");
    }
    else if (a==2)
    {
        printf("you select hindi \n");
    }
    else
    {
        printf("try again not valid input \n");
    }
    
    printf("program is all done \n");
    
    return 0;
}