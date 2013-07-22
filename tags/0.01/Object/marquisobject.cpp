#include "marquisobject.h"

MarquisObject::MarquisObject(const ob_id &id, SceneBase *Scene) : ObjectBase(id)
{
    inScene = Scene;
    //ctor
}

MarquisObject::~MarquisObject()
{
    //dtor
}
