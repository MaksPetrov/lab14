#include <iostream>

using namespace std;

int main()
{
    int k, l, n;
    float s = 0;
    cin >> n >> k >> l;
    int a[n];
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    for(int i = k; i<=l; i += 1)
    {
        s += a[i];
    }
    cout << s/(l-k+1);
}
