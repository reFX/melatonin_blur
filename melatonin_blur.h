#pragma once

/*
BEGIN_JUCE_MODULE_DECLARATION

ID:               melatonin_blur
vendor:           Sudara
version:          1.3.0
name:             Optimized CPU vector blurring and JUCE drop shadowing with tests and benchmarks
description:      Blurry Life
license:          MIT
minimumCppStandard: 17
dependencies:     juce_graphics,juce_gui_basics,juce_audio_basics

END_JUCE_MODULE_DECLARATION
*/

#include "juce_graphics/juce_graphics.h"

JUCE_BEGIN_IGNORE_WARNINGS_GCC_LIKE ("-Wunguarded-availability-new", "-Wsign-compare")

#include "melatonin/cached_blur.h"
#include "melatonin/shadows.h"
#include "melatonin/blur_demo_component.h"

JUCE_END_IGNORE_WARNINGS_GCC_LIKE
