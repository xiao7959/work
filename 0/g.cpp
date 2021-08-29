#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, p;
    cout << "请输入三角形三边：";
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    cout << "三角形面积为：" << sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}