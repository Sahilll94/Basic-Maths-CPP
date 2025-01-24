#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    cout<<"Enter N = ";
    cin>>n;

    vector<int>ans;

    // n = 12345
    // n%10 will give the last element eg. 5;
    // n/10 will remove the last element eg. 1234;
    while(n>0)
    {
        int lastDigit = n%10;
        ans.emplace_back(lastDigit);
        n /= 10;
    }

    reverse(ans.begin(),ans.end());

    cout<<"[ ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"]";

    return 0;
}