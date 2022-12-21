#include "UI/FlowCoordinator.hpp"
using namespace ScoreQolour::UI;

#include "UI/ViewController.hpp"

#include "HMUI/ViewController_AnimationDirection.hpp"
#include "HMUI/ViewController_AnimationType.hpp"

#include "questui/shared/BeatSaberUI.hpp"
using namespace QuestUI;

DEFINE_TYPE(ScoreQolour::UI, ScoreQolourFlow);

void ScoreQolourFlow::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)
{
    if (firstActivation)
    {
        scoreQolourView = BeatSaberUI::CreateViewController<ScoreQolour::UI::ScoreQolourView *>();

        showBackButton = true;

        ProvideInitialViewControllers(scoreQolourView, nullptr, nullptr, nullptr, nullptr);
        SetTitle("Score Qolour", HMUI::ViewController::AnimationType::In);
    }
}

void ScoreQolourFlow::BackButtonWasPressed(HMUI::ViewController *topViewController)
{
    this->parentFlowCoordinator->DismissFlowCoordinator(this, HMUI::ViewController::AnimationDirection::Horizontal, nullptr, false);
}