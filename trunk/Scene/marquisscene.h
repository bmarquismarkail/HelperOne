#ifndef MARQUISSCENE_H
#define MARQUISSCENE_H

#include "../Object/objectbase.h"
#include "SceneBase.h"
#include "../World/worldbase.h"


class MarquisScene : public SceneBase
{
    public:
        MarquisScene(const sc_id &id, WorldBase *World);
        ~MarquisScene();
        WorldBase *getParent();
        int addObject(ObjectBase *Object);
        int deleteObject(ob_id ID);
        void executeObject(ob_id ID);
    protected:
    private:
        WorldBase *inWorld;
};

#endif // MARQUISSCENE_H
