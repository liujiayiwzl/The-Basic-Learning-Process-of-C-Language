///*
//       题目：从abcd四个地方选择一个
//             有80个人投票
//
//        1.用随机数模拟投票 
//        2.若票数一样，a>b , b>c , c>d
//*/
//
//
//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//
////1.定义结构体，表示4个景点的名称和票数
//struct spot
//{
//    char name[100];
//    int count;
//};
//
//int main()
//{
//    //2.定义数组，给结构体赋值
//    struct spot arr[5] = { {"A",0},{"B",0},{"C",0},{"D",0} };//把四个结构体直接初始化，并且组合到一个数组中，外部数组大 { } ，内部结构体用{}
//
//    //3.设置种子，随机数
//    srand(time(NULL));
//
//    //4.模拟80个人投票
//    for (int i = 0; i < 80; i++)
//    {
//       
//        
//        int choose = rand() % 4; /*
//                                     rang（） % 4的含义：
//                                                    rand()会生成一个极大的随机数1330，420，31等
//                                                    %4是对四取余，除4余的数，只有0，1，2，3
//                                                    int choose 就只有0，1，2，3四个数
//                                                    对应的是数组 struct spot arr[4] 中的四个索引
//                                                    四个索引代表的是四个结构体
//                                                    ++就代表随机到的这个数加 1
//                                 */
//        arr[choose].count++;      /*   arr[choose]表示：数组中的一个结构体
//                                      .count表示：结构体中的count这个变量
//                                         ++ 表示：这个count加 1
//                                 */  
//
//    }
//
//
//    //5.统计每个景点数量,遍历数组
//    printf("各景点投票情况：\n");
//    for (int j = 0; j < 4; j++)
//    {
//        struct spot temp1 = arr[j];
//        printf("%s %d\n", temp1.name, temp1.count);
//    }
//
//    //6.算最大值:先找到最大值max，在将ABCD 一一对比，先符合最大值的就是最终景点
//    
//    //初始化第一个结构体为max
//    int max = arr[0].count;
//
//    //利用循环比较出新的max
//    for (int i = 0; i < 4; i++)
//    {
//        struct spot temp2 = arr[i];
//        if (temp2.count > max)
//        {
//            max = temp2.count;
//        }
//    }
//
//    //利用循环，比较 ABCD 谁先和最大值匹配 
//    for (int i = 0; i < 4; i++)
//    {
//        struct spot temp3 = arr[i];
//        if (max == temp3.count)
//        {
//            printf("投票最多景点：%s,共计：%d票数", temp3.name, temp3.count);
//            break;
//        }
//    }
//
//    return 0;
//}