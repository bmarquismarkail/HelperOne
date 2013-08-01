#include "marquisworld.h"

MarquisWorld::MarquisWorld()
{
    //ctor
}

MarquisWorld::~MarquisWorld()
{
    //dtor
}

MarquisScene* MarquisWorld::addScene(MarquisScene *Scene)
{
    switch(scManager->addScene(Scene))
    {
        case 0:
            return Scene;
        case -1:
            setError("addScene: A Scene with an identical SceneID is already in the Scene List.");
            return NULL;
        case -2:
            setError("addScene: The scene you were attempting to add cannot be added in the scene.");
            return NULL;
        default:
            setError("addScene: Unknown Return Value");
            return NULL;
            break;
    }
}

void MarquisWorld::deleteScene(sc_id ID)
{
    scManager->deleteScene(ID);
}

void MarquisWorld::execute()
{
    WorldBase::execute();
}

void MarquisWorld::close()
{
    WorldBase::close();
}

int MarquisWorld::setActiveScene(sc_id ID)
{
    switch(scManager->setActiveScene(ID))
    {
        case -1:
            setError("setActiveScene: Scene Not Found.");
            return -1;
        case 0:
            return 0;
        default: setError("setActiveScene: Unknown Return Value");
            return -2;
            break;
    }
}
