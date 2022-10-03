#include<bits/stdc++.h>
using namespace std;

int main()
{
    // auto sum = [](int x){return x+2;};
    // cout<<[](int x,int y){return x+y;}(2,3);
    //  cout<< sum(2);

    vector<int> v = {2,3,-5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;} )<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;} )<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;} )<<endl;
      
    return 0;
}