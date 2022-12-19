#include "main.hpp"
#include "ModConfig.hpp"

#include "UI/ModUI.hpp"
using namespace ScoreQolour::UI;

#include "questui/shared/BeatSaberUI.hpp"
using namespace QuestUI;

#include "GlobalNamespace/SliderController.hpp"
using namespace GlobalNamespace;


using namespace TMPro;

DEFINE_TYPE(ScoreQolour::UI, ScoreQolourUI);


void ScoreQolourUI::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)
{
    if (firstActivation)
    {
        auto container = BeatSaberUI::CreateScrollView(get_rectTransform());

        auto enableToggle = BeatSaberUI::CreateToggle(container->get_transform(), "Enable Score Qolour", getModConfig().Enabled.GetValue(), [](bool value)
        {
            getModConfig().Enabled.SetValue(value);

            if (value)
                getLogger().info("ScoreQolour is now enabled!");
            else
                getLogger().info("ScoreQolour is now disabled!");
        });
            BeatSaberUI::AddHoverHint(enableToggle->get_gameObject(), "Enables or disables Score Qolour");

        auto text1 = BeatSaberUI::CreateText(container->get_transform(), "Score One");
            text1->set_alignment(TextAlignmentOptions::Center);
            text1->set_fontSize(4.0f);
        
        auto activation1 = BeatSaberUI::CreateIncrementSetting(container->get_transform(), "Score", 0, 50000, getModConfig().Score1.GetValue(), [](float value)
        {
            if (value  <= 0)
                getModConfig().Score1.SetValue(0.0f);
            else
                getModConfig().Score1.SetValue(value);
        });
            BeatSaberUI::AddHoverHint(activation1->get_gameObject(), "The score for the first colour change! Note: Any score below 0 is automatically set back to 0.");
        
        BeatSaberUI::CreateColorPicker(container->get_transform(), "Left Saber", getModConfig().LeftSaber1.GetValue(), [](Color value)
        {
            getModConfig().LeftSaber1.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Right Saber", getModConfig().RightSaber1.GetValue(), [](Color value)
        {
            getModConfig().RightSaber1.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Bombs", getModConfig().BombColour1.GetValue(), [](Color value)
        {
            getModConfig().BombColour1.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Walls", getModConfig().WallColour1.GetValue(), [](Color value)
        {
            getModConfig().WallColour1.SetValue(value);
        });





        auto text2 = BeatSaberUI::CreateText(container->get_transform(), "Score Two");
            text2->set_alignment(TextAlignmentOptions::Center);
            text2->set_fontSize(4.0f);
        
        auto activation2 = BeatSaberUI::CreateIncrementSetting(container->get_transform(), "Score", 0, 50000, getModConfig().Score2.GetValue(), [](float value)
        {
            if (value  <= 0)
                getModConfig().Score2.SetValue(0.0f);
            else
                getModConfig().Score2.SetValue(value);
        });
            BeatSaberUI::AddHoverHint(activation2->get_gameObject(), "The score for the second colour change! Note: Any score below 0 is automatically set back to 0.");
        
        auto a = BeatSaberUI::CreateColorPicker(container->get_transform(), "Left Saber", getModConfig().LeftSaber2.GetValue(), [](Color value)
        {
            getModConfig().LeftSaber2.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Right Saber", getModConfig().RightSaber2.GetValue(), [](Color value)
        {
            getModConfig().RightSaber2.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Bombs", getModConfig().BombColour2.GetValue(), [](Color value)
        {
            getModConfig().BombColour2.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Walls", getModConfig().WallColour2.GetValue(), [](Color value)
        {
            getModConfig().WallColour2.SetValue(value);
        });




        auto text3 = BeatSaberUI::CreateText(container->get_transform(), "Score Three");
            text3->set_alignment(TextAlignmentOptions::Center);
            text3->set_fontSize(4.0f);
        
        auto activation3 = BeatSaberUI::CreateIncrementSetting(container->get_transform(), "Score", 0, 50000, getModConfig().Score3.GetValue(), [](float value)
        {
            if (value  <= 0)
                getModConfig().Score3.SetValue(0.0f);
            else
                getModConfig().Score3.SetValue(value);
        });
            BeatSaberUI::AddHoverHint(activation3->get_gameObject(), "The score for the third colour change! Note: Any score below 0 is automatically set back to 0.");
        
        BeatSaberUI::CreateColorPicker(container->get_transform(), "Left Saber", getModConfig().LeftSaber3.GetValue(), [](Color value)
        {
            getModConfig().LeftSaber3.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Right Saber", getModConfig().RightSaber3.GetValue(), [](Color value)
        {
            getModConfig().RightSaber3.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Bombs", getModConfig().BombColour3.GetValue(), [](Color value)
        {
            getModConfig().BombColour3.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Walls", getModConfig().WallColour3.GetValue(), [](Color value)
        {
            getModConfig().WallColour3.SetValue(value);
        });





        auto text4 = BeatSaberUI::CreateText(container->get_transform(), "Score Four");
            text4->set_alignment(TextAlignmentOptions::Center);
            text4->set_fontSize(4.0f);
        
        auto activation4 = BeatSaberUI::CreateIncrementSetting(container->get_transform(), "Score", 0, 50000, getModConfig().Score4.GetValue(), [](float value)
        {
            if (value  <= 0)
                getModConfig().Score4.SetValue(0.0f);
            else
                getModConfig().Score4.SetValue(value);
        });
            BeatSaberUI::AddHoverHint(activation4->get_gameObject(), "The score for the fourth colour change! Note: Any score below 0 is automatically set back to 0.");
        
        BeatSaberUI::CreateColorPicker(container->get_transform(), "Left Saber", getModConfig().LeftSaber4.GetValue(), [](Color value)
        {
            getModConfig().LeftSaber4.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Right Saber", getModConfig().RightSaber4.GetValue(), [](Color value)
        {
            getModConfig().RightSaber4.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Bombs", getModConfig().BombColour4.GetValue(), [](Color value)
        {
            getModConfig().BombColour4.SetValue(value);
        });

        BeatSaberUI::CreateColorPicker(container->get_transform(), "Walls", getModConfig().WallColour4.GetValue(), [](Color value)
        {
            getModConfig().WallColour4.SetValue(value);
        });
    }
}