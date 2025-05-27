#include <iostream>
#include <string>
#include <vector>
#include <raylib.h>

class HP
{
public:
    HP(int hp) : hp_(hp) {}
    ~HP() = default;
    void Heart();
    void update_HP(int _val)
    {
        if (hp_ <= 5)
        {
            hp_ += _val;
        }
    }
    int get_HP()
    {
        return hp_;
    }

private:
    int hp_ = 5;
};

class Inventory : public HP
{
public:
    Inventory(int dorayaki = 0, int cheese = 0, int hp = 5)
        : HP(hp), dorayaki_(dorayaki), cheese_(cheese) {}
    ~Inventory() = default;
    void Keep(auto item)
    {
        if (item == "cheese")
        {
            if (cheese_ < 3)
            {
                cheese_ += 1;
            }
        }
        if (item == "Dorayaki")
        {
            if (dorayaki_ < 3)
            {
                dorayaki_ += 1;
            }
        }
    }

    void Use(auto use_item)
    {
        if (use_item == "cheese")
        {
            cheese_ -= 1;
        }
        if (use_item == "Dorayaki")
        {
            dorayaki_ -= 1;
        }
    }

    int get_dorayaki()
    {
        return dorayaki_;
    }
    int get_cheese()
    {
        return cheese_;
    }

private:
    int dorayaki_;
    int cheese_;
    bool pick_;
    char use_;
};

using namespace std;
Color darkgreen = {43, 51, 24, 255};
Color lightBlue = {226, 240, 243, 255};
Color pink      = {255, 192, 203, 255};

double lastupdatetime = 0;
bool RunningGame;

bool evenTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastupdatetime >= interval)
    {
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
    int choices[3] = {1000, 1100, 900};

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
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 20, position.y * 35, WHITE);
    }
    void Reset(){
        position.x=2;
        position.y=6;
    }
};
class dora // dorayaki
{
public:
    Vector2 position = {300, 60};
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
        DrawTexture(texture, position.x, position.y, WHITE);
    }
    void Update_dora()
    {
        position.x -= 4;
    }
};

class nobe // nobita
{
public:
    Vector2 position = {400, 200};
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
        DrawTexture(texture, position.x, position.y, WHITE);
    }
    void Update_nobe()
    {
        position.x -= 4;
    }
};
class rat
{
public:
    Vector2 position = {600, 340};
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
        DrawTexture(texture, position.x, position.y, WHITE);
    }
    void Update_rat()
    {
        position.x -= 6;
    }
};

class dora2
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 400, position.y * 75, WHITE);
    }
};
class che
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 450, position.y * 75, WHITE);
    }
    void Update_che()
    {
        position.x -= 1;
    }
};
class papa1
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 60, position.y * 5, WHITE);
    }
};
class papa2
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 60, position.y * 30, WHITE);
    }
};
class red1
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 360, position.y * 2, WHITE);
    }
};
class red2
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 385, position.y * 2, WHITE);
    }
};
class red3
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 410, position.y * 2, WHITE);
    }
};
class red4
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 435, position.y * 2, WHITE);
    }
};
class red5
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 460, position.y * 2, WHITE);
    }
};

class ee
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 446, position.y * 74, WHITE);
    }
};
class qq
{
public:
    Vector2 position = {2, 6};
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
        DrawTexture(texture, position.x * 395, position.y * 74, WHITE);
    }
};
