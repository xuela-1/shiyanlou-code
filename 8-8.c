#include<stdio.h>

int main(){
        int hole[10],i,n = 0;

            for(i=0;i<10;i++)
                        hole[i] = 0;                    //为每个洞赋值为0，代表狐狸未找过该洞

                for(i=0;i<1000;i++)                 //用循环实现狐狸找1000次洞
                        {
                                    n = n % 10;                      //n为狐狸当前寻找的洞的编号（实际编号应为n+1）
                                            hole[n] = 1;                    //为找过的洞赋值为1，代表狐狸已经找过该洞
                                                    n = n + i + 2;                     //设置下一次寻找的编号
                                                        }

                    printf("The hole's numbers are:");

                        for(i=0;i<10;i++)                   //逐个输出洞的编号（实际编号）
                                {
                                            if(hole[i]==0)
                                                        {
                                                                        printf("%d ",i + 1);
                                                                                }
                                                }

                            return 0;
}
