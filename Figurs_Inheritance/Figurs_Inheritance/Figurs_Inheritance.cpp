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
    virtual void print()
    {
        std::cout << this->x << "\t" << this->y << "\t";
    }
};
class Circle :public Figurs
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
        std::cout << "Диаметр = " << 2 * this->radius;
    }
    virtual void print()
    {
        Figurs::print();
        std::cout << this->radius<<"\t";
    }
};
class Square :public Figurs
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
    virtual void print()
    {
        Figurs::print();
        std::cout << this->size << "\t";
    }

};
class Rhombus :public Figurs
{
    int size;
    int height;
public:
    Rhombus()
    {
        this->size = 8;
        this->height = 4;
        this->x = 3;
        this->y = 6;
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
    virtual void print()
    {
        Figurs::print();
        std::cout << this->size << "\t"<<this->height<<"\t";
    }
};
struct Node
{
    Figurs* value;
    Node* next;
    Node()
    {

    }
    Node(Figurs* f, Node* next)
    {
        this->value = f;
        this->next = NULL;
    }
};
class Figurs_Collection
{
    Node* head;
public:
    Figurs_Collection()
    {
        this->head = NULL;

    }
    void add(Figurs* value)
    {
        if (this->head == NULL)
        {
            this->head = new Node(value, NULL);
        }
        else
        {
            Node* tmp = this->head;
            while (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = new Node(value, NULL);
        }
    }
    void show()
    {
        Node* tmp = this->head;
        while (tmp != NULL)
        {
            std::cout << tmp<<"\t";
            tmp->value->print();
            std::cout << tmp->next<<"\n";
            tmp = tmp->next;
        }
    }
};
int main()
{
    setlocale(0, "");
    Circle* c = new Circle;
    Square* s = new Square;
    Rhombus* r = new Rhombus;
    Figurs_Collection fc;
    fc.add(c);
    fc.add(s);
    fc.add(r);
    fc.show();
}