#include <iostream>
#include <ctime>
#include <memory>
#include "lib/RunSession.h"
#include "lib/InputGenerator.h"
#include "lib/ScoringSystem.h"
#include "lib/StandardReward.h"

int main(int argc, char const *argv[])
{
    std::srand(std::time(0));

    auto input = std::make_unique<RandomInputGenerator>();
    auto score = std::make_unique<ScoringSystem>();
    auto reward = std::make_unique<StandardReward>();

    RunSession game(std::move(input), std::move(score), std::move(reward));

    game.StartRun();

    return 0;
}
