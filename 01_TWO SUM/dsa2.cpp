#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Number of students must be positive." << endl;
        return 0;
    }

    int attendance[100];
    cout << "Enter attendance for " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> attendance[i];
    }

    int sum = 0, highest = attendance[0], lowest = attendance[0], zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        sum += attendance[i];
        if (attendance[i] > highest)
            highest = attendance[i];
        if (attendance[i] < lowest)
            lowest = attendance[i];
        if (attendance[i] == 0)
            zeroCount++;
    }

    float average = (float)sum / n;
    int mode = attendance[0], maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (attendance[j] == attendance[i])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            mode = attendance[i];
        }
    }

    cout << "\nAverage attendance: " << average << endl;
    cout << "Highest attendance: " << highest << endl;
    cout << "Lowest attendance: " << lowest << endl;
    cout << "Number of students with zero attendance: " << zeroCount << endl;
    cout << "Most common attendance (mode): " << mode << endl;

    return 0;
}