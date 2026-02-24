

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
    std::string filename{"test_text.txt"};

    std::ifstream istrm(filename, std::ios::binary);
    if (!istrm.is_open())
        std::cout << "failed to open " << filename << std::endl;
    else
    {
        int numberOfWords{0};
        int characterTotal{0};
        std::string word{};
        istrm >> word;
        std::string shortestWord{word};
        std::string longestWord{word};
        if (istrm.eof())
        {
            std::cerr << "ERROR: File is empty." << std::endl;
            return 1;
        }
        while (!istrm.eof())
        {
            if (shortestWord.length() > word.length())
                shortestWord = word;
            if (longestWord.length() < word.length())
                longestWord = word;

            characterTotal += word.length();
            numberOfWords++;
            istrm >> word;
        }

        std::cout << "There are " << numberOfWords << " in the file." << std::endl;
        std::cout << "The shortest word was \"" << shortestWord << "\" with " << shortestWord.length() << " character(s)." << std::endl;
        std::cout << "The longest word was \"" << longestWord << "\" with " << longestWord.length() << " character(s)." << std::endl;
        std::cout << "The average length was " << std::fixed << std::setprecision(2) << static_cast<float>(characterTotal) / static_cast<float>(numberOfWords) << " character(s)." << std::endl;
    }
    return 0;
}