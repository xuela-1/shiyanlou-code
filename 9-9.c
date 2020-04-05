#include<stdio.h>

int main(){
    /*
    char a,b;
    scanf("%d",&a);

    /*
    256
    a = [0],b = [1]
    */
    //printf("a = [%d],b = [%d]\n",a,b);

    /*
    float r;
    scanf("%f",&r);
    printf("r=%f",r);
    */

    /*
    double x;
    scanf("%lf",&x);
    printf("x=%f\n",x);
    printf("x=%lf",x);
    */

    /*
    char name;
    int age;
    scanf("%c",&name);//此时输入缓冲区有:F4
    scanf("%d",&age);

    printf("name=%c\n",name);
    printf("age=%d\n",age);
    */

    char name;
    //name = getchar();//scanf("%c",&name);
   // printf("name=[%c]\n",name);
    name = getc(stdin);
    //putchar(name);//printf("%c",&name)
    putc(name,stdout);
    return 0;
}
