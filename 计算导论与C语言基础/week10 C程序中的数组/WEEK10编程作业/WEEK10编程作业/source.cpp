//
//  main.cpp
//  WEEK10编程作业
//
//  Created by apple on 15/12/23.
//  Copyright © 2015年 Archy. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    /*
     
     编程题 ＃1: 求字母的个数
     描述：
     在一个字符串中找出元音字母a,e,i,o,u出现的次数
     输入：
     输入一行字符串（字符串中可能有空格，请用 cin.getline(s,counts)方法把一行字符串输入到字符数组s中，其中counts是s的最大长度，这道题里面可以直接写80.），字符串长度小于80个字符。
     输出：
     输出一行，依次输出a,e,i,o,u在输入字符串中出现的次数，整数之间用空格分隔。
     
     样例输入：
        If so, you already have a Google Account. You can sign in on the right.
     样例输出：
        5 4 3 7 3
     
     提示：
     注意，只统计小写元音字母a,e,i,o,u出现的次数
     */
    int counts = 80;
    char s[80];
    int a,e,i,o,u;
    cin.getline(s, counts);
    for (int I; I < 80; I++) {
        char c = s[I];
        if ( c == 'a' ) a++;
        if ( c == 'e' ) e++;
        if ( c == 'i' ) i++;
        if ( c == 'o' ) o++;
        if ( c == 'u' ) u++;
    }
    cout << a << " " << e << " " << i << " " << o << " " << u << endl;

    
    
    
    
    
    
    return 0;
}














