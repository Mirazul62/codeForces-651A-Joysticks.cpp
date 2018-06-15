#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,count=0;
    cin>>n>>m;
    if(n<=1 && m<=1)
        count=0;
    else
   {
       while(n>=0 && m>=0)
    {
        if(n<=m && m!=0 && n!=0)
        {
            n++;
            m-=2;
            if(n>=0 && m>=0)
           /// cout<<n<<" "<<m<<endl;
            count++;
        }
        if(m<=n && n!=0 && m!=0)
        {
            m++;
            n-=2;
             if(n>=0 && m>=0)
          ///  cout<<n<<" "<<m<<endl;
            count++;
        }
        if(n==0)
            break;
        if(m==0)
            break;
       /* if(n==1 && m==2)
        {
            count++;
            break;
        }
        if(m==1 &&  n==2)
        {
            count++;
            break;
        }*/
    }
   }
    cout<<count;
}
