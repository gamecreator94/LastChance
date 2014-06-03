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

    CampaignMap buildMap;

    buildMap.buildMainMap();

    SDL_Delay(5000);

    return 0;

    }// int main( int argc, char* args[] )
