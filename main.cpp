#include <iostream>
#include <string>
#include "class.hpp"
#include "game.cpp"

int main() {
    using namespace std;

    // Initialisation du jeu
    game myGame;

    // Création de quelques entités
    myGame.createMech(100, 20, "MechWarrior");
    myGame.createCharacter(80, 15, "Soldier");
    myGame.createNPC("Civilian");

    // Création des objets de test
    Mech mech(120, 30, "HeavyMech");
    Character character(100, 25, "Hero");
    NPC npc("RandomNPC");

    // Affichage des informations initiales
    cout << "=== Initial States ===" << endl;
    cout << "Mech: HP = " << mech.getHp() << ", ATK = " << mech.getatk() << ", Name = " << mech.getnam() << endl;
    cout << "Character: HP = " << character.getHp() << ", ATK = " << character.getatk() << ", Name = " << character.getnam() << endl;
    cout << "NPC: HP = " << npc.getHp() << ", ATK = " << npc.getatk() << ", Name = " << npc.getnam() << endl;

    // Combat: Mech attaque Character
    cout << "\n=== Combat: Mech attacks Character ===" << endl;
    mech.attak(character);
    cout << "Character HP after attack: " << character.getHp() << endl;

    // Combat: Character attaque Mech
    cout << "\n=== Combat: Character attacks Mech ===" << endl;
    character.attak(mech);
    cout << "Mech HP after attack: " << mech.getHp() << endl;

    // Création et test d'un DrivedMech
    cout << "\n=== Creating DrivedMech ===" << endl;
    DrivedMech drivedMech(mech, character, "SuperMech");
    cout << "DrivedMech: HP = " << drivedMech.getHp() << ", ATK = " << drivedMech.getatk() << ", Name = " << drivedMech.getnam() << endl;

    // Combat: DrivedMech attaque NPC
    cout << "\n=== Combat: DrivedMech attacks NPC ===" << endl;
    drivedMech.attak(npc);
    cout << "NPC HP after attack: " << npc.getHp() << endl;

    return 0;
}