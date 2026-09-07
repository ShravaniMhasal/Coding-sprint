#include <iostream>
using namespace std;
int linearSearch( int patient[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (patient[i] == key) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int binarySearch( int patient[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (patient[mid] == key)
        {
            return mid; // Return the index of the found element
        }
        else if (patient[mid] < key)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if the element is not found

}

int main()
{
    int patient[] = {101, 105, 110, 115, 120, 125, 130};
    int n = 7;
    int key;
    cout << "Enter the patient ID to search: ";
    cin >> key;

    int result1 = linearSearch(patient, n, key);
    if (result1 != -1) {
        cout << "Linear Search: Patient ID found at index: " << result1 + 1 << endl;
    }
    else {
        cout << "Linear Search: Patient ID not found." << endl;
    }
        int result2 = binarySearch(patient, n, key);
    if (result2 != -1) {
        cout << "Binary Search: Patient ID found at index: " << result2 + 1<< endl;
    }
    else {
        cout << "Binary Search: Patient ID not found." << endl;
    }
        return 0;         
}   
