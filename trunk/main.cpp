#include <iostream>

using namespace std;

#include "test.h"

int main()
{
        WorldBase *World = new WorldBase;
        TestScene *OnlyScene = new TestScene;
        if(World->getSceneManager()->addScene(OnlyScene))
        {
            World->getSceneManager()->setActiveScene(sc_id("Test"));
            World->execute();
        }
        delete World;
}

