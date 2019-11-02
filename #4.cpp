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
    int max = a[1];
    for(int i = 2; i<n-1; i += 1)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            max = a[i];
        }
    }
    cout << max;
}
