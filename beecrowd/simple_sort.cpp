#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int nums[] = {a, b, c};
    int nums2[] = {a, b, c};
    int len = sizeof(nums)/sizeof(nums[0]);
    sort(nums, nums + len);
    for (int num : nums){
        cout << num << endl;
    }
    cout << endl;
    for (int num : nums2){
        cout << num << endl;
    }
    return 0;
}