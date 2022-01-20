#include <iostream>
class Figurs
{
protected:
    int x;
    int y;
public:
    Figurs()
    {
        this->x = 5;
        this->y = 8;
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
};
class Circle:public Figurs
{
    int radius;
public:
    Circle()
    {
        this->radius = 10;
        this->x = 6;
        this->y = 8;
    }
    void setRadius(int radius)
    {
        this->radius = radius;
    }
    int getRadius()
    {
        return this->radius;
    }
    void searchDiametr()
    {
        std::cout <<"Диаметр = "<< 2 * this->radius;
    }
};
class Square:public Figurs
{
    int size;
public:
    Square()
    {
        this->size = 4;
        this->x = 2;
        this->y = 2;
    }
    void setSize(int size)
    {
        this->size = size;
    }
    int getSize()
    {
        return this->size;
    }
    void searchArea()
    {
        std::cout << "Площадь квадрата = " << this->size * this->size;
    }
};
class Rhombus:public Figurs
{
    int size;
    int height;
public:
    Rhombus()
    {
        this->size = 8;
        this->height = 4;
        this->x = 2;
        this->y = 2;
    }
    void setSize(int size)
    {
        this->size = size;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    int getSize()
    {
        return this->size;
    }
    void searchArea()
    {
        std::cout << "Площадь ромба = " << this->size * this->height;
    }
};
int main()
{
    setlocale(0, "");
    Circle c;
    Square s;
    Rhombus r;
}

