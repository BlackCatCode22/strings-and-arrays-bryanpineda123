#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    //prompt user for string
    cout << "\n\nWelcome to reverse string algorithm, please enter a word!\n\n" << endl;
    string str1;
    cin >> str1;
    cout << "\nYou have entered " << str1 << endl;

    //Reverse the given string
    string str2 = str1; //very important, creates 2nd variable with original string
    reverse(str1.begin(), str1.end());

    //uppercase the string
    string mySubStr = str1.substr(1, 20);
    string str3;
    str3 = toupper(str1[0]);
    string strResult = str3.append(mySubStr);

    cout << "The word has been reversed and its first letter has been uppercased to " << strResult << endl;

    //Compare given string and reversed string for palindrome
    if(str1.compare(str2) == 0){
        cout << "The statement: " << strResult << " is a palindrome!" << endl;
    }
    else if (str1.compare(str2) < 0){
        cout << "The statement: " << strResult << " is not a palindrome!" << endl;
    }

    return 0;
}
