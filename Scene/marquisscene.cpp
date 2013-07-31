#include "marquisscene.h"

MarquisScene::MarquisScene(const sc_id &id, WorldBase *World) : SceneBase(id)
{
    inWorld = World;
    //ctor
}

MarquisScene::~MarquisScene()
{
    //dtor
}

WorldBase* MarquisScene::getParent()
{
    return inWorld;
}

int MarquisScene::addObject(ObjectBase *Object)
{
    return objManager->addObject(Object);
}

int MarquisScene::deleteObject(ob_id ID)
{
    return objManager->deleteObject(ID);
}

void MarquisScene::executeObject(ob_id ID)
{
    objManager->GetObjectList()->find(ID)->second->execute();
}
