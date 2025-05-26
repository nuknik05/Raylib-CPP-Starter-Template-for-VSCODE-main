#include <iostream>
#include <raylib.h>

using namespace std;
Color darkgreen = {43,51,24,255};
Color lightBlue = {226, 240, 243, 255};
Color gold      = {255, 215, 0, 255};
Color pink      = {255, 192, 203, 255};


int cellSize = 30;
// int cellSize2 = 9;
int cellCount = 25;
double lastupdatetime=0;

bool evenTriggered(double interval)
{
    double currentTime = GetTime();
    if(currentTime - lastupdatetime>=interval){
        lastupdatetime = currentTime;
        return true;
    }
    return false;
}

int getRandomYPosition()
{
    int choices[3] = {50, 180, 360};
    return (float)choices[GetRandomValue(0, 2)];
}

// สร้างฟังก์ชันเพื่อสับค่าแบบไม่ซ้ำ และแจก 3 ค่า
void getShuffledXPositions(int result[3])
{
    int choices[3] = {1000, 950, 900};

    // สุ่มลำดับ (Fisher-Yates shuffle)
    for (int i = 2; i > 0; i--)
    {
        int j = GetRandomValue(0, i);
        int temp = choices[i];
        choices[i] = choices[j];
        choices[j] = temp;
    }

    // คัดลอกผลลัพธ์
    for (int i = 0; i < 3; i++)
    {
        result[i] = choices[i];
    }
}

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
class dora//dorayaki
{
public :
    Vector2 position ={300,60};
    Texture2D texture;
   

    dora()
    {
        Image image = LoadImage("gg/dora.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
        position.y = getRandomYPosition();

    }
    ~dora()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x,position.y,WHITE);

    }
    void Update_dora()
    {
       position.x-=4;
        
    }




};

class nobe //nobita
{
public :
    Vector2 position ={400,200};
    Texture2D texture;
   

    nobe()
    {
        Image image = LoadImage("gg/nobe.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
        position.y = getRandomYPosition();

    }
    ~nobe()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x,position.y,WHITE);

    }
    void Update_nobe()
    {
      position.x-=4;
        
    }



};
class rat
{
public :
    Vector2 position ={600,340};
    Texture2D texture;
   

    rat()
    {
        Image image = LoadImage("gg/rat.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
        position.y = getRandomYPosition();

    }
    ~rat()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x,position.y,WHITE);

    }
    void Update_rat()
    {
       position.x-=6;
        
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
        DrawTexture(texture,position.x*400,position.y*75,WHITE);

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
        DrawTexture(texture,position.x*450,position.y*75,WHITE);

    }
    void Update_che()
    {
        position.x-=1;
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
        DrawTexture(texture,position.x*60,position.y*4,WHITE);

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
        DrawTexture(texture,position.x*60,position.y*30,WHITE);

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
        DrawTexture(texture,position.x*430,position.y*75,WHITE);

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
        DrawTexture(texture,position.x*430,position.y*75,WHITE);

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
        DrawTexture(texture,position.x*430,position.y*75,WHITE);

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
        DrawTexture(texture,position.x*430,position.y*75,WHITE);

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
        DrawTexture(texture,position.x*430,position.y*75,WHITE);

    }




};
class ss1
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss1()
    {
        Image image = LoadImage("gg/ss1.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss1()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*475,position.y*75,WHITE);

    }




};
class ss2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss2()
    {
        Image image = LoadImage("gg/ss2.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*475,position.y*75,WHITE);

    }




};
class ss3
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss3()
    {
        Image image = LoadImage("gg/ss3.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss3()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*475,position.y*75,WHITE);

    }




};
class ss4
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss4()
    {
        Image image = LoadImage("gg/ss4.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss4()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*475,position.y*75,WHITE);

    }




};
class ss5
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ss5()
    {
        Image image = LoadImage("gg/ss5.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ss5()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*475,position.y*75,WHITE);

    }




};
class ee
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    ee()
    {
        Image image = LoadImage("gg/ee.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~ee()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*446,position.y*74,WHITE);

    }




};
class qq
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    qq()
    {
        Image image = LoadImage("gg/qq.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~qq()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*395,position.y*74,WHITE);

    }




};
// class game{
// public:
//     doraemon Doraemon = doraemon();
//     dora Dora = dora();
//     nobe Nobe = nobe();
//     rat Rat = rat ();
//     che Che = che();

//     void update(){
//         Dora.Update_dora();
//         Nobe.Update_nobe();
//         Rat.Update_rat();
//         Che.Update_che();
//     }
//     void CheckcollisionWithFood(){
//         //mon y 0 6 12
        
//     }
// };
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
    ee Ee = ee();
    qq Qq = qq();
    // game Game = game();

    while (WindowShouldClose () == false)
    {
        // if() 1.5 6 10.5
        if(evenTriggered(0.01)){
            Dora.Update_dora();
            Rat.Update_rat();
            Nobe.Update_nobe();
        }
        if(IsKeyPressed(KEY_W)){
            Doraemon.position.y-=4.5;
        }
        else if(IsKeyPressed(KEY_S)){
            Doraemon.position.y+=4.5;
        }
        if(Doraemon.position.y<1.5){
            Doraemon.position.y=10.5;
        }
        if(Doraemon.position.y>10.5){
            Doraemon.position.y=1.5;
        }
        cout<<Nobe.position.x<<endl;

        int xPositions[3];
        getShuffledXPositions(xPositions);

        if(Nobe.position.x<=55){
            Nobe.position.x = xPositions[0];
            
            float oldY = Nobe.position.y;
            float newY;
            do {
                newY = getRandomYPosition();
            } while (newY == oldY);
            Nobe.position.y = newY;
        }
        if(Dora.position.x<=55){
            Dora.position.x = xPositions[1];
            float oldY = Dora.position.y;
            float newY;
            do {
                newY = getRandomYPosition();
            } while (newY == oldY);
            Dora.position.y = newY;
            //cout<<Dora.position.x<<endl;
        }
        if(Rat.position.x<=55){
            Rat.position.x = xPositions[2];
            float oldY = Rat.position.y;
            float newY;
            do {
                newY = getRandomYPosition();
            } while (newY == oldY);
            Rat.position.y = newY;
        }
        // บน 60 กลาง 180 ล่าง 378
        
        //3.Drawing
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
        Rad1.Draw();
        Rad2.Draw();
        Rad3.Draw();
        Rad4.Draw();
        Rad5.Draw();
        Ee.Draw();
        Qq.Draw();
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
