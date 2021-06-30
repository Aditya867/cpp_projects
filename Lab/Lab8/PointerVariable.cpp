#include <iostream>

using namespace std;

class box
{
private:
    double length, breadth, height;
public:
    box(double len,double brdth, double hgt)
    {
        cout<<"constructor is called"<<endl;
        length=len;
        breadth=brdth;
        height=hgt;
    }
    double volume()
    {
        return length*breadth*height;
    }
};
int main()
{
    box box1(3,5,6),box2(1,2,3);
    box *ptrbox;  

    cout<<"address of box1 variable "<< &box1<<endl;

    ptrbox=&box1;  

    cout<<" volume of box1 : "<<ptrbox->volume()<<endl;
    

    cout<<"address of box1 variable "<< &box2<<endl;
    ptrbox=&box2;
    cout<<" volume of box2 : "<<ptrbox->volume()<<endl;
    return 0;
}