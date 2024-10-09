#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

    public:
        Array();
        Array(unsigned int n);
        //copy
        Array(const Array& copy);
        Array& operator=(const Array& copy){
            if (this == &copy)
                return *this;
            delete[] m_array;
            m_array = NULL;
            if (copy.m_array)
            {
                T *new_array = new T[copy.m_size];
                for (unsigned int i = 0; i < copy.m_size; i++)
                    new_array[i] = copy.m_array[i];
                m_array = new_array;
            }
            m_size = copy.m_size;
            return(*this);
        }
        ~Array();

        T& operator[](std::size_t i);

        unsigned int size() const{
            return (m_size);
        }

        void	print_values() const;

    private:
        T               *m_array;
        unsigned int    m_size;
    
};

template<typename T>
Array<T>::Array(): m_array(NULL), m_size(0){
    //nothing
}

template<typename T>
Array<T>::Array(unsigned int n){
    m_size = n;
    m_array = new T[n];

    for (unsigned int i = 0; i < n; i++)
        m_array[i] = T();
}

template<typename T>
Array<T>::Array(const Array& copy): m_array(NULL), m_size(0)
{
    *this = copy;
}


template<typename T>
Array<T>::~Array(){
    delete[] m_array;
}

template<typename T>
T& Array<T>::operator[](std::size_t i)
{
    if(i >= m_size)
        throw std::out_of_range("Index is out of range.");
    return (m_array[i]);
}

template<typename T>
void Array<T>::print_values() const
{
    if (m_array && m_size > 0)
    {
        for (unsigned int i = 0; i < m_size; i++)
        {
            std::cout << m_array[i] << " ";
        }
    }
    else
        std::cout << "empty ";
    std::cout << "--> " << m_size << " values" << std::endl;
}

#endif