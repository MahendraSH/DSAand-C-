#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    int sum=0;
    int w;
    cin>>w;
    if(w<=n){
    //0 to n-1
    // 0 to w-1 ,1 to w ....
   for(int i=0;i<w;i++)
   {
        sum+=a[i];
   }
   max=sum;
   for(int i=w;i<n;i++)
   {
       sum-=a[i-w];
       sum+=a[i];
           if(max<sum)
           max=sum;
   }
    }
    
   cout<<max<<endl;

}