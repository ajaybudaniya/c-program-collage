# include<stdio.h>
# include<math.h>
int main (){
    int x1,y1,x2,y2,f,g;
    float h;
printf("pleae inter your distance calculation in order x1 and y1\n");
scanf("%d" "%d",&x1,&y1);
printf("pleae inter your last point x2 and y2 calculation \n");
scanf("%d" "%d", &x2,&y2);
// formula of the program 
f=pow((x2-x1),2);
g=pow((y2-y1),2);
h=pow((f+g),0.5);
printf("value of x2-x1 =%d \n",f);
printf("value of y2- y1 =%d \n",g);
printf("distance point 1 to 2= %f \n",h);
printf("addresh of h in momery  %u \n",&h);
return 0;
}