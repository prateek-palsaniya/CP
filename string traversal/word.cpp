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

    int countuC = 0;
    int countlC = 0;

    for(int i = 0;i<s.size();i++){
        int k = s[i];
        if(k>=65 && k<=90){
            countuC++;
        }

        else if(k>=97 && k<=122){
            countlC++;
        }

    }
        for(int i = 0;i<s.size();i++){
            if(countuC > countlC){
                cout<<(char)toupper(s[i]);
            }

            else{
                cout<<(char)tolower(s[i]);
            }
        }

        // cout<<s;
    return 0;
}