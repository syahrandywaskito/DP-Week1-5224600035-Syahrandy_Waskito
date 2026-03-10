#pragma once
#include "Interface.h"
#include <cstdlib>

class SimpleInputGenerator : public IInputGenerator
{
    public:
        int GenerateInput() override;

};

class RandomInputGenerator : public IInputGenerator
{
    public:
        int GenerateInput() override;
};