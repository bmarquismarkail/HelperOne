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
    return getObjectManager()->addObject(Object);
}

int MarquisScene::deleteObject(ob_id ID)
{
    return getObjectManager()->deleteObject(ID);
}

void MarquisScene::executeObject(ob_id ID)
{
    getObjectManager()->GetObjectList()->find(ID)->second->execute();
}
