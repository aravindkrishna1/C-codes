#include <iostream>
using namespace std;
int main()
{
    int a,size,i,k=0;
    cout<<"Enter the size of array\n";
    cin>>size;
    int AR[size],element;
    cout<<"Enter the elements in the array\n";
    for(i=0;i<size;i++)
    {
        cin>>AR[i];
    }
    cout<<"Enter the element to be searched : \n";
    cin>>element;
    for(i=0;i<size;i++)
    {
        if(AR[i]==element)
        {
            cout<<"Element is found at position "<<i+1<<"\n";
            k++;
        }
    }
    if(k==0)
    cout<<"ELement is not in the array";
    return 0;

}