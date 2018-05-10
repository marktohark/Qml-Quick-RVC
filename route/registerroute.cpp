#include "route.h"
#include "controller/examplecontroller.h"

RouteTableBegin
    RegisterControllerBegin(ExampleController)
        RegisterFunction(exampleFunc)
    RegisterControllerEnd
RouteTableEnd
