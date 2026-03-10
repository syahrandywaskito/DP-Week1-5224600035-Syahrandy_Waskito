#include "lib/InputGenerator.h"

int SimpleInputGenerator::GenerateInput()
{
    return 3;
}

int RandomInputGenerator::GenerateInput()
{
    return (std::rand() % 10) + 1;
}