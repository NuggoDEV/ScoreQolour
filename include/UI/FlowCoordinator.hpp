#pragma once

#include "HMUI/FlowCoordinator.hpp"
#include "HMUI/ViewController.hpp"
#include "custom-types/shared/macros.hpp"
#include "bsml/shared/macros.hpp"

#include "UnityEngine/Color.hpp"
using namespace UnityEngine;

#define Colour UnityEngine::Color

#include "bsml/shared/BSML/MenuButtons/MenuButton.hpp"


DECLARE_CLASS_CODEGEN(ScoreQolour::UI, ScoreQolourFlow, HMUI::FlowCoordinator,
    DECLARE_INSTANCE_FIELD(HMUI::ViewController*, scoreQolourView);

    //DECLARE_BSML_PROPERTY(bool, Enabled);
//
    //DECLARE_BSML_PROPERTY(bool, Score1Enabled);
    //DECLARE_BSML_PROPERTY(float, Score1);
    //DECLARE_BSML_PROPERTY(Colour, LeftSaber1);
    //DECLARE_BSML_PROPERTY(Colour, RightSaber1);
    //DECLARE_BSML_PROPERTY(Colour, BombColour1);
    //DECLARE_BSML_PROPERTY(Colour, WallColour1);
//
    //DECLARE_BSML_PROPERTY(bool, Score2Enabled);
    //DECLARE_BSML_PROPERTY(float, Score2);
    //DECLARE_BSML_PROPERTY(Colour, LeftSaber2);
    //DECLARE_BSML_PROPERTY(Colour, RightSaber2);
    //DECLARE_BSML_PROPERTY(Colour, BombColour2);
    //DECLARE_BSML_PROPERTY(Colour, WallColour2);
//
    //DECLARE_BSML_PROPERTY(bool, Score3Enabled);
    //DECLARE_BSML_PROPERTY(float, Score3);
    //DECLARE_BSML_PROPERTY(Colour, LeftSaber3);
    //DECLARE_BSML_PROPERTY(Colour, RightSaber3);
    //DECLARE_BSML_PROPERTY(Colour, BombColour3);
    //DECLARE_BSML_PROPERTY(Colour, WallColour3);
//
    //DECLARE_BSML_PROPERTY(bool, Score4Enabled);
    //DECLARE_BSML_PROPERTY(float, Score4);
    //DECLARE_BSML_PROPERTY(Colour, LeftSaber4);
    //DECLARE_BSML_PROPERTY(Colour, RightSaber4);
    //DECLARE_BSML_PROPERTY(Colour, BombColour4);
    //DECLARE_BSML_PROPERTY(Colour, WallColour4);
//
    //DECLARE_BSML_PROPERTY(bool, Score5Enabled);
    //DECLARE_BSML_PROPERTY(float, Score5);
    //DECLARE_BSML_PROPERTY(Colour, LeftSaber5);
    //DECLARE_BSML_PROPERTY(Colour, RightSaber5);
    //DECLARE_BSML_PROPERTY(Colour, BombColour5);
    //DECLARE_BSML_PROPERTY(Colour, WallColour5);

    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "FlowCoordinator", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    DECLARE_OVERRIDE_METHOD(void, BackButtonWasPressed, il2cpp_utils::FindMethodUnsafe("HMUI", "FlowCoordinator", "BackButtonWasPressed", 1), HMUI::ViewController *topViewController);
)