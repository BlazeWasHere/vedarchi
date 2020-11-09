#include "api.h"

#include <iostream>
#include <cpr/cpr.h>


std::string Archi::lists() {
    /**
     * @return response of api 
     * Example::
     * { "success": true, "lists": [
     *     {"id": ...},
     *     {"name": ...},
     *     {"date": ...}
     *   ] 
     * }
     */
    cpr::Response r = cpr::Get(cpr::Url{BASE + "lists"});
    return r.text;
};


std::string Archi::lists(std::string id) {
    /**
     * @return response of api 
     * Example::
     * { "success": true, "lists": [
     *     {"id": ...},
     *     {"list_id": ...},
     *     {"list": ...},
     *     {"url": ...},
     *     {"description": ...},
     *     {"date": ...}
     *   ] 
     * }
     */
    cpr::Response r = cpr::Get(cpr::Url{BASE + "list/" + id});
    return r.text;
};


std::string Archi::posts() {
    /**
     * @return response of api 
     * Example::
     * { "success": true, "lists": [
     *     {"id": ...},
     *     {"title": ...},
     *     {"date": ...} 
     *   ] 
     * }
     */
    cpr::Response r = cpr::Get(cpr::Url{BASE + "posts/"});
    return r.text;
};


std::string Archi::posts(std::string id) {
    /**
     * @return response of api 
     * Example::
     * { "success": true, "lists": [
     *     {"id": ...},
     *     {"title": ...},
     *     {"content": ...},
     *     {"date": ...} 
     *   ] 
     * }
     */
    cpr::Response r = cpr::Get(cpr::Url{BASE + "post/" + id});
    return r.text;
};


std::string Archi::donations() {
    /**
     * @return response of api 
     * Example::
     * { "success": true, "lists": [
     *     {"id": ...},
     *     {"title": ...},
     *     {"content": ...},
     *     {"date": ...} 
     *   ] 
     * }
     */
    cpr::Response r = cpr::Get(cpr::Url{BASE + "donations/"});
    return r.text;
};


std::string Archi::donations(std::string id) {
    /**
     * @return response of api 
     * Example::
     * { "success": true, "lists": [
     *     {"id": ...},
     *     {"title": ...},
     *     {"content": ...},
     *     {"date": ...} 
     *   ] 
     * }
     */
    cpr::Response r = cpr::Get(cpr::Url{BASE + "donated/" + id});
    return r.text;
};
