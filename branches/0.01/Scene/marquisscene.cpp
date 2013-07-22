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
