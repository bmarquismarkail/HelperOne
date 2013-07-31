#ifndef MARQUISCOMPONENT_H
#define MARQUISCOMPONENT_H

#include "ComponentBase.h"
#include "../Object/objectbase.h"


class MarquisComponent : public ComponentBase
{
    public:
        MarquisComponent(const com_id &id, ObjectBase *Object);
        ~MarquisComponent();
        ObjectBase *getActiveObject();
    protected:
        ObjectBase *inObject;
    private:
};

#endif // MARQUISCOMPONENT_H
