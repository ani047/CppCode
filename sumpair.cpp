#include<iostream>
using namespace std;
class Hero{
   public:
    int health;
    int level;
    int getHealth(){
        return health;
    }
    int setHealth(int h){
        health = h;
    }
};
int main(){
    Hero h1;
    h1.setHealth(70);
    cout<<h1.health<<endl;
    cout<<sizeof(Hero)<<" Byte"<<endl;
    cout<<"Hello"<<endl;
} 