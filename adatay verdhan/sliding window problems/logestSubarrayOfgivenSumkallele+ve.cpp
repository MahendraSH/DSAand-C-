// logest Subarray Of given Sum k all ele + ve
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the eles +ve" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum;
    cout << "Enter the sum of subarry";
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    int maxSize = -1;
    int currentsum = 0;
    int i = 0;
    int j = 0;
    cout << endl;
    while (i < n)
    { 
            currentsum += a[i];
        if(currentsum==sum)
        {
            // cout<<(i-j+1)<<endl;
            maxSize=max(maxSize,(i-j+1));
            
        }

        
         if(currentsum>sum){
            while(currentsum>sum)
            {
                cout<<a[j]<< " "<<currentsum<<endl;

                currentsum -= a[j];
                j++;
            }
        }
            i++;
    }
}
