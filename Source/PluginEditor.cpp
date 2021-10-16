/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...


//[/MiscUserDefs]

//==============================================================================
AiassAudioProcessorEditor::AiassAudioProcessorEditor (AiassAudioProcessor& p, AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor (&p),
      valueTreeState (vts),
      m_sid(p.getSid()),
      keyboardComponent (keyboardState, juce::MidiKeyboardComponent::horizontalKeyboard)
{
    //[Constructor_pre] You can add your own custom stuff here..


    //[/Constructor_pre]

    tonegroup.reset (new juce::GroupComponent ("tone group",
                                               TRANS("Tone")));
    addAndMakeVisible (tonegroup.get());
    tonegroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    tonegroup->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    tonegroup->setBounds (8, 72, 230, 218);

    semigroup.reset (new juce::GroupComponent ("semi group",
                                               TRANS("Sem")));
    addAndMakeVisible (semigroup.get());
    semigroup->setTextLabelPosition (juce::Justification::centredLeft);
    semigroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::brown);
    semigroup->setColour (juce::GroupComponent::textColourId, juce::Colour (0xff239a0f));

    semigroup->setBounds (118, 82, 52, 204);

    octavegroup.reset (new juce::GroupComponent ("octave group",
                                                 TRANS("Oct")));
    addAndMakeVisible (octavegroup.get());
    octavegroup->setTextLabelPosition (juce::Justification::centredLeft);
    octavegroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::brown);
    octavegroup->setColour (juce::GroupComponent::textColourId, juce::Colour (0xff239a0f));

    octavegroup->setBounds (60, 82, 52, 204);

    Semi1.reset (new juce::Slider ("semi1 slider"));
    addAndMakeVisible (Semi1.get());
    Semi1->setTooltip (TRANS("Semitone1 Up/Down (CC79)\n"));
    Semi1->setRange (-12, 12, 1);
    Semi1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Semi1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Semi1->setBounds (112, 90, 66, 66);

    Cent1.reset (new juce::Slider ("cent1 slider"));
    addAndMakeVisible (Cent1.get());
    Cent1->setTooltip (TRANS("Cent1 Up/Down (CC70)\n"));
    Cent1->setRange (-100, 100, 1);
    Cent1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Cent1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Cent1->setBounds (170, 90, 66, 66);

    Attack1.reset (new juce::Slider ("attack1 slider"));
    addAndMakeVisible (Attack1.get());
    Attack1->setTooltip (TRANS("Attack 1 (CC73)"));
    Attack1->setRange (0, 15, 1);
    Attack1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Attack1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Attack1->setBounds (240, 90, 66, 66);

    Decay1.reset (new juce::Slider ("decay1 slider"));
    addAndMakeVisible (Decay1.get());
    Decay1->setTooltip (TRANS("Decay 1 (CC75)"));
    Decay1->setRange (0, 15, 1);
    Decay1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Decay1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Decay1->setBounds (300, 90, 66, 66);

    Sustain1.reset (new juce::Slider ("sustain1 slider"));
    addAndMakeVisible (Sustain1.get());
    Sustain1->setTooltip (TRANS("Sustain 1 (CC76)"));
    Sustain1->setRange (0, 15, 1);
    Sustain1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Sustain1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Sustain1->setBounds (360, 90, 66, 66);

    soundgroup.reset (new juce::GroupComponent ("sound group",
                                                TRANS("Sound")));
    addAndMakeVisible (soundgroup.get());
    soundgroup->setTextLabelPosition (juce::Justification::centredLeft);
    soundgroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    soundgroup->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    soundgroup->setBounds (238, 72, 252, 218);

    Release1.reset (new juce::Slider ("release1 slider"));
    addAndMakeVisible (Release1.get());
    Release1->setTooltip (TRANS("Release 1 (CC72)"));
    Release1->setRange (0, 15, 1);
    Release1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Release1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Release1->setBounds (420, 90, 66, 66);

    Octave1.reset (new juce::Slider ("octave1 slider"));
    addAndMakeVisible (Octave1.get());
    Octave1->setTooltip (TRANS("Octave1 Up/Down (CC78)\n"));
    Octave1->setRange (-4, 4, 1);
    Octave1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Octave1->setColour (juce::Slider::textBoxTextColourId, juce::Colours::white);
    Octave1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Octave1->setBounds (54, 90, 66, 66);

    releasegroup.reset (new juce::GroupComponent ("release group",
                                                  TRANS("R")));
    addAndMakeVisible (releasegroup.get());
    releasegroup->setTextLabelPosition (juce::Justification::centred);
    releasegroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::brown);
    releasegroup->setColour (juce::GroupComponent::textColourId, juce::Colour (0xff239a0f));

    releasegroup->setBounds (427, 82, 52, 204);

    sustaingroup.reset (new juce::GroupComponent ("sustain group",
                                                  TRANS("S")));
    addAndMakeVisible (sustaingroup.get());
    sustaingroup->setTextLabelPosition (juce::Justification::centred);
    sustaingroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::brown);
    sustaingroup->setColour (juce::GroupComponent::textColourId, juce::Colour (0xff239a0f));

    sustaingroup->setBounds (367, 82, 52, 204);

    decaygroup.reset (new juce::GroupComponent ("decay group",
                                                TRANS("D")));
    addAndMakeVisible (decaygroup.get());
    decaygroup->setTextLabelPosition (juce::Justification::centred);
    decaygroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::brown);
    decaygroup->setColour (juce::GroupComponent::textColourId, juce::Colour (0xff239a0f));

    decaygroup->setBounds (307, 82, 52, 204);

    attackgroup.reset (new juce::GroupComponent ("attack group",
                                                 TRANS("A")));
    addAndMakeVisible (attackgroup.get());
    attackgroup->setTextLabelPosition (juce::Justification::centred);
    attackgroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::brown);
    attackgroup->setColour (juce::GroupComponent::textColourId, juce::Colour (0xff239a0f));

    attackgroup->setBounds (247, 82, 52, 204);

    centgroup.reset (new juce::GroupComponent ("cent group",
                                               TRANS("Cen")));
    addAndMakeVisible (centgroup.get());
    centgroup->setTextLabelPosition (juce::Justification::centredLeft);
    centgroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::brown);
    centgroup->setColour (juce::GroupComponent::textColourId, juce::Colour (0xff239a0f));

    centgroup->setBounds (176, 82, 52, 204);

    Decay2.reset (new juce::Slider ("decay2 slider"));
    addAndMakeVisible (Decay2.get());
    Decay2->setTooltip (TRANS("Decay 2 (CC21)"));
    Decay2->setRange (0, 15, 1);
    Decay2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Decay2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Decay2->setBounds (300, 152, 66, 66);

    pulsewidhgroup.reset (new juce::GroupComponent ("pulsewidh group",
                                                    TRANS("Pulse")));
    addAndMakeVisible (pulsewidhgroup.get());
    pulsewidhgroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    pulsewidhgroup->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    pulsewidhgroup->setBounds (490, 72, 60, 218);

    Pulsew1.reset (new juce::Slider ("pulsew1 slider"));
    addAndMakeVisible (Pulsew1.get());
    Pulsew1->setTooltip (TRANS("Pulse width 1 (CC77)"));
    Pulsew1->setRange (1, 4094, 1);
    Pulsew1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Pulsew1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Pulsew1->setBounds (487, 90, 66, 66);

    controlgroup.reset (new juce::GroupComponent ("control group",
                                                  TRANS("Control")));
    addAndMakeVisible (controlgroup.get());
    controlgroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    controlgroup->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    controlgroup->setBounds (380, 296, 631, 148);

    waveformgroup.reset (new juce::GroupComponent ("waveform group",
                                                   TRANS("Waveform")));
    addAndMakeVisible (waveformgroup.get());
    waveformgroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    waveformgroup->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    waveformgroup->setBounds (550, 72, 400, 218);

    filtergroup.reset (new juce::GroupComponent ("filter group",
                                                 TRANS("Filter")));
    addAndMakeVisible (filtergroup.get());
    filtergroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    filtergroup->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    filtergroup->setBounds (8, 296, 372, 148);

    sidvolume.reset (new juce::Slider ("sidvolume slider"));
    addAndMakeVisible (sidvolume.get());
    sidvolume->setTooltip (TRANS("SID-Volume (CC7)"));
    sidvolume->setRange (0, 15, 1);
    sidvolume->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    sidvolume->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    sidvolume->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    sidvolume->setBounds (574, 300, 66, 66);

    Octave2.reset (new juce::Slider ("octave2 slider"));
    addAndMakeVisible (Octave2.get());
    Octave2->setTooltip (TRANS("Octave2 Up/Down (CC85)\n"));
    Octave2->setRange (-4, 4, 1);
    Octave2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Octave2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Octave2->setBounds (54, 152, 66, 66);

    Octave3.reset (new juce::Slider ("octave3 slider"));
    addAndMakeVisible (Octave3.get());
    Octave3->setTooltip (TRANS("Octave3 Up/Down (CC88)\n"));
    Octave3->setRange (-4, 4, 1);
    Octave3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Octave3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Octave3->setBounds (54, 212, 66, 66);

    Semi2.reset (new juce::Slider ("semi2 slider"));
    addAndMakeVisible (Semi2.get());
    Semi2->setTooltip (TRANS("Semitone2 Up/Down (CC86)\n"));
    Semi2->setRange (-12, 12, 1);
    Semi2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Semi2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Semi2->setBounds (112, 152, 66, 66);

    Semi3.reset (new juce::Slider ("semi3 slider"));
    addAndMakeVisible (Semi3.get());
    Semi3->setTooltip (TRANS("Semitone3 Up/Down (CC89)\n"));
    Semi3->setRange (-12, 12, 1);
    Semi3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Semi3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Semi3->setBounds (112, 212, 66, 66);

    Cent2.reset (new juce::Slider ("cent2 slider"));
    addAndMakeVisible (Cent2.get());
    Cent2->setTooltip (TRANS("Cent2 Up/Down (CC87)\n"));
    Cent2->setRange (-100, 100, 1);
    Cent2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Cent2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Cent2->setBounds (170, 152, 66, 66);

    Cent3.reset (new juce::Slider ("cent3 slider"));
    addAndMakeVisible (Cent3.get());
    Cent3->setTooltip (TRANS("Cent3 Up/Down (CC90)\n"));
    Cent3->setRange (-100, 100, 1);
    Cent3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Cent3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Cent3->setBounds (170, 212, 66, 66);

    Attack2.reset (new juce::Slider ("attack2 slider"));
    addAndMakeVisible (Attack2.get());
    Attack2->setTooltip (TRANS("Attack 2 (CC20)"));
    Attack2->setRange (0, 15, 1);
    Attack2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Attack2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Attack2->setBounds (240, 152, 66, 66);

    Attack3.reset (new juce::Slider ("attack3 slider"));
    addAndMakeVisible (Attack3.get());
    Attack3->setTooltip (TRANS("Attack 3 (CC25)"));
    Attack3->setRange (0, 15, 1);
    Attack3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Attack3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Attack3->setBounds (240, 212, 66, 66);

    Decay3.reset (new juce::Slider ("decay3 slider"));
    addAndMakeVisible (Decay3.get());
    Decay3->setTooltip (TRANS("Decay 3 (CC26)"));
    Decay3->setRange (0, 15, 1);
    Decay3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Decay3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Decay3->setBounds (300, 212, 66, 66);

    Sustain2.reset (new juce::Slider ("sustain2 slider"));
    addAndMakeVisible (Sustain2.get());
    Sustain2->setTooltip (TRANS("Sustain 2 (CC22)"));
    Sustain2->setRange (0, 15, 1);
    Sustain2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Sustain2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Sustain2->setBounds (360, 152, 66, 66);

    Sustain3.reset (new juce::Slider ("sustain3 slider"));
    addAndMakeVisible (Sustain3.get());
    Sustain3->setTooltip (TRANS("Sustain 3 (CC27)"));
    Sustain3->setRange (0, 15, 1);
    Sustain3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Sustain3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Sustain3->setBounds (360, 212, 66, 66);

    Release2.reset (new juce::Slider ("release2 slider"));
    addAndMakeVisible (Release2.get());
    Release2->setTooltip (TRANS("Release 2 (CC23)"));
    Release2->setRange (0, 15, 1);
    Release2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Release2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Release2->setBounds (420, 152, 66, 66);

    Release3.reset (new juce::Slider ("release3 slider"));
    addAndMakeVisible (Release3.get());
    Release3->setTooltip (TRANS("Release 3 (CC28)"));
    Release3->setRange (0, 15, 1);
    Release3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Release3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Release3->setBounds (420, 212, 66, 66);

    Pulsew2.reset (new juce::Slider ("pulsew2 slider"));
    addAndMakeVisible (Pulsew2.get());
    Pulsew2->setTooltip (TRANS("Pulse width 2 (CC24)"));
    Pulsew2->setRange (1, 4094, 1);
    Pulsew2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Pulsew2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Pulsew2->setBounds (487, 152, 66, 66);

    Pulsew3.reset (new juce::Slider ("pulsew3 slider"));
    addAndMakeVisible (Pulsew3.get());
    Pulsew3->setTooltip (TRANS("Pulse width 3 (CC29)"));
    Pulsew3->setRange (1, 4094, 1);
    Pulsew3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Pulsew3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Pulsew3->setBounds (487, 212, 66, 66);

    Velvol.reset (new juce::ToggleButton ("Vel2Vol button"));
    addAndMakeVisible (Velvol.get());
    Velvol->setTooltip (TRANS("maps Velocity to Volume"));
    Velvol->setButtonText (TRANS("Vel2Vol"));
    Velvol->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Velvol->setBounds (637, 310, 66, 30);

    legatomode.reset (new juce::ComboBox ("legatomode"));
    addAndMakeVisible (legatomode.get());
    legatomode->setTooltip (TRANS("play mode"));
    legatomode->setEditableText (false);
    legatomode->setJustificationType (juce::Justification::centredLeft);
    legatomode->setTextWhenNothingSelected (juce::String());
    legatomode->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    legatomode->addItem (TRANS("Retrigger"), 1);
    legatomode->addItem (TRANS("Legato"), 2);
    legatomode->addItem (TRANS("Last Step"), 3);
    legatomode->addListener (this);

    legatomode->setBounds (401, 360, 150, 24);

    noteprioritymode.reset (new juce::ComboBox ("noteprioritymode"));
    addAndMakeVisible (noteprioritymode.get());
    noteprioritymode->setTooltip (TRANS("note priority"));
    noteprioritymode->setEditableText (false);
    noteprioritymode->setJustificationType (juce::Justification::centredLeft);
    noteprioritymode->setTextWhenNothingSelected (juce::String());
    noteprioritymode->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    noteprioritymode->addItem (TRANS("Last Note"), 1);
    noteprioritymode->addItem (TRANS("High Note"), 2);
    noteprioritymode->addItem (TRANS("Low Note"), 3);
    noteprioritymode->addListener (this);

    noteprioritymode->setBounds (401, 400, 150, 24);

    hyperlinkButton.reset (new juce::HyperlinkButton (TRANS("crazy-midi.de"),
                                                      URL ("http://www.crazy-midi.de")));
    addAndMakeVisible (hyperlinkButton.get());
    hyperlinkButton->setTooltip (TRANS("http://www.crazy-midi.de"));
    hyperlinkButton->setButtonText (TRANS("crazy-midi.de"));
    hyperlinkButton->setColour (juce::HyperlinkButton::textColourId, juce::Colours::green);

    hyperlinkButton->setBounds (893, 506, 150, 24);

    Filter1.reset (new juce::ToggleButton ("Filer1 toggle button"));
    addAndMakeVisible (Filter1.get());
    Filter1->setTooltip (TRANS("Voice 1 to Filter"));
    Filter1->setButtonText (TRANS("1"));
    Filter1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filter1->setBounds (204, 331, 66, 30);

    Filter2.reset (new juce::ToggleButton ("Filter2 toggle button"));
    addAndMakeVisible (Filter2.get());
    Filter2->setTooltip (TRANS("Voice 2 to Filter"));
    Filter2->setButtonText (TRANS("2"));
    Filter2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filter2->setBounds (148, 331, 66, 30);

    Filter3off.reset (new juce::ToggleButton ("3off toggle button"));
    addAndMakeVisible (Filter3off.get());
    Filter3off->setTooltip (TRANS("Mute Voice 3"));
    Filter3off->setButtonText (TRANS("3off"));
    Filter3off->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filter3off->setBounds (16, 381, 66, 30);

    Filter3.reset (new juce::ToggleButton ("Filter3 toggle button"));
    addAndMakeVisible (Filter3.get());
    Filter3->setTooltip (TRANS("Voice 3 to Filter"));
    Filter3->setButtonText (TRANS("3"));
    Filter3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filter3->setBounds (82, 331, 66, 30);

    Filterin.reset (new juce::ToggleButton ("FilterIn toggle button"));
    addAndMakeVisible (Filterin.get());
    Filterin->setTooltip (TRANS("extern In"));
    Filterin->setButtonText (TRANS("in"));
    Filterin->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filterin->setBounds (16, 331, 66, 30);

    Filterlp.reset (new juce::ToggleButton ("lowpass toggle button"));
    addAndMakeVisible (Filterlp.get());
    Filterlp->setTooltip (TRANS("Low Pass"));
    Filterlp->setButtonText (TRANS("LP"));
    Filterlp->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filterlp->setBounds (204, 381, 66, 30);

    Filterhp.reset (new juce::ToggleButton ("high pass toggle button"));
    addAndMakeVisible (Filterhp.get());
    Filterhp->setTooltip (TRANS("High Pass"));
    Filterhp->setButtonText (TRANS("HP"));
    Filterhp->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filterhp->setBounds (82, 381, 66, 30);

    Filterbp.reset (new juce::ToggleButton ("band pass toggle button"));
    addAndMakeVisible (Filterbp.get());
    Filterbp->setTooltip (TRANS("Band Pass"));
    Filterbp->setButtonText (TRANS("BP"));
    Filterbp->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filterbp->setBounds (148, 381, 66, 30);

    Filter8580.reset (new juce::ToggleButton ("scale toggle button"));
    addAndMakeVisible (Filter8580.get());
    Filter8580->setTooltip (TRANS("scales filterfreq. to 0-71"));
    Filter8580->setButtonText (TRANS("scale"));
    Filter8580->setToggleState (true, juce::dontSendNotification);
    Filter8580->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Filter8580->setBounds (310, 381, 70, 30);

    CutOff.reset (new juce::Slider ("cutoff slider"));
    addAndMakeVisible (CutOff.get());
    CutOff->setTooltip (TRANS("Cutoff (CC74)"));
    CutOff->setRange (0, 2047, 1);
    CutOff->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    CutOff->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    CutOff->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    CutOff->setBounds (250, 372, 66, 66);

    Resonace.reset (new juce::Slider ("resonance slider"));
    addAndMakeVisible (Resonace.get());
    Resonace->setTooltip (TRANS("Resonance (CC71)\n"));
    Resonace->setRange (0, 15, 1);
    Resonace->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Resonace->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Resonace->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Resonace->setBounds (250, 300, 66, 66);

    Noise1.reset (new juce::ToggleButton ("noise1 toggle button"));
    addAndMakeVisible (Noise1.get());
    Noise1->setButtonText (TRANS("Noise"));
    Noise1->setConnectedEdges (juce::Button::ConnectedOnBottom);
    Noise1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Noise1->setBounds (560, 102, 66, 30);

    Noise2.reset (new juce::ToggleButton ("noise2 toggle button"));
    addAndMakeVisible (Noise2.get());
    Noise2->setButtonText (TRANS("Noise"));
    Noise2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Noise2->setBounds (560, 164, 66, 30);

    Noise3.reset (new juce::ToggleButton ("noise3 toggle button"));
    addAndMakeVisible (Noise3.get());
    Noise3->setButtonText (TRANS("Noise"));
    Noise3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Noise3->setBounds (560, 224, 66, 30);

    Pulse1.reset (new juce::ToggleButton ("pulse1 toggle button"));
    addAndMakeVisible (Pulse1.get());
    Pulse1->setButtonText (TRANS("Pulse"));
    Pulse1->setConnectedEdges (juce::Button::ConnectedOnBottom);
    Pulse1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Pulse1->setBounds (630, 102, 66, 30);

    Pulse2.reset (new juce::ToggleButton ("pulse2 toggle button"));
    addAndMakeVisible (Pulse2.get());
    Pulse2->setButtonText (TRANS("Pulse"));
    Pulse2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Pulse2->setBounds (630, 164, 66, 30);

    Pulse3.reset (new juce::ToggleButton ("pulse3 toggle button"));
    addAndMakeVisible (Pulse3.get());
    Pulse3->setButtonText (TRANS("Pulse"));
    Pulse3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Pulse3->setBounds (630, 224, 66, 30);

    Saw1.reset (new juce::ToggleButton ("saw1 toggle button"));
    addAndMakeVisible (Saw1.get());
    Saw1->setButtonText (TRANS("Saw"));
    Saw1->setConnectedEdges (juce::Button::ConnectedOnBottom);
    Saw1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Saw1->setBounds (700, 102, 66, 30);

    Saw2.reset (new juce::ToggleButton ("saw2 toggle button"));
    addAndMakeVisible (Saw2.get());
    Saw2->setButtonText (TRANS("Saw"));
    Saw2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Saw2->setBounds (700, 164, 66, 30);

    Saw3.reset (new juce::ToggleButton ("saw3 toggle button"));
    addAndMakeVisible (Saw3.get());
    Saw3->setButtonText (TRANS("Saw"));
    Saw3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Saw3->setBounds (700, 224, 66, 30);

    Tria1.reset (new juce::ToggleButton ("tria1 toggle button"));
    addAndMakeVisible (Tria1.get());
    Tria1->setButtonText (TRANS("Tria"));
    Tria1->setConnectedEdges (juce::Button::ConnectedOnBottom);
    Tria1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Tria1->setBounds (760, 102, 66, 30);

    Tria2.reset (new juce::ToggleButton ("tria2 toggle button"));
    addAndMakeVisible (Tria2.get());
    Tria2->setButtonText (TRANS("Tria"));
    Tria2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Tria2->setBounds (760, 164, 66, 30);

    Tria3.reset (new juce::ToggleButton ("tria3 toggle button"));
    addAndMakeVisible (Tria3.get());
    Tria3->setButtonText (TRANS("Tria"));
    Tria3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Tria3->setBounds (760, 224, 66, 30);

    Ringmod1.reset (new juce::ToggleButton ("ringmod1 toggle button"));
    addAndMakeVisible (Ringmod1.get());
    Ringmod1->setButtonText (TRANS("Ring."));
    Ringmod1->setConnectedEdges (juce::Button::ConnectedOnBottom);
    Ringmod1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Ringmod1->setBounds (820, 102, 66, 30);

    Ringmod2.reset (new juce::ToggleButton ("ringmod2 toggle button"));
    addAndMakeVisible (Ringmod2.get());
    Ringmod2->setButtonText (TRANS("Ring."));
    Ringmod2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Ringmod2->setBounds (820, 164, 66, 30);

    Ringmod3.reset (new juce::ToggleButton ("ringmod3 toggle button"));
    addAndMakeVisible (Ringmod3.get());
    Ringmod3->setButtonText (TRANS("Ring."));
    Ringmod3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Ringmod3->setBounds (820, 224, 66, 30);

    Sync1.reset (new juce::ToggleButton ("syn1 toggle button"));
    addAndMakeVisible (Sync1.get());
    Sync1->setButtonText (TRANS("Sync."));
    Sync1->setConnectedEdges (juce::Button::ConnectedOnBottom);
    Sync1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Sync1->setBounds (880, 102, 66, 30);

    Sync2.reset (new juce::ToggleButton ("sync2 toggle button"));
    addAndMakeVisible (Sync2.get());
    Sync2->setButtonText (TRANS("Sync."));
    Sync2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Sync2->setBounds (880, 164, 66, 30);

    Sync3.reset (new juce::ToggleButton ("sync3 toggle button"));
    addAndMakeVisible (Sync3.get());
    Sync3->setButtonText (TRANS("Sync."));
    Sync3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Sync3->setBounds (880, 224, 66, 30);

    Voice2.reset (new juce::ToggleButton ("voice2 toggle button"));
    addAndMakeVisible (Voice2.get());
    Voice2->setTooltip (TRANS("Voice 2 On/Off"));
    Voice2->setButtonText (TRANS("2"));
    Voice2->setToggleState (true, juce::dontSendNotification);
    Voice2->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Voice2->setBounds (26, 164, 33, 30);

    Voice3.reset (new juce::ToggleButton ("voice3 toggle button"));
    addAndMakeVisible (Voice3.get());
    Voice3->setTooltip (TRANS("Voice 3 On/Off"));
    Voice3->setButtonText (TRANS("3"));
    Voice3->setToggleState (true, juce::dontSendNotification);
    Voice3->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Voice3->setBounds (26, 224, 33, 30);

    Led.reset (new juce::ImageButton ("Power_LED"));
    addAndMakeVisible (Led.get());
    Led->setTooltip (TRANS("midi-activity and  blinks when error-status"));
    Led->setButtonText (juce::String());

    Led->setImages (false, true, true,
                    juce::ImageCache::getFromMemory (redledoff_png, redledoff_pngSize), 1.000f, juce::Colour (0x00ffffff),
                    juce::ImageCache::getFromMemory (redledoff_png, redledoff_pngSize), 1.000f, juce::Colour (0x00ffffff),
                    juce::ImageCache::getFromMemory (redledon_png, redledon_pngSize), 1.000f, juce::Colour (0x00ffffff));
    Led->setBounds (962, 30, 40, 40);

    midichannel.reset (new juce::ComboBox ("midichannel"));
    addAndMakeVisible (midichannel.get());
    midichannel->setTooltip (TRANS("MIDI channel"));
    midichannel->setEditableText (false);
    midichannel->setJustificationType (juce::Justification::centredLeft);
    midichannel->setTextWhenNothingSelected (juce::String());
    midichannel->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    midichannel->addItem (TRANS("all"), 1);
    midichannel->addItem (TRANS("1"), 2);
    midichannel->addItem (TRANS("2"), 3);
    midichannel->addItem (TRANS("3"), 4);
    midichannel->addItem (TRANS("4"), 5);
    midichannel->addItem (TRANS("5"), 6);
    midichannel->addItem (TRANS("6"), 7);
    midichannel->addItem (TRANS("7"), 8);
    midichannel->addItem (TRANS("8"), 9);
    midichannel->addItem (TRANS("9"), 10);
    midichannel->addItem (TRANS("10"), 11);
    midichannel->addItem (TRANS("11"), 12);
    midichannel->addItem (TRANS("12"), 13);
    midichannel->addItem (TRANS("13"), 14);
    midichannel->addItem (TRANS("14"), 15);
    midichannel->addItem (TRANS("15"), 16);
    midichannel->addItem (TRANS("16"), 17);
    midichannel->addListener (this);

    midichannel->setBounds (401, 320, 150, 24);

    link_button.reset (new juce::ToggleButton ("link button"));
    addAndMakeVisible (link_button.get());
    link_button->setTooltip (TRANS("link gui elements"));
    link_button->setButtonText (TRANS("link"));
    link_button->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    link_button->setBounds (637, 381, 66, 30);

    Voice1.reset (new juce::ToggleButton ("voice1 toggle button"));
    addAndMakeVisible (Voice1.get());
    Voice1->setTooltip (TRANS("Voice 1 On/Off"));
    Voice1->setButtonText (TRANS("1"));
    Voice1->setToggleState (true, juce::dontSendNotification);
    Voice1->setColour (juce::ToggleButton::textColourId, juce::Colours::brown);

    Voice1->setBounds (26, 102, 33, 30);

    reset_button.reset (new juce::ImageButton ("reset button"));
    addAndMakeVisible (reset_button.get());
    reset_button->setTooltip (TRANS("SID reset"));

    reset_button->setImages (false, true, true,
                             juce::ImageCache::getFromMemory (reset_png, reset_pngSize), 1.000f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (reset_png, reset_pngSize), 1.000f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (reset_png, reset_pngSize), 1.000f, juce::Colour (0x00000000));
    reset_button->setBounds (916, 320, 70, 25);

    keyboard_group.reset (new juce::GroupComponent ("keyboard group",
                                                    TRANS("Keyboard")));
    addAndMakeVisible (keyboard_group.get());
    keyboard_group->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    keyboard_group->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    keyboard_group->setBounds (8, 440, 1004, 68);

    Pitchbend.reset (new juce::Slider ("pitchbend slider"));
    addAndMakeVisible (Pitchbend.get());
    Pitchbend->setTooltip (TRANS("Pitchbend"));
    Pitchbend->setRange (-8191, 8191, 1);
    Pitchbend->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pitchbend->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Pitchbend->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Pitchbend->setBounds (574, 372, 66, 66);

    pitchgroup.reset (new juce::GroupComponent ("pitch group",
                                                TRANS("Pitch")));
    addAndMakeVisible (pitchgroup.get());
    pitchgroup->setColour (juce::GroupComponent::outlineColourId, juce::Colours::blue);
    pitchgroup->setColour (juce::GroupComponent::textColourId, juce::Colours::yellow);

    pitchgroup->setBounds (951, 72, 60, 218);

    Pitch1.reset (new juce::Slider ("pitch1 slider"));
    addAndMakeVisible (Pitch1.get());
    Pitch1->setTooltip (TRANS("Pitch 1 +/- 1Oct. "));
    Pitch1->setRange (-8191, 8191, 1);
    Pitch1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pitch1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Pitch1->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Pitch1->setBounds (949, 90, 66, 66);

    Pitch2.reset (new juce::Slider ("pitch2 slider"));
    addAndMakeVisible (Pitch2.get());
    Pitch2->setTooltip (TRANS("Pitch 2 +/- 1Oct. "));
    Pitch2->setRange (-8191, 8191, 1);
    Pitch2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pitch2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Pitch2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Pitch2->setBounds (949, 152, 66, 66);

    Pitch3.reset (new juce::Slider ("pitch3 slider"));
    addAndMakeVisible (Pitch3.get());
    Pitch3->setTooltip (TRANS("Pitch 3 +/- 1Oct. "));
    Pitch3->setRange (-8191, 8191, 1);
    Pitch3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pitch3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);
    Pitch3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x00ffffff));

    Pitch3->setBounds (949, 212, 66, 66);

    init_button.reset (new juce::ImageButton ("init button"));
    addAndMakeVisible (init_button.get());
    init_button->setTooltip (TRANS("Init +reset"));
    init_button->setButtonText (TRANS("reset button"));

    init_button->setImages (false, true, true,
                            juce::ImageCache::getFromMemory (init_png, init_pngSize), 1.000f, juce::Colour (0x00000000),
                            juce::ImageCache::getFromMemory (init_png, init_pngSize), 1.000f, juce::Colour (0x00000000),
                            juce::ImageCache::getFromMemory (init_png, init_pngSize), 1.000f, juce::Colour (0x00000000));
    init_button->setBounds (916, 360, 70, 25);

    cachedImage_aiasshintergrund_png_1 = juce::ImageCache::getFromMemory (aiasshintergrund_png, aiasshintergrund_pngSize);
    cachedImage_aiass_mono_typenschild_png_2 = juce::ImageCache::getFromMemory (aiass_mono_typenschild_png, aiass_mono_typenschild_pngSize);
    cachedImage_sidblaster02_png_3 = juce::ImageCache::getFromMemory (sidblaster02_png, sidblaster02_pngSize);

    //[UserPreSize]
	legatomode->setSelectedItemIndex(0);
	noteprioritymode->setSelectedItemIndex(0);
    midichannel->setSelectedItemIndex(0);
    reset_button->setClickingTogglesState(true);
    init_button->setClickingTogglesState(true);

    #define HakenFarbe juce::Colour (0xff239a0f)
    #define BoxFarbe   juce::Colours::blue

    Voice1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Voice1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Voice2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Voice2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Voice3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Voice3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Noise1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Noise1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Noise2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Noise2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Noise3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Noise3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Pulse1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Pulse1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Pulse2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Pulse2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Pulse3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Pulse3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Saw1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Saw1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Saw2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Saw2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Saw3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Saw3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Tria1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Tria1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Tria2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Tria2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Tria3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Tria3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Ringmod1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Ringmod1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Ringmod2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Ringmod2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Ringmod3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Ringmod3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Sync1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Sync1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Sync2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Sync2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Sync3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Sync3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filterin->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filterin->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filter3->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filter3->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filter2->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filter2->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filter1->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filter1->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filter3off->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filter3off->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filterhp->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filterhp->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filterbp->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filterbp->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filterlp->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filterlp->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Filter8580->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Filter8580->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    Velvol->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    Velvol->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);
    link_button->setColour(juce::ToggleButton::tickColourId, HakenFarbe);
    link_button->setColour(juce::ToggleButton::tickDisabledColourId, BoxFarbe);

    addAndMakeVisible(keyboardComponent);
    keyboardState.addListener (this);
    keyboardComponent.setTopLeftPosition(15,452);
    keyboardComponent.setSize(991,50);
    keyboardComponent.setLowestVisibleKey(11);
    keyboardComponent.setEnabled(false);

	SidVolAttachment = std::make_unique<SliderAttachment>(valueTreeState, "SidVol", *sidvolume);
	VelvolAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "VelVol", *Velvol);
	Attack1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "AttAck1", *Attack1);
	Attack2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "AttAck2", *Attack2);
	Attack3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "AttAck3", *Attack3);
	Decay1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "DeCay1", *Decay1);
	Decay2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "DeCay2", *Decay2);
	Decay3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "DeCay3", *Decay3);
	Sustain1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "SuStain1", *Sustain1);
	Sustain2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "SuStain2", *Sustain2);
	Sustain3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "SuStain3", *Sustain3);
	Release1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "ReLease1", *Release1);
	Release2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "ReLease2", *Release2);
	Release3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "ReLease3", *Release3);
	Pulsw1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "PulsW1", *Pulsew1);
	Pulsw2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "PulsW2", *Pulsew2);
	Pulsw3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "PulsW3", *Pulsew3);

	Voice1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "VoiCe1", *Voice1);
	Voice2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "VoiCe2", *Voice2);
	Voice3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "VoiCe3", *Voice3);

	Octave1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "OcTave1", *Octave1);
	Octave2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "OcTave2", *Octave2);
	Octave3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "OcTave3", *Octave3);
	Semi1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "SeMi1", *Semi1);
	Semi2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "SeMi2", *Semi2);
	Semi3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "SeMi3", *Semi3);
	Cent1Attachment = std::make_unique<SliderAttachment>(valueTreeState, "CenT1", *Cent1);
	Cent2Attachment = std::make_unique<SliderAttachment>(valueTreeState, "CenT2", *Cent2);
	Cent3Attachment = std::make_unique<SliderAttachment>(valueTreeState, "CenT3", *Cent3);

	Noise1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "NoiSe1", *Noise1);
	Noise2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "NoiSe2", *Noise2);
	Noise3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "NoiSe3", *Noise3);

	Pulse1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "PulSe1", *Pulse1);
	Pulse2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "PulSe2", *Pulse2);
	Pulse3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "PulSe3", *Pulse3);

	Saw1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "SaW1", *Saw1);
	Saw2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "SaW2", *Saw2);
	Saw3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "SaW3", *Saw3);

	Tria1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "TriA1", *Tria1);
	Tria2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "TriA2", *Tria2);
	Tria3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "TriA3", *Tria3);

	Ringmod1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "RingMod1", *Ringmod1);
	Ringmod2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "RingMod2", *Ringmod2);
	Ringmod3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "RingMod3", *Ringmod3);

	Sync1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "SynC1", *Sync1);
	Sync2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "SynC2", *Sync2);
	Sync3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "SynC3", *Sync3);

	FilterfreqAttachment = std::make_unique<SliderAttachment>(valueTreeState, "FilterFreq", *CutOff);
	ResonanceAttachment = std::make_unique<SliderAttachment>(valueTreeState, "ResoNance", *Resonace);
	Filter8580Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTer8580", *Filter8580);

	Filter1Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTer1", *Filter1);
	Filter2Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTer2", *Filter2);
	Filter3Attachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTer3", *Filter3);
	FilterinAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTerIn", *Filterin);

	FilterLPAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTerLP", *Filterlp);
	FilterBPAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTerBP", *Filterbp);
	FilterHPAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTerHP", *Filterhp);
	Filter3OFFAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "FilTer3OFF", *Filter3off);

	LegatoModeAttachment = std::make_unique<ComboBoxAttachment>(valueTreeState, "LegatoMode", *legatomode);
	NotePriorityModeAttachment = std::make_unique<ComboBoxAttachment>(valueTreeState, "NotePriorityMode", *noteprioritymode);
    MidiChannelAttachment = std::make_unique<ComboBoxAttachment>(valueTreeState, "MidiChannel", *midichannel);
    ResetAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "ResetButton", *reset_button);
    InitAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "InitButton", *init_button);
    LinkAttachment = std::make_unique<ButtonAttachment>(valueTreeState, "LinkButton", *link_button);
    PitchbendAttachment = std::make_unique<SliderAttachment>(valueTreeState, "PitchBend", *Pitchbend);
    //[/UserPreSize]

    setSize (1024, 530);


    //[Constructor] You can add your own custom stuff here..
	// start a timer which will keep our timecode display updated
	startTimerHz(30);

    //[/Constructor]
}

AiassAudioProcessorEditor::~AiassAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..

	SidVolAttachment = nullptr;
	VelvolAttachment = nullptr;
	Attack1Attachment = nullptr;
	Attack2Attachment = nullptr;
	Attack3Attachment = nullptr;
	Decay1Attachment = nullptr;
	Decay2Attachment = nullptr;
	Decay3Attachment = nullptr;
	Sustain1Attachment = nullptr;
	Sustain2Attachment = nullptr;
	Sustain3Attachment = nullptr;
	Release1Attachment = nullptr;
	Release2Attachment = nullptr;
	Release3Attachment = nullptr;
	Pulsw1Attachment = nullptr;
	Pulsw2Attachment = nullptr;
	Pulsw3Attachment = nullptr;
	Voice1Attachment = nullptr;
	Voice2Attachment = nullptr;
	Voice3Attachment = nullptr;
	Octave1Attachment = nullptr;
	Octave2Attachment = nullptr;
	Octave3Attachment = nullptr;
	Semi1Attachment = nullptr;
	Semi2Attachment = nullptr;
	Semi3Attachment = nullptr;
	Cent1Attachment = nullptr;
	Cent2Attachment = nullptr;
	Cent3Attachment = nullptr;
	Noise1Attachment = nullptr;
	Noise2Attachment = nullptr;
	Noise3Attachment = nullptr;
	Pulse1Attachment = nullptr;
	Pulse2Attachment = nullptr;
	Pulse3Attachment = nullptr;
	Saw1Attachment = nullptr;
	Saw2Attachment = nullptr;
	Saw3Attachment = nullptr;
	Tria1Attachment = nullptr;
	Tria2Attachment = nullptr;
	Tria3Attachment = nullptr;
	Ringmod1Attachment = nullptr;
	Ringmod2Attachment = nullptr;
	Ringmod3Attachment = nullptr;
	Sync1Attachment = nullptr;
	Sync2Attachment = nullptr;
	Sync3Attachment = nullptr;
	FilterfreqAttachment = nullptr;
	ResonanceAttachment = nullptr;
	Filter8580Attachment = nullptr;
	Filter1Attachment = nullptr;
	Filter2Attachment = nullptr;
	Filter3Attachment = nullptr;
	FilterinAttachment = nullptr;
	FilterLPAttachment = nullptr;
	FilterBPAttachment = nullptr;
	FilterHPAttachment = nullptr;
	Filter3OFFAttachment = nullptr;
	LegatoModeAttachment = nullptr;
	NotePriorityModeAttachment = nullptr;
    MidiChannelAttachment = nullptr;
    ResetAttachment = nullptr;
    InitAttachment = nullptr;
    LinkAttachment = nullptr;
    PitchbendAttachment = nullptr;

    //[/Destructor_pre]

    tonegroup = nullptr;
    semigroup = nullptr;
    octavegroup = nullptr;
    Semi1 = nullptr;
    Cent1 = nullptr;
    Attack1 = nullptr;
    Decay1 = nullptr;
    Sustain1 = nullptr;
    soundgroup = nullptr;
    Release1 = nullptr;
    Octave1 = nullptr;
    releasegroup = nullptr;
    sustaingroup = nullptr;
    decaygroup = nullptr;
    attackgroup = nullptr;
    centgroup = nullptr;
    Decay2 = nullptr;
    pulsewidhgroup = nullptr;
    Pulsew1 = nullptr;
    controlgroup = nullptr;
    waveformgroup = nullptr;
    filtergroup = nullptr;
    sidvolume = nullptr;
    Octave2 = nullptr;
    Octave3 = nullptr;
    Semi2 = nullptr;
    Semi3 = nullptr;
    Cent2 = nullptr;
    Cent3 = nullptr;
    Attack2 = nullptr;
    Attack3 = nullptr;
    Decay3 = nullptr;
    Sustain2 = nullptr;
    Sustain3 = nullptr;
    Release2 = nullptr;
    Release3 = nullptr;
    Pulsew2 = nullptr;
    Pulsew3 = nullptr;
    Velvol = nullptr;
    legatomode = nullptr;
    noteprioritymode = nullptr;
    hyperlinkButton = nullptr;
    Filter1 = nullptr;
    Filter2 = nullptr;
    Filter3off = nullptr;
    Filter3 = nullptr;
    Filterin = nullptr;
    Filterlp = nullptr;
    Filterhp = nullptr;
    Filterbp = nullptr;
    Filter8580 = nullptr;
    CutOff = nullptr;
    Resonace = nullptr;
    Noise1 = nullptr;
    Noise2 = nullptr;
    Noise3 = nullptr;
    Pulse1 = nullptr;
    Pulse2 = nullptr;
    Pulse3 = nullptr;
    Saw1 = nullptr;
    Saw2 = nullptr;
    Saw3 = nullptr;
    Tria1 = nullptr;
    Tria2 = nullptr;
    Tria3 = nullptr;
    Ringmod1 = nullptr;
    Ringmod2 = nullptr;
    Ringmod3 = nullptr;
    Sync1 = nullptr;
    Sync2 = nullptr;
    Sync3 = nullptr;
    Voice2 = nullptr;
    Voice3 = nullptr;
    Led = nullptr;
    midichannel = nullptr;
    link_button = nullptr;
    Voice1 = nullptr;
    reset_button = nullptr;
    keyboard_group = nullptr;
    Pitchbend = nullptr;
    pitchgroup = nullptr;
    Pitch1 = nullptr;
    Pitch2 = nullptr;
    Pitch3 = nullptr;
    init_button = nullptr;


    //[Destructor]. You can add your own custom destruction code here..

    keyboardState.removeListener(this);

    //[/Destructor]
}

//==============================================================================
void AiassAudioProcessorEditor::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        int x = 0, y = 0, width = 1024, height = 530;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImage (cachedImage_aiasshintergrund_png_1,
                     x, y, width, height,
                     0, 0, cachedImage_aiasshintergrund_png_1.getWidth(), cachedImage_aiasshintergrund_png_1.getHeight());
    }

    {
        int x = 25, y = 29, width = 315, height = 41;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImage (cachedImage_aiass_mono_typenschild_png_2,
                     x, y, width, height,
                     0, 0, cachedImage_aiass_mono_typenschild_png_2.getWidth(), cachedImage_aiass_mono_typenschild_png_2.getHeight());
    }

    {
        int x = 353, y = 49, width = 40, height = 20;
        juce::String text (TRANS("v. 0.5"));
        juce::Colour fillColour = juce::Colours::black;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 728, y = 312, width = 159, height = 125;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImage (cachedImage_sidblaster02_png_3,
                     x, y, width, height,
                     0, 0, cachedImage_sidblaster02_png_3.getWidth(), cachedImage_sidblaster02_png_3.getHeight());
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AiassAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void AiassAudioProcessorEditor::comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == legatomode.get())
    {
        //[UserComboBoxCode_legatomode] -- add your combo box handling code here..
        //[/UserComboBoxCode_legatomode]
    }
    else if (comboBoxThatHasChanged == noteprioritymode.get())
    {
        //[UserComboBoxCode_noteprioritymode] -- add your combo box handling code here..
        //[/UserComboBoxCode_noteprioritymode]
    }
    else if (comboBoxThatHasChanged == midichannel.get())
    {
        //[UserComboBoxCode_midichannel] -- add your combo box handling code here..
        //[/UserComboBoxCode_midichannel]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//==============================================================================

void AiassAudioProcessorEditor::timerCallback()
{
	int Error_State = (m_sid->error_state);

    keyboardState.processNextMidiEvent(getProcessor().MIDIMESSAGE);

    if (Link_State != (getProcessor().LINK)) {
        Link_State = (getProcessor().LINK);
        if (Link_State) {
            Attack2->setEnabled(false);
            Attack3->setEnabled(false);
            Decay2->setEnabled(false);
            Decay3->setEnabled(false);
            Sustain2->setEnabled(false);
            Sustain3->setEnabled(false);
            Release2->setEnabled(false);
            Release3->setEnabled(false);
            Pulsew2->setEnabled(false);
            Pulsew3->setEnabled(false);
            Octave2->setEnabled(false);
            Octave3->setEnabled(false);
            Semi2->setEnabled(false);
            Semi3->setEnabled(false);
            Cent2->setEnabled(false);
            Cent3->setEnabled(false);
        }
        else {
            Attack2->setEnabled(true);
            Attack3->setEnabled(true);
            Decay2->setEnabled(true);
            Decay3->setEnabled(true);
            Sustain2->setEnabled(true);
            Sustain3->setEnabled(true);
            Release2->setEnabled(true);
            Release3->setEnabled(true);
            Pulsew2->setEnabled(true);
            Pulsew3->setEnabled(true);
            Octave2->setEnabled(true);
            Octave3->setEnabled(true);
            Semi2->setEnabled(true);
            Semi3->setEnabled(true);
            Cent2->setEnabled(true);
            Cent3->setEnabled(true);
        }
    }

    Attack1->onValueChange = [this] { if (Link_State) {
        Attack2->setValue(Attack1->getValue());
        Attack3->setValue(Attack1->getValue());
    }};
    Decay1->onValueChange = [this] { if (Link_State) {
        Decay2->setValue(Decay1->getValue());
        Decay3->setValue(Decay1->getValue());
    }};
    Sustain1->onValueChange = [this] { if (Link_State) {
        Sustain2->setValue(Sustain1->getValue());
        Sustain3->setValue(Sustain1->getValue());
    }};
    Release1->onValueChange = [this] { if (Link_State) {
        Release2->setValue(Release1->getValue());
        Release3->setValue(Release1->getValue());
    }};
    Pulsew1->onValueChange = [this] { if (Link_State) {
        Pulsew2->setValue(Pulsew1->getValue());
        Pulsew3->setValue(Pulsew1->getValue());
    }};
    Octave1->onValueChange = [this] { if (Link_State) {
        Octave2->setValue(Octave1->getValue());
        Octave3->setValue(Octave1->getValue());
    }};
    Semi1->onValueChange = [this] { if (Link_State) {
        Semi2->setValue(Semi1->getValue());
        Semi3->setValue(Semi1->getValue());
    }};
    Cent1->onValueChange = [this] { if (Link_State) {
        Cent2->setValue(Cent1->getValue());
        Cent3->setValue(Cent1->getValue());
    }};

	if (Error_State)
	{
		if (hz1>=0 && hz1<=(4+Error_State*4)) set_LED_Off();
		else set_LED_On();
		hz1++;
		if (hz1 == (10+Error_State*4)) hz1 = 0;
	}
	else
	{
		bool led = (getProcessor().LED);
		if (led) set_LED_On();
		else set_LED_Off();
	}

    if ((!Pitchbend->isMouseButtonDownAnywhere()) && (Pitchbend->getValue() != 0))
    {
        if (!(getProcessor().MIDIBENDACTIVE))
        {
            if ((Pitchbend->getValue() < 300) && (Pitchbend->getValue() > -300)) Pitchbend->setValue(0);
            if (Pitchbend->getValue() < 0) Pitchbend->setValue(Pitchbend->getValue() + 400);
            if (Pitchbend->getValue() > 0) Pitchbend->setValue(Pitchbend->getValue() - 400);
            if ((Pitchbend->getValue() < 300) && (Pitchbend->getValue() > -400)) Pitchbend->setValue(0);
        }
    }
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AiassAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, private Timer, private juce::MidiKeyboardStateListener"
                 constructorParams="AiassAudioProcessor&amp; p, AudioProcessorValueTreeState&amp; vts"
                 variableInitialisers="AudioProcessorEditor (&amp;p)&#10;valueTreeState (vts)&#10;m_sid(p.getSid())&#10;keyboardComponent (keyboardState, juce::MidiKeyboardComponent::horizontalKeyboard)&#10;"
                 snapPixels="10" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="1024" initialHeight="530">
  <BACKGROUND backgroundColour="ffffff">
    <IMAGE pos="0 0 1024 530" resource="aiasshintergrund_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="25 29 315 41" resource="aiass_mono_typenschild_png" opacity="1.0"
           mode="0"/>
    <TEXT pos="353 49 40 20" fill="solid: ff000000" hasStroke="0" text="v. 0.5"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <IMAGE pos="728 312 159 125" resource="sidblaster02_png" opacity="1.0"
           mode="0"/>
  </BACKGROUND>
  <GROUPCOMPONENT name="tone group" id="6d64fe01c88e0968" memberName="tonegroup"
                  virtualName="" explicitFocusOrder="0" pos="8 72 230 218" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Tone"/>
  <GROUPCOMPONENT name="semi group" id="ebe4a4d581cc8ba7" memberName="semigroup"
                  virtualName="" explicitFocusOrder="0" pos="118 82 52 204" outlinecol="ffa52a2a"
                  textcol="ff239a0f" title="Sem" textpos="33"/>
  <GROUPCOMPONENT name="octave group" id="c581754f216617ea" memberName="octavegroup"
                  virtualName="" explicitFocusOrder="0" pos="60 82 52 204" outlinecol="ffa52a2a"
                  textcol="ff239a0f" title="Oct" textpos="33"/>
  <SLIDER name="semi1 slider" id="4297018af851022d" memberName="Semi1"
          virtualName="" explicitFocusOrder="0" pos="112 90 66 66" tooltip="Semitone1 Up/Down (CC79)&#10;"
          textboxoutline="ffffff" min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="cent1 slider" id="b0bba6848acec451" memberName="Cent1"
          virtualName="" explicitFocusOrder="0" pos="170 90 66 66" tooltip="Cent1 Up/Down (CC70)&#10;"
          textboxoutline="ffffff" min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="attack1 slider" id="53619e38d7835c9d" memberName="Attack1"
          virtualName="" explicitFocusOrder="0" pos="240 90 66 66" tooltip="Attack 1 (CC73)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="decay1 slider" id="49642dbf385beee8" memberName="Decay1"
          virtualName="" explicitFocusOrder="0" pos="300 90 66 66" tooltip="Decay 1 (CC75)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="sustain1 slider" id="2793e34c7a6a6286" memberName="Sustain1"
          virtualName="" explicitFocusOrder="0" pos="360 90 66 66" tooltip="Sustain 1 (CC76)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <GROUPCOMPONENT name="sound group" id="9c52dd13730dcbb" memberName="soundgroup"
                  virtualName="" explicitFocusOrder="0" pos="238 72 252 218" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Sound" textpos="33"/>
  <SLIDER name="release1 slider" id="26b01f2c9f0fcbd4" memberName="Release1"
          virtualName="" explicitFocusOrder="0" pos="420 90 66 66" tooltip="Release 1 (CC72)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="octave1 slider" id="26c4155703d3dafe" memberName="Octave1"
          virtualName="" explicitFocusOrder="0" pos="54 90 66 66" tooltip="Octave1 Up/Down (CC78)&#10;"
          textboxtext="ffffffff" textboxoutline="ffffff" min="-4.0" max="4.0"
          int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <GROUPCOMPONENT name="release group" id="95044d948c239887" memberName="releasegroup"
                  virtualName="" explicitFocusOrder="0" pos="427 82 52 204" outlinecol="ffa52a2a"
                  textcol="ff239a0f" title="R" textpos="36"/>
  <GROUPCOMPONENT name="sustain group" id="5acc206370d9e6ff" memberName="sustaingroup"
                  virtualName="" explicitFocusOrder="0" pos="367 82 52 204" outlinecol="ffa52a2a"
                  textcol="ff239a0f" title="S" textpos="36"/>
  <GROUPCOMPONENT name="decay group" id="5436311d81346b70" memberName="decaygroup"
                  virtualName="" explicitFocusOrder="0" pos="307 82 52 204" outlinecol="ffa52a2a"
                  textcol="ff239a0f" title="D" textpos="36"/>
  <GROUPCOMPONENT name="attack group" id="3207ac8f3cb41ebd" memberName="attackgroup"
                  virtualName="" explicitFocusOrder="0" pos="247 82 52 204" outlinecol="ffa52a2a"
                  textcol="ff239a0f" title="A" textpos="36"/>
  <GROUPCOMPONENT name="cent group" id="9397004b3a3ac548" memberName="centgroup"
                  virtualName="" explicitFocusOrder="0" pos="176 82 52 204" outlinecol="ffa52a2a"
                  textcol="ff239a0f" title="Cen" textpos="33"/>
  <SLIDER name="decay2 slider" id="379b886c43a29254" memberName="Decay2"
          virtualName="" explicitFocusOrder="0" pos="300 152 66 66" tooltip="Decay 2 (CC21)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <GROUPCOMPONENT name="pulsewidh group" id="ee61762cce42c0fc" memberName="pulsewidhgroup"
                  virtualName="" explicitFocusOrder="0" pos="490 72 60 218" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Pulse"/>
  <SLIDER name="pulsew1 slider" id="a63bd08caa77c655" memberName="Pulsew1"
          virtualName="" explicitFocusOrder="0" pos="487 90 66 66" tooltip="Pulse width 1 (CC77)"
          textboxoutline="ffffff" min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <GROUPCOMPONENT name="control group" id="f28a7389bff6ea97" memberName="controlgroup"
                  virtualName="" explicitFocusOrder="0" pos="380 296 631 148" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Control"/>
  <GROUPCOMPONENT name="waveform group" id="52ab711584b2835a" memberName="waveformgroup"
                  virtualName="" explicitFocusOrder="0" pos="550 72 400 218" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Waveform"/>
  <GROUPCOMPONENT name="filter group" id="5844d35c6980f98d" memberName="filtergroup"
                  virtualName="" explicitFocusOrder="0" pos="8 296 372 148" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Filter"/>
  <SLIDER name="sidvolume slider" id="d351edf4789a40e0" memberName="sidvolume"
          virtualName="" explicitFocusOrder="0" pos="574 300 66 66" tooltip="SID-Volume (CC7)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="octave2 slider" id="7808b9c1fb74ccc8" memberName="Octave2"
          virtualName="" explicitFocusOrder="0" pos="54 152 66 66" tooltip="Octave2 Up/Down (CC85)&#10;"
          textboxoutline="ffffff" min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="octave3 slider" id="d3e4a1e141ca77b6" memberName="Octave3"
          virtualName="" explicitFocusOrder="0" pos="54 212 66 66" tooltip="Octave3 Up/Down (CC88)&#10;"
          textboxoutline="ffffff" min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="semi2 slider" id="4e87cf183b0e0e77" memberName="Semi2"
          virtualName="" explicitFocusOrder="0" pos="112 152 66 66" tooltip="Semitone2 Up/Down (CC86)&#10;"
          textboxoutline="ffffff" min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="semi3 slider" id="f03b15fac2d0a403" memberName="Semi3"
          virtualName="" explicitFocusOrder="0" pos="112 212 66 66" tooltip="Semitone3 Up/Down (CC89)&#10;"
          textboxoutline="ffffff" min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="cent2 slider" id="873ffcdb55231a19" memberName="Cent2"
          virtualName="" explicitFocusOrder="0" pos="170 152 66 66" tooltip="Cent2 Up/Down (CC87)&#10;"
          textboxoutline="ffffff" min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="cent3 slider" id="77eb6b6e2092a08c" memberName="Cent3"
          virtualName="" explicitFocusOrder="0" pos="170 212 66 66" tooltip="Cent3 Up/Down (CC90)&#10;"
          textboxoutline="ffffff" min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="attack2 slider" id="40a979315f74e3a" memberName="Attack2"
          virtualName="" explicitFocusOrder="0" pos="240 152 66 66" tooltip="Attack 2 (CC20)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="attack3 slider" id="7e38002dde33164c" memberName="Attack3"
          virtualName="" explicitFocusOrder="0" pos="240 212 66 66" tooltip="Attack 3 (CC25)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="decay3 slider" id="ff55788389bcec83" memberName="Decay3"
          virtualName="" explicitFocusOrder="0" pos="300 212 66 66" tooltip="Decay 3 (CC26)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="sustain2 slider" id="25e905e8830bd418" memberName="Sustain2"
          virtualName="" explicitFocusOrder="0" pos="360 152 66 66" tooltip="Sustain 2 (CC22)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="sustain3 slider" id="740735c3d8776e72" memberName="Sustain3"
          virtualName="" explicitFocusOrder="0" pos="360 212 66 66" tooltip="Sustain 3 (CC27)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="release2 slider" id="cede2f433ff54882" memberName="Release2"
          virtualName="" explicitFocusOrder="0" pos="420 152 66 66" tooltip="Release 2 (CC23)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="release3 slider" id="a6cb93496f682a4d" memberName="Release3"
          virtualName="" explicitFocusOrder="0" pos="420 212 66 66" tooltip="Release 3 (CC28)"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="pulsew2 slider" id="c761eb76e90133c8" memberName="Pulsew2"
          virtualName="" explicitFocusOrder="0" pos="487 152 66 66" tooltip="Pulse width 2 (CC24)"
          textboxoutline="ffffff" min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="pulsew3 slider" id="c9edf691a324176f" memberName="Pulsew3"
          virtualName="" explicitFocusOrder="0" pos="487 212 66 66" tooltip="Pulse width 3 (CC29)"
          textboxoutline="ffffff" min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <TOGGLEBUTTON name="Vel2Vol button" id="498d1ccffc218a3e" memberName="Velvol"
                virtualName="" explicitFocusOrder="0" pos="637 310 66 30" tooltip="maps Velocity to Volume"
                txtcol="ffa52a2a" buttonText="Vel2Vol" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <COMBOBOX name="legatomode" id="185cc42c904fe921" memberName="legatomode"
            virtualName="" explicitFocusOrder="0" pos="401 360 150 24" tooltip="play mode"
            editable="0" layout="33" items="Retrigger&#10;Legato&#10;Last Step"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="noteprioritymode" id="c728000aa37b04a3" memberName="noteprioritymode"
            virtualName="" explicitFocusOrder="0" pos="401 400 150 24" tooltip="note priority"
            editable="0" layout="33" items="Last Note&#10;High Note&#10;Low Note"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <HYPERLINKBUTTON name="new hyperlink" id="27b1f728dfa971d5" memberName="hyperlinkButton"
                   virtualName="" explicitFocusOrder="0" pos="893 506 150 24" tooltip="http://www.crazy-midi.de"
                   textCol="ff008000" buttonText="crazy-midi.de" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="http://www.crazy-midi.de"/>
  <TOGGLEBUTTON name="Filer1 toggle button" id="f988e7a5126e5bac" memberName="Filter1"
                virtualName="" explicitFocusOrder="0" pos="204 331 66 30" tooltip="Voice 1 to Filter"
                txtcol="ffa52a2a" buttonText="1" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="Filter2 toggle button" id="e8384ca904cc9cee" memberName="Filter2"
                virtualName="" explicitFocusOrder="0" pos="148 331 66 30" tooltip="Voice 2 to Filter"
                txtcol="ffa52a2a" buttonText="2" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="3off toggle button" id="46436fd7c74f713f" memberName="Filter3off"
                virtualName="" explicitFocusOrder="0" pos="16 381 66 30" tooltip="Mute Voice 3"
                txtcol="ffa52a2a" buttonText="3off" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="Filter3 toggle button" id="15351388c9102c09" memberName="Filter3"
                virtualName="" explicitFocusOrder="0" pos="82 331 66 30" tooltip="Voice 3 to Filter"
                txtcol="ffa52a2a" buttonText="3" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="FilterIn toggle button" id="1a8bcabfd8647671" memberName="Filterin"
                virtualName="" explicitFocusOrder="0" pos="16 331 66 30" tooltip="extern In"
                txtcol="ffa52a2a" buttonText="in" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="lowpass toggle button" id="fe8269d4b1a9c6e6" memberName="Filterlp"
                virtualName="" explicitFocusOrder="0" pos="204 381 66 30" tooltip="Low Pass"
                txtcol="ffa52a2a" buttonText="LP" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="high pass toggle button" id="17b0fa917ff0851e" memberName="Filterhp"
                virtualName="" explicitFocusOrder="0" pos="82 381 66 30" tooltip="High Pass"
                txtcol="ffa52a2a" buttonText="HP" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="band pass toggle button" id="2bd008bd14ea7c51" memberName="Filterbp"
                virtualName="" explicitFocusOrder="0" pos="148 381 66 30" tooltip="Band Pass"
                txtcol="ffa52a2a" buttonText="BP" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="scale toggle button" id="1f267441a830f9ff" memberName="Filter8580"
                virtualName="" explicitFocusOrder="0" pos="310 381 70 30" tooltip="scales filterfreq. to 0-71"
                txtcol="ffa52a2a" buttonText="scale" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="1"/>
  <SLIDER name="cutoff slider" id="b104465dc77b15ae" memberName="CutOff"
          virtualName="" explicitFocusOrder="0" pos="250 372 66 66" tooltip="Cutoff (CC74)"
          textboxoutline="ffffff" min="0.0" max="2047.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="resonance slider" id="b18e0fc28c589ec5" memberName="Resonace"
          virtualName="" explicitFocusOrder="0" pos="250 300 66 66" tooltip="Resonance (CC71)&#10;"
          textboxoutline="ffffff" min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <TOGGLEBUTTON name="noise1 toggle button" id="53248eb179f92afc" memberName="Noise1"
                virtualName="" explicitFocusOrder="0" pos="560 102 66 30" txtcol="ffa52a2a"
                buttonText="Noise" connectedEdges="8" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="noise2 toggle button" id="d83f77113f37d2ea" memberName="Noise2"
                virtualName="" explicitFocusOrder="0" pos="560 164 66 30" txtcol="ffa52a2a"
                buttonText="Noise" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="noise3 toggle button" id="1da77acd9957a585" memberName="Noise3"
                virtualName="" explicitFocusOrder="0" pos="560 224 66 30" txtcol="ffa52a2a"
                buttonText="Noise" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="pulse1 toggle button" id="3bbfb8f7a8ca0db0" memberName="Pulse1"
                virtualName="" explicitFocusOrder="0" pos="630 102 66 30" txtcol="ffa52a2a"
                buttonText="Pulse" connectedEdges="8" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="pulse2 toggle button" id="520ab3980bfa9711" memberName="Pulse2"
                virtualName="" explicitFocusOrder="0" pos="630 164 66 30" txtcol="ffa52a2a"
                buttonText="Pulse" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="pulse3 toggle button" id="1dd05bea0d3cdf7d" memberName="Pulse3"
                virtualName="" explicitFocusOrder="0" pos="630 224 66 30" txtcol="ffa52a2a"
                buttonText="Pulse" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="saw1 toggle button" id="a48dd1aa6574a3e4" memberName="Saw1"
                virtualName="" explicitFocusOrder="0" pos="700 102 66 30" txtcol="ffa52a2a"
                buttonText="Saw" connectedEdges="8" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="saw2 toggle button" id="ae3029edeecd4b14" memberName="Saw2"
                virtualName="" explicitFocusOrder="0" pos="700 164 66 30" txtcol="ffa52a2a"
                buttonText="Saw" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="saw3 toggle button" id="656ce7e680e8573a" memberName="Saw3"
                virtualName="" explicitFocusOrder="0" pos="700 224 66 30" txtcol="ffa52a2a"
                buttonText="Saw" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="tria1 toggle button" id="5747f6f8bb660f63" memberName="Tria1"
                virtualName="" explicitFocusOrder="0" pos="760 102 66 30" txtcol="ffa52a2a"
                buttonText="Tria" connectedEdges="8" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="tria2 toggle button" id="cc78b8161478c5a4" memberName="Tria2"
                virtualName="" explicitFocusOrder="0" pos="760 164 66 30" txtcol="ffa52a2a"
                buttonText="Tria" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="tria3 toggle button" id="d9035b35478c1c9b" memberName="Tria3"
                virtualName="" explicitFocusOrder="0" pos="760 224 66 30" txtcol="ffa52a2a"
                buttonText="Tria" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="ringmod1 toggle button" id="11efaf86d1acf272" memberName="Ringmod1"
                virtualName="" explicitFocusOrder="0" pos="820 102 66 30" txtcol="ffa52a2a"
                buttonText="Ring." connectedEdges="8" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="ringmod2 toggle button" id="9d63104088c0485a" memberName="Ringmod2"
                virtualName="" explicitFocusOrder="0" pos="820 164 66 30" txtcol="ffa52a2a"
                buttonText="Ring." connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="ringmod3 toggle button" id="a97c9d37cd1a1d18" memberName="Ringmod3"
                virtualName="" explicitFocusOrder="0" pos="820 224 66 30" txtcol="ffa52a2a"
                buttonText="Ring." connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="syn1 toggle button" id="fb4637c0f86bc855" memberName="Sync1"
                virtualName="" explicitFocusOrder="0" pos="880 102 66 30" txtcol="ffa52a2a"
                buttonText="Sync." connectedEdges="8" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="sync2 toggle button" id="99a8550e2ad2c6da" memberName="Sync2"
                virtualName="" explicitFocusOrder="0" pos="880 164 66 30" txtcol="ffa52a2a"
                buttonText="Sync." connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="sync3 toggle button" id="880c3fcf4ab4a1f6" memberName="Sync3"
                virtualName="" explicitFocusOrder="0" pos="880 224 66 30" txtcol="ffa52a2a"
                buttonText="Sync." connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="voice2 toggle button" id="3b39ff7f634b369" memberName="Voice2"
                virtualName="" explicitFocusOrder="0" pos="26 164 33 30" tooltip="Voice 2 On/Off"
                txtcol="ffa52a2a" buttonText="2" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="1"/>
  <TOGGLEBUTTON name="voice3 toggle button" id="62c330b01d3c339c" memberName="Voice3"
                virtualName="" explicitFocusOrder="0" pos="26 224 33 30" tooltip="Voice 3 On/Off"
                txtcol="ffa52a2a" buttonText="3" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="1"/>
  <IMAGEBUTTON name="Power_LED" id="77dead3478e9a659" memberName="Led" virtualName=""
               explicitFocusOrder="0" pos="962 30 40 40" tooltip="midi-activity and  blinks when error-status"
               buttonText="" connectedEdges="0" needsCallback="0" radioGroupId="0"
               keepProportions="1" resourceNormal="redledoff_png" opacityNormal="1.0"
               colourNormal="ffffff" resourceOver="redledoff_png" opacityOver="1.0"
               colourOver="ffffff" resourceDown="redledon_png" opacityDown="1.0"
               colourDown="ffffff"/>
  <COMBOBOX name="midichannel" id="62ff9b6ec5b8843e" memberName="midichannel"
            virtualName="" explicitFocusOrder="0" pos="401 320 150 24" tooltip="MIDI channel"
            editable="0" layout="33" items="all&#10;1&#10;2&#10;3&#10;4&#10;5&#10;6&#10;7&#10;8&#10;9&#10;10&#10;11&#10;12&#10;13&#10;14&#10;15&#10;16"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TOGGLEBUTTON name="link button" id="8ffae76151409f08" memberName="link_button"
                virtualName="" explicitFocusOrder="0" pos="637 381 66 30" tooltip="link gui elements"
                txtcol="ffa52a2a" buttonText="link" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="voice1 toggle button" id="883f3d3793f0f11b" memberName="Voice1"
                virtualName="" explicitFocusOrder="0" pos="26 102 33 30" tooltip="Voice 1 On/Off"
                txtcol="ffa52a2a" buttonText="1" connectedEdges="0" needsCallback="0"
                radioGroupId="0" state="1"/>
  <IMAGEBUTTON name="reset button" id="99243fa27f37fff" memberName="reset_button"
               virtualName="" explicitFocusOrder="0" pos="916 320 70 25" tooltip="SID reset"
               buttonText="reset button" connectedEdges="0" needsCallback="0"
               radioGroupId="0" keepProportions="1" resourceNormal="reset_png"
               opacityNormal="1.0" colourNormal="0" resourceOver="reset_png"
               opacityOver="1.0" colourOver="0" resourceDown="reset_png" opacityDown="1.0"
               colourDown="0"/>
  <GROUPCOMPONENT name="keyboard group" id="2120190faebacf62" memberName="keyboard_group"
                  virtualName="" explicitFocusOrder="0" pos="8 440 1004 68" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Keyboard"/>
  <SLIDER name="pitchbend slider" id="ef7010e0cf15adf0" memberName="Pitchbend"
          virtualName="" explicitFocusOrder="0" pos="574 372 66 66" tooltip="Pitchbend"
          textboxoutline="ffffff" min="-8191.0" max="8191.0" int="1.0"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <GROUPCOMPONENT name="pitch group" id="e1d015116f300e46" memberName="pitchgroup"
                  virtualName="" explicitFocusOrder="0" pos="951 72 60 218" outlinecol="ff0000ff"
                  textcol="ffffff00" title="Pitch"/>
  <SLIDER name="pitch1 slider" id="23be51e8dddcdf89" memberName="Pitch1"
          virtualName="" explicitFocusOrder="0" pos="949 90 66 66" tooltip="Pitch 1 +/- 1Oct. "
          textboxoutline="ffffff" min="-8191.0" max="8191.0" int="1.0"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="pitch2 slider" id="4f275676d819855a" memberName="Pitch2"
          virtualName="" explicitFocusOrder="0" pos="949 152 66 66" tooltip="Pitch 2 +/- 1Oct. "
          textboxoutline="ffffff" min="-8191.0" max="8191.0" int="1.0"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="pitch3 slider" id="b3924ae17f6c68ba" memberName="Pitch3"
          virtualName="" explicitFocusOrder="0" pos="949 212 66 66" tooltip="Pitch 3 +/- 1Oct. "
          textboxoutline="ffffff" min="-8191.0" max="8191.0" int="1.0"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <IMAGEBUTTON name="init button" id="719fda4fb1f8aa48" memberName="init_button"
               virtualName="" explicitFocusOrder="0" pos="916 360 70 25" tooltip="Init +reset"
               buttonText="reset button" connectedEdges="0" needsCallback="0"
               radioGroupId="0" keepProportions="1" resourceNormal="init_png"
               opacityNormal="1.0" colourNormal="0" resourceOver="init_png"
               opacityOver="1.0" colourOver="0" resourceDown="init_png" opacityDown="1.0"
               colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: redledoff_png, 2598, "../images/red-led-off.png"
static const unsigned char resource_AiassAudioProcessorEditor_redledoff_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,40,0,0,0,40,8,6,0,0,0,140,254,184,109,0,0,0,1,115,82,71,66,0,174,206,
28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,21,56,0,0,21,56,1,58,216,253,109,0,0,9,187,73,68,65,84,88,71,173,152,91,108,84,213,26,199,191,153,78,219,41,229,210,150,182,
244,174,66,41,1,34,130,105,212,28,83,136,137,1,68,114,18,121,57,57,137,132,192,155,18,125,4,125,16,53,33,154,96,159,76,120,210,135,62,25,77,12,209,7,195,139,49,177,77,142,39,146,131,88,129,182,132,150,
82,33,165,165,45,45,189,205,116,46,251,252,127,171,123,207,105,237,116,218,146,243,37,107,214,204,222,107,175,239,183,190,219,90,123,66,246,132,114,224,192,1,111,219,182,109,86,93,93,109,27,54,108,176,
130,130,2,11,135,195,238,94,58,157,182,185,185,57,123,252,248,177,13,14,14,90,111,111,175,181,183,183,63,145,174,53,63,116,236,216,49,175,165,165,197,170,170,170,44,30,143,219,204,204,140,37,147,73,7,
229,121,158,27,19,10,133,28,108,36,18,177,117,235,214,89,97,97,161,61,120,240,192,58,58,58,236,210,165,75,107,210,185,234,193,39,78,156,240,142,30,61,106,177,88,204,38,39,39,29,28,80,171,17,96,129,12,
44,125,249,242,101,107,107,107,91,149,238,21,7,237,218,181,203,59,125,250,180,179,196,196,196,132,115,29,150,114,77,138,61,89,41,45,165,174,201,114,92,15,11,60,63,149,114,45,36,235,106,37,153,103,0,44,
41,41,177,169,169,41,187,120,241,162,117,117,117,229,100,200,121,243,236,217,179,222,238,221,187,109,108,108,204,102,103,103,157,197,82,186,30,46,46,54,43,45,181,196,250,245,150,63,58,106,27,110,221,178,
226,190,62,43,24,31,183,148,32,102,116,127,180,166,198,70,234,234,44,182,105,147,21,11,114,179,22,3,176,7,176,164,168,168,72,83,148,218,245,235,215,237,194,133,11,203,114,44,123,163,181,181,213,195,106,
4,122,50,145,112,138,195,114,81,164,178,210,10,101,201,218,111,191,181,134,159,126,178,18,141,37,242,80,75,143,211,23,78,58,162,118,243,229,151,237,198,139,47,90,168,188,220,170,100,241,168,230,74,11,
22,215,111,220,184,209,89,243,204,153,51,89,89,178,94,60,119,238,156,87,81,81,49,15,167,21,39,53,97,177,44,82,32,203,52,181,182,90,227,111,191,89,177,146,36,161,5,196,30,61,178,105,89,46,166,49,78,228,
102,172,44,127,58,224,60,181,124,181,184,218,13,121,227,223,175,191,110,229,122,174,34,26,181,180,230,38,161,128,28,26,26,178,243,231,207,47,225,225,249,69,66,150,226,214,71,82,76,188,37,164,104,125,67,
131,173,215,138,159,125,255,125,123,86,147,23,189,250,170,37,229,158,36,46,211,234,35,26,7,20,99,137,67,36,69,60,170,37,104,250,13,108,237,195,135,86,162,80,184,185,117,171,37,5,88,148,151,231,32,73,188,
114,89,87,137,244,81,119,119,247,199,110,2,95,230,11,151,47,59,118,236,240,14,29,58,100,227,178,8,112,115,82,88,214,216,104,21,3,3,118,240,237,183,173,249,205,55,173,224,181,215,44,161,88,76,42,147,83,
211,211,150,34,54,5,186,78,202,128,36,17,156,5,37,65,159,244,33,167,212,26,84,23,255,249,249,231,54,115,227,134,221,211,243,170,69,150,210,243,232,68,119,83,83,147,239,138,121,89,4,120,252,248,113,27,
25,25,113,9,17,211,202,54,62,243,140,109,190,115,199,254,246,201,39,86,167,140,155,219,178,197,226,154,40,173,21,19,236,46,224,53,57,110,117,69,90,125,80,120,254,10,137,69,105,64,162,244,239,95,127,109,
241,219,183,109,80,134,48,45,14,131,224,53,24,22,74,6,240,212,169,83,94,126,126,190,11,216,152,106,92,153,118,137,58,185,100,255,135,31,218,86,37,68,92,0,73,101,172,39,120,79,247,51,13,5,82,28,146,85,
211,126,220,45,129,11,122,255,254,172,26,138,255,241,205,55,54,121,243,166,13,49,167,126,163,155,50,116,242,228,201,140,21,29,160,46,122,251,246,237,115,102,166,0,135,85,62,170,20,19,77,239,189,103,245,
223,125,103,115,178,84,82,165,6,24,79,25,157,246,27,191,129,194,122,132,3,32,153,24,116,159,75,251,52,11,85,155,213,56,50,255,144,230,191,55,60,108,90,102,198,213,123,247,238,117,76,140,119,128,71,142,
28,201,196,93,66,138,107,118,238,180,242,47,191,180,134,230,102,243,20,208,9,193,57,40,129,210,112,173,43,192,244,178,28,147,60,166,24,51,153,36,43,156,191,128,12,168,0,201,236,82,205,187,253,234,85,187,
175,152,198,19,232,167,122,28,62,124,216,141,115,128,219,183,111,183,105,5,44,37,69,232,86,84,91,107,21,63,252,96,155,222,125,215,230,180,58,87,14,180,58,160,130,230,98,80,147,185,216,147,242,25,1,98,
187,229,224,128,199,122,72,112,143,12,7,242,185,223,127,183,135,120,67,191,73,50,246,119,152,144,112,125,125,189,199,214,67,170,227,222,205,79,61,101,229,237,237,182,73,55,163,251,247,91,90,150,13,145,
20,52,1,5,45,77,236,1,168,73,135,5,239,0,244,29,201,6,135,91,145,69,247,124,192,50,45,174,188,171,203,70,253,221,138,36,45,43,43,179,186,186,58,47,188,133,204,20,24,254,143,75,233,102,145,151,126,245,
149,133,180,69,97,77,151,177,0,4,13,203,169,199,162,17,181,105,223,122,89,221,155,11,206,239,177,106,76,253,206,238,110,27,21,7,208,142,69,223,97,11,215,104,135,192,189,248,222,83,186,151,169,16,151,168,
70,37,4,135,133,130,196,112,205,47,47,33,93,195,205,163,186,22,88,143,29,33,163,88,96,192,81,114,114,193,5,61,9,82,175,250,56,169,45,148,103,9,53,152,106,21,106,97,182,25,104,185,88,164,239,249,170,131,
76,57,161,18,19,83,213,207,19,176,179,26,96,122,56,15,133,2,28,84,108,142,235,55,78,93,4,231,247,88,38,165,6,228,74,141,34,94,164,86,192,105,9,111,104,94,152,96,11,83,119,130,236,45,16,76,158,246,68,148,
242,96,151,118,142,180,86,18,213,190,92,168,193,100,237,176,234,214,109,197,11,110,101,33,75,224,52,57,125,112,13,235,174,212,136,93,116,70,21,123,179,226,192,197,48,193,230,236,207,5,90,88,133,58,172,
65,8,15,76,222,191,111,157,111,189,101,61,159,126,106,61,95,124,97,61,42,216,35,247,238,101,238,187,120,113,191,254,7,231,20,174,194,173,11,251,192,146,17,193,185,253,157,69,170,71,116,182,212,14,224,
55,167,64,141,193,0,160,38,165,149,140,223,189,107,211,114,61,143,112,13,136,229,224,86,19,115,127,237,221,162,248,129,110,129,45,100,10,227,218,64,98,114,103,74,187,72,176,34,32,56,145,228,169,241,29,
119,186,82,162,182,72,145,15,183,86,203,5,61,186,120,62,78,98,6,198,146,224,230,48,85,155,11,152,244,17,91,142,50,135,45,8,89,81,129,192,22,194,113,125,197,103,178,244,36,31,102,154,214,121,147,243,31,
96,48,241,238,19,230,56,159,167,242,130,60,214,97,96,86,131,88,9,74,145,21,21,144,169,62,28,18,88,127,45,141,112,26,87,252,115,0,118,229,76,192,48,141,138,39,204,241,42,0,164,0,15,81,143,116,68,119,241,
231,174,46,211,251,150,251,127,180,136,218,0,39,118,94,192,84,41,176,30,76,176,133,123,122,122,92,66,66,29,209,197,193,158,30,155,210,70,237,162,73,215,114,193,97,61,36,184,135,53,220,117,247,107,229,
158,177,28,54,0,188,251,244,211,22,21,28,161,6,11,241,126,235,214,173,144,211,192,65,17,225,98,255,31,127,216,240,243,207,219,156,86,227,147,47,158,120,25,56,122,174,35,171,133,116,71,53,245,99,210,251,
64,177,207,91,31,27,6,28,88,15,113,90,68,58,95,20,165,52,174,67,227,159,122,41,26,126,231,29,83,78,101,148,186,137,115,192,5,125,48,30,201,118,31,9,198,132,53,95,161,250,255,188,240,130,21,11,142,253,
29,235,193,114,91,167,109,55,134,143,206,206,78,109,173,243,228,252,93,113,229,199,31,237,238,75,47,217,195,150,22,247,70,198,74,87,3,23,244,110,156,251,149,189,119,161,32,215,98,128,27,122,33,251,83,
175,22,249,254,118,139,80,250,96,226,251,188,54,201,149,43,87,28,28,144,121,26,248,175,239,191,183,126,157,7,227,58,213,16,35,46,227,20,163,192,6,217,151,171,5,144,89,239,249,113,55,162,172,189,42,35,
20,114,204,18,32,201,193,107,7,44,129,100,0,123,123,123,67,212,29,178,7,208,49,109,105,215,126,254,217,250,62,251,204,226,69,69,174,62,97,126,20,175,166,5,178,228,186,230,192,43,211,114,99,7,201,168,205,
65,135,81,55,55,33,198,201,30,22,134,34,25,64,228,170,142,222,81,189,175,50,176,64,43,185,211,217,105,253,58,213,220,251,224,3,7,152,167,21,82,84,93,129,150,228,114,99,54,48,50,182,80,61,86,188,114,240,
160,197,228,173,144,0,177,28,158,35,246,174,93,187,198,232,140,204,23,64,95,116,6,251,88,3,63,226,37,154,135,168,139,119,116,144,76,86,86,90,74,39,155,66,125,143,42,227,81,232,32,53,105,46,200,76,175,
185,176,4,9,49,164,185,58,222,120,195,70,136,55,121,140,5,59,131,8,142,100,237,239,239,207,88,15,89,244,35,144,230,230,102,143,211,44,175,1,108,59,113,5,109,141,78,218,207,233,21,160,226,215,95,173,178,
173,205,10,117,141,147,48,0,108,83,88,197,253,155,192,119,172,165,62,88,61,46,157,80,232,116,189,242,138,221,173,175,183,105,222,115,84,45,120,93,32,164,248,35,137,191,62,20,123,75,120,178,2,34,141,141,
141,158,154,59,56,2,57,39,32,64,170,154,154,172,81,117,178,66,22,40,22,236,166,95,126,177,168,142,101,4,61,147,1,12,44,239,26,19,58,71,62,216,179,199,6,53,15,85,141,227,91,66,49,150,239,91,141,88,231,
127,67,44,215,215,215,151,149,101,89,64,68,174,246,120,71,197,221,164,62,85,158,30,139,110,80,24,84,168,250,151,170,76,68,20,183,17,202,148,44,206,121,14,184,152,158,153,213,65,100,74,150,153,86,28,243,
110,19,17,20,96,52,178,149,158,152,83,81,94,150,35,39,32,162,216,240,246,200,10,252,59,138,37,131,173,8,104,234,150,11,112,172,65,161,151,187,152,144,51,93,10,96,125,39,248,3,40,4,151,18,111,84,12,213,
58,230,204,201,176,34,96,32,252,169,195,75,204,66,107,34,192,46,236,3,1,108,97,15,88,96,181,251,114,53,251,172,187,177,130,172,26,48,144,134,134,6,143,63,208,9,236,133,86,116,53,210,135,4,42,176,28,113,
70,207,187,46,127,164,15,12,12,172,73,231,154,1,23,74,117,117,181,87,172,243,35,129,30,88,7,9,172,76,130,241,250,56,56,56,248,132,122,204,254,11,201,151,183,196,65,63,117,141,0,0,0,0,73,69,78,68,174,66,
96,130,0,0};

const char* AiassAudioProcessorEditor::redledoff_png = (const char*) resource_AiassAudioProcessorEditor_redledoff_png;
const int AiassAudioProcessorEditor::redledoff_pngSize = 2598;

// JUCER_RESOURCE: redledon_png, 2874, "../images/red-led-on.png"
static const unsigned char resource_AiassAudioProcessorEditor_redledon_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,40,0,0,0,40,8,6,0,0,0,140,254,184,109,0,0,0,1,115,82,71,66,0,174,206,
28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,21,56,0,0,21,56,1,58,216,253,109,0,0,10,207,73,68,65,84,88,71,157,88,107,108,28,213,25,61,51,251,176,119,253,136,29,219,117,
108,199,206,195,177,3,4,210,132,128,138,0,55,69,170,74,20,82,168,162,34,170,34,64,137,218,170,82,90,254,65,254,180,20,84,104,165,20,245,7,82,90,248,209,226,31,173,40,18,138,160,18,65,21,81,17,9,149,104,
35,210,212,56,248,145,216,9,142,29,219,137,223,246,122,189,222,221,153,158,115,119,238,102,29,236,144,112,164,111,231,206,157,187,247,59,243,189,238,189,227,224,43,98,231,206,157,126,115,115,51,234,234,
234,80,86,86,134,104,52,10,215,117,205,51,207,243,176,184,184,136,153,153,25,12,15,15,163,175,175,15,199,143,31,255,74,186,110,250,79,123,247,238,245,219,218,218,176,102,205,26,164,82,41,204,207,207,35,
147,201,24,82,190,239,155,49,142,227,24,178,225,112,24,241,120,28,69,69,69,24,25,25,193,137,19,39,112,228,200,145,155,210,121,195,131,159,122,234,41,127,207,158,61,88,88,88,192,236,236,172,33,39,82,55,
2,145,21,73,107,233,247,222,123,15,237,237,237,55,164,251,75,7,221,118,219,109,254,129,3,7,140,37,166,167,167,141,235,100,41,35,142,139,108,40,140,76,40,138,76,152,194,233,212,31,242,61,20,33,139,34,63,
139,176,151,145,207,243,255,17,193,138,138,10,204,205,205,225,240,225,195,232,234,234,186,46,135,235,62,60,120,240,160,191,101,203,22,76,76,76,32,153,76,26,139,101,233,69,63,86,130,76,105,37,18,209,82,
148,37,198,81,63,218,139,53,87,250,81,58,63,133,44,7,204,68,74,112,190,172,30,189,149,107,49,83,188,10,21,164,94,87,228,162,216,203,2,89,18,38,98,177,24,42,43,43,209,217,217,137,67,135,14,173,200,99,197,
7,47,191,252,178,47,171,41,208,51,153,52,178,30,45,16,43,3,170,190,134,210,228,20,238,253,207,27,184,167,227,35,56,227,28,28,162,68,41,202,17,133,161,60,159,166,16,217,114,224,232,134,251,240,247,245,
223,64,106,85,53,214,197,194,40,225,32,159,100,229,250,242,242,114,99,205,103,159,125,118,89,46,203,118,62,247,220,115,126,77,77,77,64,46,131,12,201,21,213,52,32,82,18,199,67,71,95,194,150,158,207,128,
141,45,36,187,5,88,72,195,27,225,253,228,121,56,34,234,5,83,242,63,142,136,46,82,82,20,118,127,176,97,11,254,176,245,33,212,242,197,27,74,139,225,113,110,37,148,72,142,142,142,226,197,23,95,252,2,31,77,
185,4,202,82,185,117,114,114,210,196,219,34,21,69,235,154,176,202,73,225,7,127,249,41,154,43,86,3,143,254,10,216,244,109,250,169,154,68,74,224,132,27,224,39,198,104,181,105,56,38,145,165,39,16,18,112,
34,185,230,134,203,87,112,251,100,63,142,86,108,68,50,82,140,178,112,200,144,84,226,85,87,87,43,145,158,239,238,238,126,65,51,88,228,10,87,128,205,155,55,251,15,62,248,32,166,166,166,242,228,202,215,183,
96,211,84,63,158,126,253,0,234,127,244,123,224,39,175,3,113,146,156,24,1,166,174,0,115,36,182,48,67,119,221,146,115,173,8,74,24,110,70,20,179,100,231,75,83,49,147,238,210,48,222,124,247,21,68,250,206,
224,236,116,2,30,147,44,155,205,26,157,210,221,218,218,106,94,209,98,9,193,39,158,120,2,99,99,99,38,33,146,139,25,196,26,54,160,241,114,47,126,120,228,37,224,149,19,64,235,253,192,232,5,146,154,164,181,
232,55,5,60,45,128,12,219,105,178,243,100,42,194,146,180,48,109,146,164,53,69,82,56,252,209,223,16,189,120,14,253,243,172,10,161,144,49,136,188,38,14,133,200,19,220,191,127,191,31,137,68,76,192,38,89,
227,202,155,54,162,37,53,140,199,223,253,53,240,214,32,221,89,5,140,93,2,146,243,140,43,102,128,8,114,92,94,22,147,36,66,178,5,150,91,34,65,191,172,137,112,174,253,167,99,111,194,235,235,194,231,115,172,
16,236,146,110,149,161,125,251,246,153,87,18,12,65,118,250,219,183,111,55,102,86,1,118,98,165,168,171,169,194,163,175,254,2,104,239,226,8,134,234,196,48,73,44,80,24,245,105,17,44,20,18,91,156,227,184,
252,188,57,20,16,203,131,101,200,140,18,73,78,251,218,199,111,225,226,200,21,204,179,211,186,122,219,182,109,134,147,134,25,130,187,119,239,206,199,93,154,10,107,90,110,197,246,247,95,69,228,225,239,48,
91,25,91,19,163,57,34,114,39,39,201,185,213,10,239,249,8,184,124,213,90,215,138,160,171,41,162,185,54,107,54,192,136,40,153,245,240,104,223,41,244,79,207,154,132,146,126,85,143,93,187,118,233,95,57,130,
45,45,45,72,36,18,212,151,129,31,137,34,90,83,135,29,239,191,15,236,251,13,245,78,208,133,180,92,33,57,115,85,204,81,164,40,227,179,170,208,194,70,57,93,24,144,176,68,140,136,156,133,125,198,161,170,159,
251,207,159,194,96,50,141,52,9,106,181,209,250,46,78,130,219,216,216,232,107,233,81,170,203,189,171,26,214,225,150,238,15,233,102,62,189,117,7,51,149,149,216,184,145,174,149,123,243,18,184,54,77,45,201,
51,185,186,23,40,54,194,119,224,74,103,224,22,88,46,239,114,123,79,19,69,103,128,187,7,186,48,146,200,173,86,74,210,213,171,87,99,237,218,181,190,91,91,91,107,136,201,255,41,42,86,89,217,122,252,175,192,
29,27,249,111,34,197,224,151,27,37,178,156,21,77,206,21,23,243,67,240,146,76,30,89,67,63,129,98,227,66,194,144,179,8,158,229,161,113,129,21,31,27,248,12,3,228,161,76,55,92,216,22,55,183,190,190,222,184,
87,190,247,184,20,84,115,181,88,219,213,147,115,159,96,172,20,36,134,44,39,23,155,162,70,114,131,31,195,27,61,105,120,25,126,82,46,238,20,193,146,163,113,115,86,11,250,243,68,109,63,167,251,22,183,99,
41,230,65,134,111,166,80,19,167,134,134,6,184,90,102,196,86,157,69,101,229,40,83,225,101,213,64,39,235,221,197,33,160,156,171,133,102,16,95,151,175,26,93,69,171,205,195,251,164,29,222,96,167,121,164,242,
134,44,127,68,142,77,33,111,185,128,88,110,133,201,181,243,196,108,91,255,231,251,87,204,205,34,153,205,237,124,196,73,220,92,213,29,155,189,145,88,28,197,211,204,88,254,65,37,205,123,242,118,224,108,
7,80,202,149,35,78,98,227,151,224,125,240,26,188,163,92,81,166,38,225,144,175,227,106,176,36,167,75,63,133,49,103,172,103,161,182,200,4,207,150,128,4,107,22,18,152,103,108,203,197,226,36,110,242,149,233,
144,184,225,8,162,138,57,161,130,50,60,5,239,153,239,194,59,248,0,188,223,126,31,94,251,47,129,158,78,179,41,16,57,99,186,64,153,137,57,202,114,49,183,36,121,150,17,93,68,60,38,98,20,89,80,124,4,87,89,
99,69,37,84,15,115,255,224,127,226,20,22,84,103,130,155,128,217,100,142,152,178,91,86,51,102,230,133,243,220,80,182,174,212,111,239,21,66,212,237,113,27,86,200,201,149,107,45,82,243,9,164,226,165,230,
143,230,173,101,161,16,37,66,9,7,109,227,35,34,80,96,44,71,44,103,185,60,236,253,10,253,38,134,137,89,158,97,92,198,132,136,9,114,179,171,170,173,14,153,116,250,202,101,76,87,52,228,215,74,51,193,181,
111,108,133,125,215,102,235,146,241,132,137,191,130,241,182,127,201,189,218,140,119,97,144,75,108,132,29,34,38,78,58,251,184,218,206,135,184,155,16,102,39,198,49,21,229,126,183,138,1,166,76,182,19,88,
20,76,108,187,243,228,10,21,10,65,219,89,174,191,240,94,32,193,100,220,197,100,156,123,75,238,222,21,102,226,52,62,62,14,87,219,43,75,144,102,196,232,200,48,206,222,122,95,142,160,133,38,43,16,51,55,127,
150,196,156,233,12,192,182,217,88,47,211,191,172,48,202,142,213,174,69,140,60,124,150,59,89,79,156,196,205,237,233,233,49,17,32,214,97,238,112,199,250,122,208,189,141,11,53,119,85,206,181,4,116,27,92,
151,141,185,107,100,197,236,45,32,111,44,204,250,255,78,253,122,84,112,127,233,5,89,172,163,64,111,111,47,207,141,132,54,138,130,58,7,63,251,20,159,110,184,19,88,195,64,228,30,193,4,146,38,227,68,87,99,
142,63,129,130,37,46,43,148,107,251,11,239,11,251,233,41,175,212,193,135,181,141,40,33,57,45,24,226,33,235,9,134,32,153,230,138,34,79,89,233,196,28,70,206,252,23,199,30,249,57,192,45,158,163,36,231,68,
87,179,85,191,193,141,85,98,97,239,87,234,183,150,11,224,40,57,104,189,231,239,184,27,53,92,25,66,44,49,178,158,184,156,59,119,206,140,49,4,59,58,58,28,203,92,159,43,254,247,193,49,28,111,190,7,189,59,
219,0,238,52,156,116,110,214,28,57,66,183,214,34,130,37,16,244,235,248,107,80,56,78,237,96,121,87,219,188,120,2,248,71,203,58,188,221,184,17,229,218,176,144,131,160,210,39,78,106,27,130,194,201,147,39,
13,57,145,140,120,25,124,114,244,29,188,241,200,211,88,104,228,18,199,137,220,128,164,217,116,90,133,130,109,7,68,236,210,246,133,236,21,130,113,198,114,12,159,201,213,69,120,102,199,253,168,226,234,229,
46,230,62,165,232,216,33,46,22,121,130,125,125,125,142,234,142,178,71,68,103,46,13,226,204,71,31,226,143,63,254,29,210,149,60,233,104,5,180,241,104,161,246,50,217,122,189,165,205,156,149,25,119,137,178,
8,30,123,96,15,74,121,198,137,114,47,42,215,42,196,180,179,23,23,142,50,200,19,20,78,157,58,133,226,226,226,220,199,158,104,4,67,157,29,56,59,50,134,246,39,185,6,107,228,52,69,111,111,150,165,27,144,66,
242,20,99,57,86,7,245,255,236,155,187,48,205,121,98,243,115,240,105,57,121,78,177,119,250,244,105,14,184,138,160,0,230,192,61,216,11,28,248,188,14,209,50,183,62,79,124,222,219,141,201,202,90,244,60,252,
56,90,135,186,80,122,145,25,47,197,246,29,229,70,75,88,23,185,208,222,235,74,200,221,142,42,2,165,187,169,6,143,239,254,30,206,167,179,136,203,99,129,229,68,78,201,122,225,194,133,188,245,132,37,55,22,
119,221,117,151,175,221,172,142,1,90,118,22,24,180,213,205,173,216,124,111,27,218,122,254,141,189,239,252,153,123,69,106,215,25,87,203,98,240,229,192,112,100,183,153,84,73,32,81,193,215,131,82,23,135,
238,127,0,111,215,173,227,38,119,20,17,86,139,48,173,166,144,210,135,36,125,250,96,236,125,129,207,178,4,133,77,155,54,249,20,179,113,20,201,69,146,76,82,81,229,166,86,212,127,125,7,90,156,20,238,236,
56,137,182,211,255,66,245,192,136,73,164,124,150,10,220,245,12,213,86,227,104,203,86,252,115,99,51,186,179,46,50,195,67,136,50,198,98,100,44,171,41,214,245,221,80,150,235,239,239,95,150,203,138,4,5,186,
218,215,25,85,238,86,234,107,67,161,107,146,199,128,120,85,21,15,247,235,81,220,216,4,183,168,24,69,92,5,162,202,68,158,93,166,73,96,134,9,149,157,153,70,134,27,16,73,136,47,26,225,54,77,196,36,202,86,
93,21,115,44,202,43,242,184,46,65,129,177,225,111,221,186,213,124,29,149,37,69,82,25,39,210,170,157,186,58,84,20,98,12,193,13,49,216,21,135,220,211,241,153,242,74,193,111,73,9,114,169,226,77,21,131,181,
78,115,94,151,195,151,18,180,208,71,29,29,98,10,173,41,136,108,225,213,66,196,10,175,34,102,173,54,52,52,100,214,89,243,224,75,112,195,4,45,154,154,154,124,125,64,87,96,23,90,81,4,45,73,145,178,150,83,
156,233,170,179,174,62,164,15,12,12,220,148,206,155,38,88,136,186,186,58,191,164,164,196,4,186,181,142,96,173,172,4,211,241,113,120,120,248,43,234,1,254,15,127,166,111,32,74,38,84,125,0,0,0,0,73,69,78,
68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::redledon_png = (const char*) resource_AiassAudioProcessorEditor_redledon_png;
const int AiassAudioProcessorEditor::redledon_pngSize = 2874;

// JUCER_RESOURCE: aiass_mono_typenschild_png, 6802, "../images/AIASS_Mono_Typenschild.png"
static const unsigned char resource_AiassAudioProcessorEditor_aiass_mono_typenschild_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,179,0,0,0,21,8,6,0,0,0,13,81,223,0,0,0,0,4,103,65,77,
65,0,0,177,142,124,251,81,147,0,0,0,32,99,72,82,77,0,0,135,15,0,0,140,15,0,0,253,82,0,0,129,64,0,0,125,121,0,0,233,139,0,0,60,229,0,0,25,204,115,60,133,119,0,0,10,47,105,67,67,80,73,67,67,32,80,114,111,
102,105,108,101,0,0,72,199,157,150,119,84,84,215,22,135,207,189,119,122,161,205,48,210,25,122,147,46,48,128,244,46,32,29,4,81,24,102,6,24,202,0,195,12,77,108,136,168,64,68,17,17,1,69,144,160,128,1,163,
161,72,172,136,98,33,40,168,96,15,72,16,80,98,48,138,168,168,100,70,214,74,124,121,121,239,229,229,247,199,189,223,218,103,239,115,247,217,123,159,181,46,0,36,79,31,46,47,5,150,2,32,153,39,224,7,122,56,
211,87,133,71,208,177,253,0,6,120,128,1,166,0,48,89,233,169,190,65,238,193,64,36,47,55,23,122,186,200,9,252,139,222,12,1,72,252,190,101,232,233,79,167,131,255,79,210,172,84,190,0,0,200,95,196,230,108,
78,58,75,196,249,34,78,202,20,164,138,237,51,34,166,198,36,138,25,70,137,153,47,74,80,196,114,98,142,91,228,165,159,125,22,217,81,204,236,100,30,91,196,226,156,83,217,201,108,49,247,136,120,123,134,144,
35,98,196,71,196,5,25,92,78,166,136,111,139,88,51,73,152,204,21,241,91,113,108,50,135,153,14,0,138,36,182,11,56,172,120,17,155,136,152,196,15,14,116,17,241,114,0,112,164,184,47,56,230,11,22,112,178,4,
226,67,185,164,164,102,243,185,113,241,2,186,46,75,143,110,106,109,205,160,123,114,50,147,56,2,129,161,63,147,149,200,228,179,233,46,41,201,169,76,94,54,0,139,103,254,44,25,113,109,233,162,34,91,154,90,
91,90,26,154,25,153,126,81,168,255,186,248,55,37,238,237,34,189,10,248,220,51,136,214,247,135,237,175,252,82,234,0,96,204,138,106,179,235,15,91,204,126,0,58,182,2,32,119,255,15,155,230,33,0,36,69,125,
107,191,241,197,121,104,226,121,137,23,8,82,109,140,141,51,51,51,141,184,28,150,145,184,160,191,235,127,58,252,13,125,241,61,35,241,118,191,151,135,238,202,137,101,10,147,4,116,113,221,88,41,73,41,66,
62,61,61,149,201,226,208,13,255,60,196,255,56,240,175,243,88,26,200,137,229,240,57,60,81,68,168,104,202,184,188,56,81,187,121,108,174,128,155,194,163,115,121,255,169,137,255,48,236,79,90,156,107,145,40,
245,159,0,53,202,8,72,221,160,2,228,231,62,128,162,16,1,18,121,80,220,245,223,251,230,131,15,5,226,155,23,166,58,177,56,247,159,5,253,251,174,112,137,248,145,206,141,251,28,231,18,24,76,103,9,249,25,139,
107,226,107,9,208,128,0,36,1,21,200,3,21,160,1,116,129,33,48,3,86,192,22,56,2,55,176,2,248,129,96,16,14,214,2,22,136,7,201,128,15,50,65,46,216,12,10,64,17,216,5,246,130,74,80,3,234,65,35,104,1,39,64,7,
56,13,46,128,203,224,58,184,9,238,128,7,96,4,140,131,231,96,6,188,1,243,16,4,97,33,50,68,129,228,33,85,72,11,50,128,204,32,6,100,15,185,65,62,80,32,20,14,69,67,113,16,15,18,66,185,208,22,168,8,42,133,
42,161,90,168,17,250,22,58,5,93,128,174,66,3,208,61,104,20,154,130,126,133,222,195,8,76,130,169,176,50,172,13,27,195,12,216,9,246,134,131,225,53,112,28,156,6,231,192,249,240,78,184,2,174,131,143,193,237,
240,5,248,58,124,7,30,129,159,195,179,8,64,136,8,13,81,67,12,17,6,226,130,248,33,17,72,44,194,71,54,32,133,72,57,82,135,180,32,93,72,47,114,11,25,65,166,145,119,40,12,138,130,162,163,12,81,182,40,79,84,
8,138,133,74,67,109,64,21,163,42,81,71,81,237,168,30,212,45,212,40,106,6,245,9,77,70,43,161,13,208,54,104,47,244,42,116,28,58,19,93,128,46,71,55,160,219,208,151,208,119,208,227,232,55,24,12,134,134,209,
193,88,97,60,49,225,152,4,204,58,76,49,230,0,166,21,115,30,51,128,25,195,204,98,177,88,121,172,1,214,14,235,135,101,98,5,216,2,236,126,236,49,236,57,236,32,118,28,251,22,71,196,169,226,204,112,238,184,
8,28,15,151,135,43,199,53,225,206,226,6,113,19,184,121,188,20,94,11,111,131,247,195,179,241,217,248,18,124,61,190,11,127,3,63,142,159,39,72,19,116,8,118,132,96,66,2,97,51,161,130,208,66,184,68,120,72,
120,69,36,18,213,137,214,196,0,34,151,184,137,88,65,60,78,188,66,28,37,190,35,201,144,244,73,46,164,72,146,144,180,147,116,132,116,158,116,143,244,138,76,38,107,147,29,201,17,100,1,121,39,185,145,124,
145,252,152,252,86,130,34,97,36,225,37,193,150,216,40,81,37,209,46,49,40,241,66,18,47,169,37,233,36,185,86,50,71,178,92,242,164,228,13,201,105,41,188,148,182,148,139,20,83,106,131,84,149,212,41,169,97,
169,89,105,138,180,169,180,159,116,178,116,177,116,147,244,85,233,73,25,172,140,182,140,155,12,91,38,95,230,176,204,69,153,49,10,66,209,160,184,80,88,148,45,148,122,202,37,202,56,21,67,213,161,122,81,
19,168,69,212,111,168,253,212,25,89,25,217,101,178,161,178,89,178,85,178,103,100,71,104,8,77,155,230,69,75,162,149,208,78,208,134,104,239,151,40,47,113,90,194,89,178,99,73,203,146,193,37,115,114,138,114,
142,114,28,185,66,185,86,185,59,114,239,229,233,242,110,242,137,242,187,229,59,228,31,41,160,20,244,21,2,20,50,21,14,42,92,82,152,86,164,42,218,42,178,20,11,21,79,40,222,87,130,149,244,149,2,149,214,41,
29,86,234,83,154,85,86,81,246,80,78,85,222,175,124,81,121,90,133,166,226,168,146,160,82,166,114,86,101,74,149,162,106,175,202,85,45,83,61,167,250,140,46,75,119,162,39,209,43,232,61,244,25,53,37,53,79,
53,161,90,173,90,191,218,188,186,142,122,136,122,158,122,171,250,35,13,130,6,67,35,86,163,76,163,91,99,70,83,85,211,87,51,87,179,89,243,190,22,94,139,161,21,175,181,79,171,87,107,78,91,71,59,76,123,155,
118,135,246,164,142,156,142,151,78,142,78,179,206,67,93,178,174,131,110,154,110,157,238,109,61,140,30,67,47,81,239,128,222,77,125,88,223,66,63,94,191,74,255,134,1,108,96,105,192,53,56,96,48,176,20,189,
212,122,41,111,105,221,210,97,67,146,161,147,97,134,97,179,225,168,17,205,200,199,40,207,168,195,232,133,177,166,113,132,241,110,227,94,227,79,38,22,38,73,38,245,38,15,76,101,76,87,152,230,153,118,153,
254,106,166,111,198,50,171,50,187,109,78,54,119,55,223,104,222,105,254,114,153,193,50,206,178,131,203,238,90,80,44,124,45,182,89,116,91,124,180,180,178,228,91,182,88,78,89,105,90,69,91,85,91,13,51,168,
12,127,70,49,227,138,53,218,218,217,122,163,245,105,235,119,54,150,54,2,155,19,54,191,216,26,218,38,218,54,217,78,46,215,89,206,89,94,191,124,204,78,221,142,105,87,107,55,98,79,183,143,182,63,100,63,226,
160,230,192,116,168,115,120,226,168,225,200,118,108,112,156,112,210,115,74,112,58,230,244,194,217,196,153,239,220,230,60,231,98,227,178,222,229,188,43,226,234,225,90,232,218,239,38,227,22,226,86,233,246,
216,93,221,61,206,189,217,125,198,195,194,99,157,199,121,79,180,167,183,231,110,207,97,47,101,47,150,87,163,215,204,10,171,21,235,87,244,120,147,188,131,188,43,189,159,248,232,251,240,125,186,124,97,223,
21,190,123,124,31,174,212,90,201,91,217,225,7,252,188,252,246,248,61,242,215,241,79,243,255,62,0,19,224,31,80,21,240,52,208,52,48,55,176,55,136,18,20,21,212,20,244,38,216,57,184,36,248,65,136,110,136,
48,164,59,84,50,52,50,180,49,116,46,204,53,172,52,108,100,149,241,170,245,171,174,135,43,132,115,195,59,35,176,17,161,17,13,17,179,171,221,86,239,93,61,30,105,17,89,16,57,180,70,103,77,214,154,171,107,
21,214,38,173,61,19,37,25,197,140,58,25,141,142,14,139,110,138,254,192,244,99,214,49,103,99,188,98,170,99,102,88,46,172,125,172,231,108,71,118,25,123,138,99,199,41,229,76,196,218,197,150,198,78,198,217,
197,237,137,155,138,119,136,47,143,159,230,186,112,43,185,47,19,60,19,106,18,230,18,253,18,143,36,46,36,133,37,181,38,227,146,163,147,79,241,100,120,137,188,158,20,149,148,172,148,129,84,131,212,130,212,
145,52,155,180,189,105,51,124,111,126,67,58,148,190,38,189,83,64,21,253,76,245,9,117,133,91,133,163,25,246,25,85,25,111,51,67,51,79,102,73,103,241,178,250,178,245,179,119,100,79,228,184,231,124,189,14,
181,142,181,174,59,87,45,119,115,238,232,122,167,245,181,27,160,13,49,27,186,55,106,108,204,223,56,190,201,99,211,209,205,132,205,137,155,127,200,51,201,43,205,123,189,37,108,75,87,190,114,254,166,252,
177,173,30,91,155,11,36,10,248,5,195,219,108,183,213,108,71,109,231,110,239,223,97,190,99,255,142,79,133,236,194,107,69,38,69,229,69,31,138,89,197,215,190,50,253,170,226,171,133,157,177,59,251,75,44,75,
14,238,194,236,226,237,26,218,237,176,251,104,169,116,105,78,233,216,30,223,61,237,101,244,178,194,178,215,123,163,246,94,45,95,86,94,179,143,176,79,184,111,164,194,167,162,115,191,230,254,93,251,63,84,
198,87,222,169,114,174,106,173,86,170,222,81,61,119,128,125,96,240,160,227,193,150,26,229,154,162,154,247,135,184,135,238,214,122,212,182,215,105,215,149,31,198,28,206,56,252,180,62,180,190,247,107,198,
215,141,13,10,13,69,13,31,143,240,142,140,28,13,60,218,211,104,213,216,216,164,212,84,210,12,55,11,155,167,142,69,30,187,249,141,235,55,157,45,134,45,181,173,180,214,162,227,224,184,240,248,179,111,163,
191,29,58,225,125,162,251,36,227,100,203,119,90,223,85,183,81,218,10,219,161,246,236,246,153,142,248,142,145,206,240,206,129,83,43,78,117,119,217,118,181,125,111,244,253,145,211,106,167,171,206,200,158,
41,57,75,56,155,127,118,225,92,206,185,217,243,169,231,167,47,196,93,24,235,142,234,126,112,113,213,197,219,61,1,61,253,151,188,47,93,185,236,126,249,98,175,83,239,185,43,118,87,78,95,181,185,122,234,
26,227,90,199,117,203,235,237,125,22,125,109,63,88,252,208,214,111,217,223,126,195,234,70,231,77,235,155,93,3,203,7,206,14,58,12,94,184,229,122,235,242,109,175,219,215,239,172,188,51,48,20,50,116,119,
56,114,120,228,46,251,238,228,189,164,123,47,239,103,220,159,127,176,233,33,250,97,225,35,169,71,229,143,149,30,215,253,168,247,99,235,136,229,200,153,81,215,209,190,39,65,79,30,140,177,198,158,255,148,
254,211,135,241,252,167,228,167,229,19,170,19,141,147,102,147,167,167,220,167,110,62,91,253,108,252,121,234,243,249,233,130,159,165,127,174,126,161,251,226,187,95,28,127,233,155,89,53,51,254,146,255,114,
225,215,226,87,242,175,142,188,94,246,186,123,214,127,246,241,155,228,55,243,115,133,111,229,223,30,125,199,120,215,251,62,236,253,196,124,230,7,236,135,138,143,122,31,187,62,121,127,122,184,144,188,176,
240,27,247,132,243,251,55,4,41,30,0,0,0,9,112,72,89,115,0,0,46,35,0,0,46,35,1,120,165,63,118,0,0,0,33,116,69,88,116,67,114,101,97,116,105,111,110,32,84,105,109,101,0,50,48,49,55,58,49,48,58,48,52,32,49,
52,58,49,57,58,49,57,71,210,3,42,0,0,15,160,73,68,65,84,104,67,237,155,9,116,20,85,22,134,111,117,119,86,8,107,132,144,13,17,144,69,100,223,23,23,208,81,81,22,17,13,251,170,3,3,130,131,44,226,224,8,138,
130,19,4,101,64,80,212,65,1,129,176,7,34,50,200,68,69,194,18,8,33,32,136,178,111,9,33,144,64,246,116,210,93,115,255,219,85,157,74,167,179,192,113,28,142,39,223,57,143,126,245,186,242,186,250,213,125,247,
254,247,86,163,168,170,74,37,17,22,102,50,155,76,61,235,155,85,37,84,49,41,213,248,84,139,162,112,207,110,55,169,38,147,93,177,83,129,106,82,249,85,225,3,213,164,253,217,29,97,82,21,59,230,210,14,139,
192,215,104,87,85,147,219,247,238,102,20,197,110,194,122,105,135,21,148,3,190,215,10,175,156,217,104,103,124,251,115,201,174,92,190,126,203,122,124,199,142,29,89,218,169,197,112,107,204,3,7,246,110,230,
161,40,175,113,183,23,183,170,50,88,65,5,255,127,18,216,218,151,171,100,63,180,114,77,84,140,54,230,164,136,215,128,39,30,54,168,247,108,54,228,120,62,28,194,173,68,67,54,155,205,100,50,153,181,163,10,
42,248,93,104,193,225,110,50,59,237,86,38,70,27,115,226,244,204,97,97,15,122,122,153,235,109,230,161,158,50,224,134,123,235,213,167,199,255,244,52,53,110,210,140,204,22,51,153,217,152,243,172,121,116,
44,33,158,190,221,25,69,137,87,46,107,103,86,80,193,255,156,104,123,134,189,255,170,109,219,210,180,227,66,99,30,54,176,207,34,82,232,101,57,112,1,94,120,208,144,209,212,160,97,35,218,22,185,129,142,38,
28,166,106,213,170,81,65,65,1,89,173,86,234,208,177,43,61,221,187,31,237,217,253,29,109,222,184,6,186,71,251,75,247,88,44,30,84,179,166,191,244,51,51,51,40,43,43,83,250,70,188,188,188,248,51,106,72,255,
198,141,20,249,44,87,238,185,167,54,71,7,147,92,67,90,218,13,109,212,61,181,106,7,80,189,122,13,200,147,231,205,72,191,69,167,126,61,233,246,115,1,174,239,254,70,77,168,6,95,163,141,63,55,41,233,10,93,
56,127,182,196,239,21,146,145,69,158,182,187,91,210,179,16,165,139,126,149,200,106,254,3,73,120,149,14,230,217,175,63,28,17,17,147,131,67,49,230,97,131,122,117,86,73,153,168,144,18,38,39,25,96,33,78,19,
254,250,26,93,77,74,164,13,235,86,145,221,238,184,105,225,243,151,80,106,106,42,189,247,238,27,114,236,235,91,137,198,140,155,68,55,211,82,105,249,231,75,100,172,36,122,60,222,147,134,143,28,35,253,184,
67,7,104,225,130,57,210,55,210,182,93,39,154,56,105,186,244,255,246,218,4,186,124,233,162,244,117,106,215,174,67,243,62,248,88,250,217,89,89,52,97,220,112,202,207,207,151,99,35,62,190,190,52,230,47,127,
165,214,109,58,104,35,14,112,238,142,237,91,248,59,125,85,196,72,113,222,168,151,198,83,149,42,69,21,86,226,149,75,180,100,241,124,186,120,225,156,54,82,200,200,227,103,168,170,181,248,103,223,109,108,
104,24,74,151,43,251,106,71,127,12,248,214,45,90,185,38,114,34,250,14,99,30,216,103,12,247,6,240,225,35,114,134,129,39,158,236,69,117,2,131,216,27,199,83,247,199,158,164,141,235,191,162,75,23,47,208,125,
245,27,178,71,204,147,155,28,28,92,151,134,177,113,110,88,183,146,250,245,31,76,223,176,145,28,60,176,87,155,161,56,51,223,14,167,250,13,26,73,223,102,179,209,43,227,71,82,58,123,75,35,101,25,115,191,
254,3,169,111,63,190,100,141,37,139,222,167,253,251,126,212,142,10,25,63,113,170,68,14,112,243,102,42,123,229,116,10,168,19,72,30,30,158,50,182,106,197,167,180,115,71,148,244,235,4,6,211,156,127,44,228,
72,100,145,235,130,71,246,246,246,38,127,255,90,242,254,173,155,105,52,109,242,56,202,201,201,150,99,157,202,108,200,150,18,188,118,73,192,83,42,229,250,19,118,51,229,156,26,117,0,199,204,133,96,76,255,
243,12,15,15,178,153,138,190,15,218,180,237,40,175,199,127,74,160,234,53,106,82,171,214,237,56,18,230,83,236,254,24,94,179,52,242,243,171,66,237,121,13,125,124,124,228,156,115,103,79,203,249,70,252,253,
239,161,22,45,219,146,95,149,42,28,73,175,211,145,248,131,178,214,58,136,180,205,30,108,37,253,248,195,177,20,24,20,44,231,195,57,30,142,139,165,228,171,137,242,158,17,56,172,230,45,90,83,165,202,149,
41,37,229,26,29,57,124,208,93,52,181,229,171,182,166,107,214,68,253,42,198,60,56,172,79,87,86,18,197,44,193,211,211,139,222,158,179,128,102,189,49,153,186,62,212,157,130,130,66,229,230,35,92,159,62,253,
139,156,243,64,179,230,52,126,194,52,246,128,62,180,96,222,59,242,229,225,201,95,227,155,238,46,44,215,14,8,164,121,11,150,106,71,14,86,175,250,23,123,201,72,237,200,65,105,198,140,104,1,175,92,171,86,
128,54,66,116,236,104,60,205,123,111,150,118,228,0,209,98,233,167,171,248,124,19,109,217,20,225,148,64,85,171,86,163,153,179,231,137,145,94,75,78,162,41,147,198,202,249,207,135,13,165,94,125,250,83,70,
70,58,253,253,111,147,40,149,111,10,120,226,169,222,52,120,232,104,233,127,182,108,17,237,254,126,151,244,117,90,154,11,168,82,121,45,174,156,96,182,223,118,70,94,35,155,133,50,29,22,95,132,21,171,29,
107,191,115,199,54,137,154,144,149,0,18,240,203,229,31,211,240,17,99,169,178,159,159,140,129,127,125,246,17,125,31,189,83,59,34,118,42,97,226,88,140,57,89,110,110,14,125,190,108,49,29,216,191,71,142,141,
247,125,221,218,21,188,214,67,228,190,0,56,142,5,243,102,203,61,4,184,191,97,3,135,211,83,79,247,149,190,14,34,240,210,143,230,83,194,145,56,109,68,67,85,23,172,88,179,117,178,204,198,215,254,140,12,106,
84,173,86,93,60,95,151,110,143,200,110,200,205,205,165,248,184,131,148,147,157,205,187,211,87,146,63,29,47,47,111,250,120,201,7,124,33,71,232,236,217,83,236,181,207,139,7,195,110,127,97,192,48,246,108,
62,162,109,117,186,242,156,224,214,173,155,44,49,246,75,191,27,111,148,219,161,65,195,198,78,67,142,222,245,141,188,54,123,176,5,213,96,175,98,164,82,165,202,206,5,187,158,146,236,220,92,248,236,205,27,
215,138,231,249,249,231,227,206,5,131,7,2,121,121,185,162,171,117,118,237,252,154,14,198,238,165,189,123,190,151,5,117,165,145,201,38,6,93,86,107,197,173,117,57,91,27,110,109,203,217,218,149,179,249,150,
177,61,30,227,228,30,78,5,198,102,179,21,80,229,202,126,236,168,166,210,69,190,167,95,46,255,132,165,230,21,57,175,119,223,231,229,21,116,238,242,48,219,202,32,49,228,147,188,150,145,155,215,137,13,224,
190,143,29,255,42,213,187,175,129,118,102,33,207,62,55,144,162,182,110,164,181,171,191,16,163,199,230,49,206,217,253,177,167,168,231,51,207,202,125,249,233,216,17,218,186,101,61,37,38,94,38,223,74,149,
196,193,5,5,133,104,103,106,40,138,216,175,166,153,123,179,171,81,122,96,0,134,220,162,101,107,26,58,124,12,37,196,31,162,189,49,223,75,56,64,120,57,123,230,87,118,249,126,148,198,90,25,174,31,54,112,
61,37,133,119,93,29,249,242,77,154,54,151,112,2,131,247,227,157,140,139,250,104,97,56,157,252,229,132,24,56,46,238,253,15,151,177,113,215,162,111,255,253,53,253,124,226,152,211,251,190,57,227,85,58,127,
238,140,244,65,105,158,121,228,232,113,244,104,143,39,232,42,135,166,183,222,156,74,139,151,126,41,210,96,125,196,74,73,80,117,80,58,196,123,240,42,170,106,167,88,150,62,144,63,199,142,197,203,198,116,
5,50,106,196,168,191,72,255,250,245,107,156,208,70,139,166,135,78,118,23,101,254,40,232,158,57,250,63,59,232,139,207,29,222,115,218,235,111,177,131,104,41,97,29,50,16,73,182,113,125,134,15,238,43,107,
242,222,188,197,44,25,66,196,232,16,25,49,230,233,233,73,179,231,124,40,242,244,112,220,1,250,112,254,156,34,158,25,185,23,12,20,12,26,50,138,158,236,217,71,36,224,196,113,35,197,70,62,88,244,25,59,38,
127,58,20,187,143,22,45,252,135,204,137,205,49,55,124,17,213,100,57,19,243,227,119,244,201,210,15,229,239,53,212,107,169,121,126,22,71,95,9,118,188,58,180,205,209,35,135,233,219,128,40,186,167,86,109,
14,185,25,156,217,55,149,138,66,236,129,24,190,201,48,222,64,214,56,73,228,229,237,37,70,130,157,8,250,61,55,72,118,79,60,123,115,24,208,55,95,111,161,132,132,56,241,236,0,21,2,24,50,128,190,61,127,238,
52,101,103,103,137,28,232,246,80,143,34,198,92,18,168,52,232,26,248,0,207,145,149,153,41,97,7,137,91,183,135,123,200,142,215,13,207,110,183,241,238,95,78,47,142,153,200,139,100,146,191,67,67,88,195,70,
194,245,233,161,13,192,120,123,240,6,12,9,189,87,36,8,66,39,26,22,26,149,26,228,2,70,29,168,51,160,71,10,249,87,45,59,1,196,101,105,151,246,155,97,103,217,80,222,57,35,247,212,164,171,169,142,92,193,29,
231,13,90,88,215,166,200,143,96,200,192,248,221,45,22,11,121,179,134,134,33,131,31,127,248,143,115,221,113,254,190,189,63,136,199,110,220,184,153,140,25,57,125,202,33,81,65,106,170,163,10,133,251,10,16,
113,97,200,96,247,15,187,156,115,194,131,195,254,32,61,26,53,121,64,198,12,40,254,126,30,181,117,145,227,172,123,93,75,190,42,186,23,161,230,58,139,110,84,3,94,159,246,178,115,39,129,244,244,155,20,90,
247,94,242,225,221,98,44,153,45,254,103,56,133,207,157,41,225,29,213,143,53,95,45,119,26,50,232,210,245,81,121,69,130,112,250,212,73,169,40,96,247,129,78,157,31,146,5,42,11,36,39,216,48,96,255,62,135,
30,219,23,179,91,94,3,120,147,161,124,104,100,55,47,50,60,131,177,10,129,176,6,175,51,117,250,44,122,166,247,115,218,168,227,38,204,121,103,134,200,10,44,158,14,74,132,56,111,246,156,15,138,73,25,144,
147,103,162,204,28,115,153,45,43,215,76,217,121,229,107,57,86,19,229,230,151,221,172,5,10,229,219,202,215,236,101,24,125,94,94,158,214,131,35,112,84,173,140,235,160,143,233,120,123,249,104,189,66,227,
215,129,147,1,48,120,87,140,115,34,209,52,226,197,9,183,78,166,54,135,142,254,25,240,210,174,228,155,76,170,102,61,234,5,54,238,98,230,142,172,181,65,131,70,236,169,227,196,0,16,2,224,93,49,233,229,75,
23,100,215,232,201,130,254,69,241,218,144,13,106,107,100,161,241,3,15,206,164,219,119,236,34,253,115,103,78,81,253,250,247,75,31,90,8,192,147,183,106,221,94,180,105,105,116,238,234,208,220,105,105,169,
178,153,112,125,168,132,192,219,226,90,224,225,81,67,54,130,80,135,134,42,6,36,83,155,182,29,228,193,15,232,255,194,16,209,194,186,135,192,77,88,241,197,50,217,136,77,31,104,78,45,90,181,165,118,237,59,
75,210,8,143,241,220,243,131,233,211,79,254,41,231,234,192,227,253,17,208,189,160,17,119,99,58,200,61,16,153,17,245,16,173,41,225,176,246,14,18,190,58,242,10,199,229,138,235,166,48,130,210,174,78,0,207,
1,167,167,35,159,193,232,137,185,1,123,74,74,70,146,110,204,49,108,204,197,158,252,29,101,137,0,97,190,117,203,58,241,136,8,191,144,30,30,28,18,96,132,248,162,122,242,132,254,47,39,79,80,202,181,100,170,
205,70,227,106,80,45,225,81,89,78,128,182,237,59,73,115,5,50,161,52,99,70,66,210,178,85,27,233,87,175,94,131,222,124,59,92,250,70,58,118,234,70,171,86,124,38,101,195,208,186,245,232,62,78,64,44,188,145,
118,237,220,46,209,226,106,210,86,250,247,55,91,37,113,65,130,130,196,5,50,10,122,186,125,7,54,90,206,25,126,57,121,92,36,15,228,11,218,90,54,236,25,51,231,74,21,167,113,211,7,181,79,42,36,253,241,124,
178,85,43,195,237,221,46,191,241,116,192,239,59,15,178,220,40,94,205,184,83,176,198,72,250,154,240,154,64,247,198,29,220,39,78,33,36,164,174,220,75,128,177,219,1,142,9,15,168,234,222,123,159,68,67,60,
160,195,24,74,193,29,59,57,228,229,161,131,142,194,129,129,159,162,163,163,115,197,152,109,249,166,77,102,15,122,87,134,13,64,34,236,141,249,129,13,250,5,218,178,105,173,104,225,230,45,218,176,206,205,
116,234,30,221,160,245,29,60,105,202,27,180,101,227,218,98,187,175,107,55,135,196,40,13,212,20,171,177,49,65,230,184,163,3,27,42,18,189,210,64,88,107,219,174,163,92,55,230,67,69,5,215,150,16,31,71,41,
41,201,218,89,36,11,166,3,121,3,15,51,242,197,113,146,188,238,219,187,155,150,46,158,175,189,235,144,31,73,87,46,139,49,187,147,66,222,39,205,100,247,225,239,15,59,41,175,173,184,51,214,146,12,184,164,
57,203,251,89,184,21,220,76,37,254,222,236,206,129,28,157,241,230,92,201,133,80,46,77,102,153,26,24,24,44,78,2,181,225,72,118,132,183,11,162,34,18,80,232,241,249,11,151,73,145,33,48,40,72,34,64,226,149,
75,242,176,171,40,234,38,252,43,154,249,171,245,145,39,121,29,29,53,46,23,80,170,193,111,50,144,201,66,31,35,92,99,55,162,143,134,240,174,235,230,225,35,199,82,58,135,158,61,156,109,26,65,33,29,155,0,
32,65,27,49,164,95,145,54,235,141,41,242,30,22,64,151,17,238,208,203,122,48,68,215,57,70,13,235,47,21,19,240,208,35,143,201,43,54,31,192,102,27,55,113,10,5,135,132,74,133,163,78,157,32,121,200,163,115,
134,101,15,12,62,62,46,86,142,225,221,225,105,96,216,72,136,187,240,70,196,67,3,128,138,142,43,57,169,1,148,117,181,46,101,37,113,75,44,103,195,185,174,13,115,104,45,59,41,148,114,146,66,28,45,177,132,
118,165,156,13,115,36,135,144,61,191,228,228,239,78,57,115,250,87,154,51,123,134,72,82,60,136,10,14,14,149,245,70,37,236,157,89,211,157,218,249,118,56,113,252,168,228,94,40,44,160,244,27,20,28,194,247,
135,61,50,231,87,248,44,67,30,198,147,171,219,242,108,54,121,228,44,165,57,48,248,249,158,205,205,30,30,184,251,197,190,49,50,205,225,163,198,202,35,222,200,77,17,82,79,214,129,113,52,111,217,154,250,
62,27,38,21,2,148,199,92,189,50,126,156,52,116,196,159,165,63,99,250,43,206,234,135,17,189,196,131,157,55,125,234,203,197,74,115,216,48,225,243,29,165,29,212,39,183,71,109,150,190,17,189,204,131,239,52,
249,149,151,164,242,50,250,165,151,233,225,71,31,215,206,40,142,209,11,227,137,211,91,239,206,119,202,33,87,112,13,111,207,156,86,172,234,18,217,245,117,202,244,113,252,142,228,110,166,71,220,39,20,144,
90,252,233,221,111,69,245,234,53,37,247,129,166,117,77,8,239,20,252,62,6,5,133,27,124,47,81,249,50,192,193,84,29,195,238,56,125,229,234,173,17,24,112,26,51,24,50,168,207,104,118,213,159,114,215,109,0,
107,120,127,19,250,211,147,207,240,78,97,175,193,19,35,228,251,250,250,210,41,150,28,208,161,238,126,183,0,102,205,126,95,52,15,116,246,244,41,227,181,209,162,64,31,65,18,128,89,127,159,34,201,150,209,
152,81,82,235,195,27,6,188,58,241,69,49,84,87,160,145,223,153,235,168,63,110,218,176,90,158,250,33,41,68,121,13,215,13,79,171,131,7,35,223,69,239,164,245,28,38,141,191,233,192,28,195,70,140,145,68,215,
8,54,32,158,126,254,124,226,39,109,164,144,212,42,193,148,111,246,146,62,11,46,44,179,244,117,48,166,184,255,127,7,101,162,114,104,229,191,214,142,74,1,82,175,180,243,248,45,255,155,23,201,108,191,251,
127,67,82,14,108,118,178,143,99,227,77,182,218,183,71,69,68,216,109,24,44,98,204,96,216,128,94,3,217,221,134,243,240,41,94,31,196,117,183,43,132,242,8,30,148,184,251,113,207,221,8,140,26,69,124,236,242,
236,236,108,74,226,141,165,203,35,119,64,26,225,201,37,254,14,154,173,172,95,229,85,240,251,160,146,26,171,218,104,66,78,129,245,124,90,154,53,29,137,159,246,86,113,99,6,67,251,63,29,172,120,90,6,240,
95,222,228,247,237,236,28,234,169,170,130,159,145,153,217,178,237,226,102,84,42,96,111,112,103,238,166,130,10,74,199,204,246,229,161,42,42,103,230,176,49,53,157,93,234,101,246,199,187,87,70,68,29,211,
206,41,134,91,99,214,233,222,189,187,37,32,192,59,216,108,85,10,108,158,118,197,102,243,20,47,109,54,231,235,15,91,238,26,108,54,15,187,167,173,160,98,115,221,33,54,207,2,59,223,223,223,125,253,204,102,
171,201,108,181,152,172,102,139,9,118,101,202,55,155,76,166,2,167,125,21,152,149,2,139,149,242,86,108,216,158,164,13,149,0,209,127,1,33,150,222,216,29,51,172,155,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::aiass_mono_typenschild_png = (const char*) resource_AiassAudioProcessorEditor_aiass_mono_typenschild_png;
const int AiassAudioProcessorEditor::aiass_mono_typenschild_pngSize = 6802;

// JUCER_RESOURCE: reset_png, 4767, "../images/reset.png"
static const unsigned char resource_AiassAudioProcessorEditor_reset_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,138,0,0,0,48,8,6,0,0,0,206,214,226,119,0,0,0,1,115,82,71,66,0,174,206,
28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,18,52,73,68,65,84,120,94,237,92,9,120,20,85,182,254,107,233,37,221,233,44,36,233,236,
11,9,73,16,144,85,65,222,176,40,40,62,23,28,28,29,183,225,205,155,209,153,199,12,31,136,136,35,50,15,5,117,192,231,6,184,224,2,46,32,227,8,168,163,207,25,71,36,160,12,178,171,64,64,20,2,132,108,157,181,
147,116,119,150,94,171,234,157,123,187,147,9,16,37,194,251,76,131,253,231,59,233,234,170,91,183,110,221,251,223,243,159,115,187,186,17,65,4,61,129,16,122,61,107,212,191,184,196,165,84,86,88,4,85,225,239,
61,91,139,224,175,169,162,173,115,174,58,130,179,130,10,93,106,54,162,198,78,224,239,52,73,15,185,176,208,158,248,159,211,146,248,142,179,196,89,141,102,221,139,75,29,90,121,105,108,219,182,77,80,108,
85,188,18,69,208,224,86,5,184,21,1,126,106,172,170,105,193,194,17,252,160,16,5,1,58,136,48,74,26,76,162,6,153,198,132,141,132,156,158,14,195,229,147,144,182,232,217,179,26,243,239,117,82,195,250,55,218,
28,207,60,110,10,16,57,32,40,112,4,4,84,5,2,176,169,42,92,126,21,94,94,29,145,132,94,132,179,227,96,4,231,8,141,254,36,141,145,67,64,20,77,222,24,89,66,134,36,34,67,214,33,86,84,136,48,57,48,141,189,2,
169,255,243,220,247,26,160,30,23,174,154,55,75,107,223,186,9,30,91,5,202,136,28,165,94,21,118,149,53,135,42,33,202,106,244,79,213,27,17,147,148,140,232,184,88,232,204,209,16,37,41,66,151,31,8,204,107,
168,138,130,64,123,27,90,29,78,184,26,234,32,120,221,52,105,5,144,99,129,168,2,137,178,128,66,189,132,52,157,12,61,121,24,211,184,171,144,241,88,207,60,204,25,11,53,188,177,194,99,127,121,153,65,169,170,
66,21,121,142,175,220,62,184,152,203,32,8,212,136,132,190,121,72,25,50,4,214,254,131,16,151,154,14,65,150,73,134,190,7,3,35,248,127,5,35,12,169,14,52,154,204,174,186,26,212,31,57,132,154,3,197,104,60,
118,20,42,141,31,131,149,198,109,144,73,135,68,38,77,25,89,232,191,253,235,51,14,215,119,22,168,125,97,169,226,88,243,146,216,82,93,133,131,30,13,149,196,88,141,36,71,150,140,72,31,49,18,57,99,198,193,
156,96,165,125,161,19,34,8,75,48,143,223,234,176,163,98,199,54,84,237,222,13,213,239,161,125,26,242,117,2,242,13,58,152,211,178,16,63,109,150,63,249,87,211,244,161,83,78,195,183,14,113,205,115,79,41,13,
107,87,138,206,74,27,246,182,43,112,105,42,191,96,98,255,1,232,119,213,36,24,99,226,200,173,73,20,54,5,179,157,8,194,24,52,110,124,172,52,146,166,214,54,148,124,178,17,117,95,21,115,239,147,40,2,195,163,
244,48,103,166,194,122,231,61,254,228,187,166,119,75,150,110,137,98,123,105,169,210,252,198,203,98,67,21,145,132,164,198,75,82,35,24,244,200,27,63,1,9,68,148,8,206,127,56,143,149,160,100,115,17,84,138,
99,98,73,138,134,154,100,196,100,100,34,105,250,125,222,148,169,191,49,134,138,117,226,52,162,212,172,91,227,174,91,246,168,209,89,85,131,253,68,146,118,114,35,146,209,132,126,19,39,33,42,49,145,78,136,
232,204,133,0,150,29,249,154,155,113,172,168,8,190,246,22,196,8,34,134,69,137,48,165,103,96,232,206,35,167,13,242,105,59,246,94,86,160,185,171,107,112,192,227,67,171,66,238,138,162,228,156,177,227,161,
143,235,19,161,200,5,6,38,61,254,22,39,78,124,182,5,154,219,139,4,138,130,11,141,58,24,211,50,49,124,215,55,39,13,247,73,111,74,254,120,183,102,255,243,107,40,245,107,168,165,168,153,33,121,200,112,152,
146,172,17,146,92,136,96,76,33,197,240,54,54,161,122,223,94,122,175,33,71,47,32,85,22,145,116,231,239,213,252,133,79,74,193,130,167,16,229,139,81,253,53,123,85,37,142,120,85,202,100,84,24,19,83,16,159,
155,71,245,69,4,231,194,134,6,103,121,5,220,181,54,176,69,151,193,122,25,166,204,12,140,218,121,184,115,216,59,55,14,207,155,169,213,146,55,41,243,41,112,104,34,68,98,90,92,191,124,8,146,46,84,34,130,
11,25,130,162,160,241,248,49,122,13,32,158,252,72,6,91,152,155,250,91,20,46,94,198,57,210,73,148,157,163,46,210,26,171,42,80,230,15,166,187,178,217,2,93,124,60,165,191,204,63,69,112,161,131,169,134,223,
225,128,191,213,197,73,209,207,32,32,38,45,27,163,119,7,189,10,255,119,104,193,92,165,246,213,231,197,26,63,200,155,4,137,98,48,69,65,208,25,73,194,212,83,4,42,130,11,14,228,11,52,202,122,16,240,194,211,
214,206,119,89,37,137,7,183,25,115,30,108,43,156,61,47,58,72,148,185,51,181,202,55,87,195,230,245,193,31,34,133,32,210,137,17,252,232,160,133,150,249,201,161,32,85,39,35,235,23,191,198,128,199,159,19,
56,45,254,57,114,144,230,180,157,64,45,201,142,22,220,197,87,97,67,156,137,224,71,2,22,100,116,124,28,35,64,225,68,177,164,101,225,242,61,135,5,161,108,237,154,154,175,238,155,150,226,9,8,104,102,203,
244,17,122,252,232,17,140,74,53,244,161,160,214,72,142,227,58,91,187,32,124,253,244,34,207,241,165,139,12,109,20,154,184,89,56,18,249,132,47,2,2,123,108,196,36,171,48,83,236,114,209,19,47,212,139,158,
230,38,131,166,8,96,202,36,10,42,52,202,163,35,22,49,182,60,162,146,107,81,232,159,167,169,81,47,130,242,103,133,197,173,26,37,72,228,102,116,36,61,225,96,114,55,251,186,218,153,142,71,236,220,140,113,
129,129,61,91,164,122,189,58,246,224,19,133,45,65,85,146,184,244,176,199,9,122,219,20,72,68,94,201,104,128,108,50,158,100,162,81,7,153,50,50,73,96,105,124,160,155,115,123,215,68,106,151,68,61,42,81,159,
178,53,168,238,202,156,15,38,49,119,194,238,64,149,16,240,121,204,194,231,15,204,210,202,222,88,129,64,152,197,38,166,126,185,24,253,232,82,200,150,232,208,30,230,244,52,40,237,94,180,86,149,163,122,75,
17,106,54,111,228,143,254,133,19,204,233,25,232,51,98,52,84,73,131,251,120,41,154,14,178,207,80,66,7,207,67,232,136,23,125,103,206,134,176,251,129,123,180,210,213,43,104,6,16,147,66,238,38,28,16,55,104,
24,46,95,255,55,72,177,125,120,63,51,150,119,128,17,70,245,120,80,186,230,53,20,63,182,0,154,223,123,206,43,200,29,181,159,105,245,232,76,229,210,38,223,132,81,203,86,242,190,60,241,230,235,216,251,208,
28,222,222,243,109,85,138,221,39,107,55,107,121,254,140,123,33,242,55,100,236,198,194,201,24,58,134,94,115,123,80,251,73,17,170,55,110,64,91,233,113,126,19,236,25,153,172,155,111,65,124,94,1,149,39,34,
157,114,62,55,146,40,110,221,29,235,106,84,134,61,8,46,246,160,44,43,195,31,26,239,166,44,253,131,40,83,61,100,208,201,208,72,63,123,116,253,48,54,206,13,246,183,107,238,61,218,241,85,43,161,167,104,133,
5,136,106,56,80,159,24,18,119,241,197,24,187,238,99,200,49,177,240,54,212,224,147,27,38,192,95,87,131,168,220,2,140,125,227,109,24,210,179,1,191,31,187,167,221,129,234,143,63,162,150,179,27,162,177,146,
13,136,27,50,12,41,151,79,132,41,43,135,162,118,5,109,7,15,162,114,227,135,112,87,151,145,230,82,25,86,142,58,64,151,156,140,244,43,175,69,236,208,97,208,69,199,243,103,50,218,171,202,224,60,84,140,154,
29,159,2,45,173,124,70,105,212,39,166,244,76,36,83,217,132,129,131,0,163,30,110,91,37,234,54,21,193,190,255,11,8,1,31,4,73,143,180,107,175,71,234,164,235,145,62,229,22,190,36,238,252,98,39,170,55,252,
157,119,182,235,155,131,176,111,221,18,140,7,131,243,32,172,193,22,92,3,212,86,47,17,226,162,89,247,65,216,65,68,57,186,106,5,204,52,9,24,81,120,33,254,191,119,97,25,124,49,198,172,221,240,47,162,92,51,
30,254,90,27,244,230,24,92,182,246,175,136,29,62,26,154,207,135,61,191,189,29,245,155,54,50,215,72,163,105,68,254,239,103,161,239,175,127,7,125,12,73,22,155,21,84,151,170,249,209,118,236,8,246,255,241,
94,52,239,222,197,247,233,147,172,184,244,185,149,136,27,61,134,2,80,29,95,55,232,152,65,129,246,86,236,186,117,50,154,247,127,73,251,68,196,95,49,17,67,22,44,134,57,59,159,123,20,6,18,106,40,174,38,148,
44,95,134,19,175,44,231,159,178,143,92,179,30,137,151,141,227,189,204,206,35,150,242,178,172,206,242,181,107,112,104,238,221,156,40,225,206,19,230,201,153,249,232,46,217,151,250,6,207,91,224,16,5,202,
44,184,30,81,235,217,58,10,203,159,133,48,48,114,216,156,213,29,205,54,152,204,208,91,44,48,13,30,66,1,99,14,4,85,37,15,83,75,82,116,52,216,110,202,253,51,174,255,25,10,126,119,15,244,241,9,240,80,192,
123,108,229,179,168,88,187,10,106,155,27,150,194,65,24,246,208,98,24,173,73,148,49,9,72,30,55,1,241,35,199,208,85,36,216,63,219,132,99,75,158,192,241,229,75,209,64,18,167,53,53,81,125,36,47,84,111,116,
118,54,134,47,124,2,209,185,133,148,38,182,163,250,221,245,188,92,219,137,18,34,113,60,46,186,123,14,82,198,95,73,253,167,34,80,81,14,31,145,153,145,129,145,195,231,112,16,65,143,82,80,123,12,129,250,
106,242,76,204,157,119,127,191,225,100,140,3,58,222,247,34,20,34,6,147,121,49,42,41,197,197,110,140,125,231,131,13,14,251,150,153,28,6,198,102,55,3,11,167,116,177,137,184,116,249,43,24,181,238,3,140,126,
97,53,100,107,50,124,77,13,56,254,226,18,4,202,203,105,6,139,148,58,155,145,117,219,237,16,76,209,80,90,91,80,60,127,54,74,23,207,199,145,249,115,80,181,254,45,146,28,13,81,3,134,194,58,126,2,159,209,
230,148,20,138,35,244,228,149,60,56,178,114,57,142,190,240,4,74,30,127,24,95,146,148,237,184,253,6,180,210,224,202,130,132,228,127,191,30,198,236,92,78,90,219,91,107,80,252,223,51,80,242,228,35,56,52,
255,126,40,158,118,8,230,88,100,222,54,21,178,162,208,53,231,224,240,147,127,130,236,231,189,140,186,13,239,97,219,79,199,99,235,13,227,112,236,185,167,33,83,31,119,119,175,225,104,172,255,249,247,128,
72,171,205,105,25,45,226,208,25,179,99,105,63,252,36,196,236,123,125,82,136,81,189,109,18,205,72,54,163,69,34,129,100,208,35,102,240,48,196,15,30,1,41,41,137,92,186,31,181,255,248,27,108,239,172,35,207,
18,128,158,110,38,42,49,25,150,236,66,162,21,201,130,215,141,196,81,63,65,223,233,179,145,61,109,58,116,105,86,126,227,146,78,135,196,161,35,137,0,128,183,182,142,199,56,162,222,132,17,139,150,98,196,
179,175,162,96,206,124,164,142,187,26,106,107,27,4,87,35,100,145,149,31,65,193,43,197,41,84,177,174,79,2,250,221,57,3,253,168,222,196,177,227,233,66,10,79,127,44,249,3,160,179,196,65,160,76,76,32,57,164,
70,83,79,82,251,253,1,128,210,119,129,76,100,153,25,187,175,83,238,51,156,205,75,125,105,201,204,66,191,201,55,102,113,193,141,74,207,130,91,83,120,103,134,141,177,134,209,43,251,178,59,147,142,154,183,
223,130,253,163,255,133,234,116,82,202,163,67,218,77,183,33,227,150,59,58,179,10,201,28,77,102,14,110,39,36,35,111,250,125,40,184,127,1,242,239,127,20,105,87,79,225,117,49,232,227,173,116,190,0,251,246,
79,224,220,185,149,194,136,0,12,20,244,38,95,51,5,121,51,231,96,240,75,175,99,228,234,181,176,12,26,14,145,125,245,210,146,192,207,19,232,156,212,159,222,66,245,61,68,245,62,132,220,105,179,33,71,199,
242,99,162,201,64,68,33,247,204,218,29,186,14,3,219,238,216,119,190,25,91,173,247,17,39,82,175,184,138,223,11,127,120,118,214,212,219,23,214,237,223,11,11,233,178,158,175,243,243,73,209,171,22,101,77,
69,218,205,191,128,104,136,130,223,97,199,129,153,191,65,205,95,223,130,226,243,162,15,5,140,162,209,72,113,67,30,26,55,125,4,205,233,130,20,23,131,244,155,166,66,32,61,13,52,213,195,246,151,215,208,180,
99,59,156,123,182,193,249,249,14,56,41,136,117,238,222,142,230,61,59,224,57,242,13,208,214,130,186,173,159,192,83,242,13,149,111,36,25,105,37,254,25,33,91,98,161,79,77,167,24,69,128,99,203,102,36,144,
244,152,242,242,41,5,80,81,255,225,123,176,23,125,4,199,231,59,169,206,109,112,236,217,78,182,11,174,221,84,255,151,148,253,120,219,96,41,24,128,164,107,38,51,53,132,171,184,24,77,159,110,36,201,97,234,
24,30,253,218,83,115,147,179,108,33,185,78,188,100,52,86,109,219,249,48,247,40,134,244,172,182,0,249,80,87,232,55,78,194,5,212,222,78,136,170,159,40,238,134,253,237,181,104,63,124,144,98,6,210,210,172,
44,164,220,112,51,29,36,53,106,172,167,64,178,58,88,150,102,68,253,251,239,162,252,169,5,56,241,228,163,40,123,234,79,56,177,116,17,106,215,173,129,147,210,94,129,234,146,163,162,33,180,182,162,254,189,
181,20,199,204,194,190,95,222,136,253,211,239,128,223,213,192,131,123,75,78,30,15,62,221,71,15,147,196,80,162,72,117,186,191,62,128,242,165,139,113,226,137,71,120,157,204,170,87,60,79,228,249,16,26,73,
21,255,60,36,160,208,43,19,64,137,188,76,44,151,59,214,243,108,150,158,79,96,92,136,202,236,139,241,143,45,225,13,231,30,229,149,13,69,139,111,43,204,93,216,226,112,34,65,71,129,33,233,19,187,177,174,
12,251,161,77,111,77,33,143,242,31,16,12,6,40,148,174,86,175,125,157,188,64,59,5,23,237,20,129,155,17,55,118,28,36,81,15,99,98,34,26,55,124,64,146,212,76,231,36,35,238,210,209,20,208,154,16,91,112,17,
20,175,15,250,62,73,136,165,56,35,99,234,93,232,123,207,60,184,14,21,195,87,89,6,235,213,215,34,111,238,67,144,19,18,161,143,142,129,41,57,29,49,63,25,143,248,209,99,73,114,244,104,249,106,63,26,255,254,
62,252,237,46,36,95,117,29,5,173,22,68,247,31,0,69,210,32,27,140,176,244,235,143,164,201,55,34,247,15,243,96,74,74,71,243,214,141,156,217,44,240,182,78,185,9,170,94,135,168,20,43,162,7,14,129,117,236,
68,34,178,29,190,186,234,110,239,53,156,140,101,132,236,231,75,106,40,212,202,191,241,231,88,189,99,207,195,140,35,220,163,48,100,94,55,69,245,81,64,107,247,243,100,153,127,35,94,238,69,99,68,165,151,
78,176,53,30,246,161,37,155,238,141,20,171,4,42,43,169,144,6,99,223,124,196,77,152,68,71,85,212,172,126,5,142,205,255,128,66,25,136,137,92,102,255,167,95,194,224,85,235,80,248,204,171,176,254,242,46,232,
82,40,53,166,217,78,42,0,24,163,16,63,102,34,242,30,92,140,1,175,190,133,129,175,189,131,188,25,115,73,234,76,80,154,155,209,244,254,59,20,192,122,224,41,222,139,242,151,151,65,105,105,132,68,1,115,254,
31,30,193,160,215,215,161,255,202,55,209,247,222,7,97,30,56,28,26,95,131,162,160,155,234,117,31,61,132,182,253,95,240,235,200,113,73,176,94,247,51,88,111,190,29,198,220,92,62,16,76,134,186,187,223,112,
48,214,126,22,181,55,248,84,24,178,51,145,52,98,148,135,245,61,3,247,40,12,171,183,110,127,228,230,194,156,133,205,205,14,244,145,101,24,200,181,179,116,185,183,76,142,50,194,152,156,10,79,69,25,124,71,
14,193,190,165,8,34,197,17,124,218,82,22,161,177,135,192,41,195,240,149,149,82,140,226,64,235,190,47,200,243,180,192,177,109,11,252,52,115,245,34,95,103,230,203,255,254,202,10,184,62,219,138,218,85,43,
224,216,177,149,178,29,242,76,30,31,101,37,36,103,94,15,68,146,11,182,120,231,39,249,114,237,218,142,170,103,30,67,243,167,27,248,130,25,27,112,215,87,251,224,57,88,76,228,37,50,80,28,39,122,252,80,236,
117,104,37,66,212,189,251,23,52,188,179,6,106,83,51,79,161,5,175,31,205,95,238,2,28,205,8,212,215,193,91,126,12,238,227,37,104,249,236,159,240,84,149,241,229,135,238,238,55,92,172,133,172,130,250,165,
224,198,91,241,111,115,30,232,252,174,14,245,250,191,240,229,170,149,158,207,159,121,202,32,217,202,49,208,72,29,205,24,214,75,96,193,160,38,235,248,243,16,92,243,3,62,150,112,146,55,32,189,167,227,10,
229,184,146,160,227,191,238,196,82,87,182,140,206,192,127,56,134,109,144,235,151,244,122,58,32,65,243,123,160,82,170,170,41,62,170,139,78,224,222,138,166,54,27,116,89,15,205,160,227,75,255,170,143,165,
183,126,42,203,156,111,135,179,13,118,2,91,80,19,37,61,151,66,86,86,243,83,123,88,157,236,186,236,75,252,140,148,188,28,107,101,48,112,13,80,251,249,10,45,3,121,106,65,99,143,69,176,214,135,39,88,132,
90,236,13,64,166,44,120,218,190,146,147,26,122,90,171,63,158,51,67,219,191,122,5,50,245,50,242,100,246,84,5,139,87,66,7,123,1,172,243,249,229,59,55,130,96,228,224,160,125,156,208,161,99,157,187,105,163,
99,187,227,24,223,215,81,158,192,94,58,170,228,187,216,27,218,232,216,119,242,193,224,185,193,13,50,218,238,122,93,142,80,57,6,126,157,208,54,3,39,115,215,29,225,4,106,27,11,214,15,81,76,103,167,236,110,
216,127,205,84,39,45,94,210,169,54,12,221,54,253,249,33,185,90,171,173,26,5,52,43,179,228,111,41,20,193,121,143,46,188,70,9,121,199,19,228,245,226,51,178,48,125,255,209,211,134,252,91,57,240,236,144,60,
173,217,86,137,193,148,222,229,80,38,196,92,106,4,23,14,216,104,178,193,103,227,122,196,163,161,212,167,32,54,51,27,51,139,79,150,156,14,124,167,179,96,100,113,84,217,208,151,136,50,192,64,122,78,165,
121,230,17,193,5,1,55,165,127,7,221,10,108,148,37,198,101,230,96,214,41,113,73,87,124,39,81,24,158,30,76,100,33,207,210,71,20,113,9,5,184,49,36,69,124,97,233,140,103,70,16,174,96,241,124,189,95,196,129,
118,31,156,20,132,199,101,100,226,222,3,199,191,115,68,123,52,220,31,80,128,123,116,211,70,184,42,75,145,67,153,196,64,242,46,38,30,204,119,200,17,171,166,235,54,67,68,170,122,7,167,246,127,215,247,2,
156,148,242,31,242,144,23,161,120,36,38,43,27,5,215,222,160,78,126,236,233,147,2,215,238,208,35,162,48,236,123,119,125,235,166,71,230,155,155,170,74,249,227,252,169,58,9,249,148,21,37,83,122,25,252,193,
191,208,66,86,40,173,100,191,30,25,193,15,15,129,173,254,133,192,151,22,40,221,242,81,138,94,231,11,224,104,64,225,95,27,102,207,216,244,159,48,9,83,150,44,239,241,248,247,184,96,7,62,90,180,176,221,99,
175,139,42,217,188,25,14,34,13,251,200,62,69,212,33,129,54,44,164,73,81,36,81,70,246,236,96,144,53,17,252,208,32,93,241,8,42,218,168,251,93,196,148,70,74,119,237,1,31,188,52,46,241,233,125,145,63,241,
74,100,95,54,166,253,146,91,239,48,135,206,232,17,190,55,81,186,226,29,146,36,145,2,161,35,155,139,208,100,171,224,129,46,211,63,134,72,146,212,59,232,88,235,233,120,141,207,200,64,225,196,171,1,89,135,
155,158,60,187,223,193,103,56,39,162,116,197,103,175,190,92,239,176,85,196,248,93,45,134,224,147,81,17,166,244,10,4,1,146,36,193,24,27,235,142,207,201,117,94,54,245,87,169,161,35,231,0,224,255,0,27,187,
71,175,237,76,220,236,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::reset_png = (const char*) resource_AiassAudioProcessorEditor_reset_png;
const int AiassAudioProcessorEditor::reset_pngSize = 4767;

// JUCER_RESOURCE: aiasshintergrund_png, 3258, "../images/AIASS-Hintergrund.png"
static const unsigned char resource_AiassAudioProcessorEditor_aiasshintergrund_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,4,0,0,0,2,18,8,3,0,0,0,101,13,77,27,0,0,0,1,115,82,71,66,0,174,
206,28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,2,205,80,76,84,69,117,117,119,112,105,87,157,146,116,153,142,114,154,143,115,102,102,104,120,111,85,182,167,123,201,183,135,205,186,137,202,
184,136,204,185,137,105,105,108,124,115,89,163,150,112,172,157,117,201,184,137,205,187,139,205,188,140,110,110,111,82,77,65,104,96,77,97,90,73,112,104,82,126,115,90,123,113,89,122,113,89,111,110,111,82,
77,64,102,95,75,99,93,74,96,90,72,118,109,86,123,113,88,121,111,87,121,112,89,104,104,106,131,121,93,178,164,120,168,155,115,171,157,117,170,157,117,195,178,133,213,195,143,211,192,142,211,193,143,212,
193,143,77,71,60,93,87,70,90,84,69,91,85,70,89,84,69,97,91,74,104,97,77,103,96,77,109,110,110,87,82,67,110,102,80,105,99,78,107,100,79,106,99,78,117,108,86,126,117,91,125,115,90,126,116,91,103,103,106,
131,122,93,178,164,121,168,155,116,168,156,116,190,175,130,208,191,140,205,188,138,206,189,140,108,108,110,95,88,70,121,112,87,116,107,84,117,109,84,116,108,84,129,119,92,139,128,98,137,127,97,138,128,
98,112,112,112,69,65,56,82,76,64,80,75,62,86,81,66,176,163,120,167,154,115,170,156,117,167,155,115,189,173,129,206,189,139,204,187,138,205,188,139,106,106,108,111,103,80,146,135,102,139,129,99,141,131,
100,139,130,99,156,144,109,168,154,116,169,155,117,113,112,112,67,63,54,78,73,61,75,71,60,76,72,61,86,80,66,85,80,65,112,103,81,147,136,102,140,129,99,142,131,100,140,130,99,157,145,110,171,156,117,169,
155,116,104,104,107,126,116,89,168,156,115,160,147,111,162,149,112,160,149,111,180,165,124,196,180,133,195,178,132,196,179,133,111,111,111,79,74,61,94,88,71,93,88,70,102,95,76,109,101,81,108,100,80,110,
110,110,85,79,65,101,95,76,103,96,76,101,96,76,112,105,82,119,111,87,120,111,87,136,125,95,184,170,124,174,161,120,177,163,121,174,162,120,198,181,134,215,198,145,213,196,144,214,197,145,109,109,110,92,
86,69,117,108,84,113,105,82,124,114,90,133,124,95,132,122,94,133,123,95,112,111,111,73,68,58,87,81,66,85,79,66,91,86,70,98,91,74,96,90,73,97,90,74,105,104,106,123,114,88,165,152,113,157,144,109,159,146,
110,157,145,109,177,162,121,193,177,131,191,176,131,105,105,107,120,111,86,161,149,110,153,141,106,155,143,107,153,142,106,172,158,118,187,172,128,185,170,127,186,171,128,119,110,86,159,147,109,151,139,
105,151,140,105,185,170,126,183,168,125,184,169,126,161,149,111,153,141,107,155,143,108,153,142,107,172,158,119,160,148,110,152,140,106,154,142,107,152,141,106,171,157,118,186,171,127,161,148,111,170,
156,118,187,172,127,105,106,108,160,148,111,184,168,125,181,167,124,182,168,125,161,148,110,151,139,106,139,129,97,136,126,96,137,127,95,137,127,96,160,148,109,153,140,106,136,127,95,130,121,91,130,122,
92,131,122,92,118,110,85,160,147,110,149,138,104,135,126,95,136,127,96,132,123,93,134,125,94,110,103,81,133,124,94,121,113,87,124,116,88,93,27,156,218,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,1,149,
43,14,27,0,0,9,118,73,68,65,84,120,94,237,214,251,247,216,3,29,199,241,79,150,91,137,150,203,104,115,173,49,33,182,18,202,165,137,41,125,163,11,185,204,165,175,91,69,247,146,138,66,46,185,79,55,148,138,
110,34,151,162,205,148,133,205,108,99,183,102,209,138,100,114,79,253,13,237,116,57,157,211,191,240,124,60,126,124,255,254,126,158,215,48,188,108,173,49,99,94,14,196,140,25,179,214,203,134,97,237,117,214,
93,111,253,87,188,18,72,121,197,250,235,173,187,206,218,195,6,175,218,112,163,87,143,29,251,26,32,100,236,216,87,111,180,225,171,54,24,54,222,100,211,205,198,109,190,197,107,129,144,45,54,31,183,217,166,
155,108,60,140,159,176,229,86,91,111,181,205,182,219,189,14,136,216,110,219,109,214,188,253,150,19,198,15,175,159,184,253,14,147,118,124,195,78,59,239,242,70,32,97,151,157,119,122,195,142,147,118,216,
126,226,235,135,241,187,238,54,121,202,155,222,188,251,91,118,7,34,222,178,251,155,223,52,101,242,110,187,142,31,246,216,115,175,183,190,109,239,125,246,221,239,237,64,196,126,251,238,179,247,219,222,
186,215,158,123,12,83,247,127,199,1,147,14,156,118,208,59,223,5,68,188,243,160,105,7,78,58,224,29,251,79,29,14,126,247,200,123,14,57,244,189,239,123,255,7,128,136,247,191,239,189,135,30,242,158,145,119,
31,60,28,118,248,7,143,56,226,136,35,167,76,158,2,68,76,158,114,228,154,183,255,224,225,135,13,83,39,30,117,244,244,99,142,61,238,248,15,1,17,199,31,119,236,49,211,143,62,106,226,212,97,244,132,19,79,
58,249,148,15,79,255,200,71,129,136,143,76,255,240,41,39,159,116,226,9,163,195,169,167,125,236,227,159,248,248,132,79,126,234,72,32,226,83,159,156,176,230,237,63,118,218,169,195,232,167,63,243,217,207,
157,254,249,51,190,48,29,136,248,194,25,159,63,253,115,159,253,204,167,71,135,47,126,233,204,179,190,252,149,179,207,57,247,171,64,196,185,231,156,253,149,47,159,117,230,151,190,56,156,119,254,214,187,
93,112,225,215,46,186,248,34,32,226,226,139,190,118,225,5,187,109,125,254,121,195,37,151,238,125,217,229,87,204,24,185,242,235,64,196,149,35,51,174,184,252,178,189,47,189,100,152,250,141,111,126,235,219,
87,93,125,205,119,190,11,68,124,231,154,171,175,250,246,183,190,249,141,169,195,181,223,251,254,184,31,204,184,238,250,31,254,8,136,248,225,245,215,205,248,193,184,239,127,239,218,225,199,63,249,233,13,
55,220,240,179,27,111,250,57,16,113,211,141,63,91,243,246,63,253,201,143,135,155,111,185,245,182,95,252,242,246,59,166,253,10,136,152,118,199,237,191,252,197,109,183,222,114,243,48,115,214,157,179,239,
250,245,111,238,158,243,91,32,98,206,221,191,249,245,93,179,239,156,53,115,24,189,231,222,251,102,207,157,62,239,254,249,64,196,253,243,166,207,157,125,223,189,247,140,14,51,71,30,88,176,112,209,131,22,
0,116,204,185,251,193,69,11,23,60,48,178,102,1,204,122,104,241,146,165,203,150,207,159,3,68,204,95,190,108,233,146,197,15,205,26,29,70,45,0,168,249,239,2,16,0,8,18,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,
8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,
0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,
19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,
8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,
0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,
19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,
8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,
0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,
19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,
8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,
0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,
19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,
8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,
0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,
19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,
8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,
0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,19,0,8,251,255,
0,44,91,62,127,14,16,49,127,249,178,255,5,96,246,194,165,22,0,132,172,89,0,75,23,206,254,119,0,126,183,96,201,162,21,243,238,159,15,68,220,63,111,197,162,37,11,126,247,175,0,220,185,120,225,210,101,15,
207,91,14,68,204,123,120,217,210,133,139,239,92,19,128,149,35,191,159,189,104,233,138,71,30,253,3,16,241,232,35,43,150,46,154,253,251,145,149,195,232,172,85,127,92,50,247,79,143,61,254,103,32,226,241,
199,254,52,119,201,31,87,205,26,29,102,142,60,241,151,185,79,174,126,234,175,64,198,83,171,159,156,251,151,39,70,102,14,43,159,126,230,217,231,86,255,231,10,68,172,126,238,217,103,158,94,57,204,188,101,
213,243,47,188,248,28,144,242,226,11,207,175,186,101,230,48,250,183,151,254,254,15,32,231,239,47,253,109,244,159,14,176,8,201,28,171,135,213,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::aiasshintergrund_png = (const char*) resource_AiassAudioProcessorEditor_aiasshintergrund_png;
const int AiassAudioProcessorEditor::aiasshintergrund_pngSize = 3258;

// JUCER_RESOURCE: init_png, 3610, "../images/init.png"
static const unsigned char resource_AiassAudioProcessorEditor_init_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,138,0,0,0,48,8,6,0,0,0,206,214,226,119,0,0,0,1,115,82,71,66,0,174,206,28,
233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,194,0,0,14,194,1,21,40,74,128,0,0,13,175,73,68,65,84,120,94,237,92,9,116,84,213,25,254,222,50,153,201,36,153,36,16,178,111,
24,98,0,1,17,45,96,169,136,20,81,123,68,173,93,92,78,247,234,161,165,90,186,91,79,181,182,181,155,93,212,42,93,172,61,88,212,99,235,210,106,109,75,171,177,88,78,81,90,219,82,20,168,73,128,36,102,33,43,
48,153,100,50,235,123,175,255,127,231,77,242,222,76,128,16,21,103,210,249,230,124,121,247,222,255,190,151,55,239,126,247,191,255,189,115,103,144,65,6,147,129,100,30,167,140,7,250,239,244,245,105,29,121,
154,164,137,252,11,193,70,244,70,186,232,194,175,251,210,25,76,1,26,116,84,59,106,176,52,123,181,200,59,141,44,84,171,13,131,87,21,173,159,37,10,166,136,41,181,230,150,190,187,188,93,70,107,254,14,255,
115,232,215,186,196,85,52,205,128,20,144,32,19,35,17,29,134,110,152,181,51,56,149,144,100,9,14,135,12,221,101,192,112,27,112,168,18,12,106,138,89,106,5,222,238,92,139,91,203,239,153,82,155,159,212,73,
79,14,60,232,223,236,189,195,221,31,237,66,152,180,43,121,37,248,187,162,8,116,235,208,124,58,16,146,132,162,117,74,202,82,198,163,188,21,208,73,21,170,66,254,220,160,231,159,77,66,241,40,112,85,202,200,
171,116,64,203,215,80,165,214,98,169,251,2,124,165,236,222,147,106,160,73,87,254,118,215,70,99,231,232,115,232,14,118,96,164,61,138,112,171,142,240,32,121,17,186,2,83,163,27,116,234,46,148,120,74,144,
151,155,143,28,71,46,20,89,57,73,41,102,48,101,144,215,208,116,13,163,81,63,134,71,134,208,231,235,67,80,10,144,114,200,203,203,212,113,137,106,145,4,119,131,130,236,114,21,179,178,42,176,194,125,33,110,
169,156,156,135,57,97,165,71,7,126,30,220,50,120,183,115,128,134,152,64,151,14,223,222,48,224,139,157,38,145,66,106,103,214,97,94,233,153,152,87,188,0,229,5,21,80,36,21,6,135,43,25,129,188,53,32,193,72,
212,63,53,35,138,94,95,15,94,237,223,135,87,123,94,70,219,225,253,228,233,201,213,19,156,197,18,114,22,56,32,23,25,40,85,171,177,117,238,127,79,216,90,199,173,176,165,247,46,237,17,239,207,228,67,195,
52,212,236,49,48,218,169,33,68,42,200,85,93,56,171,98,41,150,215,174,68,113,78,49,185,59,243,132,12,82,18,20,182,160,127,100,16,255,236,216,129,221,93,255,64,64,15,194,144,12,184,234,37,228,214,59,80,
153,83,141,15,22,110,140,92,85,178,62,203,60,37,9,199,20,202,3,61,63,208,30,30,184,95,30,24,234,70,96,23,9,132,98,16,30,98,78,47,154,143,149,115,214,34,223,85,0,85,87,16,145,99,179,157,12,82,23,220,200,
220,86,81,106,171,32,13,77,207,183,60,139,125,125,47,11,239,163,22,1,249,75,178,80,152,83,134,235,139,63,19,185,166,100,195,132,98,153,80,40,155,187,239,210,30,61,122,159,220,51,208,141,161,93,97,200,
20,164,42,82,22,206,171,91,141,250,153,243,205,90,25,164,51,218,134,90,176,189,165,145,188,75,0,142,124,26,138,22,171,40,243,84,225,186,89,95,8,189,191,244,58,151,89,109,12,73,66,121,170,231,161,192,189,
125,183,187,14,15,245,96,104,119,24,145,81,3,110,197,141,243,201,139,20,102,23,101,102,51,211,4,60,59,242,133,143,98,199,129,70,58,14,195,233,145,225,58,75,70,169,187,18,141,139,155,147,26,57,169,96,205,
174,211,141,193,0,137,228,149,48,28,35,10,12,154,185,44,175,61,31,133,89,51,142,51,80,101,144,150,160,161,199,23,25,194,139,109,127,69,212,8,65,154,105,32,183,193,129,114,87,21,254,180,228,85,91,107,219,
50,95,111,249,180,241,219,193,205,8,181,26,8,244,70,69,217,194,146,37,40,114,23,103,68,50,13,193,77,170,145,90,124,161,35,216,123,104,23,165,12,56,106,37,56,203,100,92,61,235,147,250,205,245,223,167,249,
83,12,182,230,191,232,95,115,141,238,193,78,132,154,117,68,12,29,37,174,82,212,20,214,65,230,197,155,140,80,166,45,116,18,72,207,80,7,122,3,221,136,82,218,179,72,69,49,15,65,203,154,198,90,125,44,113,
91,211,141,198,111,122,55,35,216,78,179,24,175,12,93,54,80,91,80,143,44,201,97,214,200,96,58,67,151,52,180,31,62,128,168,20,133,92,8,56,43,21,92,83,126,61,110,105,184,91,104,100,76,40,23,239,156,103,116,
30,238,64,128,133,66,200,85,243,224,113,20,82,140,146,89,36,249,127,0,47,249,15,71,188,68,159,80,133,99,142,132,26,79,13,158,61,55,230,85,196,159,239,237,187,73,123,176,119,147,172,247,0,65,111,76,40,
78,103,54,178,37,23,41,141,29,211,255,23,138,178,139,177,162,242,157,112,169,46,28,56,218,132,127,247,238,52,45,211,19,44,2,217,144,17,68,8,193,224,168,40,115,21,43,34,184,253,84,229,173,254,13,13,55,
231,10,161,124,109,223,141,198,83,157,91,224,239,14,67,143,136,122,52,13,150,99,137,20,197,199,23,109,68,93,65,3,36,186,207,221,125,47,225,209,166,205,166,229,245,227,209,203,183,225,172,146,101,102,14,
88,241,112,29,6,70,123,205,220,244,134,78,177,41,67,114,2,217,101,42,222,91,253,81,220,54,255,222,216,162,200,165,219,23,24,173,67,109,8,245,106,177,79,29,185,34,31,98,201,148,68,211,199,71,198,196,124,
208,219,140,75,158,56,75,164,223,8,188,120,109,27,205,244,74,204,28,112,249,111,151,227,213,35,175,152,57,64,145,20,204,157,185,72,164,247,13,254,71,28,167,5,104,232,224,45,9,140,8,197,44,44,148,170,188,
106,52,174,106,146,228,39,219,31,234,57,48,220,10,57,204,226,144,32,43,49,242,190,6,206,167,42,19,49,81,157,169,178,229,232,62,243,170,64,32,58,138,14,122,62,86,251,179,239,223,131,39,175,120,65,240,215,
235,182,217,108,105,77,106,115,209,254,188,167,133,58,131,30,54,208,229,239,16,207,65,218,244,223,111,5,55,29,252,150,19,126,82,83,128,123,75,10,187,17,11,246,124,200,55,230,81,90,135,154,177,238,169,
179,69,250,141,128,67,118,96,69,249,26,100,41,78,188,60,240,18,250,70,15,153,150,24,254,250,190,3,152,229,46,21,233,166,35,123,240,158,223,159,43,210,211,9,188,109,36,234,214,225,200,145,113,251,188,159,
244,203,222,224,17,167,74,195,13,15,77,81,89,71,148,43,164,1,173,48,38,176,31,143,146,164,78,88,30,103,64,11,227,185,206,173,216,218,254,36,186,253,221,73,246,108,71,142,249,159,105,28,87,221,73,246,233,
64,94,30,1,135,43,154,129,163,193,195,89,210,55,118,125,198,248,213,107,247,67,11,232,208,163,220,155,82,59,136,141,99,239,181,227,30,229,224,80,19,214,253,225,28,145,102,172,170,184,4,159,92,248,101,
228,168,185,216,53,176,19,95,253,199,13,88,90,178,18,239,173,251,48,150,149,174,194,172,236,18,113,206,182,174,63,226,174,221,183,153,103,141,227,19,11,110,194,154,170,117,194,163,116,13,183,99,195,246,
247,137,242,159,174,250,13,170,114,107,113,90,126,131,200,51,120,179,80,151,191,29,254,200,8,162,52,19,184,250,153,85,166,37,189,161,233,6,52,135,14,197,41,97,99,253,173,126,153,61,137,78,170,97,40,10,
47,188,144,96,210,128,137,176,218,10,92,51,176,112,230,217,162,65,153,235,23,124,17,191,92,179,21,151,206,190,74,136,132,81,151,63,23,215,159,241,121,220,179,242,17,219,185,204,202,188,90,204,159,177,
24,115,242,231,97,85,229,37,99,229,103,80,153,85,36,12,222,197,87,147,87,71,245,207,196,162,162,115,232,127,207,180,93,43,206,40,5,135,19,149,167,42,37,197,128,2,25,78,67,161,56,45,152,35,179,219,102,
114,48,67,93,52,125,152,8,171,205,18,103,45,46,90,134,141,103,38,123,141,56,214,84,93,134,183,149,156,103,63,63,17,102,121,88,167,136,255,4,240,69,189,246,107,153,148,197,126,196,228,242,84,38,253,21,
218,224,157,113,178,164,83,65,84,130,174,232,48,84,18,77,154,208,6,122,71,54,187,101,53,57,62,60,53,118,63,141,143,253,109,29,214,254,121,33,30,107,123,64,148,197,113,113,237,149,182,243,169,35,217,16,
47,191,234,249,11,112,201,51,139,105,216,30,223,172,213,229,127,13,151,53,46,19,124,215,51,75,16,81,34,182,107,165,43,57,70,209,200,179,68,34,244,60,248,145,88,61,74,58,49,17,199,179,63,223,179,21,55,
254,253,26,188,216,191,13,29,254,86,124,115,247,231,17,210,130,166,21,168,112,87,31,243,92,70,188,124,32,212,131,182,145,253,34,22,137,35,172,135,208,226,219,43,216,58,210,108,187,206,116,32,107,131,247,
32,145,67,164,57,179,193,127,99,49,138,72,164,1,73,222,148,176,32,177,142,5,155,247,255,200,102,11,27,33,180,143,28,16,54,70,69,78,141,205,46,104,69,130,45,98,25,130,68,58,193,62,17,233,89,67,85,249,225,
79,108,79,53,202,42,29,232,168,104,164,13,210,135,8,102,181,232,184,71,225,239,132,240,27,74,117,218,64,89,171,45,113,226,166,76,240,158,70,181,17,211,74,118,73,177,217,18,119,241,89,109,204,168,49,238,
81,56,157,104,159,136,10,145,23,179,38,186,151,148,35,47,186,209,51,32,103,34,38,58,46,217,237,149,29,146,83,172,161,112,33,175,163,240,216,164,75,169,207,68,88,109,230,167,16,99,160,119,101,179,51,173,
224,14,98,181,241,14,117,43,172,54,102,36,97,232,73,180,31,139,124,99,218,4,229,41,71,210,128,226,160,14,66,193,154,164,73,98,43,172,92,156,93,234,99,213,136,200,150,34,93,86,60,171,63,213,105,5,59,0,
171,45,209,163,136,158,108,177,51,19,156,70,130,205,110,180,218,152,86,143,66,79,46,201,126,44,26,170,46,122,236,68,182,84,163,232,60,164,9,126,149,229,84,14,203,215,45,254,108,62,127,47,71,137,200,66,
36,58,205,159,133,87,73,113,90,193,57,171,141,134,84,27,172,182,56,109,74,161,164,213,150,228,81,44,54,102,196,34,20,79,86,65,146,253,184,76,147,231,43,24,2,202,243,170,113,241,156,119,87,139,71,90,145,
93,141,80,64,19,42,74,23,38,98,178,182,73,213,17,17,221,56,108,54,98,79,176,211,180,0,115,114,231,99,190,103,177,40,119,200,89,73,117,211,149,154,70,195,106,88,195,121,101,23,138,247,41,132,114,94,21,
101,120,47,53,81,40,62,13,104,3,123,4,139,45,209,163,240,186,138,213,206,180,106,129,31,140,213,150,228,81,44,54,102,71,224,160,105,137,225,241,115,95,192,131,75,27,177,251,194,163,240,184,102,36,213,
79,71,146,219,132,76,241,137,170,199,190,15,22,243,40,206,106,191,28,149,17,244,141,47,36,77,119,80,191,49,83,39,143,199,187,237,11,118,140,37,5,177,79,144,105,34,41,142,233,142,16,105,161,58,123,54,110,
59,255,78,241,160,196,187,218,176,252,75,185,229,158,42,232,94,154,38,211,139,87,230,192,107,42,41,204,160,22,160,68,12,58,175,148,90,108,214,149,89,94,48,18,239,210,98,103,106,244,138,195,33,59,109,54,
254,172,35,14,111,228,176,205,198,220,59,186,11,183,183,124,22,254,232,48,87,25,195,33,26,146,188,122,114,253,56,57,168,158,168,60,149,40,115,32,27,161,128,214,39,99,101,117,108,216,97,140,117,171,219,
183,125,73,123,232,149,77,50,74,233,193,18,197,167,200,83,239,116,83,7,183,241,36,255,111,142,146,39,142,126,205,222,96,140,66,181,72,252,178,2,219,2,186,63,86,152,112,237,34,71,108,79,201,96,36,121,155,
163,83,118,9,138,207,110,142,1,133,94,179,221,13,40,117,86,146,72,94,67,107,160,217,180,28,3,252,113,9,137,120,92,198,41,6,190,49,234,35,145,14,3,69,193,42,124,225,220,175,6,175,92,248,129,108,54,217,
154,100,197,47,234,141,67,254,14,184,231,169,80,121,203,69,138,11,229,164,241,102,94,123,18,136,104,212,1,217,171,164,48,34,212,47,134,155,194,248,224,130,245,248,246,218,77,99,55,107,187,235,135,255,
125,127,240,190,127,254,192,217,163,188,134,156,51,84,10,242,76,195,41,4,143,20,111,214,255,125,51,175,61,25,240,174,177,84,222,65,200,35,248,240,203,81,148,171,213,216,177,190,197,118,163,182,200,235,
3,103,95,239,90,57,251,66,132,142,232,8,180,235,98,15,37,175,114,242,44,226,84,145,199,73,107,158,188,117,172,220,82,38,200,229,68,182,91,109,156,31,43,179,212,97,242,15,204,196,109,113,187,53,205,54,
91,153,201,120,62,126,157,120,93,107,29,107,189,120,93,171,141,207,225,24,197,86,150,34,20,247,76,2,246,53,71,16,26,209,176,122,246,165,73,27,126,248,237,38,225,109,155,78,51,6,70,14,193,115,186,3,36,
174,99,212,202,32,237,193,67,177,137,225,150,40,66,109,58,42,11,171,241,226,134,253,73,45,126,76,9,44,189,167,206,232,62,218,137,130,69,14,184,106,101,225,54,51,152,70,48,227,53,110,215,72,179,129,64,
171,134,170,252,26,236,184,209,62,228,196,113,92,95,193,98,233,247,118,195,57,91,134,123,62,207,157,104,100,224,105,84,6,211,2,225,0,9,100,143,134,209,110,13,213,5,181,216,185,113,98,145,48,142,43,20,
198,210,31,146,103,241,118,34,107,134,12,207,57,42,224,33,189,240,216,102,218,51,72,63,240,110,1,185,95,198,240,43,97,4,135,116,148,23,84,225,165,207,29,60,174,22,78,40,20,198,205,79,223,96,108,223,255,
44,218,124,173,200,171,205,162,25,17,185,21,55,139,37,38,23,177,72,103,73,51,82,120,181,96,90,35,241,249,91,243,156,142,146,48,70,247,105,8,119,235,168,240,212,224,162,211,47,211,191,190,238,135,39,28,
39,38,37,20,198,239,254,243,216,200,29,207,221,146,115,224,72,43,20,135,4,87,153,130,156,122,5,121,37,89,226,7,255,196,141,144,167,225,61,12,12,254,245,200,12,78,61,156,60,181,51,161,115,19,240,42,117,
88,70,168,47,138,145,253,154,248,218,112,121,110,13,86,207,93,139,239,94,241,227,73,183,255,164,43,198,241,253,63,125,109,180,63,216,151,253,66,203,95,112,208,219,202,202,128,167,212,1,101,166,4,61,79,
135,154,45,195,233,146,197,15,178,100,112,234,161,82,147,134,130,58,120,49,90,242,73,136,28,214,49,50,24,134,17,146,81,87,56,27,239,168,95,131,229,53,239,24,189,242,156,107,199,191,197,54,9,156,180,80,
172,184,233,137,27,12,131,188,201,246,230,70,116,28,233,16,129,46,143,127,140,20,94,87,154,214,136,79,78,227,191,253,91,86,88,137,213,13,23,193,65,175,239,188,103,106,191,131,207,120,195,154,115,203,223,
238,235,239,244,118,120,70,35,195,78,222,25,149,137,81,222,26,112,28,162,80,143,205,115,229,7,106,10,79,27,186,102,249,71,202,76,211,235,0,240,63,102,101,166,27,186,87,201,90,0,0,0,0,73,69,78,68,174,66,
96,130,0,0};

const char* AiassAudioProcessorEditor::init_png = (const char*) resource_AiassAudioProcessorEditor_init_png;
const int AiassAudioProcessorEditor::init_pngSize = 3610;

// JUCER_RESOURCE: sidblaster02_png, 32883, "../images/SIDBlaster-02.png"
static const unsigned char resource_AiassAudioProcessorEditor_sidblaster02_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,159,0,0,0,125,8,6,0,0,0,188,151,177,105,0,0,0,1,115,82,71,66,0,
174,206,28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,53,211,0,0,53,211,1,12,33,67,119,0,0,128,8,73,68,65,84,120,94,237,189,7,160,36,87,121,37,124,42,116,206,241,229,28,
38,71,105,70,89,8,17,5,34,59,39,204,154,197,96,108,48,32,1,194,94,255,187,235,127,13,14,191,215,228,108,27,140,1,27,147,115,20,18,202,210,72,154,28,222,188,156,58,231,84,221,213,93,255,249,234,205,16,
108,176,229,0,8,152,43,245,188,126,221,253,170,170,239,61,247,124,231,220,251,221,91,184,84,46,149,31,87,81,46,252,124,92,148,179,199,239,83,13,163,229,235,89,138,203,233,241,26,78,167,167,57,61,187,219,
188,240,246,165,242,83,86,30,55,224,91,158,63,161,149,242,217,177,78,199,120,137,101,41,55,232,46,247,3,186,195,249,105,151,211,245,168,219,231,43,143,142,109,187,4,194,159,178,242,184,0,223,153,19,247,
105,157,118,103,182,90,42,190,180,86,46,253,90,187,109,68,201,124,93,175,63,120,222,235,243,127,194,233,241,124,193,233,112,159,118,56,244,210,196,244,238,238,133,63,187,84,126,194,203,143,29,124,139,
115,143,234,229,98,126,91,189,90,251,239,141,90,245,151,218,70,59,217,235,117,121,93,22,84,85,133,203,235,109,122,124,193,51,110,183,247,211,14,167,227,43,46,143,119,222,31,12,23,134,134,167,46,49,225,
79,120,249,177,130,239,252,217,135,245,122,185,56,211,168,215,126,175,94,171,255,2,217,47,38,175,91,189,30,44,75,30,22,47,208,226,85,170,112,123,189,45,143,207,127,204,229,246,126,222,227,15,124,141,207,
207,186,220,190,226,224,224,88,207,62,216,165,242,19,87,126,108,224,59,127,230,33,71,41,151,221,222,106,53,94,100,52,91,191,104,154,221,1,27,107,23,138,0,79,64,40,224,235,9,24,249,154,166,105,61,50,95,
137,224,123,196,229,246,124,205,233,116,223,206,223,231,8,204,242,200,232,76,55,189,126,62,196,191,139,242,47,115,3,195,179,213,173,35,93,42,143,215,242,99,1,159,0,175,92,202,111,175,151,203,191,109,24,
198,207,17,92,73,5,10,175,69,181,223,87,248,84,0,71,4,162,39,32,228,67,158,19,141,242,38,52,221,97,17,116,101,183,199,243,128,211,237,253,170,219,235,187,147,218,240,148,203,161,77,243,239,174,228,135,
238,208,157,206,115,4,110,88,81,212,106,162,127,188,109,31,248,82,121,92,149,31,57,248,206,28,191,219,89,175,85,246,54,106,245,23,26,173,214,243,201,110,3,170,166,217,209,85,216,77,138,66,16,218,204,247,
93,15,1,223,197,139,21,64,74,209,117,221,116,184,220,25,135,219,243,128,219,227,189,61,16,8,170,14,93,31,37,120,63,74,115,50,215,49,140,103,105,154,227,78,135,195,189,210,55,54,117,41,60,63,206,202,143,
20,124,139,231,142,184,74,133,60,129,87,123,73,219,48,158,77,12,197,85,77,85,133,243,190,13,50,41,214,22,3,74,145,215,108,22,252,238,194,223,237,64,44,225,152,239,171,154,222,38,8,179,30,175,183,230,243,
249,51,100,197,191,240,186,221,167,234,149,202,109,186,238,124,143,211,229,125,104,120,118,231,37,151,252,56,43,223,105,229,31,114,57,123,234,62,39,67,237,94,163,213,248,239,221,174,249,108,77,211,19,
78,183,75,165,131,101,24,213,190,243,80,249,208,84,209,119,182,219,37,43,10,195,217,191,95,124,77,177,159,235,2,58,251,247,158,217,113,26,141,234,80,173,82,216,86,41,231,247,208,192,252,106,179,101,252,
34,65,59,67,120,6,123,60,204,133,203,184,84,30,71,229,71,194,124,11,103,143,56,42,149,226,65,163,89,255,221,142,209,126,26,79,27,39,104,40,199,136,137,11,172,199,127,46,252,148,191,144,203,98,36,182,127,
181,95,216,122,191,183,245,25,251,33,175,9,243,245,186,252,93,30,52,39,60,158,238,112,89,100,186,58,193,89,102,8,246,184,3,161,255,215,237,13,124,72,119,56,114,35,99,211,23,14,118,169,60,30,202,15,157,
17,54,87,79,145,170,172,9,226,226,215,187,166,121,51,217,40,65,36,9,228,248,46,117,28,99,174,205,112,10,89,13,26,127,231,115,155,253,248,32,19,218,239,241,161,145,253,84,249,253,226,131,236,40,172,40,
44,200,15,240,53,29,14,167,75,24,81,233,154,29,191,209,170,15,53,154,181,176,97,52,127,195,234,117,126,14,189,142,103,235,138,46,149,199,75,249,161,131,175,215,181,220,116,178,7,220,110,239,147,131,145,
72,200,235,247,10,86,104,26,182,216,138,255,216,62,87,81,249,41,33,66,121,46,196,199,231,36,199,111,135,91,121,124,119,248,149,135,20,179,99,242,16,252,156,195,77,128,58,109,16,110,1,83,5,77,135,170,43,
214,110,165,219,253,45,151,209,121,74,241,220,201,129,242,234,210,15,253,59,95,42,143,173,252,208,27,66,97,243,171,154,211,165,233,46,175,203,233,85,130,161,40,34,177,36,188,94,159,13,178,111,135,85,1,
220,69,16,94,0,160,205,120,23,128,246,61,207,5,165,12,185,165,98,30,169,204,38,58,221,174,253,186,132,93,155,73,9,64,183,219,3,143,199,3,197,104,233,70,106,115,183,181,120,254,207,148,165,243,111,234,
21,50,79,46,47,47,94,98,193,199,65,145,38,255,161,150,204,198,146,211,236,154,79,162,201,120,83,175,215,221,211,53,13,226,161,102,131,171,75,208,52,235,117,152,102,215,190,16,91,243,217,8,20,240,17,68,
2,178,11,253,67,126,183,223,167,238,235,116,58,200,164,55,176,188,188,128,80,36,129,209,209,113,184,220,46,27,160,18,182,29,46,23,220,78,39,172,74,25,213,165,69,40,237,54,198,28,94,203,215,44,55,21,127,
96,169,55,52,254,13,43,18,253,71,248,131,71,84,111,176,25,28,25,187,164,5,127,12,229,135,206,124,212,106,29,221,225,76,57,28,238,156,174,187,225,116,249,225,114,5,209,110,119,9,186,30,219,63,132,64,40,
68,163,224,176,129,35,32,187,248,16,86,148,240,76,205,72,224,241,39,205,69,207,50,65,215,140,213,213,37,120,188,1,12,13,13,243,152,46,126,94,216,81,39,8,61,100,61,23,122,229,2,106,103,78,160,181,60,143,
94,189,136,86,48,166,24,125,147,222,94,171,187,93,59,115,244,183,148,185,83,239,237,22,242,127,104,150,242,135,42,203,243,174,11,151,123,169,252,8,203,15,157,249,164,228,50,235,211,100,173,255,221,237,
118,126,145,102,64,85,168,209,76,211,68,181,90,68,173,90,176,89,43,16,140,192,104,54,208,168,87,200,136,91,227,119,2,64,187,144,151,100,170,77,74,143,108,89,46,151,97,144,205,36,116,123,61,190,11,102,
68,135,147,134,195,229,112,162,83,201,161,177,254,8,172,86,10,173,150,137,112,196,75,160,142,195,169,141,129,208,135,94,47,163,211,42,89,85,127,160,174,58,221,167,188,201,129,127,112,133,163,159,82,20,
107,37,178,125,239,165,132,133,31,81,249,209,128,47,187,49,204,31,175,39,160,94,98,118,12,71,183,35,179,93,114,106,133,12,216,70,38,179,138,86,179,130,112,56,14,159,47,0,163,213,96,56,174,194,36,208,236,
66,240,217,23,74,0,182,25,114,229,229,111,155,17,49,33,182,198,115,195,234,26,40,175,159,69,57,117,6,225,4,181,229,200,229,208,125,253,36,78,3,181,204,105,84,214,87,16,119,142,192,173,5,145,135,137,213,
141,53,184,121,216,169,241,9,51,26,75,158,119,232,250,223,43,46,207,39,85,175,111,81,247,250,154,254,241,75,67,51,63,204,242,163,2,95,152,44,246,18,130,239,127,90,189,174,199,36,248,204,182,177,197,102,
154,78,48,153,52,15,89,100,211,235,34,252,144,72,246,193,227,246,162,94,171,216,224,148,215,132,5,77,195,32,32,123,116,178,78,251,247,11,142,150,97,215,73,96,118,176,124,252,62,100,22,143,34,49,16,196,
232,254,103,194,159,216,1,205,41,240,178,96,52,170,56,113,223,23,81,90,88,195,174,129,73,180,141,54,42,100,89,247,216,24,38,102,183,195,95,200,90,174,244,70,73,137,245,63,210,27,24,249,39,203,233,250,
50,193,190,233,240,135,140,240,142,221,151,166,230,126,8,229,135,174,249,46,20,163,215,235,21,9,62,147,214,87,6,130,225,36,184,196,157,182,201,114,162,229,132,245,198,198,119,48,108,122,112,230,248,81,
204,207,157,230,213,105,240,81,19,122,124,62,187,155,152,228,33,85,119,124,123,40,101,235,161,161,69,96,61,124,207,215,113,215,87,191,140,141,181,53,98,213,128,210,107,16,220,45,178,30,205,140,213,163,
73,105,227,196,74,13,119,158,75,225,68,174,128,141,98,142,44,168,97,182,175,15,113,151,27,190,205,37,69,63,243,112,164,185,60,247,196,226,218,242,159,84,211,27,111,107,55,106,191,108,54,107,51,249,147,
143,120,243,115,39,126,36,29,245,103,169,252,168,192,39,131,113,53,251,39,139,61,36,66,198,211,93,30,232,4,83,219,104,162,195,135,211,233,64,95,34,137,137,225,49,212,10,5,156,122,240,62,164,22,22,161,
211,136,120,60,126,120,125,126,219,201,10,232,100,0,218,65,147,98,154,6,30,121,248,126,124,241,139,95,199,153,133,13,228,203,13,148,242,89,52,179,199,160,214,78,67,111,175,66,55,215,97,22,31,65,53,51,
71,7,92,131,153,207,193,138,68,224,36,227,81,116,162,245,149,79,195,120,248,65,52,188,12,199,225,152,178,144,73,133,87,87,150,158,94,43,151,254,184,211,168,253,47,171,92,188,89,41,20,199,138,199,142,120,
74,103,46,129,240,191,170,252,72,192,23,79,12,118,248,163,104,3,208,30,78,33,0,25,54,53,2,207,77,141,231,11,132,225,18,227,64,80,138,235,13,4,130,48,107,13,120,187,26,54,239,252,38,142,126,238,211,40,
45,46,192,195,207,203,123,2,66,23,217,170,215,237,224,248,163,71,240,249,207,127,21,167,231,214,0,186,233,186,225,192,201,83,25,172,47,205,161,83,62,77,176,29,69,135,192,67,245,52,250,213,44,226,173,26,
102,90,117,236,136,69,17,11,71,97,45,206,163,122,223,125,88,95,203,32,221,209,25,189,45,168,12,239,134,174,43,166,207,63,72,198,126,62,29,206,155,144,75,255,15,164,215,111,70,165,48,90,62,123,204,85,94,
62,127,9,132,255,201,242,3,43,240,222,251,238,212,72,56,206,66,177,224,158,159,159,15,181,90,237,96,60,150,172,13,15,14,167,162,177,120,243,178,131,151,253,171,98,252,147,159,249,132,242,188,103,63,255,
219,159,201,166,215,14,240,108,127,194,83,222,72,220,57,47,96,208,214,125,91,15,190,192,240,219,237,24,168,147,185,30,252,220,39,225,10,196,224,94,56,133,74,54,131,94,32,4,255,212,20,6,14,92,134,192,224,
32,93,108,19,39,143,61,140,79,127,226,83,120,244,248,28,36,53,102,223,228,40,66,30,13,229,74,26,253,81,21,219,39,34,8,134,124,40,25,64,41,85,69,126,181,6,143,150,192,179,246,237,64,52,17,3,3,63,58,39,
143,97,113,61,135,227,26,89,120,104,4,147,131,125,72,6,253,8,108,223,142,224,244,12,116,130,81,89,89,134,82,206,118,85,127,112,73,241,121,63,143,96,248,43,74,52,241,96,169,83,206,142,239,123,194,191,90,
15,151,202,15,46,255,2,124,127,251,129,119,107,169,76,46,94,46,87,119,25,70,103,103,177,88,140,150,138,197,81,186,201,145,190,100,223,70,52,22,253,250,192,192,192,3,179,51,211,171,35,227,35,173,201,209,
239,117,132,31,252,208,251,212,84,58,59,208,108,119,167,34,193,224,106,200,239,93,123,225,11,95,220,201,101,214,35,252,224,51,249,145,151,240,113,152,30,192,101,159,93,80,120,17,137,4,97,167,90,70,227,
204,9,164,190,252,89,84,219,212,107,100,169,142,152,19,95,16,21,134,102,117,96,0,222,237,219,208,224,103,191,241,141,59,112,215,61,15,161,222,236,192,195,144,61,211,23,133,199,1,84,232,156,253,142,30,
53,29,208,165,80,92,169,91,240,193,137,164,83,199,224,212,118,60,241,186,67,240,151,43,72,46,47,146,21,11,184,223,29,195,29,141,46,234,236,0,73,143,11,7,135,135,112,217,204,4,18,30,29,10,255,190,163,56,
96,121,188,80,169,61,123,245,116,29,17,239,57,35,22,253,92,181,93,191,39,28,112,173,57,3,3,203,170,211,87,139,143,28,188,4,196,127,71,249,30,240,253,245,223,190,75,91,94,89,29,205,100,242,191,80,44,86,
158,91,42,85,246,102,51,89,103,169,88,210,52,77,85,226,137,68,103,96,160,127,101,100,116,232,246,129,129,228,87,134,134,134,238,29,232,31,216,124,210,19,159,242,237,92,185,63,254,63,127,52,188,178,186,
249,91,109,179,247,180,160,215,115,247,232,200,240,187,111,189,245,245,231,229,189,108,118,35,222,235,246,94,214,235,154,175,34,219,69,100,136,196,214,127,124,79,134,148,187,141,58,154,39,31,69,235,142,
175,161,121,226,24,90,29,19,13,2,179,29,143,67,33,243,181,93,58,90,58,193,197,240,187,158,175,225,27,71,142,99,97,61,3,141,161,218,239,245,34,225,39,151,89,38,106,237,6,34,46,130,79,233,162,65,80,45,209,
211,244,19,84,99,126,39,70,166,182,225,202,3,179,8,55,58,232,75,167,96,134,35,152,27,221,134,71,83,41,172,164,114,168,85,234,216,227,15,224,169,126,13,163,181,77,168,193,48,140,109,251,209,158,216,134,
150,167,135,118,113,30,142,96,0,221,208,96,171,211,235,46,121,181,234,9,69,119,124,6,158,193,47,143,237,184,49,35,223,243,82,121,108,229,219,224,251,155,191,125,143,186,185,153,30,95,91,223,124,17,153,
235,55,82,169,244,80,38,157,211,132,117,100,26,76,138,228,207,121,60,110,36,147,177,234,64,127,223,194,224,224,192,87,71,70,134,190,49,50,54,250,200,196,248,120,238,31,62,242,33,239,102,186,120,107,190,
80,249,205,102,179,57,16,244,186,86,14,236,223,251,63,254,247,255,251,198,191,151,191,79,167,215,199,59,237,206,45,173,70,253,69,52,25,94,7,77,131,139,140,34,131,195,180,189,104,145,241,26,223,248,34,
67,225,73,24,4,157,65,29,104,25,13,24,137,4,20,183,27,221,100,12,86,208,141,26,245,224,169,163,231,241,197,35,167,145,106,181,17,38,56,189,254,144,237,106,205,78,11,117,186,95,119,183,137,126,133,62,167,
221,195,70,27,24,242,185,49,236,119,97,58,62,132,39,78,36,145,168,151,225,230,247,233,92,113,61,170,51,59,145,174,148,177,186,186,142,194,74,10,131,165,50,118,213,179,136,57,123,208,47,191,6,237,237,251,
80,237,149,80,108,173,192,219,63,11,119,100,140,122,149,14,220,234,192,106,109,116,138,233,249,211,186,30,253,199,145,224,196,23,21,151,103,65,13,132,43,193,137,153,75,195,51,255,70,177,83,67,254,242,
175,254,84,201,48,212,230,139,165,223,40,20,203,47,201,231,138,195,133,124,65,149,153,6,129,167,61,227,192,207,117,169,201,100,102,161,90,173,185,138,197,82,95,165,82,217,85,171,213,247,166,210,233,104,
179,217,208,214,86,215,15,204,205,45,221,214,104,180,6,204,182,161,182,155,117,45,26,141,108,188,235,189,239,251,250,187,223,245,46,235,150,91,110,73,116,187,230,19,8,232,61,141,90,205,81,103,136,53,234,
117,244,154,13,116,40,252,107,100,188,214,241,163,104,215,234,40,144,233,26,131,35,112,123,156,208,6,250,97,145,221,122,145,40,116,26,5,69,213,81,76,23,177,176,145,69,71,115,32,62,48,8,221,203,144,200,
107,76,36,34,24,24,76,210,148,48,208,202,24,97,211,176,95,31,13,56,225,99,104,142,155,26,246,104,22,2,52,30,142,228,16,180,153,221,112,240,179,1,159,23,81,134,229,100,169,128,196,230,10,60,102,11,189,
153,61,168,110,59,136,149,70,19,233,212,163,236,16,140,184,19,87,193,225,31,132,230,226,241,61,65,116,21,175,182,112,238,68,188,149,202,236,234,175,54,103,213,102,43,106,169,106,243,182,215,191,174,250,
166,183,188,77,140,214,165,242,3,138,205,124,175,123,221,45,142,122,163,249,244,124,177,252,167,149,74,109,219,230,70,74,109,181,90,91,99,104,20,246,130,60,25,236,21,240,217,11,122,168,183,196,141,72,
198,177,223,239,179,34,145,112,102,124,106,124,174,90,174,122,22,23,150,15,88,189,174,170,145,133,44,171,215,217,182,107,199,23,95,246,59,47,255,213,27,159,120,99,45,157,222,8,152,157,206,19,219,70,251,
37,70,163,126,109,163,90,10,180,139,5,213,149,102,120,91,91,67,253,204,41,24,235,171,100,43,3,185,104,4,237,93,251,17,15,121,97,160,13,205,224,121,9,60,132,130,112,40,22,230,31,57,137,79,127,229,14,164,
13,19,195,83,179,112,5,67,246,245,248,220,26,245,159,130,193,120,12,17,93,197,38,89,116,253,220,89,12,147,168,186,154,11,137,154,138,167,197,252,240,187,52,56,8,60,109,239,101,80,253,30,40,213,60,186,
169,53,24,243,11,232,82,15,42,147,219,209,154,221,139,249,158,130,179,235,43,208,235,167,48,62,225,193,246,43,110,130,51,180,29,166,22,134,206,227,167,54,87,113,228,246,79,194,159,205,227,233,186,171,
227,10,71,54,149,161,177,7,48,52,254,77,43,22,255,166,226,15,206,43,110,159,17,28,159,186,164,7,255,89,177,153,239,170,171,14,247,205,157,95,120,67,169,92,187,186,88,44,107,21,134,32,167,195,105,207,191,
74,72,220,74,115,82,236,124,58,89,79,33,217,35,2,64,97,196,78,167,171,116,204,158,159,110,117,136,44,216,71,198,211,84,171,11,134,93,52,218,29,213,225,114,84,174,56,124,232,246,15,255,253,71,114,175,125,
221,45,194,4,27,170,170,45,240,88,21,213,236,38,157,171,75,17,247,35,247,42,234,218,10,76,10,251,150,211,135,58,181,158,18,13,194,53,54,12,68,67,40,210,20,80,208,195,31,79,194,100,168,214,25,130,25,77,
49,79,160,84,200,74,225,8,93,45,193,23,35,51,90,61,21,235,75,43,52,18,37,36,251,147,216,123,237,181,24,24,27,69,182,210,64,217,114,193,175,187,49,194,46,167,211,92,116,101,170,174,204,99,103,211,112,46,
157,133,107,121,14,14,147,151,56,187,27,214,158,67,200,49,252,158,92,94,70,154,76,220,203,111,32,230,175,97,104,72,135,213,173,99,110,97,29,70,101,25,39,142,62,128,115,199,78,193,87,163,233,41,85,52,189,
81,11,58,202,249,73,165,84,216,167,52,27,179,188,32,137,207,245,63,188,237,117,181,63,121,243,219,190,173,141,47,21,202,184,223,249,157,151,104,27,155,169,203,83,169,204,181,197,66,81,207,231,115,160,
41,32,211,109,77,127,93,20,133,162,245,4,116,62,134,55,93,6,136,101,34,223,229,178,7,123,117,134,51,195,104,107,109,163,165,59,84,9,211,38,90,237,14,136,89,104,189,110,184,84,200,207,206,205,157,85,146,
137,1,107,96,96,184,234,112,56,31,88,90,94,252,226,131,247,220,189,126,238,254,251,96,44,206,193,149,89,67,160,184,137,0,117,154,99,116,20,218,174,29,208,18,33,192,203,115,240,60,93,161,95,234,185,86,
62,133,66,38,13,87,40,68,157,231,131,202,107,237,17,232,117,26,134,212,233,211,88,231,35,187,188,134,243,199,79,227,174,47,126,21,15,159,56,13,255,244,54,196,46,191,10,5,127,28,27,145,36,54,3,97,30,143,
165,92,132,181,120,30,157,51,212,152,107,235,48,233,174,213,225,113,184,168,3,29,131,67,176,20,214,67,175,133,78,163,130,102,174,134,197,99,235,56,121,223,163,88,58,113,63,50,103,238,196,230,233,59,145,
62,247,16,214,206,167,145,42,182,240,21,26,155,111,53,160,108,90,186,199,44,100,199,173,147,71,158,137,83,143,220,106,173,206,223,102,166,55,110,42,159,58,22,43,45,204,93,172,210,159,249,162,93,119,237,
213,129,83,167,206,188,188,92,174,95,219,106,54,213,70,131,181,199,144,106,16,60,178,152,71,216,79,128,38,147,252,14,167,204,169,18,177,124,95,6,121,45,62,23,109,229,245,120,200,136,100,43,58,205,46,153,
163,84,161,158,162,126,10,250,220,138,223,235,238,4,194,129,179,67,67,131,15,190,233,141,111,194,158,253,59,149,59,191,121,251,248,29,119,222,253,75,15,60,124,244,198,71,206,158,15,122,24,210,7,117,11,
46,163,73,48,171,20,249,135,16,184,130,218,42,18,67,219,236,18,236,160,110,83,208,161,73,104,146,169,132,85,45,94,91,126,109,3,221,92,133,161,63,96,39,28,212,50,89,84,242,121,24,205,22,255,192,100,135,
144,33,154,48,52,95,4,169,124,1,43,107,41,24,138,70,39,236,196,176,81,135,139,50,66,21,121,192,206,34,140,110,242,189,110,36,1,107,112,12,106,32,8,103,192,135,96,60,10,151,3,168,174,46,35,183,153,161,
41,41,224,200,177,13,156,56,181,142,245,249,13,94,67,1,165,82,143,17,194,141,69,118,132,60,84,132,38,167,16,161,35,118,116,186,14,171,127,60,2,119,96,90,201,108,30,86,11,169,89,165,211,238,221,246,251,
175,40,189,225,213,175,105,189,241,109,111,255,153,14,197,218,238,221,187,198,215,214,82,47,107,25,157,17,105,84,97,61,97,60,105,12,75,164,186,189,104,71,62,202,176,235,208,36,204,210,4,120,68,207,193,
65,80,122,188,30,123,156,78,166,200,20,242,73,151,96,105,17,76,201,120,132,207,233,54,41,23,251,7,251,231,159,250,212,167,55,117,85,189,170,215,237,38,238,186,231,254,103,173,173,109,252,74,106,125,99,
40,147,47,40,129,104,12,51,241,48,124,102,27,10,145,166,237,218,131,8,181,88,98,104,12,193,72,220,62,175,55,156,176,27,184,94,44,34,183,177,129,18,67,113,59,147,135,171,218,132,131,33,183,197,179,183,
107,53,154,102,26,12,134,125,141,172,165,232,10,60,81,130,137,161,150,70,138,46,184,9,183,67,71,127,187,137,201,118,3,46,126,7,161,33,113,201,10,129,40,3,221,61,106,221,110,62,139,94,165,100,39,37,248,
130,188,46,30,167,188,116,6,197,66,22,117,106,204,86,149,172,222,104,67,231,247,107,181,186,236,32,14,184,248,217,130,209,130,147,223,120,50,17,197,160,159,218,116,96,2,214,232,140,130,66,214,165,158,
124,48,166,110,44,205,162,213,220,207,30,60,194,47,83,189,237,214,91,115,111,124,235,219,127,102,77,137,54,58,49,182,179,217,106,255,166,217,233,134,202,21,10,109,154,12,1,158,52,138,252,148,39,2,40,9,
185,29,178,154,204,167,74,58,147,160,74,230,98,217,98,168,215,170,104,54,234,4,38,25,132,111,180,249,51,24,244,195,229,117,99,120,100,68,63,124,248,202,241,217,153,233,167,212,235,213,39,223,125,207,189,
215,61,244,240,209,235,5,120,165,92,78,107,145,157,162,52,10,7,92,64,88,229,65,67,17,232,211,59,161,4,217,120,100,52,127,56,6,75,140,13,65,24,31,158,178,193,181,122,250,148,61,220,210,206,149,9,52,94,
151,207,143,38,129,32,83,114,118,186,22,59,131,91,151,235,227,119,232,240,250,104,32,26,173,6,195,106,27,142,122,5,163,52,81,83,4,148,139,82,66,25,30,134,22,240,67,175,149,229,139,194,226,223,91,100,87,
43,181,142,94,102,19,22,59,164,202,255,10,107,231,169,1,115,232,208,236,196,248,181,167,189,10,194,46,226,202,160,41,235,58,225,230,57,123,4,247,44,193,189,127,104,16,209,104,146,146,128,199,107,214,160,
157,122,8,218,185,227,138,82,41,186,208,168,37,172,90,117,151,210,110,95,67,118,30,123,195,239,189,124,229,15,110,121,85,249,79,222,246,78,49,229,63,83,69,219,190,99,215,84,183,103,253,2,67,174,191,66,
16,73,168,21,198,146,248,218,21,246,35,30,236,140,98,1,162,52,170,100,13,19,124,118,138,251,5,224,213,201,56,45,130,162,193,112,87,169,214,237,116,165,120,50,142,231,60,247,57,184,233,166,155,180,125,
123,247,4,232,128,99,247,222,123,111,228,203,95,249,70,255,210,249,197,96,33,147,83,155,100,25,97,214,8,15,181,127,40,134,228,101,151,67,191,246,41,80,134,38,137,28,55,93,129,3,14,25,7,116,121,236,172,
101,23,65,38,43,215,52,134,205,145,237,123,24,50,73,171,12,149,85,118,14,49,73,93,2,185,71,185,32,215,238,32,96,197,153,119,187,10,90,149,42,8,116,178,95,1,30,2,98,219,224,48,38,199,70,160,251,188,80,
227,9,120,220,14,120,154,37,123,10,175,69,240,11,251,169,245,26,20,126,55,228,211,48,232,104,83,133,20,50,4,173,12,220,4,121,236,4,65,40,125,112,163,169,194,164,145,9,176,50,199,248,184,146,199,29,101,
216,117,23,214,161,22,51,52,52,69,40,75,231,100,45,9,186,147,187,208,221,121,88,181,250,198,220,212,4,9,37,183,185,159,189,105,103,151,194,249,15,94,251,186,244,27,223,246,14,73,190,248,153,41,234,232,
240,80,39,30,141,118,72,108,208,9,60,59,12,137,176,179,81,39,141,39,58,206,68,135,141,170,171,52,25,236,217,26,27,92,32,89,175,215,9,60,130,141,239,137,70,108,52,90,212,103,42,46,63,176,19,207,190,233,
73,184,226,208,65,140,209,105,106,154,166,60,248,208,195,234,39,63,243,5,117,110,110,94,203,102,179,74,131,13,220,35,240,28,60,85,149,64,94,155,221,1,220,252,92,120,175,186,6,206,193,62,130,168,141,141,
197,69,252,211,39,62,78,125,117,118,107,145,16,195,124,48,217,135,137,131,135,176,231,250,39,225,170,159,251,37,108,223,181,27,62,126,214,226,185,21,30,79,174,93,128,23,243,133,144,116,19,176,194,91,38,
157,185,209,177,87,186,73,22,181,78,54,213,175,123,58,180,253,87,65,73,167,160,174,46,162,199,208,95,187,226,106,172,93,113,45,22,167,182,35,79,166,53,121,44,133,140,216,205,101,208,110,242,28,252,157,
135,98,125,176,83,146,81,53,17,189,252,223,203,14,209,239,115,227,178,145,1,140,238,63,192,112,222,130,103,99,14,254,149,83,240,156,123,20,74,147,81,97,114,55,140,157,135,81,237,31,70,41,26,69,35,218,
167,118,101,128,241,204,241,39,169,143,220,255,103,214,185,227,127,93,189,255,246,231,86,31,190,55,90,60,113,228,71,146,240,241,227,46,218,127,127,201,127,163,151,232,236,94,93,93,223,86,111,180,84,73,
95,255,118,17,36,218,63,85,18,145,11,161,80,216,158,229,232,81,31,117,232,60,141,86,93,92,46,195,177,48,100,15,125,212,121,47,253,111,191,132,151,190,228,69,216,189,107,59,194,212,98,50,59,242,192,131,
15,225,99,159,252,52,206,156,62,143,108,58,109,107,47,57,143,48,135,67,192,226,118,98,250,240,1,236,32,243,249,194,97,232,212,148,75,103,143,225,195,31,251,28,190,118,247,253,184,231,155,223,68,200,173,
74,8,167,222,12,192,23,138,218,225,191,157,77,161,114,207,183,80,163,195,109,181,25,118,201,74,146,102,31,36,24,182,141,79,96,124,100,152,225,214,128,73,157,214,224,235,109,158,47,65,230,222,206,243,141,
120,156,80,83,107,192,250,50,58,30,31,140,61,135,80,28,155,198,122,211,64,137,78,90,221,190,3,46,2,210,89,173,218,206,125,157,6,166,74,39,222,98,245,24,205,30,117,159,68,7,29,249,174,142,4,25,121,239,
196,8,166,111,184,1,238,93,83,176,18,116,211,222,32,117,99,21,221,66,1,189,65,106,191,217,61,232,18,132,245,106,9,101,134,126,7,245,163,195,229,133,57,190,93,181,188,1,47,178,155,211,202,250,242,77,104,
53,14,178,190,91,111,248,189,151,21,95,247,138,87,52,223,244,142,119,125,87,131,252,116,21,117,120,120,56,221,215,215,247,78,106,186,5,231,5,61,183,181,10,108,43,180,74,24,246,179,131,70,34,116,125,108,
56,49,35,157,118,139,15,154,19,17,233,4,157,139,134,224,218,171,46,199,171,126,247,133,120,206,115,158,129,120,162,31,186,211,139,66,169,136,187,239,190,23,159,255,194,87,177,180,180,6,50,30,106,117,106,
47,154,26,147,199,49,201,84,45,62,106,173,14,10,169,28,202,27,235,108,212,10,10,185,13,124,225,190,135,113,122,109,19,197,76,26,233,165,21,28,39,8,51,103,79,162,74,45,214,102,56,204,47,47,32,115,156,172,
82,43,33,49,156,192,240,236,0,6,146,94,244,251,93,24,114,187,17,167,30,237,31,27,167,97,9,195,41,233,246,236,73,210,138,22,93,49,24,70,113,207,215,161,158,122,4,10,191,51,118,95,1,204,30,64,208,210,48,
74,118,28,99,39,75,238,220,141,192,129,203,225,29,28,132,159,118,215,239,80,225,115,82,39,210,141,231,219,42,22,155,148,37,60,148,214,165,6,36,168,135,201,102,189,120,8,134,222,70,173,87,71,142,122,178,
58,177,29,230,149,55,162,123,240,106,116,188,94,244,202,57,120,87,22,144,88,156,131,123,121,14,157,98,26,21,106,135,50,59,91,39,212,135,110,171,29,178,22,206,62,67,153,63,253,87,214,250,202,255,65,106,
245,154,242,151,63,21,41,223,119,135,179,116,238,228,69,42,248,169,41,218,135,62,244,97,43,158,72,20,8,184,233,70,163,121,128,205,163,18,15,54,233,201,0,179,207,239,163,120,142,216,76,35,243,188,53,134,
161,6,123,176,204,128,24,100,20,89,41,246,148,39,61,1,111,122,211,159,216,108,167,168,14,50,91,11,231,206,207,227,243,95,254,6,190,240,165,111,16,120,171,200,8,227,17,120,91,91,158,73,208,150,135,248,
99,121,128,6,37,136,56,77,71,126,97,14,159,187,253,46,220,115,228,20,65,152,69,137,204,97,17,172,17,151,27,179,3,253,104,150,50,40,176,1,87,238,189,7,149,51,115,240,144,41,125,59,167,208,183,189,15,195,
147,49,80,66,160,159,108,236,171,210,221,230,9,104,134,203,50,207,91,37,232,90,116,193,113,50,247,14,158,113,76,167,91,167,110,83,28,116,37,254,48,20,63,217,142,161,218,235,246,34,74,13,24,228,231,84,
130,93,157,59,141,158,65,176,51,148,182,117,202,16,94,107,161,214,37,155,90,72,208,212,148,44,29,195,145,0,38,99,126,164,180,30,170,100,90,117,109,29,158,138,1,247,196,78,232,251,175,128,73,38,45,178,
195,86,52,39,156,233,117,248,169,1,85,106,192,14,29,113,141,161,219,44,230,224,38,139,247,70,183,161,61,52,73,219,222,13,169,27,171,123,148,236,198,83,216,14,99,170,213,51,148,158,89,189,237,85,191,223,
126,227,59,223,243,83,99,76,236,25,142,23,188,224,57,61,58,87,74,162,206,110,69,81,125,124,226,164,6,86,100,73,163,140,227,93,156,102,171,178,65,37,25,192,71,23,43,14,216,69,134,217,191,127,23,158,120,
195,213,232,39,48,68,83,101,178,5,60,114,244,24,190,126,251,157,120,240,200,49,100,50,89,228,9,32,49,35,18,106,237,253,86,228,63,121,78,224,9,195,74,106,125,153,161,56,155,47,227,228,169,57,60,122,110,
197,30,228,46,145,57,69,107,74,104,78,146,29,14,141,79,66,227,223,119,168,53,145,205,193,79,38,245,153,212,153,52,14,189,174,1,79,36,137,40,217,38,198,14,147,200,166,225,72,103,80,165,214,43,17,16,2,62,
98,24,131,154,130,3,78,21,253,180,195,162,13,197,145,162,156,7,42,5,185,26,80,79,160,119,250,24,218,15,221,131,246,249,243,100,226,26,114,12,232,41,23,195,182,236,228,198,99,148,26,12,25,68,161,135,81,
34,3,39,116,134,231,254,153,105,68,119,237,65,52,28,69,168,82,71,192,29,130,70,199,171,208,52,89,4,154,73,215,219,51,154,112,151,242,140,10,58,76,154,30,25,222,241,145,253,124,27,139,80,114,105,84,227,
113,212,200,178,170,238,97,196,113,168,250,241,7,66,142,220,198,110,173,211,58,160,116,205,56,181,99,235,13,47,126,81,229,13,175,252,189,238,109,175,125,173,245,198,183,188,205,110,196,159,212,98,131,
239,155,223,188,179,247,162,223,250,149,84,44,30,89,112,186,156,86,207,236,245,57,116,135,207,237,246,40,34,242,155,205,6,138,4,80,50,17,23,160,226,73,55,92,131,68,52,140,241,177,33,108,223,62,67,128,
122,32,195,52,2,178,227,39,79,226,203,95,253,38,78,159,157,151,4,4,62,170,4,30,53,158,128,78,90,238,187,20,140,13,64,62,132,85,37,45,170,84,111,161,64,176,136,22,148,113,67,209,107,18,50,61,124,68,168,
217,174,113,244,16,109,85,161,7,162,240,176,51,184,55,87,160,4,34,88,247,68,112,118,45,135,158,234,198,244,236,118,196,27,53,104,167,78,193,34,240,77,186,111,155,245,36,60,178,177,247,50,204,237,246,208,
184,16,124,146,57,173,242,130,84,211,160,41,32,56,200,232,226,110,149,141,21,88,116,187,61,106,193,118,40,14,250,96,84,61,6,157,5,121,154,192,85,25,122,99,65,29,244,234,88,96,248,141,198,6,176,125,114,
6,201,96,0,193,70,29,254,77,50,31,59,148,204,204,72,81,216,241,40,88,224,15,138,158,245,162,222,55,136,82,98,136,192,212,17,58,127,18,46,1,62,141,92,147,122,182,193,14,236,244,71,224,140,36,224,168,21,
224,220,156,215,245,220,106,159,90,45,29,164,51,222,13,211,12,88,102,167,75,249,211,184,237,149,175,52,222,248,206,119,127,87,141,254,100,21,27,124,82,62,255,185,47,183,255,248,143,255,159,249,88,44,126,
102,96,160,63,73,71,55,147,78,103,92,178,59,64,181,92,65,139,0,122,234,83,158,140,223,248,245,95,197,101,151,93,134,237,219,102,192,143,217,122,175,71,246,104,18,40,140,143,120,232,200,163,116,167,231,
236,68,132,42,1,105,207,70,92,0,217,119,3,239,98,145,215,101,6,197,75,77,164,179,1,124,46,121,238,66,165,82,179,167,241,156,60,190,232,0,63,129,115,141,95,197,32,31,134,36,150,82,112,149,200,128,11,100,
158,187,10,117,220,191,184,138,82,174,128,137,98,22,241,83,199,232,96,87,161,117,24,250,120,109,10,245,165,252,220,201,191,217,174,18,192,212,99,78,26,14,167,78,174,163,150,35,177,218,131,130,86,60,201,
208,235,129,73,70,55,198,199,109,211,161,140,76,195,100,56,110,244,218,208,156,53,68,98,160,254,37,115,38,29,48,216,75,178,37,21,7,6,134,49,61,54,193,186,112,195,34,35,43,25,58,232,244,42,116,158,87,103,
88,215,215,23,236,48,139,254,81,32,218,135,22,79,88,173,148,161,148,24,73,26,13,52,135,198,96,210,93,251,74,5,248,189,126,56,7,70,161,147,189,89,45,208,155,235,188,198,166,162,180,27,78,165,82,30,82,26,
181,203,149,86,115,155,98,52,189,74,183,99,220,246,187,47,35,8,127,183,243,198,119,190,247,39,14,132,223,6,159,148,63,125,211,95,40,227,99,19,190,190,254,254,125,4,221,129,185,185,243,238,98,145,161,143,
0,244,49,252,94,115,229,229,152,157,25,135,135,64,9,49,188,36,250,250,232,128,131,108,244,44,78,159,62,131,60,195,230,145,71,79,218,192,105,212,234,104,82,251,217,51,37,212,53,82,51,210,198,118,152,181,
91,123,235,185,152,152,64,32,176,181,221,5,53,152,155,224,19,70,146,241,66,159,0,129,225,93,180,231,240,216,40,174,126,218,147,16,191,246,122,180,233,100,201,121,184,111,35,131,7,214,51,88,100,131,103,
115,12,142,108,244,61,169,21,76,86,243,240,83,157,249,201,82,33,2,44,204,179,39,248,24,96,99,250,232,116,211,161,8,114,212,91,42,205,136,100,70,107,4,27,109,190,29,222,21,106,200,202,240,32,90,35,52,77,
3,49,152,50,144,238,244,195,220,40,160,182,145,35,35,211,81,43,46,40,38,15,86,180,144,108,104,216,77,80,71,101,122,48,26,135,22,8,218,83,123,189,141,101,208,218,66,167,201,112,149,210,80,201,120,221,104,
63,26,186,11,89,178,106,173,85,177,205,91,141,191,87,146,35,168,19,224,178,224,93,214,180,184,83,75,212,134,12,197,189,28,145,190,9,107,38,128,86,146,122,215,114,43,206,108,218,163,167,215,70,213,102,
125,159,165,40,219,44,69,15,177,167,247,110,123,217,139,235,183,221,250,154,246,27,223,246,147,227,142,191,7,124,183,222,122,139,143,63,110,162,249,248,141,106,165,58,114,250,204,25,20,24,74,197,245,134,
195,17,28,186,252,32,70,135,89,9,12,107,178,176,91,50,95,186,108,180,175,125,253,14,124,139,110,116,51,83,160,195,173,162,68,192,214,235,194,120,162,141,191,3,52,113,209,23,157,180,60,100,161,119,36,18,
33,211,121,200,158,212,90,108,52,89,226,216,160,65,168,212,40,172,248,247,3,131,67,184,234,250,171,113,253,211,159,130,3,55,63,7,142,209,73,180,9,136,211,139,203,184,231,248,57,172,100,243,246,84,91,141,
225,221,71,118,188,210,163,98,155,151,161,154,32,150,249,101,1,178,147,231,242,83,171,186,169,167,86,66,49,220,77,246,57,235,11,163,20,77,160,61,50,14,7,59,145,155,58,214,213,221,26,203,99,36,165,163,
46,194,176,76,180,116,26,18,202,14,247,220,57,56,54,203,232,116,105,76,2,179,208,141,16,66,85,96,138,64,234,239,212,225,233,54,160,55,42,208,104,44,180,2,153,175,72,29,201,231,226,198,29,52,44,42,235,
172,93,44,99,153,29,179,40,251,118,5,58,208,146,33,44,215,233,250,91,38,116,118,50,95,124,0,238,252,38,252,167,239,165,168,236,161,25,161,121,115,47,161,27,115,32,231,140,32,109,176,51,117,106,112,230,
243,170,210,67,160,23,31,154,233,133,19,135,208,237,78,49,52,185,232,228,91,183,189,242,21,149,55,189,235,189,63,17,187,46,124,27,124,50,240,203,214,30,239,245,172,87,247,122,221,43,8,58,245,228,201,211,
200,147,81,236,136,73,32,140,13,143,96,247,238,93,246,124,110,139,13,146,207,100,240,173,111,221,133,47,126,249,118,234,51,147,29,208,68,142,38,64,146,19,182,134,97,228,239,182,66,235,197,5,222,178,19,
169,104,60,97,188,56,5,182,56,233,46,129,215,164,134,147,153,17,1,173,0,79,254,110,160,63,129,231,255,220,243,112,211,51,110,194,206,93,59,225,247,249,109,199,125,250,204,89,220,126,199,61,88,91,221,68,
147,160,51,168,179,44,106,66,23,117,214,206,100,12,163,65,63,20,106,39,217,11,166,43,170,142,157,164,199,115,174,120,130,184,39,58,136,37,127,0,117,130,42,207,190,145,163,161,169,145,89,77,25,195,228,
67,225,137,93,133,60,60,252,30,176,52,134,192,97,56,121,125,142,66,6,142,100,2,17,126,255,196,206,189,72,80,231,37,24,131,67,169,69,120,123,212,166,78,13,122,167,9,149,76,167,82,63,154,100,85,115,98,18,
72,80,231,161,67,6,44,162,181,185,129,19,169,44,10,62,55,60,33,178,39,207,123,102,101,43,139,200,23,242,65,225,119,112,159,59,1,31,245,180,49,189,31,5,198,221,205,245,121,70,150,12,150,54,170,52,100,5,
12,187,218,112,26,212,135,253,83,140,0,59,20,213,31,246,178,82,199,104,72,118,107,27,75,51,74,41,31,126,221,239,252,118,251,245,175,248,221,234,155,222,243,254,199,245,188,241,119,143,164,83,29,43,251,
248,115,63,31,186,128,35,200,112,120,49,135,207,160,102,57,119,238,44,54,54,54,9,62,63,98,137,1,6,50,21,143,30,61,9,163,179,149,227,39,44,41,83,109,18,78,108,244,240,19,23,245,30,251,186,173,225,188,12,
63,50,172,18,139,177,225,24,178,101,3,32,57,182,209,34,227,81,152,203,48,141,156,243,250,171,47,199,47,255,252,115,112,221,53,87,98,112,112,128,215,18,180,143,81,42,149,112,247,61,247,99,126,142,140,192,
14,160,82,18,184,120,110,89,64,164,178,83,52,182,239,133,177,109,15,122,110,47,44,97,89,63,129,200,215,87,169,19,239,10,247,97,193,27,128,73,7,42,83,119,140,160,200,49,188,159,229,119,186,119,51,139,123,
218,22,206,210,49,87,7,70,224,10,69,25,82,155,232,219,216,64,104,115,13,218,200,8,204,203,246,195,177,99,24,222,33,63,60,227,73,72,187,147,100,105,138,248,221,216,117,53,50,183,70,243,210,99,189,213,118,
236,68,121,223,30,24,87,93,129,230,101,135,209,238,31,64,215,108,35,191,178,130,7,239,122,8,247,222,119,30,95,187,243,4,86,25,45,220,67,4,125,82,71,201,175,225,148,59,140,244,212,101,40,91,14,52,10,6,
178,171,30,156,122,164,137,71,31,94,195,210,106,22,149,158,27,245,216,56,150,217,92,249,210,38,89,121,9,138,219,116,49,212,79,105,203,167,159,239,56,125,228,13,142,83,15,253,161,62,127,250,23,42,15,221,
53,94,57,123,236,123,162,219,227,169,124,55,248,228,57,5,139,72,31,106,49,134,196,112,36,100,179,148,76,177,9,147,45,175,44,225,145,35,15,97,115,109,21,29,54,188,105,131,133,61,145,204,146,163,238,18,
125,184,53,31,44,192,147,34,225,117,235,153,0,88,30,2,82,209,143,242,144,198,144,45,49,12,178,158,28,95,206,59,52,216,135,231,220,244,68,252,230,175,189,0,79,126,210,19,17,99,88,22,86,19,195,147,207,231,
113,23,129,119,223,253,15,161,196,231,29,134,60,23,69,191,151,29,197,235,162,129,144,221,169,8,58,41,10,29,169,66,33,223,189,242,6,108,14,77,226,222,64,28,139,193,40,58,116,206,2,98,57,151,206,80,44,211,
129,114,93,5,26,128,51,4,225,3,155,25,60,216,213,48,215,63,134,18,29,103,135,108,229,88,95,133,159,117,224,33,203,54,207,207,161,148,77,161,214,107,194,180,218,172,44,134,76,130,143,95,75,56,150,18,69,
129,131,12,42,41,250,237,78,23,197,90,19,25,130,62,55,189,27,109,74,134,142,170,99,141,230,232,206,175,223,131,111,124,233,14,164,55,82,140,24,45,52,218,77,172,49,98,60,234,246,97,35,22,70,86,53,81,205,
87,224,52,253,168,244,237,196,185,64,31,54,20,31,178,74,12,249,224,16,93,118,7,217,234,9,118,162,147,252,178,103,80,235,22,217,30,101,93,95,62,53,226,60,253,224,179,156,71,239,122,173,254,224,55,255,16,
167,143,254,92,249,158,111,244,151,142,63,64,145,250,248,42,223,238,21,175,125,237,107,69,160,137,86,152,36,120,182,183,90,77,101,125,109,29,75,75,203,40,211,149,73,169,177,177,75,165,60,218,12,43,138,
217,65,134,21,247,224,209,19,88,91,223,176,25,73,230,120,165,81,217,182,118,217,154,45,217,218,216,81,138,48,90,40,20,66,32,24,176,53,94,83,6,171,9,170,46,177,154,232,235,199,225,67,7,241,115,207,123,
38,158,116,195,213,152,153,153,133,135,108,85,173,54,216,227,87,121,29,75,184,239,190,7,24,226,191,70,214,91,228,53,149,208,52,12,134,213,173,13,131,100,252,81,230,166,39,25,250,102,107,57,120,233,94,
123,251,174,66,105,124,7,110,167,41,121,68,166,216,216,240,162,233,236,189,155,121,109,110,26,18,7,65,42,128,145,14,99,18,96,45,131,32,167,230,76,81,70,212,8,4,37,24,178,147,41,188,229,60,188,235,52,2,
85,50,123,255,48,66,19,219,224,92,95,129,243,236,41,200,146,1,25,207,147,239,235,160,59,119,146,57,213,49,58,229,158,116,92,86,43,217,84,13,210,38,151,43,40,75,78,96,169,142,116,185,106,15,69,201,104,
64,161,80,193,218,70,30,115,75,105,4,19,33,140,142,186,168,59,27,148,4,148,6,252,78,43,219,6,113,42,234,162,9,74,32,58,49,5,103,199,129,5,118,8,93,95,66,188,175,3,131,205,56,191,94,68,160,90,132,79,52,
122,189,162,195,52,226,106,62,61,171,150,114,251,217,187,217,11,123,206,91,94,127,75,233,214,255,241,7,245,63,255,203,55,219,237,241,227,46,223,6,223,159,255,249,159,91,183,222,122,171,220,181,167,69,
0,237,51,77,51,150,201,100,148,133,249,5,91,199,217,187,125,122,60,168,49,172,110,110,110,162,144,207,81,231,145,249,90,29,108,108,166,108,192,9,248,182,216,110,11,108,91,192,211,108,112,72,214,115,136,
78,82,12,134,73,198,19,240,52,234,116,196,45,3,65,186,207,107,174,190,18,191,242,75,191,128,235,174,187,134,159,97,24,82,28,200,23,74,56,118,242,36,206,159,63,135,99,143,30,199,183,238,186,223,158,166,
171,144,129,100,22,70,163,102,130,230,176,183,222,144,243,184,232,150,39,204,38,102,148,54,53,21,25,115,124,59,114,100,194,35,4,201,249,116,134,192,106,219,215,34,96,19,182,114,59,100,250,80,76,144,128,
15,182,121,146,100,135,54,77,79,190,82,71,170,210,64,129,216,105,179,19,56,9,66,123,172,142,70,75,139,245,193,197,206,167,206,157,128,182,182,182,149,15,40,29,128,95,219,69,64,43,148,37,166,63,10,45,28,
135,234,224,53,146,185,21,209,177,85,154,48,118,239,54,235,205,206,232,49,68,235,182,144,203,149,177,177,146,102,24,45,219,209,166,47,238,67,149,81,229,108,182,137,50,191,91,184,63,73,9,225,64,33,226,
67,107,114,0,21,186,232,229,165,5,214,55,157,116,175,128,141,84,1,139,4,223,160,214,70,160,66,237,173,187,209,220,117,80,113,102,214,156,90,41,71,11,238,216,102,185,253,123,148,90,121,80,173,214,26,183,
189,226,247,138,175,127,213,43,59,111,122,251,59,237,118,250,113,149,239,209,3,4,159,73,224,229,217,54,109,134,193,169,74,165,18,155,63,127,30,155,12,71,114,235,129,177,145,81,12,80,171,201,110,162,155,
153,60,42,212,103,146,108,89,40,20,237,70,51,169,191,100,104,100,139,233,182,24,73,158,59,201,66,2,186,88,60,102,135,152,106,185,140,128,207,99,103,200,72,163,239,222,181,3,135,14,29,192,232,200,144,205,
96,45,106,173,37,106,35,209,118,217,244,6,141,197,58,142,29,63,139,20,197,186,100,210,200,150,25,253,3,3,240,80,63,218,235,126,5,64,60,151,135,29,96,140,173,59,77,73,231,21,195,67,86,233,81,155,186,162,
62,56,41,232,101,90,176,194,115,219,59,161,218,172,188,69,209,50,16,36,191,203,144,144,209,238,162,65,150,52,218,61,118,46,1,33,59,27,117,97,177,75,109,231,245,33,100,39,205,242,239,206,159,70,155,86,
66,45,21,161,83,130,216,76,74,23,43,215,97,176,67,117,202,37,24,185,44,150,22,87,112,255,185,69,44,102,75,232,242,184,46,178,106,128,117,25,160,156,9,182,219,232,210,24,117,88,225,18,1,36,3,187,88,40,
99,117,189,128,83,115,41,148,27,29,76,79,12,98,216,163,33,212,213,81,168,26,216,208,122,88,99,231,90,243,0,133,137,33,228,27,61,106,66,118,200,66,11,211,177,17,4,98,83,88,226,119,88,73,244,99,112,150,
145,54,28,82,218,51,215,186,123,125,99,73,165,219,217,161,173,205,31,86,171,37,86,147,217,124,221,239,191,162,242,167,239,121,191,140,149,255,88,202,247,128,143,236,39,0,148,49,208,53,195,104,27,133,66,
126,100,121,113,49,178,182,186,166,74,182,72,216,207,202,39,56,188,108,36,141,160,233,41,26,252,212,55,37,86,180,61,111,203,207,72,106,149,20,97,63,1,158,56,220,32,67,109,36,26,181,93,173,48,222,190,189,
187,241,43,191,252,115,56,184,127,23,6,146,81,12,13,245,243,253,152,29,178,155,212,61,181,106,197,214,118,71,30,57,129,52,5,249,202,218,166,205,130,18,166,2,100,160,253,7,14,96,100,120,107,71,210,30,89,
199,214,147,188,30,17,53,146,103,39,137,162,1,153,183,109,213,209,11,81,51,73,86,51,63,147,140,71,225,143,134,168,29,115,246,88,36,17,39,87,106,171,93,129,97,143,241,223,160,78,235,208,64,137,20,216,10,
197,150,205,206,149,84,6,73,154,163,145,252,58,124,155,203,240,228,54,160,21,75,116,183,101,232,100,65,151,155,223,215,235,70,91,113,162,233,13,161,193,198,223,228,53,223,191,153,195,113,130,104,189,222,
66,186,82,165,137,40,32,88,175,96,34,224,67,95,31,59,6,65,232,100,232,239,200,32,61,207,221,150,144,207,142,157,74,209,5,243,59,244,245,199,225,117,59,81,46,214,81,207,54,48,237,10,99,202,27,33,187,233,
40,14,38,81,137,199,177,178,90,135,110,40,216,73,179,18,158,222,135,123,74,89,180,156,22,166,47,11,195,26,138,217,99,137,29,71,84,117,27,134,135,237,210,167,47,156,222,169,101,55,246,179,23,134,95,127,
203,107,114,183,221,122,107,249,77,111,123,135,200,174,31,105,249,23,78,104,43,252,190,182,86,46,151,230,207,157,59,223,90,95,93,221,149,218,216,8,53,24,54,52,50,68,151,189,85,38,73,221,150,202,74,113,
195,77,55,41,89,194,50,181,70,95,251,237,25,13,41,2,60,25,144,78,246,37,237,231,27,212,144,33,178,214,47,254,194,11,240,172,103,223,140,157,59,119,97,118,118,6,145,16,93,181,210,37,115,182,201,30,30,59,
11,250,111,63,240,81,212,155,91,14,184,200,112,84,100,67,11,88,102,183,109,195,174,93,187,169,17,233,54,3,126,155,93,101,16,220,168,49,20,243,33,235,54,250,93,14,244,121,93,208,217,192,174,27,110,128,
103,98,146,14,220,68,151,154,213,39,224,156,158,128,211,231,178,231,157,237,78,195,106,239,72,184,149,161,25,65,177,13,60,251,7,67,42,191,110,165,130,16,95,56,176,125,23,70,59,85,120,139,25,88,60,79,59,
150,128,38,215,97,20,161,121,8,60,221,139,166,147,70,74,119,162,97,105,56,82,172,225,65,98,170,70,166,107,177,99,86,89,111,89,118,200,172,72,17,154,172,144,81,35,8,253,24,98,199,11,83,138,248,26,117,246,
0,234,30,94,67,179,109,216,17,102,157,46,124,105,53,141,197,149,12,250,217,129,175,223,62,136,153,128,27,174,22,235,147,102,166,226,115,163,198,80,223,158,26,132,111,247,54,132,45,23,238,124,248,24,194,
142,6,250,34,155,232,233,22,230,87,40,145,230,151,209,199,80,173,26,77,85,91,59,235,86,179,171,3,90,122,237,128,90,204,31,86,42,197,192,109,47,125,113,241,214,91,94,93,123,237,235,95,219,251,179,191,122,
171,221,126,63,236,242,47,192,39,69,0,248,218,215,222,106,156,61,115,54,156,207,102,175,220,220,88,31,144,173,104,133,39,58,166,137,34,27,67,103,171,120,232,20,21,130,203,36,251,164,82,105,27,28,194,124,
2,62,121,200,216,94,144,230,66,194,90,145,238,84,244,98,95,34,134,237,51,99,136,82,219,200,38,144,201,190,65,62,143,82,43,209,49,167,83,12,241,41,130,49,108,143,227,181,101,67,62,82,82,142,225,75,194,
173,12,253,12,12,12,217,218,81,134,108,100,86,68,66,186,44,62,47,167,54,24,254,234,246,66,167,209,109,59,48,186,123,47,180,11,179,38,222,88,28,209,233,237,118,174,96,151,141,110,86,75,72,242,249,200,232,
160,189,222,36,159,167,121,33,208,229,250,25,56,249,184,24,142,9,60,234,43,55,229,197,225,233,25,236,118,80,243,173,206,19,228,53,152,242,93,103,247,0,35,19,112,228,51,116,106,148,11,161,4,154,59,246,
163,195,14,35,99,144,247,84,25,30,21,134,102,234,82,97,104,1,115,135,127,87,37,107,109,80,195,229,25,65,18,205,50,102,123,6,118,14,13,217,227,134,160,22,237,176,222,234,100,66,133,242,160,74,182,204,200,
216,96,177,12,159,223,131,120,212,111,15,101,109,172,146,117,11,6,174,12,143,96,194,29,65,198,165,32,53,26,65,133,97,249,204,217,21,120,58,69,212,243,103,209,200,173,226,129,211,117,132,219,42,134,252,
116,239,137,65,26,41,143,210,13,4,52,247,198,146,87,207,174,143,16,124,135,208,105,239,99,228,241,240,219,103,254,240,13,175,175,254,201,155,127,248,139,155,190,47,248,164,188,246,245,111,80,214,230,207,
39,51,27,27,87,102,86,87,198,173,114,73,241,241,75,203,112,130,204,219,38,168,174,39,146,33,212,249,138,193,158,154,162,160,151,240,39,115,180,146,3,120,161,253,24,234,18,232,239,75,16,120,85,59,12,79,
12,14,146,65,166,160,116,201,106,12,177,178,34,206,31,12,210,73,55,241,177,143,127,10,95,248,242,55,112,226,212,25,137,64,182,206,220,92,93,35,243,21,237,99,185,201,46,194,116,246,66,31,254,46,207,101,
128,121,99,113,30,21,2,215,197,198,210,41,5,118,238,221,143,209,193,97,184,39,183,163,147,94,135,121,230,36,124,170,133,240,208,40,34,12,215,246,22,186,108,92,173,81,197,216,112,63,194,177,160,157,224,
90,97,3,139,118,181,77,18,175,85,52,163,131,230,230,114,58,204,171,251,163,72,44,159,132,206,144,38,6,194,98,56,214,9,98,101,115,3,93,70,133,158,156,155,127,211,50,186,56,91,106,224,158,46,29,41,89,80,
6,183,69,78,108,69,3,86,10,159,75,22,79,155,159,45,210,33,47,211,28,148,201,184,201,122,17,195,172,182,72,114,0,38,229,68,135,0,239,201,186,20,126,94,50,167,133,209,11,249,34,214,214,242,56,125,158,157,
52,85,196,222,137,97,204,134,28,24,247,6,176,185,148,195,186,106,98,205,217,197,102,183,138,218,254,89,100,181,48,114,71,51,56,186,216,194,158,209,109,24,60,252,36,84,216,110,103,242,27,212,130,38,162,
1,202,145,114,89,213,10,57,31,195,240,132,82,200,94,67,186,221,205,8,98,222,246,223,126,61,247,250,223,250,245,214,155,62,240,145,31,26,8,127,32,248,94,255,139,55,59,98,205,210,184,183,86,185,54,90,175,
77,236,111,213,213,189,237,38,34,12,113,246,194,106,130,38,52,214,111,175,161,104,82,224,102,201,108,146,82,53,152,72,96,144,110,85,204,128,206,207,136,57,136,211,104,72,146,129,12,59,120,92,78,76,143,
142,96,219,182,25,123,199,81,113,205,203,11,243,248,196,39,62,133,207,127,249,246,173,140,228,30,27,136,64,22,38,148,227,74,250,150,125,63,54,54,90,135,239,11,11,54,216,56,149,34,27,99,238,12,210,139,
114,187,3,3,58,1,17,161,240,223,215,105,96,64,172,39,175,35,31,244,193,156,28,133,82,92,133,121,126,14,126,2,32,49,53,141,208,16,245,150,76,235,177,83,196,120,157,147,227,195,240,4,188,54,211,200,244,
30,41,30,46,2,242,192,200,56,174,155,26,197,208,198,121,184,170,57,94,3,241,35,255,16,56,138,143,172,78,182,85,25,210,93,212,194,77,213,133,71,43,109,124,169,231,192,162,232,44,2,204,54,68,2,184,11,15,
233,128,118,72,183,65,72,176,178,131,173,59,220,56,163,123,80,37,192,98,181,34,250,233,150,251,120,222,32,59,137,159,242,65,110,241,101,210,169,91,52,64,5,209,131,107,27,168,214,234,240,251,221,232,24,
116,228,212,150,171,231,210,24,168,42,216,206,112,236,81,60,40,36,131,48,118,77,162,197,48,188,126,114,19,135,18,97,134,247,8,22,55,31,197,137,165,83,152,28,245,34,176,59,76,109,196,206,86,108,65,169,
52,84,173,148,245,104,233,245,89,181,82,120,58,43,154,148,238,106,49,28,111,190,241,3,31,97,88,248,175,47,223,23,124,249,79,190,67,235,166,54,102,28,205,218,139,19,94,207,211,38,6,135,61,195,20,182,145,
46,123,11,245,93,68,116,17,93,175,70,199,41,58,73,86,171,229,232,120,101,117,155,215,229,65,148,141,153,12,135,46,108,228,232,37,16,61,40,81,183,53,216,152,140,58,136,81,227,141,82,43,197,201,138,94,106,
198,179,103,207,226,83,159,249,60,67,77,155,97,184,31,110,54,100,153,14,91,92,116,91,6,184,217,90,146,92,32,183,200,146,45,59,100,26,78,86,203,213,139,121,180,37,29,221,52,224,228,117,203,28,238,78,2,
232,50,183,134,32,89,169,193,16,182,64,32,170,116,134,142,129,36,12,119,16,202,153,211,240,166,214,237,197,72,129,193,33,4,36,185,64,46,138,96,238,15,5,49,60,194,239,68,16,148,54,211,216,22,79,226,250,
153,41,140,84,210,112,151,210,100,54,2,79,230,122,93,62,96,219,30,168,215,63,221,6,159,76,173,201,154,223,147,109,7,238,212,253,88,231,251,22,89,217,14,181,172,42,1,221,86,185,8,66,121,81,94,23,96,18,
140,236,48,108,122,172,59,61,88,37,104,27,116,207,222,6,37,10,245,224,96,56,130,8,143,163,73,221,241,8,29,254,35,198,174,211,52,108,185,80,44,27,152,91,204,176,94,117,60,241,178,89,28,24,14,96,44,208,
135,115,103,86,209,232,15,160,78,169,82,85,123,240,95,189,199,30,30,58,126,228,81,44,166,115,216,51,225,164,123,175,65,181,136,171,34,35,90,149,15,182,171,210,110,42,106,41,235,82,106,149,29,61,167,171,
207,114,58,238,126,205,171,126,175,120,217,13,215,233,127,252,191,255,72,127,251,59,222,43,249,180,255,37,229,95,128,175,116,246,110,181,151,90,29,70,62,247,219,74,79,123,137,226,139,248,181,98,1,78,246,
80,247,240,8,188,12,145,1,134,94,47,43,33,192,158,164,50,124,150,43,77,228,232,68,183,198,209,236,187,64,210,193,233,136,249,217,187,200,46,10,193,88,161,131,149,135,12,228,122,60,14,12,37,34,8,57,29,
208,88,145,217,92,1,103,22,86,236,140,14,153,170,106,231,40,144,9,6,1,158,201,214,147,49,52,49,34,162,33,183,104,195,180,195,182,202,94,239,150,121,85,134,84,146,8,130,116,227,87,94,113,24,59,227,97,184,
43,52,1,108,64,209,77,133,179,115,168,136,9,143,38,225,26,165,249,56,55,135,222,3,247,217,67,36,129,72,2,225,209,81,4,8,122,73,250,244,144,85,67,212,120,131,158,0,174,154,152,192,84,105,29,222,204,50,
156,102,203,206,251,83,101,105,38,207,165,62,237,249,80,146,253,80,39,182,81,247,77,35,167,186,241,241,133,77,156,162,231,238,18,8,194,242,54,232,228,33,223,193,6,157,212,240,86,8,150,165,4,178,254,69,
198,249,100,193,187,0,149,161,130,122,208,137,77,118,224,52,53,161,78,189,57,222,105,226,242,100,28,147,236,168,126,154,54,176,29,100,155,15,157,29,190,77,169,146,162,70,222,220,72,147,164,156,24,30,76,
176,45,138,172,103,106,206,147,27,216,199,150,218,102,122,96,144,0,150,6,131,88,141,184,176,150,101,72,78,81,87,123,42,104,231,151,161,53,21,104,38,141,147,225,100,93,181,121,117,188,14,49,96,190,144,
101,14,141,60,96,197,18,95,62,66,155,62,63,191,112,85,146,250,233,125,127,243,119,235,242,45,254,43,202,191,0,223,235,95,241,98,135,153,89,61,100,213,42,47,85,20,199,176,221,211,217,40,10,25,207,162,126,
210,93,116,184,163,99,8,176,181,61,4,137,43,151,71,182,209,70,138,26,170,70,161,45,3,184,162,9,107,12,179,26,133,155,139,149,162,17,128,162,169,100,250,77,222,147,36,2,233,253,146,121,226,230,207,22,195,
220,34,93,93,73,146,4,36,60,243,124,108,95,187,177,58,108,36,162,206,102,79,185,177,159,223,235,198,204,112,16,123,39,3,24,14,59,224,97,123,24,194,190,236,143,163,253,3,216,201,176,31,33,112,125,141,50,
60,109,134,38,2,62,204,70,34,97,34,190,123,31,162,162,247,30,61,2,149,225,222,162,94,83,51,41,94,135,11,94,178,156,151,108,238,226,185,147,12,189,179,100,250,190,70,1,158,244,18,148,112,16,93,62,36,17,
96,107,0,157,64,138,245,217,187,26,88,252,221,12,132,145,138,244,227,147,223,186,27,217,82,137,178,193,180,181,172,236,55,45,97,246,34,243,93,4,160,104,99,209,112,109,118,82,118,37,22,130,145,207,237,
193,111,106,68,249,190,134,12,165,240,124,117,190,230,109,213,144,100,135,75,146,197,34,212,212,94,254,189,116,218,30,143,45,46,93,194,114,147,157,63,151,175,160,76,195,252,232,201,69,4,9,184,167,95,182,
3,81,118,78,111,215,135,5,214,111,217,167,161,196,227,52,163,62,212,70,134,97,165,90,8,20,61,112,133,119,194,17,25,180,53,176,202,206,208,81,157,104,110,59,144,235,206,236,252,59,171,127,232,129,175,223,
126,191,114,226,200,145,63,232,27,72,230,255,241,83,159,63,249,185,143,127,68,121,209,111,252,138,235,143,254,232,13,218,91,223,246,174,255,48,19,254,11,240,189,225,53,175,80,90,237,106,212,180,90,151,
247,138,155,131,86,169,168,171,26,101,60,89,73,163,96,215,249,16,23,233,148,132,76,246,66,234,91,84,233,112,55,101,51,29,2,208,193,30,44,122,141,194,12,110,62,100,253,133,197,16,87,167,120,207,231,11,
118,175,151,212,248,28,129,40,174,185,213,49,208,144,5,68,53,130,147,161,185,156,205,218,51,6,50,231,42,140,33,6,64,182,198,16,253,24,141,70,113,96,255,110,252,194,115,174,195,115,111,186,2,87,30,28,199,
244,152,143,161,163,67,227,209,195,182,104,63,6,105,98,84,58,72,61,216,134,39,108,193,231,84,109,157,23,102,3,201,54,184,56,115,2,234,250,26,27,154,161,152,141,238,148,69,221,27,171,232,174,175,194,33,
204,87,200,193,55,127,150,108,183,6,103,49,109,179,93,109,168,31,233,193,49,56,119,28,132,238,15,216,59,226,43,169,53,84,55,214,144,214,220,104,209,36,84,211,105,228,132,137,25,246,151,22,22,80,102,180,
16,144,202,190,211,18,13,4,132,242,184,88,100,160,91,64,104,27,17,27,148,202,214,20,225,133,207,139,174,236,178,126,139,236,252,43,12,197,101,94,127,64,118,90,16,205,76,13,29,99,39,116,176,35,181,249,
186,197,14,173,201,40,4,235,119,241,252,18,210,12,171,50,12,21,97,135,89,93,91,71,131,33,181,77,163,178,91,243,161,95,243,162,25,143,162,62,58,128,100,215,131,161,44,29,188,39,6,55,1,167,21,115,182,140,
16,230,238,13,140,102,21,95,248,155,26,156,139,39,78,205,69,207,60,114,228,215,246,94,182,247,3,255,240,185,175,100,15,237,217,19,40,228,178,7,35,177,168,78,38,148,47,250,31,42,255,2,124,111,252,171,119,
245,94,253,210,23,54,204,142,81,235,116,218,65,179,221,12,89,149,162,87,213,53,69,11,132,160,198,226,208,36,245,104,115,29,74,189,102,143,161,121,8,12,34,10,73,54,94,188,205,222,68,240,72,202,122,130,
252,237,96,133,119,201,16,6,123,106,129,128,115,16,72,49,234,60,7,25,163,68,192,166,40,150,75,100,62,153,62,146,158,47,123,173,116,200,10,18,182,236,155,192,144,25,5,136,3,9,191,236,166,133,231,253,252,
47,226,178,171,158,136,96,255,46,248,146,219,16,239,235,67,194,223,132,71,178,128,139,38,252,60,142,107,220,139,224,142,42,124,219,156,112,244,135,37,82,209,153,210,180,100,50,80,43,37,123,237,134,131,
225,221,41,199,238,118,96,10,219,18,60,214,218,42,65,181,9,141,108,169,26,77,178,139,132,33,178,74,184,139,21,255,0,194,147,187,224,137,247,163,59,62,131,2,191,227,89,163,131,85,143,139,160,235,80,167,
117,48,202,112,31,137,133,177,176,180,98,187,95,73,150,144,1,115,209,172,146,209,35,179,31,23,65,104,63,151,206,192,34,191,203,144,145,60,196,193,11,16,47,206,137,139,30,108,241,181,28,89,176,192,168,
99,240,122,61,236,176,253,148,44,9,178,91,200,225,132,95,180,26,129,220,227,223,180,40,85,100,29,74,131,236,93,111,154,172,99,19,243,139,107,216,61,57,130,43,166,7,209,239,240,160,93,161,212,201,22,49,
201,247,102,107,22,162,254,8,220,41,126,247,244,154,237,228,41,156,24,181,218,94,181,221,30,81,81,119,84,186,165,81,163,84,62,248,180,95,126,254,59,163,222,120,39,151,73,79,241,241,155,129,64,96,233,159,
62,243,249,149,71,238,187,67,123,197,203,95,234,190,245,53,175,84,223,252,214,119,62,102,38,252,190,134,227,245,183,222,98,24,149,198,106,199,232,46,209,76,116,41,114,99,221,118,131,234,181,204,106,160,
190,146,97,10,126,78,214,215,106,70,29,190,174,129,1,246,180,177,48,29,149,174,160,159,61,49,201,208,19,102,229,233,252,139,58,217,66,132,178,204,93,10,192,162,94,31,34,172,104,194,205,118,183,181,102,
155,21,47,139,102,84,148,25,202,101,32,91,214,251,202,248,161,80,84,136,2,243,57,55,12,226,153,55,63,13,219,247,94,99,143,239,217,83,106,178,208,198,29,165,254,171,162,185,114,22,221,140,1,87,40,78,141,
67,19,16,202,33,48,18,129,107,106,4,86,160,1,35,67,0,180,53,59,91,89,134,139,84,97,29,130,67,22,196,203,144,134,228,241,169,108,88,209,116,180,10,208,8,76,226,19,10,27,188,17,115,35,107,5,144,116,251,
109,237,153,101,103,185,171,92,131,62,26,227,121,120,52,126,199,251,30,57,73,118,217,64,122,85,230,158,107,56,124,249,1,108,219,181,221,30,124,223,36,251,216,251,29,242,220,178,38,70,0,102,47,17,32,128,
100,185,170,140,113,202,79,113,243,91,161,249,226,99,11,152,50,245,167,81,239,245,200,118,5,214,121,154,230,166,195,58,138,48,84,79,145,105,39,66,91,201,15,146,145,45,243,198,26,129,175,82,79,110,210,
52,45,81,75,27,36,132,190,190,24,130,65,47,9,160,142,252,102,25,174,114,27,147,193,4,77,71,20,22,235,220,183,122,158,250,143,145,138,245,32,78,92,149,173,238,58,213,126,109,210,218,167,68,171,251,194,
62,213,189,239,230,177,219,71,199,198,219,95,251,212,157,83,181,82,241,154,98,42,245,201,23,60,229,230,74,185,144,235,47,231,243,151,91,172,200,63,253,139,63,47,255,249,255,247,127,183,128,244,111,148,
239,11,190,63,127,219,123,240,123,175,188,181,109,182,123,27,70,195,56,223,233,169,69,83,213,125,166,105,68,122,141,146,75,107,86,20,7,43,80,21,61,199,198,113,13,142,146,156,231,237,249,218,64,44,106,
79,149,249,45,234,61,134,90,169,240,154,195,133,42,123,121,65,102,33,216,75,37,247,77,146,61,29,100,55,23,27,65,194,135,139,128,148,74,46,49,236,74,197,118,36,228,18,124,22,63,155,164,80,126,193,83,134,
176,107,247,78,134,211,73,182,136,206,163,241,13,41,12,185,133,205,243,88,62,126,154,13,203,202,164,224,79,101,178,12,225,52,55,60,142,220,4,166,107,202,189,218,146,176,92,52,21,100,107,123,206,151,13,
39,107,78,4,116,118,106,21,65,97,63,136,56,77,26,91,186,25,133,127,46,185,11,231,189,113,108,22,85,68,138,53,56,215,23,177,76,144,125,254,204,2,66,241,0,195,163,36,189,14,227,204,252,42,66,100,61,15,67,
157,236,15,211,239,243,97,146,225,186,65,22,79,179,113,101,160,93,182,22,145,249,91,9,171,162,9,229,28,54,3,10,202,46,20,27,108,23,126,223,2,31,27,137,159,223,250,44,223,35,8,235,100,187,148,211,141,60,
79,222,35,176,100,153,192,48,59,100,146,231,12,144,33,221,98,96,248,154,12,104,183,218,6,69,113,27,149,178,48,97,15,75,43,25,148,75,53,236,153,30,65,34,238,39,131,203,50,230,12,218,212,219,114,108,233,
156,154,212,189,156,107,194,173,104,215,56,252,138,55,29,143,13,105,129,192,80,168,223,169,234,145,236,169,141,65,179,92,143,14,12,70,62,191,150,174,182,138,217,204,1,130,239,102,94,205,220,228,174,61,
169,91,94,123,139,122,203,173,175,214,249,192,95,252,197,95,110,201,218,239,83,190,47,248,164,188,229,189,239,199,219,63,250,241,238,111,255,226,47,21,187,150,50,215,211,156,203,12,92,53,74,100,87,183,
211,164,225,237,56,148,114,65,113,78,110,135,99,98,134,96,234,192,209,71,209,90,200,218,83,106,238,8,169,156,58,81,39,131,201,68,123,138,64,43,176,209,237,125,96,248,229,68,108,251,89,161,178,93,153,45,
206,61,94,169,101,20,217,80,178,239,139,96,139,24,160,81,232,217,189,122,207,108,2,147,195,110,26,158,32,223,112,109,1,167,43,64,58,143,234,234,67,40,156,94,162,70,163,137,113,122,65,175,141,114,190,75,
32,119,80,79,23,41,198,9,176,224,14,132,18,178,48,135,33,159,218,70,118,21,221,186,49,52,129,204,243,74,111,151,90,234,50,108,119,195,49,123,213,218,70,116,22,247,140,63,3,15,186,183,97,217,53,141,162,
127,28,142,90,9,245,110,11,159,59,189,134,141,114,7,110,205,129,64,79,214,5,247,176,239,192,24,194,49,126,15,167,207,102,156,74,42,109,167,155,197,195,33,60,225,250,107,16,165,214,218,88,93,69,145,157,
67,234,65,128,102,135,89,129,38,207,111,91,25,249,210,118,145,208,187,5,68,233,12,14,246,88,213,166,98,50,173,160,146,64,105,16,112,89,118,254,172,244,80,214,103,146,18,97,154,76,56,192,239,168,242,117,
198,13,180,233,220,157,236,240,6,37,206,234,242,42,214,86,214,108,2,8,133,252,252,190,22,50,100,194,205,38,35,229,224,0,244,169,73,212,25,77,228,220,218,228,20,176,219,1,199,12,127,243,50,162,132,29,186,
195,107,77,43,221,226,30,119,163,56,29,247,121,219,207,126,249,83,143,132,2,125,173,35,119,30,57,80,204,164,199,19,33,255,215,43,75,133,242,220,67,247,205,24,245,218,118,143,215,85,127,203,59,222,211,
176,191,206,247,41,63,16,124,23,203,187,63,249,89,235,189,159,255,74,227,21,175,187,109,165,93,111,157,48,59,189,197,174,238,210,58,138,21,181,172,142,87,233,52,84,37,183,9,199,240,4,156,227,19,80,86,
23,237,125,245,100,13,131,147,225,192,69,16,130,33,37,197,80,84,165,1,241,178,210,229,164,34,182,251,124,46,76,15,37,96,42,186,189,13,133,184,55,153,134,147,53,194,146,155,103,107,30,86,148,252,220,62,
158,196,196,32,197,155,89,67,179,94,134,98,230,168,75,86,41,250,31,198,230,201,227,48,230,74,240,108,86,237,221,75,195,51,59,224,13,37,9,124,86,228,122,5,138,39,14,127,116,24,161,232,160,173,141,20,217,
129,138,199,165,73,102,120,39,67,240,137,232,203,174,135,226,125,52,132,222,158,253,104,78,31,192,145,200,33,220,29,57,136,53,189,15,69,47,77,71,223,54,180,92,97,50,73,1,119,173,27,118,14,93,167,184,65,
214,41,99,165,172,98,100,132,122,152,96,114,248,194,200,84,235,136,15,15,48,36,235,212,100,192,158,100,2,137,80,16,75,12,193,50,23,45,99,137,21,58,99,49,100,178,185,166,24,42,123,188,241,187,138,48,158,
199,181,245,16,0,10,16,69,255,202,115,201,200,81,8,198,14,65,88,243,50,20,147,9,203,252,78,178,134,164,159,175,203,118,32,81,186,227,176,56,110,9,249,188,14,249,142,66,4,146,188,80,41,85,25,130,155,88,
94,207,217,251,16,142,110,31,129,123,80,166,233,130,88,107,169,168,196,146,168,116,105,184,20,146,9,251,187,211,190,67,124,135,167,174,135,28,168,246,13,205,134,3,225,97,95,204,165,185,194,185,51,155,
219,219,165,82,253,233,63,255,172,219,107,133,174,181,242,224,61,207,176,12,99,38,49,60,116,246,237,127,243,193,202,133,175,243,47,202,191,9,190,139,229,157,127,251,193,238,239,191,236,119,43,29,163,181,
72,1,50,223,85,180,117,130,134,186,180,25,233,181,202,46,130,80,81,23,78,49,164,178,34,199,38,160,245,15,66,103,216,212,42,69,120,168,249,100,48,57,200,16,48,68,33,31,166,40,150,225,2,153,225,24,219,54,
141,58,27,191,82,111,81,92,243,75,151,203,246,220,168,232,63,161,2,17,235,46,135,130,67,59,134,237,236,151,74,41,135,53,123,89,100,10,237,210,42,230,142,206,97,254,209,52,25,183,139,136,238,133,127,116,
28,254,145,49,196,182,109,67,63,177,42,44,16,112,241,245,190,49,54,12,77,192,201,71,208,43,151,236,176,43,131,181,182,227,20,144,71,61,80,182,169,112,237,35,19,79,147,67,194,1,28,73,41,120,36,235,130,
225,13,193,162,44,144,25,140,170,131,206,221,232,33,19,156,65,199,45,9,1,235,24,9,117,240,181,19,13,228,41,228,117,153,252,33,17,185,253,58,38,39,251,16,33,219,21,203,117,84,105,66,74,178,123,106,174,
128,253,123,119,227,240,213,87,218,99,158,203,243,11,246,22,110,194,126,178,101,155,61,53,201,98,147,27,159,250,220,52,35,252,254,146,238,213,150,27,210,240,61,1,158,212,143,189,232,93,64,40,117,197,8,
82,33,19,110,146,185,115,212,124,46,106,238,41,173,135,169,160,31,97,214,191,108,168,46,147,1,178,147,151,131,223,185,69,34,72,109,166,236,12,116,217,117,182,143,117,43,123,199,44,164,74,88,167,121,234,
121,93,100,120,39,86,151,202,114,199,110,24,169,28,220,178,92,132,17,74,115,43,138,59,234,8,104,142,246,180,213,202,239,113,183,26,99,35,99,125,107,135,95,112,248,216,241,47,31,245,214,230,206,223,136,
106,165,56,125,112,255,131,111,249,187,15,255,192,217,145,199,12,62,41,239,248,251,15,91,239,251,220,23,59,191,247,178,151,103,122,102,239,52,219,238,76,87,209,203,29,77,15,152,157,70,212,106,85,117,221,
108,219,107,85,29,59,247,218,153,30,14,86,136,131,90,39,210,110,98,40,145,192,16,53,97,130,159,73,208,177,121,146,73,196,182,111,67,129,33,33,79,141,38,99,92,114,171,83,67,180,162,13,62,9,49,64,148,64,
216,71,64,140,140,12,80,183,180,144,43,26,240,187,105,234,228,246,5,103,51,168,20,58,240,145,213,226,251,182,246,86,81,105,128,130,102,19,209,212,60,92,108,69,39,67,168,168,68,156,57,10,37,151,178,29,
29,97,205,87,182,196,53,168,81,205,233,113,24,209,26,148,64,25,142,32,141,140,194,70,152,63,131,135,30,78,35,91,144,198,162,9,210,93,208,189,78,118,22,70,253,184,128,124,27,217,155,149,88,92,192,3,235,
30,172,175,164,224,228,119,181,154,12,195,108,224,0,63,27,8,133,209,232,170,232,80,139,5,135,6,248,157,52,12,146,141,118,142,12,218,97,113,126,113,25,78,151,3,229,66,17,117,234,46,9,173,78,25,80,231,119,
151,42,144,108,107,41,45,134,117,246,67,155,245,68,30,136,54,149,53,211,34,31,12,83,6,173,201,134,212,174,117,178,103,154,157,36,197,115,212,120,13,14,2,124,156,173,60,232,167,30,103,103,247,8,59,242,
251,203,144,142,205,192,172,79,113,198,249,98,213,214,131,139,171,155,136,15,196,121,237,10,220,129,16,214,10,46,108,156,77,33,179,218,98,36,105,83,163,155,4,161,135,242,135,60,172,24,110,197,106,198,
188,190,78,116,116,95,60,238,244,35,174,214,186,3,189,116,101,214,107,89,199,119,223,124,243,209,55,190,243,61,255,126,205,247,175,149,119,125,228,163,189,247,126,230,11,205,223,254,245,95,79,89,170,126,
214,82,29,231,9,194,94,71,115,196,123,90,215,103,117,91,138,202,80,172,54,234,20,175,116,94,236,57,142,236,6,60,50,12,147,72,34,50,53,131,48,123,106,136,238,210,203,144,82,99,248,41,209,61,178,70,237,
124,190,22,193,104,107,27,134,176,254,254,1,28,156,158,226,231,187,24,29,139,82,43,182,81,109,245,16,11,57,209,147,84,174,245,2,53,29,245,19,25,73,247,208,144,247,154,104,251,28,112,235,236,0,233,77,116,
82,27,232,85,201,44,169,53,168,212,163,42,29,174,172,209,21,6,177,151,118,82,151,246,102,118,163,21,140,162,192,198,47,21,232,182,91,101,2,40,141,90,62,135,249,85,11,169,84,19,45,30,203,197,239,226,161,
140,80,217,40,10,207,213,113,6,201,86,97,52,59,46,148,226,7,236,77,136,250,149,42,106,141,54,30,152,207,50,196,117,17,224,137,66,1,55,6,39,98,24,155,140,218,27,94,230,115,21,94,75,129,192,91,130,108,142,
121,243,115,158,129,73,118,194,37,178,96,154,97,217,222,196,146,29,81,66,177,0,78,22,104,73,114,171,244,68,9,197,23,77,145,124,139,14,129,103,180,69,67,91,146,233,70,16,178,83,242,245,6,195,108,142,70,
111,83,145,244,46,217,173,161,141,109,78,2,95,230,221,125,126,123,163,166,46,67,176,74,54,148,89,160,50,217,119,149,78,189,70,32,134,105,154,146,73,74,39,2,116,97,163,140,98,199,139,232,196,1,116,212,
62,172,47,178,115,86,101,39,136,50,156,193,32,52,167,162,232,110,75,119,133,148,168,166,86,103,53,179,178,215,235,116,71,251,103,134,31,137,95,219,119,246,13,191,255,98,243,255,252,197,223,110,1,231,159,
149,255,16,248,46,150,247,126,226,211,221,87,188,226,149,85,154,130,37,75,209,30,53,123,214,163,166,238,138,144,180,163,93,179,225,214,202,89,69,95,91,132,158,75,67,103,184,85,89,169,174,225,113,248,118,
239,133,135,140,224,99,37,56,114,89,184,36,83,154,128,171,177,162,43,172,16,131,0,100,60,68,44,26,193,147,183,205,96,199,244,44,149,115,9,67,99,17,123,246,64,26,34,25,97,207,173,213,104,40,10,4,57,5,113,
181,13,117,126,13,217,205,13,84,71,119,161,49,48,139,124,180,143,13,68,77,85,204,64,47,21,160,241,152,182,81,177,155,141,255,178,114,49,48,10,236,191,210,30,162,40,204,167,176,177,88,163,238,52,80,206,
84,208,162,142,139,249,70,233,10,217,97,148,12,198,93,243,112,27,105,186,233,6,178,153,58,28,81,50,42,245,90,29,1,56,134,182,35,49,58,137,241,144,203,118,218,143,44,21,208,171,23,16,177,242,182,243,212,
24,254,61,46,86,183,195,139,149,2,175,155,224,129,207,3,111,187,99,239,102,58,53,50,140,52,117,241,198,234,6,93,187,130,44,205,138,189,65,57,175,81,161,169,145,43,150,197,89,246,253,134,89,247,98,76,182,
178,175,73,228,252,90,146,135,40,63,123,18,42,228,219,145,209,101,176,184,193,191,207,50,18,109,104,78,52,249,153,254,78,131,32,84,48,68,19,20,35,192,189,6,117,130,253,89,50,40,59,130,44,10,43,229,139,
200,178,131,204,45,108,48,202,212,176,125,215,12,235,192,139,72,223,8,206,167,8,232,51,75,200,174,240,251,211,224,248,188,61,184,130,116,238,206,46,175,198,240,168,104,70,188,137,94,36,186,47,50,108,213,
219,209,206,138,81,123,221,139,95,86,121,195,27,110,53,223,248,150,239,77,219,255,79,129,79,202,59,255,238,239,173,247,126,242,51,157,87,189,234,213,197,86,173,54,175,250,66,231,186,150,74,159,169,13,
118,117,37,98,185,84,85,151,233,38,106,44,93,86,244,143,77,218,155,242,168,100,25,135,207,203,11,15,195,205,202,209,104,80,54,233,204,100,29,173,228,216,201,134,218,207,25,31,194,118,50,150,155,154,199,
27,181,16,29,136,160,205,10,172,54,58,136,5,85,116,171,108,96,25,59,164,6,243,186,147,136,247,243,216,84,24,155,203,25,156,205,149,176,232,242,195,77,70,209,216,219,125,12,243,42,157,170,236,102,42,13,
35,49,77,241,81,73,239,60,8,36,134,161,122,217,139,221,33,152,21,11,141,146,197,48,88,135,233,142,34,234,142,96,215,104,18,87,236,204,227,9,59,22,177,175,111,13,145,218,105,204,29,35,107,185,134,17,232,
235,131,131,70,66,161,42,55,201,132,94,183,31,21,53,130,178,43,137,128,149,67,191,187,134,243,105,3,167,214,12,104,166,2,89,149,31,140,6,49,56,226,195,212,84,31,170,93,13,249,84,30,102,54,139,135,79,158,
70,60,17,195,47,191,232,133,232,241,18,207,158,58,101,135,99,153,210,147,17,4,25,150,177,141,18,77,146,108,47,39,192,147,97,26,113,194,2,56,123,140,206,254,126,91,38,77,254,142,120,132,201,231,53,2,49,
195,122,206,144,17,37,11,103,138,142,125,54,232,165,59,143,195,224,251,21,118,62,75,230,230,25,13,228,182,99,185,172,100,207,48,114,16,209,147,179,227,24,24,220,210,132,39,151,74,200,52,188,240,246,239,
71,165,226,68,113,113,21,238,22,219,83,244,189,223,67,26,236,41,148,222,14,135,175,215,103,173,230,246,90,71,211,123,144,175,187,209,108,110,252,225,239,191,188,254,39,239,251,32,175,112,171,252,167,193,
119,177,188,227,131,31,178,254,250,243,95,54,127,231,133,47,76,117,205,246,35,112,251,30,106,91,90,171,163,59,147,93,153,231,9,251,21,217,157,73,171,149,109,81,173,209,17,43,12,131,74,46,99,11,237,192,
196,12,150,233,132,151,8,38,157,58,241,230,203,14,98,47,67,247,16,65,233,47,101,161,13,208,180,208,77,122,253,10,226,49,134,84,171,141,22,43,200,164,107,179,232,206,60,125,179,24,60,120,21,6,166,166,105,
2,216,208,103,78,160,190,188,4,139,21,220,99,227,244,29,56,12,215,216,212,22,91,136,192,103,163,201,188,172,184,81,185,181,150,202,240,235,158,217,142,224,56,181,92,189,73,115,36,185,117,35,136,15,77,
34,64,221,21,116,156,66,44,214,68,114,98,31,182,13,155,152,113,159,198,131,247,173,97,109,211,68,187,75,173,202,14,32,236,214,236,116,81,119,69,225,159,220,131,161,254,48,188,173,52,206,174,84,112,108,
190,104,207,131,251,242,105,88,46,29,61,89,135,160,244,144,42,183,177,82,99,160,236,75,146,137,117,140,177,17,103,9,206,177,153,25,44,172,175,35,151,201,218,251,186,200,70,77,58,25,208,229,161,49,98,253,
9,203,9,48,196,173,75,145,48,44,78,216,206,196,150,206,37,96,180,31,91,0,149,206,38,225,184,204,80,188,234,36,251,202,194,38,202,160,201,118,21,83,33,63,6,130,33,36,120,60,141,157,223,228,113,58,12,197,
166,60,167,51,222,36,8,83,153,42,142,156,88,176,181,225,85,87,95,70,35,100,81,27,15,97,101,83,65,237,204,25,244,50,121,176,25,225,34,243,59,252,50,7,78,65,186,212,240,233,15,44,143,106,203,107,215,162,
144,63,216,43,23,213,55,188,240,215,242,127,248,59,47,173,255,201,7,62,108,253,151,129,239,98,121,247,63,126,188,247,190,207,125,165,245,242,23,189,104,163,107,41,15,155,150,58,79,22,140,154,46,103,194,
114,107,78,209,128,154,55,0,61,146,224,171,17,232,12,191,180,84,116,171,25,70,33,143,189,75,232,30,58,213,189,197,148,61,29,38,21,40,91,231,54,131,110,248,167,18,108,52,133,204,216,131,179,215,66,83,210,
224,201,80,141,170,133,128,22,64,52,222,111,3,201,193,254,30,167,241,72,80,83,182,143,29,135,118,238,180,189,92,211,189,115,55,28,35,83,232,158,63,77,5,207,158,46,97,184,90,66,59,147,166,46,162,228,140,
70,161,109,44,243,90,114,8,48,28,251,67,81,123,254,90,2,74,181,91,67,187,186,206,99,231,225,84,155,116,235,41,44,46,86,113,234,92,27,38,117,165,218,40,35,54,54,14,119,40,64,32,251,217,10,1,40,186,135,
0,247,162,236,158,68,133,172,55,170,203,226,161,46,238,103,72,174,208,73,150,42,109,44,173,101,49,59,61,136,3,187,250,177,125,207,78,156,217,200,163,75,103,156,63,115,22,199,168,255,14,95,113,8,87,62,
225,26,228,114,116,249,236,76,162,137,101,87,126,151,71,26,88,66,177,48,33,213,4,235,222,222,131,90,192,199,58,147,255,183,88,240,2,22,229,85,62,17,103,44,9,174,85,26,160,85,74,128,140,162,35,104,52,176,
83,183,48,221,23,135,139,157,144,6,210,94,153,168,208,172,184,120,60,201,188,201,208,169,47,241,186,228,24,19,83,99,91,99,176,150,3,197,116,21,94,182,157,183,78,205,78,162,176,42,121,106,0,10,175,70,8,
56,106,40,218,124,78,211,235,117,143,86,45,141,43,149,226,85,104,212,118,154,78,189,254,186,151,252,230,218,127,57,248,46,22,130,176,251,242,223,122,113,85,243,7,206,91,154,235,126,163,99,165,200,71,253,
29,175,59,96,89,45,93,51,26,138,67,166,212,214,22,160,173,83,23,86,74,136,180,106,216,61,57,101,47,125,244,46,45,144,221,186,84,21,22,74,252,194,171,110,5,193,190,32,24,60,145,45,181,225,215,12,84,214,
179,152,91,98,207,44,108,45,232,246,21,75,176,10,37,232,97,217,69,85,135,223,50,49,48,60,130,152,65,3,35,247,116,163,91,85,102,103,109,19,164,16,96,138,244,108,178,200,70,56,134,101,134,159,22,181,33,
50,107,208,219,13,56,70,167,224,220,115,8,170,203,5,147,175,111,158,219,196,194,92,21,197,84,6,181,108,10,213,92,135,166,102,27,66,131,179,148,20,69,244,91,231,224,33,203,229,74,38,101,1,213,143,37,141,
236,69,163,231,135,149,152,69,104,114,31,182,15,199,160,25,101,60,184,144,199,201,179,43,88,60,121,130,12,99,98,251,76,63,206,157,91,36,163,71,176,148,173,34,219,35,224,165,179,16,4,227,94,23,118,241,
154,99,67,163,246,244,164,108,152,153,207,200,66,115,131,46,153,238,91,178,142,136,52,97,66,217,30,68,0,39,191,11,16,109,18,148,95,47,34,145,69,66,115,151,166,75,222,51,121,252,2,219,224,188,203,135,52,
227,124,176,94,198,148,222,197,144,36,46,16,148,17,131,29,84,134,163,168,73,219,188,78,113,198,6,117,246,234,242,6,13,74,3,25,186,251,112,185,138,107,9,232,160,194,142,46,14,154,90,177,157,38,248,86,125,
208,210,108,223,74,147,32,38,253,88,61,77,107,214,3,90,57,191,221,202,231,158,98,57,29,169,31,26,248,164,188,251,163,255,136,247,124,236,147,157,215,253,207,255,149,109,84,234,143,116,58,214,17,179,71,
197,225,112,38,77,157,173,82,203,43,122,57,167,232,116,173,50,38,40,26,48,112,253,19,183,134,75,22,231,236,85,97,82,113,29,134,232,198,64,16,30,127,151,44,215,68,177,220,130,131,128,106,230,100,97,81,
203,222,123,143,129,152,224,171,65,167,43,85,104,46,72,19,80,55,151,161,183,234,240,238,220,3,15,29,179,52,148,177,186,140,138,203,141,54,67,172,89,46,81,175,52,237,237,54,220,4,175,94,109,64,221,177,
27,174,203,14,195,73,240,201,30,202,164,24,168,241,1,168,100,169,46,181,219,194,124,29,11,11,77,20,140,40,93,227,52,158,250,196,203,113,195,84,10,207,62,240,40,174,156,160,155,94,123,4,43,143,156,162,
110,34,163,244,15,193,77,197,161,122,253,212,151,49,132,200,86,18,162,179,142,1,212,203,57,180,114,75,168,147,49,234,85,3,253,3,35,152,95,206,162,88,169,225,41,79,191,6,123,15,206,96,112,124,20,75,236,
96,43,103,230,48,47,44,207,144,222,215,159,196,224,64,18,153,141,13,62,54,237,65,106,201,229,147,41,194,173,116,175,45,128,217,217,50,23,158,139,81,145,185,114,73,103,171,55,106,118,74,155,172,200,147,
65,103,89,243,220,102,56,79,59,220,4,33,155,132,52,58,220,40,96,111,44,136,201,254,62,198,115,217,135,144,157,137,159,151,59,116,59,121,190,6,101,64,107,61,13,127,171,141,93,59,102,177,127,100,8,225,76,
17,142,190,109,128,135,114,170,234,35,153,48,170,205,94,101,103,152,19,112,246,52,38,165,168,116,10,181,237,15,169,102,60,241,137,31,42,248,46,150,183,190,231,189,120,255,103,62,215,121,233,11,127,109,
163,211,233,30,233,90,218,70,167,167,4,187,46,71,176,23,244,57,53,167,174,218,224,219,190,135,66,198,64,239,244,81,232,201,33,94,56,133,151,73,23,203,134,105,198,2,136,12,80,166,16,116,57,178,67,167,86,
177,43,178,76,71,24,240,123,209,231,239,179,117,154,155,127,175,179,199,106,29,153,200,167,203,148,222,155,207,64,105,54,1,185,183,26,67,124,83,230,58,7,6,225,37,3,58,201,34,14,130,223,75,160,121,220,
236,173,190,16,218,43,52,19,100,183,138,85,69,181,83,128,226,244,33,68,189,26,97,109,169,4,138,89,230,57,244,0,182,93,126,29,162,126,55,172,245,59,16,140,181,24,118,119,97,199,184,3,253,218,60,86,206,
231,177,145,163,65,80,189,104,202,56,159,74,87,204,190,84,214,163,80,71,247,32,64,70,51,55,78,193,146,221,238,75,37,100,23,86,176,188,176,4,63,117,227,204,68,31,30,126,224,126,59,11,124,131,154,112,149,
186,182,42,192,169,86,48,24,13,225,198,107,174,180,147,17,214,87,86,81,35,16,106,213,178,29,78,101,127,67,49,37,98,135,5,122,34,43,228,167,220,20,71,166,243,36,3,92,72,80,62,99,103,80,139,236,224,39,236,
1,125,70,151,22,163,192,166,219,139,5,119,192,118,255,178,184,105,196,239,65,152,210,40,212,105,35,192,72,33,159,211,100,74,145,199,153,164,54,189,54,164,98,56,53,7,119,110,29,30,154,35,111,193,128,111,
179,12,15,235,91,103,27,137,156,82,217,38,194,192,61,158,211,112,249,173,230,158,3,143,116,103,119,188,251,71,2,190,139,229,125,159,248,116,239,182,63,254,227,154,226,243,159,234,244,212,135,249,93,154,
29,69,11,152,161,64,192,10,249,157,74,167,173,104,27,75,112,236,187,10,142,167,191,128,33,207,65,39,203,64,75,151,166,80,11,246,204,28,186,142,46,74,108,204,88,220,69,199,171,33,76,241,17,232,209,207,
116,125,246,174,160,178,163,148,61,253,196,74,18,93,194,31,91,217,42,245,138,61,212,35,155,249,248,205,22,162,12,243,174,245,85,59,81,86,98,144,84,142,30,12,194,201,198,215,214,22,209,124,232,126,108,
108,46,161,54,186,13,205,248,16,42,155,27,176,22,206,81,87,198,48,58,58,142,201,112,28,201,233,9,84,207,30,163,166,243,160,182,62,199,227,167,200,224,77,58,218,18,26,153,50,150,230,106,168,158,95,64,79,
244,108,56,68,199,30,130,234,247,193,233,118,34,152,63,15,229,252,3,112,52,43,136,211,96,169,100,156,26,245,156,143,215,66,156,208,148,248,177,156,46,97,105,53,133,124,185,12,217,165,65,244,150,189,136,
107,117,149,224,94,132,143,46,251,242,171,14,219,153,50,11,231,230,80,149,117,196,100,64,135,100,184,144,177,228,203,219,35,47,194,130,23,126,202,211,11,191,216,117,35,89,71,146,190,37,199,150,23,4,32,
50,60,179,76,215,62,79,205,170,50,114,236,232,54,112,96,164,31,131,1,58,122,30,208,227,245,217,122,250,218,160,3,151,121,85,56,91,85,158,143,245,76,162,144,37,161,146,152,32,217,79,146,73,174,241,53,57,
182,152,59,67,115,163,62,187,199,104,31,188,250,131,250,192,196,23,126,164,224,147,242,214,247,190,31,239,254,240,63,152,175,255,195,63,202,81,67,156,236,180,187,243,157,78,79,51,117,103,168,231,84,92,
112,57,116,205,23,84,52,106,54,9,87,26,123,191,189,43,126,163,133,90,174,137,122,69,114,253,84,132,201,106,230,102,11,157,180,6,159,197,158,73,135,234,22,39,45,245,106,15,196,178,98,249,165,101,137,167,
140,68,8,32,29,130,70,190,215,96,207,237,144,5,20,182,178,56,107,217,24,220,158,95,229,219,178,128,219,61,54,1,207,240,40,26,37,10,237,181,60,86,11,13,164,66,253,192,196,40,195,156,97,175,133,8,30,56,
100,207,119,106,185,13,52,200,196,229,149,60,42,133,50,170,169,77,52,242,60,110,151,161,40,50,14,175,199,64,210,177,198,78,82,180,89,72,174,221,65,81,30,157,187,7,195,75,15,179,177,170,182,166,146,85,
106,194,76,33,94,163,193,208,187,177,153,37,235,85,237,140,31,73,183,151,148,44,25,110,241,241,17,162,51,21,208,12,7,253,184,106,223,30,236,216,181,11,231,23,22,145,207,102,237,172,112,217,253,64,222,
23,0,74,38,140,12,187,200,189,83,100,128,218,158,138,179,203,86,242,170,108,242,180,5,190,173,207,217,166,228,2,8,107,4,225,42,163,65,138,172,173,144,197,38,180,14,70,67,62,68,216,73,103,213,30,246,154,
21,132,28,116,200,188,126,217,171,198,164,131,78,59,2,212,145,65,56,120,110,91,141,178,78,101,22,169,195,166,173,247,141,244,218,251,175,56,170,13,141,255,153,18,8,175,243,173,31,111,57,250,233,79,233,
205,92,102,172,83,72,223,164,53,75,79,113,105,157,195,30,179,25,247,84,203,186,171,111,18,10,93,158,121,226,97,54,76,15,205,196,40,74,12,9,85,147,0,100,175,82,41,128,131,108,140,32,27,208,193,240,41,21,
94,11,135,81,103,232,136,104,22,194,12,55,46,158,67,165,187,179,7,30,88,9,50,242,127,188,111,220,190,1,96,148,104,27,161,195,11,164,215,161,24,20,201,213,154,189,125,133,220,242,20,135,174,99,232,205,
34,251,173,59,177,76,151,183,65,231,27,56,184,27,1,203,192,204,248,36,146,227,51,112,228,82,246,248,86,235,129,7,144,33,27,109,148,150,81,106,242,53,154,151,112,120,107,237,112,55,180,204,254,116,26,29,
61,132,227,107,65,60,120,198,71,45,25,193,190,250,38,6,23,30,194,202,198,58,78,119,122,88,161,224,151,59,41,249,226,73,184,162,97,134,124,11,70,36,106,175,97,145,237,74,196,152,12,13,244,227,201,55,222,
128,39,221,120,61,53,99,25,203,15,63,10,101,101,25,85,74,134,207,62,124,20,137,225,33,68,7,135,112,142,108,43,235,168,101,12,79,238,194,238,35,99,9,59,110,177,157,152,147,11,115,218,194,132,118,232,101,
159,100,221,217,161,88,94,147,94,34,200,224,239,162,213,44,178,156,147,29,238,198,236,50,158,107,164,161,78,204,162,215,63,6,207,241,187,161,51,44,171,148,36,50,132,85,160,163,255,82,190,131,77,118,176,
103,38,93,216,238,218,154,194,148,197,85,213,80,191,85,191,252,250,140,186,125,207,27,212,112,228,195,3,187,47,107,253,200,153,239,159,151,119,125,244,163,189,91,95,255,250,74,79,85,79,27,173,206,201,
174,105,53,76,218,99,211,237,8,245,154,21,246,41,153,61,206,195,65,13,231,146,73,242,171,110,160,246,27,70,132,161,46,82,73,33,80,201,194,73,139,47,169,91,180,184,40,244,15,35,75,131,98,145,29,228,182,
165,46,186,68,107,96,212,110,188,14,217,163,205,70,110,82,92,119,232,28,173,88,2,174,221,251,209,11,197,209,166,134,106,85,75,48,107,117,244,52,23,44,246,98,217,226,214,75,129,47,161,54,32,119,33,90,92,
132,182,188,136,0,221,180,115,108,28,10,67,183,236,60,229,28,101,67,116,219,112,83,86,246,106,12,61,188,182,228,228,14,68,250,195,112,180,79,194,231,175,32,156,72,96,60,217,197,160,190,132,65,130,124,
23,37,194,16,141,195,144,236,88,208,105,162,159,29,170,159,157,69,108,107,158,12,100,132,66,208,24,222,100,5,223,6,1,218,224,231,101,155,145,23,253,230,11,177,123,223,94,244,13,14,32,60,48,96,47,218,207,
73,174,94,165,138,221,125,73,92,113,248,114,184,8,218,149,181,53,148,11,121,123,215,3,59,125,139,172,39,83,118,194,124,50,187,99,135,194,11,64,187,200,118,91,123,215,124,135,143,46,126,70,18,48,116,214,
93,156,215,176,203,99,193,59,193,142,103,214,224,168,229,237,156,78,217,142,142,31,22,51,129,78,215,132,91,233,97,196,171,35,196,215,45,2,175,229,244,163,58,187,143,127,188,255,51,90,178,255,239,244,96,
36,255,231,255,247,205,255,245,227,124,255,145,242,182,247,255,181,245,158,143,125,220,120,249,11,255,91,170,99,41,199,44,221,61,215,238,244,186,166,230,8,116,85,10,58,143,91,211,168,147,28,100,5,71,188,
207,206,255,115,202,157,194,13,186,100,2,79,147,148,119,86,174,208,191,164,162,123,25,118,28,58,57,79,12,76,162,31,173,112,12,85,52,209,102,229,170,50,128,92,46,34,68,109,226,150,100,76,170,243,70,62,
141,146,135,94,103,116,130,160,101,120,37,168,148,204,38,96,11,121,158,135,32,240,57,52,68,216,112,126,106,32,49,47,38,181,155,81,175,162,69,198,181,248,154,99,254,4,130,12,195,137,145,49,244,143,76,18,
176,113,52,233,188,87,211,12,159,12,199,105,58,244,92,133,194,159,140,157,160,97,17,131,228,157,221,9,207,212,148,189,65,249,144,195,194,120,131,178,129,141,255,176,55,136,42,195,173,236,208,111,208,45,
86,105,52,36,68,30,62,116,0,87,94,121,200,158,150,148,13,58,195,4,89,124,120,24,225,81,89,85,24,176,151,155,230,201,192,235,53,186,89,2,102,132,0,29,30,27,65,70,118,21,147,49,83,190,102,215,19,89,80,214,
136,16,47,23,128,247,157,112,43,175,217,133,64,18,135,44,107,166,101,52,34,154,47,96,156,145,98,122,122,146,14,62,0,125,225,24,143,197,250,100,39,181,115,16,249,144,28,8,185,197,196,164,207,129,48,235,
75,142,103,200,122,228,145,217,94,103,247,193,187,213,225,177,183,234,225,200,201,228,200,36,195,11,217,214,62,209,227,164,188,231,227,159,176,254,230,11,95,106,188,254,127,255,241,106,189,84,63,202,175,
93,162,43,118,181,221,158,104,207,235,113,105,189,182,162,150,50,212,105,30,232,35,211,208,8,68,165,221,128,34,206,214,162,209,96,133,58,217,243,124,12,19,94,63,153,47,218,7,227,232,35,40,110,46,163,152,
244,66,217,127,13,234,150,147,14,179,14,55,63,227,38,131,233,50,206,124,244,33,228,72,58,141,201,67,104,12,205,162,78,214,84,154,20,209,217,13,104,146,249,188,186,0,101,115,5,46,159,207,30,6,146,157,19,
100,199,121,1,94,49,26,179,19,94,181,213,69,232,117,130,150,33,185,183,227,0,20,178,112,51,159,197,169,205,58,238,95,239,225,84,198,137,51,27,26,230,54,116,58,232,16,226,4,152,73,144,167,154,6,140,161,
73,184,2,4,248,198,2,78,81,47,61,72,179,81,103,195,155,100,44,89,7,210,102,71,145,109,71,166,167,38,72,238,14,59,29,76,50,128,220,30,175,157,170,38,187,127,201,24,224,253,231,206,99,141,44,152,111,52,
237,189,100,118,244,37,240,68,130,85,166,215,230,206,156,69,181,84,180,51,134,36,67,92,146,22,228,86,178,226,116,133,241,108,189,199,159,2,24,41,146,116,33,123,40,202,136,67,168,80,192,48,13,207,129,177,
65,12,177,179,184,206,83,171,182,155,12,183,110,177,206,54,235,137,195,230,95,83,91,202,195,198,34,216,126,168,198,71,172,230,174,131,75,234,216,212,155,181,72,228,107,3,19,179,140,15,91,229,113,5,190,
139,229,173,239,123,127,247,213,183,188,166,172,58,61,243,166,217,59,215,161,193,101,48,211,187,186,35,108,41,93,135,222,170,42,178,239,177,146,223,132,74,86,83,7,6,89,73,4,96,135,149,101,87,32,43,148,
238,88,39,0,69,40,27,27,107,200,119,20,180,98,163,88,240,38,80,143,38,224,142,248,249,57,13,132,17,116,151,135,140,100,161,180,154,69,138,44,85,36,40,209,159,176,199,206,156,178,152,72,182,197,32,203,
89,114,191,12,178,128,82,100,168,79,175,194,39,44,216,215,79,135,11,180,83,171,232,196,221,176,38,251,41,212,123,104,83,239,52,200,102,167,55,243,56,91,115,34,223,245,35,95,211,144,171,107,200,43,62,228,
45,29,71,87,55,113,239,90,6,39,235,29,156,47,215,176,72,224,220,169,251,176,193,58,144,149,126,114,19,28,105,200,0,89,118,106,122,10,147,147,12,245,52,71,2,10,217,213,213,236,24,252,164,66,162,174,225,
19,159,248,52,206,206,47,216,219,112,8,192,28,4,175,155,78,126,80,118,52,40,150,177,145,205,97,207,238,157,240,211,117,203,253,239,42,12,231,162,247,4,196,182,222,99,199,221,2,161,128,143,186,144,157,
88,86,197,5,168,45,135,121,29,7,84,11,123,14,236,129,191,188,1,189,156,37,240,104,39,196,168,240,124,252,184,252,255,157,66,0,146,99,209,240,70,209,216,121,32,223,155,222,241,33,182,211,63,234,62,127,
254,47,254,234,45,23,62,244,56,5,159,148,119,124,224,131,120,247,63,126,172,249,154,91,95,183,78,61,126,220,104,153,243,84,127,166,169,235,190,46,172,136,82,205,168,90,57,189,213,203,168,205,236,144,209,
168,218,83,66,118,239,149,159,108,0,73,127,114,6,8,166,146,129,198,177,99,12,125,45,180,40,204,29,116,174,108,71,4,216,101,157,254,0,124,195,227,118,99,153,115,231,208,161,198,52,88,217,78,154,151,224,
0,63,75,32,203,13,91,32,83,72,246,144,13,245,103,175,3,31,95,210,233,46,13,26,143,146,191,7,231,213,123,225,218,185,31,154,36,42,132,252,144,44,130,142,82,35,232,90,40,84,36,27,71,58,135,6,131,161,236,
220,102,6,167,138,21,172,181,218,88,145,244,42,2,239,108,143,224,36,16,90,188,142,2,193,39,155,104,198,99,81,236,223,191,31,207,126,246,179,176,109,118,218,54,85,246,253,74,200,190,22,175,33,189,153,194,
55,190,126,39,238,188,251,94,80,169,216,227,115,109,94,167,132,105,83,213,169,205,76,108,166,50,240,144,201,110,58,116,16,219,232,142,27,116,207,103,78,157,70,157,108,105,111,205,70,0,57,232,86,183,128,
71,221,42,195,61,157,54,92,178,139,3,175,99,143,217,194,254,29,219,17,243,240,59,230,86,108,253,104,111,25,98,119,244,239,129,157,61,180,35,58,175,233,240,163,54,185,211,50,183,237,254,156,62,50,246,94,
71,44,54,63,48,50,201,248,242,157,242,184,5,223,197,242,246,15,124,160,247,242,223,122,113,189,219,233,174,48,86,156,237,41,250,114,219,210,172,142,238,8,90,78,135,87,177,58,170,12,98,170,12,125,194,114,
170,44,152,97,56,80,71,167,101,103,33,59,11,87,247,5,16,188,242,9,240,83,187,249,87,22,129,245,85,152,108,108,31,193,23,220,190,11,122,178,31,206,145,113,248,104,80,194,52,53,222,82,1,42,65,232,90,95,
134,211,235,129,67,110,187,21,142,243,88,155,246,186,86,89,87,108,47,187,100,253,203,188,103,37,65,25,112,120,22,177,195,207,130,59,185,3,174,16,141,78,176,143,161,52,198,70,237,33,155,218,192,90,170,
108,47,108,151,164,10,217,70,174,78,241,46,51,15,50,12,44,230,82,60,103,139,207,58,4,148,108,7,39,251,209,8,200,102,102,102,240,203,191,244,203,120,210,147,110,196,208,208,16,130,236,16,50,244,36,33,89,
176,178,186,178,142,111,124,243,46,58,94,217,31,145,231,162,182,51,101,86,129,215,230,100,168,30,223,187,11,195,219,166,17,96,39,116,208,28,5,24,194,215,9,198,74,147,172,200,78,40,155,53,149,243,57,251,
238,2,2,36,89,215,34,69,165,52,137,16,120,219,24,97,46,163,166,236,27,140,193,83,88,34,203,179,83,11,217,93,192,220,247,128,143,207,45,118,230,54,13,91,109,96,210,106,239,61,180,166,14,141,190,197,17,
138,126,107,96,108,170,125,225,83,223,46,143,123,240,73,121,247,135,63,130,191,254,236,231,204,87,189,234,53,133,158,234,88,232,88,234,57,58,226,124,27,186,215,84,181,16,165,133,83,165,30,148,165,127,
12,30,52,25,12,195,7,174,182,123,180,220,210,84,110,234,167,95,118,13,60,179,59,16,164,62,242,50,12,187,22,230,224,162,78,147,241,41,141,175,171,108,125,49,18,142,102,9,30,134,215,16,65,231,166,158,100,
107,210,21,39,161,244,211,136,180,170,246,186,95,217,143,90,134,88,100,237,111,51,57,132,212,120,2,145,29,179,8,143,93,67,70,184,176,91,170,198,227,178,247,119,186,26,82,107,75,216,72,165,209,177,100,
143,102,203,94,191,33,242,224,226,170,57,217,53,75,52,87,139,33,82,54,218,44,217,187,101,245,208,151,76,226,249,207,123,62,158,253,156,103,147,1,99,112,177,51,201,254,55,242,16,192,202,146,131,147,39,
207,97,105,109,195,6,114,33,151,71,154,224,179,67,38,255,27,26,29,166,73,153,69,155,206,52,60,216,143,185,117,130,140,128,74,111,166,237,61,171,7,198,199,225,34,235,203,124,109,94,110,204,72,112,202,102,
79,98,122,66,60,246,40,191,235,229,225,32,198,183,77,193,87,221,32,139,54,108,147,97,135,89,2,237,95,0,143,143,46,89,175,30,76,90,12,183,41,101,102,231,71,105,18,63,57,48,189,61,119,225,83,223,83,216,
58,63,57,101,207,83,158,218,245,143,140,150,125,163,19,143,168,177,129,15,154,254,248,155,106,206,240,223,22,225,59,91,114,249,141,198,208,160,101,210,225,41,83,219,160,72,126,79,189,204,158,124,97,193,
13,27,90,110,149,160,215,74,136,122,117,12,237,220,133,200,216,132,157,1,35,183,84,48,8,180,78,37,139,206,220,49,232,155,231,225,105,228,17,24,30,129,127,27,153,145,198,194,56,114,63,242,102,15,181,107,
111,68,155,46,213,34,184,164,21,100,207,24,151,87,182,5,233,218,70,224,98,163,200,127,50,140,97,152,178,157,173,100,226,200,252,104,27,5,25,254,16,221,72,230,148,123,146,248,104,24,100,74,77,64,88,171,
214,8,168,138,157,222,46,174,253,242,131,7,241,236,103,221,108,223,54,66,26,87,142,235,112,56,237,187,63,141,142,77,33,20,233,67,169,74,3,193,115,201,192,178,189,73,58,153,173,214,144,189,178,219,246,
141,20,11,229,6,3,134,31,109,198,195,178,211,133,206,248,24,6,46,223,7,255,208,0,170,252,140,79,211,17,167,230,149,237,142,251,146,9,52,168,239,74,11,139,8,20,11,216,73,67,50,190,125,6,190,102,6,142,182,
108,113,183,5,176,239,1,157,20,254,46,225,86,70,14,90,146,217,61,177,173,101,141,77,125,77,139,196,62,172,121,188,34,97,191,111,249,137,96,190,239,46,111,255,155,191,193,187,63,242,145,238,43,127,231,
229,53,75,211,215,44,221,113,146,62,119,193,176,84,25,154,137,246,60,78,81,90,170,34,67,48,145,36,224,241,219,147,239,106,255,48,172,197,211,176,238,249,42,148,10,223,19,230,26,158,96,5,144,35,78,61,10,
131,159,47,71,162,246,58,87,103,122,13,142,154,12,179,180,224,136,148,224,116,172,195,89,94,71,151,141,216,29,37,75,178,129,116,134,115,25,168,233,50,172,54,6,104,91,60,100,50,103,128,108,71,45,38,67,
56,100,34,89,157,182,120,246,24,142,18,184,103,230,215,145,202,136,137,144,29,86,25,178,169,221,100,231,45,15,89,79,88,44,79,103,44,55,220,105,210,169,74,137,81,235,253,242,47,255,60,174,189,238,58,2,
91,134,202,191,211,224,23,1,62,119,118,17,15,61,252,40,214,54,120,236,205,77,219,160,200,208,140,164,85,201,54,29,50,105,184,145,42,34,157,171,97,126,105,131,96,245,97,251,246,65,84,8,208,124,131,110,
154,215,72,101,202,239,90,195,76,60,138,27,158,120,61,154,100,190,86,42,133,107,120,141,135,118,238,64,220,209,129,187,145,101,7,150,4,85,57,175,92,128,112,22,235,205,126,206,135,116,52,190,97,232,94,
84,199,182,91,157,61,151,31,213,134,199,223,233,8,134,238,235,27,157,248,23,225,246,98,249,137,3,223,197,242,206,15,125,200,122,207,63,125,188,195,80,92,110,119,204,69,214,227,49,83,113,100,218,150,30,
50,123,237,40,172,150,163,215,110,208,39,80,179,109,219,79,145,204,10,186,251,43,246,58,14,89,72,46,131,185,168,22,109,77,168,202,54,183,12,49,114,75,87,139,122,207,71,198,148,61,89,180,237,110,184,103,
138,240,76,58,225,28,114,193,217,169,65,61,147,177,239,167,43,11,207,237,181,32,116,29,181,177,36,186,14,5,225,176,244,253,14,54,233,98,215,87,86,144,89,59,131,59,110,255,38,238,121,224,40,230,87,54,237,
117,18,194,106,162,251,228,70,56,146,18,37,75,67,171,181,42,242,116,163,114,135,78,25,12,151,48,124,205,181,87,227,166,103,60,3,201,62,106,71,106,216,239,102,27,25,248,205,208,176,124,245,43,95,195,253,
15,60,128,149,229,101,20,233,94,13,186,83,25,155,19,224,203,118,35,178,177,146,195,227,177,223,19,96,203,142,5,65,175,131,64,36,80,105,188,196,108,72,230,244,64,95,2,125,98,160,248,253,23,215,55,208,207,
142,247,164,209,81,140,13,68,225,169,203,124,181,12,82,243,252,246,255,242,207,69,224,201,243,45,224,153,61,21,245,216,136,213,220,119,197,186,50,62,243,65,71,52,250,217,254,241,233,31,184,108,82,138,
28,226,167,162,220,255,183,239,35,233,184,195,221,122,109,178,87,200,60,85,111,86,158,175,183,202,59,253,42,220,126,134,75,7,195,136,82,164,244,32,230,186,178,16,245,178,235,104,117,67,48,239,189,29,189,
82,222,30,157,151,53,15,68,131,125,147,62,101,108,28,214,80,21,206,196,162,157,157,171,105,30,186,218,13,148,191,206,42,219,36,19,81,187,185,148,46,223,247,32,247,164,253,112,81,144,171,237,13,212,233,
119,30,60,94,179,115,14,61,78,3,95,186,251,28,30,60,185,105,103,210,200,242,71,185,185,206,192,192,32,205,195,160,173,243,4,112,46,183,211,62,239,35,143,28,181,193,185,119,207,110,188,236,119,94,138,43,
175,186,18,163,35,163,182,19,21,64,201,123,210,96,181,106,29,95,252,226,87,241,137,79,126,18,199,79,158,32,107,230,190,11,116,93,27,168,91,139,209,249,21,195,33,251,92,178,29,7,29,9,34,161,160,189,217,
185,76,191,197,66,97,188,240,133,191,134,203,46,219,135,20,67,237,250,201,147,56,254,181,175,227,114,50,225,85,87,30,66,56,127,30,78,67,34,0,33,199,135,232,8,27,48,4,159,93,236,95,100,60,79,67,45,144,
68,117,255,213,69,107,255,85,31,114,38,250,222,172,184,157,139,253,195,227,226,163,126,96,249,137,101,190,127,94,222,247,169,207,88,175,126,205,107,90,138,47,152,233,41,218,241,142,234,56,223,236,170,
245,110,87,237,183,52,74,27,183,174,106,98,20,92,62,168,87,62,201,158,249,176,220,1,40,131,35,80,227,125,108,81,234,195,122,149,245,202,10,150,108,103,126,174,78,86,170,81,188,119,106,57,180,155,89,212,
9,224,118,111,140,134,35,4,139,110,84,226,101,199,239,70,123,122,16,110,186,80,25,226,72,165,42,88,220,168,209,113,54,233,114,51,56,113,62,67,32,26,4,6,195,22,245,85,50,217,135,17,186,71,7,53,158,204,
92,72,25,25,25,194,236,204,24,22,23,151,137,143,46,110,186,233,105,100,190,235,48,53,57,201,176,236,177,65,85,174,84,177,206,240,186,182,178,138,187,239,186,15,95,38,235,157,62,119,6,121,106,72,201,211,
187,88,46,2,79,6,158,221,94,175,189,26,109,203,192,72,242,132,147,151,44,107,163,171,118,102,244,85,4,247,111,190,232,55,49,56,50,130,104,255,0,162,188,142,126,126,143,233,201,25,196,202,43,112,85,211,
60,34,13,18,43,176,107,49,212,178,243,200,30,54,162,87,229,187,203,67,142,103,56,36,220,238,176,204,93,7,239,119,12,141,190,221,233,13,156,72,14,143,126,207,176,202,247,43,63,53,224,147,242,182,247,255,
53,222,249,193,15,246,94,117,203,171,91,116,177,243,142,88,223,189,116,95,95,49,160,53,187,186,179,175,27,141,248,45,151,75,211,2,113,126,154,53,103,212,161,237,186,140,110,56,178,85,153,108,52,187,119,
199,7,41,186,250,80,61,183,134,213,7,87,24,18,129,114,182,139,98,198,132,210,30,132,111,96,187,157,111,216,46,102,81,166,137,105,48,108,185,124,100,167,78,21,53,50,95,181,73,166,48,9,190,116,22,167,87,
203,104,182,123,60,180,106,135,193,104,52,134,4,129,33,91,239,202,48,77,44,22,33,19,198,236,105,172,185,185,5,59,164,222,240,132,39,224,134,27,158,96,111,148,46,69,134,93,54,82,155,88,94,93,193,55,239,
248,22,190,244,213,175,226,252,252,121,59,139,69,134,109,4,156,23,117,160,24,23,185,133,108,136,172,102,231,225,17,76,178,153,164,128,90,88,80,142,159,165,131,151,92,199,43,175,184,12,123,247,238,129,
215,235,231,195,199,247,35,136,79,78,192,213,79,22,167,46,86,25,41,178,77,11,159,233,4,113,71,219,133,37,4,144,12,5,224,239,176,227,49,132,8,15,118,84,23,195,237,168,101,92,118,109,86,155,156,253,7,71,
32,248,201,228,240,200,99,186,183,199,79,148,219,125,172,101,199,213,215,89,251,159,243,252,238,193,23,252,92,62,124,249,149,15,59,118,236,253,227,170,59,252,187,37,45,240,177,178,47,144,173,164,231,204,
206,220,195,100,187,26,144,163,6,76,175,110,13,157,236,191,26,218,238,131,176,200,24,90,172,31,193,157,151,163,127,226,32,92,214,56,74,115,46,100,10,125,40,143,237,134,33,55,114,238,31,2,216,104,93,134,
196,166,97,242,80,178,1,144,66,253,228,195,161,189,49,236,28,247,146,221,128,118,167,135,176,83,71,204,237,178,239,99,34,183,219,90,147,77,206,201,70,146,23,39,195,45,178,99,235,217,185,121,59,117,234,
70,130,238,185,207,126,54,1,154,176,193,36,172,150,203,231,145,229,117,202,221,160,142,30,61,142,52,13,129,236,101,45,89,208,178,169,164,128,79,138,104,200,40,93,171,76,197,201,88,159,36,20,72,100,140,
39,147,118,34,130,176,173,140,231,201,80,140,220,13,0,86,27,199,143,62,136,249,185,211,168,82,243,202,248,161,63,20,129,111,106,22,165,195,55,98,37,50,129,59,16,196,157,148,28,15,208,108,173,237,220,135,
230,216,172,173,241,196,116,244,100,19,73,111,20,205,153,93,53,107,98,234,203,14,127,224,19,138,83,23,100,62,166,242,83,9,190,239,46,179,135,15,247,246,63,251,121,69,223,204,238,175,98,100,250,127,52,
156,161,63,168,185,67,119,87,125,190,124,61,187,216,237,220,243,57,130,176,0,125,231,30,91,68,43,241,97,56,103,119,219,211,104,226,23,99,123,15,98,104,223,97,12,121,146,232,239,197,17,175,26,112,143,78,
161,189,186,12,75,166,222,28,116,173,110,113,183,166,144,166,61,250,239,161,132,83,186,6,193,33,139,112,24,86,85,7,118,17,164,147,52,25,99,131,131,136,144,129,236,149,102,237,206,214,102,222,43,27,88,
92,88,182,239,73,242,138,87,188,18,219,232,50,37,3,69,88,170,65,102,203,144,225,54,104,4,78,158,56,141,245,245,117,148,104,32,100,219,224,238,5,224,201,60,172,124,214,67,128,139,89,17,131,177,41,247,195,
147,13,42,249,157,100,75,57,185,75,128,48,160,204,128,196,163,97,134,249,105,132,35,17,59,79,48,159,75,97,121,105,14,169,141,21,59,123,70,118,191,63,126,114,17,159,61,190,132,47,21,234,40,24,29,68,19,
73,28,220,187,11,33,59,228,202,230,185,14,24,116,247,141,241,237,102,119,118,231,81,103,36,250,1,205,237,60,151,236,27,146,24,242,152,202,79,85,216,253,215,202,59,62,242,145,222,187,63,254,201,226,43,
126,247,247,79,182,186,120,168,45,169,91,138,18,235,170,189,128,213,106,232,86,177,160,40,185,52,52,217,215,164,82,6,242,91,247,147,211,7,6,236,4,83,25,148,141,64,135,155,162,93,165,49,105,159,57,106,
111,223,219,240,145,1,250,101,71,46,133,61,185,77,166,234,81,62,54,176,190,176,142,163,115,12,91,21,21,187,198,167,176,107,98,10,94,73,88,240,251,209,144,191,107,200,128,173,70,135,218,66,58,147,35,235,
104,120,245,171,95,137,235,174,191,150,108,232,176,89,79,180,128,24,146,147,39,79,227,209,163,199,112,222,206,211,219,180,151,81,202,64,181,12,44,219,122,129,31,181,1,200,223,91,60,174,220,248,90,198,
54,229,230,59,50,32,237,39,227,6,252,212,142,4,107,48,224,195,245,215,95,135,231,60,231,57,212,154,195,116,210,186,205,148,178,95,75,171,73,160,229,211,56,118,244,20,254,233,179,95,196,73,130,119,179,
105,216,9,173,215,210,125,239,72,70,145,56,247,40,156,12,201,29,205,141,90,223,132,213,58,116,77,90,159,152,254,144,39,26,253,120,188,111,72,38,155,31,115,249,169,103,190,127,94,118,63,251,57,134,111,
102,219,73,165,111,248,237,134,55,246,127,106,142,192,167,170,192,90,189,150,111,117,168,166,229,150,83,200,111,66,238,16,46,83,84,50,67,2,217,106,195,144,253,235,216,206,170,6,243,252,41,70,44,134,47,
190,109,40,45,56,20,170,74,130,64,110,118,157,78,215,113,234,100,26,231,230,242,12,167,146,219,70,38,148,140,98,58,104,73,205,18,80,201,61,234,236,164,85,178,149,44,204,145,187,32,77,17,156,215,92,125,
181,237,128,229,54,97,226,90,133,73,229,159,146,204,253,206,47,34,155,161,198,44,201,189,227,100,45,5,255,23,124,178,200,15,25,246,49,201,146,45,97,99,118,16,217,103,90,246,73,12,145,101,67,212,105,62,
239,214,220,237,204,244,12,158,77,224,61,225,134,27,112,224,192,97,76,76,109,39,91,187,120,237,146,21,164,144,49,87,241,153,207,124,10,27,4,161,202,191,77,210,41,239,222,179,11,83,83,227,246,118,39,114,
55,117,147,225,182,225,143,89,173,29,123,107,234,216,212,183,28,190,192,103,98,137,129,31,184,21,218,15,42,63,115,224,147,178,227,198,167,152,193,109,187,210,190,189,7,63,209,141,12,188,161,238,137,253,
101,213,19,186,171,98,181,115,181,165,19,61,51,179,8,164,151,237,20,121,71,60,14,215,213,55,194,253,228,155,237,53,37,72,45,67,49,88,207,4,70,215,31,132,33,247,249,160,43,180,24,186,171,100,188,133,165,
2,206,158,75,219,32,52,154,4,16,117,92,97,97,17,43,143,62,130,18,117,154,76,95,201,158,212,178,39,179,108,130,41,131,202,73,158,99,15,27,88,66,166,20,123,98,159,0,147,173,226,82,116,204,43,43,107,54,240,
210,153,180,109,82,28,78,55,252,52,21,18,74,101,135,83,25,123,179,1,200,139,146,221,245,66,68,37,109,21,193,166,145,217,24,190,187,109,219,252,200,240,230,181,215,92,135,61,187,247,218,107,127,253,100,
226,209,241,105,2,112,27,153,207,111,79,215,205,207,47,161,80,170,216,139,211,197,32,141,146,29,175,56,124,25,205,75,8,174,50,77,8,207,223,112,135,80,155,221,211,233,238,216,243,144,35,26,127,135,230,
246,157,181,47,252,223,89,126,38,193,39,101,234,138,43,173,237,79,122,106,199,61,62,181,170,14,140,124,200,240,69,255,172,238,8,252,125,205,19,60,89,139,37,171,70,44,210,51,155,37,200,106,58,69,230,98,
201,109,206,29,108,180,3,87,66,75,12,216,12,166,134,98,104,43,126,108,80,23,149,51,41,251,94,186,133,213,77,52,169,227,234,141,14,202,4,95,151,159,235,200,14,240,12,181,50,8,44,128,19,96,137,232,151,91,
246,75,62,221,51,158,254,116,188,240,55,127,205,14,127,82,100,115,204,245,181,13,186,223,243,184,239,129,7,201,162,115,200,16,120,114,35,29,89,121,22,142,69,49,50,54,134,161,225,17,4,233,104,237,245,187,
4,154,164,135,13,240,124,3,252,189,63,17,103,184,245,18,142,38,54,54,54,176,153,202,209,217,238,197,13,55,222,96,223,186,246,98,17,166,13,4,195,60,222,20,193,152,192,122,74,238,125,98,217,169,86,225,80,
16,59,182,203,62,45,49,134,108,19,78,118,30,121,175,62,52,209,51,183,239,94,117,68,162,31,81,157,250,3,137,190,228,191,57,172,242,253,202,207,44,248,46,150,93,79,191,169,231,29,29,207,187,198,167,239,
236,70,7,222,218,112,4,223,84,115,133,62,83,137,244,47,214,34,177,86,43,183,134,238,249,135,161,144,5,157,12,81,250,224,168,173,167,36,36,203,186,98,71,93,67,187,74,48,57,132,10,27,240,59,13,36,163,4,
166,71,69,171,167,34,202,134,14,75,134,181,132,74,134,173,54,141,140,204,44,244,58,109,244,8,190,32,223,223,189,125,7,198,70,199,160,93,88,0,46,154,238,155,223,184,3,31,251,199,79,224,246,219,239,192,
242,202,10,228,46,235,246,236,8,79,44,119,105,143,39,251,48,48,52,204,199,144,125,15,59,201,106,78,82,79,78,240,120,3,252,189,111,120,136,122,207,107,159,47,157,202,146,1,93,184,234,170,67,116,195,17,
158,67,226,249,119,138,61,68,227,112,177,131,128,122,212,130,195,229,177,207,49,57,49,134,17,30,71,174,169,71,198,211,105,100,234,129,184,101,236,185,172,172,143,76,124,81,247,248,62,211,223,63,244,31,
190,101,234,207,60,248,164,108,191,238,122,107,223,179,158,109,68,247,237,95,116,142,76,124,186,227,139,254,101,83,243,189,179,170,123,239,40,213,42,153,234,202,153,174,177,124,2,230,153,71,129,51,143,
64,205,51,28,83,27,202,218,146,68,207,129,184,193,208,87,106,194,231,113,96,108,216,143,209,62,15,250,124,14,76,51,52,30,36,32,118,178,150,199,104,123,221,108,64,25,136,54,24,106,69,243,41,221,30,124,
100,50,147,14,51,77,166,107,212,234,118,248,148,212,168,82,177,68,225,255,168,125,91,133,76,102,235,190,118,2,18,25,15,172,243,115,194,130,146,52,155,236,239,199,228,204,12,102,232,144,7,249,83,29,25,
129,103,124,12,145,100,156,70,73,97,184,46,216,59,91,237,218,189,131,64,29,252,158,1,233,139,69,156,114,185,92,197,153,179,115,168,53,27,118,42,151,12,1,201,221,63,5,236,102,167,11,39,217,95,182,216,173,
111,219,99,42,147,51,15,185,130,193,143,234,46,247,247,205,86,121,172,229,103,198,237,62,150,242,150,247,190,23,239,254,167,127,234,188,226,229,191,151,235,118,123,103,59,134,121,150,77,94,236,234,154,
207,52,155,225,94,37,235,80,242,41,69,182,158,21,81,175,118,154,208,8,40,85,245,163,85,52,209,40,48,180,150,186,48,242,22,148,134,27,3,170,23,83,61,19,9,134,62,49,15,25,186,228,28,65,84,166,193,16,211,
33,55,136,118,50,236,137,147,46,174,109,34,146,136,161,70,112,62,120,223,17,156,62,125,150,33,142,238,153,12,41,206,216,54,42,12,125,246,42,52,34,84,198,4,5,144,146,21,35,179,38,114,243,107,23,53,92,135,
204,231,137,134,16,137,248,168,243,114,88,90,94,199,56,25,236,153,207,122,6,77,195,52,98,177,184,157,25,35,131,206,6,165,64,135,178,66,194,252,241,99,39,113,223,253,15,218,51,38,146,93,83,38,248,121,74,
59,187,198,79,22,116,151,249,123,183,99,169,7,47,95,115,247,15,254,133,195,227,253,70,162,127,64,182,148,248,15,151,75,224,251,62,229,157,31,254,112,239,61,159,249,108,227,247,95,241,234,117,66,236,172,
105,41,233,54,163,81,167,215,141,179,198,60,10,41,133,158,20,186,104,182,122,9,14,178,137,218,36,56,74,68,88,133,128,106,234,8,155,12,185,205,58,220,124,200,92,64,145,90,105,185,7,123,203,218,42,27,93,
182,196,221,170,124,185,29,108,129,90,113,149,44,163,227,236,201,211,248,250,215,191,129,205,92,218,222,54,184,78,224,201,12,135,0,79,246,207,243,201,205,93,162,81,123,38,163,217,228,113,248,186,220,229,
73,110,250,34,73,10,188,48,186,91,47,162,4,95,58,83,180,239,87,252,212,167,61,25,87,92,121,5,198,168,19,237,92,64,246,4,1,121,42,181,78,119,187,134,147,39,207,224,158,251,30,192,218,198,154,61,180,35,
219,229,102,179,89,251,22,181,146,17,20,137,134,209,169,84,225,31,27,171,7,38,38,63,236,244,251,223,159,28,24,170,217,151,255,159,40,151,192,247,175,148,119,124,228,195,189,91,94,251,186,154,217,235,173,
48,116,157,233,118,122,75,109,69,143,119,28,142,176,229,113,58,21,135,106,111,21,43,195,15,174,118,29,94,62,247,147,73,2,157,22,124,205,42,92,173,186,189,16,93,66,105,137,141,184,72,0,166,9,84,217,17,
84,182,171,149,25,5,25,169,51,201,164,19,145,0,186,108,224,185,179,231,80,108,212,224,102,200,150,172,98,201,239,147,251,122,200,96,176,12,201,8,131,202,29,61,197,104,200,34,114,49,47,50,16,45,227,124,
194,166,62,143,142,88,68,238,23,226,162,118,11,34,18,142,224,202,43,14,97,215,174,93,246,172,137,56,96,49,58,149,114,129,0,75,225,161,35,143,226,206,187,239,199,42,77,137,220,112,48,77,119,157,73,167,
108,86,108,81,4,202,174,88,18,230,11,213,58,198,247,236,201,40,110,255,195,109,211,58,241,182,183,191,149,110,236,63,87,164,94,46,149,199,80,142,127,237,43,122,233,228,73,159,210,106,60,81,53,91,207,211,
219,181,167,185,58,181,164,183,81,86,92,178,243,170,220,154,181,206,48,214,150,85,103,4,148,105,217,105,243,180,8,246,70,59,171,158,16,190,42,247,226,77,103,16,36,147,73,22,95,69,119,160,68,87,41,235,
33,174,157,153,192,238,169,73,123,131,204,71,179,165,173,93,252,25,242,214,86,215,109,205,39,192,168,146,137,36,212,202,210,209,136,44,155,76,38,237,193,97,1,96,146,238,214,231,113,193,235,166,33,145,
41,22,134,248,112,116,144,166,97,10,7,15,238,197,248,248,56,1,233,177,63,91,46,21,81,169,228,177,176,184,136,47,126,241,27,56,123,126,209,206,1,20,134,149,169,187,134,157,52,33,249,123,170,189,39,140,
236,146,144,140,198,241,228,167,62,169,238,245,5,215,15,94,126,240,173,201,100,242,171,100,234,220,248,248,80,254,66,21,253,187,203,37,240,253,59,203,131,31,250,59,127,175,81,159,54,139,217,43,96,212,
127,222,97,84,175,240,182,171,62,79,173,164,184,228,70,130,20,238,100,72,80,82,193,36,173,145,223,236,172,144,170,63,138,149,196,8,86,249,126,111,254,44,204,66,14,101,134,224,44,133,85,206,235,67,98,219,
52,110,184,236,0,234,109,19,95,61,126,22,14,134,199,46,153,111,99,99,211,6,133,36,148,202,138,15,185,67,165,172,241,104,146,5,101,218,44,78,208,201,93,215,101,22,35,18,246,17,52,114,203,46,153,83,6,110,
188,241,105,120,222,243,158,67,55,156,176,181,155,148,74,181,140,205,205,85,178,89,25,15,62,120,20,119,124,235,126,228,139,116,177,60,135,220,107,216,104,53,109,87,45,131,220,194,204,18,162,101,223,27,
57,71,146,199,161,102,236,62,249,41,79,62,231,247,6,207,81,75,126,38,158,140,125,154,72,111,108,223,54,249,237,37,145,143,181,92,2,223,191,179,156,189,251,110,165,93,171,105,173,76,58,96,214,43,187,186,
165,252,11,212,102,229,102,151,217,152,240,25,21,205,67,97,174,151,203,116,191,101,27,132,91,233,165,42,140,142,133,150,195,135,86,124,24,29,175,31,149,181,21,20,23,232,46,107,85,84,233,88,29,79,185,81,
118,244,197,242,249,21,44,231,74,8,247,245,219,191,175,80,11,74,25,24,28,176,205,133,128,66,110,144,40,211,108,185,92,158,102,192,139,161,225,97,187,33,53,77,214,135,72,184,108,16,44,65,252,207,255,245,
71,184,234,234,171,236,121,98,113,15,162,9,51,153,77,156,62,117,12,171,100,212,135,30,62,137,37,254,20,157,39,186,83,110,7,38,159,147,16,47,107,64,100,11,53,147,157,65,198,34,229,248,178,54,69,134,96,
134,135,134,187,253,125,253,205,235,174,191,238,68,34,217,255,72,56,28,250,242,248,232,200,103,137,83,107,116,108,224,123,199,113,254,149,114,73,243,253,59,203,219,254,250,175,37,139,186,247,218,215,191,
206,80,188,222,116,175,107,157,180,156,174,149,118,79,53,59,138,62,218,243,122,156,138,223,163,200,226,105,157,186,78,146,48,101,253,136,164,237,107,205,26,244,82,206,222,122,194,63,62,133,208,182,237,
240,80,83,5,249,186,155,90,172,193,198,47,167,211,40,49,244,122,24,86,101,159,150,66,46,103,27,145,96,40,136,16,117,160,204,108,72,24,20,189,39,183,129,13,133,66,72,144,253,36,59,90,134,68,196,169,74,
198,204,190,125,123,241,171,191,250,11,112,51,20,219,227,122,60,63,47,9,178,35,215,38,141,197,253,15,62,130,69,58,97,185,99,121,153,157,69,58,193,214,126,46,10,52,199,214,194,38,201,134,182,147,82,249,
135,118,178,42,223,235,116,59,178,20,64,165,22,117,208,148,244,21,10,133,25,130,111,128,82,160,143,160,85,94,245,234,215,108,188,237,109,111,121,76,0,188,4,190,255,96,121,235,251,222,135,119,254,221,135,
186,191,247,210,223,174,168,78,215,156,162,59,31,108,119,213,21,163,171,134,58,138,150,232,249,125,14,138,47,123,56,69,39,136,108,240,17,92,26,13,137,38,11,155,114,41,184,100,75,218,131,135,237,173,104,
221,12,133,33,186,207,184,193,232,37,187,24,80,99,85,25,254,10,153,172,108,220,101,175,174,171,87,42,246,206,91,30,175,199,78,50,21,16,74,58,190,12,32,139,25,17,93,40,107,68,132,169,174,56,124,8,79,184,
225,122,123,188,78,138,160,65,64,36,198,100,125,125,3,247,63,116,204,14,183,146,1,147,163,179,181,247,238,99,145,45,71,182,116,228,86,70,180,132,107,25,150,145,231,114,155,48,73,211,146,80,220,110,27,
74,62,159,211,8,62,15,65,55,198,78,182,203,225,212,82,94,143,231,129,119,190,243,237,143,105,198,227,210,32,243,127,178,236,187,233,230,222,101,63,255,75,117,239,240,216,188,119,108,252,239,180,196,224,
109,45,79,244,111,74,106,112,189,28,136,247,234,35,35,232,12,36,161,249,220,112,202,205,173,93,26,200,141,240,90,77,120,54,207,66,203,46,193,125,96,23,34,207,120,22,98,163,83,136,209,185,14,163,11,54,
57,218,141,58,122,50,84,195,71,173,152,67,238,220,25,100,30,122,16,149,249,5,190,214,132,147,64,113,137,97,33,48,196,157,138,94,147,204,150,103,222,252,76,252,226,47,255,2,141,201,86,90,150,60,248,15,
217,171,67,160,101,112,250,244,156,61,168,108,144,129,101,145,147,56,90,1,149,108,27,39,64,147,129,104,97,58,25,194,145,128,43,25,216,110,2,94,18,19,236,205,220,101,96,156,239,203,60,115,173,94,83,50,
153,148,179,144,207,36,91,205,230,44,47,37,185,178,186,246,152,228,220,99,250,208,165,242,216,203,137,175,124,73,51,74,229,144,145,203,94,221,205,103,126,93,111,150,175,247,170,70,220,219,174,233,158,
76,10,14,134,81,82,148,68,63,24,137,65,164,103,246,161,232,144,91,183,186,225,37,144,180,76,30,217,163,71,113,164,171,224,60,25,73,54,130,148,251,237,22,4,0,100,182,0,221,106,219,233,129,53,50,6,23,29,
172,51,24,34,84,45,44,209,185,86,132,25,201,122,175,120,197,203,240,220,231,63,151,12,233,182,151,5,72,182,243,230,218,134,189,71,203,209,227,167,113,199,93,247,34,75,189,40,201,169,107,171,43,182,193,
144,48,43,115,196,182,177,225,181,201,186,18,97,61,73,132,144,231,50,68,35,227,126,2,62,1,166,36,71,8,248,67,225,32,157,119,4,65,26,164,169,169,233,230,254,253,7,190,52,49,49,254,166,190,190,196,67,19,
227,163,50,146,244,3,203,165,176,251,95,92,222,241,119,31,178,222,243,177,127,106,190,230,150,91,151,187,138,122,180,109,90,235,102,167,231,51,53,61,218,11,50,20,123,221,91,59,138,49,100,150,251,135,187,
243,165,118,39,189,153,53,235,165,82,183,107,52,148,158,215,165,120,135,135,149,4,153,168,63,189,137,49,163,110,175,44,179,111,25,70,240,4,37,20,242,97,18,36,22,245,158,236,99,221,38,24,100,245,155,196,
214,100,50,142,131,251,247,35,42,67,53,124,65,238,233,91,173,212,112,207,93,247,227,235,183,223,129,51,103,230,176,180,188,53,87,44,233,244,50,134,39,159,147,97,21,91,18,242,88,194,158,26,157,174,0,140,
180,106,79,183,109,205,43,107,4,168,195,94,97,39,89,209,178,236,83,222,147,25,146,74,173,33,224,118,68,34,97,61,18,14,159,14,135,195,103,222,242,230,191,178,119,163,250,65,229,18,248,126,72,229,237,31,
248,64,247,247,127,247,119,11,142,64,240,116,183,107,61,220,233,41,141,142,165,198,122,62,175,199,138,71,21,51,30,175,149,253,201,19,157,104,255,87,93,201,254,135,116,175,127,206,180,208,107,55,27,78,
162,208,233,140,71,212,190,137,9,196,104,42,194,86,27,17,2,80,110,82,234,178,67,159,138,186,108,106,78,214,115,19,128,178,7,140,44,141,20,166,26,26,30,194,142,237,179,118,122,151,176,152,204,120,164,201,
166,39,79,205,225,244,153,51,246,180,156,232,194,181,181,53,123,126,248,226,156,177,20,59,68,243,119,209,135,246,38,226,4,153,128,82,102,81,36,204,10,144,237,133,80,124,77,116,161,83,54,34,119,200,102,
228,14,123,56,38,24,244,161,127,160,127,35,30,79,124,61,30,143,159,121,243,155,255,239,191,170,253,46,129,239,135,88,222,241,193,15,90,239,250,232,63,24,175,253,195,63,162,107,240,156,38,248,150,205,174,
98,88,78,79,195,10,198,239,208,19,131,111,142,238,222,247,145,190,157,187,191,30,28,30,250,156,162,234,247,247,20,189,100,118,58,129,110,187,229,239,58,21,167,147,44,232,235,27,132,79,152,134,33,215,222,
115,154,240,48,186,20,253,178,129,17,193,39,51,32,114,203,42,209,120,50,144,44,0,171,209,128,140,77,140,216,247,206,248,196,63,125,14,15,29,57,74,51,33,6,194,101,167,118,137,201,16,198,178,141,196,5,240,
73,177,245,33,139,132,86,187,240,247,78,91,214,237,242,172,124,75,140,136,104,65,153,31,150,101,160,137,190,164,189,113,185,204,154,232,154,195,140,39,250,143,140,79,140,127,106,104,96,112,237,255,251,
139,63,219,58,198,15,40,151,192,247,35,40,111,123,255,251,123,183,220,242,218,154,195,31,152,183,92,238,71,20,143,239,91,122,108,224,14,231,192,200,57,197,31,44,111,59,124,184,254,174,15,124,160,253,218,
63,248,131,180,230,116,28,85,52,199,25,171,167,212,76,195,240,17,132,174,158,207,227,116,14,14,43,110,153,82,99,232,117,73,166,50,195,160,37,115,191,193,48,178,178,177,80,185,108,167,251,247,36,60,18,
92,1,234,180,98,169,138,51,115,115,56,191,48,79,224,152,212,104,46,59,140,202,130,37,1,159,0,236,226,80,138,176,217,119,151,239,6,161,176,163,176,173,132,91,97,56,9,181,162,1,101,13,8,181,157,157,5,45,
174,217,235,241,231,167,38,167,63,181,103,223,158,175,204,76,141,253,155,153,205,151,12,199,227,176,156,184,227,14,165,146,218,12,215,83,155,87,183,11,185,155,21,163,122,157,174,96,220,229,241,122,221,
140,223,214,242,50,26,75,75,56,167,56,112,44,20,195,220,234,58,42,185,44,116,58,82,185,153,225,158,145,1,60,227,233,79,99,104,246,224,204,252,34,22,54,210,48,104,28,28,4,141,56,0,9,185,98,80,36,156,10,
232,46,2,77,126,191,232,140,5,112,2,84,41,242,25,1,169,252,46,25,206,18,114,101,169,229,232,232,8,124,100,189,245,181,117,148,139,101,236,223,119,224,200,115,159,247,252,255,113,229,53,151,127,169,63,
30,219,58,232,191,82,46,49,223,227,176,188,227,111,255,22,175,121,213,171,12,221,229,94,33,24,142,91,170,182,74,35,96,152,70,203,105,106,240,43,209,152,238,140,197,21,97,31,179,92,129,63,151,70,172,90,
134,215,48,96,49,44,122,35,33,28,190,254,58,236,216,183,7,45,134,228,179,243,178,167,222,119,140,131,36,171,138,3,22,80,217,172,167,169,118,88,149,34,12,103,99,145,175,95,192,158,93,182,192,200,247,117,
205,78,221,23,119,44,59,155,202,236,72,54,155,179,252,94,127,126,251,142,157,159,189,226,138,67,159,218,62,51,249,175,110,147,113,177,92,26,231,123,156,150,157,215,92,99,93,254,236,103,183,18,59,118,46,
198,182,239,250,39,119,255,200,255,82,124,225,63,51,45,245,179,245,118,107,190,238,119,27,254,177,65,236,29,76,226,9,131,253,120,66,216,143,107,21,19,87,169,93,140,243,119,123,118,36,83,64,189,33,183,
144,173,219,105,240,194,106,146,88,32,3,205,94,155,189,60,182,137,184,184,59,169,76,195,73,210,130,204,116,136,126,188,8,78,121,216,224,35,250,236,231,12,197,178,240,73,22,51,229,115,5,73,112,53,252,193,
224,125,126,127,224,31,137,219,205,173,111,240,111,151,75,97,247,39,164,156,252,250,215,149,226,234,138,207,40,230,166,204,74,233,218,110,187,121,147,213,51,15,234,80,18,78,195,212,149,84,26,237,149,101,
52,169,253,188,79,125,42,98,79,184,30,243,103,230,241,173,187,31,196,217,116,22,158,112,8,129,248,86,178,234,198,218,42,90,141,166,205,94,237,110,207,190,125,234,197,144,107,239,1,45,89,214,116,213,50,
232,44,69,166,217,228,117,113,207,110,134,89,1,159,172,25,145,144,107,65,177,124,94,255,210,206,93,187,255,242,208,21,87,125,240,165,47,254,213,199,196,122,82,46,129,239,39,172,60,248,241,143,169,245,
108,38,104,214,107,187,218,149,226,19,123,70,243,105,12,95,123,156,170,26,116,54,13,69,219,76,193,161,48,140,14,244,33,85,200,227,200,195,199,113,188,102,160,211,215,143,224,228,132,13,190,236,242,18,
244,78,27,30,1,18,93,171,97,209,132,52,90,52,20,100,52,186,86,1,155,68,94,89,27,44,225,88,146,88,201,121,118,230,140,132,110,113,211,78,167,110,79,235,249,3,193,246,228,196,244,23,46,63,116,248,245,79,
123,234,19,206,239,216,190,237,49,77,173,73,185,4,190,159,208,114,242,91,119,232,233,99,199,98,173,66,230,114,162,228,153,61,179,253,52,93,85,70,221,22,116,55,67,173,220,60,167,177,112,222,190,85,233,
92,179,139,181,129,33,52,183,239,176,103,65,218,233,20,194,58,245,155,215,11,133,6,162,77,22,171,180,218,246,77,158,139,229,154,157,182,37,14,86,82,248,37,28,75,178,170,0,45,34,251,190,116,77,251,125,
123,234,77,81,173,177,177,241,213,131,7,47,251,211,159,127,193,243,222,23,79,132,205,68,162,239,95,157,213,248,238,114,9,124,63,193,229,222,79,126,76,105,108,108,184,44,195,24,50,27,213,171,173,78,251,
185,86,167,117,149,3,74,159,155,118,196,65,7,218,158,159,71,126,117,13,115,116,197,103,39,167,80,161,78,115,55,104,82,8,30,184,221,80,9,62,139,90,143,129,214,146,155,71,23,202,85,217,206,77,201,243,111,
133,225,100,168,165,78,240,73,246,76,40,16,228,107,178,102,69,149,132,5,254,153,43,187,103,207,238,143,94,117,245,149,239,124,202,147,110,20,173,215,78,36,18,143,57,175,239,18,248,126,74,202,157,31,252,
27,111,183,86,217,209,46,230,159,220,109,84,159,166,90,221,43,221,14,167,199,217,165,142,219,204,224,76,169,134,7,157,30,116,141,166,21,84,122,61,213,233,48,123,14,71,89,113,57,215,73,111,105,75,209,114,
61,203,106,181,140,118,196,232,118,103,11,165,234,116,203,48,220,149,106,93,169,84,106,54,235,201,160,50,1,105,5,131,129,188,219,237,60,29,14,71,78,29,56,176,255,175,159,249,204,155,206,4,252,254,24,47,
163,66,240,61,230,204,230,75,224,251,41,42,143,126,249,11,122,121,121,49,210,109,52,118,152,181,210,13,104,55,127,81,83,49,225,32,8,235,109,88,231,11,149,98,182,94,255,178,98,245,190,214,213,212,26,193,
215,86,93,206,138,165,168,21,122,142,74,183,103,181,205,174,233,230,63,137,122,211,216,73,48,206,54,26,173,167,87,106,181,33,167,211,237,119,185,93,117,211,236,85,8,190,143,15,15,15,220,62,62,54,86,28,
24,28,120,240,202,43,174,148,85,108,178,221,66,135,224,123,204,251,181,92,2,223,79,89,57,74,87,220,109,212,28,181,245,229,160,89,43,31,176,218,198,115,172,158,241,44,69,87,147,70,79,123,40,103,224,47,
76,183,247,17,67,83,234,138,174,59,20,25,184,83,148,22,13,70,139,63,59,197,66,222,204,100,243,74,183,215,115,91,138,18,34,19,30,164,254,219,161,104,142,157,4,223,130,213,195,218,224,224,192,189,215,93,
123,101,135,76,152,187,246,154,235,203,114,222,108,54,171,16,120,255,230,192,242,119,151,75,224,251,41,46,119,125,224,189,78,171,81,239,235,182,27,87,160,215,29,99,220,60,231,24,219,118,204,17,137,186,
45,77,53,59,70,187,212,168,215,90,38,233,46,159,203,116,154,141,134,245,146,151,191,210,6,208,123,223,241,22,157,0,140,180,90,45,79,189,209,212,107,173,142,199,233,116,228,251,146,125,230,229,151,31,136,
107,154,94,82,20,100,14,30,60,244,152,13,198,63,47,151,192,247,83,94,30,252,216,71,148,86,49,231,232,181,155,186,226,246,152,161,189,135,186,221,173,9,93,159,101,89,97,34,64,54,110,49,97,161,198,223,43,
138,162,52,46,187,236,80,143,224,83,248,187,61,9,33,59,30,52,12,19,215,95,127,181,207,225,112,140,240,51,213,158,165,172,29,60,120,249,127,24,120,82,46,129,239,103,180,60,252,240,67,2,46,25,190,147,205,
173,188,4,84,192,178,122,9,190,21,177,44,200,54,24,243,151,95,126,216,78,14,120,232,200,125,94,58,220,203,248,84,246,164,63,197,63,202,237,63,240,31,103,188,173,2,252,255,111,148,206,97,161,49,57,133,
0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::sidblaster02_png = (const char*) resource_AiassAudioProcessorEditor_sidblaster02_png;
const int AiassAudioProcessorEditor::sidblaster02_pngSize = 32883;


//[EndFile] You can add extra defines here...
//[/EndFile]

