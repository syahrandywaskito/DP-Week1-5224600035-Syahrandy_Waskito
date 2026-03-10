#pragma once
#include "Interface.h"

class ScoringSystem : public IScoringRule
{
    public:
        int ComputeScore(int input) override;
};