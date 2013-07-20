#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include "World/worldbase.h"
#include "scene/scenebase.h"
#include "object/objectbase.h"
#include "component/componentbase.h"

class TestComponent : public ComponentBase
{
    public:
        TestComponent();
        ~TestComponent();
        void execute();
};

class TestObject : public ObjectBase
{
    public:
        TestObject();
        ~TestObject();
        void execute();
};
class TestScene : public SceneBase
{
    public:
        TestScene();
        ~TestScene();
        sc_id execute();
};

#endif // TEST_H_INCLUDED
