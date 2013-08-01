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
    if(scManager->addScene(Scene))
        return Scene;
    return NULL;
}

void MarquisWorld::deleteScene(sc_id ID)
{
    if(scManager->deleteScene(ID))
        return 1;
    return 0;
}

void MarquisWorld::execute()
{
    WorldBase::execute();
}

void MarquisWorld::close()
{
    WorldBase::close();
}

void MarquisWorld::setActiveScene(sc_id ID)
{
    scManager->setActiveScene(ID);
}
