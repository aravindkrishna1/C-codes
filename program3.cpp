#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int genran(int b)
{
    srand(time(NULL));
    b=rand();
    b=(b*10)+2+25*20+1;
    b=(b%3)+1;
    return b;
}
void image_print(int k)
{
    if(k==3)
    {
            cout<<"--------- -----------\n";
            cout<<"------- -- ----------\n";
            cout<<"------ ---- ---------\n";
            cout<<"------- -- ----------\n";
            cout<<"--------- -----------\n";
            cout<<"------- --- ---------\n";
            cout<<"-----  -----  -------\n";
            cout<<"----  -------  ------\n";
    }
    else if(k==1)
    {
            cout<<"---------  ----------\n";
            cout<<"----- -------- ------\n";
            cout<<"--- ------------ ----\n";
            cout<<"-- --------------- --\n";
            cout<<"---- ----------- ----\n";
            cout<<"----- -------- ------\n";
            cout<<"-------- --- --------\n";
            cout<<"----------  ---------\n";
    }
    else 
    {
            cout<<"---------------------\n";
            cout<<"----- -------- ------\n";
            cout<<"----- -------- ------\n";
            cout<<"----- -------- ------\n";
            cout<<"----- -------- ------\n";
            cout<<"---------------------\n";
            
    }
}

int main()
{
    int a,b,you=0,com=0,j=5;
    cout<<"You are going to play stone paper scissor. \nStone=1\nPaper=2\nScissor=3\n";
    b=genran(b);
    cout<<"Going to start...... !\n";
    cout<<"Come on buddy enter your choice :\n";
    cin>>a;
    do
    {   
        
        if((a==1 && (b==2 || b==3)) || (a==2 && b==1) || (a==3 && b==2 ))
        {
            image_print(a);
            cout<<"\n\n";
            image_print(b);
            cout<<"You won !\n";
            you++;
            b=genran(b);
            cout<<"You got : "<<you<<" \t Computer : "<<com<<"\n";
            cout<<"Try again\n";
            cin>>a;
            j--;

        }
        else if(a==b)
        {
            image_print(a);
            cout<<"\n\n";
            image_print(b);
        cout<<"Draw...! \n";
        cout<<"You got : "<<you<<" \t Computer : "<<com<<"\n";
        b=genran(b);
        cout<<"No worry ! Try again\n";
        cin>>a;
        j--;
        }
        else
        {
            image_print(a);
            cout<<"\n\n";
            image_print(b);
        cout<<"Sorry you lose\n";
        com++;
        cout<<"You got : "<<you<<" \t Computer : "<<com<<"\n";
        b=genran(b);
        cout<<"No worry ! Try again\n";
        cin>>a;
        j--;
        }
        
    }while(j>0);
    if(you>com)
    {
        cout<<"You won ...!\nYour point :"<<you<<" Computer points :"<<com;
    }
    else
    {
        cout<<"Computer won...!\nYour point :"<<you<<"  Computer points :"<<com;
    }
return 0;
}