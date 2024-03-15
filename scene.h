// GP Framework
#ifndef __SCENE_H__
#define __SCENE_H__

// Forward declarations:
class Renderer;

// Class declaration:
class Scene
{
    // Member methods:
public:
    Scene();
    virtual ~Scene();

    virtual bool Initialise();
  
    virtual void Process(float deltaTime) = 0;
    virtual void Draw(Renderer& renderer) = 0;

    virtual void OnEnter();
    virtual void OnExit();

    virtual void DebugDraw();

protected:

private:
    Scene(const Scene& scene);
    Scene& operator=(const Scene& scene);

    // Member data:
public:

protected:

private:

};

#endif // __SCENE_H__
