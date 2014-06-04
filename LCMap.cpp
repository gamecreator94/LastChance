#include <SDL.h>
#include <SDL_image.h>
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
#include "LCMap.h"

using namespace std;

/*This cpp file set the default of the
map when you start a new game and
when you load a game it will call the
needed information to determine what you
own.*/


CampaignMap::CampaignMap()
    {

    /*cout << "Test" << endl;*/

    mapWidth = 640;

    mapHeight = 480;

    gameWorks = true;

    screen = NULL;

    screenPrint = NULL;

    backGroundMapOutput = NULL;

    }// CampaignMap::CampaignMap()

void CampaignMap::buildMainMap()
    {

    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
        {

        cout << "Error the SDL failed to start. Last Chance has exited." << endl;

        cout << "The type of error is:" << SDL_GetError() << endl;

        gameWorks = false;

        }// if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    else
        {

        screen = SDL_CreateWindow( "Last Chance", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, mapWidth, mapHeight, SDL_WINDOW_SHOWN );

        if( screen == NULL )
            {

            cout << " An error has a occured stopping the screen from printing." << endl;

            cout << "Last Chance is exiting. The error is:" << SDL_GetError() << endl;

            gameWorks = false;

            }// if( screen == NULL )

        }// else of if( SDL_Init( SDL_INIT_VIDEO ) < 0 )

    }// void CampaignMap::buildMainMap()

CampaignMap::~CampaignMap()
    {


    gameWorks = false;

    /*cout << "Test End" << endl;*/

    }// CampaignMap::~CampaignMap()
