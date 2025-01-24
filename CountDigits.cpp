#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void vectorApproach(long long int n)
{
    vector<long long int>ans;

    while(n>0)
    {
        long long int lastDigit = n%10;
        ans.emplace_back(lastDigit);
        n/=10;
    }

    cout<<ans.size()<<endl;
}

void optimalApproach(long long n)
{
    int count = (int)(log10(n)+1);

    cout<<count<<endl;
}

int main()
{
    long long int n;
    cout<<"Enter number: ";
    cin>>n;

    // vectorApproach(n);
    optimalApproach(n);

    return 0;
}