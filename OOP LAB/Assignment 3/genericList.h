#ifndef GENERIC_LIST_H
#define GENERIC_LIST_H

#include <fstream>
#include <stdexcept>
using namespace std;

const int MAX_ITEMS = 1000;

template <typename T>
class GenericList
{
private:
    T *items[MAX_ITEMS];
    int count = 0;

public:
    void add(T *item)
    {
        if (count >= MAX_ITEMS)
            throw runtime_error("Storage full");
        items[count++] = item;
    }

    T *getById(string id)
    {
        for (int i = 0; i < count; i++)
        {
            if (items[i]->getId() == id)
                return items[i];
        }
        throw runtime_error("Item not found");
    }

    void saveToFile(string filename)
    {
        ofstream file(filename);
        for (int i = 0; i < count; i++)
        {
            file << items[i]->toFileString() << "\n";
        }
    }

    ~GenericList()
    {
        for (int i = 0; i < count; i++)
        {
            delete items[i];
        }
    }
};

#endif
