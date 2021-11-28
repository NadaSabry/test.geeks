#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MaxSubstr(string s)
{
    char c1,c2;int ans=0;
    for(int i=0;i<s.size();i++){
            c1=s[i];
            int cont1=1,cont2=0,flag=1;
        for(int j=i+1;j<s.size();j++){
            if(s[j]!=c1&&flag)
               {
                 flag=0;
                 c2=s[j];
                 cont2++;
               }
            else if(s[j]==c1)
                cont1++;
            else if(s[j]==c2)
                 cont2++;
            else break;
        }
        if(cont1==cont2)ans=max(ans,cont1+cont2);
    }return ans;

}
int main()
{
string s;
cin>>s;
cout<<MaxSubstr(s);
}
