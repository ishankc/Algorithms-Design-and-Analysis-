#include <iostream>
using namespace std;

int gcd(int a,int b);

int main()
{   
    int a,b;
    cout<<"Enter 2 nos \n";
    cin>>a>>b;

    int ans = gcd(a,b);
    cout<<"GCD = "<<ans<<"\n";
}

int gcd(int a, int b)
{
    if(b==0)
        return a;
    int r = a%b;

    return gcd(b,r);
}