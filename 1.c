#include <stdio.h>

int main(){
    /*
    printf("我爱你!\n");
    printf("\n");
    printf("你爱我吗?");
    printf("100 200 300\n");
    printf("2000\t3000\t5000\t\n");
    printf("100\t200\t300\t");
    */

    /*
    char name[32];//表示姓名
    int power;//表示武力值

    printf("请输入姓名:");
    scanf("%s",name);//让用户输入一个字符串
    printf("请输入武力值:");
    scanf("%d",&power);//让用户输入一个整数

    printf("姓名:%s 武力值:%d\n",name,power);//前面占位符，，后面对应内容
    */

    float r;//圆的半径
    float s;

    r = 99;
    s = 3.14 * r * r;

    printf("半径为%.2f的圆,面积为:%.2f\n",r,s);



    return 0;
}
