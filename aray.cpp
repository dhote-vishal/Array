#include <iostream>
#include <vector>

using namespace std;

// 1. Your class and logic
class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        if (nums.size() == 1) {
            return 2 * nums[0];
        
        }

        int first = nums[0];
        int last = nums[nums.size() - 1];
        
        return first + last;
    }
};

// 2. The main function (The starting point!)
int main() {
    // Create an instance of your class
    Solution mySolution;

    // Create a dummy array to test your logic
    vector<int> myNumbers = {10, 20, 30, 40};

    // Call your function and print the result
    int result = mySolution.sumOfFirstAndLast(myNumbers);
    
    cout << "The sum of the first and last number is: " << result << endl;

    return 0;
}