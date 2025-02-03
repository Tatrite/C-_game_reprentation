#include <cassert>
#include <iostream> 
#include <cstdlib>
#include <vector>
#include "elements.cpp"
void affiche_vecteur(std::vector<int> lst){
    using namespace std;
    cout<< "| "<<flush;
    for(int i : lst){
    cout<<i<< " | "<<flush;
    }
    cout<< "\n"<<endl;
}
class game {
private:
    std::vector<NPC> NPCs;
    std::vector<Mech> Mechs;
    std::vector<Character> Characters;
    std::vector<DrivedMech> DrivedMechs;
public:
    game(){
    };

    void createNPC(std::string NAM){
        this->NPCs.push_back(NPC(NAM));
    }
    void createMech(int HP, int ATK, std::string NAM){
        this->Mechs.push_back(Mech(HP, ATK,NAM));
        
    }
    void createCharacter(int HP, int ATK, std::string NAM){
        this->Characters.push_back(Character(HP, ATK,NAM));
        
    }
    void createDrivedMech(Mech DMech, Character driv, std::string NAM){
        this->DrivedMechs.push_back(DrivedMech(DMech, driv,NAM));
    }


    template <typename T>
    void attack(T element1,T element2){

    }
};

