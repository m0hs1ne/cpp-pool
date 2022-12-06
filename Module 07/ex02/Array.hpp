#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array
{
public:
    Array() : m_size(0), m_data(nullptr) {}

    Array(std::size_t size) : m_size(size), m_data(new T[size]()) {}

    Array(const Array<T> &other)
        : m_size(other.m_size), m_data(new T[other.m_size])
    {
        for (std::size_t i = 0; i < m_size; ++i)
        {
            m_data[i] = other.m_data[i];
        }
    }

    ~Array()
    {
        delete[] m_data;
    }

    Array<T> &operator=(const Array<T> &other)
    {
        if (this != &other)
        {
            delete[] m_data;

            m_size = other.m_size;
            m_data = new T[m_size];

            for (std::size_t i = 0; i < m_size; ++i)
            {
                m_data[i] = other.m_data[i];
            }
        }

        return *this;
    }

    T &operator[](std::size_t index)
    {
        if (index >= m_size)
        {
            throw std::out_of_range("Array index out of bounds");
        }

        return m_data[index];
    }

    const T &operator[](std::size_t index) const
    {
        if (index >= m_size)
        {
            throw std::out_of_range("Array index out of bounds");
        }

        return m_data[index];
    }

    std::size_t size() const
    {
        return m_size;
    }

private:
    std::size_t m_size;
    T *m_data;
};
#endif