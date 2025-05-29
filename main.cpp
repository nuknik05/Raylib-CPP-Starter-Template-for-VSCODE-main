#include <iostream>
#include <raylib.h>
#include <doraemon.h>

int main()
{
    std::string item = "";
    Inventory _Inventory(0, 0, 5);
    HP _HP(5);

    cout << "starting the game..." << endl;
    InitWindow(1000, 500, "doraemon");
    SetTargetFPS(60);

    doraemon Doraemon = doraemon();
    dora Dora = dora();
    nobe Nobe = nobe();
    rat Rat = rat();
    dora2 Dora2 = dora2();
    che Che = che();
    papa1 Papa1 = papa1();
    papa2 Papa2 = papa2();
    red1 Rad1 = red1();
    red2 Rad2 = red2();
    red3 Rad3 = red3();
    red4 Rad4 = red4();
    red5 Rad5 = red5();
    ee Ee = ee();
    qq Qq = qq();

    while (WindowShouldClose() == false ) //&& _HP.get_HP() > 0
    {
        //Game Start
        if(IsKeyPressed(KEY_F)){
            RunningGame=true;
        }
        //Trigger and Update position
        if (evenTriggered(0.0001))
        { if(RunningGame){
            Dora.Update_dora();
        
            Rat.Update_rat();
            Nobe.Update_nobe();}
        }

        int xPositions[3];
        getShuffledXPositions(xPositions);

        //Control Pressed Botton
        switch (GetKeyPressed()) {
        case KEY_W:
        Doraemon.position.y -= 4.5;
        break;
        case KEY_S:
        Doraemon.position.y += 4.5;
        break;
        case KEY_Q:
        if ((_Inventory.get_dorayaki() > 0) && _HP.get_HP() < 5) {
            _HP.update_HP(1);
            _Inventory.Use("Dorayaki");
        }
        break;
        case KEY_E:
        if (Rat.position.x <= 200 && _Inventory.get_cheese() > 0) {
            _Inventory.Use("cheese");
            if (((Doraemon.position.y == 1.5) && (Rat.position.y == 50)) ||
                ((Doraemon.position.y == 6) && (Rat.position.y == 180)) ||
                ((Doraemon.position.y == 10.5) && (Rat.position.y == 360))) {
                Rat.position.x = xPositions[2];
                Rat.position.y = getRandomYPosition();
            }
        }
        break;
        case KEY_F:
        if (_HP.get_HP() <= 0) {
            RunningGame = true;
            if (_HP.get_HP() == 0) {
                _HP.update_HP(5);
            } else if (_HP.get_HP() == -1) {
                _HP.update_HP(6);
            } else if (_HP.get_HP() == -2) {
                _HP.update_HP(7);
            }
        }
        break;
        }

        //Keep Doraemon in screen
        if (Doraemon.position.y < 1.5)
        {
            Doraemon.position.y = 10.5;
        }
        else if (Doraemon.position.y > 10.5)
        {
            Doraemon.position.y = 1.5;
        }

        //Check position and Suffer X,Y Position and Colleted iteams and Update HP
        if (Nobe.position.x <= 55)
        {
            if (((Doraemon.position.y == 1.5) && (Nobe.position.y == 50)) || ((Doraemon.position.y == 6) && (Nobe.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Nobe.position.y == 360)))
            {
                cout << "Give me a cheese pls Q-Q" << endl;
                item = "cheese";
                _Inventory.Keep("cheese");
            }
            Nobe.position.x = xPositions[0];
            Nobe.position.y = getRandomYPosition();
        }
        else if (Dora.position.x <= 55)
        {
            if (((Doraemon.position.y == 1.5) && (Dora.position.y == 50)) || ((Doraemon.position.y == 6) && (Dora.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Dora.position.y == 360)))
            {
                cout << "Yummy Dorayaki W-W" << endl;
                item = "Dorayaki";
                _Inventory.Keep("Dorayaki");
            }
            Dora.position.x = xPositions[1];
            Dora.position.y =getRandomYPosition();
        }
        else if (Rat.position.x <= 60)
        {
 
            if (((Doraemon.position.y == 1.5) && (Rat.position.y == 50)) || ((Doraemon.position.y == 6) && (Rat.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Rat.position.y == 360)))
            {
                _HP.update_HP(-3);
            }
            Rat.position.x = xPositions[2];
            Rat.position.y =getRandomYPosition();
            
        }
        
        // Kill RAT
        else if (Rat.position.x <= 500 && IsKeyPressed(KEY_E) && _Inventory.get_cheese() > 0)
        {
            _Inventory.Use("cheese");
            if (((Doraemon.position.y == 1.5) && (Rat.position.y == 50)) || ((Doraemon.position.y == 6) && (Rat.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Rat.position.y == 360)))
            {
                Rat.position.x = xPositions[2];
                Rat.position.y = getRandomYPosition();
            }
        }
        //Drawing State
        BeginDrawing();
        ClearBackground(pink);
        Doraemon.Draw();
        Dora.Draw();
        Nobe.Draw();
        Rat.Draw();
        Dora2.Draw();
        Che.Draw();
        Papa1.Draw();
        Papa2.Draw();

        // HP state
        if((_HP.get_HP() <= 0)){
            RunningGame=false;
            Doraemon.Reset();
            _Inventory.Reset();
        }
        else if (_HP.get_HP() == 1)
        {
            Rad5.Draw();
        }
        else if (_HP.get_HP() == 2)
        {
            Rad5.Draw();
            Rad4.Draw();
        }
        else if (_HP.get_HP() == 3)
        {
            Rad5.Draw();
            Rad4.Draw();
            Rad3.Draw();
        }
        else if (_HP.get_HP() == 4)
        {
            Rad5.Draw();
            Rad4.Draw();
            Rad3.Draw();
            Rad2.Draw();
        }
        else if (_HP.get_HP() == 5)
        {
            Rad5.Draw();
            Rad4.Draw();
            Rad3.Draw();
            Rad2.Draw();
            Rad1.Draw();
        }

        Ee.Draw();
        Qq.Draw();
        EndDrawing();

        // Show item
        char scoreText_cheese[20];
        sprintf(scoreText_cheese, "%d", _Inventory.get_cheese());
        DrawText(scoreText_cheese, 950, 450, 30, BLACK);

        char scoreText_dorayaki[20];
        sprintf(scoreText_dorayaki, "%d", _Inventory.get_dorayaki());
        DrawText(scoreText_dorayaki, 860, 450, 30, BLACK);
    }
    CloseWindow();
    return 0;
}