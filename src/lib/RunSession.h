#pragma once 
#include <memory>
#include <iostream>
#include "Interface.h"
#include "ScoringSystem.h"
#include "ShopSystem.h"
#include "StandardReward.h"
#include "InputGenerator.h"

class RunSession
{
    private:
        std::unique_ptr<IInputGenerator> inputGen;
        std::unique_ptr<IScoringRule> scoring;
        std::unique_ptr<IRewardRule> reward;
        std::unique_ptr<ShopSystem> shop;
        int money = 0;

    public:
        RunSession(
            std::unique_ptr<IInputGenerator> ig,
            std::unique_ptr<IScoringRule> s,
            std::unique_ptr<IRewardRule> r
        ) : inputGen(std::move(ig)), 
            scoring(std::move(s)), 
            reward(std::move(r)),
            shop(std::make_unique<ShopSystem>())
             {}

        void StartRun();

};