// GP Framework

// Library includes:
#include <SDL.h>

// Local includes:
#include "game.h"
#include "logger.h"

int main(int argc, char* argv[])
{
    // TODO: Add memory leak detection here...

    Game& game = Game::GetInstance();
  
    if (false == game.Initialise())
    {
        Logger::GetInstance().Log("Game Init Failed");
    
        return 1;
    }

    while (game.DoGameLoop())
    {
        // No body.
    }

    Game::DestroyInstance();
    Logger::DestroyInstance();
  
    return 0;
}
