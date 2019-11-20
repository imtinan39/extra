#include<bits/stdc++.h>
using namespace std;

struct edge{

int p,k,d;

};

int par[100];
int makeset(int k)
{
    par[k]=k;
}

int fin(int a)
{
    if(par[a]==a)
    {
        return a;
    }
    else
    {
        par[a]=fin(par[a]) ;
         return par[a];
    }
}

int uni( int a,int b)
{
    int u;
    int v;



    u=fin(a);
    v=fin(b);
    if(u==v)
    {
       return 0;
    }
    else if(u!=v)
    {

        par[u]=v;
        return 1;




    }

}

int main()
{
     int n,e;
    cin>>n>>e;
    struct edge edges[e];

    for(int i=1;i<=n;i++)
    {
       makeset(i);
    }
int cost=0,cnt=0;
for(int i=0;i<e;i++)
{
   cin>>edges[i].p;
   cin>>edges[i].k;
   cin>>edges[i].d;


}
for(int i=0;i<e;i++)
{
    for(int j=0;j<e-1;j++)
    {
        if(edges[j].d>edges[j+1].d)
        {
            swap(edges[j],edges[j+1]);
        }
    }
}

cout<<"sorted edges"<<endl;
for(int i=0;i<e;i++)
{
    cout<<edges[i].p<<" "<<edges[i].k<<" "<<edges[i].d<<endl;

}



for(int i=0;i<e;i++)

{
    if(uni(edges[i].p,edges[i].k)==1)
    {
        cost=cost+edges[i].d;
    }




}
 cout<<cost<<endl;


}
