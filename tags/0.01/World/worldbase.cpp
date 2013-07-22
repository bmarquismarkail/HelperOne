#include "worldbase.h"

#include <iostream>

WorldBase::WorldBase()
{
    //ctor
    scManager = new SceneManager();
}

WorldBase::~WorldBase()
{
    close();
    //dtor
}

void WorldBase::execute()
{
    //if the Active Scene is NULL, then the program automatically closes.
    while (scManager->getActiveScene())
    {
        scManager->setActiveScene(scManager->getActiveScene()->execute());
    }
}
void WorldBase::close()
{
    delete scManager;
}

SceneManager* WorldBase::getSceneManager()
{
    return scManager;
}
