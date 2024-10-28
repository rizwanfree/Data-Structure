#include <iostream>

using namespace std;

int main(){

    int arr[5] = {};

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number to insert in array at "<< i << " position: " << endl;
        cin >> arr[i];
    }

    // arr[0] = 100;
    // arr[1] = 50;
    // arr[2] = 25;
    // arr[3] = 75;
    // arr[4] = 250;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

}