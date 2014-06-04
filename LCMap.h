#ifndef LCMAP_H
#define LCMAP_H
#include <math.h>  // Bunch of Libraries
#include <iostream>
#include <time.h>
#include <iomanip> // end of libiaries
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;

/*This class builds the map of the game it
calls in the image of the full map and
depending on the section you choose, it
will call the image the is more indepth of
the section.*/

class CampaignMap
    {

    public:
        CampaignMap();
        ~CampaignMap();
        void buildMainMap();
        SDL_Window* screen;
        SDL_Surface* screenPrint;
        SDL_Surface* backGroundMapOutput;

    private:
        int mapWidth;
        int mapHeight;
        bool gameWorks;
        bool newGame;

    };

#endif // LCMAP_H
