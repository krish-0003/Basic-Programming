#include<iostream>
using namespace std;
class vector
{
    int x,y,z;
public:
    void get_data(int a, int b, int c)   { x=a; y=b; z=c; }
    void display_data() {cout<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<endl; }
    friend void operator-(vector &);
};
void operator-(vector &v)   // Must pass by reference  
{                           // If pass by value then it will not reflect
    v.x=-v.x;
    v.y=-v.y;
    v.z=-v.z;
}
int main()
{
    vector v1;
    v1.get_data(7,6,1);
    v1.display_data();
    -v1;
    v1.display_data();
}