// Namensräume

namespace MobileWidgets {

    class Button
    {
    };
}

namespace DesktopWidgets {

    class Button
    {
    };
}

namespace TestWidgets {

    namespace Buttons {

        class Button
        {
        };
    }
}


// Application for Mobile Devices
void test_ui()
{
    //using namespace MobileWidgets;
    //using namespace DesktopWidgets;

    //Button bMobile;
    //Button bDesktop;

    using namespace TestWidgets;

    Buttons::Button bDesktop;
}