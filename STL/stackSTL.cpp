
//Last In First Out...  [LIFO]
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>st;
    st.push("Anil");
    st.push("Sanket");
    st.push("Kumar");
    st.push("Sanjeev");
    cout<<"top elements is->"<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<"top element is->"<<st.top()<<endl;

    cout<<"is my stack empty->"<<st.empty()<<endl;

}