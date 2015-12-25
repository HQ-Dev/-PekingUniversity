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
     
     编程题 ＃1: 求字母的个数 （已经修改，等待下次提交）
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
//    int counts = 80;
//    char s[80];
//    int a,e,i,o,u;
//    cin.getline(s, counts);
//    for (int number; number < 80; number++) {
//        char c = s[number];
//        if ( c == 'a' || c == 'A') a++;
//        if ( c == 'e' || c == 'E') e++;
//        if ( c == 'i' || c == 'I') i++;
//        if ( c == 'o' || c == 'O') o++;
//        if ( c == 'u' || c == 'U') u++;
//    }
//    cout << a << " " << e << " " << i << " " << o << " " << u << endl;

    
    /*
     编程题＃2: 忽略大小写比较字符串大小 (略过)
     描述：
     一般我们用strcmp可比较两个字符串的大小，比较方法为对两个字符串从前往后逐个字符相比较（按ASCII码值大小比较），直到出现不同的字符或遇到“\0”为止。如果全部字符都相同，则认为相同；如果出现不相同的字符，则以第一个不相同的字符的比较结果为准。但在有些时候，我们比较字符串的大小时，希望忽略字母的大小，例如“Hello”和“hello”在忽略大小写时是相等的，请写一个程序，实现对两个字符串进行忽略字母大小写的大小比较。
     输入：
     输入为两行，每行一个字符串，共两个字符串。（请用cin.getline(s,80)录入每行字符串）（每个字符串长度都小于80）
     输出：
     如果第一个字符串比第二个字符串小，输出一个字符“<”
     如果第一个字符串比第二个字符串大，输出一个字符“>”
     如果两个字符串相等，输出一个字符“＝”
     
     样例输出：
     第一组
     Hello
     hello
     第二组：
     hello
     HI
     第三组
     hello
     HELL
     
     样例输出：
     =
     <
     >
     */
//    int count = 80;
//    char s1[80];
//    char s2[80];
//    cin.getline(s1, count);
//    cin.getline(s2, count);
//    int a = strcmp(s1, s2);
//    switch (a) {
//        case -1:
//            cout << "<" << endl;
//            break;
//        case  0:
//            cout << "=" << endl;
//            break;
//        case  1:
//            cout << ">" << endl;
//            break;
//        default:
//            break;
//    }
    
    /*
     编程题＃3: 最长单词2
     描述：
     一个以‘.’结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其他特殊形式
     输入：
     一个以‘.’结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其他特殊形式。
     输出：
     该句子中最长的单词。如果多于一个，则输出第一个。
     样例输入：
     第一组
     I am a student of Peking University.
     第二组
     Hello world.
     
     样例输出：
     第一组
     University
     第二组
     Hello
     */
    
    
    
    return 0;
}














