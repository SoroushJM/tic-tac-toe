#include <iostream>
#include "Header.h"
#include <ctime>
#include <stdlib.h>


using namespace std;

int Map[3][3] = {0,0,0,0,0,0,0,0,0}; //1 == x , 2 ==0
bool is_AI_on = false;//shoulde be false in default so change it after debug

int main()
{

    XO_selector();
    AI_state_changer();// this make AI on or off
    shomareKhanePrinter();
    while (true)//mach swicher
    {
        XO_selector();
        while (true)//round swicher
        {
            if (is_AI_on)//playing with Ai
            {
                placer(place_getter());
                print();
                if (End_game_checker())
                {
                    break;
                }
                AI();

                print();
                if (End_game_checker())
                {
                    break;
                }
            }
            else//mutiplayer
            {
                placer(place_getter());
                print();
                if (End_game_checker())
                {
                    break;
                }
            }

        }
        map_cleaner();
    }
    
}
