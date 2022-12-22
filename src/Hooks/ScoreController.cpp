#include "main.hpp"
#include "ModConfig.hpp"
#include "Hooks.hpp"

#include "GlobalNamespace/ScoreController.hpp"
#include "GlobalNamespace/ScoreUIController.hpp"
using namespace GlobalNamespace;

#include "chroma/shared/NoteAPI.hpp"
#include "chroma/shared/BombAPI.hpp"
#include "chroma/shared/ObstacleAPI.hpp"
using namespace Chroma;

MAKE_AUTO_HOOK_MATCH(ScoreUIController_UpdateScore, &ScoreUIController::UpdateScore, void, ScoreUIController *self, int multipliedScore, int modifiedScore)
{
    ScoreUIController_UpdateScore(self, multipliedScore, modifiedScore);

    if (getModConfig().Enabled.GetValue())
    {
        if (multipliedScore >= getModConfig().Score1.GetValue() && getModConfig().Score1Enabled.GetValue())
        {
            NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber1.GetValue(), getModConfig().RightSaber1.GetValue());
            BombAPI::setGlobalBombColorSafe(getModConfig().BombColour1.GetValue());
            ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour1.GetValue());
        }
        if (multipliedScore >= getModConfig().Score2.GetValue() && getModConfig().Score2Enabled.GetValue())
        {
            NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber2.GetValue(), getModConfig().RightSaber2.GetValue());
            BombAPI::setGlobalBombColorSafe(getModConfig().BombColour2.GetValue());
            ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour2.GetValue());
        }
        if (multipliedScore >= getModConfig().Score3.GetValue() && getModConfig().Score3Enabled.GetValue())
        {
            NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber3.GetValue(), getModConfig().RightSaber3.GetValue());
            BombAPI::setGlobalBombColorSafe(getModConfig().BombColour3.GetValue());
            ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour3.GetValue());
        }
        if (multipliedScore >= getModConfig().Score4.GetValue() && getModConfig().Score4Enabled.GetValue())
        {
            NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber4.GetValue(), getModConfig().RightSaber4.GetValue());
            BombAPI::setGlobalBombColorSafe(getModConfig().BombColour4.GetValue());
            ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour4.GetValue());
        }
        if (multipliedScore >= getModConfig().Score5.GetValue() && getModConfig().Score5Enabled.GetValue())
        {
            NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber5.GetValue(), getModConfig().RightSaber5.GetValue());
            BombAPI::setGlobalBombColorSafe(getModConfig().BombColour5.GetValue());
            ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour5.GetValue());
        }
    }
}