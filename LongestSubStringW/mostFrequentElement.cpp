#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findMostFrequent(const vector<int> &arr)
{
    unordered_map<int, int> freq;     // to store the frequency of each element
    int mostFrequentElement = arr[0]; // initialize the most frequent
    int maxFrequency = 0;             // initialize the maximum frequency

    // traverse the array to build the frequency map
    for (int element : arr)
    {
        frequencyMap[element]++; // increment the count for the element

        // if the current frequency is greater then max frequency update it
        if (frequencyMap[element] > maxFrequency)
        {
            maxFrequency = frequencyMap[element];
            mostFrequentElement = element;
        }
    }
    return mostFrequentElement;
}

int main()
{
    vector<int> arr = [ 1, 2, 3, 3, 3, 4, 5, 6, 2, 5, 6, 8 ];

    int mostFrequent = findMostFrequent(arr);
    cout << "most frequent element" << mostFrequent << endl;
    return 0;
}