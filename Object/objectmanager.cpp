#include "objectmanager.h"

ObjectManager::ObjectManager()
{
    //ctor
    objList = new ObjectList();
}

ObjectManager::~ObjectManager()
{
    //dtor
    deleteAllObjects();
    delete objList;
}

int ObjectManager::addObject(ObjectBase *Object)
{
    if(objList->insert(std::pair<ob_id, ObjectBase*>(Object->getObjectID(), Object)).second)
        return 0;
    return -1;
}

int ObjectManager::deleteObject(ob_id ID)
{
    ObjectList::iterator DelIt = objList->find(ID);
    if(DelIt !=objList->end())
    {
        delete DelIt->second;
        objList->erase(DelIt);
        return 1;
    }
    return 0;
}

int ObjectManager::deleteAllObjects()
{
    for (ObjectList::iterator DelIt = objList->begin(); DelIt != objList->end(); ++DelIt)
        delete DelIt->second;
    objList->clear();
    return 0;
}

ObjectList* ObjectManager::GetObjectList()
{
    return objList;
}
