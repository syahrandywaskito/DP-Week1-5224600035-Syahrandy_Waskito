#pragma once

// kalau di balatro ini itu selected card
class IInputGenerator
{   
    public:
        virtual ~IInputGenerator() = default;
        virtual int GenerateInput() = 0;
};

// kalau di balatro ini calculate chips
class IScoringRule
{
    public:
        virtual ~IScoringRule() = default;
        virtual int ComputeScore(int input) = 0;
};

// kalau di balatro ini calculate cash
class IRewardRule
{
    public:
        virtual ~IRewardRule() = default;
        virtual int ComputeReward(int baseScore) = 0;
};  