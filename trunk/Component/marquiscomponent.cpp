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

//template<class T> T MarquisComponent::GetSibling(ComponentBase *Base)
//{
//    T* Temp = static_cast<T*>(Base);
//    if(!Temp)
//        setError("GetSibling: There is a problem",true);
//    return Temp;
//}
