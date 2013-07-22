#ifndef MARQUISOBJECT_H
#define MARQUISOBJECT_H

#include "objectbase.h"
#include "../Scene/scenebase.h"


class MarquisObject : public ObjectBase
{
    public:
        MarquisObject(const ob_id &id, SceneBase *Scene);
        ~MarquisObject();
        int addComponent(ComponentBase *Cmpnt);
        int deleteComponent(com_id ID);
        void executeComponent(com_id ID);
    protected:
    private:
        SceneBase *inScene;
};

#endif // MARQUISOBJECT_H
