#ifndef OBJECTBASE_H
#define OBJECTBASE_H

#include "../component/componentmanager.h"
#include "../basefunc.h"
#include <string>

typedef std::string ob_id;
class ObjectBase : virtual public _object
{
    public:
        //ctors and dtors
        ObjectBase(const ob_id &id);
        virtual ~ObjectBase();
        //various other functions
        virtual void execute() = 0; //Updates the object
        virtual void close();  //cleans up the scene for closing or shifting
        ComponentManager *getComponentManager(); // returns the Component Manager
        ob_id getObjectID();
    protected:
        ComponentManager *gocManager; //The Game Component Manager
    private:
        ob_id ID;
};

#endif // OBJECTBASE_H
