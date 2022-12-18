
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    // {
    //     // One Integer
    //     cout << "Enter one integer: ";
    //     int number;
    //     cin >> number;
    //     cout << "You entered the number: " << number << endl;
    // }
    // cout << endl;
    // {
    //     // Four Integers
    //     cout << "Enter four integers: ";
    //     int numbers[4];
    //     cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
    //     cout << "You entered the numbers: " << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3] << endl;
    // }
    // cout << endl;
    // {
    //     // One integer and one real
    //     cout << "Enter one integer and one real number: ";
    //     int number;
    //     double real;
    //     cin >> number >> real;
    //     cout << "The real is: " << setw(10) << setprecision(4) << real << endl;
    //     cout << "The integer is: " << setw(7) << number << endl;
    // }
    // cout << endl;
    // {
    //     // One real and one integer
    //     cout << "Enter one real and one integer number: ";
    //     double real;
    //     int number;
    //     cin >> real >> number;
    //     cout << "The real is: " << setfill('.') << setw(10) << setprecision(4) << real << endl;
    //     cout << "The integer is: " << setfill('.') << setw(7) << number << endl;
    // }
    // cout << endl;
    // {
    //     // One character
    //     cout << "Enter a character: ";
    //     char character;
    //     cin >> character;
    //     cout << "You entered: " << character << endl;
    // }
    // cout << endl;
    // {
    //     // One word
    //     cout << "Enter a word: ";
    //     string word;
    //     cin >> word;
    //     cout << "The word '" << word << "' has " << word.length() << " character(s)." << endl;
    // }
    // cout << endl;
    // {
    //     // One integer and one word
    //     cout << "Enter an integer and a word: ";
    //     int number;
    //     string word;
    //     cin >> number >> word;
    //     cout << "You entered '" << number << "' and '" << word << "'." << endl;
    // }
    // cout << endl;
    // {
    //     // One character and one word
    //     cout << "Enter an character and a word: ";
    //     char character;
    //     string word;
    //     cin >> character >> word;
    //     cout << "You entered the string \"" << word << "\" and the character '" << character << "'." << endl;
    // }
    // cout << endl;
    {
        // One word and one real number
        cout << "Enter a word and a real number: ";
        string word;
        double real;
        cin >> word >> real;
        cout << "You entered \"" << word << "\" and \"" << fixed << setprecision(3) << real << "\"." << endl;
        cin.clear();
    }
    cout << endl;
    {
        // Text-line
        cout << "Enter a text-line: ";
        string textLine;
        getline(std::cin,textLine);
        cout << "You entered: \"" << textLine << "\"" << endl;
    }
    cout << endl;
    {
        // Second Text-Line
        cout << "Enter a second line of text: ";
        string textLine;
        getline(cin, textLine);
        cout << "You entered: \"" << textLine << "\"" << endl;
    }
    cout << endl;
    {
        // Three words
        cout << "Enter three words: ";
        string words[3];
        cin >> words[0] >> words[1] >> words[2];
        cout << "You entered: '" << words[0] << " " << words[1] << " " << words[2] << "'" << endl;
    }
    cout << endl;

    return 0;
}