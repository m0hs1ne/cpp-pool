#include <iostream>

struct Data
{
    int x;
    float y;
    char z;
};

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data data = {10, 3.14f, 'a'};
    std::cout << "Data: x=" << data.x << ", y=" << data.y << ", z=" << data.z << std::endl;

    uintptr_t serialized = serialize(&data);
    std::cout << "Serialized: " << serialized << std::endl;

    Data *deserialized = deserialize(serialized);
    std::cout << "Deserialized: x=" << deserialized->x << ", y=" << deserialized->y << ", z=" << deserialized->z << std::endl;

    return 0;
}
