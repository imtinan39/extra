#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],key,result=0;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];

    }
   cin>>key;
  int  beg=0;
  int  en=10-1;
  int mid;
    while(beg<=en)
    {
        mid =(beg+en)/2;

        if(arr[mid]==key)
        {
            result=mid;
            en=mid-1;
        }

        else if(key>arr[mid])
        {
            beg=mid+1;
        }
        else
        {
            en=mid-1;
        }
    }
    cout<<result<<endl;


}
