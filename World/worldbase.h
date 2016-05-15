#ifndef WORLDBASE_H
#define WORLDBASE_H

#include "../basefunc.h"
#include "../Scene/scenemanager.h"
class WorldBase : virtual public _object
{
    public:
        //ctors and dtors
        WorldBase();
        virtual ~WorldBase();
        //various other functions
        virtual void execute() = 0;				//updates the entire world
        virtual void close();               	//cleans up the world safely for closing
        SceneManager* getSceneManager();		//Gets the SceneManager
    protected:
        SceneManager *scManager;				//The scene manager.
    private:
};

#endif // WORLDBASE_H
