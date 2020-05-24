#include <iostream>
#include <algorithm>
#include <cstdio>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        ll a,b,t;
        cin>>a>>b;
        t=a;
        ll mi=10,ma=0,flag=1;
        for(int i=1;i<b;i++){
            mi=10;
            ma=0;
            t=a;
            while(t){
                mi=min(t%10,mi);
                ma=max(t%10,ma);
                t=t/10;
                if(mi==0){
                    flag=0;break;
                }
            }
            if(flag==0) break;
            a=a+mi*ma;
        }
        cout<<a<<endl;
    }
}
