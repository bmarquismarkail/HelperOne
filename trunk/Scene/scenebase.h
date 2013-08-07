#ifndef SCENEBASE_H
#define SCENEBASE_H

#include "../basefunc.h"
#include "../object/objectmanager.h"


typedef std::string sc_id; //the ID of the scene

class SceneBase : virtual public _object
{
    public:
        SceneBase(const sc_id &id);				//The constructor. assigns an ID to the Scene
        virtual ~SceneBase();					//The deconstructor.
        //
        virtual sc_id execute() = 0;            //Executes the scene.
        virtual void close();               	//Cleans up the scene safely for closing or shifting of scenes.
        ObjectManager *getObjectManager();
        sc_id getSceneID();                 	//Gets the ID of the Scene
    protected:
        ObjectManager *objManager;          	//The Game Object Manager
    private:
        sc_id ID;								//The Scene ID.
};

#endif // SCENEBASE_H
