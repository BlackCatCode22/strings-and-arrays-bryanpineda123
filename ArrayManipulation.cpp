#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    //Array Manipulation Exercises:

    //Find min and max values in an array.
    //Find the second-largest element in an array,
    //remove duplicates from an array,
    //rotate an array by a given number of positions.

    int max; //9
    int min; //1
    int secondLargestArray; //8

    int myTable[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //Finds Min and Max Values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (myTable[i][j] > max) {
                max = myTable[i][j];
            }
            if (myTable[i][j] < min) {
                min = myTable[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (myTable[i][j] > max) {
                secondLargestArray = max;
                max = myTable[i][j];
            } else if (myTable[i][j] > secondLargestArray && myTable[i][j] < max) {
                secondLargestArray = myTable[i][j];
            }
        }
    }

    cout << "Max Value: " << max << endl;
    cout << "Min Value: " << min << endl;
    cout << "Second Largest Array: " << secondLargestArray << endl;


   // Rotate the array by a given number of positions
    int rotateBy = 2;
    int temp[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = myTable[i][j];
        }
    }

    // Perform rotation
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            myTable[i][(j + rotateBy) % 3] = temp[i][j];
        }
    }

    //Display the rotated array
    cout << "Array after rotating by " << rotateBy << " positions:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << myTable[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
