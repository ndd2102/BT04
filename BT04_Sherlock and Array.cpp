#include<iostream>
using namespace std;
string check(int a[], int m)
{
     for(int k = 1; k < m ; k++)
        {
            int x = 0, y = 0;
            for(int i = k - 1; i >= 0; i--)
               {
                   x += a[i];
               }
            for(int j = k + 1; j <= m; j++)
               {
                   y += a[j];
               }
               if(a[k] == x; x == y)
               {
                return "YES";
               }
        }
        return "NO";
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        int m, x = 0, y = 0;
        cin >> m;
        int *a = new int[m];
        a[0] = 0;
        for(int j = 1 ; j <= m ; j++)
        {
            cin >> a[j];
        }
        cout << check (a, m);
         delete []a;
    }
}
