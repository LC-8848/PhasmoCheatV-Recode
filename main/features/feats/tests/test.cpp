#include "test.h"

using namespace PhasmoCheatV;

void Test::TestFeatures1()
{
    if (!IsDebugging) return;
    if (!ForTestsFlag) return;

    ForTestsFlag = false;
    LOG_INFO("The test executed");
}