#include "objectbase.h"

ObjectBase::ObjectBase(const ob_id &id)
{
    //ctor
    ID = id;
    gocManager = new ComponentManager();
}

ObjectBase::~ObjectBase()
{
    //dtor
    close();
}

ob_id ObjectBase::getObjectID()
{
    return ID;
}

void ObjectBase::execute()
{
    for(ComponentList::iterator UpdIt = gocManager->getComponentList()->begin(); UpdIt != gocManager->getComponentList()->end(); ++UpdIt)
        UpdIt->second->execute();
    //return "";
}
void ObjectBase::close()
{
    delete gocManager;
}

ComponentManager* ObjectBase::getComponentManager()
{
    return gocManager;
}
