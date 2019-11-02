#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    int min = a[0];
    for(int i = 2; i<n; i += 2)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    cout << min;
}
