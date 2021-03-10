#include<iostream>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n; i++)
    {
        a[i] = i + 1;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > 1)
        {
            for(int j = i + 1 ; j < n; j++)
            {
                if(a[j] % a[i] == 0)
                    a[j] = 1;
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > 1) cout << a[i] << " ";
    }
}
