#include "marquiscomponent.h"

MarquisComponent::MarquisComponent(const com_id &id, ObjectBase *Object) : ComponentBase(id)
{
    inObject = Object;
    //ctor
}

MarquisComponent::~MarquisComponent()
{
    //dtor
}

ObjectBase* MarquisComponent::getActiveObject()
{
    return inObject;
}
