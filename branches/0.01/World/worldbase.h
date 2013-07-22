#ifndef WORLDBASE_H
#define WORLDBASE_H

#include "../scene/scenemanager.h"
#include "../basefunc.h"
class WorldBase : public _object
{
    public:
        //ctors and dtors
        WorldBase();
        virtual ~WorldBase();
        //various other functions
        virtual void execute();              //updates the entire world
        virtual void close();               //cleans up the world safely for closing
        SceneManager* getSceneManager();    //Gets the SceneManager
    protected:
    private:
        SceneManager *scManager;           //The scene manager.
};

#endif // WORLDBASE_H
