#ifndef COMPONENTBASE_H
#define COMPONENTBASE_H

#include <string>

#include "../basefunc.h"
typedef std::string com_id;
class ComponentBase : virtual public _object
{
    public:
        //ctors and dtors
        ComponentBase(const com_id &id);
        virtual ~ComponentBase();
        //various other functions
        virtual void execute() = 0;
        virtual void close();
        com_id getComponentID();
    protected:
    private:
        com_id ID;

};

#endif // COMPONENTBASE_H
