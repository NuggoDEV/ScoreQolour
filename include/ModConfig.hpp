#pragma once

#include "config-utils/shared/config-utils.hpp"

#include "UnityEngine/Color.hpp"
using namespace UnityEngine;

DECLARE_CONFIG(ModConfig,
    CONFIG_VALUE(Enabled, bool, "Enabled toggle switch", false);

    CONFIG_VALUE(Score1Enabled, bool, "First Score Toggle", false);
    CONFIG_VALUE(Score1, float, "First score activation", false);
    CONFIG_VALUE(LeftSaber1, Color, "Left Saber 1", Color(1, 0, 0, 1));
    CONFIG_VALUE(RightSaber1, Color, "Right Saber 1", Color(0, 0, 1, 1));
    CONFIG_VALUE(BombColour1, Color, "Bomb 1", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(WallColour1, Color, "Wall 1", Color(0.8, 0, 0, 1));

    CONFIG_VALUE(Score2Enabled, bool, "Second Score Toggle", false);
    CONFIG_VALUE(Score2, float, "Second score activation", false);
    CONFIG_VALUE(LeftSaber2, Color, "Left Saber 2", Color(1, 0, 0, 1));
    CONFIG_VALUE(RightSaber2, Color, "Right Saber 2", Color(0, 0, 1, 1));
    CONFIG_VALUE(BombColour2, Color, "Bomb 2", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(WallColour2, Color, "Wall 2", Color(0.8, 0, 0, 1));

    CONFIG_VALUE(Score3Enabled, bool, "Third Score Toggle", false);
    CONFIG_VALUE(Score3, float, "Third score activation", false);
    CONFIG_VALUE(LeftSaber3, Color, "Left Saber 3", Color(1, 0, 0, 1));
    CONFIG_VALUE(RightSaber3, Color, "Right Saber 3", Color(0, 0, 1, 1));
    CONFIG_VALUE(BombColour3, Color, "Bomb 3", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(WallColour3, Color, "Wall 3", Color(0.8, 0, 0, 1));

    CONFIG_VALUE(Score4Enabled, bool, "Fourth Score Toggle", false);
    CONFIG_VALUE(Score4, float, "Fourth score activation", false);
    CONFIG_VALUE(LeftSaber4, Color, "Left Saber 4", Color(1, 0, 0, 1));
    CONFIG_VALUE(RightSaber4, Color, "Right Saber 4", Color(0, 0, 1, 1));
    CONFIG_VALUE(BombColour4, Color, "Bomb 4", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(WallColour4, Color, "Wall 4", Color(0.8, 0, 0, 1));

    CONFIG_VALUE(Score5Enabled, bool, "Fifth Score Toggle", false);
    CONFIG_VALUE(Score5, float, "Fifth score activation", false);
    CONFIG_VALUE(LeftSaber5, Color, "Left Saber 5", Color(1, 0, 0, 1));
    CONFIG_VALUE(RightSaber5, Color, "Right Saber 5", Color(0, 0, 1, 1));
    CONFIG_VALUE(BombColour5, Color, "Bomb 5", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(WallColour5, Color, "Wall 5", Color(0.8, 0, 0, 1));
    
)