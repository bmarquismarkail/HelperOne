#ifndef MARQUISCOMPONENT_H
#define MARQUISCOMPONENT_H

#include "ComponentBase.h"
#include "../Object/marquisobject.h"

class MarquisObject;

template<class T>
class MarquisComponent : public ComponentBase
{
    public:
        MarquisComponent(const com_id &id, MarquisObject *Object);
        ~MarquisComponent();
        MarquisObject *getGuardianObject();
    protected:
        MarquisObject *inObject;
		T* GetSibling(ComponentBase *Base);
    private:
};

#endif // MARQUISCOMPONENT_H
