#include <iostream>
#include <nlohmann/json.hpp>

int main(int, char**){
    json empty_array_explicit = json::array();

// ways to express the empty object {}
    json empty_object_implicit = json({});
    json empty_object_explicit = json::object();

// a way to express an _array_ of key/value pairs [["currency", "USD"], ["value", 42.99]]
    json array_not_object = json::array({ {"currency", "USD"}, {"value", 42.99} });
    std::cout << "Hello, from cni_plugin_cpp!\n";
}
