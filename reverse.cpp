#include <iostream>
using namespace std;
int main()
{
    int a,r,rev=0;
    cin >> a;
    while(a!=0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a/=10;
    }
    cout << rev << endl;
    return 0;
}