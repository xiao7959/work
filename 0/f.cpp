#include <iostream>

using namespace std;

/*
利用公式a*b%c=((a%c)*b)%c
*/
int get_mod1(int a, int b, int c)
{
    int result = 1;
    while (b)
    {
        result = result * a % c;
        b--;
    }
    return result;
}

/*
利用二分思想
*/
int get_mod2(int a, int b, int c)
{
    int result = 1;
    if (b == 1)
        return a % c;
    result = get_mod2(a, b / 2, c);
    result = result * result % c;
    if (b % 2 == 1)
        result = result * a % c;
    return result;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << get_mod1(a, b, c) << endl;
    cout << get_mod2(a, b, c) << endl;
    return 0;
}