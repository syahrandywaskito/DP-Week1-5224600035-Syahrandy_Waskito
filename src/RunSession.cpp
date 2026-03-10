#include "lib/RunSession.h"

void RunSession::StartRun() 
{
    std::cout << "=== Run Start ===\n";
    
    for (int round = 1; round <= 3; round++)
    {
        std::cout << "Round " << round << std::endl;

        // Loop
        // 1. generate input
        // 2. compute score
        // 3. gain reward
        // 4. open shop

        // generate input
        int input = inputGen->GenerateInput();
        std::cout << "[PLAY] input generated : " << input << std::endl;

        // compute score
        int score = scoring->ComputeScore(input);
        std::cout << "[SCORE] base score : " << score << std::endl;
        
        // gain reward 
        int rewarding = reward->ComputeReward(score);
        money += rewarding;
        std::cout << "[REWARD] gain reward : " << rewarding << " [MONEY] : " << money << std::endl;

        shop->ShowShop();

        std::cout << "-------------------------------------\n";
    }

    std::cout << "=== RUN END ===\n";
    std::cout << "Final money : " << money << std::endl;
    
}