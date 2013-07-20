#include "test.h"

#include <iostream>
using namespace std;
TestComponent::TestComponent() : ComponentBase(com_id("Test"))
{

}

TestComponent::~TestComponent()
{
    ComponentBase::close();
}

void TestComponent::execute()
{
    cout << "Hello World!"<<endl;
}

TestObject::TestObject() : ObjectBase(ob_id("Test"))
{
    getComponentManager()-> addComponent(new TestComponent);
}

TestObject::~TestObject()
{
}

void TestObject::execute()
{
    ObjectBase::execute();
}

TestScene::TestScene() : SceneBase(sc_id("Test"))
{
    getObjectManager()->addObject(new TestObject);
}

TestScene::~TestScene()
{
}

sc_id TestScene::execute()
{
    return SceneBase::execute();
}
