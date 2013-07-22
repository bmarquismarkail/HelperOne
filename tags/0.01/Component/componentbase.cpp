#include "componentbase.h"

ComponentBase::ComponentBase(const com_id &id)
{
    ID = id;
    //ctor
}

ComponentBase::~ComponentBase()
{
    //dtor
}

void ComponentBase::execute()
{

}

void ComponentBase::close()
{

}

com_id ComponentBase::getComponentID()
{
    return ID;
}
