#pragma once
#include <vector>   
#include <iostream>
#include <optional>

template <typename T>
class Stack
{
public:
    Stack(/* args */);
    ~Stack();
    void Push(const T data);
    std::optional<T> Pop (void);
private:
    std::vector<T> storage;
    int cnt;
};

template <typename T>
Stack<T>::Stack(/* args */){
    std::cout << "Stack constructor" << std::endl;
    this->cnt = 0;
}

template <typename T>   
Stack<T>::~Stack(){
    std::cout << "Stack destructor" << std::endl;
}

template <typename T>   
void Stack<T>::Push(const T data){
    std::cout << "Stack Push value: " << data << std::endl;

    storage.push_back(data);
    this->cnt++; 
}

template <typename T>
std::optional<T> Stack<T>::Pop (void)
{
    if (this->cnt > 0)
    {
        T return_val;
        std::cout << "Deleting this val from stack: " << this->storage[0] << std::endl;
        return_val = this->storage.at(0);
        this->storage.erase(this->storage.begin());
        this->cnt--;
        return std::optional(return_val);
    }
    else if (this->cnt <= 0)
    {
        std::cout << "Stack is empty" << std::endl;
        return std::nullopt;
    }
    return std::nullopt;
}


