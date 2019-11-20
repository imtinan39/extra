#include<bits/stdc++.h>
using namespace std;
int main()
{
    float low,mid,high;
    float x;
    cin>>x;
    high=x;
    low=0.0;

    while((high-low)>.00001)
    {
        mid=(high+low)/2;

        if(mid*mid>x)
        {
           high=mid;
        }
        else if(mid*mid<x)
        {
            low=mid;
        }
    }

    cout<<mid<<endl;
}
