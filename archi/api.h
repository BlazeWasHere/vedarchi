#pragma once

#include <string>

class Archi {

private:
    std::string BASE { "https://ved.archi/api/" };

public:
    const std::string __all__[3] {
        "lists",
        "posts",
        "donations"
    };

    std::string lists();

    std::string lists(std::string id);

    std::string posts();

    std::string posts(std::string id);

    std::string donations();

    std::string donations(std::string id);

};