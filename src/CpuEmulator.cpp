#include "CpuEmulator.hpp"
#include <iostream>
#include <array>

CpuEmulator::CpuEmulator(/* args */)
{
    std::cout << "Loaded Cpu Emulator " << std::endl;
    std::cout << "Register size: " << this->registers.size() << std::endl;
    std::cout << "Memory size: " << this->memory.size() << std::endl;
    std::cout << "Initializing memory to 0" << std::endl;

    for (int i = 0; i < this->memory.size(); i++)
    {
        this->memory[i] = 0;
    }

    std::cout << "Memory initialized" << std::endl;

    std::cout << "Initializing registers to 0" << std::endl;
    for (int i = 0; i < this->registers.size(); i++)
    {
        this->registers[i] = 0;
    }
    std::cout << "Registers initialized" << std::endl;
}

CpuEmulator::~CpuEmulator()
{
    std::cout << "Shuting down Cpu Emulator" << std::endl;

    for (int i = 0; i < this->memory.size(); i++)
    {
        this->memory[i] = 0;
    }
    std::cout << "Memory erased" << std::endl;

    for (int i = 0; i < this->registers.size(); i++)
    {
        this->registers[i] = 0;
    }
     std::cout << "Registers Erased" << std::endl;
}
