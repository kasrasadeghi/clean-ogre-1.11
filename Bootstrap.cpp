#include <Ogre.h>
#include <OgreApplicationContext.h>

class MyTestApp : public OgreBites::ApplicationContext, public OgreBites::InputListener
{
public:
    MyTestApp();
    void setup();
    bool keyPressed(const OgreBites::KeyboardEvent& evt);
};

//! [constructor]
MyTestApp::MyTestApp() : OgreBites::ApplicationContext("OgreTutorialBootstrap")
{
}
//! [constructor]

//! [key_handler]
bool MyTestApp::keyPressed(const OgreBites::KeyboardEvent& evt)
{
    return true;
}
//! [key_handler]

//! [setup]
void MyTestApp::setup(void)
{
    // do not forget to call the base first
    OgreBites::ApplicationContext::setup();
}
//! [setup]

//! [main]
int main(int argc, char *argv[])
{
    MyTestApp app;
    app.initApp();
    app.getRoot()->startRendering();
    app.closeApp();
    return 0;
}
//! [main]
