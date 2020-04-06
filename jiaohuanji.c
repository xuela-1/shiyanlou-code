#include <stdio.h>

int main(void){
    //定义变量,用来表示用户名和密码
    // char name;//只支持输入一个字符
    char name[32];

    //int password;//只支持使用整数作为密码
    char password[16];

    //输入用户名和密码
    printf("请输入用户名:");
    //scanf("%c",&name);//占位符,待输入name,&符号不可少
    scanf("%s",&name);

    printf("请输入密码:");
    //scanf("%d",&password);//占位符,待输入password,&符号不可少
    scanf("%s",&password);

    //判断账号和密码是否正确
    //待实现

    /*
    printf("\n---交换机后台管理系统---\n");
    printf("     1.创建账号\n");
    printf("     2.端口管理\n");
    printf("     3.网络测试\n");
    printf("     4.VLAN管理\n");
    printf("     5.删除账号\n");
    printf("     6.退出\n");
    */

    return 0;
}
