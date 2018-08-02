#pragma once

// Connector object
// Holds all database connection behavior
// Links with the MySQL Connector C++ library dynamically

// Forward declaration of MySQL types
namespace sql {

    class Driver;
    class Connection;
    class Statement;
    class ResultSet;

}

namespace cse3330 {

    class Connector final {

    public:

        Connector();

    private:

        sql::Driver*        driver;
        sql::Connection*    connection;
        sql::Statement*     statement;
        sql::ResultSet*     result_set;

    };

}