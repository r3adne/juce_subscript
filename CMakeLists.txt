cmake_minimum_required(VERSION 3.12)

project(JUCE_SUBSCRIPT_TESTS VERSION 0.0.1)

add_subdirectory(JUCE)

juce_add_console_app(JuceSubscriptTests
        JUCE_SUBSCRIPT_TESTS "JuceSubscriptTests")

target_sources(JuceSubscriptTests
        PRIVATE
        main.cpp)

target_compile_definitions(JuceSubscriptTests
        PRIVATE
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0)

target_link_libraries(JuceSubscriptTests
        PRIVATE
        juce::juce_core
        PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_warning_flags)
