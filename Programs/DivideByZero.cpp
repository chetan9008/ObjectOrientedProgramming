#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a and b : " << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw(b);
        }
        else
        {
            cout << a << "/" << b << " is " << a / b << endl;
        }
    }
    catch(int x)
    {
        cout << "EXPECTION DETECT : divide by zero"<< endl;
    }
    return 0;
}