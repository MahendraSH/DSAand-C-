#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int w;
    cin >> w;

    int maxSum = INT_MAX;
    int sum = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (i - j + 1 == w)
        {
            if (maxSum > sum)
            {
                // cout<<sum<<endl;
                maxSum = sum;
            }
            sum -= a[j];
            j++;
        }
    }
    cout << maxSum;
}