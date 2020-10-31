#pragma once

#include <string>

class Archi {

private:
    std::string BASE { "https://ved.archi/api/" };

public:
    std::string lists();

    std::string lists(std::string id);

};