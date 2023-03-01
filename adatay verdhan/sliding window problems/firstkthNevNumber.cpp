#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the eles" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int w;
    cout << "Enter window size" << endl;
    cin >> w;
    queue<int> q;
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0, j = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            q.push(i);
        }
        if (i - j + 1 == w)
        {
            if (q.empty())
            {
                cout << 0<< " ";
            }
            else
            {
                cout << a[q.front()] <<" ";
                if (q.empty()==false&&q.front()==j)
                    q.pop();
               
            }
            j++;
        }
    }
    cout<<endl;
}