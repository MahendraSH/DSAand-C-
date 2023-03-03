#include<bits/stdc++.h>
using namespace std;
void maxofsubarry(int arr[], int n,int w);

int main(){

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the eles" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int w;
    cout << "Enter window size" << endl;
    cin >> w;

    for(auto i :arr)
    cout<<i<<" ";
    cout<<endl;
    maxofsubarry(arr, n,w);
}
void maxofsubarry(int arr[],int n,int w)
{
    list <int> maxlist;
  int i=0;
  int j=0;

while (i < n)
{
    if(maxlist.empty())
    {
        maxlist.push_back(arr[i]);
    }
    else if(maxlist.front()<arr[i]){
        maxlist.clear();
        maxlist.emplace_back(arr[i]);
    }
    else if(maxlist.front()>=arr[i]){
        while(maxlist.empty()==false && maxlist.back()<arr[i]){
         maxlist.pop_back();
        }
        maxlist.emplace_back(arr[i]);
    }

    if(i-j+1==w)
    {
       cout<<maxlist.front()<<" ";
       if(maxlist.front()==arr[j])
       maxlist.pop_front();
       j++;

    }
    i++;
  }

}