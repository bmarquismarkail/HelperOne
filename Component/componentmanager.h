#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include "componentbase.h"
#include "../basefunc.h"

#include <map>

typedef std::map<const com_id, ComponentBase*> ComponentList;
class ComponentManager : virtual public _manager
{
    public:
        //ctors and dtors
        ComponentManager();
        virtual ~ComponentManager();
        //various other functions
        virtual int addComponent(ComponentBase *Cmpnt);
        virtual int deleteComponent(com_id ID);
        virtual ComponentList *getComponentList();
    protected:
    private:
        ComponentList *cmpList;
        virtual int deleteAllComponents();
};

#endif // COMPONENTMANAGER_H
