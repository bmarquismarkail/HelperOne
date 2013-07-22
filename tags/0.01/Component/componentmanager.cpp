#include "componentmanager.h"

ComponentManager::ComponentManager()
{
    //ctor
    cmpList = new ComponentList();
}

ComponentManager::~ComponentManager()
{
    //dtor
    deleteAllComponents();
    delete cmpList;
}

int ComponentManager::addComponent(ComponentBase *Cmpnt)
{
    if(cmpList->insert(std::pair<com_id, ComponentBase*>(Cmpnt->getComponentID(), Cmpnt)).second)
        return 0;
    return -1;
}

int ComponentManager::deleteComponent(com_id ID)
{
    ComponentList::iterator DelIt = cmpList->find(ID);
    if(DelIt !=cmpList->end())
    {
        delete DelIt->second;
        cmpList->erase(DelIt);
        return 1;
    }
    return 0;
}

ComponentList* ComponentManager::getComponentList()
{
    return cmpList;
}

int ComponentManager::deleteAllComponents()
{
    for (ComponentList::iterator DelIt = cmpList->begin(); DelIt != cmpList->end(); ++DelIt)
        delete DelIt->second;
    cmpList->clear();
    return 0;
}
