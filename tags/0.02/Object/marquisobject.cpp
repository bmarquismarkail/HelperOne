#include "marquisobject.h"

MarquisObject::MarquisObject(const ob_id &id, SceneBase *Scene) : ObjectBase(id)
{
    inScene = Scene;
    //ctor
}

MarquisObject::~MarquisObject()
{
    //dtor
}

int MarquisObject::addComponent(ComponentBase *Cmpnt)
{
    return getComponentManager()->addComponent(Cmpnt);
}

int MarquisObject::deleteComponent(com_id ID)
{
    return getComponentManager()->deleteComponent(ID);
}

void MarquisObject::executeComponent(com_id ID)
{
    getComponentManager()->getComponentList()->find(ID)->second->execute();
}
