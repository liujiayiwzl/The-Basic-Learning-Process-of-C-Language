/*
      题目：定义结构体表示游戏人物
           属性：姓名，攻击力，防御值，血量
           要求，把三个人物放到数组并遍历数组
*/

//1.定义结构体
/*
      别名：在结构体最后的分号前，加上起的名字，开头struct后面可不加名字
      在struct前面加上  typedef  才能加别名
*/
typedef struct ulteman
{
    char name[100];
    int attack;
    int defense;
    int blood;
}M;


#include<stdio.h>
int main()
{
    //2.定义人物
    //使用别名后，数据类型可直接用别名表示，再加数据名即可
    M p1 = { "wzl",100,10,520 };
    M p2 = { "ljy",13,14,100 };
    M p3 = { "fze",1,1,0 };

    //3.定义数组
    //使用别名作为数组的数据类型，再加数组名即可
    M arrM[3] = {p1,p2,p3};

    //4.遍历数组
    for (int i = 0; i < 3; i++)
    {
        M temp = arrM[i];
        printf("人物的信息为：\n 姓名：%s\n 攻击力：%d\n 防御值：%d\n 血量：%d\n\n", temp.name, temp.attack, temp.defense, temp.blood);
    }

    return 0;
}