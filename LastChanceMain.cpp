#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <cmath>
#include <math.h>  // Bunch of Libraries
#include <iostream>
#include <time.h>
#include <iomanip> // end of libiaries
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
#include "LCMap.h"

using namespace std;

int main( int argc, char* args[] )
    {

    bool runGame = true;
    SDL_Event e;

    CampaignMap buildMap;

    buildMap.buildMainMap();

    while( runGame )
        {

        while( SDL_PollEvent( &e ) != 0 )
            {

            if( e.type == SDL_QUIT )
                {

                runGame = false;

                }// if( e.type == SDL_QUIT )

            }// while( SDL_PollEvent( &e ) != 0 )

        }// while( !runGame )



    return 0;

    }// int main( int argc, char* args[] )
