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
    for(int i = 0; i<n; i += 1)
    {
        for(int j = i+1; j<n; j += 1)
        {
            if(a[i]==a[j])
            {
                cout << i << " " << j;
            }
        }
    }
}
