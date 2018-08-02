#include "connector.h"

// Disable warnings about dll-interface
#ifdef _MSC_VER
#pragma warning(disable : 4251)
#endif

#include "cppconn/driver.h"

namespace cse3330 {

    Connector::Connector() {

        driver = get_driver_instance();

    }

} // namespace cse3330