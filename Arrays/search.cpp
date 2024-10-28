#include <iostream>

using namespace std;

int main()
{
    int numbers[100] = {
        15, 3, 89, 67, 21, 45, 6, 78, 92, 34,
        55, 88, 39, 12, 7, 99, 26, 84, 19, 2,
        57, 64, 38, 31, 100, 5, 76, 80, 23, 53,
        72, 35, 1, 60, 8, 37, 41, 9, 16, 66,
        73, 30, 24, 94, 50, 25, 68, 97, 17, 43,
        44, 62, 10, 11, 27, 63, 75, 14, 4, 90,
        40, 18, 86, 70, 32, 46, 81, 74, 71, 42,
        83, 54, 13, 20, 77, 56, 95, 59, 33, 82,
        30, 72, 91, 96, 69, 65, 58, 47, 48, 49
    };

    int data_to_search;
    int location = -1;
    int count = 0;

    cout << "Enter value to search and its location: ";
    cin >> data_to_search;

    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] == data_to_search)
        {
            location = i;
            count++;
            break;
        }
        count++;
    }

    if (location > -1)
    {
        cout << data_to_search << " is located at " << location << " in array." << endl;
        cout << "Total locations searched: " << count << endl;
    }
    else
    {
        cout << "No Data found" << endl;
    }    
}