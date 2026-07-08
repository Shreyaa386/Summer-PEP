#include<iostream>

#include<vector>
using namespace std;
class SegmentTree {
    vector<int> seg;
public:
    SegmentTree(int n){
        seg.resize(4*n);
    }
    void build(int ind,int low,int high,vector<int>&arr){
        if(low==high){
            seg[ind]=arr[low];
            return;
        }
        int mid=(low+high)/2;
        build(2*ind+1,low,mid,arr);
        build(2*ind+2,mid+1,high,arr);
        seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    }
};
int main(){
    vector<int>arr={1,3,5};
    int n=arr.size();
    SegmentTree st(n);
    st.build(0,0,n-1,arr);
    return 0;
}
