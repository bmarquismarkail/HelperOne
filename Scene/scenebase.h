#ifndef SCENEBASE_H
#define SCENEBASE_H

#include "../object/objectmanager.h"
#include "../basefunc.h"
#include <string>

typedef std::string sc_id; //the ID of the scene
class SceneBase : virtual public _object
{
    public:
        //ctors and dtors
        SceneBase(const sc_id &id);
        virtual ~SceneBase();
        //various other functions
        virtual sc_id execute() = 0;            //updates the scene
        virtual void close();               //cleans up the scene safely for closing or shifting of scenes.
        ObjectManager *getObjectManager();
        sc_id getSceneID();                 //Gets the SceneID of the Scene
    protected:
        ObjectManager *objManager;          //The Game Object Manager
         //WorldBase *pWorld;                //The pointer to the scene's world
    private:
        sc_id ID;
};

#endif // SCENEBASE_H
