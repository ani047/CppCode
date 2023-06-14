
//First In First Out...   [FIFO]
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("Aarti");
    q.push("Arjun");
    q.push("Aman");
    q.push("Ankush");

    cout<<"Front->"<<q.front()<<endl;
    cout<<"Back->"<<q.back()<<endl;

    q.pop();

    cout<<"front->"<<q.front()<<endl;

    cout<<"size->"<<q.size()<<endl;
}