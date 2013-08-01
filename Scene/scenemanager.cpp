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
    if(Scene)
    {
        sceneList::iterator safety = scList->find(Scene->getSceneID());
        if(safety == scList->end())
        {
            if(scList->insert(std::pair<sc_id, SceneBase*>(Scene->getSceneID(), Scene)).second)
                return 0;
        }
        return -1;
    }
    return -2;
}
int SceneManager::deleteScene(sc_id ID)
{
    sceneList::iterator DelIt = scList->find(ID);
    if(DelIt !=scList->end())
    {
        delete DelIt->second;
        scList->erase(DelIt);
        return 0;
    }
    return -1;
}

int SceneManager::deleteAllScenes()
{
    for (sceneList::iterator DelIt = scList->begin(); DelIt != scList->end(); ++DelIt)
        delete DelIt->second;
    scList->clear();
    return 0;
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
