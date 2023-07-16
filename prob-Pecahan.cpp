#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;

    double value1 = (double)a/b;
    double value2 = (double)c/d;

    if (value1 == value2)
    {
        cout << "sama" << endl;
    }
    else if (value1 > value2)
    {
        cout << "lebih besar" << endl;
    }
    else
    {
        cout << "lebih kecil" << endl;
    }
    return 0;
}