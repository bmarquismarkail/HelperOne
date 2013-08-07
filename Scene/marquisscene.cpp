#include "marquisscene.h"

MarquisScene::MarquisScene(const sc_id &id, MarquisWorld *World) : SceneBase(id)
{
    inWorld = World;
}

MarquisScene::~MarquisScene()
{
    //dtor
}

MarquisWorld* MarquisScene::getParent()
{
    return inWorld;
}

int MarquisScene::addObject(MarquisObject *Object)
{
    switch(objManager->addObject(Object))
	{
		case 0:
			return 0;
		case -1:
			setError("addObject: The Object you are trying to insert has an ID already in the Object List.");
			return -1;
		case -2:
			setError("addObject: The Object points to empty memory.");
			return -2;
		default:
			setError("addScene: An unknown error occurred.", true);
			return -3;
	}

}

int MarquisScene::deleteObject(ob_id ID)
{
	//TODO: add error messages
    return objManager->deleteObject(ID);
}

void MarquisScene::executeObject(ob_id ID)
{
    objManager->GetObjectList()->find(ID)->second->execute();
}
