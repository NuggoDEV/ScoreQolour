#include "UI/ViewController.hpp"
using namespace ScoreQolour::UI;

#include "ModConfig.hpp"
#include "assets.hpp"

#include "bsml/shared/BSML/Parsing/BSMLParser.hpp"
using namespace BSML;

DEFINE_TYPE(ScoreQolour::UI, ScoreQolourView);

void ScoreQolourView::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)
{
    if (firstActivation)
    {
        auto parser = BSMLParser::parse(IncludedAssets::settings_bsml);
        parser->Construct(get_transform(), this);
    }
}