#include<bits/stdc++.h>
using namespace std;

//Theory 
// Cyclic Sort algorithm implementation for sorting a vector of integers in-place.
// The variable 'i' represents the current index being processed in the array.
// For each element, its correct position is determined as 'arr[i] - 1'.
// If the current element is not in its correct position, a swap is performed.
// The loop continues until all elements are in their rightful places, resulting in a sorted vector.


vector<int> cyclicSort(vector<int> arr){
    int i=0;
    while(i<arr.size()){
        int cur= arr[i]-1;
        if(arr[i]!=arr[cur]){
            int temp=arr[i];
            arr[i]=arr[cur];
            arr[cur]=temp;
        }else{
            i++;
        }
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> arr= {1,4,3,5,6,7,8,2,10,9};
    vector<int> res= cyclicSort(arr);

    for(auto a:res){
        cout<<a<<" ";
    }
    return 0;
}


// Questions related to this
// https://leetcode.com/discuss/study-guide/2958275/cyclic-sort-important-pattern
// 1. https://leetcode.com/problems/missing-number/
// 2. https://leetcode.com/problems/first-missing-positive/ (VVVV Imp.)
