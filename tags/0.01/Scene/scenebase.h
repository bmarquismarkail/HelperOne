#ifndef SCENEBASE_H
#define SCENEBASE_H

#include "../object/objectmanager.h"
#include "../basefunc.h"
#include <string>

typedef std::string sc_id; //the ID of the scene
class SceneBase : public _object
{
    public:
        //ctors and dtors
        SceneBase(const sc_id &id);
        virtual ~SceneBase();
        //various other functions
        virtual sc_id execute();            //updates the scene
        virtual void close();               //cleans up the scene safely for closing or shifting of scenes.
        ObjectManager *getObjectManager();
        sc_id getSceneID();                 //Gets the SceneID of the Scene
    protected:
    private:
        sc_id ID;
        ObjectManager *objManager;          //The Game Object Manager
        //WorldBase *pWorld;                //The pointer to the scene's world
};

#endif // SCENEBASE_H
