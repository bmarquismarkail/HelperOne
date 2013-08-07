#ifndef OBJECTBASE_H
#define OBJECTBASE_H

#include "../basefunc.h"
#include "../component/componentmanager.h"


typedef std::string ob_id;
class ObjectBase : virtual public _object
{
    public:
        //ctors and dtors
        ObjectBase(const ob_id &id);
        virtual ~ObjectBase();
        //various other functions
        virtual void execute() = 0; 					//Updates the object
        virtual void close();							//cleans up the scene for closing or shifting
        ComponentManager *getComponentManager();		// returns the Component Manager
        ob_id getObjectID();							//returns the ObjectID of this object
    protected:
        ComponentManager *gocManager;					//The Game Component Manager
    private:
        ob_id ID;										//The ObjectID.
};

#endif // OBJECTBASE_H
