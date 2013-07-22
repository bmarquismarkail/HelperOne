#ifndef MARQUISSCENE_H
#define MARQUISSCENE_H

#include "SceneBase.h"
#include "../World/worldbase.h"


class MarquisScene : public SceneBase
{
    public:
        MarquisScene(const sc_id &id, WorldBase *World);
        ~MarquisScene();
        WorldBase *getParent();
    protected:
    private:
        WorldBase *inWorld;
};

#endif // MARQUISSCENE_H
