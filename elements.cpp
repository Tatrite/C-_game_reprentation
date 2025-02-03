#include <cassert>
#include <iostream> 
#include <cstdlib>
#include <vector>
#include "element.cpp"
class Mech : Element{
public:
    Mech(){
        this->hp=1;
        this->atk=0;
        this->maxhp=1;
        this->nam="";
        counter++;
        this->id=counter;
    }
    Mech(int HP, int ATK, std::string NAM){
        this->hp=HP;
        this->atk=ATK;
        this->maxhp=HP;
        this->nam=NAM;
        counter++;
        this->id=counter;
    }
    ~Mech(){};

//_setteur_and_getteurs
    int getHp(){
        return this->hp;
    }
    int getMaxHp(){
        return this->maxhp;
    }
    int getatk(){
        return this->atk;

    }
    std::string getnam(){
        return this->nam;
    }
    int getID(){
        return this->id;
    }

//_function
    template <typename T>
    int attak(T element){
        if (this->hp>0)
        {
            element.TakeDamage(this->atk);
        }
        return this->atk;
    }
    int TakeDamage(int Damage){
        this->hp-=Damage;
        if (this->hp<0)
        {
           this->hp=0;
        }
        return this->hp;
    }
};

class Character : Element{
public:
    Character(){
        this->hp=1;
        this->atk=0;
        this->maxhp=1;
        this->nam="";
        counter++;
        this->id=counter;
    }
    Character(int HP, int ATK, std::string NAM){
        this->hp=HP;
        this->atk=ATK;
        this->maxhp=HP;
        this->nam=NAM;
        counter++;
        this->id=counter;
    }
    ~Character(){};
//_setteur_and_getteurs

    int getID(){
        return this->id;
    }
    int getHp(){
        return this->hp;
    }
    int getMaxHp(){
        return this->maxhp;
    }
    int getatk(){
        return this->atk;

    }
    std::string getnam(){
        return this->nam;
    }


    template <typename T>
    int attak(T element){
        if (this->hp>0)
        {
            element.TakeDamage(this->atk);
        }
        return this->atk;
    }
    int TakeDamage(int Damage){
        this->hp-=Damage;
        if (this->hp<0)
        {
           this->hp=0;
        }
        return this->hp;
    }
};


class NPC : Element{
public:
    NPC( std::string NAM){
        this->hp=1;
        this->atk=0;
        this->maxhp=1;
        this->nam=NAM;
        counter++;
        this->id=counter;
    }
    ~NPC(){};
//_setteur_and_getteurs

    int getID(){
        return this->id;
    }
    int getHp(){
        return this->hp;
    }
    int getMaxHp(){
        return this->maxhp;
    }
    int getatk(){
        return this->atk;

    }
    std::string getnam(){
        return this->nam;
    }

//_function
    template <typename T>
    int attak(T element){
        return this->atk;
    }
    int TakeDamage(int Damage){
        return this->hp;
    }
};


class DrivedMech : Element{
private:
    Mech mech;
    Character driver;
public:
    DrivedMech(Mech DMech, Character driv, std::string NAM){
        this->mech=DMech;
        this->driver=driv;
        this->hp=this->mech.getHp()+this->driver.getHp();
        this->atk=this->mech.getatk()+this->driver.getatk();
        this->maxhp=this->hp;
        this->nam=NAM;
        counter++;
        this->id=counter;
    };
    ~DrivedMech();
//_setteur_and_getteurs
    int getID(){
        return this->id;
    }
    int getHp(){
        return this->hp;
    }
    int getMaxHp(){
        return this->maxhp;
    }
    int getatk(){
        return this->atk;

    }
    std::string getnam(){
        return this->nam;
    }
    Mech getMech(){
        return this->mech;
    }
    Character getDriver(){
        return this->driver;
    }

//_function
    template <typename T>
    int attak(T element){
        if (this->hp>0)
        {
            element.TakeDamage(this->atk);
        }
        return this->atk;
    }
    int TakeDamage(int Damage){
        this->hp-=Damage;
        if (this->hp<0)
        {
           this->hp=0;
           this->mech.TakeDamage(this->mech.getHp());
           this->driver.TakeDamage(this->driver.getHp());
        }
        return this->hp;
    }
};

