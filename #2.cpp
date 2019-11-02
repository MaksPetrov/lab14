#include <iostream>

using namespace std;

int main()
{
    bool m = true;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    int d = a[1]-a[0];
    for(int i = 2; i<n; i += 1)
    {
        if(a[i]-a[i-1]!=d)
        {
            m = false;
        }
    }
    if(m==true)
    {
        cout << d;
    }
    else
    {
        cout << 0;
    }
}
