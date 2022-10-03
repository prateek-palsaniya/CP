#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n+1);
        v[0] = 0;

        if (n % 2 == 0)
        {
            for (int i = 1;  i <= n;i++)
            {
                if(i%2==0){
                    v[i]= i-1;
                }

                else{
                    v[i] = i+1;
                }
            }
        }

        else{

            v[1]= 1;
            for (int i = 2; i <= n;i++)
            {
                if(i%2==0){
                    v[i]= i+1;
                }

                else{
                    v[i] = i-1;
                }
            }
        }

        for(auto &value:v){
            if(value == 0){
                continue;
            }

            else{
                cout<<value<<" ";
            }
        }

        cout<<endl;
    }
    return 0;
}