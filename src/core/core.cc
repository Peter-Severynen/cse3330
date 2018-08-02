#include "core.h"

#include "connector.h"

#include <iostream>
#include <exception>

#include <cstdlib>

int main(void) {

    try {

        cse3330::Connector connector{};

    }
    catch (std::exception& e) {

        std::cerr << e.what() << std::endl;

        return EXIT_FAILURE;

    }

    return EXIT_SUCCESS;

}