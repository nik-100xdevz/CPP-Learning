#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countPairsWithSum(const vector<int>& arr, int target) {
    unordered_map<int, int> freqMap; // To store frequency of elements
    int count = 0;

    for (int num : arr) {
        int complement = target - num;

        // Check if the complement is already in the map
        if (freqMap[complement] > 0) {
            count++;
            freqMap[complement]--; // Decrement the complement count to avoid reuse
        } else {
            freqMap[num]++; // Store the frequency of the current number
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4,5,6};
    int target = 5;

    int result = countPairsWithSum(arr, target);
    cout << "Number of pairs with sum " << target << ": " << result << endl;

    return 0;
}
