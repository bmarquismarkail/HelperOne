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
{	if(Object) //Does this object pointer points to something? Technically, does this pointer contain an Object?
	{
		if(objList->insert(std::pair<ob_id, ObjectBase*>(Object->getObjectID(), Object)).second)
			return 0;
		else return -1; //The Object you are trying to insert has an ID already in the Object List
	}
    return -2; //The Object points to nothing.
}

int ObjectManager::deleteObject(ob_id ID)
{
    ObjectList::iterator DelIt = objList->find(ID);
    if(DelIt !=objList->end())	//Did you find the droids you were looking for?
    {
        delete DelIt->second;	//This will invoke the object deconstructors, caling Object::close()
        objList->erase(DelIt);  //This will erase the object list entry.
        return 0;				//Yep, I found those frickin' droids
    }
    return -1;					//These are not the droids that you're looking for
}

int ObjectManager::deleteAllObjects()
{
    for (ObjectList::iterator DelIt = objList->begin(); DelIt != objList->end(); ++DelIt)
        delete DelIt->second;	//This will invoke all object deconstructors, calling Object::close()
    objList->clear();			//This will erase all contents of the Object List.
    return 0;					//Should always return 0.
}

ObjectList* ObjectManager::GetObjectList()
{
    return objList;
}
