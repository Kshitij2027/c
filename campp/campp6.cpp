#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n=15,i=1;
    // cin>>n;
    do {
        cout<<i<<endl;
        i++;
        if( i%3==0 && i %5==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if (i%3==0 || i%5==!0) {
            cout<<"Fizz"<<endl;
        }
        else if (i%3==!0 || i%5==0) {
            cout<<"Buzz"<<endl;
            i++;
        }
        else if (i%3==!0 && i%5==!0) {
            cout<<i<<endl;
        }
    }while (i<n);

    return 0;
}