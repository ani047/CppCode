#include<iostream>
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

    int getLength(){return length;}
    int getbreadth(){return breadth;}


    int area()      //Inline function
    {
        return length * breadth;
    }
    int perimeter();  
};

int Rectangle :: perimeter(){
    return 2*(length+breadth);     //Non-Inline function...
} 

class Cuboid: public Rectangle{


    

    private:
    int height;

    public:

    Cuboid(int l, int b, int h){
        setLength(l);
        setBreadth(b);
        height=h;
    }

    int areaCuboid(){
       return getLength()*getbreadth()*height;
    }
};

int main(){
    Cuboid c1(10,2,3);
    cout<<c1.areaCuboid()<<endl;
    Rectangle r(10,2);
    cout<<r.area()<<endl;

    return 0;
}