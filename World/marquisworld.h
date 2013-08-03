#ifndef MARQUISWORLD_H
#define MARQUISWORLD_H

#include "worldbase.h"
#include "../Scene/marquisscene.h"


class MarquisWorld : public WorldBase
{
    public:
        MarquisWorld();
        ~MarquisWorld();
        virtual void execute();							//executes the world.
        virtual void close();							//does world-wide cleanup
        MarquisScene *addScene(MarquisScene *Scene);	//inserts a scene into the world's scenelist
        void deleteScene(sc_id ID);						//deletes a scene from the world's scenelist
        int setActiveScene(sc_id ID);					//sets the active scene. Must be executed before void execute()
    protected:
    private:
};

#endif // MARQUISWORLD_H
