#ifndef MARQUISOBJECT_H
#define MARQUISOBJECT_H

#include "objectbase.h"
#include "../Scene/scenebase.h"


class MarquisObject : public ObjectBase
{
    public:
        MarquisObject(const ob_id &id, SceneBase *Scene);
        ~MarquisObject();
    protected:
    private:
        SceneBase *inScene;
};

#endif // MARQUISOBJECT_H
