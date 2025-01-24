#include<iostream>
using namespace std;

int gcd(int &n, int &m)
{
    while(n>0 && m>0)
    {
        if(n>m)
        {
            n = n%m;
        }
        else
        {
            m = m%n;
        }
    }

    if(n==0)
    {
        return m;
    }

    return n;
}

int main()
{
    int n,m;

    cout<<"Enter num1: ";
    cin>>n;

    cout<<"Enter num2: ";
    cin>>m;


    int ans = gcd(n,m);

    cout<<"GCD("<<n<<","<<m<<") = "<<ans<<endl;





    return 0;
}