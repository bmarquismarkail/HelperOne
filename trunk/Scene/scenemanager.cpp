#include "scenemanager.h"

SceneManager::SceneManager()
{
    scList = new sceneList();
    ActiveScene = NULL;
}

SceneManager::~SceneManager()
{
    ActiveScene = NULL;
    deleteAllScenes();
    delete scList;
}

int SceneManager::addScene(SceneBase *Scene)
{
    if(Scene) //Does the argument points to a Scene?
    {
		//Can you insert this scene into the scenelist?
		if(scList->insert(std::pair<sc_id, SceneBase*>(Scene->getSceneID(), Scene)).second)
			return 0; 								//Inserted safely
			else return -1;							//The Scene has a key that is already in the list
    }
    return -2;										//This scene points to nothing.
}
int SceneManager::deleteScene(sc_id ID)
{
	//This is to keep needless processing by checking to see if there is a scene with that key already in the list
    sceneList::iterator DelIt = scList->find(ID); 	
    if(DelIt !=scList->end())
    {
        delete DelIt->second; 
        scList->erase(DelIt); 						//for to reuse the ID if needed.
        return 0;									//This function completes sucessfully
    }
    return -1;										//This sceneID is not in the list.
}

int SceneManager::deleteAllScenes()
{
    for (sceneList::iterator DelIt = scList->begin(); DelIt != scList->end(); ++DelIt)
        delete DelIt->second; 						//This loop is to call all the scene's deconstructors, which performs cleanup.
    scList->clear();								//Removes all SceneBase pointers and ID's
    return 0;										//technically, it should always return 0.
}

SceneBase* SceneManager::getActiveScene()
{
    return ActiveScene;
}

int SceneManager::setActiveScene(sc_id ID)
{
    sceneList::iterator SetIt = scList->find(ID);
    if(SetIt != scList->end())
    {
        ActiveScene = SetIt->second;
        return 0;
    }
    else ActiveScene = NULL;
    return -1;
}
