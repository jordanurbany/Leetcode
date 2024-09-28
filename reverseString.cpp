#include <iostream>;
#include <string>;
using namespace std;

// both of these functions run with 0(N) time complexity
// where n is the length of the string or array
void reverse string(string &str)
{
    int n = string.length();
    // swap characters form both ends
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

void reverse array(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}
// how to reverse the string recusively
string reverseString(string str)
{
    // basecase is the string is =1 < then just return the string
    if (str.length() <= 1)
    {
        return str;
    }
    // reverse the substring from the second character
    // the substr takes the entire string minus the first character
    // becuase we are starting at index 1
    return reverseString(str.substr(1) + str[0]);
}

int main()
{
    // for reverse string
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;
    reverseString(str);
    cout << "Reversed string: " << str << endl;

    // for reverse array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    string s;
    cout << "Enter a string to reverse: ";
    cin >> s;

    // Call the recursive function to reverse the string
    string s;
    cout << "Enter a string to reverse: ";
    cin >> s;

    // Call the recursive function to reverse the string
    string reversed = reverseString(s);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
