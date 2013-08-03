#include "marquiscomponent.h"

MarquisComponent::MarquisComponent(const com_id &id, MarquisObject *Object) : ComponentBase(id)
{
    inObject = Object;
    //ctor
}

MarquisComponent::~MarquisComponent()
{
    //dtor
}

MarquisObject* MarquisComponent::getGuardianObject()
{
    return inObject;
}
