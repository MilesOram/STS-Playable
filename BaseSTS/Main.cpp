#include <iostream>
#ifdef _MSC_VER
#include <CodeAnalysis/Warnings.h> // ALL_CODE_ANALYSIS_WARNINGS
#pragma warning (push)
#pragma warning (disable : ALL_CODE_ANALYSIS_WARNINGS)
#endif
#ifdef _MSC_VER
#pragma warning (pop)
#endif
#include <string>
#include <functional>


#include "card.h"
#include "character.h"
#include "effects_triggers.h"
#include "enemies.h"
#include "events.h"
#include "gamestate.h"
#include "ic_cards.h"
#include "pc_info.h"
#include "relic.h"	
#include "potions.h"	
#include "savestate.h"
#include "visuals.h"

using namespace std;
int callCount{ 0 };
class pythonFunctions
{
private:
public:
    pythonFunctions() {}
};

int callMicroIndex(const std::vector<stateInfo>& vecSINFOS, pythonFunctions& pyFunc_)
{
    return 0;

}
vector<float> callMicroValues(const std::vector<stateInfo>& vecSINFOS, pythonFunctions& pyFunc_)
{
    return vector<float>();
}
void showAIDecisions(pythonFunctions& pyFunc_)
{
    return;
}
int callMacroIndexCONSTPRED(const vector<macroStateInfo>& MSIs, pythonFunctions& pyFunc_)
{
    return 0;
}
int callMacroIndexREROLLPRED(const vector<macroStateInfo>& MSIs, pythonFunctions& pyFunc_)
{
    return 0;
}
float callMacroSINGLE(const macroStateInfo& MSI, pythonFunctions& pyFunc_)
{
    return 0.0f;
}
vector<float> callPredSINGLE(const macroStateInfo& MSI, pythonFunctions& pyFunc_)
{
    return vector<float>();
}
vector<vector<float>> callPredBATCH(const vector<macroStateInfo>& MSIs, pythonFunctions& pyFunc_)
{
    return vector<vector<float>>();
}
float callMacroValueCONSTPRED(const vector<macroStateInfo>& MSIs, pythonFunctions& pyFunc_)
{
    return 0.0f;
}
float callMacroValueREROLLPRED(const vector<macroStateInfo>& MSIs, pythonFunctions& pyFunc_)
{
    return 0.0f;
}

bool ai{ false };
all_pc_info apci;
gamestate gm;
savestate sv;

void outerTurnLoopAI(pythonFunctions& pyFunc)
{
    return;
}


int main()
{
    gm.makeDatabase();
    gm.makeEvents();
    gm.makeRelicStacks();
    gm.makePotionStacks();
    gm.genRealMap();

    apci.initIronclad();

    gm.StartGameV();
    return 0;

    
}




