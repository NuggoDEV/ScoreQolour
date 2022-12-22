#pragma once
#include "HMUI/ViewController.hpp"

#include "custom-types/shared/macros.hpp"
#include "bsml/shared/macros.hpp"

#include "UnityEngine/Color.hpp"
using namespace UnityEngine;

DECLARE_CLASS_CODEGEN(ScoreQolour::UI, UIManager, Il2CppObject,
    DECLARE_INSTANCE_FIELD(HMUI::ViewController*, settingsViewController);

    DECLARE_BSML_PROPERTY(bool, Score1Enabled);
    DECLARE_BSML_PROPERTY(float, Score1);
    DECLARE_BSML_PROPERTY(Color, LeftSaber1);
    DECLARE_BSML_PROPERTY(Color, RightSaber1);
    DECLARE_BSML_PROPERTY(Color, BombColour1);
    DECLARE_BSML_PROPERTY(Color, WallColour1);

    DECLARE_BSML_PROPERTY(bool, Score2Enabled);
    DECLARE_BSML_PROPERTY(float, Score2);
    DECLARE_BSML_PROPERTY(Color, LeftSaber2);
    DECLARE_BSML_PROPERTY(Color, RightSaber2);
    DECLARE_BSML_PROPERTY(Color, BombColour2);
    DECLARE_BSML_PROPERTY(Color, WallColour2);

    DECLARE_BSML_PROPERTY(bool, Score3Enabled);
    DECLARE_BSML_PROPERTY(float, Score3);
    DECLARE_BSML_PROPERTY(Color, LeftSaber3);
    DECLARE_BSML_PROPERTY(Color, RightSaber3);
    DECLARE_BSML_PROPERTY(Color, BombColour3);
    DECLARE_BSML_PROPERTY(Color, WallColour3);

    DECLARE_BSML_PROPERTY(bool, Score4Enabled);
    DECLARE_BSML_PROPERTY(float, Score4);
    DECLARE_BSML_PROPERTY(Color, LeftSaber4);
    DECLARE_BSML_PROPERTY(Color, RightSaber4);
    DECLARE_BSML_PROPERTY(Color, BombColour4);
    DECLARE_BSML_PROPERTY(Color, WallColour4);

    DECLARE_BSML_PROPERTY(bool, Score5Enabled);
    DECLARE_BSML_PROPERTY(float, Score5);
    DECLARE_BSML_PROPERTY(Color, LeftSaber5);
    DECLARE_BSML_PROPERTY(Color, RightSaber5);
    DECLARE_BSML_PROPERTY(Color, BombColour5);
    DECLARE_BSML_PROPERTY(Color, WallColour5);

    DECLARE_CTOR(ctor);
    public:
        static UIManager *get_instance();
    private:
        static SafePtr<UIManager> instance;
)