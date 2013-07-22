#ifndef OBJECTBASE_H
#define OBJECTBASE_H

#include "../component/componentmanager.h"
#include "../basefunc.h"
#include <string>

typedef std::string ob_id;
class ObjectBase : public _object
{
    public:
        //ctors and dtors
        ObjectBase(const ob_id &id);
        virtual ~ObjectBase();
        //various other functions
        virtual void execute(); //Updates the object
        virtual void close();  //cleans up the scene for closing or shifting
        ComponentManager *getComponentManager(); // returns the Component Manager
        ob_id getObjectID();
    protected:
    private:
        ob_id ID;
        ComponentManager *gocManager; //The Game Component Manager
};

#endif // OBJECTBASE_H
