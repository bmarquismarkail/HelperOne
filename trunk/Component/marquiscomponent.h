#ifndef MARQUISCOMPONENT_H
#define MARQUISCOMPONENT_H

#include "ComponentBase.h"
#include "../Object/marquisobject.h"


class MarquisComponent : public ComponentBase
{
    public:
        MarquisComponent(const com_id &id, MarquisObject *Object);
        ~MarquisComponent();
        MarquisObject *getGuardianObject();
    protected:
        MarquisObject *inObject;
    private:
};

#endif // MARQUISCOMPONENT_H
