#include <juce_core/juce_core.h>
#include "juce_subscript.h"

struct JuceSubscriptTests : juce::UnitTest
{
    JuceSubscriptTests() : juce::UnitTest("JuceSubscriptTests") { }

    void runTest() override
    {

        beginTest("juce_wchar subscript tests");
        expect(Subscript::ConvertCharToSubscript('1') == juce::CharPointer_UTF8 ("\xe2\x82\x81"));
        expect(Subscript::ConvertCharToSubscript('(') == juce::CharPointer_UTF8 ("\xe2\x82\x8d"));
        expect(Subscript::ConvertCharToSubscript('2') == juce::CharPointer_UTF8 ("\xe2\x82\x82"));

        beginTest("juce_wchar superscript tests");
        expect(Subscript::ConvertCharToSuperscript('1') == juce::CharPointer_UTF8 ("\xc2\xb9"));
        expect(Subscript::ConvertCharToSuperscript('5') == juce::CharPointer_UTF8 ("\xe2\x81\xb5"));
        expect(Subscript::ConvertCharToSuperscript('n') == juce::CharPointer_UTF8 ("\xe2\x81\xbf"));

        beginTest("string subscript tests");
        expect(Subscript::ConvertToSubscript("1234567890+-=()") == juce::String(juce::CharPointer_UTF8 ("\xe2\x82\x81\xe2\x82\x82\xe2\x82\x83\xe2\x82\x84\xe2\x82\x85\xe2\x82\x86\xe2\x82\x87\xe2\x82\x88\xe2\x82\x89\xe2\x82\x80\xe2\x82\x8a\xe2\x82\x8b\xe2\x82\x8c\xe2\x82\x8d\xe2\x82\x8e")));

        beginTest("string superscript tests");
        expectEquals(Subscript::ConvertToSuperscript("1234567890+-=()ni"), juce::String(juce::CharPointer_UTF8 ("\xc2\xb9\xc2\xb2\xc2\xb3\xe2\x81\xb4\xe2\x81\xb5\xe2\x81\xb6\xe2\x81\xb7\xe2\x81\xb8\xe2\x81\xb9\xe2\x81\xb0\xe2\x81\xba\xe2\x81\xbb\xe2\x81\xbc\xe2\x81\xbd\xe2\x81\xbe\xe2\x81\xbf\xe2\x81\xb1")));
    }
};

static JuceSubscriptTests juceSubscriptTests;
