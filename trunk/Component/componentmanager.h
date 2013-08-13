#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include "../basefunc.h"
#include "componentbase.h"


typedef MarquisSystem<const com_id, ComponentBase*>::ManMap ComponentList;
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
