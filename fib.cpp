#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    auto t1 = clock();
    auto t2 = clock();

    int cnt = 0;
    int a = 1, b = 1, c = 0;
    //运行一分钟
    while ((t2 - t1) / CLOCKS_PER_SEC < 10)
    {
        // printf("%d\n", t2-t1);
        t2 = clock();
        //计算斐波那契数列
        c = a + b;
        a = b;
        b = c;
        //每一秒输出一次
        if ((t2 - t1) / CLOCKS_PER_SEC > cnt)
        {
            cnt++;
            cout << c << "  " << cnt << endl;
        }
    }
    printf("end\n");

}