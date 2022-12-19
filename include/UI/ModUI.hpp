#pragma once

#include "main.hpp"
#include "custom-types/shared/macros.hpp"
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"

#include "HMUI/ViewController.hpp"
using namespace HMUI;

#define GET_FIND_METHOD(mPtr) il2cpp_utils::il2cpp_type_check::MetadataGetter<mPtr>::get()

DECLARE_CLASS_CODEGEN(ScoreQolour::UI, ScoreQolourUI, ViewController,
    DECLARE_OVERRIDE_METHOD(void, DidActivate, GET_FIND_METHOD(&ViewController::DidActivate), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
)