//
//  main.cpp
//  冒泡排序
//
//  Created by apple on 15/9/11.
//  Copyright (c) 2015年 Archy. All rights reserved.
//

// 抄写题 ＃2: 分数求和
// 描述：
// 输入n个分数并对它们求和，用约分之后的最简形式表示
// 比如：
// q／p ＝ x1/y1 + x2/y2 +...+ xn/yn,
// q/p 要求是归约之后的形式。
// 如： 5/6已经是最简形式， 3/6需要规约为1/2，3/1需要规约为3，10/3就是最简形式。
// ps:分子和分母都没有为0的情况，也没有出现负数的情况
// 输入：
// 第一行的输入n，代表一共有几个分数需要求和，接下来的n行是分数
// 输出：
// 输出只有一行，即规约后的结果
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    int n;
    cin >> n;
    int sumn = 0, sumd = 1; // 储存结果，sumn/sumd
    while (n--) {
        int num, deno;
        char slash; // 专门用来吃掉/的
        cin >> num >> slash >> deno;
        // 先相加 a/b + c/d = (a*d + c*b)/(b*d)
        sumn = sumn*deno + num*sumd;
        sumd = sumd*deno;
    } // 这一步算出了输入进去的n个分数的和，但是还没有规约，即算出了sumn,sumd
    
    // 后约分
    // 先求最大公约数gcd，这里用的是欧几里德法
    int a = sumd, b = sumn, c;
    while (a != 0) {
        c = a; a = b%a; b = c;
    }
    int gcd = b;
    // 分子分母同时除以gcd就可以完成余份
    sumd /= gcd;
    sumn /= gcd;
    if (sumd > 1)
        cout << sumn << '/' << sumd << endl;
    else
        cout << sumn << endl;
    return 0;
}
// 我们计算过程中结果分母时不断乘以新输入的分母，最后约分的。这样可能导致这个过程中分母过大溢出。
// 这道题的数据比较简单，并没有出现那种情况。但大家可以思考一下，如果出现了那种情况怎么办呢？（不要用大整数啊）
/* 我们给大家一组测试数据，看看你修改过的程序能不能通过这组数据吧：
 样例输入：
 2
 1/100000000
 1/100000000
 样例输出：
 1/50000000
*/























