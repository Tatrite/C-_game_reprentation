# C++_game_reprentation

## Sujet
Vous allez créer un système de gestion de jeu vidéo (Game),   
permettant la gestion du suivi des différents éléments (Element) du jeu :  personnages (Character), véhicules (Mech).

Une classe “Game” permettra de centraliser et stocker tous les éléments du jeu (Element) et comportera des méthodes publiques d’accès aux Element.
les Element ont des points de vie, des points d’attaque,  mais certains Character (NPC) auront toujours 1 en point de vie (indestructibles) et 0 en valeur de points d’attaque. 
Ils ont chacun un nom donné manuellement et un identifiant numérique unique délivré par le Jeu.

Un Element peut attaquer un autre et lui enlever des points de vie en fonction de ses points d’attaque. Arrivé à 0 en points de vie, l’élément est déclaré “mort” mais reste instancié :  il ne peut alors plus attaquer.

il est possible d’associer un Character et un Mech pour créer un nouvel Element (DrivedMech) qui aura alors le cumul des points de vie et attaque des 2  objets (dans ce cas, le nouvel objet DrivedMech pourra tirer, mais pas le Player ni le Mech). 
Si le DrivedMech est mort, alors le Player et le Mech sont morts aussi.La fonction “main” instanciera un classe “Game”, plusieurs objets Element et les animera avec affichage des données les concernant (création, mort, dommages, tirs...).

*Vous utiliserez au maximum les notions vues en cours : polymorphisme, smart-pointers, surchage d’opérateurs, modularité, structures, enums...*
## Consignes

Utilisez la modularité : distribuez votre code sur plusieurs fichiers et faites en sorte que le correcteur puisse taper : “make game” afin de compiler votre projet.