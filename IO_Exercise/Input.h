#ifndef INPUT_H
#define INPUT_H

#include <vector>
#include <iostream>

class Input
{

public:
    Input() = default;
    void Add(const int input)
    {
        values.push_back(input);
    }

    
    int First()
    {
        return *values.begin();
    }

    void Clear()
    {
        values.clear();
    }

protected:
    std::vector<int> values;
};


template <typename T>
class TypedInput : Input{
    TypedInput(T value){
        
    }


};

#endif