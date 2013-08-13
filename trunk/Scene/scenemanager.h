#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include "scenebase.h"

typedef MarquisSystem<const sc_id, SceneBase*>::ManMap SceneList;

class SceneManager : virtual public _manager
{
    public:
        SceneManager();
        virtual ~SceneManager();
		//
        int addScene(SceneBase *Scene);	//Adds a scene to the manager.
        //Deletes the scene from the manager. Returns true when initialized sucessfully. Returns 0 otherwise.
        int deleteScene(sc_id ID);		//Gets the Active Scene
        SceneBase *getActiveScene();	//Returns the Active Scene, or NULL is there is none.
        int setActiveScene(sc_id ID);	//Sets the Active Scene.

    protected:
    private:
        //The active scene. Defalts to NULL. If NULL, then the world closes on update.
        SceneBase *ActiveScene;
        SceneList *scList;				//The list of all the scenes in the world.
        int deleteAllScenes();			//Deletes all the scenes from the manager
};

#endif // SCENEMANAGER_H
