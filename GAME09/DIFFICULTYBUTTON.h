#pragma once
#include "BUTTON.h"
#include "CHARTMANAGER.h"
#include "../../libOne/inc/COLOR.h"

namespace GAME09 {
    class DIFFICULTYBUTTON :
        public BUTTON
    {
    public:
        struct DATA {
            VECTOR2 numStrSize;
        };
    private:
        DATA DifficultyButton;
        CHARTMANAGER::DIFFICULTY Difficulty;
        COLOR Color;
    public:
        DIFFICULTYBUTTON(class GAME* game);
        ~DIFFICULTYBUTTON();
        void create();
        void init();
        void update();
        void draw();
        void setDifficulty(CHARTMANAGER::DIFFICULTY d) { Difficulty = d; }
    };
}