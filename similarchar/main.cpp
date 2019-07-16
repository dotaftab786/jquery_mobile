#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch[500001];
    for(int i=0;i<n;i++)
        cin >> ch[i];
        int* arr = new int[n];
        for(int i=0;i<n;i++)
            arr[i]=0;
    map<char,int>m;
    for(int i=0;i<n;i++)
    {
        if(m[ch[i]] != 0)
        {
            arr[i]=m[ch[i]];
            m[ch[i]]++;
        }
        else
        {
            m[ch[i]]++;
        }
    }
    int q;
    cin >> q;
    while(q--)
    {
          int p;
          cin >> p;
          int ans = arr[p-1];
            cout << ans <<endl;
    }
    return 0;
}
