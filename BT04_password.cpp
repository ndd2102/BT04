#include<iostream>
#include<string>
using namespace std;

string daonguoc(string a)
{
    string s;
	for (int i = a.size() - 1; i >= 0; i--)
	{
        s += a[i];
	}
	return s;
}
char kitu(string s)
{
    int n = s.size();
    return s[n/2];
}
int main()
{
    int n;
    cin >> n;
    string *a = new string [n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i + 1; j < n; j ++)
        {
            if(a[i] == daonguoc(a[j]) )
            {
                cout << a[i].size() << ' ' << kitu(a[i]);
            }
        }
    }
    delete []a;
}
