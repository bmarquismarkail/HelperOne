#ifndef MARQUISSCENE_H
#define MARQUISSCENE_H

#include "SceneBase.h"
#include "../World/marquisworld.h"
#include "../Object/marquisobject.h"



class MarquisScene : public SceneBase
{
    public:
		//The constructor. assigns an ID and the world where it is being used (or null if not used yet)
		//TODO: Make Assign to World function.
        MarquisScene(const sc_id &id, MarquisWorld *World);   
        ~MarquisScene();									//The deconstructor. 
        MarquisWorld *getParent();								//returns a pointer to the parent World.
        int addObject(MarquisObject *Object);					//adds an Object in the scene's objectlist.
        int deleteObject(ob_id ID);							//delete's an object from the scene's objectlist.
        void executeObject(ob_id ID);						//executes the object in the scene's objectlist.
    protected:
    private:
        MarquisWorld *inWorld;									//a pointer to the active world this scene is in.
};

#endif // MARQUISSCENE_H
