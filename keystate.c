#include "raylib.h"

int kb_layout[168];

static void set_layout(void)
{
kb_layout[0] = KEY_ESCAPE;
kb_layout[3] = KEY_F1;
kb_layout[4] = KEY_F2;
kb_layout[5] = KEY_F3;
kb_layout[6] = KEY_F4;
kb_layout[7] = KEY_F5;
kb_layout[8] = KEY_F6;
kb_layout[9] = KEY_F7;
kb_layout[10] = KEY_F8;
kb_layout[11] = KEY_F9;
kb_layout[12] = KEY_F10;
kb_layout[13] = KEY_F11;
kb_layout[14] = KEY_F12;
kb_layout[16] = KEY_PRINT_SCREEN;
kb_layout[17] = KEY_SCROLL_LOCK;
kb_layout[18] = KEY_PAUSE;

kb_layout[48] = KEY_GRAVE;
kb_layout[49] = KEY_ONE;
kb_layout[50] = KEY_TWO;
kb_layout[51] = KEY_THREE;
kb_layout[52] = KEY_FOUR;
kb_layout[53] = KEY_FIVE;
kb_layout[54] = KEY_SIX;
kb_layout[55] = KEY_SEVEN;
kb_layout[56] = KEY_EIGHT;
kb_layout[57] = KEY_NINE;
kb_layout[58] = KEY_ZERO;
kb_layout[59] = KEY_MINUS;
kb_layout[60] = KEY_EQUAL;
kb_layout[61] = KEY_BACKSPACE;
kb_layout[62] = KEY_BACKSPACE;
kb_layout[64] = KEY_INSERT;
kb_layout[65] = KEY_HOME;
kb_layout[66] = KEY_PAGE_UP;
kb_layout[68] = KEY_NUM_LOCK;
kb_layout[69] = KEY_KP_DIVIDE;
kb_layout[70] = KEY_KP_MULTIPLY;
kb_layout[71] = KEY_KP_SUBTRACT;

kb_layout[72] = KEY_TAB;
kb_layout[73] = KEY_TAB;
kb_layout[74] = KEY_Q;
kb_layout[75] = KEY_W;
kb_layout[76] = KEY_E;
kb_layout[77] = KEY_R;
kb_layout[78] = KEY_T;
kb_layout[79] = KEY_Y;
kb_layout[80] = KEY_U;
kb_layout[81] = KEY_I;
kb_layout[82] = KEY_O;
kb_layout[83] = KEY_P;
kb_layout[84] = KEY_LEFT_BRACKET;
kb_layout[85] = KEY_RIGHT_BRACKET;
kb_layout[86] = KEY_BACKSLASH;
kb_layout[88] = KEY_DELETE;
kb_layout[89] = KEY_END;
kb_layout[90] = KEY_PAGE_DOWN;
kb_layout[92] = KEY_KP_7;
kb_layout[93] = KEY_KP_8;
kb_layout[94] = KEY_KP_9;
kb_layout[95] = KEY_KP_ADD;

kb_layout[96] = KEY_CAPS_LOCK;
kb_layout[97] = KEY_CAPS_LOCK;
kb_layout[98] = KEY_A;
kb_layout[99] = KEY_S;
kb_layout[100] = KEY_D;
kb_layout[101] = KEY_F;
kb_layout[102] = KEY_G;
kb_layout[103] = KEY_H;
kb_layout[104] = KEY_J;
kb_layout[105] = KEY_K;
kb_layout[106] = KEY_L;
kb_layout[107] = KEY_SEMICOLON;
kb_layout[108] = KEY_APOSTROPHE;
kb_layout[109] = KEY_ENTER;
kb_layout[110] = KEY_ENTER;


kb_layout[116] = KEY_KP_4;
kb_layout[117] = KEY_KP_5;
kb_layout[118] = KEY_KP_6;
kb_layout[119] = KEY_KP_ADD;

kb_layout[120] = KEY_LEFT_SHIFT;
kb_layout[121] = KEY_LEFT_SHIFT;
kb_layout[122] = KEY_Z;
kb_layout[123] = KEY_X;
kb_layout[124] = KEY_C;
kb_layout[125] = KEY_V;
kb_layout[126] = KEY_B;
kb_layout[127] = KEY_N;
kb_layout[128] = KEY_M;
kb_layout[129] = KEY_COMMA;
kb_layout[130] = KEY_PERIOD;
kb_layout[131] = KEY_SLASH;
kb_layout[132] = KEY_RIGHT_SHIFT;
kb_layout[133] = KEY_RIGHT_SHIFT;
kb_layout[134] = KEY_RIGHT_SHIFT;

kb_layout[137] = KEY_UP;
kb_layout[140] = KEY_KP_1;
kb_layout[141] = KEY_KP_2;
kb_layout[142] = KEY_KP_3;
kb_layout[143] = KEY_KP_ENTER;

kb_layout[144] = KEY_LEFT_CONTROL;
kb_layout[145] = KEY_LEFT_SUPER;
kb_layout[146] = KEY_LEFT_ALT;
kb_layout[147] = KEY_SPACE;
kb_layout[148] = KEY_SPACE;
kb_layout[149] = KEY_SPACE;
kb_layout[150] = KEY_SPACE;
kb_layout[151] = KEY_SPACE;
kb_layout[152] = KEY_SPACE;
kb_layout[153] = KEY_SPACE;
kb_layout[154] = KEY_SPACE;
kb_layout[155] = KEY_RIGHT_ALT;
kb_layout[157] = KEY_RIGHT_SUPER;
kb_layout[157] = KEY_KB_MENU;
kb_layout[158] = KEY_RIGHT_CONTROL;
kb_layout[160] = KEY_LEFT;
kb_layout[161] = KEY_DOWN;
kb_layout[162] = KEY_RIGHT;
kb_layout[164] = KEY_KP_0;
kb_layout[165] = KEY_KP_0;
kb_layout[166] = KEY_KP_DECIMAL;
kb_layout[167] = KEY_KP_ENTER;

}

static void keyboard_test(void)
{
    ClearBackground(BLACK);
    BeginDrawing();

    int row = 24;
    for (int j = 0; j < 7; j++) {

    for (int i = 0; i < row; i++) {
        int letter = (j*row)+i;
        int key = kb_layout[letter];

        if (key) {
        if (IsKeyDown(key)) {
            DrawRectangle(i*64, 20+j*64, 64, 64, GREEN);
            DrawText(TextFormat("%c", (int)key), i*64, 20+j*64, 64, WHITE);
        }
        else {
            DrawRectangle(i*64, 20+j*64, 64, 64, DARKGRAY);
            DrawText(TextFormat("%c", (int)key), i*64, 20+j*64, 64, GRAY);
        };
        };
        
    };
    };

    DrawFPS(0, 700);
    EndDrawing();
}

int main(void)
{
    set_layout();
    int screenWidth = 1600;
    int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "I am testing my keyboard");
    SetScreenshotKey(false);
    SetExitKey(false);
    int current_monitor = GetCurrentMonitor();
  //  screenWidth = GetMonitorWidth(current_monitor);
  //  screenHeight = GetMonitorHeight(current_monitor);
  //  SetWindowState(FLAG_FULLSCREEN_MODE);
    SetWindowSize(screenWidth,screenHeight);
    SetTargetFPS(GetMonitorRefreshRate(current_monitor));

    while (!(IsKeyDown(KEY_ESCAPE))|!(IsKeyDown(KEY_F1)))
    {
        keyboard_test();
    }
    CloseWindow();

    return 0;
}