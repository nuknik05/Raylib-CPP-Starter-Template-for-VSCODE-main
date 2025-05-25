#include <iostream>
#include <raylib.h>

using namespace std;
Color darkgreen = {43,51,24,255};
Color lightBlue = {226, 240, 243, 255};

int cellSize = 30;
// int cellSize2 = 9;
int cellCount = 25;

class doraemon
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    doraemon()
    {
        Image image = LoadImage("gg/doraemon.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~doraemon()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*20,position.y*35,WHITE);

    }




};
class dora
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    dora()
    {
        Image image = LoadImage("gg/dora.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~dora()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*100,position.y*10,WHITE);

    }




};

class nobe
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    nobe()
    {
        Image image = LoadImage("gg/nobe.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~nobe()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*220,position.y*35,WHITE);

    }




};
class rat
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    rat()
    {
        Image image = LoadImage("gg/rat.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~rat()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*340,position.y*60,WHITE);

    }




};

class dora2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    dora2()
    {
        Image image = LoadImage("gg/dora2.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~dora2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*10,position.y*75,WHITE);

    }




};
class che
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    che()
    {
        Image image = LoadImage("gg/che.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~che()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*65,position.y*75,WHITE);

    }




};
class papa1
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    papa1()
    {
        Image image = LoadImage("gg/papa.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~papa1()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*60,position.y*5,WHITE);

    }




};
class papa2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    papa2()
    {
        Image image = LoadImage("gg/papa.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~papa2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*60,position.y*33,WHITE);

    }




};
class red1
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red1()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red1()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*360,position.y*2,WHITE);

    }




};
class red2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red2()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*385,position.y*2,WHITE);

    }




};
class red3
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red3()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red3()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*410,position.y*2,WHITE);

    }




};
class red4
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red4()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red4()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*435,position.y*2,WHITE);

    }




};
class red5
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red5()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red5()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*460,position.y*2,WHITE);

    }




};
class s1
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    s1()
    {
        Image image = LoadImage("gg/s1.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~s1()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*40,position.y*72,WHITE);

    }




};
class s2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    s2()
    {
        Image image = LoadImage("gg/s2.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~s2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*40,position.y*72,WHITE);

    }




};
class s3
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    s3()
    {
        Image image = LoadImage("gg/s3.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~s3()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*40,position.y*72,WHITE);

    }




};
class s4
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    s4()
    {
        Image image = LoadImage("gg/s4.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~s4()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*40,position.y*72,WHITE);

    }




};
class s5
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    s5()
    {
        Image image = LoadImage("gg/s5.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~s5()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*40,position.y*72,WHITE);

    }




};
class ss1
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss1()
    {
        Image image = LoadImage("gg/s1.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss1()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*90,position.y*72,WHITE);

    }




};
class ss2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss2()
    {
        Image image = LoadImage("gg/s2.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*90,position.y*72,WHITE);

    }




};
class ss3
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss3()
    {
        Image image = LoadImage("gg/s3.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss3()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*90,position.y*72,WHITE);

    }




};
class ss4
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss4()
    {
        Image image = LoadImage("gg/s4.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss4()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*90,position.y*72,WHITE);

    }




};
class ss5
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss5()
    {
        Image image = LoadImage("gg/s5.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss5()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*90,position.y*72,WHITE);

    }




};
int main () 
{
    cout << "starting the game..."<< endl;
    InitWindow(1000,500 ,"doraemon");
    SetTargetFPS(60);

    doraemon Doraemon = doraemon();
    dora Dora = dora();
    nobe Nobe = nobe();
    rat Rat = rat ();
    dora2 Dora2 = dora2();
    che Che = che();
    papa1 Papa1 = papa1();
    papa2 Papa2 = papa2();
    red1 Rad1 = red1();
    red2 Rad2 = red2();
    red3 Rad3 = red3();
    red4 Rad4 = red4();
    red5 Rad5 = red5();
    s1 S1 = s1();
    s2 S2 = s2();
    s3 S3 = s3();
    s4 S4 = s4();
    s5 S5 = s5();
    ss1 Ss1 = ss1();
    ss2 Ss2 = ss2();
    ss3 Ss3 = ss3();
    ss4 Ss4 = ss4();
    ss5 Ss5 = ss5();

    while (WindowShouldClose () == false)
    {
        BeginDrawing();

        ClearBackground(lightBlue);
        Doraemon.Draw();
        Dora.Draw();
        Nobe.Draw();
        Rat.Draw();
        Dora2.Draw();
        Che.Draw();
        Papa1.Draw();
        Papa2.Draw();
        Rad1.Draw();
        Rad2.Draw();
        Rad3.Draw();
        Rad4.Draw();
        Rad5.Draw();
        // S1.Draw();
        // S2.Draw();
        // S3.Draw();
        // S4.Draw();
        S5.Draw();
        // Ss1.Draw();
        // Ss2.Draw();
        // Ss3.Draw();
        // Ss4.Draw();
        Ss5.Draw();
        EndDrawing ();





    }
    CloseWindow();
    return 0;

}

   