#include "connector.h"

// Disable warnings about dll-interface
#ifdef _MSC_VER
#pragma warning(disable : 4251)
#endif

#include "cppconn/driver.h"
#include "cppconn/statement.h"

namespace cse3330 {

    Connector::Connector() 
    :   driver{ nullptr },
        connection{ nullptr },
        statement{ nullptr },
        result_set{ nullptr } {

        driver = get_driver_instance();

    }

    Connector::~Connector() {

        if (result_set != nullptr)
            delete result_set;

        if (statement != nullptr)
            delete statement;

        if (connection != nullptr)
            delete connection;

    }

    void Connector::connect_to_server(
        std::string& host_name,
        std::string& user_name,
        std::string& password,
        std::string& database) {

        connection = driver->connect(host_name, user_name, password);
        connection->setSchema(database);

    }

    sql::ResultSet* Connector::send_query(std::string& query) {

        statement = connection->createStatement();
        result_set = statement->executeQuery(query);

        return result_set;

    }

} // namespace cse3330