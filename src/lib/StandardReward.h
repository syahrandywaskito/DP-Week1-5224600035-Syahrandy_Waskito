#pragma once
#include "Interface.h"

class StandardReward : public IRewardRule
{
    public:
        int ComputeReward(int baseScore) override;
        
};