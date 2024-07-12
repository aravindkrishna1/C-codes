#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int a,b;
cout<<"Enter the number : ";
cin>>a;
srand(time(NULL));
b=rand();
b=(b*10)+2+25*20+1;
b=(b%100);
//cout<<b<<"\n";
while(a!=b)
{
    cout<<"Not correct\n";
    if(a<b)
    {
        cout<<"smaller...! Guess again :\n";
        cin>>a;

    }
    else
    {
        cout<<"bigger...! Guess again :\n";
        cin>>a;
    }
};
if(a==b)
{
    cout<<"Correct ....!";
}

return 0;
}