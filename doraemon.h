#include <iostream>
#include <string>
#include <vector>
#include <raylib.h>

class HP // สำหรับเก็บค่า HP ของโดเรมอน
{
public:
    HP(int hp) : hp_(hp) {}
    ~HP() = default;
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

class Inventory : public HP // กระเป๋าเก็บของ เพิ่ม / ลด โดรายากิ และชีสในกระเป๋า
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
    void Reset()
    {
        cheese_ = 0;
        dorayaki_ = 0;
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
Color pink = {255, 192, 203, 255};

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

    // สุ่มลำดับ
    for (int i = 2; i > 0; i--)
    {
        int j = GetRandomValue
        (0, i);
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

class display // รวมตำแหน่งของแต่ละรูป และการเปลี่ยนตำแหน่ง
{
public:
    float x_time = 0;
    float y_time = 0;
    Vector2 position = {0, 0};
    Texture2D texture;
    display(const char *pic, float x, float y)
    {
        position = {x, y};
        Image image = LoadImage(pic);
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
        DrawTexture(texture, x * x_time, y * y_time, WHITE);
    }

    int get_position_x()
    {
        return position.x;
    }

    int get_position_y()
    {
        return position.y;
    }

    void Draw()
    {
        DrawTexture(texture, position.x * x_time, position.y * y_time, WHITE);
    }
};

class doraemon : public display // draw doraemon
{
public:
    doraemon() : display("gg/doraemon.png", 2, 6)
    {
        x_time = 20;
        y_time = 35;
    }
    ~doraemon()
    {
        UnloadTexture(texture);
    }
    void Reset()
    {
        position.x = 2;
        position.y = 6;
    }
};

class dora : public display // draw dorayaki
{
public:
    dora() : display("gg/dora.png", 300, 60)
    {
        x_time = 1;
        y_time = 1;
    }
    ~dora()
    {
        UnloadTexture(texture);
    }
    void Update_dora()
    {
        position.x -= 4;
    }
};

class nobe : public display // draw nobita
{
public:
    nobe() : display("gg/nobe.png", 400, 200)
    {
        x_time = 1;
        y_time = 1;
    }
    ~nobe()
    {
        UnloadTexture(texture);
    }
    void Update_nobe()
    {
        position.x -= 4;
    }
};

class rat : public display // draw rat
{
public:
    rat() : display("gg/rat.png", 600, 340)
    {
        x_time = 1;
        y_time = 1;
    }
    ~rat()
    {
        UnloadTexture(texture);
    }
    void Update_rat()
    {
        position.x -= 9;
    }
};

class dora2 : public display // draw dorayaki
{
public:
    dora2() : display("gg/dora2.png", 2, 6)
    {
        x_time = 400;
        y_time = 75;
    }
    ~dora2()
    {
        UnloadTexture(texture);
    }
};

class che : public display // draw cheese
{
public:
    che() : display("gg/che.png", 2, 6)
    {
        x_time = 450;
        y_time = 75;
    }
    ~che()
    {
        UnloadTexture(texture);
    }
    void Update_che()
    {
        position.x -= 1;
    }
};

class papa1 : public display // draw เส้นประ
{
public:
    papa1() : display("gg/papa.png", 2, 6)
    {
        x_time = 60;
        y_time = 5;
    }
    ~papa1()
    {
        UnloadTexture(texture);
    }
};

class papa2 : public display // draw เส้นประ
{
public:
    papa2() : display("gg/papa.png", 2, 6)
    {
        x_time = 60;
        y_time = 30;
    }
    ~papa2()
    {
        UnloadTexture(texture);
    }
};

class red1 : public display // draw Heart
{
public:
    red1() : display("gg/red.png", 2, 6)
    {
        x_time = 360;
        y_time = 2;
    }
    ~red1()
    {
        UnloadTexture(texture);
    }
};

class red2 : public display // draw Heart
{
public:
    red2() : display("gg/red.png", 2, 6)
    {
        x_time = 385;
        y_time = 2;
    }
    ~red2()
    {
        UnloadTexture(texture);
    }
};

class red3 : public display // draw Heart
{
public:
    red3() : display("gg/red.png", 2, 6)
    {
        x_time = 410;
        y_time = 2;
    }
    ~red3()
    {
        UnloadTexture(texture);
    }
};

class red4 : public display // draw Heart
{
public:
    red4() : display("gg/red.png", 2, 6)
    {
        x_time = 435;
        y_time = 2;
    }
    ~red4()
    {
        UnloadTexture(texture);
    }
};

class red5 : public display // draw Heart
{
public:
    red5() : display("gg/red.png", 2, 6)
    {
        x_time = 460;
        y_time = 2;
    }
    ~red5()
    {
        UnloadTexture(texture);
    }
};

class ee : public display // E
{
public:
    ee() : display("gg/ee.png", 2, 6)
    {
        x_time = 446;
        y_time = 74;
    }
    ~ee()
    {
        UnloadTexture(texture);
    }
};

class qq : public display // Q
{
public:
    qq() : display("gg/qq.png", 2, 6)
    {
        x_time = 395;
        y_time = 74;
    }
    ~qq()
    {
        UnloadTexture(texture);
    }
};