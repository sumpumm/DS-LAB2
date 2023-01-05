#include<iostream>
using namespace std;
int main()
{
    int i, j, num, Prime;
    cout<<"Enter a number\n";
    cin>>num;
    cout<<"Prime Factors of "<<num<<" is : ";
    for(i=2; i<=num; i++){
        if(num%i==0)
        {
            Prime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    Prime = 0;
                    break;
                }
            }
            if(Prime==1)
            {
               cout<<"\n"<<i;
            }
        }
    }
    return 0;
}

