/*
BEGIN_JUCE_MODULE_DECLARATION

    ID: juce_subscript
    vendor: towb
    version: 0.0.1
    name: juce subscript
    description: juce tool for using subscript and superscript characters
    dependencies: juce_core

END_JUCE_MODULE_DECLARATION
 */
#pragma once
#include <juce_core/juce_core.h>

struct Subscript
{
    static juce::String ConvertToSubscript(juce::String s)
    {
        s.retainCharacters("1234567890+-=()");

        juce::String out;
        for (auto b = s.begin(); b != s.end(); ++b)
        {
            out += juce::String(ConvertCharToSubscript(*b));
        }

        return out;
    }

    static juce::String ConvertToSuperscript(juce::String s)
    {
        s.retainCharacters("1234567890+-=()ni");

        juce::String out;
        for (auto b = s.begin(); b != s.end(); ++b)
        {
            out += juce::String(ConvertCharToSuperscript(*b));
        }

        return out;
    }

    static juce::CharPointer_UTF8 ConvertCharToSubscript(juce::juce_wchar c)
    {
        if (c == '0')
            return juce::CharPointer_UTF8 ("\xe2\x82\x80");
        else if (c == '1')
            return juce::CharPointer_UTF8 ("\xe2\x82\x81");
        else if (c == '2')
            return juce::CharPointer_UTF8 ("\xe2\x82\x82");
        else if (c == '3')
            return juce::CharPointer_UTF8 ("\xe2\x82\x83");
        else if (c == '4')
            return juce::CharPointer_UTF8 ("\xe2\x82\x84");
        else if (c == '5')
            return juce::CharPointer_UTF8 ("\xe2\x82\x85");
        else if (c == '6')
            return juce::CharPointer_UTF8 ("\xe2\x82\x86");
        else if (c == '7')
            return juce::CharPointer_UTF8 ("\xe2\x82\x87");
        else if (c == '8')
            return juce::CharPointer_UTF8 ("\xe2\x82\x88");
        else if (c == '9')
            return juce::CharPointer_UTF8 ("\xe2\x82\x89");
        else if (c == '+')
            return juce::CharPointer_UTF8 ("\xe2\x82\x8a");
        else if (c == '-')
            return juce::CharPointer_UTF8 ("\xe2\x82\x8b");
        else if (c == '=')
            return juce::CharPointer_UTF8 ("\xe2\x82\x8c");
        else if (c == '(')
            return juce::CharPointer_UTF8 ("\xe2\x82\x8d");
        else if (c == ')')
            return juce::CharPointer_UTF8 ("\xe2\x82\x8e");
        return juce::CharPointer_UTF8("");
    }

    static juce::CharPointer_UTF8 ConvertCharToSuperscript(juce::juce_wchar c)
    {
        if (c == '1')
            return juce::CharPointer_UTF8 ("\xc2\xb9");
        else if (c == '2')
            return  juce::CharPointer_UTF8 ("\xc2\xb2");
        else if (c == '3')
            return juce::CharPointer_UTF8 ("\xc2\xb3");
        else if (c == '4')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb4");
        else if (c == '5')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb5");
        else if (c == '6')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb6");
        else if (c == '7')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb7");
        else if (c == '8')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb8");
        else if (c == '9')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb9");
        else if (c == '0')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb0");
        else if (c == '+')
            return juce::CharPointer_UTF8 ("\xe2\x81\xba");
        else if (c == '-')
            return juce::CharPointer_UTF8 ("\xe2\x81\xbb");
        else if (c == '=')
            return juce::CharPointer_UTF8 ("\xe2\x81\xbc");
        else if (c == '(')
            return juce::CharPointer_UTF8 ("\xe2\x81\xbd");
        else if (c == ')')
            return juce::CharPointer_UTF8 ("\xe2\x81\xbe");
        else if (c == 'n')
            return juce::CharPointer_UTF8 ("\xe2\x81\xbf");
        else if (c == 'i')
            return juce::CharPointer_UTF8 ("\xe2\x81\xb1");
        return juce::CharPointer_UTF8("");
    }

};
