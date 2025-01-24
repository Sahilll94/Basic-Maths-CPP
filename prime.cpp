#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    cout<<"Enter the element to check prime for: ";
    cin>>n;

    bool isPrime = true;
    if(n<=1)
    {
        isPrime = false;
    }

    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }


    return 0;
}