#include "UI/UIManager.hpp"
using namespace ScoreQolour::UI;
#include "ModConfig.hpp"

#include "bsml/shared/BSML.hpp"

#include "UnityEngine/Color.hpp"
using namespace UnityEngine;


DEFINE_TYPE(ScoreQolour::UI, ScoreQolourManager);

namespace ScoreQolour::UI
{
    SafePtr<ScoreQolourManager> ScoreQolourManager::instance;
    ScoreQolourManager *ScoreQolourManager::get_instance()
    {
        if (!instance)
            instance = ScoreQolourManager::New_ctor();
        return instance.ptr();
    }

    void ScoreQolourManager::ctor()
    {

    }

    bool ScoreQolourManager::get_Enabled() { return getModConfig().Enabled.GetValue(); }
    void ScoreQolourManager::set_Enabled(bool value) { getModConfig().Enabled.SetValue(value); }



    bool ScoreQolourManager::get_Score1Enabled() { return getModConfig().Score1Enabled.GetValue(); }
    void ScoreQolourManager::set_Score1Enabled(bool value) { getModConfig().Score1Enabled.SetValue(value); }

    float ScoreQolourManager::get_Score1() { return getModConfig().Score1.GetValue(); }
    void ScoreQolourManager::set_Score1(float value) { getModConfig().Score1.SetValue(value); }

    Color ScoreQolourManager::get_LeftSaber1() { return getModConfig().LeftSaber1.GetValue(); }
    void ScoreQolourManager::set_LeftSaber1(Color value) { getModConfig().LeftSaber1.SetValue(value); }

    Color ScoreQolourManager::get_RightSaber1() { return getModConfig().RightSaber1.GetValue(); }
    void ScoreQolourManager::set_RightSaber1(Color value) { getModConfig().RightSaber1.SetValue(value); }

    Color ScoreQolourManager::get_BombColour1() { return getModConfig().BombColour1.GetValue(); }
    void ScoreQolourManager::set_BombColour1(Color value) { getModConfig().BombColour1.SetValue(value); }

    Color ScoreQolourManager::get_WallColour1() { return getModConfig().WallColour1.GetValue(); }
    void ScoreQolourManager::set_WallColour1(Color value) { getModConfig().WallColour1.SetValue(value); }



    bool ScoreQolourManager::get_Score2Enabled() { return getModConfig().Score2Enabled.GetValue(); }
    void ScoreQolourManager::set_Score2Enabled(bool value) { getModConfig().Score2Enabled.SetValue(value); }

    float ScoreQolourManager::get_Score2() { return getModConfig().Score2.GetValue(); }
    void ScoreQolourManager::set_Score2(float value) { getModConfig().Score2.SetValue(value); }

    Color ScoreQolourManager::get_LeftSaber2() { return getModConfig().LeftSaber2.GetValue(); }
    void ScoreQolourManager::set_LeftSaber2(Color value) { getModConfig().LeftSaber2.SetValue(value); }

    Color ScoreQolourManager::get_RightSaber2() { return getModConfig().RightSaber2.GetValue(); }
    void ScoreQolourManager::set_RightSaber2(Color value) { getModConfig().RightSaber2.SetValue(value); }

    Color ScoreQolourManager::get_BombColour2() { return getModConfig().BombColour2.GetValue(); }
    void ScoreQolourManager::set_BombColour2(Color value) { getModConfig().BombColour2.SetValue(value); }

    Color ScoreQolourManager::get_WallColour2() { return getModConfig().WallColour2.GetValue(); }
    void ScoreQolourManager::set_WallColour2(Color value) { getModConfig().WallColour2.SetValue(value); }



    bool ScoreQolourManager::get_Score3Enabled() { return getModConfig().Score3Enabled.GetValue(); }
    void ScoreQolourManager::set_Score3Enabled(bool value) { getModConfig().Score3Enabled.SetValue(value); }

    float ScoreQolourManager::get_Score3() { return getModConfig().Score3.GetValue(); }
    void ScoreQolourManager::set_Score3(float value) { getModConfig().Score3.SetValue(value); }

    Color ScoreQolourManager::get_LeftSaber3() { return getModConfig().LeftSaber3.GetValue(); }
    void ScoreQolourManager::set_LeftSaber3(Color value) { getModConfig().LeftSaber3.SetValue(value); }

    Color ScoreQolourManager::get_RightSaber3() { return getModConfig().RightSaber3.GetValue(); }
    void ScoreQolourManager::set_RightSaber3(Color value) { getModConfig().RightSaber3.SetValue(value); }

    Color ScoreQolourManager::get_BombColour3() { return getModConfig().BombColour3.GetValue(); }
    void ScoreQolourManager::set_BombColour3(Color value) { getModConfig().BombColour3.SetValue(value); }

    Color ScoreQolourManager::get_WallColour3() { return getModConfig().WallColour3.GetValue(); }
    void ScoreQolourManager::set_WallColour3(Color value) { getModConfig().WallColour3.SetValue(value); }



    bool ScoreQolourManager::get_Score4Enabled() { return getModConfig().Score4Enabled.GetValue(); }
    void ScoreQolourManager::set_Score4Enabled(bool value) { getModConfig().Score4Enabled.SetValue(value); }

    float ScoreQolourManager::get_Score4() { return getModConfig().Score4.GetValue(); }
    void ScoreQolourManager::set_Score4(float value) { getModConfig().Score4.SetValue(value); }

    Color ScoreQolourManager::get_LeftSaber4() { return getModConfig().LeftSaber4.GetValue(); }
    void ScoreQolourManager::set_LeftSaber4(Color value) { getModConfig().LeftSaber4.SetValue(value); }

    Color ScoreQolourManager::get_RightSaber4() { return getModConfig().RightSaber4.GetValue(); }
    void ScoreQolourManager::set_RightSaber4(Color value) { getModConfig().RightSaber4.SetValue(value); }

    Color ScoreQolourManager::get_BombColour4() { return getModConfig().BombColour4.GetValue(); }
    void ScoreQolourManager::set_BombColour4(Color value) { getModConfig().BombColour4.SetValue(value); }

    Color ScoreQolourManager::get_WallColour4() { return getModConfig().WallColour4.GetValue(); }
    void ScoreQolourManager::set_WallColour4(Color value) { getModConfig().WallColour4.SetValue(value); }



    bool ScoreQolourManager::get_Score5Enabled() { return getModConfig().Score5Enabled.GetValue(); }
    void ScoreQolourManager::set_Score5Enabled(bool value) { getModConfig().Score5Enabled.SetValue(value); }

    float ScoreQolourManager::get_Score5() { return getModConfig().Score5.GetValue(); }
    void ScoreQolourManager::set_Score5(float value) { getModConfig().Score5.SetValue(value); }

    Color ScoreQolourManager::get_LeftSaber5() { return getModConfig().LeftSaber5.GetValue(); }
    void ScoreQolourManager::set_LeftSaber5(Color value) { getModConfig().LeftSaber5.SetValue(value); }

    Color ScoreQolourManager::get_RightSaber5() { return getModConfig().RightSaber5.GetValue(); }
    void ScoreQolourManager::set_RightSaber5(Color value) { getModConfig().RightSaber5.SetValue(value); }

    Color ScoreQolourManager::get_BombColour5() { return getModConfig().BombColour5.GetValue(); }
    void ScoreQolourManager::set_BombColour5(Color value) { getModConfig().BombColour5.SetValue(value); }

    Color ScoreQolourManager::get_WallColour5() { return getModConfig().WallColour5.GetValue(); }
    void ScoreQolourManager::set_WallColour5(Color value) { getModConfig().WallColour5.SetValue(value); }
}