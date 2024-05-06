#include<iostream>

class Rectangle
{
public:
    int m_length;
    int m_width;

    // Default constructor
    Rectangle()
    {
        // We don't need to do anything here, because m_length and m_width will be set in the main function
    }

    int getArea() const
    {
        return m_length * m_width;
    }
};

int main()
{
    Rectangle rect;
    rect.m_length = 5; // set length
    rect.m_width = 10; // set width
    std::cout << "Area of rectangle: " << rect.getArea() << std::endl; // prints: Area of rectangle: 50
    return 0;
}