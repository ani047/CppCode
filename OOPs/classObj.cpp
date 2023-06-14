#include <iostream>
#include <string.h>
using namespace std;

class Rectangle
{
   
private:
    int length, breadth;


public:
    
    // Rectangle(){    // Default
    //     length=1;
    //     breadth=1;
    // }

    Rectangle(int l=0, int b=0){    //Parametrized
        length =l;
        breadth =b;
    }

    Rectangle(Rectangle &r1){
        length=r1.length;
        breadth=r1.breadth;
    }


    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }


    int area()      //Inline function
    {
        return length * breadth;
    }
    int perimeter();  
};

int Rectangle :: perimeter(){
    return 2*(length+breadth);     //Non-Inline function...
}

int main()
{
    Rectangle r;
    cout<<r.area()<<endl;
    Rectangle r1(4,2);
    cout<<r1.area()<<endl;
    Rectangle r2(r1);
    cout<<r2.area()<<endl;
    return 0;
}