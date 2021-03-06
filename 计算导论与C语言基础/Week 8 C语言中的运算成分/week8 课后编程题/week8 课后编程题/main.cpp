//
//  main.cpp
//  week8 课后编程题
//
//  Created by apple on 15/12/14.
//  Copyright © 2015年 Archy. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // 编程题＃1: 数字求和
    /*
     描述：
         给定一个正整数a，以及另外的5个正整数，问题是：这五个正整数中，小于a的整数的和是多少？
     输入：
         输入一行，只包括6个小于100的正整数，第一个就是a
     输出：
         输出一行，给出一个正整数，是5个数中小于a的数的和。
     */
//    int a[6];
//    for (int i = 0 ; i < 6;i++ ) {
//        cin >> a[i];
//    }
//    int sum = 0;
//    for (int i = 1; i < 6; i++) {
//        if (a[i] < a[0])
//        {
//            sum += a[i];
//        }
//    }
//    cout<<sum<<endl;
    
    // 编程题＃2: 骑车与走路
    /*
     描述：
         在北大校园中，没有自行车行动有时会很不方便。但是，并非办所有事情都是骑自行车的效率高。假设找到自行车，并且开完锁上车的时间为27秒；
      停车锁车的时间为23秒；不行每秒为1.2米，骑车每秒为3.0米。请判断走不通的距离去办事，是骑车快还是走路快？
     输入：
         第一行为待处理的数据的数量n
         其后每一行为整数，即这次办事要行走的距离，单位为米
     输出：
         对应每个整数，如果骑车快，输出一行“Bike”,如果走路快，输出一行“Walk”;如果一样快，输出一行“All”
     
     样例输入：
     4
     50
     90
     120
     180
     
     樣例输出：
     Walk
     Walk
     Bike
     Bike
     
     */
    
//    int a = 0;
//    cin>>a;
//    int b[a];
//    for (int i = 0; i < a; i++) {
//        cin>>b[i];
//    }
//    for (int i = 0; i < a; i++) {
//        double bike_time = b[i]/3.0 + 50;
//        double walk_time = b[i]/1.2;
//        if ( bike_time < walk_time) {
//            cout<<"Bike"<<endl;
//        }
//        else if ( bike_time > walk_time) {
//            cout<<"Walk"<<endl;
//        } else {
//            cout<<"All"<<endl;
//        }
//    }
    
    
    /* 编程题＃3: 买房子
     描述：
         某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，现在价格是200万，假设房子价格以每年百分之K增长，
     并且该程序猿未来年薪不变，且不吃不喝，不用交税，每年所得N万全都积攒起来，问第几年能够买下这套房子（第一年房价200万，收入N万）。程序猿
     每年先拿工资，再尝试买房，然后房子才涨价。
     
     输入：
         有多行，每行两个整数N（10<=N<=50),K(1<=K<=20)
     
     输出：
         针对每组数据，如果在第20年或者之前就能买下这套房子，则输出一个整数M，表示最早需要在第M年能买下，否则输出Impossible,输出需要换行
     
     样例输入：
     50 10
     40 10
     40 8
     
     样例输出：
     8
     Impossible
     10
     
     提示：
         注意数据类型，应当使用浮点数来保存结果；
     C++里多行输入（在不知道一共多少行的情况下）可以使用下面的语句，每输入一组数据就可以输出其结果，不用等待所有数据都输入完毕。
     
     while( cin>>N>>K ) {
         // do your magic
     }
     
     */
//    int N,K;
//    while ( cin>>N>>K ) {
//        
//        for (int i = 1; i <= 20; i++) {
//            if (i * N >= 200 * pow((1 + K/100.0),(i - 1)))   // pow((1+K/100.0),(i-1))   表示 (1 ＋ k／100.0）的（i-1）次方
//            {                                                // 头文件需要导入 #include <cmath>
//                cout<<i<<endl;
//                break;
//            }
//            else if ( i >= 20)
//                cout<<"Impossible"<<endl;
//        }
//    }
    
    /* 编程题＃4: 找和为K的两个元素
     描述：
         再一个长度为n（n < 1000）的整数序列中，判断是否存在某两个元素之和为k
     输入：
         第一行输入序列的长度n和k，用空格分开。
         第二行输入序列中的n个整数，用空格分开。
     输出：
         如果存在某两个元素的和为k，则输出yes,否则输出no
     
     样例输入：
     9 10
     1 2 3 4 5 6 7 8 9
     
     样例输出：
     yes
     
     */
//    int n, k;
//    cin>>n>>k;
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        cin>>a[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++ ) {
//            if ( a[i] + a[j] == k) {
//                cout<<"yes"<<endl;
//                goto OUT;
//            }
//        }
//        if ( i == n - 1 )
//            cout << "no" << endl;
//    }
//    
//    
//OUT:
//    return 0;
    
    
    /* 编程题＃5: 自整除数
     描述：
         对于一个整数n，如果各个位数的数字相加得到的数m能整除n，则称n为自整除数。例如21，21%（1+2）＝＝0，
     现在求出从10到n（n小于100）之间的所有自整除数。
     输入：
         一行，整数n，(10 <= n <= 100)
     输出：
         有多行。按从小到大的顺序输出所有大于等于10，小于等于n的自整除数，每行一个自整除数。
     
     样例输入：
     47
     样例输出：
     10
     12
     18
     20
     21
     24
     27
     30
     36
     40
     42
     45
     
     */
    
    int x;
    cin>>x;
    if (x >= 10 && x <= 100) {
        for (int i = 10; i <= x; i++) {
            if ( (i % (i/10 + i%10)) ==0 ) {
                cout<< i << endl;
            }
        }
    }
    
    return 0;
}
