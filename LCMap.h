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
depending on the section of you choose it
will call the image the is more indepth of
the section.*/

class CampaignMap
    {

    public:
        CampaignMap();
        ~CampaignMap();
        void buildMainMap();
        void buildNorthMap();
        void buildSouthMap();
        void buildEastMap();
        void buildWestMap();

    private:
        int mapWidth;
        int mapHeight;


    };

#endif // LCMAP_H
