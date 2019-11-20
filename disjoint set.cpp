#include<bits/stdc++.h>
using namespace std;

 int par[5+1];
    int makeset(int k)
    {
        par[k]=k;
    }

    int fin(int a)
    {
        if(par[a]=a)
        {
            return a;
        }
        else
        {
           par[a]=fin(par[a]);
           return(par[a]);
        }
    }

int uni(int a,int b)
    {
        int u;
        int v;
         u=fin(a);
         v=fin(b);
       if(u==v)
       {
           return 1;
       }
       else
       {
           par[u]=v;
            return 0;
       }
    }


int main()
{

 for(int i=1;i<6;i++)
 {
     makeset(i);
 }


}
