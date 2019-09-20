#include <iostream>
using namespace std;

int ans(int x[],int n ,int l);

int main()
{
    int n;
    cout<<"Enter the number of petrol stations.\n";
    cin>>n;

    int x[n+2];

    cout<<"Enter distance from starting point \n";
    for(int i =0;i<n+2;i++)
    {
        cin>>x[i];
    }

    int l;
    cout<<"Enter Mileage of vehicle \n";
    cin>>l;

    int f = ans(x,n,l);
    if(n!=-1)
        cout<<"Number of refills required = "<<f<<"\n";
    else
    {
            cout<<"Not Possible \n";
    }

    return 0;
    
}

int ans(int x[], int n, int l)
{
    int nr = 0,cr = 0,lr = 0;

    while(cr<=n)
    {
        lr = cr;
        cout<<"Current refill = "<<cr<<"\t Last Refill = "<<lr<<"\t Number of refills = "<<nr<<"\n";
        while(cr<=n && (x[cr+1] - x[lr])<=l)
        {
            cr = cr +1;
        }

        if(cr==lr)
            return -1;

        if(cr<=n)
            nr = nr + 1;

    }
    return nr;
}