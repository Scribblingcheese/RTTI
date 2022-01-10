#include<iostream>
#include<typeinfo>
using namespace std;
class Base
{

public:
    virtual void once()
    {
    }
};
class myclass:public Base
{

};
class yourclass:public Base
{

};
int main()
{
    Base *b1,*b2;
    cout<<"Type of Base class"<<endl<<typeid(b1).name()<<endl;;
    myclass d,*dp;
    b1=&d;
    cout<<"Type of myclass"<<endl<<typeid(*b1).name()<<endl;
    if (dp=dynamic_cast<myclass*>(b1))
        cout<<endl<<"Of type myclass "<<endl;
    else
        cout<<endl<<"Not of type myclass"<<endl;
    yourclass y;
    b2=&y;
    cout<<"Type of d2 class"<<endl<<typeid(*b2).name()<<endl;
    if (dp=dynamic_cast<myclass*>(b2))
        cout<<endl<<"Of type myclass"<<endl;
    else
        cout<<endl<<"Not of type myclass"<<endl;
    return 0;
}
