// GP Framework
#ifndef __GAME_H__
#define __GAME_H__

// Library includes:
#include <vector>

// Forward declarations:
class Renderer;
class Scene;

// Class declaration:
class Game
{
    // Member methods:
public:
    static Game& GetInstance();
    static void DestoryInstance();
    
    bool Initialise();
    void DoGameLoop();
    void Quit();

protected:
    void Process(float deltaTime);
    void Draw(Renderer& renderer);

private:
    Game();
    ~Game();

    Game(const Game& game);
    Game& operator=(const Game& game);

    // Member data:
public:

protected:
    static Game* sm_pInstance;
    Renderer* m_pRenderer;
    std::vector<Scene*> m_scenes;

private:

};

#endif // __GAME_H__
