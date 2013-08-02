#include "scenebase.h"

#include <iostream>
using namespace std;
SceneBase::SceneBase(const sc_id &id)
{
    ID =id;
    objManager = new ObjectManager();
}

SceneBase::~SceneBase()
{
    close();
}

sc_id SceneBase::execute()
{
    for(ObjectList::iterator UpdIt = objManager->GetObjectList()->begin(); UpdIt != objManager->GetObjectList()->end(); ++UpdIt)
        UpdIt->second->execute();
    return "";
}
void SceneBase::close()
{
    delete objManager;
}
sc_id SceneBase::getSceneID()
{
    return ID;
}

ObjectManager* SceneBase::getObjectManager()
{
    return objManager;
}
