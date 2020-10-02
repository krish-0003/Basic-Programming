#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    friend istream &operator>>(istream &, complex &);
    friend ostream &operator<<(ostream &, complex);
};

istream &operator>>(istream &din, complex &c)
{
    cin>>c.a>>c.b;
    return din;
}

ostream &operator<<(ostream &dout, complex c)
{
    cout<<c.a<<" "<<c.b;
    return dout;
}

int main()
{
    complex c1;
    cout<<"Enter complex number : ";
    cin>>c1;                            // operator>>(cin, c1);
    cout<<"Your complex number is : ";
    cout<<c1;                           // operator<<(cout, c1);
}