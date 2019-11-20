#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        cin>>a[i];

    }
    for( int j=1;j<=5;j++)
    {
        int k=a[j];
        int i=j-1;
        while(i>-1&&a[i]>k)
        {
            a[i+1]=a[i];
            i=i-1;
            a[i+1]=k;
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<' ';
    }
}
