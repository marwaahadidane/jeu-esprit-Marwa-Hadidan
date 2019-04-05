#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "perso.h"
int check_collision (perso *personnage1, perso *personnage2)
{	

	if((personnage1->pos.x >= personnage2->pos.x + personnage2->pos.w)      // trop à droite
	|| (personnage1->pos.x + personnage1->pos.w <= personnage2->pos.x) // trop à gauche
        || (personnage1->pos.y >= personnage2->pos.y + personnage2->pos.h) // trop en bas
	|| (personnage1->pos.y + personnage1->pos.h <= personnage2->pos.y))  // trop en haut
			return 1;
	return 0;
 
}
