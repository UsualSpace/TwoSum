/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {2,7,11,15};
    int target = 9;
    int indice1,
        indice2;
    bool found = false;

    int size = nums.size() - 1;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(nums[i] != nums[j] && nums[i] + nums[j] == target) {
                indice1 = i;
                indice2 = j;
                found = true;
                break;
            }
        }
        if(found) {
            break;
        }
    }

    cout << '[' << indice1 << ',' << indice2 << ']' << endl; //return location of found numbers in array;

    return 0;
}
