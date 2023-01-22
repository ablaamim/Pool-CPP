#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*> (raw));
}

int main()
{
    Data* data = new Data;
    data->value = 42;

    std::cout << "data = " << data << std::endl;
    
    std::cout << "--------------- Serialize ------------------" << std::endl;
    uintptr_t raw = serialize(data);
    std::cout << "value = "<< data->value << std::endl;
    std::cout << "Raw = " << raw << std::endl;

    std::cout << "------------- Deserialize ------------------" << std::endl;
    data = deserialize(raw);
    std::cout << "value = " << data->value << std::endl;
    std::cout << "Raw = "<< raw << std::endl;
    delete data;
    return (0);
}
