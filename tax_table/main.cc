

#include <iostream>
#include <iomanip>
#include <string>

int main()
{

    std::cout << "INPUT PART" << std::endl
              << std::setfill('=') << std::setw(10) << "" << std::endl;

    float firstPrice{-1.0f};
    while (firstPrice < 0.0f)
    {
        std::cout << "Enter first price: ";
        std::cin >> firstPrice;
        if (firstPrice < 0)
        {
            std::cerr << "ERROR: First price must be at least 0 (zero) SEK" << std::endl;
            continue;
        }
        break;
    }

    float lastPrice{-1.0f};
    while (lastPrice < 0.0f)
    {
        std::cout << "Enter last price: ";
        std::cin >> lastPrice;
        if (lastPrice < 0)
        {
            std::cerr << "ERROR: Last price must be at least 0 (zero) SEK" << std::endl;
            continue;
        }
        break;
    }

    float stride{-1.0f};
    while (stride < 0.01f)
    {
        std::cout << "Enter stride: ";
        std::cin >> stride;
        if(stride < 0.01f){
            std::cerr << "ERROR: Stride must be at least 0.01" << std::endl;
            continue;
        }
        break;
    }
    
    std::cout << "Enter tax percent: ";
    float taxPercent;
    std::cin >> taxPercent;

    std::cout << std::endl;

    std::cout << "TAX TABLE" << std::endl
              << std::setfill('=') << std::setw(9) << "" << std::endl;

    int colWidts[3] = {12, 17, 20};

    std::cout << std::setfill(' ') << std::setw(colWidts[0]) << "Price" << std::setw(colWidts[1]) << "Tax" << std::setw(colWidts[2]) << "Price with tax" << std::endl;
    std::cout << std::setw(colWidts[0] + colWidts[1] + colWidts[2]) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    for (float price = firstPrice; price < lastPrice; price += stride)
    {
        float tax = price * (taxPercent * 0.01f);
        std::cout << std::fixed << std::setw(colWidts[0]) << std::setprecision(2) << price;
        std::cout << std::fixed << std::setw(colWidts[1]) << std::setprecision(2) << tax;
        std::cout << std::fixed << std::setw(colWidts[2]) << std::setprecision(2) << price + tax;
        std::cout << std::fixed << std::endl;
    }

    return 0;
}
