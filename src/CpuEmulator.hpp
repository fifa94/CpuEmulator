#pragma once

#include "Stack.hpp"
#include <iostream>
#include <array>
#include <vector>
#include <string>

class CpuEmulator
{
public:
    CpuEmulator(/* args */);
    ~CpuEmulator();
    bool LoadInstruction(int val);

private:
    Stack<int> InstructionMemory;
    std::array<int, 256> memory;
    std::array<int, 8> registers;
};


