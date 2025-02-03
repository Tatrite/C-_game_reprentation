#include <cassert>
#include <iostream> 
#include <cstdlib>
#include <vector>

class Element{
protected:
    
    static int counter;
    int maxhp;
    int hp;
    int atk;
    std::string nam;
    int id;
public:
    Element();
    ~Element();

    
    int attak(Element element);
    int TakeDamage(int damage);
};

