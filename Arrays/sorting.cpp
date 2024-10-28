#include <iostream>

using namespace std;

int main(){

    int temp;
    char name[] = "qwertyuiopasdfghjklzxcvbnm";

    for (int i = 0; i < 26; i++)
    {
        for (int j = i +1; j < 26; j++)
        {
            if ((int)name[j] < (int)name[i])
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
        
        /* code */
    }
    
    
    

    // int numbers[100] = {
    //     15, 3, 89, 67, 21, 45, 6, 78, 92, 34,
    //     55, 88, 39, 12, 7, 99, 26, 84, 19, 2,
    //     57, 64, 38, 31, 100, 5, 76, 80, 23, 53,
    //     72, 35, 1, 60, 8, 37, 41, 9, 16, 66, 93,
    //     73, 30, 24, 94, 50, 25, 68, 97, 17, 43,
    //     44, 62, 10, 11, 27, 63, 75, 14, 4, 90,
    //     40, 18, 86, 70, 32, 46, 81, 74, 71, 42,
    //     83, 54, 13, 20, 77, 56, 95, 59, 33, 82,
    //     85, 61, 91, 96, 69, 65, 58, 47, 48, 49,
    //     22, 28, 29, 36, 51, 52, 79, 87, 98,
    // };

    // // Sorting array in acending order using swap method

    // for (int i = 0; i < 100; i++)
    // {
    //     for (int j = i + 1; j < 100; j++)
    //     {
    //         if (numbers[j] < numbers[i])
    //         {
    //             // Swap the variable values
    //             temp = numbers[i];
    //             numbers[i] = numbers[j];
    //             numbers[j] = temp;
    //         }
    //     }
    // }
    
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << numbers[i] << endl;
    // }
    
    cout << name << endl;
}