#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
    string s;
    cin>>s;
    int k= s[0];

    if(k>=97 && k<=122){
        s[0] = (float)toupper(s[0]);
    }

    cout<<s;
    return 0;
}