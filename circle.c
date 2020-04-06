#include<stdio.h>

int main(){
        /*
         float r;
         float s;//面积
         float len;//周长

         printf("请输入圆的半径:");
         scanf("%f",&r);

         //计算
         s = 3.14 * r * r;
         len = 2 * 3.14 * r;

         printf("面积:%.2f\n",s);
         printf("周长:%.2f\n",len);
         */

        char c;

        printf("请输入一个小写字母:");
        scanf("%c",&c);

        //不做输入的合法性判断,假设c1就是一个小写字母
        //说明:char类型的数据可以做加减运算,就是使用对应的ASCII码值
        //如果输入的是'a',c就等于'a'
        //c-'a'=>'a'-'a'等于0
        //0+'A'=>'A'
        c = c - 'a'+ 'A';//如果输入的是'b',b在a之后,b-a=1,1+A=B;ASCII值相加
        printf("输出对应的大写字母:%c\n",c);
        return 0;
        }

