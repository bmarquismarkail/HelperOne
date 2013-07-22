#ifndef MARQUISWORLD_H
#define MARQUISWORLD_H

#include "worldbase.h"
#include "../Scene/marquisscene.h"


class MarquisWorld : public WorldBase
{
    public:
        MarquisWorld();
        ~MarquisWorld();
        void execute();
        void close();
        MarquisScene *addScene(MarquisScene *Scene);
        int deleteScene(sc_id ID);
        void setActiveScene(sc_id ID);
    protected:
    private:
};

#endif // MARQUISWORLD_H
