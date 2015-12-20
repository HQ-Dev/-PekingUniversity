//
//  main.cpp
//  week10 C程序中的数组
//
//  Created by apple on 15/12/18.
//  Copyright © 2015年 Archy. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {

    /*
         C语言中的数组
     本部内容介绍一种非常重要的数据结构－－数组
     
     第一课 第一节 再谈一维数组
     
     int n = 10;
     int a[n] = {0};  在C++中这样是不被允许的。数组中［］里面必须是一个常量表达式
     
     */
    
    /*
     第一课 第二节 二维数组
     像 int a[3][4] 就是一个二维数组
     不过可以换个角度思考，其实它也就是定义了3个一维数组（有三行）
     
     那么二维数组在内存中时如何存储的呢？如图
        a[0][0]
        a[0][1]
        a[0][2]
        a[0][3]
        a[1][0]
        a[1][1]
        a[1][2]
        a[1][3]
        a[2][0]
        a[2][1]
        a[2][2]
        a[2][3]
     
     */
    // 下面是关于二维数组的初始化
//    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // 可以写成int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; 甚至可以省略为a[][4]
//    for (int i = 0; i < 3;i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            cout << setw(3) << a[i][j];   // #include <iomainp>    setw(3)是一个输出控制符，意思是后面输出的东西在屏幕上所占的字符宽度
//        }
//        cout <<endl;
//    }
    
    // 三维数组
    /*
     int a[5][3][4]        // [3][4]是三行四列  [5]代表了第三维   也可以考虑为一个立方体 从外往内切片
     */
    
    /*
      第二课 第一节 数组的作用之一
     
     例如输入20个0～9之间的整数，统计每个数载数列中出现的次数。
     */
    // 数字统计
//    int num, count[10] = {0};
//    for (int i = 0; i<20; i++)
//    {
//        cin>>num;
//        for (int j=0; j<10;j++)             // 这里也可以使用 switch-case
//        {
//            if (num == j) count[j]++;
//        }
//    }
//    for (int i = 0; i<10; i++)
//    {
//        if (count[i] != 0)
//            cout<<i<<"输入了"<<count[i]<<"次"<<endl;
//    }
    
    // 更简单的方法
//    int num, count[10] = {0};
//    for (int i=0; i<20; i++)
//    {
//        cin>>num;
//        count[num]++;
//    }
//    for(int i = 0; i<10; i++)
//    {
//        cout<< i << "出现了"<< count[i]<< "次"<<endl;
//    }
    
    // 统计20个学院每个学员至多12个系的不同系中老师的数量，做一个录入和统计系统
//    int teacher[21][13];
//    int school, department;
//    int i,j;
//    char name[30];
//    
//    for  (i =0; i<1000; i++)
//    {
//        cin>>name>>school>>department;
//        teacher[school][department]++;
//    }
//    
//    for (i=1;i<21;i++)
//    {
//        for(j=1;j<13;j++)
//        {
//            cout<<setw(4)<<teacher[i][j];
//        }
//        cout<<endl;
//    }
    
    // 第二课 第二节 数组的作用之二
    // 编写程序，输出100以内的所有素数
    // 使用另外一种方法来求解
    int sum = 0, a[100] = {0};
    for (int i=2; i< 100; i++)  // 得到里面所有100以下所有数的倍数（语言不严谨，理解即可），剔除后，剩下的是素数  i< sqrt(100.0)
    {
        sum = i;    // 记录这个数自我相加的结果
        while(sum < 100)
        {
            sum = sum + i;
            if (sum < 100) a[sum] = 1;    // a[sum] = 1; 就是标记这个数被删除了
        }
    }
    for(int i = 2; i<100;i++)
    {
        if(a[i] == 0)
            cout<<i<<" ";
    }
    
    // 这种算法属于筛法求素数
    /*
       诶拉托斯特尼（公元前274～194年）发明，又称诶拉托斯特尼筛子。
     基本思路：不是挑选出所有素数，而是筛掉所有合数。
     */
    
    // 上面的方程还可以进行优化
    /*
       ＊可以让2，3，4，5...,c中的每个数自我相加多次，来获得100以内的所有合数；
       ＊c如何确定？
         根据初等数论，若n为合数，则n的最小正因数c满足：
             1 < c <= 根号n
     */
    
    return 0;
}









