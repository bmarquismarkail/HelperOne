#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "objectbase.h"
#include "../basefunc.h"
#include <map>

typedef std::map<const ob_id, ObjectBase*> ObjectList;
class ObjectManager : virtual public _manager
{
    public:
        //ctors and dtors
        ObjectManager();
        virtual ~ObjectManager();
        //various other functions
        virtual int addObject(ObjectBase *Object);
        virtual int deleteObject(ob_id ID);
        virtual ObjectList *GetObjectList();
    protected:
    private:
        ObjectList *objList;
        virtual int deleteAllObjects();
};

#endif // OBJECTMANAGER_H
