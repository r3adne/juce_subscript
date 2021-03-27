#include <juce_core/juce_core.h>
#include "juce_subscript_tests.h"

int main(int argc, char* argv[])
{
    juce::ignoreUnused(argc, argv);

    juce::UnitTestRunner runner;
    runner.runAllTests();

    DBG("done.");
    return 0;
}
