#pragma once 
#include <iostream>
#include <array>

class CpuEmulator
{
public:
    CpuEmulator(/* args */);
    ~CpuEmulator();

private:
   std::array<int,256> memory;                               
   std::array<int,8> registers; 

};
