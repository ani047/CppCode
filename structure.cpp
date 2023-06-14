#include<iostream>
#include<string.h>
using namespace std;
struct Student{
    int rollNum;
    string firstName;
    char lastName[10];
    float percentage;
};
int main(){
    struct Student s1;
    s1.lastName[10]={'a'};
    s1.rollNum=2322;
    s1.firstName="Anil";
    cout<<s1.rollNum<<endl;
    cout<<s1.firstName<<endl;
    cout<<sizeof(Student)<< " byte"<<endl;
    
    return 0;
}
