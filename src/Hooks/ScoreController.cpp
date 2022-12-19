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

MAKE_AUTO_HOOK_MATCH(adfv, &ScoreUIController::UpdateScore, void, ScoreUIController *self, int multipliedScore, int modifiedScore)
{
    adfv(self, multipliedScore, modifiedScore);

    if (multipliedScore >= getModConfig().Score1.GetValue())
    {
        NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber1.GetValue(), getModConfig().RightSaber1.GetValue());
        BombAPI::setGlobalBombColorSafe(getModConfig().BombColour1.GetValue());
        ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour1.GetValue());
    }
    if (multipliedScore >= getModConfig().Score2.GetValue())
    {
        NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber2.GetValue(), getModConfig().RightSaber2.GetValue());
        BombAPI::setGlobalBombColorSafe(getModConfig().BombColour2.GetValue());
        ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour2.GetValue());
    }
    if (multipliedScore >= getModConfig().Score3.GetValue())
    {
        NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber3.GetValue(), getModConfig().RightSaber3.GetValue());
        BombAPI::setGlobalBombColorSafe(getModConfig().BombColour3.GetValue());
        ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour3.GetValue());
    }
    if (multipliedScore >= getModConfig().Score4.GetValue())
    {
        NoteAPI::setGlobalNoteColorSafe(getModConfig().LeftSaber4.GetValue(), getModConfig().RightSaber4.GetValue());
        BombAPI::setGlobalBombColorSafe(getModConfig().BombColour4.GetValue());
        ObstacleAPI::setAllObstacleColorSafe(getModConfig().WallColour4.GetValue());
    }
}