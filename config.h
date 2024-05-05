/*
                       __,,,,_
          _ __..-;''`--/'/ /.',-`-.
      (`/' ` |  \ \ \\ / / / / .-'/`,_
     /'`\ \   |  \ | \| // // / -.,/_,'-,
    /<7' ;  \ \  | ; ||/ /| | \/    |`-/,/-.,_,/')
   /  _.-, `,-\,__|  _-| / \ \/|_/  |    '-/.;.\'
   `-`  f/ ;      / __/ \__ `/ |__/ |
        `-'      |  -| =|\_  \  |-' |
              __/   /_..-' `  ),'  //
             ((__.-'((___..-'' \__.' 
*/

#ifndef CONFIG_H
#define CONFIG_H

// Mod (Mod1 == alt) and master size
#define MOD             Mod4Mask
#define MASTER_SIZE     0.6

// Colors
#define FOCUS           "#f58331"
#define UNFOCUS         "rgb:88/88/88"

// Borders and gap
#define BORDER_SIZE     3
#define GAP_SIZE        6

const char* dmenucmd[] = {"dmenu_run",NULL};
const char* term[]     = {"st",NULL};
const char* lockcmd[]  = {"slock",NULL};
const char* next[]     = {"ncmpcpp","next",NULL};
const char* prev[]     = {"ncmpcpp","prev",NULL};
const char* toggle[]   = {"ncmpcpp","toggle",NULL };
const char* voldown[]  = {"amixer","set","PCM","5\%-",NULL};
const char* volup[]    = {"amixer","set","PCM","5\%+",NULL};

// Avoid multiple paste
#define DESKTOPCHANGE(K,N) \
    {  MOD,             K,                          change_desktop, {.i = N}}, \
    {  MOD|ShiftMask,   K,                          client_to_desktop, {.i = N}},

// Shortcuts
static struct key keys[] = {
    // MOD              KEY                         FUNCTION        ARGS
    {  MOD,             XK_h,                       decrease,       {NULL}},
    {  MOD,             XK_l,                       increase,       {NULL}},
    {  MOD,             XK_x,                       kill_client,    {NULL}},
    {  MOD,             XK_j,                       next_win,       {NULL}},
    {  MOD,             XK_Tab,                     next_win,       {NULL}},
    {  MOD,             XK_k,                       prev_win,       {NULL}},
    {  MOD|ShiftMask,   XK_j,                       move_up,        {NULL}},
    {  MOD|ShiftMask,   XK_k,                       move_down,      {NULL}},
    {  MOD,             XK_Return,                  swap_master,    {NULL}},
    {  MOD,             XK_space,                   switch_mode,    {NULL}},
    {  MOD,             XK_c,                       spawn,          {.com = lockcmd}},
    {  0,               XF86XK_AudioNext,           spawn,          {.com = next}},
    {  0,               XF86XK_AudioPrev,           spawn,          {.com = prev}},
    {  0,               XF86XK_AudioPlay,           spawn,          {.com = toggle}},
    {  0,               XF86XK_AudioLowerVolume,    spawn,          {.com = voldown}},
    {  0,               XF86XK_AudioRaiseVolume,    spawn,          {.com = volup}},
    {  MOD,             XK_p,                       spawn,          {.com = dmenucmd}},
    {  MOD,             XK_Return,                  spawn,          {.com = term}},
    {  MOD,             XK_Right,                   next_desktop,   {NULL}},
    {  MOD,             XK_Left,                    prev_desktop,   {NULL}},
       DESKTOPCHANGE(   XK_0,                                       0)
       DESKTOPCHANGE(   XK_1,                                       1)
       DESKTOPCHANGE(   XK_2,                                       2)
       DESKTOPCHANGE(   XK_3,                                       3)
       DESKTOPCHANGE(   XK_4,                                       4)
       DESKTOPCHANGE(   XK_5,                                       5)
       DESKTOPCHANGE(   XK_6,                                       6)
       DESKTOPCHANGE(   XK_7,                                       7)
       DESKTOPCHANGE(   XK_8,                                       8)
       DESKTOPCHANGE(   XK_9,                                       9)
    {  MOD|ShiftMask,   XK_q,                       quit,           {NULL}}
};

#endif

