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
    // game Game = game();

    while (WindowShouldClose() == false && _HP.get_HP() > 0)
    {
        // if() 1.5 6 10.5
        if (evenTriggered(0.01))
        {
            Dora.Update_dora();
            Rat.Update_rat();
            Nobe.Update_nobe();
        }
        if (IsKeyPressed(KEY_W))
        {
            Doraemon.position.y -= 4.5;
        }
        if (IsKeyPressed(KEY_Q))
        {
            if (_Inventory.get_dorayaki() > 0)
            {
                _HP.update_HP(1);
                _Inventory.Use("Dorayaki");
            }
        }

        else if (IsKeyPressed(KEY_S))
        {
            Doraemon.position.y += 4.5;
        }
        else if (Doraemon.position.y < 1.5)
        {
            Doraemon.position.y = 10.5;
        }
        else if (Doraemon.position.y > 10.5)
        {
            Doraemon.position.y = 1.5;
        }

        int xPositions[3];
        getShuffledXPositions(xPositions);

        if (Nobe.position.x <= 55)
        {
            Nobe.position.x = xPositions[0];

            float oldY = Nobe.position.y;
            float newY;
            if (((Doraemon.position.y == 1.5) && (Nobe.position.y == 50)) || ((Doraemon.position.y == 6) && (Nobe.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Nobe.position.y == 360)))
            {
                cout << "Give me a cheese pls Q-Q" << endl;
                item = "cheese";
                _Inventory.Keep("cheese");
            }
            do
            {
                newY = getRandomYPosition();
            } while (newY == oldY);
            Nobe.position.y = newY;
        }
        else if (Dora.position.x <= 55)
        {
            Dora.position.x = xPositions[1];
            float oldY = Dora.position.y;
            float newY;
            if (((Doraemon.position.y == 1.5) && (Dora.position.y == 50)) || ((Doraemon.position.y == 6) && (Dora.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Dora.position.y == 360)))
            {
                cout << "Yummy Dorayaki W-W" << endl;
                item = "Dorayaki";
                _Inventory.Keep("Dorayaki");
            }
            do
            {
                newY = getRandomYPosition();
            } while (newY == oldY);
            Dora.position.y = newY;
            // cout<<Dora.position.x<<endl;
        }
        else if (Rat.position.x <= 60)
        {
            Rat.position.x = xPositions[2];
            float oldY = Rat.position.y;
            float newY;
            if (((Doraemon.position.y == 1.5) && (Rat.position.y == 50)) || ((Doraemon.position.y == 6) && (Rat.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Rat.position.y == 360)))
            {

                _HP.update_HP(-3);
            }
            do
            {
                newY = getRandomYPosition();
            } while (newY == oldY);
            Rat.position.y = newY;
        }
        // Kill RAT
        else if (Rat.position.x <= 200 && IsKeyPressed(KEY_E) && _Inventory.get_cheese() > 0)
        {
            _Inventory.Use("cheese");
            if (((Doraemon.position.y == 1.5) && (Rat.position.y == 50)) || ((Doraemon.position.y == 6) && (Rat.position.y == 180)) || ((Doraemon.position.y == 10.5) && (Rat.position.y == 360)))
            {
                Rat.position.x = xPositions[2];
                float oldY = Rat.position.y;
                float newY;
                do
                {
                    newY = getRandomYPosition();
                } while (newY == oldY);
                Rat.position.y = newY;
            }
        }

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
        if (_HP.get_HP() == 1)
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

        Rad5.Draw();
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
