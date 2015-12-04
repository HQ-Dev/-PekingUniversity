//
//  main.cpp
//  冒泡排序
//
//  Created by apple on 15/9/11.
//  Copyright (c) 2015年 Archy. All rights reserved.
//

// 第七周作业 抄写题部分
// 抄写题＃1:约瑟夫问题
//约瑟夫问题：有时也称为约瑟夫置换，是一个出现在计算机科学和数学中的问题。在计算机编程的算法中，类似问题又称为约瑟夫环。又称“丢手绢问题”
// 描述：约瑟夫问题，有n只猴子，按顺时针方向围成一圈选大王（编号从1到n），从1号开始报数，一直数到m，数到m的猴子退出圈外，剩下的猴子再接着从1开始报数。就这样，直到圈内只剩下一只猴子时，这只猴子就是猴王；编程求输入n,m后，输出最后猴王的编号。
// 输入
// 每行是用空格分开的两个整数，第一个是n，第二个是m（0 < m, n <= 300）.最后一行是：0 0
// 输出
// 对于每行输入数据（最后一行除外），输出数据也是一行，即最后猴王的编号。

#include <iostream>
using namespace std;

int succedent[300]; // 这个数组用于保存一个猴子后一位是谁，比如“next[5]的值是7”就是说5号猴子的下一位是7号猴子，6号猴子已经在之前退出了。
int precedent[300]; // 这个数组用于保存一个猴子前一位是谁，用法和上面的类似。

int main(int argc, const char * argv[]) {
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        for (int i = 0; i < n - 1; i++) {
            succedent[i] = i + 1;
            precedent[i + 1] = i;
        }
        succedent[n - 1] = 0;   // 第succedent[n - 1] 后面没有猴子了
        precedent[0] = n - 1;
        int current = 0;
        while (true) {
            // 如果一共要报m次号，那么取m-1次succedent之后就是需要退出的那只猴子
            for (int count = 0; count < m-1; count++) {
                current = succedent[current];
            }
            int pre = precedent[current];
            int suc = succedent[current];
            // 让current号猴子退出很简单，就是把前一位的“下一位”指向current的下一位，下一位的“前位”指向current的前一位就好了
            succedent[pre] = suc;
            precedent[suc] = pre;
            if (pre == suc) {
                // 如果只剩下两个了，那么每个人的前位和后位就是同一个了。 current是退出的，那么另一就是剩下的。我们的序号就是从0编号的，输出时要加一
                cout << pre + 1 << endl;
                break;
            }
            current = suc;
        }

    }
    return 0;

}























