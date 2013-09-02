#ifndef MARQUISCOMPONENT_H
#define MARQUISCOMPONENT_H

#include "ComponentBase.h"
#include "../Object/marquisobject.h"

class MarquisObject;

class MarquisComponent : public ComponentBase
{
    public:
        MarquisComponent(const com_id &id, MarquisObject *Object);
        ~MarquisComponent();
        MarquisObject *getGuardianObject();
    protected:
        MarquisObject *inObject;
		template<class T> T GetSibling(ComponentBase *Base);
    private:
};

#include "marquiscomponent.tmpl"
#endif // MARQUISCOMPONENT_H
