#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums1;
    vector<int>nums2;
    int m=nums1.size();
    int n=nums2.size();
    for(int i=0; i<n; i++){
        nums1[m++]=nums2[i];
    }
    for(int i=0; i<m+n; i++){
        cout<<nums1[i]<<"  ";
    }cout<<endl;
}