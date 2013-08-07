#ifndef MARQUISOBJECT_H
#define MARQUISOBJECT_H

#include "objectbase.h"
#include "../Component/marquiscomponent.h"
#include "../Scene/marquisscene.h"

class MarquisComponent;
class MarquisScene;

class MarquisObject : public ObjectBase
{
    public:
		//The constructor. assigns an objectID and the scene that will execute this object
        MarquisObject(const ob_id &id, MarquisScene *Scene);
        ~MarquisObject();									//The deconstructor. performs cleanup.
        int addComponent(MarquisComponent *Cmpnt);				//Adds a component into the componentlist.
        int deleteComponent(com_id ID);						//deletes a componet from the componentlist.
        void executeComponent(com_id ID);					//executes a component in the componentlist.
		MarquisScene *getGuardianScene();
    protected:
        MarquisScene *inScene;									//The scene that will execute this object.
    private:
};

#endif // MARQUISOBJECT_H
