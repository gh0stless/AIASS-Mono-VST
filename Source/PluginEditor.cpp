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
    cachedImage_sidblaster_jpg_3 = juce::ImageCache::getFromMemory (sidblaster_jpg, sidblaster_jpgSize);

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
        int x = 730, y = 322, width = 144, height = 108;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImage (cachedImage_sidblaster_jpg_3,
                     x, y, width, height,
                     0, 0, cachedImage_sidblaster_jpg_3.getWidth(), cachedImage_sidblaster_jpg_3.getHeight());
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
    <IMAGE pos="730 322 144 108" resource="sidblaster_jpg" opacity="1.0"
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

// JUCER_RESOURCE: sidblaster_jpg, 166862, "../images/sidblaster.jpg"
static const unsigned char resource_AiassAudioProcessorEditor_sidblaster_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,72,0,72,0,0,255,225,59,234,69,120,105,102,0,0,77,77,0,42,0,0,0,8,0,15,0,11,
0,2,0,0,0,38,0,0,8,206,1,0,0,4,0,0,0,1,0,0,20,192,1,1,0,4,0,0,0,1,0,0,11,172,1,15,0,2,0,0,0,8,0,0,8,244,1,16,0,2,0,0,0,9,0,0,8,252,1,18,0,3,0,0,0,1,0,1,0,0,1,26,0,5,0,0,0,1,0,0,9,6,1,27,0,5,0,0,0,1,0,
0,9,14,1,40,0,3,0,0,0,1,0,2,0,0,1,49,0,2,0,0,0,38,0,0,9,22,1,50,0,2,0,0,0,20,0,0,9,60,2,19,0,3,0,0,0,1,0,1,0,0,135,105,0,4,0,0,0,1,0,0,9,80,136,37,0,4,0,0,0,1,0,0,28,204,234,28,0,7,0,0,8,12,0,0,0,194,
0,0,28,224,28,234,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,87,105,110,100,111,119,115,32,80,104,111,116,111,32,69,100,105,116,
111,114,32,49,48,46,48,46,49,48,48,49,49,46,49,54,51,56,52,0,115,97,109,115,117,110,103,0,83,77,45,71,57,48,48,70,0,0,0,0,0,72,0,0,0,1,0,0,0,72,0,0,0,1,87,105,110,100,111,119,115,32,80,104,111,116,111,
32,69,100,105,116,111,114,32,49,48,46,48,46,49,48,48,49,49,46,49,54,51,56,52,0,50,48,50,48,58,48,53,58,48,57,32,49,48,58,50,54,58,49,49,0,0,36,130,154,0,5,0,0,0,1,0,0,19,18,130,157,0,5,0,0,0,1,0,0,19,
26,136,34,0,3,0,0,0,1,0,2,0,0,136,39,0,3,0,0,0,1,0,50,0,0,144,0,0,7,0,0,0,4,48,50,50,48,144,3,0,2,0,0,0,20,0,0,19,34,144,4,0,2,0,0,0,20,0,0,19,54,145,1,0,7,0,0,0,4,1,2,3,0,146,1,0,10,0,0,0,1,0,0,19,74,
146,2,0,5,0,0,0,1,0,0,19,82,146,3,0,10,0,0,0,1,0,0,19,90,146,4,0,10,0,0,0,1,0,0,19,98,146,5,0,5,0,0,0,1,0,0,19,106,146,7,0,3,0,0,0,1,0,2,0,0,146,8,0,3,0,0,0,1,0,0,0,0,146,9,0,3,0,0,0,1,0,0,0,0,146,10,
0,5,0,0,0,1,0,0,19,114,146,124,0,7,0,0,0,98,0,0,19,122,146,134,0,7,0,0,8,208,0,0,19,220,146,144,0,2,0,0,0,4,54,57,57,0,146,145,0,2,0,0,0,3,48,48,0,0,146,146,0,2,0,0,0,3,48,48,0,0,160,0,0,7,0,0,0,4,48,
49,48,48,160,1,0,3,0,0,0,1,0,1,0,0,160,2,0,4,0,0,0,1,0,0,20,192,160,3,0,4,0,0,0,1,0,0,11,172,160,5,0,4,0,0,0,1,0,0,28,172,162,23,0,3,0,0,0,1,0,2,0,0,163,1,0,7,0,0,0,1,1,0,0,0,164,2,0,3,0,0,0,1,0,0,0,0,
164,3,0,3,0,0,0,1,0,0,0,0,164,5,0,3,0,0,0,1,0,31,0,0,164,6,0,3,0,0,0,1,0,0,0,0,164,32,0,2,0,0,0,11,0,0,28,192,234,28,0,7,0,0,8,12,0,0,11,6,234,29,0,9,0,0,0,1,0,0,7,170,0,0,0,0,28,234,0,0,0,8,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,50,0,0,0,220,0,0,0,100,50,48,49,56,58,48,51,58,48,50,32,49,49,58,51,48,58,51,52,0,50,48,
49,56,58,48,51,58,48,50,32,49,49,58,51,48,58,51,52,0,0,0,2,52,0,0,0,100,0,0,0,227,0,0,0,100,0,0,1,145,0,0,0,100,0,0,0,0,0,0,0,10,0,0,0,228,0,0,0,100,0,0,1,224,0,0,0,100,7,0,1,0,7,0,4,0,0,0,48,49,48,48,
2,0,4,0,1,0,0,0,0,32,1,0,12,0,4,0,1,0,0,0,0,0,0,0,16,0,5,0,1,0,0,0,90,0,0,0,64,0,4,0,1,0,0,0,0,0,0,0,80,0,4,0,1,0,0,0,1,0,0,0,0,1,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,83,67,73,73,0,0,0,10,0,
0,0,74,75,74,75,39,3,171,92,66,2,1,0,224,9,1,0,0,0,0,0,62,127,1,0,0,0,1,0,162,107,1,0,1,0,0,0,0,164,5,0,0,82,4,0,0,147,3,0,51,19,0,0,176,131,1,0,0,0,1,0,253,183,1,0,197,130,1,0,0,0,1,0,184,184,1,0,138,
145,1,0,19,118,255,255,99,248,255,255,107,199,255,255,148,49,1,0,1,7,0,0,208,11,0,0,114,79,255,255,190,164,1,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,
65,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,49,34,2,0,49,34,2,0,49,34,2,0,65,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,
49,34,2,0,49,34,2,0,49,34,2,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,49,34,2,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,65,51,3,0,
65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,81,51,3,0,96,147,9,0,96,147,9,0,81,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,48,17,1,
0,64,17,1,0,64,17,1,0,128,153,9,0,128,153,9,0,128,153,9,0,128,153,9,0,128,153,9,0,129,153,9,0,96,147,9,0,81,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,0,18,1,0,112,153,9,0,48,17,1,0,65,51,
3,0,65,51,3,0,49,34,2,0,112,153,9,0,129,153,9,0,129,153,9,0,112,153,9,0,112,153,9,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,145,17,1,0,145,17,1,0,65,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,96,147,
9,0,129,153,9,0,129,153,9,0,129,153,9,0,129,153,9,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,145,17,1,0,145,17,1,0,65,51,3,0,65,51,3,0,65,51,3,0,81,51,3,0,81,51,3,0,129,153,9,0,129,153,9,0,130,
153,9,0,96,147,9,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,145,17,1,0,145,17,1,0,145,17,1,0,145,17,1,0,129,153,9,0,129,153,9,0,129,153,9,0,81,51,3,0,65,51,3,0,65,
51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,81,51,3,0,65,51,3,0,145,17,1,0,145,17,1,0,145,17,1,0,81,51,3,0,129,153,9,0,129,153,9,0,112,153,9,0,81,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,
3,0,81,51,3,0,81,51,3,0,65,51,3,0,145,17,1,0,81,51,3,0,145,17,1,0,97,102,6,0,129,153,9,0,129,153,9,0,129,153,9,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,81,51,3,0,81,51,3,0,65,51,3,
0,49,34,2,0,145,17,1,0,49,34,2,0,81,51,3,0,129,153,9,0,129,153,9,0,129,153,9,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,81,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,97,
102,6,0,129,153,9,0,129,153,9,0,113,102,6,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,97,102,6,0,97,102,6,0,81,51,
3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,65,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,65,51,3,0,65,51,
3,0,65,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,81,51,3,0,65,51,3,0,65,51,3,0,49,34,2,0,89,136,1,0,251,255,0,0,129,147,1,0,213,139,1,0,5,0,1,0,204,
187,1,0,215,127,1,0,5,0,1,0,115,198,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,95,1,0,0,0,1,0,170,149,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,153,131,1,0,238,255,0,0,20,184,1,0,149,131,1,0,238,255,0,0,222,183,1,0,149,131,1,0,238,255,0,0,222,183,1,0,149,131,1,0,238,255,0,0,222,183,1,0,149,131,1,0,238,255,0,0,222,183,1,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,70,65,70,65,3,0,152,0,180,1,0,48,1,0,81,1,240,0,0,0,70,65,70,65,101,0,0,0,0,0,0,0,245,47,110,51,19,237,50,1,108,225,0,89,
245,47,118,130,17,245,61,1,157,232,0,94,248,47,150,196,18,218,74,1,38,244,0,100,121,47,121,244,19,237,81,1,176,28,0,102,251,47,138,252,19,130,88,1,158,72,0,100,255,47,212,213,20,57,0,0,0,0,0,0,0,0,0,0,
0,0,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,0,0,0,0,0,0,0,0,0,0,0,0,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,
255,47,212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,255,47,
212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,81,1,239,37,0,101,255,47,212,213,20,57,70,65,70,65,0,0,152,8,90,9,74,1,0,0,215,3,0,0,0,0,102,11,0,0,147,3,211,7,88,1,0,0,84,8,0,0,0,0,130,3,1,0,70,
2,108,12,81,1,0,0,40,8,0,0,0,0,0,0,0,0,164,5,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,82,4,0,0,51,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,182,80,0,0,0,0,0,0,0,0,0,0,79,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,83,
1,231,3,81,1,255,1,70,65,70,65,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,174,174,174,174,70,2,0,0,164,5,0,0,82,4,0,0,152,8,0,0,147,3,0,0,0,0,0,0,9,6,187,27,3,0,0,0,88,
9,0,0,103,9,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,72,0,0,24,75,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,4,0,0,0,148,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,0,0,0,18,0,0,0,136,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
201,1,0,0,254,255,255,255,0,0,0,0,0,0,0,0,32,0,0,0,50,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,0,0,164,5,0,0,24,24,24,24,250,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,112,7,0,0,64,1,0,0,0,1,0,0,112,7,0,0,0,1,0,0,80,48,50,48,49,49,49,54,53,70,49,54,81,
76,71,66,48,48,83,66,53,49,70,70,69,70,68,68,70,65,52,0,0,1,0,2,0,7,0,0,0,4,48,49,48,48,0,0,0,0,0,0,70,49,54,81,76,72,70,48,49,83,66,0,0,1,0,0,0,1,0,0,0,4,2,2,0,0,0,0,0,0,0,0,0,6,1,3,0,3,0,0,0,1,0,6,0,
0,1,26,0,5,0,0,0,1,0,0,29,46,1,27,0,5,0,0,0,1,0,0,29,54,1,40,0,3,0,0,0,1,0,2,0,0,2,1,0,4,0,0,0,1,0,0,29,62,2,2,0,4,0,0,0,1,0,0,30,163,0,0,0,0,0,0,0,96,0,0,0,1,0,0,0,96,0,0,0,1,255,216,255,219,0,67,0,8,
6,6,7,6,5,8,7,7,7,9,9,8,10,12,20,13,12,11,11,12,25,18,19,15,20,29,26,31,30,29,26,28,28,32,36,46,39,32,34,44,35,28,28,40,55,41,44,48,49,52,52,52,31,39,57,61,56,50,60,46,51,52,50,255,219,0,67,1,9,9,9,12,
11,12,24,13,13,24,50,33,28,33,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,50,255,192,0,17,8,0,192,
1,0,3,1,33,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,
50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,
115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,
201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,
196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,
42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,
154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,
246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,245,172,81,197,72,5,20,0,115,73,138,0,92,81,238,41,128,82,99,218,128,19,20,21,164,3,72,166,145,233,64,198,17,248,82,17,138,67,19,252,245,163,52,
0,160,231,189,74,164,244,160,5,201,237,74,165,143,106,98,37,90,144,28,83,36,120,167,102,152,11,154,76,208,32,221,69,0,37,25,160,10,212,98,164,160,197,55,3,52,192,80,180,184,160,3,20,113,64,6,41,113,64,
9,143,67,77,199,57,207,225,64,11,138,54,208,49,165,105,133,63,10,64,70,99,52,155,77,43,12,93,153,245,169,16,83,2,92,3,78,0,10,98,29,219,129,78,4,244,166,33,212,187,168,16,133,233,55,208,1,186,141,221,
168,0,221,205,46,234,0,130,151,241,164,49,41,104,0,197,20,0,99,218,140,83,0,199,210,140,82,0,197,24,205,0,24,167,80,2,82,98,128,25,143,106,76,123,126,52,12,77,153,164,8,115,205,33,146,5,62,180,253,167,
214,152,133,0,210,244,237,76,65,154,50,62,148,0,153,30,180,102,128,27,187,138,50,105,8,55,82,238,160,6,209,159,106,67,23,52,180,192,78,130,140,154,98,14,125,133,40,244,160,97,75,64,6,15,173,38,49,239,
64,11,219,189,24,160,5,165,199,20,0,132,102,144,138,0,76,12,80,5,33,143,27,105,220,83,1,8,20,148,8,141,179,212,83,55,80,59,8,90,141,220,245,56,164,22,13,231,52,110,247,160,66,238,20,185,255,0,38,128,12,
138,92,210,0,205,46,69,48,10,59,211,16,82,241,64,196,254,180,180,0,188,81,64,9,138,51,64,6,225,78,13,239,64,11,145,222,152,101,81,217,143,208,80,49,3,3,210,156,49,64,14,36,83,55,142,196,80,59,8,100,244,
197,55,127,189,33,216,105,97,235,81,146,40,11,13,221,239,75,186,144,10,31,181,25,244,160,144,205,56,26,0,92,243,205,46,115,64,131,52,185,166,2,231,222,140,251,254,180,192,51,206,41,65,246,52,0,160,250,
210,230,128,10,57,160,4,228,209,131,233,64,8,105,57,31,227,64,199,114,70,127,149,24,244,160,3,219,31,149,29,7,90,6,52,147,142,149,25,221,72,180,40,142,70,251,168,196,253,41,222,69,199,252,251,201,255,
0,124,154,67,208,65,105,114,231,136,31,241,24,165,125,62,237,84,177,132,128,61,199,248,208,43,162,180,137,36,88,222,164,103,142,69,71,156,82,6,172,59,119,189,56,30,255,0,210,130,69,13,233,222,148,114,
105,136,126,105,203,243,48,30,167,25,160,146,232,91,92,2,219,179,244,255,0,235,209,182,208,127,127,242,255,0,235,213,216,155,140,18,88,231,25,111,251,231,255,0,175,79,205,151,163,254,95,253,122,101,36,
216,158,117,128,224,171,254,84,191,104,211,243,247,95,242,162,196,139,246,157,63,251,141,78,251,77,135,95,45,168,176,92,85,184,178,108,237,133,142,40,251,93,143,252,241,52,88,46,31,107,178,255,0,158,20,
191,108,179,255,0,158,20,88,46,31,108,179,255,0,159,113,71,219,109,59,91,143,200,81,96,184,191,111,182,29,32,31,165,40,212,96,237,8,162,195,184,191,218,113,15,249,99,250,209,253,169,31,252,242,253,104,
176,92,119,246,130,129,147,26,129,238,106,25,245,171,123,113,153,12,106,125,11,12,212,182,145,209,78,132,170,61,10,77,226,148,206,35,138,38,250,204,162,153,255,0,9,68,135,133,182,132,255,0,219,113,83,
204,142,191,168,37,187,40,73,227,121,99,155,97,182,139,3,174,14,107,58,251,198,247,87,54,87,48,34,36,108,241,62,215,76,130,167,105,198,41,57,154,195,3,5,36,238,113,254,24,214,181,27,205,118,40,174,111,
174,38,141,131,101,36,148,144,120,61,141,122,6,238,43,42,82,109,106,107,155,211,132,43,37,5,109,7,41,61,41,224,251,214,167,144,208,163,36,211,168,32,118,105,240,200,22,100,39,158,122,80,132,69,174,235,
223,217,186,98,202,33,87,59,194,1,211,177,63,210,185,184,252,89,127,113,28,143,5,128,112,131,39,106,177,197,119,209,161,25,195,154,76,230,169,81,198,86,71,47,55,196,43,201,28,44,81,196,133,122,130,15,
63,157,92,176,241,158,165,125,40,150,69,134,11,100,56,115,180,156,253,57,168,171,78,16,87,59,240,240,231,178,102,233,241,80,77,153,182,37,93,246,171,179,129,158,157,125,5,44,158,38,49,207,113,27,90,252,
209,17,191,18,169,28,250,17,215,240,172,154,57,154,180,154,30,124,72,170,164,188,10,184,0,224,202,62,239,28,253,57,170,95,240,154,69,140,139,41,74,140,242,31,174,58,246,160,67,163,241,146,203,187,202,
211,166,125,171,184,237,126,131,242,166,159,27,160,93,199,79,144,0,113,204,221,255,0,42,0,63,225,58,128,15,248,241,125,222,134,111,254,181,59,254,19,187,109,223,241,229,38,204,112,124,209,156,253,49,72,
6,255,0,194,119,23,125,60,255,0,223,255,0,254,198,165,79,26,239,206,52,211,199,95,223,244,255,0,199,105,130,65,39,141,66,62,211,166,100,144,15,19,231,175,225,82,91,248,190,91,151,217,14,146,206,196,224,
5,144,146,122,251,123,26,78,195,179,11,191,22,207,99,49,138,231,72,49,56,236,210,17,159,113,199,34,162,255,0,132,235,31,243,14,95,83,153,15,31,165,10,205,14,205,61,75,222,41,214,204,111,246,24,78,54,224,
200,125,251,10,230,30,237,217,206,91,39,53,203,57,106,125,54,22,143,179,163,30,239,81,191,104,61,65,169,87,85,186,141,112,147,58,15,69,56,169,76,218,74,251,145,11,153,39,156,179,185,102,216,220,147,158,
198,160,137,247,74,1,61,85,135,232,104,185,147,90,153,126,23,144,39,136,236,248,199,204,87,235,144,127,198,189,81,113,223,20,81,216,203,57,95,189,143,167,234,74,20,26,126,206,63,173,108,120,140,80,61,
197,59,190,40,33,141,205,52,203,26,50,134,112,185,56,28,103,39,173,33,28,247,140,39,71,210,35,95,48,39,239,135,44,15,247,79,165,115,122,118,161,111,109,107,57,91,187,117,44,54,229,222,84,110,157,136,21,
233,209,146,246,22,57,103,22,234,28,142,169,107,20,218,132,166,223,80,129,147,119,202,112,255,0,204,140,214,181,158,148,235,44,86,210,106,49,41,85,4,0,140,112,73,250,84,85,142,138,230,244,170,202,27,20,
174,46,222,214,233,163,123,153,36,41,54,210,202,72,86,199,167,29,56,171,177,222,67,21,235,151,182,148,197,38,24,70,100,32,142,125,113,207,25,3,235,89,201,37,29,9,230,147,149,216,246,158,43,141,69,100,
146,22,17,44,101,153,11,147,156,3,207,61,179,218,175,182,171,100,45,222,220,217,72,35,65,181,49,51,12,122,228,119,7,211,34,177,40,167,3,93,44,243,139,9,30,16,204,84,133,151,103,30,132,228,126,180,178,
253,162,72,39,148,219,238,5,139,185,102,193,141,183,28,254,156,81,112,51,30,87,64,177,191,202,20,146,50,48,121,245,165,251,89,243,26,79,144,51,100,109,216,48,51,199,76,98,128,46,218,221,170,156,202,145,
176,140,124,190,103,78,121,254,149,191,99,171,221,92,102,221,238,177,1,139,34,56,136,11,131,219,110,49,142,181,149,88,183,169,94,211,217,193,181,184,203,107,169,29,229,139,237,18,71,10,54,49,111,40,85,
94,191,120,14,252,84,54,26,154,44,173,28,115,169,93,132,178,238,43,150,207,0,145,142,63,199,165,69,174,153,159,183,150,175,177,102,27,197,134,233,216,78,178,140,231,12,219,54,115,252,13,156,158,43,19,
83,212,94,233,55,27,201,38,218,228,109,102,39,111,226,106,160,181,46,149,89,78,252,198,115,94,93,77,38,230,154,70,44,114,88,177,230,182,247,243,81,86,203,99,222,192,78,114,79,153,236,30,103,56,52,51,241,
197,101,115,208,104,141,37,219,33,57,254,18,63,67,78,183,151,55,49,156,245,113,69,204,154,50,244,35,183,196,118,99,254,158,20,126,181,236,33,120,28,116,171,163,179,49,206,126,56,63,34,85,0,115,143,206,
159,242,231,4,129,158,130,182,60,54,155,57,253,75,196,19,65,173,199,166,89,218,25,100,12,166,66,78,6,210,59,126,98,183,99,124,159,44,130,210,14,100,42,112,169,232,190,230,165,74,236,244,43,224,233,209,
161,9,183,118,213,255,0,200,136,154,171,114,223,188,128,127,183,159,208,208,207,45,28,207,140,36,255,0,137,84,35,254,155,127,236,181,199,199,55,252,75,164,65,229,7,15,185,75,3,242,156,99,60,12,126,117,
223,75,248,40,198,95,27,50,37,102,105,154,95,151,14,221,21,129,233,93,37,163,6,214,20,246,40,8,171,171,183,200,152,238,100,203,29,205,253,236,205,14,249,86,57,137,192,56,81,207,24,53,53,250,93,169,183,
187,187,51,242,66,29,253,83,28,1,158,252,99,154,206,73,114,171,2,111,152,100,23,177,199,126,30,84,45,16,12,184,192,39,144,71,182,104,158,234,41,93,157,75,47,202,0,1,49,208,125,127,58,231,102,168,238,116,
205,115,70,139,65,133,100,154,52,43,24,89,33,97,150,102,199,60,119,201,239,92,149,206,166,151,171,36,234,140,100,113,179,158,163,31,79,99,233,218,179,138,122,220,185,61,138,18,206,26,80,206,132,16,121,
24,231,20,145,1,115,52,112,198,160,110,108,13,204,0,231,244,21,100,154,54,209,79,8,212,151,202,133,154,21,249,157,166,228,117,229,113,140,158,13,85,184,51,180,112,188,104,136,38,194,133,87,36,231,167,
57,39,20,174,39,27,161,171,21,220,151,18,68,100,95,145,119,18,91,3,166,106,23,130,104,172,227,185,14,184,145,136,218,9,220,57,61,120,246,163,65,40,36,59,201,186,107,149,129,228,0,227,32,150,224,10,185,
99,9,183,180,123,199,130,218,227,107,108,22,210,137,50,221,62,97,183,3,191,173,9,162,163,27,16,223,198,203,115,28,72,246,225,68,100,150,132,73,180,12,147,134,220,51,223,28,113,210,173,121,222,255,0,149,
97,84,246,178,230,253,226,51,112,73,233,82,9,142,58,214,39,168,196,103,36,82,219,190,37,67,254,216,254,116,204,218,208,167,167,184,135,196,118,237,217,46,148,255,0,227,213,236,234,69,93,14,166,57,194,
254,27,242,102,70,189,226,56,116,120,196,49,168,154,246,65,242,69,158,0,254,243,122,10,194,209,252,65,112,151,68,206,191,104,184,185,56,95,86,250,127,117,71,249,246,185,79,91,26,224,112,11,234,206,164,
247,151,229,255,0,4,233,173,109,182,78,219,48,110,27,253,100,184,251,131,208,122,159,243,245,212,142,53,137,2,39,10,61,255,0,206,106,226,143,31,31,91,154,92,171,250,236,82,45,245,170,87,50,127,165,219,
143,102,63,202,165,156,8,230,60,101,46,52,248,23,214,70,63,165,114,176,249,141,164,186,130,200,130,77,219,214,80,132,156,116,233,205,119,210,127,186,70,79,227,102,68,237,31,155,33,27,193,39,230,86,227,
7,240,173,123,43,130,194,214,101,4,149,93,141,143,166,43,90,159,14,164,35,43,75,215,95,78,67,9,139,204,67,41,126,184,193,224,103,63,133,91,93,81,239,225,22,247,60,6,108,12,118,25,207,233,88,243,43,88,
57,117,185,17,79,46,7,105,35,98,73,1,28,56,0,114,115,145,223,165,88,19,36,81,18,208,41,204,120,25,65,193,35,175,95,124,215,59,54,69,18,174,200,91,105,32,12,230,149,119,128,90,50,64,39,37,115,207,29,207,
231,74,227,44,90,92,136,110,3,60,113,200,8,193,18,12,138,37,184,37,82,44,70,21,70,114,138,1,231,25,201,239,75,168,250,16,151,96,121,163,204,57,200,227,210,152,132,47,234,106,64,140,209,111,3,62,135,63,
210,128,26,209,72,170,9,199,61,179,77,96,234,185,61,51,235,69,198,64,205,207,35,138,216,86,253,218,253,5,97,88,245,114,215,172,132,221,243,26,149,36,218,67,12,112,114,50,51,88,158,179,23,112,162,55,10,
202,115,208,131,65,37,23,99,30,174,199,184,151,63,173,122,158,189,226,8,244,136,68,81,15,50,246,65,251,184,243,211,253,166,246,170,164,236,155,53,197,225,158,34,165,24,122,223,211,67,132,45,36,179,153,
167,45,113,115,59,116,239,33,254,138,63,207,183,99,161,104,207,100,198,89,88,54,161,32,203,190,1,16,47,160,247,255,0,61,58,184,43,187,157,57,141,104,209,163,202,191,165,253,104,117,48,70,144,198,35,76,
128,63,50,125,125,205,77,207,175,227,154,233,71,197,78,78,77,182,102,177,170,23,39,253,42,22,61,149,191,165,100,196,142,91,198,5,165,180,183,49,43,48,12,217,218,51,216,87,25,36,247,17,219,236,84,109,160,
146,85,151,142,70,13,119,209,148,125,154,76,198,73,243,54,140,227,43,200,93,219,115,59,114,72,171,250,61,209,130,127,46,66,21,15,204,9,56,197,105,82,113,113,106,226,140,93,204,149,132,179,147,156,54,121,
173,139,125,62,192,141,210,223,184,33,114,0,136,158,113,245,21,202,228,93,138,239,42,146,202,70,0,232,122,84,182,137,44,252,164,102,68,7,12,9,56,25,233,159,203,244,168,108,104,191,44,147,43,108,146,211,
11,24,17,21,192,28,255,0,143,20,168,36,183,0,180,17,136,227,194,62,84,96,30,51,158,61,171,50,204,215,79,149,158,61,206,138,6,246,219,128,9,164,154,94,16,6,82,2,0,8,92,123,255,0,62,245,66,35,206,71,28,
154,69,144,224,130,105,136,122,176,119,218,91,2,172,110,104,226,194,191,203,140,244,160,99,76,236,87,27,193,218,123,142,181,94,87,45,32,203,129,144,65,197,3,42,186,178,147,135,60,26,218,137,159,201,79,
155,248,69,101,89,232,122,121,111,197,33,55,184,99,205,63,123,228,12,138,192,246,7,228,134,251,199,223,52,208,79,20,8,173,126,113,169,202,127,219,205,94,251,119,155,117,36,178,179,207,113,35,227,39,171,
158,195,216,123,84,38,123,152,120,167,77,63,35,182,240,238,142,240,73,231,202,3,95,184,206,72,202,192,191,227,93,124,17,44,49,236,80,113,156,146,121,36,250,154,235,167,27,35,228,179,124,79,180,171,202,
191,174,196,226,158,164,214,135,138,204,167,106,174,231,231,95,99,89,129,157,119,110,147,72,192,240,0,237,92,134,174,222,93,173,201,192,56,24,31,157,49,244,57,171,57,210,43,165,121,161,219,27,130,1,64,
70,63,198,172,188,182,179,234,182,177,1,136,139,141,236,231,0,142,253,127,157,54,157,238,9,171,88,211,125,46,212,234,232,35,181,135,203,11,247,82,66,21,186,245,108,112,127,26,110,183,246,45,38,251,117,
181,188,78,178,68,80,35,2,193,9,24,220,14,122,254,125,40,140,155,97,37,99,152,98,207,158,132,147,233,87,108,181,11,155,40,100,142,7,216,178,99,126,7,92,116,171,100,18,79,171,221,186,185,121,137,221,130,
220,14,72,233,84,159,92,187,147,206,86,152,236,152,131,32,32,124,196,116,205,36,134,217,93,37,243,38,88,247,109,86,108,115,82,202,60,168,213,188,206,73,32,130,58,96,15,241,35,240,171,36,128,78,65,60,208,
215,4,156,154,4,39,158,48,106,192,150,220,227,37,113,198,71,52,152,209,12,147,38,126,95,90,97,145,74,147,200,32,80,52,66,211,55,191,181,109,67,41,251,60,126,187,69,99,91,100,122,185,103,199,33,194,67,
154,126,242,121,205,115,158,208,255,0,51,38,148,177,24,160,68,87,199,55,204,125,112,127,65,93,103,133,244,77,215,94,126,208,243,191,204,172,70,86,37,61,254,191,231,212,210,130,188,143,66,117,213,28,35,
147,236,122,29,188,9,111,24,68,7,174,75,30,172,125,77,89,4,122,115,93,187,31,17,82,110,114,114,125,73,23,240,167,134,250,80,100,204,135,110,42,171,183,239,20,125,107,48,51,167,186,137,110,12,108,224,22,
56,81,158,181,201,107,82,110,211,238,23,140,110,25,63,141,62,161,208,229,237,124,147,35,11,135,112,170,191,38,50,112,114,63,250,245,98,232,216,249,97,98,121,24,228,103,112,38,155,189,193,90,197,119,152,
166,209,28,204,121,193,228,241,86,210,226,9,152,253,162,55,104,194,128,113,146,7,191,249,245,162,221,130,253,202,146,181,190,240,98,70,3,118,72,61,199,30,255,0,90,93,130,118,102,139,1,64,206,48,127,160,
170,17,5,229,180,171,19,28,140,41,25,224,247,252,42,164,182,114,68,100,222,203,136,200,4,224,247,252,40,82,6,138,240,152,158,83,230,190,212,193,195,28,227,63,133,75,36,182,204,99,72,88,32,118,59,201,206,
0,227,25,207,126,189,42,200,35,12,132,204,60,244,196,99,42,127,189,72,29,12,81,55,158,55,51,97,198,62,239,189,45,74,178,28,187,12,236,158,122,133,11,144,199,161,62,148,205,203,246,95,55,205,93,249,198,
206,244,93,133,144,247,242,150,228,70,46,84,198,65,59,241,210,144,127,170,149,195,231,111,79,151,130,40,187,30,132,12,195,41,135,7,119,94,58,86,237,177,205,180,124,231,229,28,214,53,182,61,92,179,227,
151,161,38,56,207,31,157,73,184,122,87,57,236,10,27,4,26,123,241,249,208,39,184,203,220,125,165,78,122,162,31,252,116,87,175,104,16,199,22,135,103,229,32,27,225,71,99,220,146,163,38,174,143,196,204,243,
73,63,170,193,127,91,26,169,238,106,97,237,93,39,205,49,227,235,78,24,160,147,145,241,62,180,52,29,26,75,237,158,99,6,8,168,78,50,73,255,0,245,154,227,180,143,20,79,171,155,217,228,46,4,74,160,12,240,
55,103,160,169,130,234,41,49,250,190,248,35,182,184,46,224,152,149,129,31,222,108,145,252,171,22,235,87,55,182,255,0,102,16,236,119,32,6,13,156,156,247,170,107,168,151,98,177,130,77,59,50,204,118,238,
200,92,12,231,31,210,171,205,169,203,112,2,16,170,63,217,29,106,85,165,239,20,239,29,6,203,112,36,139,230,200,101,251,184,31,78,185,62,213,114,210,107,169,213,156,48,195,224,48,35,25,199,211,181,18,105,
43,176,138,109,217,21,238,166,66,8,117,33,212,158,131,142,77,70,143,8,136,31,159,204,35,145,219,175,248,123,85,116,17,14,161,44,111,23,201,191,113,111,226,39,167,106,205,46,78,114,231,29,121,52,226,180,
19,122,132,48,155,134,206,225,193,225,122,150,252,42,253,196,246,207,36,64,121,4,231,36,225,64,95,108,14,189,189,59,215,69,54,172,209,140,211,186,101,43,199,133,231,220,187,64,8,49,229,40,0,156,247,171,
77,111,104,203,9,80,145,144,70,224,238,216,111,200,28,83,209,185,49,106,146,33,189,242,22,85,17,166,192,65,200,71,206,79,111,214,169,164,109,43,108,14,160,158,112,78,43,57,219,155,66,225,126,93,70,1,156,
252,220,226,167,129,252,161,32,42,142,113,129,184,103,30,245,5,163,127,71,240,173,174,171,164,173,233,214,225,129,242,85,161,120,142,84,131,235,223,140,83,154,217,109,15,144,147,44,202,131,2,69,4,3,249,
215,61,89,38,172,122,249,100,90,155,126,67,51,205,40,53,129,236,49,224,241,79,99,252,233,144,247,18,244,98,72,78,65,204,75,94,173,225,171,216,230,208,172,147,39,122,196,1,5,78,56,227,175,78,212,233,59,
72,156,198,18,158,18,13,119,253,13,213,57,30,166,165,92,253,49,218,186,143,153,100,128,211,243,129,65,39,138,124,77,214,140,247,163,74,66,66,64,202,206,61,73,92,255,0,34,43,27,194,204,86,195,80,62,165,
7,243,162,59,9,154,186,245,228,178,253,150,38,108,170,196,184,25,255,0,100,127,141,86,208,108,99,188,212,89,165,100,17,194,190,99,101,177,158,64,0,119,39,158,148,167,164,88,225,185,163,226,233,109,204,
80,166,87,237,9,144,64,36,224,99,252,107,143,28,158,0,63,90,138,55,228,212,186,154,200,145,62,104,206,64,28,215,107,105,99,105,167,104,246,146,61,210,59,79,16,145,132,106,73,92,246,63,159,106,154,215,
106,200,170,90,59,156,186,53,183,246,163,150,5,173,214,83,211,140,140,241,86,117,38,176,251,49,54,185,82,88,124,166,182,142,198,50,220,141,244,203,57,108,252,211,124,161,186,236,218,114,63,74,231,231,
68,15,136,219,114,246,53,180,160,162,174,153,132,42,185,201,166,172,107,233,23,239,111,107,229,197,176,59,18,9,61,127,207,53,65,36,182,142,121,76,145,131,206,49,216,87,51,132,174,236,118,198,164,44,147,
66,79,120,146,98,52,69,84,29,241,81,72,182,234,153,25,45,234,106,148,101,20,41,78,50,119,44,193,60,118,233,230,71,18,179,99,239,48,207,244,170,87,55,18,221,54,243,207,127,148,116,162,48,124,220,204,39,
81,114,242,197,17,66,73,44,161,73,98,59,83,165,134,88,134,100,70,64,249,218,72,235,90,24,155,22,83,77,107,167,219,199,13,193,10,249,98,189,179,184,143,228,5,89,71,223,10,150,198,225,156,144,122,243,92,
115,181,207,111,47,189,254,67,115,205,40,168,61,54,62,158,220,126,148,204,222,227,46,201,34,18,73,255,0,86,49,249,154,232,244,233,100,77,62,223,230,56,100,36,115,211,146,63,165,71,83,189,53,236,17,232,
154,36,230,227,76,133,250,176,27,73,250,86,152,63,135,210,187,34,253,212,124,134,37,114,213,146,243,36,90,112,250,211,57,207,157,124,114,36,95,24,234,59,193,201,144,17,244,218,184,253,13,79,225,176,70,
149,116,195,163,74,163,242,31,253,122,113,122,9,151,181,49,243,68,9,228,40,254,66,165,240,250,62,235,137,16,149,101,32,2,63,26,153,252,35,134,228,62,35,183,154,59,137,37,117,117,89,27,141,220,228,128,
51,207,122,231,131,227,138,33,172,71,45,201,213,179,16,227,191,74,238,101,176,45,162,36,80,41,121,151,229,198,14,70,49,145,254,125,43,26,206,214,53,165,212,226,100,12,37,148,16,67,121,135,34,152,114,223,
46,113,159,90,221,24,178,124,108,181,196,146,231,120,96,49,146,71,31,227,84,76,80,153,20,25,228,32,129,184,152,249,31,175,52,212,137,107,75,161,35,87,129,222,230,41,17,132,77,144,28,117,231,211,183,231,
77,91,209,32,2,85,69,108,227,114,167,108,247,230,169,111,113,62,194,201,36,104,24,137,21,178,112,48,131,252,125,191,90,134,75,178,202,209,132,77,165,66,231,110,15,29,254,180,222,160,180,44,24,17,97,98,
73,109,169,128,79,212,213,41,83,108,184,7,63,141,55,178,37,61,89,37,157,195,217,220,249,169,141,219,72,228,84,154,142,161,61,242,198,37,124,170,103,104,199,76,210,185,72,52,201,89,164,137,27,230,85,4,
40,61,7,90,220,153,129,124,132,10,61,134,43,146,170,247,143,99,47,151,191,242,34,205,40,53,7,174,199,3,83,74,115,143,247,87,249,80,101,45,200,174,191,212,219,159,246,88,126,191,253,122,218,210,228,45,
101,18,143,225,207,229,154,143,180,119,197,255,0,179,163,189,240,180,185,182,146,34,126,235,2,63,26,233,7,90,234,167,240,159,43,142,86,175,34,65,158,194,156,57,255,0,10,179,140,242,63,137,122,2,24,198,
183,9,33,242,177,204,184,224,246,13,252,135,229,88,126,28,139,254,41,185,155,31,242,244,63,244,26,81,27,39,213,211,23,172,189,148,15,228,43,176,240,39,135,30,226,195,237,110,146,133,158,79,151,228,249,
74,142,51,156,253,127,42,83,87,141,130,46,210,51,190,38,89,193,105,121,107,18,79,35,75,229,18,241,21,0,32,221,193,24,39,36,243,249,10,243,205,133,178,163,211,56,38,157,53,104,132,157,217,167,163,216,29,
66,246,27,37,206,233,157,80,17,142,57,231,175,182,107,222,98,240,238,155,111,111,44,247,19,145,23,151,150,80,201,144,7,190,126,181,157,88,243,52,138,132,156,79,0,186,117,184,185,154,84,12,17,164,98,185,
228,227,175,53,127,68,211,35,190,190,134,57,241,181,216,96,159,243,250,85,206,234,58,25,78,246,208,237,117,173,6,213,52,141,185,111,46,32,2,228,231,3,167,30,149,228,210,124,172,19,102,210,50,115,156,147,
254,113,81,71,170,39,149,66,92,171,97,177,5,243,131,73,27,72,160,229,128,171,8,182,236,20,121,69,72,36,146,123,142,220,87,67,78,218,20,154,190,163,205,188,16,200,175,42,2,152,232,73,25,170,190,88,33,136,
129,219,63,117,128,56,164,174,55,98,50,101,69,8,65,81,211,4,87,65,225,189,50,59,175,244,153,85,29,129,227,122,110,0,125,58,31,198,166,171,124,186,24,205,55,238,173,46,39,137,52,152,237,29,103,77,136,28,
244,81,128,127,14,131,240,172,29,155,240,169,247,143,169,197,16,189,181,46,9,197,89,150,180,175,42,7,142,89,3,48,92,228,41,231,61,191,165,94,243,133,193,121,21,85,65,111,186,14,113,192,172,106,39,123,
158,198,2,202,72,81,156,211,133,102,122,204,145,106,102,31,42,159,106,9,100,119,57,242,32,192,206,11,127,74,124,87,82,219,69,24,67,141,203,206,71,185,168,234,117,166,150,31,95,235,83,188,240,36,183,55,
18,220,203,35,230,53,64,189,59,147,255,0,214,174,237,126,181,211,75,225,62,111,49,105,226,29,188,135,140,158,255,0,165,60,99,21,161,192,115,122,214,158,154,174,147,115,98,231,104,153,54,134,198,118,158,
160,254,7,21,204,232,158,17,146,195,73,123,43,139,132,103,50,25,51,31,78,152,29,107,53,43,21,107,152,218,229,181,220,87,206,99,89,72,117,201,216,15,229,91,26,87,138,78,147,164,91,219,77,167,220,110,141,
72,220,88,40,63,76,138,38,185,163,100,194,58,61,78,107,196,119,227,87,190,123,197,67,30,85,87,99,56,99,223,158,43,11,236,228,243,208,123,144,42,227,164,108,39,171,47,233,87,103,74,212,33,187,11,188,196,
219,182,231,175,4,127,90,236,39,241,207,219,108,165,182,254,205,193,150,50,153,23,3,140,140,116,172,231,77,201,222,229,198,86,86,56,73,146,68,79,47,60,103,56,221,154,124,111,53,165,194,202,153,31,40,193,
31,65,210,180,106,234,198,77,92,215,188,214,239,175,224,142,39,154,86,80,56,0,131,184,253,7,90,231,238,239,51,60,64,219,32,49,19,187,156,238,39,173,77,56,216,152,223,118,53,111,154,69,68,104,149,66,231,
2,53,245,231,154,145,207,147,110,147,177,87,87,61,23,168,239,253,107,162,50,113,208,78,55,32,105,157,227,101,54,163,110,206,31,105,4,123,213,205,60,21,77,229,99,192,192,37,131,2,15,3,211,21,157,69,117,
99,72,59,50,9,165,120,239,34,157,209,101,100,108,149,0,224,254,98,167,176,212,37,180,155,122,112,174,125,50,49,233,82,227,166,132,84,187,213,12,215,117,103,191,196,109,143,148,96,96,99,31,231,138,199,
72,198,236,151,81,192,239,85,20,210,212,81,190,236,181,3,20,135,5,115,206,1,83,254,125,106,221,136,97,3,229,113,151,63,200,86,85,54,103,175,129,140,185,211,177,103,105,38,148,45,98,122,237,18,1,199,78,
149,43,127,171,79,167,245,52,9,145,207,159,178,67,142,210,56,63,146,212,120,45,229,142,160,103,21,63,104,232,181,240,255,0,63,212,245,159,7,89,125,151,64,137,136,195,204,198,67,199,110,131,249,87,72,191,
74,234,130,180,81,242,216,169,115,86,147,243,36,2,158,5,81,204,99,182,106,156,138,219,216,140,140,227,189,100,104,84,123,124,229,182,2,125,73,255,0,235,86,78,165,98,210,178,110,80,66,131,192,112,61,61,
189,169,37,168,204,127,236,124,103,247,43,244,243,127,250,212,159,216,171,143,245,17,246,255,0,150,223,253,106,173,69,97,235,162,38,63,213,47,227,56,245,207,247,105,201,160,194,1,63,103,93,249,235,246,
158,49,255,0,124,209,127,48,176,217,52,20,110,60,164,3,208,79,255,0,214,160,104,40,20,13,136,48,165,127,215,255,0,245,168,191,152,236,7,195,232,100,13,182,60,255,0,215,126,15,233,75,39,135,209,198,76,
113,30,191,242,216,113,147,244,161,54,43,16,175,134,162,143,123,172,72,24,130,56,156,96,130,62,148,146,248,118,22,183,84,75,101,199,4,143,180,129,207,175,79,243,147,79,153,135,42,30,190,31,9,14,213,133,
0,43,140,11,129,239,237,239,77,58,8,99,243,91,161,203,22,63,191,83,146,123,243,75,153,143,149,10,250,25,145,54,180,64,174,48,71,158,163,211,252,7,229,85,71,133,227,201,253,198,51,215,23,11,254,52,249,
154,23,42,35,147,194,145,17,197,187,103,254,187,39,248,211,71,131,212,175,17,156,158,167,122,31,253,154,159,59,14,68,76,254,19,48,90,133,49,187,13,229,190,82,185,29,63,218,199,106,75,93,9,81,10,226,81,
147,159,155,110,127,67,89,206,236,244,112,149,148,55,44,255,0,96,100,124,162,79,193,65,254,180,229,240,211,30,166,81,255,0,108,137,254,85,157,142,215,139,136,239,248,69,230,108,236,44,126,177,63,248,82,
255,0,194,43,122,83,167,254,58,223,225,79,149,139,235,81,234,82,188,209,39,137,33,183,24,105,30,95,186,7,57,192,174,199,76,240,85,130,89,69,246,200,76,147,227,39,231,35,30,220,81,8,94,90,134,39,26,225,
135,138,134,237,157,100,17,172,49,36,104,161,85,20,42,168,236,7,74,156,123,226,186,81,224,54,219,187,36,231,165,60,123,154,100,152,204,42,7,28,86,12,209,21,36,21,85,150,179,102,136,141,151,154,110,207,
106,146,132,216,41,54,115,210,129,139,229,209,229,208,2,24,197,39,150,40,24,134,49,77,242,253,169,0,158,88,244,163,203,30,148,0,158,88,244,166,152,197,59,128,211,24,166,236,30,148,92,6,148,30,148,223,
41,79,59,71,229,69,217,74,193,228,161,254,1,249,84,177,91,33,63,116,126,84,211,99,102,157,181,178,142,153,3,216,154,212,130,221,49,200,99,245,99,91,68,198,76,114,105,150,98,225,110,60,133,50,175,42,196,
147,131,90,11,86,146,70,115,156,165,107,244,36,90,149,106,140,201,70,41,227,24,166,35,17,170,23,172,25,170,42,200,42,22,90,205,150,134,109,166,237,230,164,98,21,164,219,64,197,219,197,38,218,6,5,40,219,
64,9,182,154,87,218,128,13,180,133,104,1,165,105,165,104,1,133,41,165,13,0,38,218,79,46,130,174,61,98,207,106,183,12,94,213,73,18,217,122,36,197,94,140,113,91,35,41,50,194,254,53,40,25,231,244,171,51,
100,138,63,10,149,71,20,196,72,5,60,1,76,147,17,141,66,245,206,205,145,93,234,50,42,25,67,113,77,219,205,33,129,90,66,40,24,128,113,70,40,24,109,163,20,0,220,82,98,128,19,28,82,98,144,9,138,105,20,192,
105,90,77,190,212,0,108,246,165,17,231,181,1,114,101,143,138,177,26,213,162,91,45,34,213,148,21,162,33,150,22,165,21,100,18,45,74,184,197,50,71,140,84,131,218,152,140,38,168,154,185,153,178,32,111,165,
70,71,53,45,20,38,41,49,72,98,98,147,20,12,49,237,70,61,168,176,6,13,39,122,0,67,210,147,20,88,46,52,209,138,2,226,21,166,237,52,0,152,165,219,69,130,226,133,167,170,213,36,43,146,170,212,168,181,72,150,
88,64,106,116,6,173,18,201,198,106,85,171,68,178,81,82,15,173,50,71,131,79,6,152,143,255,217,0,255,225,50,197,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,
48,47,0,60,63,120,112,97,99,107,101,116,32,98,101,103,105,110,61,39,239,187,191,39,32,105,100,61,39,87,53,77,48,77,112,67,101,104,105,72,122,114,101,83,122,78,84,99,122,107,99,57,100,39,63,62,13,10,60,
120,58,120,109,112,109,101,116,97,32,120,109,108,110,115,58,120,61,34,97,100,111,98,101,58,110,115,58,109,101,116,97,47,34,62,60,114,100,102,58,82,68,70,32,120,109,108,110,115,58,114,100,102,61,34,104,
116,116,112,58,47,47,119,119,119,46,119,51,46,111,114,103,47,49,57,57,57,47,48,50,47,50,50,45,114,100,102,45,115,121,110,116,97,120,45,110,115,35,34,62,60,114,100,102,58,68,101,115,99,114,105,112,116,
105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,117,117,105,100,58,102,97,102,53,98,100,100,53,45,98,97,51,100,45,49,49,100,97,45,97,100,51,49,45,100,51,51,100,55,53,49,56,50,102,49,98,34,32,120,
109,108,110,115,58,120,109,112,61,34,104,116,116,112,58,47,47,110,115,46,97,100,111,98,101,46,99,111,109,47,120,97,112,47,49,46,48,47,34,62,60,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,50,
48,49,56,45,48,51,45,48,50,84,49,49,58,51,48,58,51,52,60,47,120,109,112,58,67,114,101,97,116,101,68,97,116,101,62,60,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,87,105,110,100,111,119,115,
32,80,104,111,116,111,32,69,100,105,116,111,114,32,49,48,46,48,46,49,48,48,49,49,46,49,54,51,56,52,60,47,120,109,112,58,67,114,101,97,116,111,114,84,111,111,108,62,60,47,114,100,102,58,68,101,115,99,114,
105,112,116,105,111,110,62,60,114,100,102,58,68,101,115,99,114,105,112,116,105,111,110,32,114,100,102,58,97,98,111,117,116,61,34,117,117,105,100,58,102,97,102,53,98,100,100,53,45,98,97,51,100,45,49,49,
100,97,45,97,100,51,49,45,100,51,51,100,55,53,49,56,50,102,49,98,34,32,120,109,108,110,115,58,77,105,99,114,111,115,111,102,116,80,104,111,116,111,61,34,104,116,116,112,58,47,47,110,115,46,109,105,99,
114,111,115,111,102,116,46,99,111,109,47,112,104,111,116,111,47,49,46,48,47,34,62,60,77,105,99,114,111,115,111,102,116,80,104,111,116,111,58,68,97,116,101,65,99,113,117,105,114,101,100,62,50,48,50,48,
45,48,52,45,50,50,84,50,49,58,48,54,58,52,50,60,47,77,105,99,114,111,115,111,102,116,80,104,111,116,111,58,68,97,116,101,65,99,113,117,105,114,101,100,62,60,47,114,100,102,58,68,101,115,99,114,105,112,
116,105,111,110,62,60,47,114,100,102,58,82,68,70,62,60,47,120,58,120,109,112,109,101,116,97,62,13,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,60,63,120,112,97,
99,107,101,116,32,101,110,100,61,39,119,39,63,62,255,219,0,67,0,3,2,2,3,2,2,3,3,3,3,4,3,3,4,5,8,5,5,4,4,5,10,7,7,6,8,12,10,12,12,11,10,11,11,13,14,18,16,13,14,17,14,11,11,16,22,16,17,19,20,21,21,21,12,
15,23,24,22,20,24,18,20,21,20,255,219,0,67,1,3,4,4,5,4,5,9,5,5,9,20,13,11,13,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,
20,20,20,20,20,20,20,20,20,255,192,0,17,8,3,0,4,0,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,
3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,
86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,
183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,
1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,
22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,135,
136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,227,
228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,251,189,144,46,27,63,174,104,111,148,101,70,79,214,158,178,110,94,25,115,254,193,164,46,1,56,25,252,
43,16,35,99,230,46,24,109,255,0,129,17,75,26,170,175,44,71,185,228,83,216,167,247,54,183,168,231,52,108,84,228,40,63,238,255,0,90,44,2,109,89,27,239,41,63,74,107,71,181,179,146,59,2,49,154,119,29,70,70,
59,98,149,155,204,92,110,218,125,243,64,12,242,156,231,4,140,245,227,245,197,33,133,215,145,251,192,71,160,32,254,20,248,226,242,248,103,193,235,193,235,78,253,222,78,50,71,165,48,24,24,170,156,6,79,81,
183,25,165,249,152,13,163,243,230,149,164,219,144,91,105,247,166,249,135,184,111,170,116,160,1,75,228,134,30,95,225,197,72,185,35,5,148,224,240,64,230,154,25,142,120,96,125,77,55,127,92,198,114,61,41,
0,254,55,117,27,125,133,35,98,60,236,114,127,217,198,127,74,85,150,80,223,42,96,116,230,148,179,182,8,101,207,166,13,48,24,36,18,112,31,107,118,227,20,42,176,82,3,40,250,147,80,249,59,36,119,219,191,121,
201,193,62,152,227,210,164,141,21,148,129,148,61,67,28,154,0,118,210,189,88,116,237,154,85,101,110,160,159,198,153,180,3,243,29,167,175,165,55,141,216,27,178,15,4,208,4,222,99,12,40,7,31,238,154,99,111,
82,114,187,193,233,235,70,227,211,61,122,128,77,40,85,232,219,203,117,232,104,1,138,225,178,89,62,110,254,180,229,84,96,74,128,49,232,58,82,72,74,128,202,185,30,180,205,172,249,56,199,208,80,3,217,121,
92,190,225,238,0,52,190,88,101,35,149,227,161,57,6,153,183,106,144,27,35,251,167,250,82,128,195,160,250,19,64,9,229,186,176,7,56,236,115,215,218,156,219,70,112,220,227,191,90,24,13,191,59,110,199,61,122,
82,15,151,63,196,58,225,135,106,0,114,228,242,48,7,249,247,163,104,198,3,227,233,214,148,169,4,48,42,7,183,20,185,86,61,57,233,215,20,236,4,108,170,195,230,46,64,226,149,112,173,129,140,122,99,52,253,
193,120,219,250,245,166,17,19,112,55,169,61,183,103,20,0,255,0,50,79,239,70,83,234,69,27,153,70,0,227,212,127,42,140,198,54,227,112,252,169,85,72,81,180,166,229,236,195,173,32,6,97,193,33,212,250,99,154,
86,217,253,237,227,209,128,165,243,55,252,189,15,182,69,42,179,168,195,12,142,197,185,166,4,91,227,218,62,66,118,244,28,241,74,88,50,150,134,57,61,213,80,212,155,135,5,91,30,191,253,106,107,73,242,228,
54,225,250,210,1,172,236,163,231,10,160,241,130,156,213,118,81,42,252,223,55,184,24,21,109,2,238,227,36,250,118,161,178,185,224,31,247,179,64,209,92,195,180,134,82,252,250,28,143,202,143,43,146,85,152,
156,244,232,106,67,35,41,199,202,23,253,142,223,157,55,115,73,198,66,251,154,67,25,33,219,209,114,122,242,105,203,191,175,148,10,247,110,148,170,164,18,26,84,99,253,229,25,161,20,171,29,178,43,17,254,
122,83,1,24,43,112,191,54,122,30,184,166,170,134,194,176,102,244,206,57,169,74,191,83,180,15,168,166,157,254,172,123,141,194,129,17,181,186,51,48,95,144,247,219,252,234,54,139,118,67,56,35,166,71,90,176,
202,24,43,149,203,3,212,12,17,77,146,53,110,171,187,142,172,56,52,172,50,184,140,49,56,98,64,227,37,178,105,234,128,112,14,3,125,58,211,154,62,152,141,65,28,100,0,63,58,69,140,243,208,142,252,244,165,
97,136,176,237,231,238,176,245,199,52,121,96,40,109,225,61,113,200,52,52,29,8,218,196,116,193,20,121,109,130,89,114,71,31,53,48,2,161,185,201,62,132,156,99,252,105,25,85,190,96,188,253,72,253,41,50,170,
219,88,167,226,79,245,167,197,180,255,0,10,231,251,222,180,128,131,17,199,158,54,231,168,245,165,206,14,114,141,158,3,98,164,104,226,86,59,190,97,254,207,20,204,168,224,35,227,160,206,48,105,12,110,74,
103,18,21,29,192,206,63,42,14,27,146,50,126,184,254,116,139,25,234,23,112,246,161,187,128,191,247,209,160,100,111,110,255,0,196,135,105,239,76,86,88,91,102,89,15,185,206,106,124,13,188,97,71,112,77,35,
12,40,220,48,7,0,177,20,172,3,55,110,140,149,3,112,231,13,192,166,110,12,48,195,223,20,230,94,185,32,48,237,138,86,108,253,236,145,219,143,228,104,1,135,31,243,201,156,227,159,122,103,202,135,253,88,82,
105,205,143,239,48,199,79,74,3,57,60,50,185,254,234,247,169,24,172,204,8,39,114,169,244,21,19,109,220,15,152,75,118,4,255,0,133,73,230,50,228,21,5,179,211,118,105,76,146,224,156,4,29,198,49,64,17,172,
207,159,149,89,125,115,210,158,93,182,144,216,199,215,20,141,190,76,237,35,112,231,185,226,145,99,124,242,232,28,244,194,22,166,2,176,102,83,180,9,7,177,31,206,133,222,171,133,12,7,92,102,158,54,176,229,
99,95,92,124,180,197,113,208,149,127,204,241,72,0,49,239,201,255,0,100,131,74,211,249,109,134,86,59,143,67,73,195,0,0,101,31,236,246,165,242,66,242,204,128,250,19,76,9,87,107,48,249,217,51,206,120,56,
166,237,72,216,239,148,185,236,217,168,218,64,171,128,216,20,229,44,209,149,121,55,47,176,166,4,139,183,113,2,71,97,254,246,105,119,34,128,166,55,199,99,156,83,48,155,71,3,143,126,180,145,177,94,153,3,
251,173,205,49,15,24,228,22,108,123,154,114,60,125,60,191,155,212,154,139,146,8,49,130,123,113,75,27,244,204,78,139,244,226,128,45,164,133,88,48,82,71,165,88,89,151,25,92,99,175,53,69,91,25,94,163,235,
205,63,115,171,96,238,3,183,0,211,21,139,207,134,195,117,200,232,42,53,112,171,177,9,217,232,220,126,53,2,200,96,98,75,52,131,208,142,106,111,59,206,80,74,174,58,156,131,154,100,216,95,226,193,218,56,
236,105,50,21,176,120,110,205,193,163,3,161,114,87,168,192,233,81,187,227,160,46,191,237,96,26,99,37,206,238,74,134,111,246,148,82,125,160,238,225,55,99,174,21,113,252,170,31,49,254,160,117,207,74,126,
120,12,2,161,199,81,208,210,184,88,157,89,100,97,158,15,110,163,249,83,196,115,109,249,89,87,253,226,71,243,170,47,32,28,103,175,161,20,237,202,189,93,135,30,189,104,184,172,92,102,60,22,60,250,168,205,
35,51,55,44,155,192,235,184,127,133,71,28,168,23,37,216,41,254,33,197,72,183,81,171,101,65,115,232,120,170,21,137,18,61,216,56,4,116,218,88,241,82,121,123,126,84,231,182,14,120,168,193,44,114,20,175,179,
115,154,122,252,171,254,184,129,221,64,162,194,37,88,216,46,67,0,222,164,102,158,62,238,89,128,61,219,165,70,169,147,184,56,3,190,41,222,79,174,9,247,238,61,234,136,36,229,122,174,87,216,212,128,134,57,
3,53,28,121,97,194,143,112,166,156,172,71,109,171,220,117,52,192,149,93,71,30,81,43,233,210,159,199,240,166,209,254,246,105,139,156,156,131,154,8,244,28,211,16,237,187,77,5,128,198,50,63,60,82,100,247,
254,121,163,61,246,254,102,128,23,130,58,130,191,90,80,113,198,127,46,41,2,141,217,1,70,69,56,40,110,55,1,248,80,49,227,110,222,20,231,220,210,174,24,241,242,159,124,211,68,103,167,202,71,215,20,187,24,
103,229,63,158,104,36,119,202,58,100,31,94,198,151,203,94,135,129,235,72,36,109,184,224,126,52,47,61,126,95,173,0,59,203,81,212,241,219,154,80,171,235,249,210,121,113,245,32,19,220,138,114,196,191,192,
23,215,147,64,8,9,92,244,199,83,133,163,204,141,178,50,20,254,180,173,148,244,255,0,190,169,26,77,192,112,167,208,250,80,2,252,191,239,123,128,104,97,158,118,179,15,70,20,211,243,117,92,31,199,154,111,
204,159,197,180,125,77,0,41,145,122,21,199,233,75,145,216,131,237,214,154,178,238,80,193,149,148,140,142,244,46,27,183,233,64,10,89,148,240,20,126,56,167,172,146,5,32,237,83,254,201,201,168,195,38,14,
122,125,1,254,180,139,32,198,63,90,4,74,28,158,15,45,219,158,180,17,187,137,17,127,18,71,242,168,155,105,28,12,83,119,119,207,190,7,74,6,60,199,26,244,140,159,125,204,127,173,13,234,170,191,141,48,76,
87,141,184,30,180,237,192,242,5,0,38,91,140,128,7,211,52,116,111,188,77,46,59,237,80,125,169,54,250,115,64,6,209,215,35,240,233,78,13,149,251,187,135,181,51,106,183,222,234,59,98,144,171,118,63,90,0,119,
30,172,190,212,221,199,63,231,52,139,219,184,61,243,82,2,171,218,128,27,187,31,196,71,181,25,97,200,227,63,157,47,28,227,32,82,112,8,35,38,128,5,111,113,159,173,5,253,95,111,214,148,143,65,142,248,20,
133,151,186,156,253,63,173,0,98,100,48,228,238,245,205,56,194,27,24,216,27,183,60,154,139,106,201,243,46,11,116,201,167,112,191,120,133,62,153,172,141,7,112,56,98,171,159,202,130,132,129,146,135,241,34,
151,130,8,97,184,30,170,71,95,165,33,84,43,242,175,29,70,104,24,12,13,164,238,82,59,169,227,245,167,19,242,252,187,134,63,10,139,112,233,208,142,163,20,171,159,225,239,208,231,20,128,48,206,7,28,127,123,
142,41,172,197,134,27,0,255,0,187,74,204,85,136,196,128,255,0,181,131,73,230,13,234,8,97,145,142,244,192,79,57,56,86,222,190,133,78,63,165,59,146,188,124,254,228,243,74,204,165,72,45,143,199,20,156,115,
243,3,236,192,231,243,160,0,59,143,81,249,226,151,207,112,167,35,43,244,205,52,6,94,142,0,244,32,226,151,113,235,156,28,241,197,32,26,100,221,215,35,183,2,155,39,152,172,161,28,28,244,12,48,106,92,55,
80,197,63,0,77,38,88,244,102,113,244,197,48,19,247,159,196,25,79,127,151,245,205,27,113,206,73,230,149,89,187,183,32,119,239,79,223,242,227,43,207,168,160,4,220,25,128,124,144,122,19,200,252,233,142,141,
158,56,35,174,42,89,14,84,130,7,190,13,49,36,92,97,163,200,254,240,61,168,1,173,25,31,242,211,105,62,134,145,98,109,170,11,228,131,193,60,31,206,165,242,227,218,48,118,167,191,52,197,41,183,174,121,198,
79,25,247,160,7,42,178,228,35,144,125,201,52,214,86,86,5,186,227,156,102,140,22,232,216,35,219,154,118,223,92,31,199,165,2,35,111,38,68,207,113,237,72,170,171,157,190,180,253,196,54,12,123,149,179,151,
83,211,235,75,229,31,48,55,238,101,62,187,177,250,98,129,136,177,171,115,149,45,212,22,24,38,149,148,12,109,3,220,118,252,40,146,49,192,114,153,237,142,8,165,37,49,247,201,252,5,80,12,101,29,67,1,236,
121,20,46,27,24,98,125,177,138,127,154,139,255,0,45,8,252,105,60,192,234,112,255,0,142,105,0,190,96,233,247,121,197,43,177,3,153,27,111,166,41,158,96,25,83,230,115,252,91,114,13,57,73,94,115,187,208,145,
76,8,247,198,199,106,72,9,61,55,15,254,181,13,149,254,235,15,94,120,169,218,70,92,97,215,105,254,30,249,252,41,155,186,130,138,224,250,244,160,4,243,60,200,242,24,241,233,143,235,66,133,97,247,152,231,
185,28,83,55,109,97,182,61,167,167,90,147,104,102,201,86,247,199,79,229,64,13,103,129,78,37,64,135,216,227,241,224,210,239,88,253,48,71,247,115,78,218,2,224,149,199,98,122,212,123,204,124,134,80,61,199,
20,128,76,134,95,151,129,156,21,206,40,109,219,126,78,171,234,51,82,254,247,169,10,65,239,211,52,167,56,206,226,62,173,255,0,214,162,192,69,243,62,62,101,7,167,204,188,80,219,87,25,59,136,237,140,138,
115,67,199,50,45,31,117,128,45,159,248,9,197,0,53,164,110,140,163,235,75,34,150,0,115,237,142,127,10,93,136,87,24,108,246,109,167,2,148,238,224,130,48,58,169,25,252,69,0,69,229,172,77,157,206,125,137,
3,31,149,25,7,156,48,82,113,150,232,41,235,179,0,250,250,80,49,187,27,138,231,253,144,127,165,32,25,229,237,228,179,125,54,158,105,119,16,126,88,216,231,190,42,95,53,99,60,177,99,211,38,155,230,12,31,
226,35,181,3,24,217,147,135,137,189,125,197,70,99,104,220,12,5,83,234,73,53,54,100,110,112,87,208,116,166,183,221,249,134,7,215,52,13,12,95,151,39,42,125,119,82,121,139,39,4,143,160,20,138,164,55,200,
113,233,138,95,189,247,156,33,232,55,46,104,1,26,23,24,49,168,116,239,188,131,249,100,84,76,142,58,34,123,252,217,63,141,56,192,221,23,4,245,220,6,127,74,4,45,31,59,138,251,1,144,127,42,6,52,46,221,219,
128,61,243,180,210,200,236,63,140,1,252,233,118,153,58,183,31,238,224,138,111,146,139,156,21,62,185,52,128,108,202,91,190,15,183,74,136,179,175,0,238,244,198,63,157,74,182,249,31,35,40,244,220,6,41,62,
206,195,229,62,95,29,183,12,82,29,200,62,87,200,44,20,247,7,173,51,203,10,64,60,175,189,89,32,38,50,129,143,251,13,199,231,77,104,243,194,5,95,65,157,198,144,92,143,98,67,202,150,113,254,247,3,240,161,
118,238,63,38,71,167,79,235,65,86,231,49,146,15,102,92,147,244,197,42,200,56,253,219,32,199,95,255,0,93,3,7,145,79,221,136,125,112,51,81,73,30,214,13,140,30,188,12,85,146,66,242,34,18,47,171,10,99,49,
108,133,3,30,156,17,72,100,0,134,221,242,144,167,169,3,252,230,141,202,171,213,152,142,50,221,15,225,79,108,12,113,134,237,197,68,229,211,145,248,227,20,152,244,20,76,173,200,102,82,189,74,114,105,172,
206,88,145,32,247,63,215,20,132,187,16,197,12,157,183,41,193,20,190,97,102,10,209,124,195,185,249,115,64,12,238,219,230,12,122,128,50,7,242,165,18,38,208,166,68,199,247,79,248,211,248,101,233,144,58,115,
140,81,184,71,157,192,31,247,84,82,24,213,3,111,11,27,122,111,57,163,201,118,233,246,112,189,112,1,20,214,88,198,78,246,3,211,111,2,156,202,171,201,151,105,245,160,5,88,207,118,10,71,240,174,49,248,113,
72,178,24,249,93,196,14,14,236,80,10,191,42,228,255,0,192,127,173,61,149,137,57,56,245,205,0,42,201,189,190,96,74,159,65,78,66,59,243,237,154,136,170,39,62,99,131,233,176,98,133,148,22,198,204,134,246,
166,43,22,151,63,197,184,129,252,89,224,84,152,70,228,57,39,243,170,187,147,163,29,184,233,78,221,140,109,198,63,188,91,20,196,76,143,189,66,171,241,219,42,1,253,77,75,27,228,97,206,214,28,28,127,245,
170,185,97,213,149,28,122,224,83,214,61,253,57,35,233,76,68,226,64,23,135,221,248,231,250,81,149,219,184,110,7,211,28,82,109,7,169,95,248,17,165,242,190,94,170,70,58,47,90,162,72,203,103,60,16,59,246,
20,187,131,114,76,108,61,183,83,182,163,0,198,55,141,250,30,65,7,244,52,54,122,133,206,120,200,20,198,136,164,27,191,189,140,127,8,56,21,30,210,189,51,159,165,89,218,229,250,4,30,132,114,105,62,200,172,
185,220,0,235,205,33,144,253,210,4,155,177,212,84,145,49,97,133,137,88,246,50,0,113,253,104,251,58,110,227,110,63,217,24,31,173,60,196,36,92,116,244,32,80,3,212,227,174,1,244,86,226,158,174,163,24,12,
220,240,8,226,155,21,183,202,6,213,92,14,192,138,178,177,22,66,172,20,227,208,114,5,81,12,116,123,134,3,196,191,166,42,78,70,89,85,127,2,49,81,8,196,120,43,184,174,61,105,235,185,186,168,35,245,250,211,
36,126,224,220,152,198,123,96,12,82,238,10,195,40,204,62,157,62,148,158,83,246,92,143,166,106,85,89,120,5,148,122,124,190,212,201,5,103,118,36,168,200,254,241,235,250,84,138,204,190,254,156,240,41,25,
95,130,95,121,244,206,5,59,102,230,203,12,28,99,131,76,7,249,143,140,131,145,245,206,41,139,36,170,62,101,223,207,92,83,149,66,244,255,0,190,105,118,159,77,190,199,154,98,20,243,201,62,227,154,80,199,
166,223,214,155,194,28,20,85,207,113,223,235,79,228,140,134,160,7,40,220,191,47,231,74,48,189,93,125,248,166,170,150,228,159,200,226,159,207,211,234,122,208,33,2,142,112,77,60,3,140,130,212,198,97,223,
229,62,160,210,52,129,113,129,156,156,116,160,68,171,147,159,154,156,202,91,145,243,125,106,6,221,158,51,236,20,98,159,183,161,37,148,251,12,208,59,11,243,46,126,76,255,0,90,80,195,156,199,143,194,147,
119,127,152,126,20,224,217,235,200,245,160,66,171,125,63,26,76,97,143,32,255,0,192,13,39,238,251,134,252,233,54,128,62,70,108,125,122,208,0,202,27,156,143,166,105,25,144,112,89,84,247,25,205,38,115,216,
48,250,140,211,134,238,138,152,62,153,230,128,25,26,44,106,4,96,5,237,197,46,226,24,243,199,126,41,14,127,188,20,211,75,0,223,54,73,245,111,255,0,85,3,30,14,254,3,40,52,31,189,203,228,142,156,241,81,238,
83,144,170,20,103,156,14,42,79,145,176,63,149,0,38,123,96,154,92,158,199,110,61,169,54,133,224,28,210,237,25,228,19,245,52,0,173,33,198,24,169,244,228,210,43,50,140,51,131,233,138,56,31,117,71,62,220,
81,187,111,27,20,126,20,8,25,75,96,150,92,123,156,209,202,252,164,254,70,140,175,60,17,234,87,138,79,187,200,93,195,215,60,208,0,216,111,255,0,93,0,142,196,134,247,25,163,118,122,140,210,16,221,168,1,
198,64,189,114,71,122,79,49,56,3,62,220,19,77,242,202,244,117,13,238,41,200,210,70,188,201,145,223,20,0,14,217,228,253,41,119,5,227,24,62,230,155,184,51,30,121,164,251,189,201,3,215,173,0,41,203,118,199,
227,74,123,103,154,103,152,223,135,210,151,114,244,199,52,1,146,178,14,66,240,125,49,65,99,158,88,127,186,86,134,145,100,251,225,91,140,19,154,25,163,92,13,252,251,158,107,35,82,60,197,200,203,16,58,141,
220,10,12,113,175,42,187,135,185,169,152,134,254,18,252,125,238,41,190,90,168,224,128,122,128,220,131,64,16,34,237,249,183,245,233,184,142,159,149,61,85,178,64,40,71,212,241,82,110,219,147,133,3,184,198,
69,27,71,247,126,133,92,99,20,0,131,122,253,230,85,255,0,116,82,180,156,114,249,29,67,109,164,220,87,130,164,15,66,105,203,38,223,238,159,94,15,52,1,18,204,132,144,31,33,184,56,25,20,133,93,118,237,147,
254,250,21,60,140,95,25,69,39,177,29,253,170,48,64,227,24,30,160,80,2,41,39,25,0,246,249,71,90,80,168,220,1,183,154,123,113,207,5,125,148,10,77,200,237,180,202,196,246,13,64,12,107,85,103,31,59,39,63,
195,78,146,55,135,45,230,59,1,207,76,210,224,109,218,73,63,135,20,222,184,234,24,122,243,64,20,45,111,37,186,154,64,225,163,85,56,228,119,201,231,241,21,113,190,92,121,103,123,103,248,134,41,86,17,201,
249,142,125,133,72,184,237,187,30,244,192,129,164,220,219,66,96,245,5,186,31,110,59,211,97,152,187,31,222,96,175,27,115,197,77,50,25,71,202,72,111,168,20,145,197,183,171,51,158,249,0,154,64,54,25,4,140,
193,36,220,71,7,0,129,79,218,59,173,59,110,206,131,143,97,64,219,223,240,235,77,128,156,240,62,83,143,246,169,26,32,64,220,160,119,7,52,226,137,193,85,192,246,61,105,23,10,121,93,170,71,214,152,136,250,
231,105,31,157,59,129,156,182,71,176,201,165,101,118,3,104,92,122,142,13,11,187,35,40,160,251,147,64,193,130,236,0,108,30,156,96,212,123,67,114,31,235,129,83,47,25,5,80,14,189,115,77,216,138,113,177,98,
7,163,145,145,244,160,6,171,13,221,3,14,156,168,167,46,119,127,171,37,113,211,111,203,244,226,141,165,115,243,3,143,69,197,63,107,176,57,101,3,29,51,64,2,176,85,36,167,150,59,170,156,126,148,223,51,169,
33,156,127,178,121,52,31,155,7,122,163,143,110,180,241,24,234,164,254,84,0,221,201,212,33,96,123,158,63,10,112,218,114,54,147,254,233,233,78,242,216,115,253,41,21,75,12,227,31,67,131,64,9,129,130,6,225,
158,185,166,249,111,183,11,242,145,211,173,18,41,145,74,18,193,177,207,122,85,192,61,126,110,252,30,104,0,143,59,121,104,219,182,221,185,164,80,81,203,46,78,122,142,162,158,160,55,27,56,235,158,69,12,
167,7,27,155,7,158,72,160,6,12,112,54,236,29,6,222,131,242,233,70,208,172,70,57,239,158,148,187,113,193,56,62,189,65,167,13,141,128,79,208,118,160,6,149,84,224,48,83,244,226,149,227,217,232,65,244,36,
211,12,125,188,160,203,237,146,69,52,111,82,20,46,245,245,52,0,121,161,88,228,182,126,184,167,50,29,220,22,126,225,128,207,225,79,109,204,57,85,94,219,240,106,47,37,248,59,151,31,236,230,150,192,63,104,
140,99,59,63,222,165,24,124,12,168,31,67,81,254,241,120,98,88,118,2,147,203,151,131,143,49,51,200,199,34,152,18,4,24,233,143,194,145,151,248,149,221,91,233,77,16,133,25,203,47,125,185,168,46,227,146,226,
214,104,161,186,54,146,178,224,75,180,29,164,241,145,158,51,72,9,216,156,157,219,139,119,57,166,110,221,252,74,167,167,39,154,135,71,134,91,59,20,130,121,204,238,140,193,100,115,189,138,238,59,114,125,
113,138,190,202,142,72,99,191,35,149,10,5,33,149,25,84,176,44,231,216,244,167,174,253,220,54,9,252,42,112,161,71,202,251,79,251,64,31,194,153,148,108,100,103,234,77,3,35,92,176,194,130,79,78,63,174,105,
166,55,95,190,89,127,49,82,182,91,162,99,182,238,166,143,33,246,229,91,143,92,80,50,7,108,97,79,204,189,233,20,110,228,160,35,253,218,153,161,219,252,45,159,122,15,238,176,74,142,123,173,2,35,100,86,28,
40,7,253,174,42,54,137,144,99,203,24,254,240,193,197,89,98,100,199,206,160,123,140,138,70,138,38,200,120,114,122,238,140,224,126,2,128,43,121,67,174,242,7,112,163,20,230,146,223,203,27,255,0,123,142,172,
14,8,252,170,115,7,203,129,17,227,223,38,152,187,184,219,1,29,142,229,231,242,160,100,59,131,33,219,188,47,103,28,213,98,133,155,174,125,200,197,92,219,39,240,32,44,63,132,13,159,165,53,163,153,185,109,
160,125,55,82,26,42,134,104,254,95,149,199,80,21,168,108,245,14,19,28,99,189,89,10,27,142,65,255,0,116,82,73,106,27,63,35,103,29,112,49,249,82,40,170,204,252,128,73,63,221,206,42,29,253,202,133,61,193,
106,179,179,229,193,114,8,237,193,168,124,177,206,229,201,239,184,82,2,22,82,203,203,12,123,31,214,145,149,153,70,31,129,223,53,48,70,143,238,168,42,122,238,52,141,189,78,64,11,232,71,90,86,25,22,222,
231,115,255,0,187,146,104,192,95,224,144,253,65,21,39,204,220,144,193,189,120,57,166,130,234,64,196,153,237,130,71,244,164,49,60,182,60,163,237,61,113,140,255,0,90,73,55,109,56,125,135,31,123,25,35,222,
148,175,57,42,200,91,248,189,254,148,224,174,164,16,219,27,177,6,144,7,152,146,15,222,51,169,29,48,191,253,122,26,36,218,8,3,31,222,115,138,54,203,206,36,99,158,192,228,154,95,44,168,37,166,43,235,184,
3,138,96,11,198,126,235,15,99,73,150,92,226,48,217,244,61,105,124,182,45,243,72,152,63,197,255,0,234,163,203,100,125,166,78,59,113,197,48,24,203,184,103,110,195,223,52,171,52,107,129,130,88,255,0,8,230,
158,20,100,13,202,15,231,154,116,118,207,31,70,12,79,95,152,81,96,5,145,79,64,23,212,49,21,52,108,161,128,56,39,240,52,213,132,51,124,192,231,235,83,71,150,225,66,231,208,227,249,211,37,146,198,199,56,
14,191,247,192,38,164,216,9,27,162,220,125,70,115,249,10,65,191,110,10,48,61,192,57,169,86,61,173,150,76,250,156,117,170,32,106,170,17,140,109,246,52,141,111,180,100,0,19,218,172,40,83,141,177,112,63,
58,2,237,235,25,85,170,17,88,47,202,55,70,66,246,230,156,20,14,86,61,227,211,107,102,167,54,253,126,109,163,209,129,161,6,220,140,224,15,200,82,2,6,137,9,27,162,216,115,223,57,31,173,76,138,139,144,163,
25,238,23,52,229,100,28,110,98,59,237,199,242,52,190,90,175,112,71,108,158,79,229,84,3,89,149,7,44,88,227,190,5,61,20,156,224,6,7,167,56,53,34,43,99,230,88,200,236,112,9,20,237,173,176,252,249,7,166,5,
50,70,24,219,239,103,105,233,208,81,189,176,78,236,17,211,145,78,227,171,114,61,78,56,167,48,94,172,171,211,239,103,154,0,107,122,110,201,247,144,212,171,34,99,133,30,253,197,71,231,121,92,23,227,176,
3,52,229,97,34,229,14,7,185,34,154,38,196,170,195,211,159,90,120,42,1,194,243,239,200,168,182,224,115,201,255,0,100,211,188,229,25,35,3,235,76,67,182,150,227,104,20,129,0,225,193,111,78,104,203,145,213,
65,246,230,144,103,130,199,158,216,232,104,1,194,78,112,14,7,176,197,63,46,14,67,100,123,145,70,227,183,150,199,189,34,169,110,167,34,128,29,184,247,127,215,52,115,233,187,245,166,237,31,222,101,62,212,
188,246,207,227,64,15,249,120,202,0,123,118,52,109,92,227,20,220,14,165,113,238,41,65,94,196,159,173,0,72,172,164,16,92,145,253,220,102,141,177,140,21,94,125,255,0,253,116,198,140,240,73,31,76,211,78,
23,128,66,147,248,208,4,197,130,242,23,7,243,166,52,152,193,202,245,233,138,104,33,190,82,65,63,238,210,237,219,206,245,81,232,195,52,8,119,203,222,60,3,212,168,197,38,7,37,101,200,244,35,159,206,163,
102,69,198,73,62,156,83,67,131,192,200,61,134,121,160,9,203,3,213,255,0,5,20,153,94,153,63,157,71,184,46,9,200,62,228,154,99,203,219,111,229,64,88,156,178,247,164,200,234,63,83,81,41,59,115,207,61,176,
121,163,114,158,12,106,222,198,129,146,49,221,252,123,136,244,230,155,199,168,30,188,83,120,224,20,69,199,28,10,76,142,155,121,246,160,9,183,241,133,32,123,131,197,51,230,237,183,62,185,166,110,70,224,
2,13,38,230,67,156,56,221,233,210,129,18,237,110,187,176,125,40,32,168,225,145,189,65,38,162,222,7,24,199,190,41,60,198,143,174,209,254,208,20,12,148,183,184,197,42,159,115,207,99,218,161,105,190,96,14,
62,110,135,20,230,7,191,243,160,9,118,159,76,126,60,80,192,46,9,118,235,216,84,121,236,191,208,209,194,245,46,222,195,238,208,73,33,96,222,153,166,238,220,196,16,10,227,142,42,63,147,156,99,63,74,126,
118,140,229,113,222,128,36,237,206,113,244,226,148,50,178,228,17,143,166,42,33,181,190,101,252,64,233,70,236,18,66,143,198,128,37,96,58,96,84,123,126,110,56,30,152,165,86,111,238,174,63,58,86,98,162,128,
49,230,143,204,27,93,115,77,207,150,216,251,201,233,154,147,32,114,58,250,98,148,203,187,140,97,143,247,184,172,141,72,252,192,112,115,250,224,138,114,142,63,188,63,186,194,158,172,88,30,114,195,168,199,
90,110,27,168,194,143,247,104,0,249,135,76,254,116,221,164,54,74,182,59,224,84,128,12,227,56,111,167,90,10,157,217,7,31,83,64,132,42,24,114,185,231,175,74,79,37,135,24,36,99,177,20,22,126,165,184,247,
25,161,142,72,249,151,142,192,208,3,87,119,42,223,118,156,14,239,151,25,252,64,165,92,114,15,94,199,56,160,129,143,153,51,244,106,99,25,181,186,43,149,97,249,211,217,156,174,30,76,156,127,16,206,41,76,
105,34,231,7,119,215,21,24,135,13,134,249,79,102,6,139,18,15,187,104,249,212,143,85,6,155,183,114,131,247,189,8,52,230,143,160,102,86,199,115,212,126,52,221,155,15,167,225,72,161,22,50,173,140,110,169,
72,255,0,120,30,227,173,51,33,184,46,79,225,138,114,251,114,61,243,205,52,0,112,203,199,111,94,180,173,24,36,99,112,111,115,197,38,6,126,84,1,177,235,78,218,20,114,255,0,159,20,196,44,127,39,27,135,61,
121,206,41,184,141,91,174,78,120,47,205,60,162,200,1,207,205,223,11,156,211,72,88,198,54,146,51,215,210,128,21,115,252,40,140,127,17,72,170,91,42,162,50,58,227,60,131,74,173,184,146,163,223,142,180,51,
48,244,160,91,136,97,221,214,37,35,253,242,49,77,242,227,233,179,240,110,106,77,202,195,25,57,246,197,30,89,228,2,88,117,7,20,8,136,70,138,126,76,42,142,128,241,138,127,152,55,114,203,232,56,52,191,51,
14,112,184,235,187,255,0,215,78,206,212,35,175,225,145,76,98,100,231,238,43,103,143,74,105,141,145,178,172,203,237,138,50,121,1,128,246,28,82,124,196,0,223,188,31,65,72,7,44,197,120,97,156,255,0,14,41,
219,71,37,88,128,123,1,81,124,157,0,35,210,149,88,109,36,40,63,165,5,2,158,227,44,61,13,46,208,113,157,152,62,164,210,72,196,2,74,156,143,78,105,171,38,222,132,129,232,59,80,3,247,28,14,80,129,218,156,
95,229,4,50,168,246,7,249,211,120,144,113,129,78,77,163,57,65,239,205,0,68,192,231,114,182,245,238,6,77,77,184,240,72,221,143,225,100,205,38,228,28,2,84,143,246,137,20,155,75,55,202,196,143,97,192,253,
104,1,236,197,185,66,131,61,182,129,78,218,206,156,140,227,175,28,211,23,49,146,56,45,215,146,41,12,131,113,56,108,255,0,181,197,0,40,224,227,28,125,113,77,96,28,144,23,189,33,33,152,229,64,7,182,121,
164,102,42,126,246,63,145,160,7,108,39,158,128,246,197,6,30,65,5,179,232,120,163,127,28,28,15,106,107,200,56,37,191,81,64,1,80,189,88,175,213,169,30,60,115,191,117,74,178,110,232,57,250,84,44,199,56,202,
130,56,228,208,2,44,109,38,120,252,69,42,195,206,11,51,30,234,5,27,93,186,170,173,46,215,24,12,57,246,52,0,52,11,201,232,123,84,109,0,147,144,9,250,26,123,35,54,0,44,15,110,40,92,255,0,19,146,58,21,228,
31,231,64,196,142,4,42,85,131,48,254,233,98,63,194,148,196,58,133,110,59,146,127,157,47,239,58,133,39,235,129,66,200,75,16,202,199,31,74,2,192,160,142,157,61,232,93,195,35,13,143,108,102,156,170,55,16,
192,224,142,140,65,164,88,66,244,220,138,61,113,138,6,56,51,176,24,109,162,152,99,109,191,56,25,244,60,138,118,216,153,184,85,15,234,115,75,229,178,54,9,85,111,74,9,25,179,105,24,92,246,224,82,147,216,
237,83,235,140,226,158,208,143,151,204,117,92,244,199,28,211,90,21,143,39,57,30,148,12,143,104,254,247,62,212,155,75,147,243,59,31,247,177,83,109,117,254,46,191,157,68,193,151,230,217,146,56,36,81,97,
145,178,188,139,192,98,122,29,199,156,84,123,10,242,161,177,158,121,233,248,84,237,33,235,134,28,118,20,129,157,177,251,183,11,253,243,210,164,100,44,145,55,202,202,199,62,189,13,53,96,78,138,217,199,
32,143,229,86,89,25,120,223,143,67,212,26,99,194,210,15,156,166,122,110,11,131,64,17,180,77,25,4,48,7,220,102,134,101,110,191,47,109,199,156,80,209,249,25,12,155,143,247,136,230,155,228,142,161,128,255,
0,103,20,12,137,227,194,134,222,24,116,220,122,126,85,11,43,114,21,178,51,238,5,91,54,236,217,24,31,92,209,246,115,22,113,223,177,31,214,144,238,82,104,71,118,94,122,103,181,24,59,79,239,118,15,238,176,
171,88,102,249,76,42,126,162,163,120,84,168,13,10,177,31,223,3,20,134,87,104,143,82,92,231,146,73,200,168,247,42,228,7,192,247,53,99,202,49,245,143,98,142,252,224,83,214,52,101,203,109,30,249,165,96,185,
81,88,244,108,50,247,4,138,114,168,86,253,208,63,48,232,88,98,172,253,156,175,1,144,115,193,4,14,106,54,140,114,36,145,84,247,85,4,31,210,129,220,79,153,65,4,43,1,215,215,173,13,8,153,70,210,158,253,13,
74,33,79,148,237,114,7,27,183,113,74,208,172,108,10,190,213,239,185,73,253,105,136,134,59,53,218,76,144,41,29,55,40,219,250,154,23,16,240,168,88,118,27,186,84,254,84,45,243,153,48,8,233,145,67,73,10,227,
229,229,184,207,6,139,0,213,159,31,120,100,103,142,112,71,235,79,218,75,100,49,35,184,60,83,67,1,242,186,3,206,59,83,213,144,128,187,215,216,181,49,18,71,35,47,0,134,61,136,197,74,172,24,128,231,57,60,
97,106,52,140,46,64,145,112,121,56,35,154,145,66,133,32,184,31,78,105,136,145,97,218,115,202,169,238,9,169,23,120,228,178,129,235,146,13,70,179,118,60,175,251,88,165,243,85,186,1,245,28,83,66,30,222,96,
254,244,139,238,13,35,69,230,113,132,207,161,167,46,233,23,34,101,3,208,100,31,214,164,140,14,114,196,127,192,169,136,138,37,17,241,129,244,32,84,219,66,125,221,190,189,0,164,105,163,92,12,46,123,22,110,
105,173,48,80,1,6,49,156,6,198,65,250,83,36,112,141,163,125,202,164,228,118,35,154,67,11,110,222,62,79,82,122,211,89,151,191,152,65,254,234,133,167,164,110,172,8,0,161,254,46,255,0,149,0,42,227,119,250,
200,193,61,55,12,131,237,78,219,229,252,192,198,7,112,162,133,249,184,42,132,246,28,83,227,102,94,0,193,246,166,4,70,66,49,195,227,217,72,166,150,244,61,255,0,186,121,171,59,76,157,122,210,5,59,136,42,
160,80,4,57,93,216,46,16,145,208,96,226,158,165,177,193,44,59,96,83,177,183,215,216,156,19,79,96,160,29,206,126,135,159,202,152,136,227,89,25,190,80,72,255,0,104,243,82,141,216,33,147,30,212,129,179,247,
78,126,131,20,241,185,51,188,198,137,254,201,230,130,68,242,219,57,249,87,209,115,138,126,215,60,146,88,127,117,78,41,20,175,240,184,245,207,28,208,202,7,12,217,252,112,127,74,0,60,185,21,129,242,92,15,
239,111,24,63,173,59,113,232,191,47,185,197,55,136,178,65,36,30,217,24,166,153,157,186,32,97,234,72,160,9,54,178,253,233,123,255,0,10,211,151,103,212,212,43,38,71,69,207,251,60,210,179,122,18,63,10,0,
147,106,228,156,159,166,211,197,34,148,94,54,231,216,26,136,204,126,232,147,61,249,255,0,10,78,100,206,50,15,94,24,156,208,4,236,192,255,0,9,62,135,181,68,121,201,216,216,247,60,84,123,182,128,50,120,
245,25,52,110,151,118,11,0,189,183,3,154,0,159,114,237,232,9,238,3,102,162,103,100,35,35,0,158,167,24,30,244,204,141,221,129,250,145,74,219,84,224,162,146,122,208,3,252,193,215,121,199,251,32,17,74,62,
111,186,228,159,247,113,255,0,215,168,112,187,136,12,7,60,140,244,165,206,220,253,236,131,198,1,160,9,62,233,195,200,75,123,169,20,227,129,129,191,243,168,131,54,220,135,199,187,10,106,231,111,14,36,231,
170,130,1,160,9,119,44,125,2,231,168,205,39,156,24,2,14,236,245,244,168,203,21,236,64,252,233,204,120,249,128,82,123,250,208,3,247,43,103,39,30,192,115,77,45,229,156,3,159,76,3,72,217,234,54,159,82,64,
230,143,45,200,1,112,163,191,35,20,128,54,157,219,144,123,158,13,36,142,99,70,147,27,128,235,183,173,12,128,175,39,7,177,80,50,63,58,79,222,99,150,207,229,205,48,22,25,17,227,14,56,12,58,227,167,181,74,
126,108,103,39,253,218,170,161,149,137,56,193,254,30,9,253,41,254,96,42,56,39,241,193,21,55,25,56,85,24,56,221,248,210,171,1,144,9,78,248,170,253,114,71,201,239,140,208,192,170,128,210,113,217,190,233,
254,84,92,69,143,56,103,5,183,126,20,155,138,231,107,12,123,144,42,180,62,83,127,19,238,28,29,205,83,137,16,29,160,100,143,97,78,224,47,158,6,0,231,62,148,187,191,217,219,77,105,223,176,24,245,28,83,91,
56,25,206,59,100,209,113,88,127,152,70,0,59,142,41,85,152,103,111,95,122,137,114,164,244,246,167,121,199,156,109,63,133,23,11,20,118,249,140,118,2,15,117,106,126,50,160,103,7,243,20,19,187,130,192,250,
115,147,64,221,206,6,239,207,34,179,52,2,172,220,231,39,216,12,208,36,102,239,249,142,180,196,44,24,134,82,15,251,67,138,123,70,23,183,62,252,102,129,10,170,15,10,50,123,115,138,54,187,103,228,43,245,
166,24,247,127,0,252,69,53,97,3,238,150,83,248,80,34,100,82,188,31,200,138,54,186,13,167,238,118,35,156,84,34,57,48,84,228,254,56,167,12,178,240,202,78,57,86,20,198,12,198,60,171,186,131,235,142,180,184,
15,147,28,159,64,203,78,86,114,48,142,2,227,248,77,39,207,183,157,172,63,217,60,255,0,42,99,27,181,187,150,52,190,82,200,56,42,14,115,197,35,110,95,224,199,166,227,64,207,81,180,143,99,154,68,142,218,
163,140,243,220,122,138,70,112,163,1,119,143,173,25,57,195,100,99,243,164,96,83,144,72,199,191,90,99,13,197,189,191,30,148,109,101,229,78,225,248,83,44,238,34,190,183,89,144,183,150,227,33,136,32,254,
70,158,35,85,235,180,175,170,208,3,206,89,123,98,153,189,151,61,127,10,113,142,53,207,207,145,215,174,41,60,148,199,14,125,187,230,128,1,34,178,228,100,145,239,78,243,11,47,98,58,117,28,83,85,1,111,186,
115,65,141,84,144,85,113,223,35,131,248,80,2,45,193,221,200,222,189,55,32,230,158,223,50,130,137,147,219,39,21,27,113,159,44,38,223,65,145,252,233,83,113,97,128,65,234,120,160,7,169,86,80,12,106,167,182,
77,51,59,122,0,190,217,192,167,201,181,206,88,124,222,164,156,126,34,133,85,231,27,71,211,52,192,96,1,179,191,105,30,205,154,102,229,92,128,14,61,184,169,54,157,231,17,142,15,240,230,158,204,87,239,252,
195,215,165,0,64,204,120,96,159,55,171,26,85,249,190,247,203,232,123,84,203,50,133,57,0,39,175,106,141,163,86,98,65,220,127,216,28,31,173,1,97,187,54,227,37,27,184,42,77,49,163,86,235,51,71,207,7,25,63,
74,158,48,189,10,96,142,195,173,56,170,156,238,12,65,245,20,0,216,196,128,112,238,254,237,138,77,217,251,204,172,61,134,41,222,88,29,27,39,214,154,234,91,27,190,95,202,129,141,101,69,108,237,218,79,92,
243,65,85,184,206,78,123,117,32,230,157,183,203,224,29,232,223,194,105,219,149,185,40,167,35,175,90,0,136,70,170,219,163,82,113,201,206,127,149,61,243,216,132,99,199,35,109,61,24,73,142,253,177,208,254,
180,173,26,116,203,47,63,119,34,157,132,64,187,182,140,131,199,184,63,173,40,112,184,10,161,155,251,173,78,91,126,172,3,39,212,228,26,7,202,188,5,60,245,239,82,48,87,45,247,145,70,15,56,53,33,83,39,10,
222,196,48,166,59,55,25,10,73,224,142,244,223,151,28,199,147,232,69,0,13,25,221,180,161,246,230,155,26,149,57,27,118,244,61,1,169,81,137,228,100,47,251,221,13,12,65,96,252,55,242,160,6,124,167,24,185,
118,94,219,186,212,155,91,161,43,245,245,165,39,204,232,152,250,99,20,213,141,143,70,4,103,131,186,128,35,232,62,95,155,219,111,20,165,73,198,245,199,190,234,145,75,174,119,117,244,29,41,12,172,223,117,
118,145,235,64,17,136,208,174,60,195,156,117,4,243,70,201,115,189,25,152,142,185,3,245,167,23,12,216,104,208,30,189,41,26,21,12,24,19,146,49,141,199,249,80,59,134,194,120,222,195,61,152,230,144,70,121,
194,255,0,227,212,246,66,57,27,115,254,208,35,245,161,140,173,252,81,145,222,129,128,207,25,40,222,180,253,169,34,252,219,189,135,76,83,112,172,57,93,166,145,84,113,251,192,160,113,156,145,250,208,73,
38,1,225,112,227,221,115,138,119,36,97,84,100,119,166,182,241,200,59,128,244,97,138,65,247,129,9,207,168,166,2,249,111,183,47,31,29,192,193,253,40,49,179,100,9,35,193,254,240,32,211,151,60,242,71,60,110,
164,49,255,0,211,65,158,184,11,205,0,55,203,112,119,7,141,151,190,14,41,195,3,32,38,125,24,243,154,99,70,89,185,94,127,189,187,250,82,237,101,81,194,159,195,6,144,11,181,138,253,253,163,210,162,104,70,
236,183,3,251,217,31,228,212,165,191,188,140,195,216,255,0,245,233,158,99,99,0,54,59,110,52,12,78,23,3,175,28,118,6,154,87,184,92,14,249,57,207,181,35,62,222,54,22,63,79,235,67,97,88,59,71,179,60,110,
221,215,235,65,65,229,144,126,80,168,58,227,129,77,242,202,244,113,159,76,113,78,28,46,212,92,247,222,27,57,246,160,46,225,128,10,12,119,35,63,206,128,43,94,125,163,203,2,220,69,230,121,137,159,55,56,
217,184,111,198,59,237,221,142,217,198,105,94,21,200,32,201,159,65,140,84,204,190,228,255,0,192,73,164,93,197,120,249,73,28,100,26,0,141,161,43,247,163,108,122,230,154,214,238,173,188,70,129,125,248,252,
69,77,186,82,167,229,102,245,11,77,18,50,182,214,206,127,135,158,180,128,136,239,110,84,40,110,153,40,15,244,166,149,102,229,91,4,112,65,224,126,85,41,222,216,206,225,199,113,211,241,160,66,236,217,120,
240,123,56,96,71,78,226,144,202,234,225,142,8,201,255,0,119,249,211,218,220,50,241,177,125,50,106,86,136,175,70,80,61,57,34,163,242,66,244,84,109,195,219,6,129,144,60,94,89,202,177,9,158,112,217,193,252,
105,233,191,110,214,27,135,98,70,51,82,58,201,187,6,53,133,191,207,165,55,203,101,232,192,100,231,161,20,0,192,155,88,236,85,10,195,61,115,138,143,204,17,168,143,110,210,188,1,156,10,36,87,82,73,218,223,
94,166,164,243,192,81,129,199,251,35,52,134,67,230,73,230,42,133,227,177,20,173,150,7,49,168,61,246,224,231,222,156,211,18,223,125,148,122,17,138,98,96,156,135,67,158,221,233,12,112,93,221,84,12,246,11,
138,150,48,7,221,117,235,247,88,144,105,21,151,24,108,186,250,5,233,74,36,141,78,2,21,63,150,105,136,149,89,215,146,21,190,166,156,179,63,241,42,245,233,197,70,145,150,203,0,20,30,185,233,82,44,111,183,
27,68,131,253,147,180,211,17,42,200,252,133,217,159,238,228,10,145,164,97,203,49,201,237,216,253,42,14,85,70,121,95,82,126,106,153,68,125,68,108,199,174,88,253,223,165,50,65,100,102,254,17,179,215,109,
56,76,200,190,159,82,5,33,98,74,144,251,91,208,12,211,124,199,82,192,149,0,31,225,92,26,96,74,172,58,224,231,177,198,72,252,77,53,137,60,183,62,191,53,34,49,147,35,113,62,171,187,20,229,198,6,20,176,246,
98,77,49,6,252,116,84,81,254,195,84,163,115,127,172,32,15,65,76,12,171,243,44,123,79,64,24,210,238,110,233,248,245,252,40,17,39,250,190,113,242,246,193,164,51,39,247,89,187,28,12,208,161,217,78,91,30,
184,3,138,85,102,193,218,194,69,254,234,142,106,132,52,60,111,212,186,31,174,13,44,49,196,56,73,153,219,175,63,227,79,104,203,2,202,48,126,188,208,203,34,140,149,201,255,0,174,156,126,84,1,32,133,71,82,
160,158,224,156,26,60,144,57,117,83,250,212,59,138,225,138,99,241,169,87,7,230,25,3,184,60,208,43,11,181,122,128,128,255,0,180,113,138,55,1,252,120,62,128,209,188,110,192,92,126,116,140,21,129,7,143,78,
58,80,32,207,61,1,30,248,193,165,4,237,192,80,87,253,140,83,54,150,206,23,243,206,41,58,96,6,11,237,205,0,57,215,251,197,133,27,87,161,108,47,78,14,13,46,224,195,4,228,251,10,54,244,255,0,10,4,49,154,
53,254,38,39,208,176,207,233,78,91,132,97,242,156,98,134,242,249,30,80,63,133,71,145,187,132,93,190,185,197,0,72,197,207,33,112,63,189,71,45,144,223,227,76,69,77,223,46,242,127,222,39,31,153,165,37,84,
253,242,167,60,113,64,196,220,23,175,3,175,204,49,66,180,123,112,171,145,236,5,56,183,102,114,223,135,20,221,192,114,78,7,181,2,28,204,201,223,3,208,10,67,136,223,112,148,96,246,239,76,93,184,194,170,
144,123,6,63,210,156,184,110,168,222,220,131,64,14,86,206,78,127,10,105,10,27,32,231,119,215,31,90,142,69,219,201,86,35,233,77,221,30,221,174,141,199,101,233,72,99,252,201,22,77,170,155,151,212,127,90,
120,229,73,41,142,244,221,209,158,23,0,131,198,6,49,76,109,219,131,0,249,245,83,197,0,60,77,252,45,30,62,135,34,149,85,70,114,55,119,7,57,197,38,242,64,203,99,223,138,107,121,138,8,196,121,247,60,210,
11,14,220,199,133,100,81,223,42,127,198,133,98,220,30,8,255,0,100,15,235,76,220,237,141,240,196,227,183,63,253,106,133,174,2,112,97,42,7,24,15,192,230,129,22,249,227,230,70,252,13,52,144,91,35,110,238,
205,154,136,108,101,202,146,167,253,226,127,26,93,197,152,113,188,244,36,240,40,1,85,247,51,103,103,203,193,3,57,252,169,209,204,145,240,58,122,156,211,90,66,48,55,96,244,27,77,51,206,221,252,76,88,117,
194,82,2,195,204,174,185,37,148,246,44,184,20,214,87,101,225,142,127,188,49,81,249,142,27,229,37,190,128,154,114,207,42,182,25,1,4,112,64,160,5,81,43,46,27,119,251,202,64,167,134,43,195,43,46,70,58,154,
107,0,202,63,117,188,251,183,52,155,89,122,68,171,255,0,2,38,128,30,85,152,14,36,30,226,155,185,215,32,3,199,124,83,67,200,191,51,109,35,211,154,118,228,110,112,170,123,109,56,160,10,231,24,206,56,250,
243,71,28,30,3,118,106,77,202,173,146,113,245,165,219,185,126,78,57,239,210,164,161,88,160,25,192,31,74,92,158,227,232,113,76,242,207,33,200,199,160,20,229,111,45,64,12,88,118,231,20,0,170,173,215,59,
185,245,165,104,183,115,150,35,182,59,83,124,207,155,229,111,173,61,92,231,143,210,152,129,100,249,70,75,31,173,13,142,55,51,48,207,30,162,163,99,216,174,15,99,74,16,31,188,172,63,145,160,160,192,92,145,
187,2,149,46,3,116,18,82,12,227,229,45,242,251,3,74,160,200,221,25,65,228,122,102,129,13,105,3,49,0,238,62,156,211,84,196,205,247,0,127,199,53,43,22,28,50,100,3,212,243,72,100,243,14,3,41,255,0,102,152,
132,37,89,187,154,69,145,75,21,228,250,22,20,187,60,198,227,143,81,138,86,110,48,83,63,157,0,43,49,143,168,98,49,252,34,143,245,159,117,130,158,160,149,207,231,72,179,21,194,231,62,156,81,43,133,93,199,
10,191,143,122,0,23,96,39,43,207,247,64,197,47,29,66,49,199,76,81,242,179,2,89,75,125,57,252,233,75,109,35,147,142,199,158,41,128,54,27,110,55,15,229,78,82,121,31,124,251,117,163,99,21,202,29,217,239,
158,41,60,185,63,217,250,169,161,0,140,170,27,118,209,145,201,237,154,105,84,110,84,227,245,21,39,85,249,202,176,233,211,52,213,200,39,228,220,123,142,148,128,102,50,62,118,195,47,108,211,176,127,135,
145,245,197,46,225,149,0,4,110,155,78,57,164,251,223,122,35,159,115,210,152,198,224,247,35,35,208,210,249,123,177,181,72,62,231,53,39,146,36,199,64,105,141,9,143,13,230,42,253,122,125,40,176,34,56,225,
242,212,34,174,221,163,10,2,140,126,84,187,15,114,62,128,226,166,24,96,64,32,227,190,58,83,75,46,224,172,68,103,28,5,57,205,49,140,220,203,215,131,236,105,251,158,65,130,161,129,236,104,8,203,253,210,
189,142,115,75,158,153,95,151,61,86,128,25,26,160,254,0,163,211,60,83,217,71,45,242,227,183,61,104,224,182,118,144,221,241,212,210,25,21,112,112,88,118,62,158,212,0,134,53,102,4,168,193,231,112,39,52,
24,246,224,175,200,122,228,10,116,119,2,76,132,140,183,168,200,205,41,144,174,64,220,15,166,104,1,171,243,28,179,101,191,218,94,104,101,10,78,91,244,165,229,113,144,84,227,169,230,157,187,229,198,21,253,
105,129,26,145,27,29,167,143,76,83,254,101,109,223,41,83,199,74,80,170,202,9,36,48,233,140,243,245,166,172,128,18,50,160,127,181,72,4,249,157,70,7,57,239,74,168,114,65,36,123,99,20,121,140,216,219,176,
103,209,177,73,153,58,57,143,29,177,201,197,22,1,222,89,102,29,115,234,180,139,11,242,173,194,255,0,181,78,144,180,124,129,242,250,247,21,31,157,212,112,217,235,206,104,176,14,101,81,145,142,127,217,164,
249,73,225,92,122,224,255,0,245,168,220,99,231,120,29,176,163,2,157,191,118,7,203,159,243,222,128,26,50,132,111,82,35,198,3,110,57,252,120,163,203,133,186,49,35,211,60,82,134,219,208,254,24,38,162,86,
126,78,205,199,190,213,197,22,2,125,202,171,201,24,239,222,153,180,244,39,43,211,35,129,74,165,153,115,213,115,223,131,82,109,117,25,13,129,254,214,40,2,63,46,45,165,74,241,211,175,245,168,246,41,0,142,
49,239,82,170,182,126,97,159,122,107,68,171,158,29,199,251,36,82,1,187,86,60,225,148,31,92,83,198,214,224,140,159,166,63,152,161,81,66,224,103,31,76,254,20,158,90,255,0,10,201,215,165,32,23,228,95,151,
1,143,65,199,255,0,90,156,87,177,94,71,59,80,227,20,191,56,227,118,7,184,6,140,244,229,65,245,198,13,52,2,50,176,32,142,158,231,154,86,216,191,199,180,143,122,99,69,47,61,28,123,156,98,148,9,0,42,202,
27,211,222,152,3,148,81,243,171,17,235,142,63,58,110,200,198,0,86,95,70,223,156,212,145,183,151,145,181,192,235,150,57,20,54,48,73,7,7,191,28,82,2,61,222,90,231,42,192,118,39,154,62,89,184,222,232,115,
208,15,241,167,237,70,59,186,145,193,231,173,12,133,248,59,135,208,208,3,26,19,143,190,248,31,197,128,41,55,164,124,152,218,65,220,151,52,166,13,167,36,176,207,24,57,167,170,203,31,86,25,244,35,32,208,
81,16,155,177,143,104,244,234,41,141,113,229,227,239,96,244,244,21,62,224,120,216,185,246,83,199,214,155,229,50,41,33,35,193,235,130,127,173,0,87,55,82,252,152,77,255,0,54,11,238,35,3,31,175,56,252,232,
105,191,188,9,245,29,234,86,84,86,193,140,5,60,29,184,164,242,242,191,46,72,233,187,104,39,241,164,50,2,178,109,202,62,71,247,112,69,59,247,184,227,145,223,105,253,106,117,132,142,159,41,237,133,198,106,
54,132,103,253,104,86,7,184,230,128,43,183,153,208,202,189,51,243,14,105,141,206,50,142,227,190,24,173,92,54,230,78,72,39,111,163,109,199,210,154,214,173,221,246,159,225,228,231,241,162,195,185,88,112,
163,97,101,231,144,199,39,31,157,77,185,87,157,219,65,232,113,72,235,229,125,233,23,36,247,24,166,249,114,14,128,96,245,201,24,164,49,175,46,214,35,230,147,159,225,25,205,40,84,97,242,185,67,156,224,159,
210,165,86,59,66,177,96,58,114,7,244,164,88,85,73,224,17,215,12,58,83,0,242,203,127,18,237,250,212,45,111,183,238,187,28,244,230,172,121,105,156,133,85,63,236,176,254,180,253,177,73,193,81,159,80,0,254,
84,172,6,123,91,150,96,26,38,115,159,226,61,41,86,196,231,136,198,123,175,181,95,59,199,200,10,132,207,190,127,173,70,216,228,121,153,30,172,185,52,88,46,87,251,58,199,195,68,27,208,150,60,84,171,4,127,
117,148,238,206,70,220,138,119,150,23,39,119,62,155,9,207,235,82,173,195,31,147,200,4,14,133,134,40,176,13,91,120,213,190,82,249,247,57,169,86,220,55,94,113,233,193,164,89,183,18,161,87,62,157,127,173,
60,249,155,71,221,192,233,242,211,36,26,20,94,67,18,221,62,119,200,252,169,162,29,228,2,224,143,69,226,165,12,6,226,99,60,122,83,246,142,24,162,143,70,226,128,24,177,133,82,57,63,94,180,167,229,32,1,254,
20,253,135,104,33,64,207,191,52,213,82,7,222,199,189,80,0,92,158,127,244,42,95,36,117,249,186,115,140,31,235,73,229,171,99,10,164,247,60,208,161,35,35,247,124,208,75,26,161,101,193,40,167,29,24,242,71,
214,151,203,70,227,202,94,185,200,198,62,181,40,204,157,17,134,63,132,143,235,73,183,158,115,142,195,20,88,68,108,155,113,243,40,61,183,30,41,203,185,176,67,70,79,78,49,199,210,164,92,237,60,109,246,110,
42,41,45,154,76,22,88,216,247,249,200,254,148,192,77,196,57,12,91,56,206,225,140,31,97,205,10,223,236,231,234,48,105,234,135,177,200,237,207,2,147,110,79,255,0,88,138,0,65,188,243,184,0,123,96,230,163,
102,49,54,11,146,125,113,154,145,163,115,211,231,62,138,58,84,108,166,63,190,81,1,234,190,180,0,229,101,60,150,38,159,157,167,129,159,110,69,67,181,21,178,10,70,190,196,3,75,186,54,234,248,247,200,164,
4,166,68,85,201,202,143,246,73,206,105,89,152,0,85,178,63,218,53,26,72,57,216,62,124,227,239,117,164,251,64,57,12,152,245,193,166,4,134,66,167,12,187,189,6,13,39,92,254,239,111,183,60,210,102,6,232,224,
31,69,25,52,153,218,0,77,248,236,27,128,127,58,5,97,249,220,121,200,237,130,5,41,59,78,55,22,62,128,10,132,249,172,184,49,113,236,1,31,161,166,150,145,121,48,144,63,189,180,15,255,0,93,0,78,204,231,239,
240,190,248,199,243,166,172,129,14,209,247,125,121,168,11,28,148,44,185,60,131,183,143,240,165,218,229,114,95,56,236,49,207,189,3,44,133,80,196,133,85,111,81,214,147,97,228,128,20,254,21,87,237,46,49,
243,28,125,63,250,212,245,145,36,249,89,153,155,251,170,134,145,54,37,251,205,130,35,39,240,254,149,23,152,138,126,98,209,158,132,115,250,19,74,35,11,134,25,65,216,21,57,254,127,210,151,207,27,182,140,
18,63,139,211,252,40,40,84,154,28,114,207,143,86,7,252,154,143,120,141,179,20,202,203,237,235,248,83,152,29,219,142,72,63,196,164,99,245,168,228,113,211,203,221,254,200,34,144,18,110,126,9,28,142,202,
112,77,6,102,86,195,6,199,231,252,170,171,76,33,117,4,50,100,127,17,197,79,143,148,60,114,144,125,41,0,174,80,40,33,88,231,142,255,0,214,152,24,143,226,111,166,49,70,247,44,119,150,63,76,19,73,229,183,
164,235,220,111,80,20,208,3,203,46,115,188,185,254,232,39,52,166,89,49,133,124,31,246,215,249,210,109,101,254,22,96,57,32,127,245,169,209,202,173,242,236,80,51,245,254,148,18,202,251,218,54,7,116,101,
189,70,65,255,0,245,84,202,204,202,123,250,173,75,230,99,42,189,58,253,222,41,172,178,73,140,50,130,61,243,252,168,16,187,93,148,16,113,237,154,107,101,126,241,86,29,131,118,168,27,203,102,203,3,158,251,
65,201,167,198,209,15,145,75,143,247,136,63,173,3,28,211,160,24,216,63,14,148,25,137,3,96,10,63,157,53,148,6,206,9,35,251,170,127,90,35,144,245,49,145,207,78,244,0,187,165,229,190,85,95,94,181,50,202,
219,112,66,251,110,205,70,21,21,179,131,134,254,28,116,53,25,82,14,89,215,254,4,9,160,11,27,164,224,236,31,240,19,74,191,48,249,163,112,123,100,84,77,48,141,115,32,27,72,231,158,41,169,60,111,199,17,251,
19,212,126,116,0,187,219,185,192,62,131,20,138,192,103,156,126,20,245,44,195,0,103,217,184,166,183,154,164,140,31,99,144,106,70,50,89,54,140,169,207,112,105,202,165,212,49,69,39,184,34,141,210,46,114,
66,227,208,112,105,62,85,229,64,35,251,192,30,40,1,234,171,212,69,199,247,129,165,85,110,160,227,241,166,228,175,66,51,244,164,102,28,182,224,61,122,138,2,196,146,41,100,5,159,4,122,12,230,145,91,143,
149,179,248,80,173,185,70,8,39,211,60,82,142,184,194,227,208,28,17,84,48,86,0,238,56,67,235,210,148,49,147,42,167,240,233,73,202,231,41,187,241,205,35,97,206,126,232,244,237,64,135,121,50,117,56,7,191,
165,41,71,11,128,241,178,245,249,155,4,126,66,153,143,226,33,143,251,188,211,242,27,238,146,158,191,40,193,160,66,126,243,112,61,71,225,75,180,242,127,30,185,165,27,120,12,220,210,52,39,112,42,216,7,168,
38,128,28,118,237,193,25,31,90,106,172,120,33,71,62,199,154,69,93,156,179,129,245,164,243,21,115,134,45,236,13,1,96,104,65,238,91,219,56,199,229,64,85,28,16,196,245,249,143,52,155,71,4,54,56,228,17,67,
50,54,51,32,92,122,14,180,12,77,133,88,132,59,129,234,172,105,234,25,127,229,154,175,208,210,121,131,111,4,26,110,220,55,12,70,125,41,136,151,104,83,146,160,103,174,209,193,164,101,200,224,2,189,125,104,
94,15,35,35,215,118,41,140,201,24,249,128,28,245,205,48,13,209,200,165,112,167,212,14,180,254,89,126,83,199,171,115,72,178,9,23,43,187,252,251,208,35,242,216,149,243,25,79,174,78,40,11,141,146,61,224,
101,202,159,231,72,172,121,80,21,189,115,79,50,13,164,149,219,245,224,210,22,139,113,42,210,47,114,58,138,6,27,89,152,29,170,15,181,59,110,225,134,143,61,199,61,13,49,102,140,41,92,228,123,82,121,170,
167,3,204,113,232,84,154,96,193,85,84,227,202,218,223,141,57,124,196,110,118,129,232,58,210,198,194,69,24,102,95,78,42,70,101,219,200,200,245,160,16,213,83,213,129,94,254,244,25,62,96,20,52,153,255,0,
102,154,178,14,74,171,31,167,52,215,148,200,48,51,207,114,112,69,0,63,110,230,199,32,255,0,182,163,52,152,31,196,170,216,238,115,197,58,54,127,44,101,132,132,127,17,28,254,52,246,144,17,147,180,246,160,
99,86,53,100,193,25,246,201,20,223,221,174,8,249,115,239,197,27,131,55,4,129,239,67,108,11,128,6,91,235,138,0,95,148,224,227,35,216,243,78,10,91,145,180,158,249,168,192,49,175,96,113,206,7,20,43,17,130,
78,208,127,42,0,126,124,191,189,129,143,69,205,13,251,207,161,160,187,117,86,220,61,42,38,50,142,128,140,247,207,20,1,32,194,255,0,10,159,168,230,147,118,236,237,101,31,94,212,223,222,99,145,199,122,48,
206,55,12,56,246,56,164,2,229,115,130,19,221,91,165,7,24,249,98,82,189,207,90,67,134,94,85,129,29,240,105,21,99,126,15,205,237,144,15,242,160,4,194,99,251,153,232,121,24,165,8,226,60,185,114,223,239,28,
83,85,68,68,152,255,0,21,106,124,123,200,249,184,57,192,161,0,43,15,44,144,100,39,190,70,105,225,67,115,146,127,35,66,239,13,193,7,211,156,210,97,216,96,196,61,240,64,253,41,128,246,14,63,229,153,199,
169,90,26,93,184,4,113,208,83,86,55,35,1,151,30,252,17,71,148,189,11,146,223,237,115,249,82,1,164,142,79,204,7,177,230,144,72,88,130,152,11,238,244,165,89,100,1,23,123,99,208,96,209,228,42,231,49,158,
123,115,129,64,17,178,157,223,49,95,170,140,212,132,31,186,126,95,66,120,254,180,109,27,66,238,10,63,217,255,0,26,80,131,27,119,228,255,0,180,51,72,3,230,111,224,37,199,66,49,131,77,96,91,168,40,127,74,
147,201,206,214,228,123,231,165,61,124,200,207,37,112,122,109,92,83,64,49,87,57,201,36,250,103,21,42,162,14,118,128,59,173,51,33,177,184,54,61,115,145,78,16,167,111,195,154,96,39,202,188,5,194,253,56,
163,106,158,170,15,208,210,50,176,192,220,184,255,0,116,138,6,120,221,243,47,76,226,144,14,81,229,140,35,5,31,221,38,134,86,199,221,46,127,217,34,154,35,219,198,237,199,169,249,72,20,15,149,190,103,140,
47,167,67,64,7,152,251,115,179,62,170,58,209,180,22,24,86,70,199,241,18,71,210,164,10,138,114,33,255,0,129,43,147,250,82,238,44,184,195,251,12,208,4,101,35,97,243,163,103,214,163,102,10,62,84,87,231,25,
12,127,149,78,189,79,240,159,206,146,70,242,254,111,152,125,58,80,4,6,22,117,195,32,199,251,7,159,214,155,229,142,119,70,199,211,123,2,63,62,213,35,49,101,37,80,177,198,70,8,25,52,52,106,114,85,29,143,
93,174,113,253,40,176,200,154,69,92,110,218,27,160,0,130,15,177,166,112,202,70,207,151,219,181,78,71,151,255,0,44,246,158,159,55,38,131,25,101,59,136,35,184,36,138,10,33,140,103,57,32,255,0,188,1,2,155,
36,111,18,231,111,203,237,205,72,202,177,183,1,66,246,197,61,101,36,224,2,167,166,105,104,4,43,178,78,89,157,243,252,59,71,248,210,172,50,47,10,136,203,212,124,249,56,169,188,188,177,39,115,55,247,151,
168,166,249,68,182,65,93,185,201,94,148,88,8,118,29,191,49,76,247,249,65,52,110,7,140,6,252,42,127,47,107,12,199,128,122,16,51,78,100,110,122,42,245,43,220,81,96,43,172,27,190,100,148,227,251,187,113,
78,104,165,251,184,86,237,185,136,167,180,114,116,217,189,127,189,230,12,126,84,152,254,16,204,61,49,72,4,88,10,224,190,204,250,54,77,56,168,101,200,94,125,142,7,235,72,35,249,114,71,230,216,38,158,45,
212,48,42,24,251,51,100,26,118,24,155,34,147,131,30,236,246,197,30,82,166,15,146,222,156,39,63,254,170,151,110,208,114,184,35,251,185,169,35,18,118,94,61,105,146,68,8,13,147,19,131,142,3,40,31,214,156,
18,48,75,5,100,99,219,63,225,82,2,205,145,34,42,251,49,25,52,253,225,71,44,65,246,20,197,114,21,128,6,200,70,207,126,78,105,251,74,228,7,227,233,205,63,204,44,56,233,238,72,254,148,161,139,14,9,62,251,
120,160,8,254,206,205,200,144,123,229,114,105,89,10,244,85,115,253,236,226,148,237,227,116,152,245,221,74,28,12,13,202,254,128,140,80,34,61,204,205,208,40,245,94,180,121,135,163,100,145,239,82,182,227,
210,63,151,215,20,141,158,67,113,248,230,128,35,12,143,206,210,167,253,163,154,99,124,141,198,121,237,218,156,96,231,118,67,126,52,121,97,134,7,30,132,138,0,141,177,187,119,35,241,167,125,36,4,118,0,255,
0,90,118,206,48,204,14,105,166,221,54,244,250,208,3,182,179,127,22,126,191,254,186,105,71,94,224,123,0,41,62,85,227,112,7,253,163,154,64,209,50,227,56,61,177,64,13,103,85,98,9,82,127,187,154,99,5,32,29,
188,123,118,250,211,217,126,92,52,153,31,65,154,136,5,86,35,57,57,206,65,25,254,116,12,64,189,74,128,205,245,197,74,211,62,220,186,39,191,204,69,66,216,80,10,150,144,118,86,80,49,76,49,188,157,25,135,
175,34,164,118,36,243,81,70,208,128,122,97,141,53,118,28,141,131,241,39,250,154,98,168,31,121,183,15,95,74,82,235,208,74,207,254,201,254,148,92,44,61,151,35,228,85,56,31,116,99,34,145,75,33,207,204,190,
217,168,190,243,96,57,30,129,135,90,112,25,7,229,84,110,251,78,104,184,172,75,243,133,32,74,197,127,218,53,30,226,188,153,114,71,96,42,54,40,27,153,9,199,98,69,59,34,53,206,212,199,108,14,104,11,9,230,
14,119,40,111,247,186,208,211,70,202,50,219,91,234,5,55,237,6,70,219,181,149,191,189,142,191,149,41,102,94,15,36,245,223,142,63,26,67,21,174,153,20,96,130,122,117,167,155,137,36,11,152,243,143,70,31,145,
168,227,147,0,168,10,227,253,140,127,133,49,148,5,203,70,192,118,32,255,0,76,80,34,192,155,129,147,159,65,128,69,39,219,62,82,165,112,189,48,120,197,64,54,110,192,27,91,209,216,226,156,197,163,1,130,160,
245,218,65,160,9,26,240,249,120,204,120,246,57,6,150,55,105,48,195,17,28,114,163,161,168,126,208,234,164,198,209,145,220,70,118,159,229,77,89,12,135,113,86,7,190,225,215,244,160,44,89,88,191,137,102,82,
7,94,57,165,220,85,72,42,92,117,201,92,126,85,2,56,102,32,187,128,71,97,75,36,142,191,117,191,29,172,13,0,79,190,32,163,108,110,56,231,156,154,79,48,42,224,6,43,239,253,106,183,159,230,70,14,91,39,163,
1,75,28,142,204,84,239,227,163,42,2,77,2,44,52,177,255,0,16,228,125,5,13,178,65,194,149,207,241,47,3,241,170,227,114,244,103,32,255,0,125,72,199,181,61,100,83,158,155,177,200,207,90,5,98,109,204,56,109,
184,199,29,113,81,183,108,72,195,182,220,127,82,57,164,19,50,240,10,159,195,154,133,175,27,112,5,148,103,240,52,5,137,139,57,199,206,74,250,40,197,59,33,137,32,150,199,93,194,154,210,74,160,168,150,47,
251,227,145,75,184,54,14,87,56,231,11,64,15,223,142,67,176,57,198,20,127,58,145,100,45,196,140,195,253,146,49,154,174,204,251,183,2,170,59,246,165,89,55,40,43,131,254,214,120,160,7,50,130,112,155,153,
79,5,88,100,31,206,158,165,87,11,183,33,123,28,113,249,82,125,167,142,64,111,161,164,75,177,38,54,199,206,59,158,40,16,222,56,59,153,187,114,105,202,232,78,6,3,122,80,85,153,179,182,48,61,65,230,130,165,
184,84,201,31,221,0,212,148,42,238,94,58,122,30,212,221,220,149,207,61,14,70,5,10,239,208,156,126,60,254,84,253,238,126,235,18,104,36,132,174,127,136,159,97,197,46,89,49,247,148,122,224,31,229,78,109,
221,112,199,234,51,73,179,115,109,32,134,28,226,129,220,79,57,177,193,200,239,129,74,29,93,176,223,123,235,131,82,42,142,155,177,248,82,50,158,118,174,71,210,152,92,77,163,184,31,247,216,165,242,199,5,
85,177,223,14,15,242,164,17,122,97,7,165,38,215,141,137,71,7,217,69,48,39,11,187,168,198,123,103,173,39,43,192,70,21,16,114,199,112,109,222,185,237,73,185,24,252,199,62,192,208,34,70,148,110,218,196,22,
237,140,209,176,18,56,4,30,217,255,0,235,211,85,84,227,10,115,217,152,254,148,239,45,155,190,23,175,76,10,6,39,150,112,113,30,61,179,154,95,44,149,230,54,252,197,10,141,131,187,175,215,57,167,41,7,163,
15,113,76,8,246,174,51,133,35,222,156,20,103,229,42,190,212,237,139,252,92,26,66,137,212,34,227,242,167,96,35,218,0,7,122,1,254,200,193,164,222,192,242,25,151,161,43,218,165,104,85,193,33,84,30,221,57,
168,225,144,202,128,169,40,15,77,203,138,44,33,251,80,240,51,199,108,243,73,251,153,6,9,63,93,212,138,193,91,60,145,82,21,71,86,42,113,248,208,34,33,4,106,191,47,94,153,201,25,167,100,199,215,235,222,
145,148,47,220,251,221,253,233,200,93,128,59,81,215,179,103,167,214,152,197,219,230,41,1,178,123,110,108,83,12,43,31,4,134,95,108,18,63,90,126,214,206,88,13,190,128,208,222,90,242,191,43,14,234,221,189,
232,16,225,10,119,126,63,218,28,82,178,168,199,59,7,176,206,106,22,207,45,134,35,29,72,205,44,108,59,115,65,67,153,162,206,55,28,255,0,186,105,67,110,249,136,7,182,238,65,165,103,207,5,137,244,249,69,
70,197,247,125,230,32,245,227,145,64,135,121,229,88,243,199,161,226,164,243,3,177,7,104,56,224,228,84,37,183,112,237,185,189,6,6,126,180,20,81,140,196,160,118,37,179,252,168,40,115,196,187,198,75,131,
219,12,49,249,98,149,85,121,61,199,83,200,197,42,200,219,64,200,3,235,78,109,196,103,204,64,58,100,80,1,184,49,198,255,0,155,235,76,242,207,70,108,30,192,156,210,253,211,134,79,112,217,165,220,2,228,51,
1,245,160,4,218,49,128,1,246,230,149,35,109,188,162,159,169,200,163,206,97,192,220,64,238,221,104,198,27,114,150,29,253,69,0,34,169,221,133,199,211,154,113,202,240,115,244,237,65,152,110,24,96,62,130,
149,92,182,224,75,109,160,4,249,191,231,160,3,219,154,23,230,207,43,187,182,195,254,53,38,211,140,128,185,247,164,231,161,3,62,130,128,27,184,169,249,148,6,254,247,92,210,29,205,211,31,92,83,183,5,247,
30,220,211,67,33,206,55,17,158,132,99,20,0,161,73,57,33,67,246,56,4,211,124,151,28,225,15,99,180,99,244,38,145,149,89,129,195,140,122,82,24,246,253,192,223,142,13,0,46,2,245,4,31,246,120,52,13,156,225,
219,243,38,151,107,231,33,183,47,126,122,82,52,97,185,206,207,171,208,3,241,149,200,57,61,201,20,133,153,120,102,7,223,20,216,254,95,226,108,125,65,169,54,156,16,48,190,188,82,1,133,131,12,23,3,240,197,
56,42,177,206,214,223,235,159,235,77,104,199,4,149,97,211,6,154,85,83,130,65,244,0,158,41,129,38,213,147,128,113,254,206,41,160,36,125,119,41,247,164,69,221,253,224,123,224,83,182,224,116,220,61,24,230,
128,20,145,253,233,31,208,19,65,141,123,161,39,235,66,2,188,42,34,47,165,18,9,249,249,65,95,168,205,0,2,48,188,253,193,221,88,102,151,229,11,253,72,166,174,245,108,127,232,68,102,156,54,158,153,102,29,
87,119,52,0,245,98,220,19,129,249,10,69,221,31,82,172,190,160,208,178,110,207,56,252,104,141,135,151,131,35,73,207,83,205,0,27,131,31,184,1,246,167,135,3,32,174,71,190,51,77,192,219,195,103,215,181,47,
86,233,207,247,177,64,0,198,70,10,161,244,207,38,154,243,11,118,140,57,85,46,219,23,36,242,112,78,61,59,83,177,180,242,86,65,219,140,17,67,176,201,220,84,113,245,6,128,31,230,55,66,163,233,154,79,151,
166,220,147,223,60,210,9,17,20,146,62,94,251,69,9,187,144,187,118,118,10,13,0,71,208,128,70,79,184,200,167,110,59,129,206,72,163,115,168,195,0,87,208,12,82,121,42,220,17,198,120,206,115,64,14,221,192,
24,24,250,226,162,104,87,63,46,85,190,189,105,254,73,32,130,170,87,223,52,213,8,87,27,65,199,78,244,20,136,182,29,195,49,238,247,36,230,149,119,43,12,166,220,240,55,18,57,167,72,227,166,205,217,61,198,
113,77,95,49,114,2,144,191,64,71,243,169,24,229,198,227,136,213,123,125,227,250,83,254,94,167,130,58,26,139,107,59,124,219,155,211,219,240,160,195,252,95,58,156,244,4,83,1,206,170,203,141,231,7,182,242,
63,42,98,200,164,99,230,147,25,199,7,249,158,180,224,160,40,10,84,15,169,254,181,27,111,101,59,25,131,41,232,57,200,160,7,60,97,151,157,200,59,4,28,210,43,70,219,119,29,196,119,228,28,122,31,122,80,188,
28,134,141,177,209,133,43,42,178,157,195,119,124,0,69,32,30,21,48,25,36,97,248,82,9,7,66,88,147,211,159,233,77,140,50,156,160,218,15,173,73,177,2,146,203,143,162,83,1,234,66,143,152,182,61,106,69,97,192,
81,158,59,158,149,87,204,85,233,30,7,168,228,209,192,96,222,83,55,163,22,31,227,76,11,155,147,187,46,123,21,235,66,201,212,9,14,125,14,42,183,156,16,115,27,15,92,142,71,235,78,23,0,224,30,125,10,156,113,
64,172,76,178,59,54,10,227,223,35,249,82,237,25,220,204,126,157,63,74,143,137,63,137,84,122,117,161,84,131,145,183,31,76,230,128,176,246,29,55,39,211,63,206,159,143,151,238,49,62,216,168,0,220,14,14,127,
17,145,244,205,40,102,82,8,141,155,253,172,241,64,172,77,243,30,24,21,111,238,179,15,233,70,217,182,255,0,15,231,138,139,44,216,194,140,122,103,7,249,83,89,177,147,134,86,244,206,104,11,18,50,179,127,
119,254,3,150,166,109,231,230,151,242,92,81,181,228,95,226,4,116,227,255,0,175,77,108,149,193,114,49,234,1,52,5,133,59,142,66,134,63,65,138,111,35,146,113,236,77,35,14,57,220,127,221,56,168,140,103,44,
115,158,126,93,196,231,20,12,153,153,215,191,20,198,216,120,98,8,235,199,56,164,242,206,225,141,234,125,1,10,41,236,51,195,53,3,33,202,50,157,156,143,97,140,211,127,118,185,8,20,156,243,144,51,82,63,157,
193,243,119,168,164,243,21,192,12,65,244,36,80,4,27,135,36,227,220,228,255,0,33,81,249,208,179,112,196,14,235,180,138,176,197,125,85,135,184,166,74,206,248,49,224,255,0,181,183,249,82,25,23,218,2,115,
180,180,100,227,229,230,147,204,73,31,10,54,254,63,253,106,25,228,140,147,57,200,62,192,98,154,207,12,152,24,73,1,255,0,60,212,142,196,140,161,148,14,70,57,251,212,221,202,189,35,119,96,49,184,231,145,
81,52,133,122,147,142,160,83,60,201,19,24,141,65,245,243,0,226,149,197,98,110,101,233,24,199,210,145,99,27,135,202,3,118,227,53,31,154,120,45,133,31,236,228,254,166,149,100,223,194,177,35,190,58,211,11,
19,121,203,183,14,72,4,127,11,15,229,80,239,85,207,6,69,254,233,25,255,0,34,155,52,134,48,8,76,243,201,244,160,72,237,130,55,1,143,225,197,38,22,28,211,109,232,168,128,117,10,24,82,172,109,46,89,87,30,
135,123,17,250,82,70,202,122,73,51,17,216,129,76,63,51,96,249,207,142,126,117,192,31,141,32,177,48,82,48,3,6,110,159,41,226,132,87,237,180,30,249,34,171,49,86,193,243,177,147,141,141,128,15,231,214,147,
203,128,55,202,202,210,15,224,140,103,241,167,113,22,55,121,120,36,152,241,208,129,207,231,138,100,143,38,119,40,154,117,207,92,100,15,198,156,30,72,84,224,224,247,199,52,171,37,215,241,59,178,142,141,
142,24,125,5,0,66,205,35,242,35,224,245,226,159,27,75,30,65,147,110,63,15,214,148,186,140,249,145,202,71,174,222,149,20,136,55,12,110,127,108,231,241,164,4,230,96,141,150,25,39,252,253,41,77,211,240,12,
89,236,48,0,53,10,137,149,14,203,117,39,60,182,225,210,146,57,195,238,92,8,152,117,110,163,233,64,139,76,199,24,10,193,79,117,57,166,180,49,43,2,210,72,73,254,56,215,154,136,6,224,172,203,158,184,49,159,
208,211,67,55,221,7,5,121,249,78,51,248,80,34,200,253,219,124,128,168,245,39,154,123,121,187,73,112,135,31,222,28,254,117,83,112,140,144,243,169,231,35,205,25,252,7,52,162,233,2,134,22,169,143,239,41,
160,69,148,102,236,84,122,6,64,127,10,85,103,31,194,190,216,3,53,91,115,206,187,132,69,80,122,145,250,119,169,87,118,208,99,151,131,252,36,115,250,213,1,38,70,239,158,220,177,237,184,12,126,20,211,112,
6,67,34,109,232,187,151,138,95,56,237,219,35,49,255,0,117,70,105,203,50,21,42,100,98,190,138,113,69,192,55,44,157,102,43,233,142,41,36,249,84,185,10,197,127,138,152,93,21,135,203,159,169,160,72,170,223,
36,113,159,64,6,127,157,72,18,109,3,158,125,168,56,111,225,252,255,0,157,31,55,177,29,122,209,185,79,33,118,146,123,140,80,33,74,190,112,122,118,163,115,116,31,45,39,152,205,192,110,106,79,245,139,146,
55,80,48,12,234,199,45,140,250,116,52,51,52,152,29,215,161,36,84,102,54,92,171,24,202,255,0,181,205,42,168,94,129,7,178,138,98,176,236,18,223,40,64,125,114,41,67,56,99,251,206,125,49,77,219,158,140,160,
250,17,79,243,8,3,11,129,235,218,128,17,151,113,220,31,242,192,166,42,13,217,110,167,210,159,243,117,4,169,199,106,76,144,217,195,2,125,5,48,20,252,199,130,161,186,83,67,238,199,202,164,231,248,151,149,
63,90,145,126,108,130,57,246,56,164,243,36,201,92,49,61,62,126,255,0,141,2,26,165,217,182,190,6,125,50,106,69,99,198,31,35,167,74,111,204,112,172,165,151,177,232,115,74,7,102,80,40,1,124,185,72,200,249,
199,76,116,197,39,150,81,121,37,15,166,41,22,45,188,22,27,79,32,175,66,41,126,85,224,184,35,182,121,197,49,136,89,2,228,179,125,113,66,186,228,128,72,110,184,60,126,84,44,170,50,67,168,63,196,167,189,
31,43,18,48,74,143,210,152,199,6,13,193,98,7,78,148,134,53,94,24,110,244,44,104,102,28,133,104,241,235,64,65,32,236,105,146,53,177,212,28,17,215,25,164,201,61,25,121,246,63,206,156,89,87,150,198,61,179,
73,185,23,251,196,118,160,7,121,203,144,28,100,253,41,251,81,143,221,218,8,207,78,13,66,100,128,12,128,216,254,246,234,85,184,70,199,205,131,235,206,40,16,28,31,151,106,245,192,29,69,43,99,130,21,147,
29,129,197,61,68,114,228,110,87,31,165,60,237,43,212,228,127,118,129,145,99,118,11,72,81,135,117,106,86,203,116,96,223,128,167,24,241,204,120,66,125,105,166,25,55,110,221,142,57,227,138,6,24,222,72,200,
67,223,43,77,93,202,113,156,30,249,28,84,130,35,193,96,88,210,178,109,195,121,109,158,220,12,10,0,137,166,17,176,36,6,83,212,140,112,105,254,118,220,97,9,30,161,105,187,164,44,65,139,143,239,58,140,82,
238,249,112,193,159,232,40,1,142,196,182,72,192,62,163,31,173,54,221,102,85,101,159,118,51,198,15,79,198,166,220,118,237,96,193,126,163,138,112,81,252,35,4,255,0,121,177,64,196,218,121,7,4,125,73,52,136,
161,24,145,187,233,214,149,85,145,190,98,160,123,154,86,86,224,198,160,113,252,61,232,1,62,102,232,248,244,227,52,214,133,247,118,7,174,122,83,178,235,247,198,126,189,127,74,85,144,73,129,243,10,0,95,
153,190,86,3,167,240,177,166,109,45,211,106,159,169,106,26,50,191,115,110,123,140,208,187,183,12,170,143,113,64,12,199,112,118,158,234,153,25,250,122,212,177,16,233,198,242,122,97,134,13,60,72,84,31,159,
30,212,140,140,220,135,57,254,116,0,121,115,14,115,242,250,6,198,41,11,77,184,130,172,125,198,41,229,91,25,44,192,251,83,55,59,112,31,113,255,0,104,210,1,198,29,221,14,115,253,227,210,154,35,116,227,59,
190,148,223,159,39,112,80,63,217,32,208,21,118,240,88,31,246,141,48,27,180,247,66,79,98,105,21,84,100,99,62,216,169,62,85,251,239,180,119,4,211,87,13,146,36,231,166,88,208,4,110,190,80,5,31,11,223,34,
149,92,174,127,121,184,127,187,210,156,99,207,27,198,15,57,205,59,203,0,143,52,163,28,113,199,20,134,52,50,42,224,149,3,62,180,170,200,50,11,22,30,187,105,216,81,146,54,156,245,197,34,140,174,208,118,
144,122,49,20,196,42,161,232,95,116,127,222,44,115,78,84,85,63,124,183,166,77,33,80,217,4,46,23,168,207,74,68,217,143,149,149,125,243,193,160,5,227,7,37,191,33,71,218,54,142,28,143,81,140,230,149,91,7,
12,200,79,125,166,143,149,88,128,66,158,184,11,197,32,26,204,167,230,82,167,253,134,95,235,74,187,100,92,131,129,237,254,52,141,34,162,231,3,31,237,10,110,237,199,120,44,87,191,20,192,151,204,11,128,95,
30,228,100,211,131,70,173,201,220,127,216,255,0,10,98,178,140,134,218,79,110,115,78,89,145,151,8,253,63,135,158,40,1,62,212,145,227,2,76,14,167,111,79,173,77,230,44,131,33,1,252,65,168,214,71,254,243,
224,123,228,83,118,198,9,219,195,31,226,42,127,42,0,149,153,113,194,156,143,124,81,187,43,144,160,15,243,214,145,114,189,20,55,214,130,204,48,204,161,63,26,0,18,69,95,153,70,123,112,105,119,109,108,170,
156,122,122,83,190,102,57,36,17,244,164,249,176,73,40,167,184,6,128,6,109,221,78,7,189,53,178,221,27,4,119,32,226,156,187,155,24,85,97,236,195,52,187,88,12,41,92,103,238,179,98,128,27,206,71,206,11,118,
0,31,231,77,118,24,229,177,234,57,21,47,150,205,146,79,224,188,226,152,176,201,246,150,144,59,50,148,10,33,117,0,41,4,146,195,190,78,64,228,246,160,6,110,27,67,12,149,245,205,49,163,18,115,206,8,171,45,
14,220,157,161,63,221,80,42,7,139,119,24,14,58,138,86,40,133,161,93,216,43,219,251,196,230,150,56,214,63,184,27,62,160,102,145,208,170,156,226,49,223,159,235,70,242,113,150,92,255,0,178,122,210,24,254,
119,18,88,100,117,249,127,194,151,104,69,220,133,217,123,170,241,138,106,182,238,85,128,255,0,129,82,50,199,213,157,135,208,255,0,42,160,13,177,237,207,36,122,42,140,255,0,58,72,221,114,64,144,238,83,
202,144,1,160,20,143,230,201,199,171,113,82,111,249,190,93,204,125,49,73,140,110,229,99,144,89,65,254,232,167,170,133,228,51,17,254,214,41,193,75,47,202,160,31,166,41,195,122,156,99,7,214,152,134,174,
237,192,252,164,83,196,127,197,132,82,58,237,230,134,201,228,147,143,246,78,49,77,10,7,221,233,232,121,160,5,220,54,140,254,28,226,163,243,6,8,41,145,236,115,82,110,86,7,43,207,177,52,190,113,94,193,79,
174,121,160,8,194,164,152,196,75,131,206,236,16,212,155,85,88,236,98,15,225,145,79,51,13,216,125,203,238,163,52,198,184,249,182,149,108,246,221,214,129,216,148,157,216,36,100,253,69,55,122,182,64,86,255,
0,116,26,143,205,218,71,64,61,13,43,73,201,249,255,0,224,33,168,11,15,59,151,142,254,155,128,164,94,120,12,165,179,198,78,226,63,194,152,25,25,48,54,158,122,51,19,253,105,166,48,55,50,196,20,183,81,140,
3,64,236,75,243,43,114,220,251,115,67,41,108,150,195,123,241,249,85,127,49,250,109,85,31,236,181,70,103,145,88,101,35,249,123,41,231,30,180,174,62,82,193,43,31,241,170,255,0,179,208,210,110,43,146,206,
184,63,119,113,53,7,153,28,159,54,194,227,166,85,105,2,198,189,9,79,248,8,197,32,177,97,176,203,146,204,125,66,146,86,153,229,146,184,13,238,9,168,154,60,224,170,110,29,177,192,166,121,198,34,70,23,61,
113,206,105,220,44,77,176,46,55,231,254,4,122,212,95,187,220,113,25,206,58,178,149,205,35,76,141,128,210,4,115,211,118,105,60,201,95,5,74,204,123,21,227,31,157,72,236,55,11,146,75,145,254,241,255,0,10,
105,142,220,177,33,89,91,213,88,175,233,74,205,34,142,10,134,239,129,80,180,146,238,201,7,3,190,63,250,212,5,132,105,160,137,62,121,100,100,7,134,200,127,195,165,54,73,35,42,26,32,207,234,49,219,240,169,
242,25,190,83,151,247,4,1,248,212,13,28,170,9,96,170,191,239,129,159,214,129,140,80,174,223,187,141,183,247,35,52,225,185,122,198,88,119,102,3,31,206,163,102,231,105,98,222,131,126,69,38,215,37,118,238,
141,127,188,217,35,242,169,2,65,35,49,33,6,209,232,130,146,70,147,3,40,224,250,230,149,151,229,6,73,31,30,140,184,166,54,205,164,160,10,113,198,91,173,0,75,28,195,230,219,16,63,222,4,102,145,155,229,37,
67,39,115,140,15,243,249,85,86,144,110,198,118,123,227,131,78,220,161,67,121,155,177,232,188,208,34,105,38,127,226,39,31,236,174,41,241,157,203,203,54,1,200,201,168,225,120,228,95,186,206,15,174,79,242,
167,98,35,193,70,36,244,0,0,127,90,4,61,101,113,145,149,114,123,170,41,63,168,162,59,169,189,89,147,56,63,38,209,253,41,26,97,24,201,136,70,23,177,60,254,64,26,106,222,11,137,9,84,102,30,136,8,160,66,
137,154,49,128,66,171,115,128,56,31,137,169,55,111,229,161,89,24,116,50,130,127,35,77,143,59,137,77,234,122,149,104,195,103,233,72,172,221,148,174,58,179,115,250,102,129,88,145,102,133,137,10,130,54,35,
238,224,96,154,79,221,202,10,231,7,29,151,167,227,154,103,152,88,156,0,61,202,224,210,25,38,232,19,205,244,57,206,104,1,254,89,31,113,243,238,184,205,55,203,118,192,103,32,143,186,100,0,131,248,210,121,
146,192,127,123,16,249,187,240,49,67,73,230,40,249,56,110,51,183,143,204,116,160,68,170,204,163,107,12,159,82,51,253,104,105,11,229,90,17,232,120,81,85,76,110,171,204,120,246,45,75,182,53,67,183,104,7,
145,158,115,64,19,52,135,238,152,86,69,199,250,182,69,97,199,122,81,33,148,130,192,177,255,0,103,111,245,28,84,113,200,174,167,253,29,25,189,67,96,138,105,249,78,99,137,1,63,121,67,243,249,80,34,81,113,
243,124,202,234,125,78,63,250,212,187,131,47,202,2,127,179,131,253,13,53,22,225,129,56,140,169,237,39,115,239,74,45,229,82,119,44,99,63,195,28,156,126,84,0,227,27,168,221,247,193,254,37,60,81,188,134,
7,102,87,213,141,34,160,232,62,87,254,238,115,74,85,87,184,83,220,80,3,139,0,195,149,79,80,65,227,233,79,243,48,185,85,98,59,110,239,81,171,19,156,56,35,208,140,83,213,142,126,234,177,255,0,104,80,34,
111,147,63,123,230,237,159,255,0,93,72,146,54,220,98,60,119,86,90,131,206,12,167,229,45,142,188,1,71,156,120,4,48,29,141,2,39,102,98,192,238,81,233,140,10,21,143,35,35,7,214,163,222,121,5,67,15,113,73,
185,122,133,3,233,64,18,108,254,18,203,183,219,181,39,11,129,184,103,249,210,114,195,32,38,61,199,52,205,167,60,28,143,67,64,19,180,129,184,44,1,250,102,145,119,47,28,226,163,201,198,84,183,184,193,165,
231,209,191,3,64,15,39,4,29,172,191,142,5,35,50,110,226,39,83,238,228,138,77,221,176,212,48,227,27,185,7,248,148,211,64,47,201,193,15,142,248,254,148,109,141,250,49,97,156,16,15,74,102,197,92,144,20,119,
198,72,166,237,61,54,198,167,253,158,105,138,196,155,130,124,187,255,0,51,205,77,181,89,119,47,204,63,218,53,2,135,227,50,134,35,212,82,249,106,217,98,121,246,255,0,235,26,6,74,187,100,92,43,2,127,218,
25,163,103,80,209,174,71,77,166,160,10,136,192,121,99,212,99,53,34,200,163,111,203,156,116,254,240,166,72,121,156,96,15,175,25,20,62,223,225,25,29,197,59,247,109,200,5,123,244,226,144,0,115,134,99,199,
106,161,138,152,224,237,0,159,239,116,252,233,124,213,221,128,160,145,245,53,25,218,220,121,188,127,116,142,41,233,24,101,4,50,134,29,8,232,104,16,226,251,148,184,111,170,227,138,132,172,74,217,1,144,
30,187,91,28,255,0,74,120,111,45,134,29,70,239,225,199,38,130,201,184,156,156,30,10,176,226,129,2,156,17,180,237,252,115,79,218,23,36,40,39,175,76,131,81,6,219,198,50,59,109,20,170,198,54,28,156,123,154,
0,86,11,34,231,5,10,244,218,63,66,41,171,50,70,255,0,234,240,123,84,140,202,91,57,94,63,12,81,230,69,158,118,231,215,214,129,143,89,85,151,161,252,104,87,140,182,85,10,158,229,70,42,48,196,48,218,1,250,
26,86,222,223,116,125,120,160,16,239,56,43,21,207,208,147,71,32,140,50,41,234,62,98,51,77,102,61,209,8,199,80,70,105,26,70,141,126,238,87,240,52,1,47,152,122,30,126,140,105,4,135,118,2,147,248,243,80,
253,166,78,233,143,66,23,21,36,114,51,231,123,103,208,99,145,64,197,8,205,247,149,144,123,158,127,17,81,152,206,64,4,183,61,15,6,164,108,227,49,156,183,82,51,76,220,221,15,45,216,102,128,28,200,10,242,
172,78,51,216,83,21,124,192,0,59,72,245,39,53,28,119,146,189,225,133,98,109,161,115,230,48,233,237,86,183,63,241,100,142,157,104,25,18,47,149,214,71,24,239,154,119,150,71,241,6,62,253,105,219,152,103,
203,82,132,251,245,164,243,58,7,3,250,131,64,18,47,204,184,45,158,220,227,52,190,95,0,103,113,237,205,49,130,183,74,106,178,103,3,104,252,113,64,14,111,246,209,134,120,203,82,250,97,246,159,165,53,155,
104,195,99,105,235,131,64,141,120,39,249,80,2,172,140,167,7,215,175,52,233,34,221,201,32,169,245,234,61,193,168,91,29,65,42,125,78,112,105,66,145,201,206,15,81,210,128,36,49,44,131,150,102,227,6,162,93,
214,252,110,24,239,242,245,167,157,205,140,32,163,110,211,143,152,127,192,114,40,1,203,33,207,4,143,79,74,86,221,39,241,41,250,138,99,7,249,128,67,249,127,42,79,152,47,241,15,194,128,36,101,108,224,240,
63,217,38,153,228,156,228,2,79,212,98,141,204,184,195,100,122,127,245,232,242,203,253,217,91,253,194,5,0,46,28,115,181,156,123,46,49,248,230,154,210,69,223,147,237,74,35,217,247,215,158,197,105,94,66,
184,27,74,143,94,212,0,221,219,240,75,17,142,156,115,72,219,51,146,187,129,234,27,249,210,251,231,167,60,145,75,228,157,187,131,143,192,210,24,221,177,227,229,85,199,251,52,153,113,254,208,20,174,56,220,
24,33,29,121,2,163,200,233,184,250,239,92,144,104,2,84,88,219,39,104,231,179,113,67,151,86,249,31,140,112,15,74,135,49,48,201,12,127,218,106,69,153,48,54,157,195,166,74,211,2,80,225,241,145,184,250,40,
227,243,52,245,144,110,228,96,250,55,25,250,98,162,105,139,47,89,15,251,181,27,93,68,164,9,3,43,117,12,57,52,130,197,181,145,23,24,1,127,19,79,220,237,159,155,42,125,170,160,145,59,134,126,224,128,71,
227,82,46,222,3,101,123,130,14,115,76,44,75,131,193,243,120,244,10,127,173,63,114,227,144,191,141,49,25,177,140,72,227,243,52,111,96,220,36,187,127,218,66,71,231,72,44,59,113,206,51,207,163,96,84,138,
195,178,243,237,147,81,110,11,193,92,175,94,184,197,55,207,27,176,171,143,114,120,166,22,39,103,221,158,50,113,207,106,65,36,125,118,231,29,126,108,212,13,114,203,149,97,143,66,189,42,25,164,102,28,224,
251,227,2,129,216,180,215,16,70,73,34,48,58,110,201,168,230,212,2,252,170,55,130,56,42,120,170,31,235,28,46,118,57,232,185,224,211,86,220,198,112,163,30,190,213,55,43,149,18,13,113,163,98,173,31,175,221,
39,154,155,251,88,109,220,88,40,61,119,30,158,252,85,73,45,100,117,221,251,182,61,72,81,143,198,171,165,175,150,193,145,252,194,79,27,95,143,212,82,187,42,200,216,91,168,228,80,209,59,55,167,69,31,79,
90,105,199,36,178,168,235,207,39,53,157,28,18,175,65,188,142,161,91,252,106,196,36,43,127,117,255,0,217,228,126,84,197,98,214,55,54,230,101,45,253,232,201,20,229,184,77,219,89,62,111,117,226,163,66,95,
161,98,61,23,31,228,82,252,249,3,118,245,35,56,39,159,254,181,49,19,237,102,206,27,105,244,235,250,83,89,143,110,113,223,24,205,51,106,175,240,103,29,183,100,211,183,71,192,216,248,61,48,49,64,196,200,
56,102,102,25,254,16,224,10,145,66,246,96,120,206,11,182,105,187,130,228,128,62,140,115,74,174,210,71,216,175,247,121,20,1,46,254,192,96,127,181,147,70,213,124,156,182,239,165,69,230,34,241,198,225,234,
72,20,73,141,192,163,133,246,205,23,11,15,41,253,214,95,247,74,255,0,245,234,54,253,223,66,7,251,180,217,37,35,31,59,30,121,238,42,51,121,10,245,63,153,20,92,171,19,121,140,185,219,35,147,219,32,102,154,
183,18,73,198,112,227,175,7,21,82,223,83,146,224,201,155,121,20,6,33,7,28,129,223,34,149,174,188,236,126,237,177,159,187,208,159,235,72,171,22,254,208,203,208,160,63,197,199,53,27,92,56,59,75,176,29,178,
131,165,86,221,183,157,142,23,28,252,223,227,79,91,140,128,67,176,0,118,110,127,46,148,15,148,147,113,231,118,25,122,238,217,180,254,148,207,46,54,228,32,231,161,201,168,164,184,94,24,187,100,244,12,195,
20,211,181,151,119,10,125,49,144,127,42,69,88,127,146,35,234,91,242,165,249,20,6,36,169,28,100,158,127,35,81,113,183,49,168,4,127,182,127,145,165,89,206,112,192,57,254,241,56,197,1,98,114,203,131,156,
149,247,164,225,87,134,1,125,5,64,172,21,178,67,55,213,201,31,157,35,175,59,163,143,105,245,36,183,243,165,112,229,39,70,11,156,57,199,126,212,239,59,140,56,41,142,155,170,167,42,217,201,25,228,224,102,
145,103,83,144,3,59,15,99,253,104,184,114,150,196,206,185,216,88,119,251,153,38,163,251,64,147,239,60,141,187,174,232,202,213,102,117,223,187,152,219,215,119,20,246,185,98,165,154,70,116,63,236,241,249,
209,113,114,146,50,162,228,227,112,199,241,114,7,227,81,249,200,48,9,199,166,222,181,11,185,4,29,234,217,255,0,99,24,246,235,72,88,178,237,37,194,247,218,48,104,184,114,142,105,35,218,55,179,133,207,4,
158,41,141,113,20,99,114,70,164,31,188,204,77,7,229,232,171,187,220,211,12,188,229,137,28,119,81,180,251,82,11,15,251,108,11,129,189,99,221,209,113,214,145,154,62,162,93,167,191,80,126,156,118,168,124,
193,144,169,229,166,123,28,127,133,2,44,117,108,145,72,86,29,181,20,229,23,36,242,91,60,31,173,61,89,2,143,221,170,122,17,81,108,242,242,29,119,41,31,119,52,155,124,191,156,46,23,186,177,200,252,59,208,
22,38,243,140,173,242,34,17,220,178,149,199,190,104,89,25,121,216,210,227,171,1,129,80,253,160,205,132,96,74,142,131,56,90,93,165,187,42,15,166,79,224,5,2,176,243,34,183,252,179,42,62,157,63,1,81,179,
236,112,26,55,92,244,42,13,38,25,27,42,236,71,176,218,42,69,113,183,57,101,61,199,81,69,194,192,147,75,30,15,152,23,156,110,100,235,236,105,90,241,228,224,152,193,83,128,216,254,84,223,61,89,185,119,97,
220,73,205,42,184,80,118,73,144,123,108,28,251,123,80,33,210,52,205,181,153,134,59,49,29,63,42,142,75,133,141,151,126,233,73,56,249,65,254,93,169,12,207,24,220,139,187,212,45,2,241,185,2,50,135,248,149,
152,241,69,197,98,117,42,223,48,44,0,254,19,214,159,193,235,42,196,63,186,163,165,86,12,91,147,36,100,30,135,36,254,124,83,209,55,48,1,225,36,123,80,43,19,46,213,7,107,70,234,79,69,5,178,127,42,35,243,
7,5,118,143,70,33,71,229,154,139,203,154,63,148,201,131,142,87,1,115,244,193,165,86,102,102,87,195,55,251,43,143,212,117,166,77,137,119,117,31,234,127,218,92,28,83,27,106,243,185,100,95,92,96,208,35,89,
50,25,176,123,112,27,31,129,164,101,72,155,114,29,236,126,241,83,183,244,237,64,88,84,152,118,81,129,244,207,235,82,152,209,190,102,86,96,123,244,254,85,16,251,255,0,43,237,207,114,192,255,0,90,80,146,
46,74,23,227,161,227,159,122,2,194,237,224,148,85,30,236,73,164,93,195,129,187,61,182,227,154,99,51,43,19,131,158,253,41,83,203,145,121,206,234,66,37,204,173,141,171,184,14,132,176,206,105,226,105,54,
156,35,6,31,123,145,254,53,0,17,5,57,114,71,125,185,199,227,72,219,56,40,27,105,245,39,20,1,59,187,58,130,84,33,207,115,156,254,52,208,205,183,238,185,199,167,35,243,166,199,177,242,120,115,211,230,106,
123,73,229,240,17,84,250,30,159,133,34,73,183,187,54,89,6,8,227,128,104,13,34,140,100,145,238,49,72,172,23,134,224,30,184,205,10,75,100,40,102,29,57,7,20,246,17,34,239,110,23,150,244,205,35,70,202,65,
104,216,43,28,30,224,26,97,142,72,212,2,62,76,255,0,16,60,126,52,245,66,185,0,174,8,198,23,39,249,154,96,1,89,78,73,192,167,124,172,196,231,61,207,203,76,10,87,230,67,131,254,208,167,253,239,249,102,164,
245,202,140,26,0,60,191,238,202,192,31,225,227,2,155,181,187,176,63,141,12,173,222,39,30,234,41,124,188,142,75,127,192,177,64,11,176,175,241,150,95,74,11,14,220,12,115,180,211,55,121,127,43,6,193,237,
210,150,54,85,57,87,114,7,95,148,26,0,112,216,202,3,22,97,235,79,196,106,153,93,220,122,244,166,52,99,130,26,66,15,109,180,170,15,241,113,248,85,0,253,200,204,9,31,149,59,108,25,192,0,55,110,245,25,35,
111,222,85,247,106,111,149,27,117,0,183,170,244,52,1,51,48,61,88,129,72,6,115,181,216,30,191,47,122,98,231,162,163,103,175,204,115,249,83,64,102,225,163,40,125,50,41,129,32,98,191,199,150,247,20,253,190,
102,119,0,15,108,228,84,88,68,192,217,147,211,145,214,142,59,100,15,210,168,68,172,133,184,105,149,27,216,100,26,64,185,255,0,150,138,254,152,4,83,119,113,211,35,232,51,77,56,245,201,31,222,92,255,0,74,
4,13,51,70,29,89,72,3,174,115,143,173,47,157,208,176,117,83,249,31,206,157,189,89,115,158,113,140,158,105,62,246,66,149,224,255,0,16,206,62,156,80,0,178,167,183,161,24,230,156,174,141,193,86,3,61,106,
54,103,43,206,29,190,184,163,106,180,128,180,106,15,252,244,197,0,72,36,141,15,223,42,123,28,15,235,66,201,27,175,202,170,195,191,3,138,143,247,113,175,204,156,142,65,199,31,202,148,200,91,144,50,59,103,
154,101,18,136,212,54,11,99,219,24,163,202,117,251,129,207,166,72,168,91,111,221,249,143,161,81,210,148,71,191,254,90,176,63,165,33,18,249,197,129,87,202,158,135,138,69,104,212,145,231,72,15,94,79,31,
150,42,63,46,76,144,88,49,254,22,60,84,137,202,226,64,27,211,156,226,128,234,13,50,142,58,228,245,20,110,127,239,96,250,145,66,225,155,1,34,30,224,243,252,168,243,130,141,174,20,227,166,70,69,0,72,158,
99,40,32,43,251,175,6,140,201,209,162,114,63,90,134,53,140,76,211,71,8,19,48,10,196,38,24,128,78,63,153,252,234,82,27,118,114,201,248,19,252,233,133,133,242,206,237,223,189,4,250,128,41,170,249,249,85,
129,61,183,210,243,248,31,110,148,172,71,241,48,63,160,164,49,84,184,7,40,20,143,124,138,10,179,47,46,160,123,138,108,108,207,209,215,143,67,154,86,93,188,156,98,128,28,184,219,130,217,247,28,82,5,219,
157,167,118,121,28,154,140,225,190,232,20,169,181,80,35,14,7,167,90,0,118,230,94,74,140,250,145,74,25,102,249,72,201,244,98,69,33,49,175,252,180,102,83,252,44,57,252,232,50,124,184,27,136,250,147,64,8,
26,84,110,72,69,255,0,123,57,167,237,110,236,175,158,155,135,31,160,168,149,193,247,61,184,200,52,169,112,54,149,57,83,238,40,1,68,50,110,224,148,30,202,113,79,242,206,222,29,183,119,108,145,154,110,231,
111,187,33,30,128,15,210,155,146,123,21,62,167,165,0,59,231,102,0,18,59,117,28,83,149,28,96,134,227,186,245,166,186,25,20,103,231,63,236,138,141,113,27,17,181,155,143,186,212,1,62,221,191,46,213,83,212,
117,193,164,96,163,157,138,199,253,145,147,81,9,17,70,55,58,142,160,55,240,208,178,39,65,35,15,194,128,9,55,39,124,123,100,241,74,178,121,139,181,144,159,78,248,165,220,84,224,52,110,61,31,173,53,164,
238,169,183,217,79,20,0,159,102,232,217,100,111,247,120,52,169,26,47,35,114,183,168,34,152,101,50,116,194,147,237,214,145,150,71,251,129,71,212,145,64,201,150,49,187,128,185,236,91,173,35,70,216,228,169,
246,168,135,0,134,108,55,124,102,158,165,179,243,19,254,240,20,0,132,54,224,119,46,126,180,52,155,151,230,114,167,183,24,167,50,238,199,204,163,30,212,108,36,99,0,123,227,32,208,50,45,208,12,51,70,228,
255,0,121,73,31,202,149,102,48,252,177,69,149,207,70,201,52,42,245,6,66,61,182,226,154,210,46,209,243,49,101,235,140,26,145,143,223,187,57,95,47,208,122,26,107,236,143,144,146,49,238,123,80,173,184,116,
56,236,125,105,197,182,174,85,183,15,214,128,21,95,118,0,56,250,84,187,190,82,60,198,218,125,133,69,203,47,203,211,175,74,96,218,153,220,140,27,175,90,0,156,40,60,22,80,222,129,142,41,25,84,54,114,251,
143,247,105,162,68,145,121,249,199,227,76,103,86,207,150,6,239,76,243,76,7,25,221,50,54,150,30,244,25,187,21,201,111,246,72,253,105,187,152,227,31,250,8,32,208,176,238,82,55,13,191,90,24,11,177,31,239,
69,158,255,0,58,224,208,99,17,176,200,11,233,201,96,105,129,132,103,104,34,85,246,169,99,145,91,128,223,240,29,212,14,227,35,81,212,16,184,56,39,173,43,67,242,157,174,158,248,21,36,130,67,202,163,133,
232,112,50,71,189,49,35,126,8,49,183,169,42,127,169,160,99,86,31,48,141,206,85,187,99,129,79,104,218,44,7,96,235,253,236,208,178,121,106,119,20,43,208,211,150,80,160,4,0,15,210,128,26,174,85,179,30,221,
222,170,220,210,253,161,247,103,200,111,155,146,195,249,31,122,118,228,108,110,63,76,12,126,162,134,103,94,85,178,62,191,227,76,1,110,25,135,16,73,255,0,124,245,165,44,16,229,163,126,79,81,207,225,138,
79,49,153,114,178,16,15,241,1,187,244,164,18,4,109,140,200,238,125,65,83,252,170,70,73,230,231,248,182,175,161,20,135,36,150,85,233,222,163,108,46,119,109,201,232,73,34,152,36,86,206,93,20,129,207,4,154,
7,98,70,63,49,12,120,237,193,52,2,24,5,15,239,233,154,98,200,237,242,163,135,252,105,191,188,80,84,249,158,234,196,0,127,90,69,164,63,128,164,9,70,87,248,118,131,138,128,202,219,196,96,6,221,235,129,154,
83,49,206,25,85,123,114,69,54,79,50,69,227,110,223,239,15,92,126,148,20,144,163,204,141,72,17,49,92,243,137,0,199,233,77,251,65,145,190,119,96,125,3,14,106,54,153,163,57,146,46,122,134,7,173,39,152,165,
114,6,23,161,218,192,82,185,167,41,41,220,203,204,155,241,211,43,138,135,105,44,72,149,50,63,128,47,245,168,94,111,33,249,32,131,234,221,40,146,71,109,164,121,96,246,99,150,254,84,138,229,44,238,42,48,
202,170,61,114,49,81,159,43,204,249,155,105,244,14,1,168,99,97,35,17,185,115,220,1,198,105,219,182,128,65,218,7,86,84,205,3,177,34,198,65,5,11,50,253,121,254,84,166,61,188,148,32,123,183,21,11,133,110,
141,36,131,187,42,99,31,173,36,108,19,238,22,247,86,92,138,3,148,149,152,243,136,212,14,244,138,168,217,242,229,108,246,92,210,9,153,186,121,103,159,225,29,63,74,63,210,21,184,92,15,99,197,32,229,28,63,
119,242,151,7,217,136,167,60,193,148,0,9,250,14,148,214,98,20,22,192,255,0,107,110,113,67,76,84,101,164,86,30,219,185,252,40,21,133,219,27,119,201,30,245,27,109,221,130,184,7,141,192,96,83,27,203,153,
70,226,64,236,114,120,168,152,116,63,49,247,81,197,1,202,74,85,91,43,191,240,2,153,246,125,156,182,237,157,185,228,210,112,23,39,57,245,28,82,110,143,31,40,35,219,181,23,14,81,78,27,136,198,79,171,182,
49,81,134,124,244,82,254,128,147,249,122,212,139,8,124,150,101,81,253,210,65,207,225,138,141,154,72,216,97,50,63,188,167,63,173,4,216,24,56,83,185,157,151,169,218,2,254,20,213,97,200,76,238,239,201,63,
202,155,246,134,102,218,171,135,244,113,154,29,155,32,200,170,15,79,148,128,40,184,172,61,100,10,220,130,199,177,98,113,77,220,21,142,33,95,98,122,126,181,31,200,188,100,47,251,36,224,31,196,10,114,202,
187,121,10,192,251,138,145,88,123,76,204,163,157,190,197,178,42,189,213,186,93,70,209,239,145,67,99,38,18,202,221,115,212,116,169,4,202,217,80,90,54,29,169,141,48,224,51,204,195,176,207,90,4,63,112,81,
133,95,151,251,178,2,105,6,228,124,136,48,15,163,112,127,10,96,147,63,197,129,232,70,77,42,204,161,72,40,132,119,202,230,129,88,123,102,66,3,74,209,144,127,133,115,248,100,154,60,197,82,8,149,184,224,
141,160,126,52,140,16,176,194,110,246,193,3,242,167,70,196,228,32,242,189,8,78,104,16,170,210,114,65,70,95,85,144,103,242,197,88,89,157,149,119,70,72,29,9,0,230,171,179,74,31,61,51,199,205,254,53,11,157,
141,150,112,141,223,111,34,129,88,183,33,10,15,238,149,1,254,242,99,31,74,98,193,19,68,170,119,51,14,236,71,63,253,122,141,110,202,224,151,243,7,110,113,154,122,186,127,126,65,158,229,134,71,233,64,135,
13,208,140,59,229,15,1,113,154,56,102,0,22,80,122,124,219,1,253,41,202,138,202,118,201,41,99,212,171,1,143,167,20,232,238,164,92,162,200,206,190,174,119,26,100,216,69,81,198,0,79,247,230,36,127,33,82,
52,33,148,16,177,150,245,86,7,31,173,49,188,176,67,56,144,55,64,217,7,240,193,233,248,82,172,99,170,176,0,240,114,14,63,58,4,33,141,20,252,241,33,239,157,188,211,161,184,143,170,174,125,57,56,168,213,
139,55,38,54,97,216,183,21,39,153,237,150,207,57,0,211,16,255,0,49,67,28,5,92,251,241,72,27,115,96,17,143,173,39,158,173,247,198,193,248,127,74,133,111,173,166,146,72,227,185,14,241,157,175,25,254,19,
140,143,210,147,21,137,139,109,249,146,70,255,0,119,189,57,165,50,33,201,149,179,193,80,227,252,41,23,39,239,50,28,246,3,63,173,27,126,108,148,32,250,102,129,17,172,109,141,170,192,14,160,119,20,70,100,
251,161,252,220,28,29,231,111,243,169,55,48,0,121,101,129,244,28,83,158,69,102,230,44,55,114,65,20,128,176,87,111,63,51,103,156,6,226,144,144,235,146,173,233,212,210,49,117,114,15,150,72,234,1,253,104,
242,247,49,32,109,207,80,79,20,200,37,71,10,48,21,128,62,173,154,79,64,85,155,208,131,140,123,84,124,149,29,3,250,26,112,253,230,65,4,26,6,61,178,62,97,185,15,124,145,76,219,183,230,51,1,234,48,13,3,124,
120,220,199,211,114,158,63,26,64,161,91,56,87,207,7,113,0,83,16,255,0,186,20,153,120,237,131,140,83,183,39,82,119,30,251,77,32,93,171,252,40,190,196,241,65,135,115,103,122,147,245,198,105,129,34,205,26,
168,5,192,94,219,169,25,206,114,167,142,220,84,76,174,184,218,63,30,212,110,45,128,85,91,242,7,242,160,9,124,239,148,231,44,158,152,233,66,201,187,162,96,123,243,80,238,117,99,193,65,219,252,41,203,216,
169,81,235,138,160,38,218,119,124,203,147,143,90,17,248,199,35,219,56,161,73,207,205,32,3,235,154,103,151,20,108,112,112,123,140,159,207,173,0,72,223,123,148,108,127,123,60,81,32,95,188,73,24,247,168,
131,38,24,96,183,174,77,44,106,172,62,72,176,59,21,96,115,249,211,2,110,27,238,144,113,234,77,48,202,57,207,7,208,208,177,252,185,0,129,158,128,100,138,107,50,182,11,70,24,247,37,106,128,119,156,167,57,
96,112,105,86,64,120,87,199,214,160,243,34,108,50,124,163,190,209,253,41,126,208,173,149,48,179,129,221,71,34,128,36,35,230,202,145,238,2,211,177,38,254,74,176,236,64,234,61,41,162,85,198,23,234,62,81,
74,24,176,195,69,183,242,205,0,42,252,217,3,160,244,60,138,108,153,95,188,228,3,199,79,254,189,51,150,108,20,36,122,55,67,79,70,17,244,85,78,253,40,1,99,99,31,238,247,171,231,161,43,215,245,161,183,99,
36,127,223,52,141,42,184,35,42,123,227,60,138,106,55,151,144,65,94,253,115,76,7,171,238,36,28,161,250,210,170,177,224,115,245,24,53,31,154,187,177,190,65,147,211,60,83,151,4,117,206,57,249,178,65,164,
1,229,183,251,64,142,170,199,173,35,46,57,242,78,71,83,205,63,134,193,3,145,223,52,224,189,196,159,240,22,56,166,4,123,165,207,201,22,79,95,153,177,252,234,70,158,125,164,121,64,159,160,230,147,115,191,
7,97,81,248,211,138,152,254,108,41,29,199,113,72,4,19,73,129,184,98,62,219,186,138,77,200,223,117,184,207,124,212,166,67,144,14,83,61,49,130,13,39,156,200,216,110,63,207,229,64,8,172,202,72,4,203,158,
216,167,171,201,183,230,3,254,249,198,41,155,140,157,37,13,248,96,138,62,118,201,7,159,161,20,0,246,95,51,156,13,253,198,49,154,64,173,252,42,192,143,86,24,166,29,241,253,227,239,210,164,141,243,207,7,
222,128,26,102,102,28,253,218,95,189,140,151,57,244,169,88,142,229,79,225,210,161,249,87,157,192,251,167,67,64,8,84,198,127,136,131,82,67,38,14,21,128,246,97,205,38,229,94,58,231,218,134,85,36,125,227,
159,202,128,23,119,156,112,196,161,246,52,241,8,61,27,159,90,106,168,108,17,188,31,70,52,168,195,144,78,61,151,173,0,48,194,209,245,193,95,214,148,50,231,6,44,31,82,57,169,72,141,184,56,111,199,36,211,
25,68,107,198,66,142,199,52,0,138,193,62,77,140,7,247,186,83,74,172,135,174,89,123,3,82,44,188,100,14,63,74,95,48,159,106,0,131,205,219,242,225,131,30,185,28,26,92,124,220,17,142,253,234,73,21,165,92,
100,168,246,0,211,124,165,60,22,96,222,227,20,0,223,44,55,5,209,241,219,36,113,73,229,228,112,3,15,246,90,149,161,253,231,19,46,15,27,91,173,63,236,248,111,187,143,248,16,231,233,64,17,8,217,129,87,80,
170,58,18,121,165,59,227,207,0,1,219,34,166,95,49,184,249,72,94,135,20,237,132,174,11,109,97,64,21,124,207,151,219,184,20,187,131,15,148,40,230,172,249,111,216,146,125,136,231,244,168,252,162,24,7,80,
115,252,88,230,129,220,132,198,249,200,100,199,208,230,143,158,38,255,0,226,77,61,162,84,36,109,199,166,222,49,76,111,108,159,165,33,131,55,205,149,92,103,177,164,233,134,83,183,253,210,122,210,12,145,
247,7,182,114,105,251,91,174,220,122,156,80,50,34,210,18,12,104,204,127,217,224,84,126,99,110,201,64,173,253,208,115,83,180,110,112,54,143,98,71,90,0,27,64,145,20,227,142,131,52,8,137,75,55,76,169,29,
14,106,72,217,138,130,191,55,244,252,105,8,192,253,218,241,232,184,226,155,228,249,156,128,73,234,48,40,176,199,237,46,196,96,103,208,184,254,180,229,134,64,48,93,72,244,243,51,68,127,55,101,82,56,201,
78,106,83,31,98,161,207,189,48,25,228,202,188,153,21,147,28,169,235,70,6,224,66,227,235,210,151,201,13,131,176,70,71,70,3,6,141,162,54,59,217,136,52,0,170,70,112,74,198,123,96,103,20,245,136,55,202,88,
19,221,135,4,254,20,205,177,47,35,42,127,50,105,225,67,46,228,201,160,5,251,59,109,249,55,41,29,250,84,6,60,177,12,204,91,174,120,197,78,164,177,206,119,55,124,28,82,50,115,151,219,156,250,230,144,92,
174,209,140,231,42,127,151,229,66,199,187,128,170,227,168,11,154,152,108,141,91,3,130,115,242,143,111,210,149,176,203,145,149,56,205,49,220,141,67,174,62,77,131,212,228,159,231,73,231,171,99,205,9,39,
251,195,154,113,81,183,115,73,140,119,57,165,86,76,113,26,191,163,40,57,254,116,12,21,85,112,80,236,237,181,120,6,149,182,58,242,193,121,227,38,157,242,70,11,48,200,238,63,250,212,207,46,34,48,144,179,
99,160,45,205,73,90,7,152,54,255,0,171,220,65,228,138,139,206,118,4,41,80,7,126,227,235,82,51,55,80,60,177,232,121,252,234,54,49,57,202,238,39,31,221,227,243,160,164,35,110,145,121,103,101,39,147,31,245,
226,147,104,141,184,62,106,250,48,201,163,107,49,251,172,131,212,119,167,121,111,247,151,105,83,212,110,233,245,160,180,49,164,143,110,10,50,253,0,39,244,168,86,81,32,249,16,131,253,226,164,19,86,60,183,
94,68,64,28,246,231,52,214,142,118,94,1,3,217,127,157,34,213,138,204,179,43,28,50,174,127,133,141,66,194,93,216,117,81,234,114,49,250,85,211,107,113,42,182,213,99,234,49,138,36,177,159,112,15,110,237,
235,243,99,31,225,74,197,166,138,127,234,240,9,56,233,144,51,253,41,8,217,144,21,112,221,199,122,189,29,140,170,184,251,52,158,133,73,63,206,157,253,159,59,1,254,141,33,193,232,209,146,63,149,22,101,115,
35,57,165,145,177,128,164,14,131,28,210,172,210,134,249,210,63,47,183,21,164,186,13,220,141,251,187,89,23,159,225,74,158,63,8,234,210,12,11,87,24,232,199,3,34,149,152,249,162,100,249,97,176,67,124,216,
236,212,208,171,35,21,112,231,7,239,43,243,248,226,183,63,225,7,213,88,100,218,140,251,200,188,126,181,58,248,7,82,145,71,153,29,182,127,219,147,63,200,83,179,39,158,29,206,107,106,71,144,202,209,169,
206,57,205,69,35,198,112,166,83,34,246,92,16,127,58,236,23,225,238,161,211,237,118,240,143,85,36,159,229,82,175,195,219,141,217,107,248,71,175,202,78,104,229,97,237,33,220,226,119,70,164,29,152,62,164,
147,71,238,216,112,202,190,158,213,220,47,195,88,155,253,109,250,49,234,54,197,211,245,169,87,225,181,167,73,53,9,31,253,212,0,82,229,98,246,208,56,31,48,168,56,27,191,10,104,144,55,38,70,244,43,197,122,
58,252,57,211,23,5,174,110,91,211,145,254,21,102,31,135,186,44,100,254,238,103,39,174,231,235,249,10,124,164,186,208,60,187,119,96,172,164,122,140,126,180,31,151,230,249,112,127,138,189,97,124,33,162,
195,133,54,110,127,222,145,191,198,164,79,9,232,193,184,211,20,159,246,178,127,153,163,144,159,108,187,30,65,35,162,144,124,176,63,218,197,30,96,117,201,11,158,196,129,94,214,190,23,210,84,127,200,62,
15,197,1,169,227,209,116,248,126,229,149,186,253,34,95,240,167,202,71,182,93,143,14,144,56,135,120,80,201,208,177,227,250,84,28,142,9,66,167,209,250,126,98,189,223,80,210,109,111,172,228,129,225,140,35,
12,112,160,99,208,215,27,255,0,8,157,156,59,183,197,184,142,10,147,82,227,99,122,78,53,47,208,243,204,17,211,203,95,174,77,55,247,139,243,40,87,94,227,10,72,252,43,191,111,13,233,253,60,188,31,92,115,
85,100,240,213,166,210,35,220,173,216,212,29,106,130,125,78,44,200,205,141,235,32,31,222,88,246,131,248,210,164,223,46,212,249,7,163,13,223,149,73,170,66,44,238,164,138,109,231,7,142,184,250,213,72,217,
166,200,64,16,119,230,149,206,106,148,220,31,43,36,150,16,114,74,224,231,248,80,115,254,20,192,134,53,33,145,88,127,63,199,181,24,104,143,204,88,159,246,120,255,0,34,159,230,70,195,230,79,195,38,153,144,
36,159,46,223,225,236,187,152,143,231,65,40,221,72,83,239,156,84,108,98,24,9,145,238,163,57,165,242,214,49,144,219,129,231,238,96,143,206,144,135,169,12,216,63,55,178,183,90,149,85,148,16,18,52,25,255,
0,150,131,52,207,146,69,254,8,243,193,109,188,154,129,96,136,73,144,228,48,228,16,0,7,243,166,34,97,19,161,57,142,34,58,252,173,144,15,210,133,219,30,7,203,3,231,182,112,127,58,99,92,69,31,223,251,163,
140,14,79,242,165,142,226,30,70,220,103,163,43,110,205,2,38,13,180,135,45,27,145,193,231,175,226,41,203,178,70,59,18,52,111,246,115,81,121,138,167,114,202,193,187,140,144,180,227,186,76,24,230,85,246,
236,104,36,157,148,236,33,227,0,127,121,78,105,170,189,55,28,142,220,15,242,105,22,53,115,251,194,135,61,120,205,53,173,193,108,70,202,173,212,42,190,63,83,76,146,97,25,94,174,160,17,193,99,254,20,155,
91,57,56,111,246,148,226,160,139,203,200,2,82,88,127,9,7,249,212,190,97,94,188,167,162,156,82,38,195,248,231,44,71,177,167,194,171,27,16,140,70,238,72,56,53,15,157,23,241,68,6,59,185,255,0,235,84,139,
39,152,191,39,35,168,218,223,47,235,79,64,31,183,127,27,139,40,60,101,72,165,88,183,116,67,159,247,176,41,153,125,220,19,143,69,7,52,209,134,201,50,111,94,132,73,215,62,212,132,72,172,20,237,18,96,247,
82,244,246,144,191,202,138,174,221,184,38,152,179,42,241,177,65,245,9,205,74,31,204,199,49,177,247,28,208,73,60,138,123,140,17,211,104,168,252,178,231,150,62,199,60,138,113,18,72,187,188,188,47,80,219,
64,163,129,206,113,244,29,13,50,5,218,121,14,126,167,29,125,232,223,183,24,36,122,28,83,115,150,25,220,9,254,233,254,148,121,123,87,27,221,147,253,211,145,248,210,40,155,27,177,184,43,123,244,164,120,
78,220,237,194,158,184,28,212,59,20,28,172,108,72,251,192,147,207,191,90,114,177,94,70,213,30,132,154,119,36,127,150,121,218,228,55,81,187,189,57,114,113,149,195,125,105,187,215,161,218,71,175,244,171,
58,125,184,186,157,64,98,35,7,231,60,19,138,165,168,15,142,198,118,77,194,31,221,158,217,198,106,47,176,79,150,70,70,192,233,222,186,136,227,70,140,2,28,158,138,160,112,5,74,44,75,127,203,50,15,185,173,
185,12,185,206,71,236,115,182,55,35,231,234,105,36,181,185,92,148,135,230,174,196,105,237,130,54,126,180,223,176,149,192,41,143,248,21,62,64,230,103,34,182,243,191,13,3,12,245,226,157,246,23,200,204,12,
216,236,70,107,171,22,103,56,219,147,254,245,31,97,127,249,231,250,209,202,28,199,40,44,31,36,44,76,141,216,227,138,22,194,225,65,34,18,14,121,101,94,255,0,157,117,159,97,115,192,143,233,243,82,53,171,
71,156,199,207,166,105,242,135,51,57,79,178,92,100,22,71,102,29,240,65,169,62,203,44,152,45,27,3,143,226,28,215,74,45,95,254,120,159,206,151,236,237,187,2,2,77,62,80,230,103,42,214,119,39,164,92,250,176,
165,251,21,207,252,242,249,189,86,186,191,178,55,252,241,253,77,61,108,31,254,121,126,167,252,40,229,67,187,57,17,99,63,83,11,47,178,145,79,22,83,169,226,39,63,94,191,206,186,207,236,247,255,0,158,95,
169,255,0,10,119,246,123,127,207,49,143,169,255,0,10,124,161,118,114,77,101,112,112,74,57,255,0,120,211,26,202,227,156,68,237,239,154,236,151,75,119,233,16,63,137,255,0,10,147,251,29,207,252,178,92,254,
63,225,71,42,29,217,197,173,157,207,7,202,96,71,76,176,63,214,143,176,221,51,115,24,63,165,118,191,216,242,127,207,21,252,207,248,83,215,69,145,135,250,180,31,86,111,240,162,200,158,102,113,159,98,185,
238,138,15,191,57,168,91,71,149,230,86,10,70,222,219,184,174,241,116,55,238,145,126,44,223,225,78,26,3,159,224,135,254,250,111,240,163,64,187,56,99,166,78,140,202,99,14,61,67,12,80,186,100,219,127,213,
114,58,124,213,222,141,5,191,231,156,56,255,0,121,191,194,148,104,39,186,67,143,247,154,141,7,118,112,171,164,221,62,88,39,29,62,246,13,47,246,92,203,252,0,159,239,2,51,93,224,209,78,48,86,44,122,101,
168,254,195,227,238,67,159,248,21,45,5,118,112,191,217,183,31,117,87,233,211,52,173,164,222,195,141,234,195,60,133,96,5,119,139,163,225,129,219,16,62,163,53,35,233,65,246,146,145,185,245,124,159,235,70,
129,169,192,255,0,102,202,221,80,3,219,45,73,253,153,112,173,144,20,253,90,187,207,236,101,255,0,158,112,254,77,254,52,239,236,116,255,0,158,112,255,0,223,39,252,104,208,53,56,85,211,238,127,139,96,250,
26,107,233,50,156,156,13,221,142,107,191,93,42,46,241,67,255,0,124,159,241,165,254,203,139,31,234,162,207,251,159,253,122,90,15,83,207,163,210,238,85,190,80,191,137,167,201,164,202,36,32,4,60,253,229,
36,102,187,255,0,236,184,255,0,231,156,95,247,199,255,0,94,151,251,54,47,249,229,15,253,241,255,0,215,163,64,212,243,255,0,236,169,251,5,250,22,52,163,73,184,13,145,180,15,66,115,94,128,52,232,135,252,
179,139,254,253,211,133,140,95,243,206,47,251,246,41,232,26,158,126,52,153,250,146,158,248,52,173,163,204,216,39,105,62,237,94,130,44,226,31,242,206,63,251,224,83,190,205,31,100,65,255,0,1,21,58,15,83,
207,127,176,231,76,225,212,175,191,81,248,211,255,0,177,230,227,148,39,222,187,241,110,131,248,87,254,249,20,190,66,127,117,127,239,145,70,129,169,231,223,216,179,49,193,41,78,93,6,64,223,121,7,227,93,
255,0,146,157,149,71,252,4,82,249,75,232,63,33,70,129,169,192,141,5,182,253,229,250,230,131,225,217,36,199,239,177,250,215,127,176,118,0,126,20,187,71,167,233,70,129,169,192,63,135,228,101,218,211,38,
62,134,145,60,59,48,224,206,167,28,125,218,244,13,163,210,140,80,59,51,131,30,28,147,254,123,126,74,113,79,255,0,132,117,207,252,182,255,0,199,43,186,162,128,179,56,113,225,143,250,106,65,246,140,255,
0,141,59,254,17,130,220,23,115,238,19,21,219,81,69,194,204,225,219,194,97,142,119,74,199,253,202,114,248,72,103,239,74,163,218,58,237,168,160,44,206,43,254,17,4,234,26,111,251,226,158,190,17,69,193,223,
112,79,124,32,174,202,138,2,199,32,190,19,94,155,174,54,250,96,127,133,47,252,33,118,228,146,126,209,244,200,255,0,10,235,168,165,113,216,228,191,225,13,182,24,194,92,15,248,18,255,0,133,59,254,16,235,
110,126,75,131,158,163,120,199,242,174,174,138,97,169,203,127,194,31,109,193,17,207,145,255,0,77,7,248,83,199,132,109,67,127,169,159,254,254,143,240,174,154,138,87,21,142,111,254,17,43,67,156,219,200,
126,178,138,95,248,68,108,51,159,176,243,235,230,87,71,69,3,48,87,194,246,99,143,178,176,31,245,212,208,190,22,177,86,44,44,249,245,243,91,252,107,122,147,35,214,128,49,15,134,44,216,130,214,104,79,188,
141,254,52,191,240,140,217,143,249,115,140,255,0,188,236,127,173,109,110,30,180,110,30,162,128,49,215,195,182,192,131,246,88,135,252,9,186,126,116,225,225,251,95,249,244,135,243,111,241,173,109,192,247,
20,223,57,7,87,95,204,80,6,114,232,86,235,210,210,220,127,192,77,42,232,118,203,200,180,182,7,254,185,213,255,0,180,69,255,0,61,83,254,250,20,159,106,135,254,123,71,255,0,125,10,0,167,253,141,111,255,
0,62,182,191,247,232,83,134,145,2,244,183,183,31,72,69,90,251,84,31,243,218,63,251,232,80,110,224,29,102,140,127,192,133,3,43,127,101,199,255,0,60,224,31,246,200,83,134,155,24,24,217,15,253,250,21,51,
94,64,189,102,140,127,192,133,35,95,219,47,89,227,255,0,190,133,0,51,236,11,232,159,247,236,81,246,21,255,0,103,254,248,20,191,218,86,188,127,164,71,255,0,125,82,127,106,90,127,207,116,160,7,45,154,175,
67,250,10,62,200,59,177,166,255,0,106,90,245,243,214,147,251,90,211,254,123,47,228,105,15,82,65,104,160,99,38,147,236,106,122,179,26,96,213,109,15,252,182,95,199,52,223,237,139,63,249,236,63,35,64,236,
201,190,198,158,166,129,103,31,191,231,80,127,109,89,255,0,207,95,252,116,210,127,109,218,127,124,255,0,223,38,129,218,69,175,178,199,233,75,228,39,167,235,85,63,183,45,63,190,223,247,205,55,251,122,215,
177,99,248,80,28,178,236,94,242,83,210,143,41,63,186,42,135,246,253,176,235,191,242,31,227,77,62,36,179,31,196,127,49,254,52,20,169,84,123,69,154,33,16,159,185,143,194,151,203,95,238,138,202,111,20,88,
168,201,149,71,213,215,252,105,135,197,218,122,253,233,144,127,219,69,160,181,135,170,246,139,54,118,129,218,141,163,210,176,127,225,54,211,0,98,110,34,227,254,154,10,175,255,0,11,7,73,86,33,238,97,7,
218,74,11,88,76,67,218,15,238,58,124,15,74,43,136,187,248,177,164,91,169,43,42,202,65,199,202,213,78,95,140,218,92,113,22,216,75,103,24,205,6,171,47,197,63,176,206,234,249,140,113,7,3,59,72,53,96,115,
131,94,72,223,27,225,186,154,72,77,184,242,177,216,243,91,131,226,230,159,246,19,48,140,179,40,228,102,149,205,37,151,98,98,149,224,122,5,21,226,247,191,30,164,89,9,130,24,150,60,240,27,147,75,7,199,213,
231,205,142,63,195,34,131,79,236,156,93,175,202,123,36,164,42,18,199,10,57,53,243,71,199,143,218,58,247,225,79,140,151,78,182,178,130,246,222,88,18,224,60,140,114,65,36,118,250,87,92,255,0,29,6,165,125,
5,154,170,71,28,204,17,176,121,57,56,175,144,191,106,237,101,181,15,20,104,146,177,206,44,2,6,245,195,176,197,115,98,42,56,65,180,125,127,11,100,240,169,152,42,120,216,94,45,61,15,69,187,253,185,47,55,
126,239,65,183,30,251,201,170,43,251,114,106,165,114,116,59,80,113,156,22,53,242,116,151,76,27,131,154,22,115,218,188,71,139,171,220,253,186,159,13,100,150,183,213,215,222,255,0,204,251,87,193,127,180,
129,248,157,174,37,149,214,155,21,148,197,9,89,35,110,14,6,78,107,208,25,174,36,117,242,72,97,217,128,233,237,154,248,247,246,126,188,242,126,35,105,217,63,235,55,39,95,85,53,245,226,169,57,218,239,254,
232,201,6,187,240,245,101,85,93,159,143,113,158,93,134,203,241,208,134,22,28,177,113,78,223,54,78,179,72,138,65,222,72,228,171,226,159,28,130,78,168,63,18,5,87,85,101,59,183,62,220,125,220,96,254,116,
187,147,118,10,121,126,133,178,69,118,31,159,52,77,36,141,11,16,78,213,61,0,32,226,147,206,5,115,135,111,165,48,78,171,149,99,22,59,113,193,252,105,119,178,244,151,98,127,180,62,81,249,158,104,32,88,38,
102,144,242,202,15,247,70,63,90,178,21,27,56,148,147,220,74,9,254,181,91,204,7,7,204,14,63,221,167,164,128,48,34,49,147,253,208,5,49,88,157,49,27,124,169,27,55,251,3,60,125,8,163,112,111,149,163,60,127,
17,20,198,219,26,150,242,156,30,224,191,203,255,0,214,164,91,129,34,147,176,133,199,93,223,254,170,100,142,104,194,231,97,114,7,37,118,240,42,81,47,152,48,171,184,250,138,133,110,131,47,12,79,251,205,
242,154,82,174,205,134,140,134,61,212,226,144,172,57,163,149,183,110,32,227,181,57,100,101,92,3,27,39,113,200,63,90,106,140,125,230,12,59,137,1,205,60,249,74,64,192,13,219,131,76,144,147,123,140,172,113,
231,185,83,140,211,99,153,163,109,187,64,63,239,100,138,95,50,56,216,237,24,245,90,108,152,101,255,0,88,23,208,49,197,4,146,70,226,77,198,75,64,72,63,43,41,63,153,245,166,48,142,57,50,184,67,215,107,62,
223,203,181,17,194,253,88,50,251,171,100,84,202,122,18,85,199,67,129,146,62,160,208,3,163,145,178,68,140,64,236,65,169,60,192,216,59,149,135,163,168,53,1,69,86,32,1,143,65,70,37,221,216,3,223,60,80,73,
39,154,187,152,6,110,189,189,125,169,65,85,24,36,48,235,239,74,172,114,121,207,235,78,242,97,144,241,141,222,184,63,212,208,34,198,216,219,59,24,169,199,102,207,233,77,200,110,60,208,216,244,4,254,148,
158,90,156,16,138,27,251,216,165,101,112,220,228,175,251,60,80,103,97,161,79,221,86,192,24,60,138,116,114,50,159,190,205,245,52,214,8,188,143,51,143,203,20,170,202,202,87,119,203,244,233,64,199,125,161,
87,32,147,183,209,185,197,35,170,253,224,114,15,108,98,148,53,185,0,145,185,177,140,171,96,254,62,180,124,184,220,161,72,207,222,94,40,1,145,160,111,152,124,135,56,218,195,27,171,119,72,143,202,181,99,
221,142,79,53,139,145,209,178,79,210,183,108,191,119,167,238,60,252,164,230,181,167,185,156,182,54,237,245,200,163,88,79,217,145,130,40,4,19,215,222,175,127,194,77,110,220,253,137,79,252,8,127,133,114,
54,209,200,200,128,100,146,42,86,134,88,219,149,97,248,87,65,137,212,127,194,81,7,63,232,75,255,0,125,127,245,169,127,225,40,131,254,124,147,254,250,31,225,92,158,226,27,107,100,30,198,155,230,28,243,
64,206,180,248,154,220,127,203,138,99,253,225,254,20,195,226,200,63,231,198,63,251,235,255,0,173,92,194,183,166,104,234,58,102,128,58,113,226,200,51,255,0,30,49,254,99,252,40,111,22,64,185,255,0,67,143,
243,255,0,235,87,41,208,100,28,31,74,171,117,38,216,93,179,206,40,11,157,136,241,148,12,113,246,72,127,239,175,254,181,13,227,72,151,165,164,95,247,215,255,0,90,188,239,237,1,163,7,230,94,221,42,187,92,
50,244,53,92,168,15,79,255,0,132,214,34,185,251,34,31,248,23,255,0,90,143,248,77,144,255,0,203,162,255,0,223,95,253,106,242,248,239,164,141,129,82,126,149,173,103,169,11,165,31,194,195,168,169,106,199,
69,56,169,29,231,252,38,232,63,229,217,127,239,175,254,181,51,254,19,142,120,183,143,31,239,87,31,184,55,112,79,189,12,71,4,0,7,181,65,191,176,243,59,47,248,77,137,233,108,191,247,209,164,111,27,50,227,
54,241,254,102,184,177,51,6,198,126,90,95,63,119,6,129,251,21,220,235,219,199,140,163,253,76,127,153,164,30,62,63,243,202,63,204,215,11,119,38,213,98,9,170,9,113,38,222,27,53,162,73,156,149,35,200,236,
122,73,241,243,116,242,163,252,205,33,241,243,113,136,99,253,107,205,154,233,179,201,253,42,72,110,100,231,167,226,42,185,81,149,217,233,31,240,157,51,112,177,196,61,216,154,103,252,39,142,51,251,184,
127,12,255,0,141,121,228,247,146,54,11,97,127,221,21,91,237,46,125,205,28,168,92,204,244,191,248,79,100,39,2,56,191,35,254,52,239,248,79,28,168,196,81,231,191,92,87,157,91,94,75,4,153,25,6,146,59,199,
73,51,235,249,81,202,131,153,158,140,190,58,153,179,251,152,253,120,7,252,105,173,227,185,123,36,95,145,255,0,26,243,248,111,165,141,152,169,198,238,61,170,7,184,125,199,156,31,173,28,168,57,153,232,223,
240,158,75,253,200,191,35,254,52,191,240,156,205,143,185,23,228,127,198,188,221,102,126,160,241,83,174,160,219,72,56,62,134,159,42,23,51,61,15,254,19,105,207,72,227,252,143,248,209,255,0,9,165,201,233,
28,127,247,201,255,0,26,243,248,175,164,86,3,204,32,30,253,170,195,93,184,206,31,60,100,115,75,148,124,204,237,207,141,46,191,231,156,99,254,2,127,198,155,255,0,9,196,253,196,121,255,0,116,255,0,141,112,
171,125,35,185,5,206,126,181,27,94,62,227,205,28,168,57,153,223,55,141,231,95,249,229,255,0,124,255,0,245,233,191,240,156,79,255,0,76,255,0,239,154,224,154,225,219,146,77,11,112,71,83,71,42,14,102,122,
0,241,157,203,99,133,255,0,190,105,173,227,43,144,216,37,71,252,6,176,244,187,149,144,129,35,96,99,248,84,84,119,211,197,230,184,145,198,229,232,184,28,126,53,54,67,187,58,15,248,77,46,6,50,202,63,224,
34,155,255,0,9,157,207,247,215,254,249,21,197,92,220,110,101,10,120,3,177,164,142,98,203,212,113,215,154,174,84,79,51,59,127,248,76,46,113,159,48,127,223,34,155,255,0,9,149,215,252,245,81,255,0,1,21,197,
73,116,67,14,120,197,55,207,45,220,138,57,80,115,51,182,255,0,132,202,232,255,0,203,97,255,0,124,138,122,248,190,228,245,148,127,223,34,184,133,152,134,229,184,167,249,135,39,230,205,28,168,57,153,216,
191,140,46,185,253,240,255,0,190,69,52,248,186,239,188,223,160,174,71,205,249,142,30,143,180,43,100,111,233,71,42,14,102,118,13,226,235,157,188,78,115,244,21,23,252,37,151,127,243,240,223,165,114,190,
111,29,119,81,231,16,58,145,71,42,14,102,117,163,197,55,56,7,237,39,57,251,184,166,201,226,171,172,140,92,53,114,166,65,145,243,103,52,121,221,243,71,42,14,102,117,35,196,215,103,145,112,255,0,157,52,
248,154,236,17,254,146,254,157,107,153,55,33,176,23,129,235,72,210,182,72,206,105,242,160,230,103,78,190,37,186,198,69,203,251,252,213,32,241,12,236,185,251,68,132,244,251,213,202,121,205,235,138,60,252,
119,63,157,46,84,62,102,117,63,240,146,93,117,243,228,227,175,204,105,173,226,123,131,214,119,255,0,190,141,115,30,112,231,31,206,129,63,32,116,163,149,7,51,58,111,248,73,46,25,190,89,220,125,88,210,127,
194,69,117,184,98,119,255,0,190,171,158,142,64,217,27,88,28,19,75,145,133,3,171,12,245,163,149,14,236,232,79,136,46,48,63,127,32,255,0,129,26,141,188,65,58,227,51,49,252,77,97,6,218,128,145,212,103,150,
168,60,204,245,230,159,40,174,116,131,196,18,55,222,145,200,255,0,120,211,27,95,145,186,200,248,247,108,215,61,231,12,208,37,61,199,20,249,66,230,250,235,12,196,144,231,24,238,105,235,171,55,33,94,185,
209,41,221,193,167,172,221,9,235,239,74,195,185,191,253,170,251,136,47,199,166,106,54,213,24,31,191,147,89,123,148,183,161,43,156,126,20,205,193,89,65,124,100,81,96,185,176,186,179,47,37,200,52,223,237,
45,199,239,254,181,145,113,42,172,132,3,81,239,3,154,44,23,102,215,246,136,201,27,184,30,244,159,218,92,158,107,27,204,231,145,143,122,95,59,229,234,9,167,96,185,176,186,153,245,166,255,0,105,31,90,200,
243,176,113,156,81,230,2,58,254,180,88,163,95,251,65,185,230,133,190,44,192,103,154,200,243,49,198,234,124,82,110,145,64,32,156,210,52,70,207,218,31,56,207,53,52,114,17,140,156,154,172,170,119,228,211,
152,227,190,107,22,206,200,66,37,223,180,31,90,60,254,245,75,113,247,53,150,222,33,183,109,89,116,232,228,79,56,240,89,155,229,83,232,107,55,43,30,141,44,59,169,240,163,160,55,31,141,52,222,5,234,192,
86,116,186,150,155,107,129,115,168,121,143,253,200,136,3,243,174,119,85,248,147,162,233,140,203,25,249,151,143,148,100,154,201,212,177,232,209,203,234,85,118,140,91,59,9,181,36,183,139,123,49,35,176,80,
73,63,133,115,218,135,142,101,183,44,45,244,187,169,142,56,44,184,21,192,234,127,25,36,220,194,214,5,11,253,233,57,53,139,55,197,205,71,118,87,98,143,64,43,55,84,250,28,62,73,40,235,56,39,234,206,214,
243,198,222,37,184,98,45,236,26,223,211,17,22,53,137,121,226,47,23,76,126,100,187,31,236,199,25,21,134,191,23,181,77,192,3,16,62,235,255,0,215,167,47,198,109,85,126,242,196,121,244,197,79,180,61,152,96,
167,79,225,163,18,91,139,207,18,73,146,241,94,156,158,225,170,178,199,175,202,24,24,46,73,244,96,70,106,244,31,27,175,87,137,33,137,133,94,95,141,81,201,30,94,21,71,255,0,119,52,212,209,173,177,17,218,
138,251,206,125,225,215,35,0,53,189,197,67,187,85,140,146,96,159,208,229,91,21,190,223,25,25,190,228,40,71,161,92,82,47,198,9,89,127,227,209,57,237,138,124,232,171,226,58,211,95,121,131,231,106,11,193,
138,81,159,246,77,66,102,212,55,103,202,148,12,127,116,138,234,161,248,161,115,46,2,216,163,127,186,181,102,79,136,87,70,50,31,73,98,49,255,0,60,79,248,81,206,103,42,149,34,245,130,251,207,63,184,190,
187,142,12,184,101,93,199,169,172,203,173,102,85,95,190,69,108,120,131,94,109,67,79,116,251,41,143,231,44,10,131,129,237,92,45,237,195,15,188,112,113,138,137,77,157,74,210,90,163,160,210,117,137,36,189,
219,184,242,8,235,237,86,255,0,225,36,150,56,100,143,127,203,156,87,51,225,203,145,253,169,24,39,25,200,31,149,87,186,185,40,210,228,231,154,74,122,28,179,138,230,177,180,218,195,57,195,57,92,247,237,
89,242,235,76,170,64,115,159,92,214,59,93,110,170,147,204,121,61,171,57,77,154,70,40,234,60,63,173,59,107,246,89,56,196,202,71,62,249,174,47,246,145,216,205,163,205,184,121,170,215,16,149,35,176,147,63,
214,173,233,215,70,29,74,218,64,113,182,69,63,145,170,95,180,140,109,182,193,192,249,86,234,229,127,54,6,185,235,75,154,12,237,203,125,220,202,147,94,127,145,225,174,199,175,64,106,88,148,191,32,224,85,
86,111,148,253,105,241,190,112,51,197,120,204,253,66,18,119,61,63,224,204,119,22,254,58,209,39,88,217,162,107,133,64,192,112,115,198,51,235,95,100,180,143,184,124,210,68,255,0,220,25,39,249,98,190,41,
248,73,171,61,167,138,180,200,37,44,214,111,114,133,208,30,135,35,12,62,135,21,246,175,205,31,250,167,80,51,247,95,250,10,245,48,91,51,242,30,62,139,250,205,25,53,246,95,230,76,179,36,159,125,152,184,
234,14,5,59,230,200,59,18,69,247,63,210,163,89,153,134,28,167,251,177,140,17,82,71,32,143,5,93,185,254,38,99,207,227,94,153,249,75,66,199,49,88,207,154,35,80,15,28,96,15,106,116,119,33,147,150,140,175,
78,205,249,10,4,210,51,103,118,195,220,146,95,249,211,10,188,146,29,223,57,237,251,172,1,248,244,170,34,196,143,36,76,79,239,149,91,174,118,18,127,33,72,175,140,143,56,103,174,229,66,15,243,160,111,140,
97,162,12,127,217,76,231,242,36,211,252,193,147,186,8,129,238,84,48,111,214,144,172,73,27,194,173,182,65,52,132,142,236,121,250,84,161,132,109,145,35,42,227,141,199,36,84,94,92,114,1,135,144,123,175,255,
0,170,156,109,226,85,83,60,32,147,210,66,153,221,248,211,32,114,221,5,109,164,172,188,228,240,1,254,117,54,232,136,59,66,168,62,249,253,5,87,102,133,84,6,136,190,62,233,206,223,229,78,13,22,236,198,190,
91,17,207,76,138,162,90,28,216,25,3,247,107,254,233,254,102,147,118,228,32,147,248,247,164,91,153,145,176,236,140,61,75,143,241,169,35,184,89,23,253,102,125,24,63,74,8,5,86,97,149,200,255,0,101,148,83,
149,225,140,237,115,146,220,97,185,166,178,134,232,50,127,218,198,106,85,102,49,241,228,241,217,254,83,248,115,65,32,235,26,114,6,220,115,242,241,75,187,204,254,18,254,234,49,74,166,36,1,128,216,79,117,
114,217,252,51,82,110,18,15,158,66,87,217,112,40,17,25,93,172,11,96,127,189,215,243,165,38,54,24,140,111,231,149,206,105,112,23,129,34,178,255,0,180,51,70,241,159,153,216,123,109,56,160,150,40,100,28,
24,178,190,194,133,59,191,135,191,181,38,70,236,157,199,251,191,49,92,126,25,169,21,134,56,82,237,254,246,41,8,70,98,0,45,35,47,227,214,149,126,108,29,251,191,28,26,69,98,200,126,81,34,247,226,129,247,
121,198,59,30,180,201,20,43,198,126,67,199,231,79,195,117,200,30,171,140,230,152,74,171,127,173,97,159,246,51,81,176,218,192,171,15,92,145,159,235,64,19,153,25,91,42,15,182,71,20,51,59,96,237,252,58,17,
81,239,217,215,105,254,70,141,193,122,124,189,253,41,1,63,152,170,70,72,111,108,98,186,219,125,60,159,12,37,200,24,12,141,129,248,19,92,114,176,101,200,2,69,254,245,119,51,106,104,222,27,181,129,56,9,
110,160,255,0,188,69,107,2,36,105,248,91,77,132,163,201,34,134,43,133,80,123,113,201,171,247,90,61,171,72,199,204,218,122,237,198,107,156,181,212,141,171,13,167,6,175,67,226,41,10,186,110,236,78,113,207,
74,218,230,69,93,66,214,40,212,186,62,71,97,142,159,90,193,155,25,36,28,159,165,79,173,248,146,219,75,209,207,218,231,72,35,221,185,164,145,177,244,31,206,184,27,143,140,94,25,179,98,173,126,100,11,215,
98,18,43,166,157,10,181,85,225,22,206,121,213,132,29,164,206,196,76,21,191,250,212,231,152,14,84,238,252,43,207,110,190,55,120,101,129,49,73,114,199,25,0,69,201,253,106,177,248,235,225,213,0,109,186,231,
183,150,56,237,235,93,63,80,196,255,0,35,50,250,205,31,230,61,28,185,110,216,170,186,131,255,0,162,73,158,56,174,13,126,59,120,127,203,87,17,93,149,97,145,242,174,113,235,140,230,179,53,239,143,154,23,
217,68,113,218,221,59,49,244,3,165,82,203,241,79,236,49,125,106,151,243,29,183,218,145,85,81,147,119,190,105,178,78,135,110,49,140,96,131,94,68,255,0,180,6,140,191,242,229,117,207,78,87,252,106,165,223,
237,13,164,172,18,20,177,185,220,23,140,149,24,61,170,222,95,137,74,252,134,144,175,78,114,81,76,245,214,186,79,239,174,71,79,152,84,145,220,48,147,114,100,17,212,215,201,58,151,198,75,104,227,18,188,
19,6,32,179,50,201,212,86,150,129,241,250,45,47,236,210,201,28,147,43,62,4,81,204,25,177,199,222,29,171,139,234,248,155,235,3,235,94,3,9,24,222,53,181,244,62,175,254,208,145,151,239,168,52,213,213,37,
82,65,144,16,120,236,107,194,83,246,142,211,39,111,150,194,72,151,29,100,148,117,199,176,174,95,197,159,180,81,243,44,222,11,70,138,37,203,182,217,136,207,111,74,217,224,171,242,221,68,243,169,83,230,
168,161,82,86,93,207,167,99,213,29,88,135,124,143,165,36,122,162,172,153,121,27,131,156,40,237,95,28,71,251,66,107,49,221,110,181,183,119,40,119,41,89,139,99,30,163,189,123,23,131,190,38,120,159,199,16,
164,131,69,180,182,231,6,89,164,101,13,199,80,58,154,199,216,84,143,241,21,190,103,110,35,7,203,14,122,19,231,239,161,236,210,106,159,104,147,46,236,70,48,6,42,237,141,156,151,16,200,234,188,46,57,205,
114,246,243,63,151,23,153,143,55,3,113,81,133,207,124,123,86,156,122,212,246,240,188,81,177,80,255,0,120,103,173,78,219,31,63,38,250,154,6,206,69,124,180,76,203,212,149,169,45,173,94,105,4,72,165,164,
99,129,193,172,79,237,43,142,155,152,15,64,106,212,58,245,212,56,43,35,100,116,61,197,45,73,52,117,107,57,52,242,86,101,95,160,60,214,83,73,25,145,66,166,211,158,164,230,155,121,168,205,121,254,177,139,
15,115,85,241,187,4,30,105,146,116,22,182,175,117,29,193,66,165,226,143,121,25,228,143,111,90,168,209,72,23,32,97,187,28,26,163,29,213,194,183,202,204,56,231,20,246,184,184,61,25,129,164,81,163,28,44,
21,114,219,178,55,28,2,49,237,85,246,180,142,113,206,14,42,22,150,86,11,181,156,17,214,154,155,198,237,225,201,39,118,86,152,139,113,72,171,189,73,228,30,120,166,70,190,98,146,15,25,197,64,170,237,33,
127,46,78,185,244,169,163,50,199,156,68,221,114,50,105,0,197,148,6,34,157,246,128,170,203,158,188,82,71,12,138,229,188,179,207,90,115,67,51,51,19,30,236,247,205,80,132,142,96,164,158,104,121,139,49,42,
248,166,253,150,67,252,56,167,45,139,150,1,187,210,16,245,108,140,151,197,6,108,156,103,52,231,182,145,219,160,85,236,5,54,59,41,27,56,35,20,12,4,188,211,183,117,36,226,148,88,191,76,140,84,159,217,239,
253,225,143,106,0,131,204,238,120,167,173,192,85,32,138,148,105,172,173,141,212,239,236,246,56,4,140,253,40,184,16,53,193,108,109,29,40,19,30,227,31,67,86,14,151,143,226,34,156,52,205,167,59,136,252,40,
184,16,121,189,169,124,205,189,186,247,171,75,164,175,4,28,125,5,54,101,180,89,188,167,157,35,149,71,221,60,19,198,106,92,146,220,118,190,196,2,98,120,205,61,100,10,217,61,61,186,213,180,210,247,168,228,
254,84,239,236,208,163,150,52,238,43,20,86,224,238,231,145,78,105,131,182,70,84,122,122,85,136,35,181,187,96,176,220,36,141,253,213,35,53,47,246,72,57,231,31,141,10,73,236,55,22,183,51,252,208,189,241,
74,38,44,7,53,162,52,200,187,184,29,185,32,14,120,165,254,205,135,129,185,78,70,126,86,7,249,82,230,91,5,153,157,230,96,244,227,218,145,166,244,227,62,181,166,52,216,7,36,159,206,148,88,66,56,221,143,
198,170,228,153,94,97,61,121,252,105,119,245,224,254,53,166,182,182,252,99,25,167,181,140,29,79,3,235,74,229,25,94,102,121,35,242,164,243,1,234,48,43,91,236,112,42,131,180,99,181,57,109,237,149,65,42,
160,209,113,25,43,51,46,74,252,198,156,183,18,96,1,145,244,21,168,209,219,46,57,80,125,205,36,107,106,205,133,49,147,216,111,20,92,102,97,154,66,152,39,219,154,143,116,153,228,102,182,216,218,171,114,
97,200,245,35,52,25,172,163,192,47,8,56,245,2,139,129,141,251,194,51,210,143,222,114,112,65,173,31,237,45,48,28,27,203,85,111,238,153,19,63,206,145,181,77,62,54,0,223,90,171,30,153,149,51,252,233,221,
140,161,243,240,64,111,202,156,170,251,178,65,252,106,203,235,250,84,108,67,106,150,72,65,228,25,208,127,90,122,235,218,94,51,253,169,102,120,207,252,124,39,248,210,184,16,109,113,131,130,91,214,154,209,
75,201,32,159,175,90,155,254,18,77,32,178,171,106,182,65,155,160,251,74,115,250,212,15,227,47,15,70,197,78,177,96,29,122,175,218,147,63,206,141,64,70,134,94,164,17,70,201,56,198,127,17,77,143,199,94,26,
145,114,218,222,156,57,199,205,118,159,227,76,127,136,62,23,140,243,174,233,152,255,0,175,196,255,0,26,53,2,111,37,248,63,49,252,41,76,114,103,238,19,248,26,133,126,33,120,92,169,113,174,105,187,71,113,
116,135,250,211,79,196,143,10,141,217,241,14,152,54,240,127,210,87,143,214,141,70,90,88,228,199,221,63,247,206,41,201,4,188,252,191,94,43,61,190,41,120,67,118,197,241,30,154,239,232,179,138,27,226,175,
132,161,80,239,226,11,16,173,247,73,115,254,20,106,104,141,85,181,152,129,132,4,123,211,225,179,155,204,95,147,28,142,149,148,223,21,124,35,26,134,255,0,132,143,77,231,210,97,159,202,146,223,226,215,132,
238,164,84,139,196,22,44,205,140,12,145,223,30,149,46,230,168,235,213,61,169,222,89,199,3,21,15,218,2,255,0,203,65,159,199,252,42,150,173,174,91,104,182,19,94,93,77,229,197,24,201,56,235,236,61,235,25,
59,29,84,161,58,146,80,130,187,102,55,196,47,23,69,225,29,33,156,48,55,115,13,177,38,121,250,254,21,224,218,79,138,39,143,86,154,127,53,140,140,11,110,61,115,89,254,57,241,149,199,138,181,137,174,166,
110,58,71,30,120,69,236,5,115,218,77,240,26,128,207,0,171,15,210,188,218,149,46,244,63,105,203,178,136,224,48,109,77,94,111,127,242,58,157,67,196,119,115,40,102,184,221,184,253,213,61,62,181,141,46,160,
237,130,88,182,123,230,179,37,186,120,221,240,197,115,212,103,181,86,55,27,216,40,235,88,57,29,180,210,138,178,70,187,223,22,32,110,250,211,100,186,101,220,119,103,7,138,201,107,130,188,103,165,42,205,
187,161,192,247,53,28,198,230,154,222,103,169,165,251,96,199,39,53,155,231,5,108,22,252,141,54,107,133,25,8,120,163,152,77,154,159,104,39,144,125,170,197,188,98,66,55,204,168,51,222,176,99,145,152,227,
159,90,79,181,156,154,174,99,54,217,221,88,127,99,219,200,13,204,239,40,234,66,240,43,168,211,252,89,225,45,61,6,237,36,220,63,247,153,201,175,31,23,94,172,105,126,216,120,42,106,212,142,74,148,85,79,
137,191,188,246,255,0,248,91,154,53,160,197,190,139,26,250,100,227,21,20,191,28,19,144,154,116,42,49,142,78,127,10,241,55,186,114,192,28,241,81,73,112,91,60,154,57,153,207,245,60,63,111,196,245,11,239,
138,25,12,208,89,65,14,238,171,183,34,188,251,90,213,190,221,117,36,216,85,46,115,133,24,21,150,243,113,247,185,247,168,230,27,98,12,92,18,78,2,142,191,90,151,38,107,24,194,31,10,53,252,55,113,255,0,19,
139,113,156,229,177,77,214,36,68,186,153,23,130,174,65,199,74,167,225,169,177,175,89,246,253,224,7,243,163,90,109,154,173,234,246,18,53,52,244,57,166,191,120,87,243,189,106,9,164,61,13,70,100,249,177,
239,76,102,247,168,185,170,22,57,138,204,132,158,140,15,235,90,95,180,76,126,102,143,4,219,122,94,19,159,247,163,6,177,29,190,110,181,191,241,193,126,213,225,21,148,18,72,146,221,255,0,56,64,254,117,19,
214,44,211,8,249,115,10,15,204,249,220,171,49,32,100,159,74,21,89,91,12,48,71,99,214,166,142,73,44,230,138,101,225,149,183,41,247,7,53,107,94,241,13,215,138,53,89,47,238,214,49,59,170,134,242,215,104,
56,0,103,3,189,121,29,15,212,99,126,100,173,161,171,224,187,131,14,191,96,227,160,153,51,255,0,125,10,251,209,85,221,1,89,217,112,7,202,143,143,211,252,43,243,251,195,242,121,122,157,179,238,193,89,20,
254,181,247,229,146,181,197,141,180,165,72,13,18,144,133,112,58,118,175,75,3,187,71,230,188,127,31,119,13,63,241,126,133,147,187,157,222,107,54,57,99,198,127,30,180,158,91,67,143,222,4,13,252,4,51,3,244,
53,36,73,114,184,30,66,201,24,239,184,22,31,78,121,171,42,210,40,59,75,15,81,142,181,235,159,141,178,33,102,118,238,108,162,14,165,105,86,75,81,133,218,210,99,169,47,79,219,151,31,184,116,61,4,152,200,
20,224,170,205,180,157,205,253,240,156,253,59,83,32,72,190,207,141,129,68,74,120,218,65,39,244,233,67,91,197,30,28,70,160,175,79,47,113,252,123,212,170,178,47,42,178,15,95,152,5,52,166,25,219,4,129,16,
199,86,124,131,248,10,100,149,153,75,115,185,138,117,233,156,83,227,84,67,247,153,88,241,140,145,154,157,99,3,33,95,105,20,159,186,251,173,201,239,183,35,245,160,66,166,84,231,230,69,60,28,160,63,143,
94,148,153,136,49,3,124,135,253,150,11,250,82,110,75,118,193,145,91,7,248,151,31,133,90,50,238,80,35,144,177,254,234,244,252,233,144,200,62,77,223,234,164,83,239,207,244,167,236,126,166,18,135,187,16,
1,250,211,188,183,153,113,180,153,23,238,237,147,173,51,236,171,184,22,121,50,122,174,127,196,80,102,193,215,203,195,121,234,197,184,219,183,25,252,105,202,210,41,7,110,83,161,1,115,250,82,170,60,31,40,
249,71,80,122,154,70,96,24,16,204,91,57,218,56,207,226,105,136,124,114,64,170,67,72,216,244,100,32,254,89,205,61,124,213,147,228,136,253,100,56,4,83,22,96,178,0,185,7,28,158,79,235,79,0,231,12,86,65,156,
253,254,159,202,145,36,158,123,54,9,102,244,242,213,65,207,235,78,243,147,163,219,200,63,222,142,163,98,99,201,86,85,62,156,83,150,65,192,98,202,221,185,224,208,72,237,226,100,1,6,7,95,152,244,168,119,
63,32,21,92,119,245,21,54,193,184,16,178,6,234,56,200,169,77,195,200,164,59,54,125,118,142,104,36,131,104,221,147,140,253,105,74,170,140,231,127,175,53,18,147,207,207,143,168,164,207,253,52,231,184,35,
131,82,43,18,225,55,14,118,158,128,210,225,89,72,5,115,244,193,252,234,37,96,20,252,187,135,212,209,193,193,85,25,239,64,18,174,229,232,193,79,231,159,210,128,238,171,157,219,135,251,74,50,42,33,187,169,
106,50,203,212,110,250,10,46,22,39,86,50,110,225,88,245,230,182,22,251,118,152,70,48,6,213,253,107,2,57,34,110,54,178,144,125,57,30,213,114,22,255,0,64,113,159,227,95,231,90,192,206,102,184,188,61,105,
246,247,65,153,135,115,197,102,43,116,231,20,235,86,6,101,249,179,243,86,137,234,67,90,30,29,251,74,235,179,139,232,52,244,149,227,64,138,66,142,132,240,77,120,113,213,29,161,242,247,183,150,197,138,227,
183,28,226,189,51,246,150,156,143,25,131,156,237,140,124,189,186,45,120,227,54,88,141,219,217,120,192,236,58,243,95,164,229,169,71,13,11,31,43,137,214,163,54,219,88,116,149,164,39,112,40,169,150,235,192,
246,247,171,54,247,162,125,167,33,78,221,191,55,203,135,57,197,115,240,176,27,3,50,182,88,169,108,96,115,208,126,21,209,248,23,194,39,197,90,156,150,79,57,182,87,66,200,204,185,60,28,240,51,214,189,57,
212,141,56,185,75,100,114,70,14,78,200,158,25,118,65,11,33,118,216,187,254,83,192,0,244,231,223,191,181,114,222,50,213,37,177,210,68,177,72,192,169,36,184,62,231,32,125,107,222,244,223,129,51,60,108,96,
213,16,249,160,163,249,145,99,3,29,56,62,181,230,95,29,190,14,235,58,31,133,90,225,188,155,136,208,172,106,98,114,25,152,158,48,61,48,13,121,223,218,56,105,175,118,122,157,113,194,213,140,213,214,135,
139,143,22,48,209,195,72,124,203,130,190,97,201,249,179,232,61,186,86,21,199,138,239,167,147,203,105,75,36,132,19,146,63,165,101,120,139,193,250,247,135,99,73,117,77,58,230,201,36,193,70,149,72,13,244,
53,128,215,82,66,219,246,157,202,114,9,233,92,206,179,146,209,232,123,84,169,198,45,59,29,165,229,194,95,105,198,3,114,226,86,124,253,223,148,47,215,175,90,130,242,37,242,127,208,166,120,202,15,152,51,
113,245,21,145,103,171,37,212,108,118,124,202,1,57,110,42,235,234,73,229,238,49,146,92,237,199,3,235,92,46,118,62,150,52,225,89,92,172,222,33,188,179,249,90,233,179,129,142,78,106,238,146,218,183,137,
166,72,160,127,53,179,131,187,255,0,213,210,178,110,44,226,186,27,136,195,118,25,237,94,193,240,199,195,176,232,90,89,55,49,200,102,153,188,207,49,112,120,244,197,113,98,241,139,15,78,253,78,236,6,90,
241,21,185,101,240,163,67,192,222,19,127,9,147,45,192,134,230,239,204,220,178,12,178,168,192,224,116,247,175,109,208,188,77,254,138,210,72,233,13,223,250,212,11,192,198,114,127,76,87,156,94,234,154,94,
151,99,230,203,52,157,114,35,217,203,26,229,110,60,73,119,173,94,40,182,12,1,1,85,83,142,43,229,127,121,138,151,60,217,246,143,216,224,227,236,169,175,145,234,222,56,241,246,177,29,197,189,197,150,185,
52,118,242,41,243,33,131,25,67,158,185,3,161,199,126,149,135,63,143,188,99,105,166,253,166,45,98,234,104,0,31,116,110,35,62,164,142,43,55,77,208,101,212,52,185,150,89,24,220,227,112,142,62,167,7,39,244,
6,189,11,193,186,182,137,162,233,178,88,77,182,91,171,148,100,95,57,139,35,110,24,94,63,31,210,189,106,50,195,168,218,78,231,230,217,182,30,181,58,247,167,20,147,212,224,109,126,43,120,190,111,147,251,
66,107,132,97,128,146,40,206,126,184,174,179,195,243,124,75,241,68,100,105,255,0,218,23,38,53,50,52,80,174,214,216,49,156,122,245,250,215,156,248,145,181,47,183,41,211,238,76,49,49,126,25,130,16,235,159,
151,62,188,87,121,240,103,227,34,120,55,200,100,13,28,233,39,153,45,192,36,177,36,99,7,212,99,181,107,42,74,215,166,238,120,113,156,175,106,138,197,61,103,198,159,16,188,30,233,111,119,119,125,106,15,
221,91,132,5,143,62,164,30,107,42,127,139,62,40,147,247,144,107,87,78,202,192,121,111,133,60,251,10,246,47,143,31,23,180,223,27,120,25,46,132,17,69,168,149,85,33,57,27,179,201,3,156,100,99,173,124,207,
160,92,27,175,17,233,197,198,225,246,136,203,31,96,192,215,50,122,92,232,182,167,168,233,190,34,248,145,226,116,186,184,177,58,157,211,68,3,52,86,168,216,141,70,50,196,1,210,159,21,239,196,223,51,112,
125,66,46,227,123,133,86,250,100,245,174,165,188,111,170,217,219,234,86,250,110,175,58,90,220,91,58,179,70,54,143,186,192,16,58,224,103,138,242,216,117,139,54,148,51,77,35,41,17,228,44,108,122,4,201,25,
244,218,223,157,100,167,114,220,44,118,186,214,163,241,62,214,51,123,9,213,141,180,48,197,230,249,31,188,10,197,112,73,11,208,103,190,59,143,106,131,195,254,52,241,28,186,108,215,122,183,137,245,75,3,
29,216,179,242,86,45,204,24,174,114,192,224,140,86,165,159,138,174,44,252,50,210,219,234,82,217,201,35,167,240,146,207,186,37,33,113,255,0,1,61,125,43,7,197,31,17,47,252,43,226,251,216,44,101,26,136,185,
150,61,74,121,174,182,238,125,209,41,101,39,217,139,115,244,161,74,236,28,44,105,216,248,179,196,15,175,93,233,23,126,49,191,142,242,59,163,109,20,118,209,121,187,135,247,206,122,14,71,235,86,124,59,170,
248,175,87,44,147,248,179,80,73,94,234,107,88,158,4,15,31,238,240,11,179,28,96,18,70,61,115,85,252,3,161,157,119,68,212,53,173,173,27,235,55,83,51,73,31,205,36,49,111,97,180,191,80,185,4,100,122,138,225,
180,223,137,81,248,107,79,159,76,251,16,186,138,27,215,184,183,219,112,64,86,7,229,221,143,190,50,7,215,20,249,147,37,198,196,247,223,21,252,99,103,113,44,77,226,43,160,241,187,70,193,100,238,167,7,249,
84,107,241,103,197,147,41,47,226,75,241,129,218,83,94,127,113,118,247,151,83,220,73,143,50,87,50,54,63,188,78,79,243,173,205,35,71,183,190,208,245,107,231,153,144,217,219,35,162,168,206,231,50,170,224,
250,12,55,245,173,52,51,177,208,63,197,175,21,42,175,252,84,58,131,30,249,157,177,215,235,72,255,0,22,188,84,216,35,196,55,204,51,141,190,115,115,92,255,0,134,255,0,179,111,174,217,117,8,46,46,220,168,
72,109,173,112,173,43,147,140,19,219,143,106,131,198,90,109,183,135,252,67,115,103,103,43,75,10,5,225,152,51,70,197,65,100,36,112,74,146,71,30,148,93,21,99,167,111,139,30,41,184,152,152,245,221,65,20,
144,2,253,161,136,20,94,252,84,241,41,186,144,38,187,168,44,65,136,249,110,24,103,245,174,59,69,95,58,240,249,140,21,98,141,230,35,61,118,169,53,26,98,105,0,7,46,199,1,115,147,64,88,237,215,226,63,137,
36,181,243,78,189,169,110,71,10,71,218,31,156,131,223,62,221,61,234,164,159,18,60,74,202,49,175,106,71,29,127,210,159,252,107,175,240,175,236,235,227,47,17,91,206,246,186,5,196,143,11,236,38,71,84,143,
245,57,39,175,74,205,241,31,192,127,27,104,183,210,90,205,225,235,145,32,81,38,33,93,227,105,56,7,130,105,115,68,124,172,192,79,136,222,38,111,151,251,119,82,57,255,0,167,151,63,214,150,63,136,30,32,145,
142,117,221,75,112,29,238,159,183,227,89,94,34,209,117,31,8,93,160,146,222,226,204,72,54,143,180,160,5,136,3,119,29,48,9,171,158,23,77,10,93,26,242,226,244,93,201,170,192,234,209,67,11,5,89,20,144,14,
56,60,142,79,62,148,238,158,196,242,178,89,254,32,235,237,180,29,111,80,39,57,63,233,82,103,249,210,47,143,245,230,39,58,214,161,158,191,241,244,255,0,227,89,126,43,190,177,184,109,60,88,66,109,210,59,
93,146,35,253,241,39,153,33,59,142,6,78,10,254,24,29,171,34,70,11,28,101,73,37,134,15,215,252,226,158,130,177,214,55,143,53,214,203,73,173,95,176,39,24,251,75,255,0,141,105,219,252,96,241,6,159,13,181,
161,188,146,85,140,238,86,153,183,55,39,56,36,242,120,174,34,196,71,36,193,94,226,20,42,9,204,164,133,206,51,140,143,166,43,62,250,233,164,117,99,213,171,57,40,203,116,105,27,163,210,117,79,26,107,119,
151,151,47,107,171,221,124,133,155,202,142,225,192,218,57,36,12,244,3,211,210,178,173,252,113,173,187,144,250,173,227,224,19,243,92,191,203,239,214,185,152,239,141,181,196,23,17,49,18,46,31,63,78,213,
18,223,71,39,155,180,121,121,108,149,29,62,131,218,158,130,182,167,168,216,252,103,241,30,173,107,123,166,11,148,95,180,91,180,102,109,164,50,0,67,110,82,188,131,133,35,62,132,215,47,113,226,205,99,228,
35,87,186,49,146,70,239,180,62,50,58,142,189,107,143,179,187,123,123,194,81,176,216,97,215,25,200,34,173,37,244,113,219,73,28,132,148,114,8,246,97,223,245,197,68,99,24,104,138,149,229,185,216,232,255,
0,16,53,141,18,234,45,65,111,230,156,33,32,67,52,172,202,255,0,80,79,78,149,177,174,252,76,213,60,83,103,10,155,150,182,242,228,100,85,141,202,240,66,158,221,121,6,188,214,234,242,41,24,152,193,88,177,
133,12,114,64,166,71,117,186,55,92,255,0,30,65,239,71,42,230,230,26,109,70,199,87,105,173,107,55,87,6,222,61,74,229,31,105,108,53,195,40,249,65,62,181,89,188,77,168,51,101,175,174,88,131,247,140,205,254,
53,142,99,150,242,221,174,20,22,242,192,18,125,58,3,244,237,80,197,112,35,220,73,231,110,71,215,252,255,0,42,218,230,92,167,99,161,248,189,108,150,241,175,141,213,219,188,123,97,34,225,215,99,103,150,
224,255,0,58,173,127,174,94,165,203,127,167,220,77,19,140,163,25,137,37,73,227,119,60,31,106,229,93,155,10,122,134,233,79,89,54,227,36,230,141,7,99,165,254,216,212,96,117,138,89,238,34,32,6,10,206,195,
229,35,32,227,208,131,159,198,156,117,73,238,36,97,37,220,163,29,247,177,31,141,100,221,41,142,232,162,221,37,240,33,73,153,51,143,186,56,249,128,60,116,252,43,107,79,240,126,179,174,175,153,167,104,183,
215,49,96,41,104,96,119,92,227,4,231,30,163,53,156,170,70,59,179,72,211,148,182,68,176,219,106,109,243,69,21,196,138,6,9,10,213,52,16,94,125,158,59,136,150,229,145,139,12,198,140,66,224,12,243,248,254,
149,216,120,31,195,30,37,240,174,174,218,222,165,101,113,99,101,4,114,137,158,239,49,227,49,182,56,56,39,230,35,167,122,155,71,241,102,157,161,232,62,19,189,186,212,174,96,146,221,174,30,75,11,85,220,
178,143,52,156,62,79,25,207,126,162,146,171,25,108,57,83,148,126,35,130,88,117,107,165,107,136,173,174,46,16,131,251,197,141,138,241,198,114,7,106,207,125,66,107,121,25,12,203,33,232,89,78,71,224,107,
213,252,47,169,201,172,120,123,72,138,123,72,83,73,68,184,75,155,213,190,40,240,174,231,111,153,1,24,60,140,112,115,94,46,168,242,221,124,177,238,45,209,82,171,153,117,35,145,244,52,47,47,72,186,127,155,
118,236,124,203,244,164,143,80,104,246,55,35,159,189,212,212,210,120,91,89,151,50,166,145,120,241,15,226,22,238,71,231,138,143,251,22,226,60,137,128,129,212,3,228,203,149,60,253,122,83,231,139,234,87,
179,146,221,18,94,106,22,237,111,110,32,89,86,112,15,159,35,56,96,199,60,99,211,138,174,186,139,171,103,121,98,70,15,38,169,99,201,152,69,43,236,80,216,36,12,226,175,216,69,30,161,121,111,96,147,219,192,
36,147,31,104,156,96,115,211,39,176,167,115,51,120,120,127,89,154,75,24,78,145,50,189,226,238,128,42,31,222,140,103,35,240,230,163,214,52,253,83,195,18,249,23,150,178,90,121,170,8,87,31,120,100,247,239,
248,87,161,120,115,72,186,212,188,103,225,171,43,121,63,180,211,77,211,90,43,201,108,223,116,104,204,179,0,55,244,206,25,71,227,94,169,161,252,12,142,225,180,79,180,92,111,182,211,94,89,68,19,15,56,187,
56,29,78,64,1,74,131,128,58,215,29,76,85,58,110,205,157,176,194,206,106,233,31,48,106,22,147,104,243,8,47,162,150,41,153,22,69,83,198,20,140,131,130,59,241,80,52,225,19,119,156,37,102,224,0,57,94,7,95,
110,127,74,250,155,226,55,236,241,107,227,11,229,191,143,88,251,21,216,136,70,67,69,189,95,25,193,63,48,197,120,7,143,190,11,248,139,192,138,215,83,162,95,233,234,113,246,171,82,89,87,253,225,140,175,
212,241,239,69,60,101,42,143,150,250,149,44,29,88,171,216,227,229,186,8,192,163,99,212,10,31,83,145,139,16,199,12,114,86,168,114,25,121,193,239,75,28,83,221,56,142,222,54,149,137,192,88,212,147,249,10,
236,230,72,228,81,109,217,23,160,212,25,100,7,165,105,106,51,27,120,225,84,153,101,140,174,229,101,57,3,219,216,211,35,240,78,183,38,158,110,63,179,111,131,110,193,140,89,203,156,127,123,59,113,138,197,
188,142,234,205,132,51,197,36,38,62,139,34,149,35,240,52,123,72,189,153,167,179,146,232,91,91,239,152,243,215,222,181,116,59,227,29,229,171,145,191,247,169,198,113,159,152,113,88,22,111,31,217,103,153,
166,81,58,149,84,133,144,146,224,231,36,30,131,24,31,157,58,218,114,179,32,206,126,96,122,227,189,41,75,66,226,143,209,217,20,249,172,1,207,53,243,231,198,175,136,11,171,95,127,102,89,75,155,75,86,59,
155,179,191,174,125,43,214,126,46,120,137,60,29,225,153,228,73,148,222,92,19,20,32,55,79,86,252,43,228,123,219,231,145,164,102,147,44,221,121,228,215,141,94,165,189,212,126,171,194,57,74,168,222,58,170,
219,72,255,0,153,21,213,214,230,251,213,29,132,133,175,161,85,201,102,96,2,142,249,237,84,165,184,231,147,192,168,237,174,54,221,70,123,238,24,175,62,231,233,245,161,238,51,107,82,89,108,110,37,130,100,
104,100,83,130,174,48,71,122,166,210,21,231,61,121,165,212,175,30,238,229,228,144,238,115,193,53,72,200,120,25,207,106,134,207,158,141,237,169,115,206,198,123,251,210,249,135,28,158,42,154,201,219,53,
48,111,147,112,110,79,240,210,53,39,89,148,171,2,191,67,154,145,89,72,251,195,61,113,84,68,133,122,156,83,188,204,116,35,154,46,77,137,252,242,173,144,77,52,201,220,26,131,119,189,33,124,211,185,54,39,
243,56,62,244,130,109,164,26,174,172,79,189,56,31,90,174,99,38,139,115,92,44,146,51,46,224,189,179,214,160,51,109,239,80,22,59,169,164,156,250,209,204,103,98,202,50,60,128,59,109,207,241,122,83,46,150,
72,118,164,135,112,198,85,129,200,35,218,170,179,109,166,60,204,200,20,156,133,237,75,152,158,83,75,67,144,174,177,102,71,252,245,95,231,87,124,82,4,90,245,250,143,249,234,107,27,75,155,110,161,110,195,
180,138,127,90,214,241,140,135,254,18,43,225,142,172,63,149,82,122,28,213,23,239,23,161,144,24,114,77,53,216,238,235,81,110,199,29,61,169,25,183,47,189,75,52,72,55,237,96,122,156,244,53,212,252,85,101,
186,248,114,92,245,104,45,92,99,182,6,63,165,113,210,99,117,117,62,56,111,59,225,160,254,239,216,162,255,0,199,101,97,82,246,98,167,238,226,232,75,251,200,249,233,183,59,5,30,184,168,190,228,152,60,17,
82,78,187,114,67,114,15,74,133,114,205,239,154,242,89,250,188,119,54,116,151,31,106,143,248,121,235,95,124,248,102,225,110,124,61,166,48,44,3,218,199,157,163,35,149,28,243,223,233,95,0,105,173,182,117,
56,232,107,239,63,135,251,110,60,19,161,185,220,197,173,35,35,102,65,200,24,245,175,67,3,241,180,126,123,199,144,190,22,132,187,55,249,27,109,9,124,13,164,50,255,0,16,221,143,231,138,114,218,60,124,11,
184,64,61,20,71,150,250,117,167,249,83,170,114,102,0,119,102,83,143,192,26,106,43,12,170,74,206,123,171,252,162,189,195,241,50,120,237,148,46,211,114,175,32,60,172,136,84,159,196,26,150,55,117,200,51,
70,192,118,112,64,253,9,168,161,89,85,127,119,108,228,143,250,106,31,21,33,182,243,62,118,182,152,14,255,0,117,113,250,211,51,104,95,57,27,230,40,173,180,224,16,75,126,157,69,75,27,71,35,98,52,96,125,
87,189,53,35,221,141,136,177,201,143,189,140,146,61,58,83,255,0,120,72,47,211,208,156,80,77,137,25,66,228,51,21,61,67,42,224,211,252,182,108,171,109,7,251,204,160,126,52,209,180,96,132,11,158,155,90,157,
24,151,149,25,111,65,212,211,33,141,27,99,27,78,217,79,112,48,7,227,79,142,67,140,42,227,29,137,32,126,116,240,195,164,150,209,239,29,55,166,13,75,150,43,193,242,147,211,28,83,33,141,86,37,112,232,192,
244,194,49,227,233,73,228,141,167,108,165,127,217,102,220,63,81,193,163,111,92,56,97,235,75,229,249,139,247,228,76,245,104,206,8,160,205,141,216,165,70,101,32,251,0,73,165,49,196,87,10,204,164,142,172,
224,99,244,161,161,16,244,18,63,251,108,221,63,74,85,147,120,219,229,7,110,204,87,45,248,83,32,19,17,252,190,105,3,251,185,253,105,74,191,69,101,39,28,110,200,252,206,105,11,21,198,19,7,216,0,105,209,
204,217,198,205,222,253,42,68,49,85,163,60,24,193,246,112,223,254,170,87,145,89,176,228,110,235,212,255,0,74,89,21,182,146,223,119,168,203,230,153,182,54,29,89,87,253,146,1,252,232,16,225,34,175,10,84,
63,226,127,74,121,102,111,188,236,59,247,197,71,228,197,38,0,47,234,119,147,205,74,99,10,6,50,140,120,60,240,125,192,245,160,146,14,21,134,212,17,159,69,233,71,35,32,157,167,219,165,51,118,49,146,122,
123,212,153,249,120,43,159,117,56,168,36,103,30,197,186,228,82,238,141,177,146,15,110,40,225,135,59,71,166,6,41,172,187,137,0,128,79,124,100,80,49,251,87,160,102,221,238,58,210,40,118,233,46,61,10,143,
210,147,100,152,193,124,17,232,41,220,178,254,241,179,254,207,52,0,246,87,108,18,228,158,135,29,233,241,54,219,28,103,171,138,173,188,114,188,49,237,216,211,173,223,54,104,79,119,173,163,177,148,183,46,
239,43,82,105,237,251,224,79,63,49,254,181,87,119,227,78,177,99,231,113,234,79,243,166,183,19,216,249,159,246,151,157,91,198,167,13,128,136,3,126,85,227,205,35,22,8,125,70,120,236,121,175,82,253,161,174,
25,252,119,49,3,32,47,115,208,230,188,130,235,80,75,123,143,38,54,226,71,12,88,156,113,233,244,175,211,48,46,216,104,47,35,229,241,10,245,25,167,246,165,85,10,153,7,112,62,102,220,224,1,208,87,75,225,
59,125,118,107,229,109,30,57,158,249,16,103,203,251,192,30,121,6,176,237,237,82,91,87,152,244,83,150,29,1,35,250,100,227,240,174,167,192,62,52,255,0,132,59,85,109,68,192,100,133,129,137,209,122,149,3,
239,15,122,237,169,205,236,223,42,187,57,21,185,149,207,82,208,252,81,241,15,64,178,145,238,116,246,148,169,83,143,179,238,220,191,129,174,47,227,215,198,173,75,87,240,173,173,149,246,136,45,110,97,156,
63,156,161,128,110,8,199,243,233,235,94,143,99,241,231,69,154,13,166,218,241,73,194,99,96,60,145,211,173,112,159,28,190,36,104,94,35,209,180,155,123,39,221,116,151,170,237,12,235,179,229,3,144,73,236,
122,87,202,77,73,255,0,23,15,111,52,123,52,249,83,74,53,15,157,254,32,120,226,231,197,94,28,178,177,187,101,146,91,63,187,33,251,234,156,124,190,224,87,9,170,234,118,83,104,126,66,201,153,19,238,101,112,
196,253,107,215,126,43,104,250,84,214,115,234,16,104,146,89,205,33,206,33,109,201,143,99,129,197,124,253,124,54,225,227,66,35,201,251,198,183,143,36,224,156,21,172,117,43,197,217,149,227,145,163,251,164,
251,224,214,156,119,140,202,55,28,54,107,13,165,42,217,11,239,205,53,174,157,184,206,5,54,174,118,82,172,233,189,14,243,194,80,127,104,106,105,185,179,28,127,51,87,173,199,171,125,150,220,182,224,168,
163,154,240,223,12,172,145,67,230,164,146,43,49,231,7,183,106,216,212,53,139,184,226,88,252,247,195,14,67,26,249,236,85,23,136,173,107,232,143,162,194,230,209,194,211,181,157,206,175,84,215,174,53,75,
173,219,137,92,225,23,218,186,191,15,164,154,108,40,79,45,252,93,235,207,252,27,107,115,169,90,234,83,149,146,65,111,110,95,204,65,146,167,32,113,250,213,219,107,175,16,182,151,37,236,9,115,37,148,124,
60,254,94,84,118,228,226,177,175,69,164,169,196,219,13,155,194,50,117,106,38,217,232,183,158,52,178,182,177,145,147,82,22,114,5,33,100,8,88,238,199,78,63,42,194,180,248,151,167,91,219,135,144,180,211,
252,163,113,143,149,192,198,65,205,121,197,214,153,173,95,105,239,114,80,155,76,242,195,249,214,214,159,225,52,158,205,26,97,24,108,47,241,228,156,215,85,60,36,35,27,54,120,184,252,202,120,186,188,233,
104,142,135,86,248,129,167,204,164,193,20,115,79,35,151,119,154,28,242,121,207,61,243,93,7,134,252,99,160,221,216,170,221,200,99,155,111,206,162,48,20,158,122,99,218,188,236,120,103,204,184,100,68,141,
0,145,144,43,200,1,227,222,187,159,133,86,250,101,174,185,99,37,245,189,149,212,42,228,201,29,203,13,132,14,199,142,56,6,186,163,135,167,220,241,37,94,90,232,84,215,252,103,97,106,235,6,157,36,178,64,
207,151,243,215,229,111,79,124,117,170,58,86,164,109,117,24,46,138,238,141,37,14,202,167,130,1,228,102,189,55,227,39,129,252,51,170,234,150,179,104,51,217,233,208,75,251,239,40,190,224,185,234,51,142,
70,107,202,46,32,26,124,146,91,13,161,162,114,167,7,32,253,43,158,180,35,29,34,93,26,146,150,173,88,244,91,63,24,89,93,94,25,166,130,245,32,3,104,138,12,30,51,200,234,59,213,43,61,122,222,79,21,52,172,
183,99,74,86,59,96,81,150,3,28,10,238,126,0,164,54,58,31,137,53,203,195,98,241,89,88,191,147,111,121,252,111,149,229,71,118,198,113,244,173,79,133,122,109,158,165,225,191,29,107,119,159,101,130,105,36,
121,173,160,148,132,62,98,252,224,32,236,14,252,126,4,87,155,107,29,237,156,151,136,60,93,165,67,37,159,217,108,39,148,249,106,75,125,71,9,143,80,59,251,215,156,120,139,91,125,99,84,154,224,7,142,34,72,
142,54,108,249,105,146,66,143,161,38,190,156,248,99,174,248,87,71,241,69,239,137,60,77,119,28,240,199,2,178,89,198,161,164,123,130,168,11,40,199,64,89,191,95,74,249,123,198,23,112,220,120,155,86,146,212,
98,221,174,165,41,142,152,46,112,127,42,168,173,73,147,184,251,79,18,106,86,22,242,90,219,95,220,65,111,38,119,69,28,132,41,207,94,5,16,232,247,183,26,116,215,241,91,77,45,156,4,44,211,4,37,99,39,166,
79,65,154,163,163,197,13,222,167,107,21,204,255,0,102,130,73,85,100,152,140,236,82,112,79,225,95,71,235,154,222,153,224,141,6,211,195,218,61,156,122,141,197,242,5,142,211,1,132,217,24,47,39,174,106,175,
98,45,115,199,190,27,233,250,117,231,136,162,147,83,124,197,109,137,214,220,227,23,5,78,124,188,158,57,247,175,95,214,53,47,15,180,154,140,22,94,29,91,115,28,105,111,34,205,152,226,117,222,172,160,148,
224,225,187,231,243,21,127,195,250,54,135,164,120,82,231,196,58,178,232,122,101,220,44,35,142,5,183,98,29,152,149,216,63,191,156,54,113,217,79,165,67,107,227,216,47,46,163,176,142,243,65,109,54,100,27,
150,104,200,141,27,57,198,211,208,3,222,167,154,250,147,99,202,244,127,25,71,225,205,122,254,250,211,195,246,177,77,176,196,109,11,49,242,177,195,50,147,200,61,122,116,174,90,230,25,252,77,172,78,218,
110,154,98,47,243,11,88,55,62,220,14,122,156,246,205,125,109,117,240,151,78,214,179,169,182,177,224,173,72,236,27,68,18,24,229,246,3,131,147,245,197,121,117,198,168,255,0,15,124,64,143,113,163,90,219,
105,87,10,3,221,218,219,24,154,54,45,194,176,201,227,233,193,234,51,138,174,96,60,54,9,13,184,184,39,114,183,150,80,227,220,128,69,22,183,73,11,43,237,222,65,200,231,31,202,187,175,140,22,58,61,165,212,
87,90,116,170,183,119,152,121,161,81,198,8,36,48,244,205,112,159,99,146,212,219,180,209,52,2,69,12,187,134,55,2,3,2,51,216,134,83,159,122,124,218,20,145,237,254,20,253,173,188,111,225,61,52,218,91,79,
104,209,228,113,45,184,99,192,3,57,39,218,143,248,107,15,29,106,154,210,75,125,172,198,150,146,16,36,65,105,27,42,38,121,194,224,30,254,160,215,138,94,51,66,99,147,106,252,233,144,190,160,28,103,244,53,
76,200,78,121,192,199,53,158,131,212,246,207,218,18,244,223,104,254,14,189,121,90,102,190,180,107,146,207,130,217,101,140,156,254,117,205,104,30,32,180,181,240,189,165,174,159,173,182,135,124,178,200,
247,44,240,150,105,114,23,110,25,71,65,134,227,222,164,248,181,168,45,215,133,188,16,1,5,86,192,40,35,217,35,205,113,30,35,142,59,91,251,65,2,108,86,178,183,124,1,212,152,148,147,248,146,127,58,113,209,
10,218,155,30,60,184,109,66,230,198,238,41,222,255,0,101,178,197,61,242,194,81,100,144,59,245,227,146,20,168,207,124,87,63,98,166,105,37,110,49,12,109,33,227,63,79,212,138,246,137,190,36,120,73,190,19,
45,138,203,39,246,151,246,121,182,107,19,24,219,230,21,0,63,78,187,178,217,207,66,59,215,135,218,73,159,63,45,183,41,140,122,242,40,140,155,220,124,165,41,159,109,194,46,113,200,254,117,234,176,248,111,
193,237,240,213,239,167,187,105,60,68,208,151,72,150,228,40,87,223,128,54,237,231,142,221,243,94,69,116,251,111,83,145,218,175,174,160,145,200,226,225,75,150,76,35,122,16,56,169,168,156,173,103,98,227,
166,227,237,239,188,185,85,202,172,161,15,8,227,32,227,214,155,166,200,173,115,181,243,229,23,27,182,142,113,158,113,85,85,246,147,199,25,166,218,72,90,66,23,187,96,85,223,66,109,169,234,255,0,21,126,
31,120,115,193,186,110,155,115,163,234,23,119,151,210,72,99,185,142,121,35,117,28,19,149,8,160,129,211,169,61,235,204,238,39,253,214,49,223,168,162,242,232,110,17,169,83,242,100,176,63,197,154,171,116,
195,202,21,149,62,104,171,73,220,169,89,189,14,223,225,206,137,166,107,254,36,177,178,214,38,120,236,103,37,29,161,149,99,117,249,73,13,150,4,1,156,85,223,137,62,19,209,252,31,226,43,91,45,38,250,123,
139,89,162,89,36,146,225,145,138,49,98,14,10,128,8,197,121,250,202,223,99,121,17,246,60,106,14,115,130,121,3,143,206,159,111,119,37,213,186,180,211,52,140,172,84,7,36,224,117,254,121,167,103,207,123,232,
26,114,218,199,73,167,106,3,79,190,140,199,134,131,204,218,199,25,12,185,239,234,8,173,207,22,217,218,217,233,17,62,153,99,111,253,152,210,134,251,82,190,249,247,21,200,15,253,192,65,56,24,231,30,213,
199,194,205,182,22,82,0,220,15,53,127,82,241,38,237,62,109,50,222,222,43,120,154,80,103,150,50,73,156,161,33,115,158,128,100,240,61,107,91,145,99,75,194,186,110,146,250,101,222,163,171,181,217,130,57,
163,183,142,59,66,170,197,156,59,100,150,236,2,126,181,216,124,63,248,111,166,120,210,109,78,72,229,187,185,180,138,233,97,137,145,150,50,177,144,205,230,62,65,236,160,96,115,147,89,190,9,134,29,31,195,
162,93,89,180,233,172,117,6,243,162,180,186,222,100,38,50,202,28,109,233,206,225,201,173,155,175,137,178,91,219,189,174,143,12,90,93,155,57,125,150,234,1,36,245,38,184,49,85,231,77,90,158,236,244,48,152,
104,213,119,158,200,245,143,9,252,59,240,95,128,35,91,139,211,22,163,124,188,249,247,160,21,95,247,83,160,250,242,107,185,143,227,151,135,116,212,242,193,18,237,232,19,128,43,228,201,252,65,53,211,23,
150,103,145,187,239,98,106,21,213,135,241,26,240,28,42,77,243,77,221,158,251,246,84,213,162,143,174,46,62,58,232,23,171,229,149,102,70,24,109,203,145,244,197,121,135,139,124,55,224,143,25,93,37,214,153,
32,210,111,100,124,75,26,166,34,144,19,130,113,217,177,200,199,122,193,240,111,132,244,141,123,66,142,251,82,241,31,246,107,74,205,178,222,59,95,52,237,4,174,73,44,57,200,60,86,181,175,129,124,61,101,
125,28,201,226,235,135,8,114,21,172,56,207,108,252,253,43,74,113,157,55,205,22,120,85,179,108,12,91,165,81,153,144,252,38,208,152,165,205,229,205,230,157,104,142,254,117,189,196,145,151,112,14,20,238,
94,0,56,233,201,174,130,219,226,39,132,60,19,31,149,162,232,233,43,40,192,145,80,2,79,187,159,152,215,148,120,167,88,158,61,114,242,210,234,239,237,13,111,35,68,29,120,86,0,156,16,61,15,95,198,171,104,
105,22,189,172,90,88,25,252,129,59,96,202,23,121,85,0,146,113,198,78,1,239,93,115,149,74,154,201,157,17,171,66,149,62,120,109,189,207,77,212,127,105,13,98,88,218,59,27,11,59,53,207,12,202,100,35,243,56,
253,43,10,255,0,226,174,169,226,40,76,26,188,86,90,140,44,114,99,154,217,72,31,78,50,42,237,191,194,255,0,12,72,235,231,120,174,228,243,202,199,97,183,63,137,110,42,15,25,124,57,209,60,49,164,90,106,182,
122,221,203,217,121,194,43,150,150,0,237,24,96,118,178,133,198,121,24,193,245,20,69,107,100,121,180,243,140,53,73,168,95,115,141,210,172,52,143,237,253,114,235,236,130,226,222,198,193,174,162,177,220,
219,12,155,227,64,164,231,59,70,242,122,246,174,151,192,190,24,210,53,237,71,251,107,81,210,34,177,210,227,128,39,144,100,62,92,179,231,150,80,78,118,227,182,122,214,68,54,154,87,128,245,56,53,59,111,
20,75,246,235,155,111,62,36,75,32,203,36,111,208,62,230,192,201,28,245,197,102,120,131,198,87,26,147,22,150,108,175,80,171,194,143,160,21,219,90,115,140,20,34,245,238,116,208,141,57,205,206,75,67,217,
95,226,102,151,225,139,81,167,232,118,145,193,4,125,4,40,2,103,215,220,251,214,44,223,25,188,67,32,145,99,188,242,81,198,223,148,14,159,210,185,79,132,250,203,45,245,237,196,86,209,94,74,177,136,210,57,
99,243,0,220,114,72,30,191,47,235,94,133,39,140,46,22,224,66,218,94,158,147,147,141,141,106,138,71,224,69,120,234,141,158,187,156,216,204,241,97,170,123,40,194,246,57,73,62,34,107,7,147,169,76,127,224,
117,45,167,196,173,64,176,132,222,201,33,147,229,49,179,110,15,158,48,65,235,92,191,197,207,17,253,165,180,201,214,40,160,114,175,27,121,17,8,195,96,140,116,29,121,53,197,233,144,235,54,122,165,140,144,
219,189,197,221,204,34,226,8,227,6,70,8,75,0,216,29,254,83,91,71,15,204,185,142,236,62,111,10,148,212,228,172,123,61,191,195,191,8,89,223,127,104,235,23,59,98,120,213,190,194,207,181,85,250,182,8,57,35,
208,87,73,109,241,115,193,254,13,129,160,210,52,159,51,3,165,180,66,53,111,171,17,147,88,122,127,138,53,61,47,77,134,39,22,232,99,69,73,90,88,227,220,91,28,243,140,158,115,222,186,173,15,86,213,117,205,
46,105,204,112,92,216,236,42,232,165,65,145,15,12,2,142,188,117,170,188,229,241,51,195,150,121,8,205,168,82,211,189,206,118,247,246,148,213,39,98,52,253,26,214,24,251,25,139,57,31,145,21,203,248,143,227,
94,169,171,68,209,234,90,118,151,119,19,127,203,57,45,243,250,147,92,117,244,201,166,221,95,194,163,2,25,158,48,8,236,24,129,92,173,245,217,154,224,180,155,140,106,70,237,157,64,207,106,218,16,230,122,
31,97,26,144,228,82,125,73,53,221,66,210,107,161,45,172,31,102,220,50,208,171,18,170,125,179,219,218,179,146,249,187,30,163,181,90,241,102,157,109,167,93,90,73,99,44,178,91,93,219,45,202,249,248,222,185,
44,10,156,123,169,252,235,1,238,25,125,171,216,143,195,99,197,149,165,54,210,61,195,226,55,237,0,190,58,183,210,132,182,247,17,207,107,14,201,57,82,174,255,0,222,31,90,243,217,124,115,3,19,251,169,51,
238,69,113,50,92,51,127,22,77,66,210,113,212,87,36,168,194,78,236,250,188,30,125,141,193,209,84,41,73,40,175,35,176,111,26,66,88,230,39,246,228,84,186,111,138,150,107,232,99,88,152,22,96,1,38,184,70,147,
223,138,189,162,205,179,82,182,115,218,64,223,173,101,44,60,18,186,61,42,124,69,143,169,37,25,79,71,228,143,91,157,138,204,114,57,207,122,132,240,221,106,75,169,36,154,103,102,25,39,147,142,106,169,126,
114,43,199,108,251,232,106,147,39,83,180,228,83,139,238,201,7,21,95,204,244,165,79,90,87,53,177,43,73,235,75,187,158,149,95,204,193,20,245,98,15,90,46,59,18,231,60,118,165,228,246,235,76,221,248,210,242,
121,201,166,67,29,211,174,65,161,155,167,2,141,199,57,39,52,50,231,144,58,244,230,139,153,52,35,49,168,89,152,116,94,41,29,138,146,13,71,36,155,176,58,10,119,33,160,145,248,205,65,36,157,51,197,35,182,
59,241,80,201,158,244,174,69,139,118,147,121,119,17,190,113,134,7,245,173,191,22,77,141,122,225,199,86,193,253,5,115,49,54,31,173,108,120,142,77,250,147,55,247,163,67,255,0,142,138,180,244,57,231,31,121,
50,165,205,227,220,206,100,114,50,125,42,35,33,233,218,161,89,51,70,242,15,214,166,229,37,160,172,217,174,191,87,41,113,240,215,231,27,148,89,72,63,17,33,63,214,184,185,59,12,215,98,138,110,254,31,152,
128,220,90,27,148,253,65,164,246,49,150,149,105,75,180,145,243,188,203,243,115,215,20,192,195,56,235,82,93,101,100,32,241,138,137,115,158,157,107,205,123,159,172,249,151,236,155,247,131,181,125,205,240,
158,233,36,248,111,160,180,207,33,143,202,219,251,177,211,4,140,228,241,218,190,26,142,214,91,89,35,243,81,163,220,50,3,14,162,190,222,248,11,121,60,223,13,52,176,133,138,225,215,107,6,218,126,99,199,
31,231,154,238,193,255,0,16,248,142,55,143,54,89,78,93,164,191,38,119,233,229,130,160,44,239,187,161,222,57,250,226,157,53,130,40,39,236,202,132,127,16,57,199,62,249,165,251,44,142,185,75,76,145,221,114,
152,252,42,116,73,34,92,183,238,65,233,181,134,127,157,123,199,225,12,172,159,105,124,8,249,199,240,228,127,133,72,177,205,19,102,76,2,122,3,201,171,6,65,183,239,60,137,158,88,227,63,165,59,108,99,4,69,
40,13,212,189,50,25,17,91,137,63,213,252,204,63,135,118,41,201,105,231,169,243,138,70,235,213,89,216,126,162,167,242,217,121,195,168,247,35,138,114,15,51,24,144,156,255,0,121,178,63,157,4,12,134,201,113,
148,98,15,93,219,178,62,153,53,39,148,189,25,211,113,233,243,117,52,171,10,46,3,180,34,65,217,99,45,250,244,169,21,149,84,1,28,100,246,100,0,126,134,130,24,213,105,62,239,152,27,62,173,254,115,75,26,201,
252,81,140,255,0,190,8,250,226,164,243,183,41,27,85,62,189,105,170,202,24,130,9,29,202,240,63,19,76,134,44,145,62,223,146,85,46,63,132,141,189,253,169,200,141,27,20,105,28,175,162,144,79,233,71,144,173,
243,164,187,72,28,252,216,31,149,27,22,78,222,103,170,40,90,54,51,98,73,8,82,15,239,113,215,36,142,41,54,7,39,248,71,112,126,92,84,171,26,199,194,219,253,67,73,252,241,85,53,13,68,233,208,134,151,113,
220,118,199,24,28,185,39,160,245,52,156,173,184,233,211,149,89,40,65,93,178,114,142,170,8,5,147,251,192,131,252,170,54,85,221,141,253,79,31,46,43,196,254,44,252,110,191,240,54,184,182,90,93,204,34,124,
102,120,212,135,141,9,3,228,207,118,29,241,244,175,77,240,71,196,141,55,199,26,26,221,219,221,143,49,80,27,152,11,0,209,55,113,142,184,206,107,47,107,27,216,250,172,103,11,230,56,60,21,60,124,163,120,
79,183,79,95,83,164,72,83,134,46,209,176,224,131,140,26,86,141,27,25,14,199,167,206,192,254,88,174,95,84,241,130,52,194,219,77,142,73,103,45,133,102,98,192,253,5,118,254,15,240,76,179,88,155,205,74,229,
141,212,156,152,193,251,158,213,92,220,219,30,107,202,103,70,146,171,138,124,183,217,117,51,246,149,83,24,95,151,178,211,24,72,171,143,37,130,103,5,129,227,241,173,141,127,71,211,33,136,121,186,138,193,
49,56,68,47,243,49,244,2,168,71,110,214,240,199,27,186,200,234,184,102,108,96,147,206,63,207,165,81,195,136,194,194,149,37,82,50,191,170,51,90,99,192,37,85,187,83,85,153,79,66,220,246,163,238,128,1,224,
143,165,55,228,108,103,37,189,141,66,60,178,86,97,187,247,168,27,61,136,160,121,77,194,29,158,204,73,31,227,81,236,87,7,10,64,236,69,70,206,23,25,1,199,174,0,52,192,159,204,227,130,7,168,228,138,97,194,
158,95,105,245,197,66,211,69,25,25,71,7,62,248,52,137,120,155,119,41,87,0,227,12,15,20,174,6,166,159,105,13,212,50,205,123,169,219,105,214,137,192,154,229,182,171,55,247,71,169,199,189,88,190,109,37,25,
109,45,124,194,82,94,110,24,141,165,118,246,95,173,120,223,140,166,146,227,199,81,198,174,81,62,204,140,84,30,51,147,206,61,248,174,226,197,206,212,201,37,177,146,115,74,19,230,186,93,10,148,109,102,110,
195,168,105,114,43,111,191,146,54,7,238,253,157,143,235,75,29,229,137,136,201,5,196,143,42,182,10,180,123,65,30,163,154,228,23,114,151,193,199,53,107,77,98,204,252,228,226,170,18,187,177,50,141,145,227,
191,25,252,63,165,107,94,58,121,102,241,21,158,159,40,1,132,83,35,177,231,39,140,12,118,252,235,205,155,192,122,84,58,132,87,15,174,90,180,18,46,126,210,114,20,48,57,43,250,138,159,227,165,201,111,30,
92,229,136,100,64,87,245,175,51,188,186,154,109,46,49,36,153,95,48,242,199,157,216,57,35,219,165,126,153,132,151,46,30,30,135,204,85,166,220,219,185,234,119,26,38,133,14,248,83,198,26,113,104,153,156,
58,163,176,117,24,192,233,220,147,211,210,186,63,3,252,42,210,252,93,53,221,187,248,211,74,180,16,254,240,133,12,236,196,128,125,135,127,126,149,243,108,109,36,114,43,49,42,62,232,99,215,21,210,120,78,
109,102,75,224,186,44,146,37,211,127,10,227,5,71,169,52,177,24,153,198,155,228,118,125,202,163,133,139,146,230,212,250,118,243,224,13,142,151,14,108,126,33,104,242,220,70,219,212,50,182,73,192,244,28,
31,122,224,60,65,240,47,80,215,53,43,116,254,221,209,146,216,74,161,165,55,88,224,158,88,2,1,198,43,204,117,143,137,254,34,210,238,164,183,187,49,188,201,195,101,113,200,237,145,89,63,240,182,245,27,168,
206,44,188,215,232,2,110,61,235,206,167,87,30,227,239,52,238,118,186,84,35,45,22,167,191,252,88,248,79,101,165,248,46,50,254,50,211,110,38,98,177,198,144,63,200,192,103,223,35,235,95,62,207,240,150,198,
242,57,165,255,0,132,167,72,249,91,106,219,52,135,123,16,51,144,113,220,231,242,174,87,196,222,44,212,117,201,99,251,67,178,36,121,101,137,65,0,123,154,197,91,131,230,16,114,73,228,87,86,22,147,163,78,
211,213,153,85,188,221,226,236,118,214,255,0,3,109,238,95,104,241,87,135,224,36,100,36,151,108,15,110,9,43,128,121,239,84,188,67,240,39,251,3,71,58,148,62,35,208,245,82,30,53,91,107,27,150,121,157,156,
156,0,54,224,225,70,78,72,172,5,184,141,20,51,40,199,67,198,77,108,248,78,234,221,117,107,82,124,192,226,85,101,219,140,99,190,107,105,114,89,232,37,206,173,173,207,117,248,127,240,119,225,108,158,27,
178,184,241,86,191,171,233,215,210,70,15,147,167,198,142,155,122,100,156,112,115,158,61,49,78,241,23,195,63,129,54,247,207,26,248,171,196,78,170,7,205,246,52,56,246,227,28,212,122,173,245,181,243,137,
45,96,120,32,231,98,74,193,155,24,238,64,21,229,58,244,130,77,66,99,219,117,124,222,22,62,210,163,147,103,102,37,184,193,88,250,39,192,190,25,248,41,166,88,199,13,151,136,124,72,251,156,187,58,219,68,
185,92,99,97,220,57,31,74,234,124,39,240,131,225,102,187,164,220,233,30,30,241,55,136,229,191,242,136,142,45,67,202,17,20,115,137,21,85,84,2,216,98,70,227,215,21,243,143,134,216,71,167,197,142,61,235,
210,60,17,51,218,164,239,147,134,101,1,129,174,108,74,229,147,146,103,69,15,129,35,130,248,225,240,174,47,132,30,47,212,116,107,93,93,181,29,61,173,252,216,60,194,60,216,129,36,5,144,14,55,113,237,193,
28,87,11,103,116,173,165,67,179,27,176,55,15,76,84,159,20,239,181,13,115,199,218,244,141,44,143,186,98,167,44,79,64,48,63,149,113,246,254,31,213,46,21,146,61,224,129,184,238,109,163,31,214,189,8,185,114,
171,156,92,169,55,114,214,177,48,130,118,59,228,195,49,109,170,115,205,104,232,183,79,12,101,225,118,253,226,237,203,30,121,174,39,82,142,235,79,187,120,110,25,150,85,235,206,106,238,139,13,230,163,50,
197,6,253,195,167,61,107,69,38,41,69,30,139,28,151,81,172,82,184,18,198,62,232,118,231,255,0,213,88,126,32,212,102,159,80,23,210,21,87,18,2,202,189,8,244,174,179,195,191,7,124,101,173,88,17,105,167,203,
56,144,2,25,58,156,246,3,185,62,213,204,248,147,67,188,208,239,110,116,189,74,23,183,188,183,38,41,161,149,112,200,195,168,35,214,184,170,75,223,213,154,83,142,154,23,99,212,25,173,192,134,66,34,112,31,
0,251,116,171,214,119,135,236,242,196,236,196,182,10,141,199,138,230,116,24,228,123,73,99,98,185,183,66,248,36,238,101,244,21,185,166,192,117,107,59,137,192,88,76,32,13,188,228,251,215,21,69,203,35,170,
58,162,230,189,152,110,237,85,50,185,183,140,227,112,35,243,166,107,144,218,218,234,48,33,141,145,26,210,39,97,25,228,187,32,36,243,245,205,90,176,240,190,165,226,153,10,217,22,154,230,37,134,56,160,113,
141,229,142,21,65,36,1,207,3,61,106,143,136,156,201,121,98,217,5,133,149,190,226,57,193,17,47,21,149,198,214,166,116,100,215,179,248,130,254,13,22,13,9,160,95,59,87,212,180,139,120,20,171,109,54,241,4,
249,159,62,164,254,128,250,215,148,199,54,143,255,0,8,233,66,147,157,111,237,72,235,48,63,186,242,118,48,116,43,253,237,219,8,35,182,225,233,93,103,138,47,150,215,197,94,29,121,78,82,61,46,205,79,182,
99,255,0,235,210,221,131,46,248,195,198,176,235,26,77,150,155,104,217,179,182,35,10,59,50,130,160,254,76,127,58,230,180,120,191,180,53,8,109,228,185,138,209,28,252,211,78,216,68,24,201,38,163,214,172,
210,206,240,44,120,10,201,191,143,169,31,210,179,246,25,27,39,140,251,82,216,102,236,211,121,55,18,67,13,192,153,99,118,85,154,50,66,184,7,1,134,121,193,171,81,120,194,75,105,22,194,254,70,187,211,103,
95,42,72,165,108,236,4,143,153,125,10,144,8,172,56,212,198,70,57,53,147,127,186,107,212,65,206,15,106,75,80,104,234,62,39,78,173,226,153,98,143,105,72,98,137,55,175,241,98,53,25,250,241,89,86,98,247,82,
48,198,171,53,204,129,2,71,213,246,168,232,7,181,108,120,246,205,116,189,90,9,95,247,173,61,188,108,171,143,149,72,69,82,9,238,114,14,71,106,103,133,165,241,69,212,155,244,24,175,21,215,229,50,89,35,13,
163,211,35,165,54,212,119,28,98,222,195,245,15,10,235,214,176,70,215,186,101,244,49,170,237,71,123,103,85,199,39,25,199,173,115,119,17,50,238,95,155,61,197,122,194,120,147,227,15,134,97,51,61,255,0,136,
34,131,169,18,202,242,174,61,195,102,187,15,20,120,163,195,218,167,132,116,171,95,25,233,150,247,119,215,176,17,255,0,9,13,138,164,87,48,207,156,252,209,168,27,144,2,51,158,79,52,69,169,108,194,87,142,
232,249,226,109,98,246,254,214,218,222,121,154,88,45,178,177,35,127,6,113,156,126,66,183,252,85,167,92,150,178,186,72,217,161,251,5,182,93,65,194,145,18,14,191,149,88,241,255,0,131,117,47,11,92,218,201,
113,109,23,246,116,241,42,218,95,91,15,221,92,162,129,243,131,253,227,144,78,107,178,248,113,4,126,40,241,132,122,21,238,170,186,110,159,54,159,11,203,52,199,247,106,22,5,237,131,201,37,106,165,238,146,
181,60,146,104,101,129,163,89,3,41,97,184,3,193,198,106,20,98,147,2,78,20,117,205,125,1,113,161,232,122,58,234,79,226,155,155,61,86,194,194,34,45,99,133,219,207,147,51,168,218,164,114,50,172,199,158,6,
61,235,199,252,117,253,139,119,226,135,111,15,91,205,97,163,220,28,219,199,121,38,246,85,222,202,9,63,135,243,168,82,76,171,52,115,115,69,27,93,68,209,92,199,38,87,44,163,32,161,201,24,57,31,203,214,162,
188,101,86,82,199,120,193,251,167,242,174,187,79,240,50,233,183,119,233,117,121,109,115,39,217,75,249,112,177,44,57,86,7,145,211,252,107,142,153,213,247,42,156,175,110,148,219,25,114,205,5,204,145,35,
202,144,171,21,13,35,116,92,247,56,166,217,198,86,216,205,231,71,247,138,236,221,243,116,235,89,115,72,99,136,170,158,79,21,29,156,175,15,223,7,99,116,226,144,139,209,54,47,136,44,188,147,214,175,95,90,
133,181,13,231,198,91,112,1,67,3,158,15,53,144,249,243,183,47,79,165,71,116,237,44,162,60,156,129,144,160,100,230,152,141,171,136,188,152,100,93,200,248,92,101,91,35,235,80,105,236,76,109,146,62,247,173,
81,134,229,126,206,200,229,131,231,0,99,143,198,159,107,58,70,172,11,114,79,3,6,128,54,190,216,214,150,51,63,117,101,10,84,247,57,227,250,254,21,78,201,139,64,9,57,53,169,246,53,155,192,179,93,121,100,
49,212,210,49,39,168,17,57,199,230,107,26,31,221,168,81,192,20,1,232,50,66,186,162,248,38,206,87,146,56,164,128,198,237,16,203,5,55,50,103,3,215,20,237,83,71,45,173,50,217,71,246,123,89,216,24,85,164,
45,177,79,64,78,57,35,189,98,107,87,215,22,58,63,134,111,33,102,134,88,96,118,142,69,36,16,194,121,14,69,103,94,248,226,250,242,127,58,104,18,23,97,204,177,161,83,146,49,145,219,154,231,156,57,153,189,
58,156,135,66,218,77,232,134,230,112,190,101,180,23,31,101,121,85,129,83,33,32,0,61,65,200,252,233,27,195,218,195,93,92,192,45,136,123,102,11,40,220,50,153,25,29,253,43,35,195,254,40,182,181,240,173,253,
157,196,237,246,153,47,237,231,85,32,242,170,65,39,63,133,46,187,227,41,35,241,174,161,168,105,243,23,130,105,1,28,144,31,229,3,252,104,246,49,177,79,17,62,167,185,120,35,79,178,135,194,250,108,119,250,
205,173,148,251,89,76,110,29,155,37,201,236,58,115,75,30,161,103,14,173,173,88,62,175,105,44,214,44,26,37,68,98,37,140,66,36,36,18,71,169,237,218,185,239,15,41,213,180,43,107,173,241,35,128,3,198,206,
55,110,224,228,3,207,122,233,180,251,197,183,9,186,43,82,195,128,210,68,133,186,99,169,30,149,228,202,58,179,227,100,225,26,178,156,227,123,220,243,79,22,105,113,235,26,213,214,163,13,247,19,182,226,168,
160,142,6,56,252,5,102,233,119,11,225,251,164,157,110,24,220,33,62,94,227,220,241,211,233,91,30,46,248,177,46,143,226,13,66,214,29,35,69,148,69,33,64,243,105,241,177,108,12,103,61,234,175,133,126,34,166,
185,175,89,199,121,163,104,98,6,145,86,70,93,57,84,34,147,141,196,142,152,235,93,156,190,225,235,69,75,217,43,203,75,108,116,122,215,140,237,109,245,125,26,43,13,74,57,227,187,152,71,112,205,9,30,80,44,
163,63,169,252,171,185,248,129,14,131,117,240,215,84,77,63,83,146,89,227,69,103,89,153,64,145,145,212,228,32,249,151,140,227,61,107,62,255,0,83,31,60,50,189,171,12,224,24,246,17,245,4,87,31,226,233,160,
211,188,47,125,33,145,95,237,5,97,69,71,92,146,88,31,203,2,185,225,126,101,99,200,131,141,74,209,113,133,134,218,216,233,58,167,136,188,56,53,119,221,99,111,163,218,185,183,249,128,184,62,96,83,30,229,
32,174,85,156,228,115,242,251,214,159,143,180,143,15,248,147,199,192,105,208,157,39,77,138,217,90,123,88,20,128,155,70,48,11,14,56,42,59,215,142,248,139,196,146,95,218,218,71,229,136,188,152,35,183,93,
173,201,85,36,130,127,51,84,109,252,65,125,109,106,209,199,112,232,178,103,115,110,57,57,24,175,78,84,220,157,238,125,108,42,114,171,30,205,240,222,234,239,195,214,218,156,218,85,211,219,201,37,193,88,
110,227,63,188,10,185,0,131,219,57,57,173,223,22,71,226,207,136,154,182,157,115,117,119,246,161,12,77,28,151,82,52,104,221,114,1,28,19,94,109,240,231,196,9,165,233,242,121,251,222,38,201,96,128,18,57,
234,43,168,31,17,244,164,99,255,0,31,88,237,132,31,227,94,117,72,190,103,99,229,241,62,214,85,165,40,171,158,159,225,237,67,86,240,172,137,167,54,149,113,61,155,125,203,187,100,91,148,39,140,150,3,59,
78,125,107,55,196,158,45,241,30,169,32,183,183,208,181,45,145,176,140,102,219,202,143,211,57,29,69,121,151,136,245,109,103,196,150,54,178,232,6,104,214,61,194,85,51,136,217,137,198,8,0,142,49,239,92,194,
216,248,193,164,63,105,158,107,100,28,180,146,221,28,15,201,142,106,225,21,203,171,42,149,28,60,163,122,142,207,181,206,195,82,240,86,185,175,71,37,203,70,150,179,51,54,98,184,148,33,7,39,183,165,106,
232,63,219,126,31,181,178,133,167,65,61,184,43,149,96,202,62,98,120,170,54,63,21,44,108,236,162,181,191,209,205,228,176,141,190,116,119,12,132,143,126,185,255,0,235,212,87,223,18,180,203,136,218,91,61,
54,226,219,203,27,138,201,48,117,56,247,192,53,157,164,221,172,102,225,85,202,209,142,134,55,136,150,242,251,81,213,166,153,163,89,188,253,206,172,193,89,179,206,64,250,28,254,53,212,235,51,232,203,240,
86,220,127,103,233,227,83,121,48,183,16,5,105,195,110,231,113,206,70,84,116,197,120,166,177,226,171,157,83,86,186,191,147,9,36,237,202,199,144,0,192,0,126,64,83,44,110,204,170,204,27,99,49,218,27,250,
215,161,26,54,179,62,206,157,89,114,40,179,171,241,149,215,218,52,223,13,150,24,43,166,170,2,56,206,36,113,92,107,54,236,144,120,174,147,197,136,208,233,250,12,114,99,114,89,182,236,28,255,0,203,87,35,
244,53,202,200,75,101,143,78,194,183,52,66,72,118,242,15,20,198,144,109,28,10,125,173,188,183,179,44,48,169,121,27,160,167,223,233,115,233,164,11,132,49,238,31,43,14,65,172,219,87,177,219,26,114,113,230,
75,66,183,153,131,143,194,182,180,27,81,230,71,115,112,68,54,225,128,86,35,37,219,61,0,168,181,123,27,24,116,155,59,155,34,238,26,70,71,146,78,9,32,3,211,176,171,145,226,227,94,134,57,191,212,193,4,126,
92,121,224,124,160,241,248,214,53,37,163,61,12,45,46,106,177,71,164,125,173,225,148,72,140,114,125,42,59,139,143,50,82,196,109,207,106,175,44,199,229,33,187,3,145,76,105,75,54,246,59,141,120,45,234,126,
189,77,104,137,183,98,151,126,220,115,80,180,129,215,37,185,29,6,42,125,53,109,38,188,137,47,38,123,123,118,56,121,81,119,21,247,197,65,171,208,138,73,57,198,105,99,147,61,113,81,94,42,199,51,136,223,
204,136,57,9,38,220,6,29,141,68,37,24,170,43,116,104,110,32,82,172,164,251,118,170,11,50,183,25,197,57,102,25,31,53,23,37,162,250,200,125,77,13,33,61,9,205,87,251,70,49,131,205,35,73,215,39,39,214,139,
153,180,61,152,30,188,212,44,74,245,52,52,159,55,6,152,205,187,223,20,174,67,66,51,10,130,86,199,83,244,165,102,235,80,74,105,153,52,61,88,240,65,252,107,87,89,155,124,208,182,126,244,43,252,177,88,126,
103,203,147,87,175,167,12,32,231,63,185,90,180,101,37,118,136,124,197,205,62,57,54,72,24,117,28,214,104,148,249,153,7,53,101,101,243,48,115,154,150,59,104,92,190,188,55,87,15,49,69,140,177,206,216,198,
20,125,43,176,209,228,243,188,30,195,24,249,167,31,154,41,174,23,115,55,2,187,63,11,183,153,225,153,80,243,254,146,235,249,197,255,0,214,160,229,173,238,242,191,52,124,253,118,191,190,113,239,80,43,108,
96,84,227,30,149,62,164,54,220,75,142,8,99,85,3,119,237,94,123,220,253,102,58,164,105,173,220,215,82,43,75,33,144,140,1,147,208,10,251,67,246,108,145,238,126,24,219,15,180,8,132,119,50,40,202,100,246,
62,190,245,241,61,187,29,192,47,21,246,87,236,171,52,243,120,10,234,40,161,89,10,221,182,89,151,60,21,94,63,207,173,117,224,255,0,138,143,147,227,40,115,100,237,174,146,71,178,139,97,30,14,100,59,135,
240,31,189,248,28,211,161,88,215,36,32,7,185,46,196,255,0,245,170,88,237,238,58,121,76,141,215,128,84,254,70,129,157,193,164,51,57,232,51,255,0,214,175,162,63,159,88,158,99,194,112,136,236,223,221,141,
78,63,51,254,52,171,50,47,223,87,137,187,163,12,143,231,82,43,21,82,113,42,197,252,88,98,0,252,105,234,144,200,185,0,190,127,137,155,255,0,173,65,12,108,107,0,101,124,200,24,246,35,63,165,79,36,187,113,
251,221,171,158,135,175,248,10,143,105,11,148,158,69,83,219,112,219,83,170,168,80,219,202,17,212,14,104,32,143,247,45,200,151,115,14,64,39,24,167,71,153,183,110,68,198,57,100,110,127,90,89,36,133,78,124,
181,80,70,67,168,4,254,180,139,37,188,167,122,121,193,191,188,79,63,149,2,176,171,133,108,2,178,15,161,21,33,109,184,221,19,30,48,2,156,99,240,20,195,40,227,115,176,95,117,57,162,226,250,13,58,221,231,
158,227,200,137,71,205,35,240,63,58,46,17,167,42,146,81,130,187,100,209,148,224,164,79,187,190,246,207,233,67,43,12,110,120,213,79,247,206,8,172,173,55,196,218,110,177,243,91,75,231,38,74,137,84,149,6,
180,227,146,44,101,146,38,245,220,79,231,154,92,201,149,95,11,91,14,237,86,13,122,148,117,45,78,13,14,194,234,250,234,69,16,91,198,210,59,129,216,12,215,202,127,16,191,104,27,237,79,92,97,102,90,218,32,
8,134,69,99,148,201,234,61,241,159,206,190,164,241,128,176,186,240,190,171,105,49,141,99,186,182,146,32,87,251,197,72,24,29,249,197,126,126,107,118,110,114,187,127,123,27,237,35,191,92,98,184,113,83,106,
201,31,176,120,119,151,97,49,30,214,190,34,23,146,105,43,237,98,61,99,85,155,82,186,89,25,154,79,225,25,228,183,61,107,214,254,15,248,118,243,75,184,23,151,15,44,102,92,40,129,61,61,8,207,38,185,191,135,
254,4,121,167,142,250,250,61,210,28,24,163,35,167,161,35,214,190,181,248,109,224,152,180,184,227,190,191,139,253,44,127,170,141,186,40,245,62,245,207,70,14,78,236,253,59,136,179,170,88,28,51,163,29,111,
161,209,124,63,240,151,246,56,77,66,253,115,123,34,229,85,185,17,131,253,107,87,199,30,60,177,240,94,150,247,114,72,90,225,142,216,161,79,189,35,118,0,85,47,24,120,206,199,193,122,68,183,183,146,225,128,
62,92,125,89,219,176,2,188,255,0,193,158,27,190,241,86,176,60,85,226,66,76,138,219,172,236,88,241,18,246,98,190,181,232,233,29,17,248,61,69,26,156,216,252,115,247,22,203,249,159,101,250,151,60,41,225,
251,157,127,86,30,41,241,24,146,75,242,119,90,89,182,66,91,143,82,61,122,87,121,47,207,203,44,88,60,110,0,111,167,183,205,206,64,244,25,28,210,174,55,101,25,193,254,232,35,31,202,180,74,219,159,19,143,
199,84,199,213,231,158,137,104,151,68,187,35,27,107,158,51,24,62,249,193,166,146,234,66,191,204,123,108,25,199,233,67,4,24,224,55,251,89,52,164,202,171,128,234,7,161,60,84,158,88,9,60,182,195,18,132,241,
193,197,43,111,42,64,154,67,254,240,31,161,168,219,115,0,85,148,176,239,140,211,36,121,35,93,220,1,234,7,249,197,23,1,251,152,46,226,216,29,139,115,73,231,228,21,43,145,245,239,75,27,25,35,12,83,119,191,
25,21,28,205,183,32,166,71,111,152,3,72,103,155,107,219,102,248,137,113,212,109,138,53,228,99,140,41,63,206,187,155,54,249,64,29,49,92,29,195,9,188,127,170,22,82,10,249,107,207,63,194,181,219,89,73,149,
250,45,97,75,237,27,207,161,9,239,86,180,105,68,114,57,227,145,206,69,103,172,133,152,14,245,115,71,37,90,76,242,112,43,74,123,153,207,225,62,88,248,229,32,147,199,183,133,223,11,181,70,220,118,175,59,
212,146,31,236,244,151,126,75,28,236,200,237,198,63,90,239,62,53,72,100,241,213,232,83,187,59,115,183,233,197,121,253,244,113,29,63,114,49,14,216,59,123,15,198,191,78,194,255,0,187,199,208,249,170,159,
196,102,122,199,185,182,63,94,6,230,232,185,239,94,169,240,95,77,138,227,80,189,151,238,204,145,0,184,31,169,175,40,220,210,140,131,243,61,118,159,14,124,95,15,132,245,98,247,76,82,9,254,89,25,121,199,
161,174,12,116,101,82,132,163,29,206,204,51,80,154,108,197,241,238,147,115,170,120,222,230,15,41,214,93,248,200,28,1,159,240,173,152,227,176,240,189,132,113,186,36,100,240,92,156,18,126,181,220,248,207,
197,254,29,146,206,107,168,175,96,46,70,91,96,27,216,215,207,222,32,241,28,190,34,213,67,31,146,49,196,113,3,192,244,63,90,226,194,186,184,136,40,201,114,164,111,89,70,14,235,169,175,227,253,30,38,141,
47,160,80,11,145,187,111,76,122,215,21,107,50,199,47,205,159,203,189,122,15,141,47,173,45,188,53,5,164,114,171,92,48,81,183,184,192,230,188,225,62,124,99,60,117,246,175,90,132,159,37,164,114,73,93,155,
83,75,18,170,59,96,110,31,116,115,207,122,189,225,217,33,254,220,180,232,87,126,115,88,15,110,25,79,205,219,183,106,211,240,236,102,29,90,221,179,252,89,245,170,169,110,86,199,11,166,123,168,77,182,49,
156,241,180,147,158,185,205,121,94,176,219,245,41,178,121,45,94,161,36,192,233,241,18,54,179,3,192,28,117,175,42,214,9,143,81,155,253,151,32,126,117,225,224,30,172,215,21,178,59,111,13,157,154,114,2,128,
150,92,6,61,69,122,135,134,224,88,116,52,98,121,105,115,159,94,64,175,50,240,171,9,180,216,91,24,192,193,175,84,209,24,73,101,99,9,7,111,152,172,113,254,240,226,188,220,115,124,214,59,176,171,221,76,242,
79,24,95,233,250,95,138,181,167,158,20,32,93,54,62,81,205,97,107,95,18,150,75,24,161,130,198,13,177,176,101,46,128,51,15,66,71,106,193,248,165,124,215,62,60,215,26,53,253,215,218,228,85,246,230,176,27,
77,189,146,13,198,38,35,28,96,103,53,223,66,139,229,78,90,156,85,170,46,103,98,183,137,53,187,175,16,107,51,106,50,67,26,22,32,5,142,48,21,64,24,3,242,174,175,225,150,185,253,149,121,45,228,241,195,42,
71,193,141,148,18,115,232,43,157,211,164,91,118,48,206,254,67,177,219,134,227,243,174,135,195,126,29,209,230,151,230,241,93,141,132,178,28,4,154,55,219,248,156,99,30,245,214,233,221,88,231,246,156,186,
159,74,120,103,246,128,139,79,248,127,168,89,105,19,165,133,218,188,83,131,34,229,213,145,176,2,183,184,53,224,126,61,241,4,222,36,215,239,245,11,183,243,111,46,167,50,200,221,75,19,213,137,245,38,171,
248,171,193,90,223,133,109,237,245,20,107,123,251,57,159,9,121,99,40,150,38,199,110,58,126,53,145,51,60,151,7,114,144,221,78,225,142,123,241,94,93,90,46,147,242,59,41,212,85,21,202,182,51,61,158,164,2,
178,42,204,54,18,199,0,125,107,172,240,254,169,109,101,111,125,13,196,101,188,255,0,245,101,122,3,92,101,245,175,218,150,38,232,124,192,188,30,128,215,83,225,221,13,47,236,165,146,73,153,12,115,164,67,
223,57,253,120,172,234,46,104,41,26,69,217,180,116,90,116,145,197,52,19,92,93,27,127,221,6,69,102,192,147,111,43,245,0,143,210,178,166,210,109,46,38,154,73,53,24,173,15,153,147,27,131,194,30,140,14,114,
121,237,215,21,107,198,218,12,250,14,159,166,92,137,157,227,153,221,72,96,54,163,46,48,7,212,19,249,26,227,158,83,36,155,216,238,118,230,185,141,13,61,31,236,223,111,79,182,69,37,197,174,15,152,176,48,
87,3,7,149,36,30,157,121,24,226,189,51,226,23,132,143,216,180,141,101,153,177,253,159,111,25,140,14,1,84,231,244,2,188,215,194,250,124,154,206,185,103,101,3,70,178,77,38,204,200,219,87,223,63,134,120,
239,94,227,241,50,250,243,77,184,41,123,108,183,30,26,185,129,32,223,18,252,246,206,163,134,30,135,63,159,74,151,163,17,151,168,124,41,182,190,248,71,105,227,61,63,88,183,93,70,222,50,47,180,155,153,49,
36,163,121,219,36,60,117,10,70,84,245,219,144,123,31,30,93,121,12,152,33,186,224,228,26,244,45,63,198,51,120,126,8,237,238,203,222,105,123,54,71,44,31,117,151,36,140,122,30,79,7,214,188,230,251,81,75,
141,90,75,168,173,240,155,203,40,117,235,207,122,142,107,178,249,77,24,245,200,246,144,87,191,12,104,211,117,161,166,106,6,252,67,28,242,71,157,137,32,202,238,236,125,240,121,250,129,82,195,171,93,106,
204,98,77,54,215,24,24,242,225,233,89,26,173,168,211,238,154,15,48,51,12,51,42,244,4,140,226,156,88,228,145,234,159,9,252,9,117,241,91,89,251,78,171,51,127,100,217,127,172,11,242,238,207,34,53,192,227,
61,73,255,0,26,250,163,74,211,45,52,155,56,237,44,173,162,181,181,137,118,164,113,40,10,5,121,207,236,215,107,20,63,13,97,120,241,190,73,228,121,62,185,0,15,200,10,245,47,97,193,53,228,215,168,231,55,
115,186,156,84,98,52,170,183,81,145,158,245,231,63,17,62,22,233,94,32,154,61,100,91,1,113,106,119,203,12,127,40,184,85,28,231,29,255,0,158,43,210,28,249,113,19,219,160,166,109,14,128,17,219,154,202,19,
112,119,69,202,42,74,204,243,77,112,218,120,251,193,183,30,26,146,75,117,154,56,76,246,49,228,102,55,81,198,7,97,142,63,26,249,178,235,205,143,196,1,24,50,72,182,176,163,47,32,228,66,128,131,94,175,163,
105,122,87,135,124,77,37,244,11,33,149,100,117,221,188,176,218,73,237,92,102,169,170,15,12,248,220,107,208,199,246,132,218,197,227,147,161,194,227,57,245,192,252,197,123,210,124,208,185,229,65,114,75,
83,18,56,149,24,200,232,206,137,243,48,3,39,0,243,81,120,129,172,245,173,123,73,54,209,73,105,166,202,145,91,164,178,168,92,225,176,236,59,99,115,26,244,15,19,107,205,125,101,37,229,165,188,112,9,29,149,
175,35,39,110,70,73,63,165,121,126,86,250,247,69,251,100,98,13,52,58,91,180,139,198,84,21,223,207,176,108,254,53,203,77,119,58,166,238,180,58,155,91,29,59,251,122,102,183,150,72,36,178,73,35,184,181,184,
147,113,145,21,78,54,158,252,227,34,184,61,67,75,177,186,148,207,111,127,29,188,109,207,147,50,182,229,246,200,28,215,91,255,0,8,216,135,93,212,174,117,11,38,180,210,76,114,236,145,103,206,206,62,82,14,
114,115,143,214,177,60,51,53,132,150,247,80,75,105,231,92,60,51,17,43,28,170,1,25,35,3,215,142,181,173,204,76,69,211,236,227,144,202,247,145,220,40,57,242,97,86,4,159,76,158,130,173,237,123,235,119,251,
76,76,182,192,124,147,71,31,17,31,240,172,120,151,203,148,158,213,221,173,186,92,120,118,41,37,184,91,116,91,102,81,36,83,141,167,4,252,172,158,166,148,152,36,113,135,69,69,98,191,218,49,147,140,253,198,
233,235,210,180,230,184,181,179,132,53,173,184,251,75,240,110,148,156,12,99,33,115,235,223,235,90,31,232,173,27,106,63,104,143,103,216,126,204,33,254,63,51,102,222,71,167,124,214,142,233,163,240,84,95,
107,142,31,33,93,138,34,178,6,218,85,70,71,124,231,175,122,20,135,202,113,247,130,222,249,82,79,51,236,179,231,247,152,76,171,127,181,197,55,79,178,178,105,215,237,23,237,229,103,230,17,196,75,99,219,
61,233,158,88,154,96,145,255,0,17,194,134,60,214,148,26,61,147,49,50,106,240,66,202,185,42,98,144,156,231,167,11,86,153,13,18,106,154,211,223,36,86,177,41,183,211,237,248,130,220,30,23,212,159,86,61,205,
83,183,218,36,92,242,51,210,173,234,26,125,133,186,161,131,84,142,237,79,7,108,110,187,127,239,160,41,116,121,173,109,46,162,154,75,207,44,171,114,60,173,220,116,245,247,63,149,49,88,244,31,18,94,120,
130,9,111,118,89,69,38,137,12,224,91,121,208,35,70,171,156,38,204,245,227,29,61,107,59,197,30,53,188,211,173,211,79,102,181,190,190,92,25,228,104,84,199,31,253,51,81,142,113,220,215,181,120,95,246,158,
240,158,157,224,187,239,15,107,26,21,182,169,107,44,123,96,219,102,169,177,136,0,150,37,185,29,122,96,228,117,230,188,47,197,30,40,240,246,181,226,91,205,74,219,68,134,24,102,152,202,45,162,118,88,211,
39,59,64,221,211,181,67,109,20,163,115,13,188,115,169,52,104,130,203,77,80,164,144,194,202,60,156,246,60,83,237,60,73,169,106,87,6,15,179,89,229,213,142,229,182,69,192,0,146,122,122,10,245,143,10,252,
114,240,29,158,158,44,188,65,240,215,77,212,21,129,70,185,182,34,57,17,120,0,34,244,207,31,123,169,207,90,242,141,123,197,150,250,151,138,110,181,91,123,40,108,237,152,20,138,214,5,84,84,64,155,20,96,
12,103,0,100,247,57,53,92,215,68,202,37,205,67,82,91,72,146,9,183,44,139,221,122,214,98,235,17,110,25,119,63,83,88,154,214,176,250,149,228,151,24,11,188,231,110,122,85,47,181,110,141,0,76,72,9,220,197,
184,62,156,86,62,205,110,112,125,95,200,238,231,241,52,87,145,129,58,68,248,224,111,64,72,31,136,166,201,173,67,111,107,148,139,108,79,144,10,38,213,39,191,53,196,249,211,63,12,203,140,116,205,36,186,
133,199,147,28,46,229,163,140,157,139,187,32,103,174,41,123,33,44,50,71,70,186,132,108,217,203,1,73,168,234,98,241,98,85,28,32,252,77,115,66,226,85,35,145,90,49,180,70,5,37,200,148,112,192,145,207,166,
7,210,174,52,210,119,52,133,30,87,114,189,245,199,153,34,40,94,131,159,206,149,129,88,192,227,2,163,148,44,146,110,18,113,232,104,144,174,222,36,201,173,238,116,216,214,211,181,71,181,183,42,173,138,63,
182,100,234,8,252,171,159,107,135,95,149,72,35,235,77,243,165,228,238,85,246,205,98,225,212,193,82,214,231,97,103,227,43,171,49,180,31,151,173,73,117,227,91,171,165,62,157,9,38,184,193,35,227,239,39,253,
245,72,211,50,224,110,95,192,230,163,217,69,244,37,225,161,123,180,111,54,177,43,49,37,255,0,74,109,198,165,35,192,201,188,225,184,172,37,184,102,234,195,53,58,200,172,191,52,128,118,171,81,72,222,52,
146,18,73,119,54,208,13,107,219,47,217,227,69,40,51,223,138,163,15,148,187,113,34,251,138,187,111,113,17,249,138,151,199,78,107,75,157,113,70,180,26,61,254,177,114,34,179,181,158,236,236,1,86,8,218,83,
128,51,192,25,245,171,173,240,239,91,54,239,59,105,119,202,145,169,103,205,171,225,20,117,98,113,192,174,195,225,127,199,123,207,133,251,18,206,220,77,3,92,172,243,67,43,128,178,1,128,87,133,224,16,49,
94,165,227,15,219,203,91,241,6,147,45,141,174,141,107,166,193,47,202,222,76,172,88,167,247,115,142,158,184,162,229,199,115,231,29,26,202,109,55,88,129,146,51,46,252,166,210,189,115,216,85,191,136,246,
154,149,163,219,91,222,105,111,167,69,26,6,85,98,51,131,156,31,165,104,235,223,23,165,212,181,3,114,150,9,107,199,72,159,191,175,74,169,241,67,227,77,239,197,11,168,167,212,236,226,23,17,91,71,108,36,
86,57,42,153,199,111,122,231,106,239,152,246,41,86,113,131,164,229,100,114,115,234,186,115,105,171,104,182,247,31,43,25,3,25,6,55,17,143,78,156,83,230,145,175,38,135,80,181,114,219,85,18,84,254,36,32,
1,159,161,197,98,45,196,106,11,24,119,140,247,53,62,147,171,29,62,249,110,33,27,89,72,192,207,249,205,41,34,169,85,180,145,235,76,196,197,25,111,148,237,7,31,133,71,231,31,202,139,173,81,245,77,183,82,
42,137,36,85,99,176,0,58,122,85,86,148,41,233,205,124,252,190,38,126,199,70,87,167,23,228,90,243,59,244,20,158,125,83,243,187,28,230,154,102,32,245,169,58,11,207,116,222,65,133,122,49,207,90,137,132,145,
133,220,172,160,244,36,112,126,149,29,174,177,38,157,50,205,22,208,195,141,174,161,131,15,76,26,143,81,215,38,212,228,221,33,85,81,192,68,24,80,61,133,104,185,109,184,175,46,107,91,66,117,148,244,198,
104,89,190,110,120,170,80,221,8,121,28,146,63,42,98,220,110,234,121,168,44,215,89,71,247,142,51,82,52,203,138,203,142,108,128,51,197,73,230,110,25,6,164,205,151,252,225,207,52,214,151,212,213,31,48,210,
137,41,146,203,109,32,245,226,155,112,133,21,72,32,238,25,227,181,64,178,158,167,173,35,56,198,58,138,102,108,102,71,150,249,63,133,23,151,4,253,159,158,137,131,81,51,124,199,63,74,134,225,191,119,15,
60,12,243,86,136,104,103,154,119,113,87,45,228,204,126,135,53,158,115,230,96,116,171,54,205,181,88,117,161,142,218,23,76,152,227,53,217,120,41,183,104,215,67,174,219,148,63,154,56,174,25,152,109,53,216,
124,63,159,118,159,168,33,61,38,133,191,244,33,253,106,81,197,137,86,133,207,16,214,151,110,161,114,0,192,18,48,253,77,103,255,0,42,216,241,93,184,135,92,189,65,208,72,216,252,235,20,49,205,113,75,115,
245,74,79,154,17,126,69,203,83,200,175,174,191,100,233,18,79,10,234,240,200,155,246,220,163,109,222,203,213,79,167,210,190,67,183,111,154,190,172,253,144,102,83,99,175,194,202,24,230,38,82,195,56,251,
194,186,48,175,247,200,240,120,170,60,217,53,95,43,126,104,250,37,172,213,128,40,166,60,114,88,201,156,115,254,247,53,34,198,232,164,172,192,140,238,249,72,81,250,209,183,183,206,167,62,155,170,65,8,83,
157,201,39,98,36,69,97,249,26,250,67,249,209,142,142,105,35,33,150,77,140,120,59,95,173,77,246,135,81,251,211,193,61,152,2,127,42,137,49,17,32,237,43,253,196,3,31,149,62,54,131,170,38,193,255,0,60,202,
245,253,122,208,67,31,230,64,91,27,8,246,44,223,210,159,228,197,30,92,4,83,215,113,201,31,161,166,179,14,1,40,163,251,172,114,127,74,85,156,69,201,109,163,209,84,255,0,65,65,155,38,143,253,151,88,198,
123,3,249,142,244,158,76,140,220,222,171,159,81,17,231,218,154,140,146,242,159,63,251,77,198,107,197,190,53,124,127,178,240,50,203,165,232,146,11,157,95,24,119,86,249,32,63,159,38,166,82,81,87,103,177,
148,229,24,188,231,18,176,216,72,221,191,185,46,236,238,62,37,124,84,209,126,26,233,173,37,237,215,157,122,195,247,86,80,140,59,251,183,160,175,7,240,238,181,226,207,218,35,198,139,101,12,141,107,165,
67,243,207,112,114,98,182,140,126,133,143,108,255,0,74,241,189,62,61,99,226,199,137,138,220,222,113,35,249,151,23,183,44,118,66,157,217,143,242,21,239,218,79,196,205,19,193,122,69,167,134,124,42,190,70,
151,108,228,205,120,199,18,222,203,209,164,111,111,65,218,184,189,178,150,175,99,247,186,124,59,67,134,112,222,199,9,31,107,139,146,214,111,104,46,255,0,228,183,123,189,15,162,44,52,29,31,66,179,182,178,
176,140,181,189,188,97,55,31,188,199,187,31,173,38,185,49,209,116,246,185,132,25,16,12,132,60,231,216,87,159,120,15,198,87,222,34,184,69,132,121,137,213,228,113,242,170,250,147,233,93,134,189,226,237,
46,243,79,107,24,39,83,36,42,25,220,244,144,224,253,223,165,116,198,74,74,231,230,56,140,13,104,98,21,42,203,159,191,95,188,225,60,69,226,41,245,107,130,210,225,10,112,145,47,221,79,254,191,189,121,237,
191,195,59,9,245,105,111,89,139,77,52,133,202,183,69,36,231,165,117,55,170,247,151,78,80,103,203,249,153,187,125,43,181,240,79,134,252,248,227,188,186,143,110,64,242,227,111,126,230,185,37,7,41,31,90,
170,71,42,163,122,47,149,118,67,60,3,240,254,222,197,150,250,236,7,147,254,89,66,195,167,251,71,222,187,127,20,120,155,79,240,158,139,53,254,160,225,18,49,242,38,121,118,236,5,85,241,6,177,101,225,29,
38,75,251,249,86,40,208,124,160,245,99,232,43,207,124,59,160,234,31,19,181,136,252,67,174,134,135,77,133,179,97,96,202,72,56,60,59,14,159,227,93,9,114,171,35,228,177,21,190,177,205,141,198,202,212,215,
227,253,212,75,225,127,14,223,252,65,214,163,241,71,136,199,151,108,191,53,133,131,125,213,29,153,135,242,175,80,242,73,101,41,22,252,113,192,28,254,117,9,141,215,10,225,183,116,207,150,64,253,40,145,
26,50,165,131,174,122,101,142,63,42,218,49,182,172,252,251,49,204,42,102,21,121,165,164,86,137,116,72,148,52,113,177,70,140,69,158,160,113,138,118,232,131,101,98,1,191,189,158,63,10,142,57,139,38,60,195,
140,244,61,233,219,145,91,239,231,105,228,3,156,86,135,142,99,237,44,191,44,138,167,220,255,0,42,137,224,146,61,165,190,97,217,147,145,78,43,42,47,14,170,167,168,32,127,159,202,145,20,48,56,124,115,212,
31,233,88,136,107,72,71,89,2,175,191,255,0,170,156,26,70,92,175,204,127,217,233,78,223,31,63,188,100,110,251,121,254,117,11,108,206,124,194,204,59,208,49,29,219,248,206,41,129,151,251,209,179,14,132,183,
53,33,155,7,7,230,245,83,81,51,9,65,249,49,232,122,31,165,75,40,243,132,62,103,141,53,151,244,153,64,252,0,31,210,187,75,25,7,146,231,208,30,107,128,177,155,119,139,53,98,56,95,181,50,254,68,215,119,103,
159,179,203,142,62,95,233,88,82,217,155,207,116,83,105,54,142,188,213,205,30,66,209,202,221,177,89,187,72,227,28,213,253,33,73,181,185,193,199,203,253,43,90,91,145,83,99,228,239,140,18,31,248,78,53,18,
199,229,5,127,149,112,122,148,159,232,105,180,108,85,32,103,63,123,181,118,159,22,28,205,227,45,76,145,243,111,192,29,184,29,107,136,186,98,44,208,96,48,223,128,125,192,175,211,40,105,66,62,135,205,79,
227,118,41,199,136,222,51,158,57,27,127,10,239,62,27,248,94,195,197,19,220,195,168,177,194,196,49,181,182,224,231,245,175,62,92,177,85,44,50,15,106,211,179,138,242,234,233,45,237,124,198,145,155,106,136,
242,13,114,226,34,231,6,148,173,230,117,82,124,178,90,92,238,252,95,240,155,72,140,255,0,162,205,52,97,115,198,224,107,205,245,79,135,146,199,151,130,232,12,158,1,92,87,67,119,160,120,199,79,140,150,185,
101,192,201,15,41,106,231,111,181,47,20,89,238,19,70,179,168,233,129,147,94,126,30,85,34,172,170,41,29,53,109,45,92,108,114,218,182,141,125,167,50,249,231,204,4,224,16,115,248,83,142,135,168,216,192,110,
36,182,97,17,232,79,79,173,63,82,241,53,214,160,209,165,202,170,249,109,156,42,227,240,174,154,235,198,86,250,191,135,205,136,181,101,145,128,249,247,100,113,94,175,52,226,150,135,46,135,26,183,18,71,
185,88,100,122,86,150,147,36,159,218,86,165,84,147,184,14,15,21,2,218,159,52,29,185,25,192,247,167,52,235,18,134,193,12,167,3,21,114,213,50,86,231,187,72,178,69,99,7,31,117,48,119,99,60,154,243,109,113,
86,61,86,64,195,228,39,53,222,216,222,54,163,162,89,76,120,47,10,159,210,184,143,22,66,86,253,91,4,103,165,120,88,63,118,109,26,226,190,11,157,71,131,239,68,154,105,72,227,80,161,177,146,185,111,206,189,
147,195,208,70,144,233,95,54,119,60,101,179,219,45,94,35,224,50,190,116,150,195,230,149,176,199,45,133,95,90,245,125,119,86,254,192,240,143,219,215,5,161,88,202,143,94,107,206,204,21,170,216,233,194,203,
247,71,207,63,18,177,165,120,243,94,182,251,234,183,242,176,62,163,121,193,252,170,150,145,227,153,164,138,75,80,193,4,10,124,165,64,1,118,39,169,99,208,12,255,0,42,135,198,151,95,218,87,87,151,50,156,
77,60,173,32,111,247,141,55,225,159,194,251,239,25,235,129,4,101,236,225,30,100,172,167,168,236,63,19,253,107,211,161,93,40,174,99,138,173,30,107,153,243,120,123,81,215,181,73,167,177,129,166,86,57,105,
137,37,55,119,195,30,191,227,75,113,240,247,93,183,132,72,97,87,231,238,163,100,215,210,99,194,114,233,54,233,12,118,128,34,252,170,170,0,3,232,42,186,248,86,242,226,79,222,236,130,44,224,179,16,107,173,
206,47,91,156,60,242,143,186,145,224,62,9,241,30,171,225,157,114,24,76,191,102,134,71,85,154,27,165,38,54,92,140,146,62,149,237,191,180,22,135,225,171,155,155,29,111,194,172,12,114,32,91,241,6,60,161,
33,232,64,236,79,57,237,90,126,33,248,101,166,234,154,51,64,21,90,229,121,142,225,135,32,250,125,43,111,192,127,14,52,13,23,78,184,177,189,118,212,5,218,226,80,217,9,199,76,15,99,94,117,106,158,209,217,
108,118,82,180,125,238,167,205,55,202,99,87,104,65,196,96,49,201,251,198,181,52,159,18,11,189,30,75,104,173,99,136,25,150,87,144,28,177,97,211,233,212,212,254,59,240,232,240,253,213,196,75,184,196,55,
44,77,158,89,71,25,34,185,15,15,177,88,167,140,182,209,144,216,7,175,106,197,175,221,180,117,167,119,115,171,241,6,171,61,221,157,157,188,140,210,69,110,25,144,228,253,230,35,36,250,253,218,198,220,25,
135,174,56,171,250,165,231,153,99,97,22,54,42,161,252,121,60,214,111,152,20,156,140,241,222,184,246,53,39,134,102,134,69,116,98,146,41,200,101,60,131,235,94,167,31,199,91,211,225,191,177,79,103,21,197,
242,225,68,242,0,80,143,82,189,205,121,42,183,169,169,50,91,60,84,59,50,214,135,105,39,197,45,97,208,168,91,69,83,201,85,132,99,242,170,159,240,176,117,54,228,199,105,255,0,126,22,185,109,222,244,6,239,
158,149,60,168,163,173,135,226,22,165,27,22,81,2,177,227,229,133,64,172,45,123,88,184,214,53,15,181,93,108,243,118,133,249,20,40,192,250,85,21,110,70,58,211,100,82,217,236,212,134,125,7,251,50,252,80,
181,209,102,159,195,186,148,235,111,13,212,158,101,180,210,54,20,57,24,42,79,108,241,143,113,95,77,22,221,200,231,61,62,149,249,239,103,4,16,90,170,205,19,187,176,220,102,141,190,239,166,7,126,43,190,
240,183,199,175,21,120,36,29,58,27,200,181,59,72,120,137,111,148,182,213,235,193,200,63,134,107,134,173,30,103,116,116,211,169,101,102,125,156,176,249,131,115,30,59,45,121,199,198,239,137,118,255,0,15,
60,43,58,193,50,157,94,233,76,86,241,131,202,100,125,243,236,7,63,92,87,207,58,247,237,77,227,77,82,51,29,189,197,182,154,173,198,109,32,27,191,2,196,226,184,219,171,139,166,141,181,61,90,252,205,119,
114,164,121,151,50,121,141,26,145,203,117,206,227,158,61,42,41,225,221,239,32,149,93,52,11,31,138,26,173,156,128,73,55,218,162,232,68,163,159,206,187,105,181,8,111,188,62,46,30,33,113,27,46,252,117,235,
154,241,105,188,185,165,148,219,150,17,47,220,221,213,189,205,117,254,9,241,6,251,55,176,152,238,219,243,199,207,230,63,173,122,139,177,194,251,154,241,248,234,59,31,15,234,90,44,86,140,45,238,14,21,164,
114,198,46,49,145,238,114,115,245,174,86,73,70,224,168,237,36,99,166,70,43,95,85,181,182,187,186,185,150,230,79,236,235,167,37,163,136,161,49,184,3,239,110,237,187,233,214,160,186,208,26,215,195,144,234,
141,60,46,36,152,67,228,161,203,46,65,32,183,166,113,210,178,178,139,53,90,163,52,207,51,46,214,148,237,244,38,174,233,122,236,186,74,186,197,5,180,142,193,129,146,84,201,195,12,17,215,166,51,249,212,
247,222,27,251,14,133,103,168,155,184,101,251,67,236,48,198,114,99,249,119,13,199,215,29,187,86,36,140,156,96,159,122,96,93,91,213,254,208,75,137,45,161,150,32,193,154,221,114,168,192,118,235,145,154,
147,79,212,162,182,212,30,237,225,5,215,47,20,74,62,64,253,129,7,248,71,244,21,156,207,158,49,138,103,227,201,164,6,142,161,168,37,236,194,100,128,67,43,47,239,118,159,149,155,185,3,183,210,171,121,141,
192,39,63,141,86,86,206,7,189,89,85,81,9,118,245,192,199,111,122,96,54,73,25,87,40,62,106,238,60,47,240,51,199,158,40,210,109,181,45,59,194,90,149,253,165,224,47,13,196,32,4,117,206,50,57,245,6,184,219,
85,243,82,88,146,38,150,119,3,203,11,219,158,120,250,87,210,255,0,13,126,38,120,171,73,248,127,162,216,217,93,221,91,155,84,251,47,217,130,146,62,94,248,234,1,226,162,82,113,69,69,92,240,255,0,136,31,
8,252,87,240,227,77,183,188,241,23,135,111,180,123,107,137,124,168,167,184,192,87,124,19,180,99,190,1,174,51,78,211,239,181,75,235,75,59,88,222,123,155,169,82,8,33,65,150,145,217,130,170,143,114,72,21,
244,39,237,1,226,143,22,124,67,240,189,149,172,201,119,170,65,13,218,186,69,111,111,35,108,249,28,19,140,126,25,175,34,209,244,31,19,104,122,182,145,168,38,133,170,164,182,119,112,206,172,44,165,249,89,
28,48,237,234,5,84,101,120,220,150,181,59,193,251,44,252,80,101,207,252,32,58,162,255,0,192,211,255,0,138,175,61,241,239,130,181,127,135,250,195,105,90,222,147,117,164,234,155,18,85,134,224,255,0,203,
54,206,27,241,199,233,95,96,199,241,123,199,118,112,196,179,106,90,163,92,56,222,236,182,174,196,103,182,0,199,25,29,171,231,111,141,171,226,239,28,120,238,11,251,203,77,71,87,151,236,177,196,215,43,106,
231,128,205,128,112,48,48,13,76,103,119,107,13,196,225,188,33,160,120,139,199,50,38,131,163,232,205,171,220,65,230,93,148,183,65,230,132,249,85,139,54,71,202,9,94,15,173,117,112,254,206,255,0,17,102,153,
161,79,3,106,79,46,51,177,80,147,140,227,61,122,102,151,225,50,248,195,194,30,52,154,235,75,182,191,210,46,102,180,146,1,118,208,60,123,65,42,216,12,71,95,148,87,165,220,120,223,226,52,178,163,255,0,108,
235,230,108,144,100,111,48,2,61,51,142,106,101,39,23,162,52,140,110,183,62,99,190,177,184,182,190,184,182,150,38,130,120,36,104,228,137,184,40,192,144,65,247,4,26,210,240,199,133,53,143,19,59,38,153,165,
205,169,54,240,152,139,156,31,74,213,212,252,39,226,27,141,127,85,152,232,218,131,9,174,36,117,145,173,95,15,151,39,61,57,174,171,225,254,131,226,93,55,195,119,168,144,106,26,92,203,118,178,13,177,178,
72,234,87,28,113,147,200,171,148,157,180,51,140,110,204,141,83,224,191,141,244,207,15,234,58,165,199,134,46,109,180,219,21,50,220,93,54,54,196,7,4,158,127,74,243,221,178,133,243,15,67,222,189,206,241,
124,107,121,163,234,214,215,55,122,181,228,18,91,74,166,214,102,145,196,140,71,3,7,190,113,239,94,89,63,130,124,64,44,194,127,99,94,171,231,238,249,45,159,229,68,36,218,212,115,138,76,189,225,223,0,235,
250,228,118,166,199,73,107,159,60,3,28,128,129,187,61,250,214,183,196,47,130,190,47,248,125,161,89,106,218,230,142,52,251,27,169,254,207,12,190,114,57,103,42,91,24,12,72,224,30,181,232,126,13,91,173,39,
194,218,66,92,69,123,20,235,14,211,28,42,84,169,4,140,17,235,84,126,45,73,173,120,187,67,177,179,183,179,189,157,225,153,100,34,76,159,225,35,60,159,122,133,55,205,107,7,46,135,136,88,233,183,55,218,149,
173,140,8,36,184,184,149,34,141,73,198,89,142,0,207,110,77,123,178,126,198,255,0,19,254,207,189,252,57,111,31,126,111,98,35,255,0,66,175,45,95,5,120,150,203,82,179,157,116,171,132,49,202,175,184,129,129,
130,14,122,251,87,180,120,131,196,90,180,119,76,14,163,120,202,9,218,82,229,130,227,232,27,138,117,36,213,172,56,165,212,240,143,29,120,15,89,240,38,186,218,94,175,111,29,181,238,193,39,151,28,170,227,
105,200,28,169,61,193,172,61,54,206,230,234,232,195,12,66,121,72,225,122,215,127,241,22,75,173,115,95,130,117,223,112,177,219,44,109,43,117,45,146,122,147,239,138,199,240,16,109,39,197,233,115,115,251,
136,54,74,166,70,193,25,40,64,253,113,85,204,249,110,79,42,184,144,120,19,196,23,22,229,227,208,221,246,243,184,47,24,252,235,152,186,211,231,179,154,88,229,93,146,70,197,93,72,232,71,81,94,241,30,165,
124,48,34,184,48,35,0,73,50,143,241,239,94,87,226,237,46,243,251,107,84,153,209,54,75,51,50,50,186,157,195,215,131,81,9,73,238,92,162,146,220,204,240,254,143,123,173,179,69,101,108,147,178,242,196,241,
138,238,108,254,4,120,183,86,210,46,175,160,178,179,142,218,222,35,43,180,151,40,140,84,12,156,2,121,60,86,55,195,203,225,162,88,234,233,113,41,182,146,97,31,150,112,9,56,39,56,244,234,43,185,210,117,
201,218,222,81,109,169,49,82,140,49,113,112,0,57,30,133,168,148,164,158,133,198,41,173,207,23,120,100,142,56,159,112,195,31,90,247,159,132,159,179,15,136,254,44,120,110,13,99,77,213,116,27,75,71,118,143,
101,229,203,44,185,83,131,149,10,113,94,81,63,131,117,75,136,162,141,5,160,96,127,138,242,16,63,87,175,79,240,156,58,166,133,224,219,123,40,181,123,91,121,85,221,229,134,59,232,193,0,227,174,31,214,174,
82,118,208,81,90,154,127,22,191,100,255,0,16,124,49,240,141,222,191,119,173,232,119,246,182,140,130,72,108,174,24,203,243,48,95,186,87,156,18,59,215,129,46,86,228,35,56,199,230,43,216,60,64,186,222,177,
164,221,90,182,191,105,60,82,99,48,205,168,197,134,193,247,110,188,87,1,39,195,189,74,88,222,101,190,210,87,105,0,70,218,140,65,142,123,142,113,68,91,107,82,229,21,29,153,238,218,127,236,99,171,223,104,
182,154,146,120,203,195,66,59,168,22,112,161,221,138,134,80,192,31,151,175,53,229,31,24,62,13,93,124,46,22,82,205,173,233,218,184,184,102,76,233,236,79,150,71,174,71,127,233,91,183,146,93,67,165,88,180,
186,205,148,146,69,2,199,44,9,168,35,47,202,49,128,3,122,1,210,188,247,196,179,27,184,4,75,116,174,161,247,109,50,103,21,143,52,175,170,58,163,8,202,23,185,141,225,187,47,237,109,106,206,196,220,197,108,
46,102,88,124,233,135,200,155,142,50,125,171,182,190,248,83,61,140,156,235,22,13,134,35,228,7,177,235,92,158,129,225,121,238,173,110,245,104,239,109,82,61,61,210,73,34,50,226,70,92,245,81,222,175,235,
26,181,155,106,18,181,173,220,146,64,206,74,179,177,207,90,138,146,125,14,204,36,97,127,124,236,39,132,217,108,183,14,178,108,80,187,151,161,226,163,142,233,225,124,175,39,167,35,34,170,199,38,235,120,
152,28,229,7,62,180,221,197,112,107,195,150,231,236,20,127,135,31,66,220,55,77,20,203,38,1,42,115,134,228,83,111,111,22,226,225,228,84,88,67,115,229,175,65,85,188,211,207,25,62,244,199,147,115,19,192,
250,84,155,161,102,147,167,165,68,38,219,223,20,146,146,122,113,85,247,101,143,173,6,168,181,230,116,231,156,211,209,137,53,84,55,165,73,187,145,205,49,178,244,114,17,193,169,132,152,198,42,154,177,42,
42,84,96,7,191,173,73,147,44,25,11,46,51,72,27,220,212,12,219,78,5,2,64,122,245,166,34,217,98,57,233,222,144,201,198,5,66,36,202,251,208,100,166,64,255,0,188,216,235,80,221,124,177,69,245,52,229,125,205,
233,244,166,222,177,242,99,207,7,38,169,8,133,185,110,58,212,214,141,150,35,218,171,70,185,246,169,237,177,188,156,230,130,139,77,150,83,180,116,21,210,124,63,152,237,212,243,221,99,111,252,124,127,141,
115,13,39,151,146,63,28,87,67,224,86,2,77,67,211,200,82,127,9,22,145,197,136,95,187,103,154,120,233,177,226,75,241,159,249,104,113,92,216,53,211,124,66,93,190,40,191,207,5,164,200,226,185,130,222,181,
198,247,63,76,194,235,70,15,201,22,173,228,249,128,38,190,157,253,144,239,154,45,67,92,139,204,217,186,5,111,174,27,167,235,95,47,64,217,97,222,190,142,253,145,100,11,226,171,248,241,150,107,54,35,140,
224,134,90,218,131,181,88,156,92,65,14,124,159,16,188,191,84,125,101,12,203,50,96,200,78,70,118,170,243,82,172,97,91,136,87,234,71,63,165,86,88,67,125,248,35,115,239,141,198,129,31,205,196,114,12,119,
5,120,253,107,233,143,230,166,139,77,36,192,252,168,235,234,118,12,254,166,148,199,35,29,195,124,131,191,153,130,71,211,2,160,107,168,225,97,186,69,243,113,145,25,96,196,143,233,82,173,196,23,10,4,216,
143,211,0,28,254,180,204,236,74,175,26,229,72,27,189,9,63,214,131,40,141,73,206,224,6,120,25,168,219,200,141,92,153,186,12,150,242,246,241,95,51,124,126,253,161,100,17,220,120,127,195,247,13,28,120,41,
113,118,132,2,253,136,83,233,89,84,168,169,171,179,223,201,114,60,78,121,137,84,40,45,58,190,137,26,127,29,255,0,104,200,180,181,159,69,240,212,255,0,233,56,41,113,125,25,63,41,238,169,254,53,243,14,147,
97,123,227,45,96,197,27,112,199,124,211,200,78,216,215,187,49,255,0,57,170,122,46,143,125,226,253,89,109,173,135,36,230,73,95,133,141,123,179,26,244,27,171,139,13,23,75,254,200,209,179,246,126,26,123,
163,247,238,24,119,62,195,176,175,26,117,157,71,115,250,151,45,203,240,156,57,134,88,76,20,111,55,188,186,250,191,209,9,168,92,219,233,54,127,217,26,72,41,105,25,196,179,116,105,219,187,31,240,171,126,
13,240,229,239,136,181,36,183,129,213,85,72,105,36,115,132,69,207,36,213,111,12,248,118,231,196,218,130,219,219,96,146,55,201,35,112,177,175,118,99,233,91,126,43,241,61,158,137,98,124,63,160,54,32,7,253,
42,243,248,174,27,255,0,137,172,215,118,113,214,169,41,75,216,210,214,111,119,219,205,254,135,111,175,124,79,183,240,254,154,124,63,225,183,205,154,13,183,87,185,195,206,115,206,61,22,151,194,62,34,186,
214,238,226,182,128,52,183,18,16,161,122,254,53,225,246,114,205,36,201,109,10,180,146,200,216,85,94,73,62,130,190,187,248,49,240,190,79,9,232,49,94,95,192,87,84,190,92,249,141,252,9,253,213,254,166,186,
105,74,85,37,228,124,214,105,245,92,167,13,125,231,47,189,190,236,234,244,31,12,198,176,69,12,192,60,106,119,205,39,252,244,127,79,160,173,237,107,91,178,240,182,155,37,237,212,139,28,16,175,60,243,199,
106,102,173,168,90,120,111,77,146,234,238,85,130,24,151,59,152,215,155,232,122,45,223,197,251,227,171,106,30,108,126,30,130,102,22,214,155,127,227,224,131,213,191,217,231,244,174,246,237,162,220,252,194,
82,141,72,203,19,138,149,169,199,127,55,217,121,178,93,15,71,212,126,46,107,75,175,234,209,201,30,131,3,230,202,197,177,251,220,127,17,7,181,122,212,44,240,199,181,22,72,213,64,194,231,0,1,248,211,45,
109,205,172,105,20,106,171,26,141,162,61,160,1,236,48,106,194,249,145,169,98,60,177,215,112,198,43,104,70,219,159,159,102,121,148,243,10,139,78,88,71,225,143,101,254,125,216,71,35,73,209,203,183,80,21,
114,79,235,78,85,225,148,200,200,216,249,149,200,31,166,105,178,76,91,12,133,143,187,17,143,207,20,168,100,101,27,149,195,14,65,198,65,173,79,13,145,54,208,119,63,200,64,244,249,79,224,42,77,177,103,33,
227,207,251,41,138,145,158,102,193,80,79,163,70,159,167,52,138,36,96,55,146,158,229,72,34,130,78,117,182,55,32,145,254,240,4,212,114,44,77,149,117,220,63,218,24,63,157,55,203,65,206,224,203,140,117,164,
249,51,180,202,195,217,142,127,152,174,107,150,59,228,35,30,111,11,219,25,197,12,22,69,198,242,184,254,232,28,211,93,91,131,149,113,250,212,111,9,207,202,160,127,192,232,2,77,230,48,0,149,136,29,3,17,
138,99,15,48,142,54,183,108,28,83,60,231,69,32,168,35,216,103,242,166,60,131,190,224,61,72,164,216,207,50,208,49,117,226,13,73,136,59,133,220,135,61,186,154,238,237,248,183,151,233,254,53,193,248,61,183,
52,242,131,203,220,72,220,245,230,187,123,121,8,183,147,253,223,235,88,82,248,89,180,247,69,114,228,116,60,214,142,134,192,233,247,153,28,97,186,251,41,172,153,27,25,199,21,102,198,83,30,155,114,65,35,
131,252,171,106,59,153,212,216,249,63,226,146,147,227,157,80,131,194,202,70,223,165,112,122,194,186,194,140,122,111,33,113,212,112,51,93,127,196,107,205,254,48,213,88,245,55,12,0,252,107,138,214,36,44,
201,134,59,121,35,159,207,249,87,233,116,244,163,31,68,124,236,190,54,84,133,217,152,157,163,61,148,154,245,207,129,54,17,93,45,253,243,133,51,196,191,121,187,100,246,252,43,199,227,236,185,199,96,196,
254,100,215,171,252,17,214,237,108,174,175,109,38,149,35,19,15,148,177,193,99,94,94,63,153,208,151,41,219,135,178,154,185,145,227,207,138,87,199,80,150,221,45,161,88,161,102,92,114,73,199,83,154,228,172,
254,34,45,227,44,115,219,36,97,248,222,181,223,120,211,225,94,159,125,113,44,182,247,178,43,57,46,78,65,207,61,253,171,205,47,62,29,92,90,201,186,43,149,101,86,207,43,143,235,88,225,94,26,84,210,74,198,
149,148,249,181,101,95,29,88,197,11,69,115,16,3,204,235,143,90,231,45,165,40,87,3,60,102,187,111,17,104,179,234,58,108,49,198,3,203,25,233,158,213,201,75,166,220,233,188,220,66,99,220,120,61,69,122,180,
106,70,81,229,185,201,40,187,220,153,174,136,78,50,6,126,237,102,201,51,54,253,199,3,178,214,148,109,27,2,123,117,53,29,244,113,173,174,70,222,153,224,244,245,53,169,29,79,83,240,45,241,189,240,173,150,
15,40,129,121,170,254,46,143,116,49,200,15,42,113,89,159,11,181,29,246,50,91,122,29,192,26,233,181,235,95,54,206,84,11,150,97,145,197,120,95,194,174,117,202,60,244,236,115,158,23,190,48,234,144,22,27,
65,249,78,59,147,94,155,241,82,237,227,248,114,235,187,98,147,16,7,241,53,227,118,114,24,174,17,179,134,70,227,53,234,63,18,175,205,215,194,251,105,131,170,128,209,100,145,159,90,195,49,143,189,9,162,
48,146,247,101,22,124,203,169,94,73,52,135,50,49,0,250,244,175,162,191,100,201,81,180,255,0,20,59,62,100,84,64,23,36,156,97,142,107,230,139,139,140,205,32,36,49,98,121,31,90,244,47,132,62,54,185,240,76,
151,183,144,9,48,203,178,101,3,42,233,131,199,177,171,156,121,161,98,181,71,189,106,23,178,201,112,88,202,219,62,191,165,107,94,93,56,240,124,37,88,130,91,12,71,215,189,113,22,30,53,209,188,65,102,179,
193,123,18,59,47,207,20,140,21,149,187,140,26,221,215,60,79,164,233,190,11,133,166,212,237,84,238,206,209,32,39,242,28,215,124,185,82,137,224,168,206,242,186,27,167,248,146,109,53,199,153,33,146,15,226,
83,91,199,92,251,60,109,50,28,237,92,133,94,252,113,95,59,120,163,226,163,77,116,145,105,137,186,209,95,45,43,169,30,103,176,244,21,218,217,120,194,45,87,75,141,226,114,142,202,55,70,79,35,233,92,152,
190,75,167,19,187,11,78,106,62,249,99,86,243,60,111,225,187,137,110,160,16,95,194,206,65,199,241,117,35,232,65,21,228,58,86,255,0,181,60,101,88,50,240,195,250,87,172,234,218,225,211,116,89,103,182,143,
112,200,37,79,57,83,193,63,90,225,238,252,55,58,233,178,107,177,144,109,100,159,202,117,94,168,197,114,15,208,214,9,94,147,103,95,55,44,212,89,30,163,39,153,246,84,84,35,247,99,190,121,220,122,126,117,
93,151,99,72,25,182,178,156,109,238,104,97,42,201,104,91,114,171,40,8,199,211,56,162,8,210,109,65,99,119,8,143,40,83,33,60,0,79,95,165,121,242,59,34,1,136,246,169,55,99,191,181,123,47,142,190,24,233,26,
31,134,111,174,98,136,219,253,140,70,96,188,105,131,11,205,216,4,99,60,117,253,61,43,197,252,192,114,15,7,176,245,172,111,205,177,161,211,120,87,192,250,183,139,181,11,91,107,43,102,69,157,130,139,153,
178,176,167,56,37,155,28,1,85,239,60,47,53,133,253,213,148,151,118,166,107,121,90,23,219,46,87,114,146,14,27,24,60,142,162,182,116,127,24,248,130,207,69,188,240,196,119,147,90,105,210,204,179,73,111,247,
65,144,46,57,61,122,118,170,26,121,150,198,212,69,44,115,171,121,172,229,128,4,30,48,8,231,235,249,210,114,42,204,191,224,239,133,218,199,142,53,120,244,237,33,236,238,46,156,112,62,208,160,123,12,251,
156,15,198,178,252,101,224,189,95,192,186,197,206,155,171,218,173,181,229,180,173,12,241,9,21,204,110,189,65,218,79,255,0,94,187,111,133,190,38,58,7,137,162,185,42,209,153,32,75,97,231,46,0,98,224,146,
15,110,1,25,247,174,71,226,102,177,169,234,30,47,212,229,213,100,89,239,100,113,35,200,189,14,85,74,253,120,239,239,80,164,175,98,156,89,205,67,168,77,15,0,252,181,94,225,158,123,137,36,207,222,59,176,
105,3,18,167,243,165,183,186,88,100,42,200,36,220,49,180,156,117,170,36,137,100,249,136,218,21,151,168,167,24,196,170,95,118,242,135,230,86,232,5,46,163,106,99,191,33,70,55,42,237,237,156,140,255,0,90,
171,12,143,28,193,136,192,83,131,74,229,88,91,139,121,21,65,25,85,110,15,29,7,210,139,41,142,159,121,109,50,72,70,8,37,191,30,127,10,214,184,137,225,89,237,229,98,178,41,199,205,197,98,94,67,17,144,132,
147,0,46,91,119,210,170,44,150,142,243,95,215,173,39,158,38,158,47,182,57,141,132,108,31,10,51,235,142,181,90,29,106,193,124,57,38,154,214,179,25,30,81,55,154,37,3,14,20,129,198,58,115,92,100,126,108,
18,69,20,132,141,160,16,164,244,4,100,127,63,214,175,171,109,244,252,40,144,209,210,190,187,98,222,25,26,104,177,151,206,18,121,223,104,243,191,229,166,208,62,238,58,96,116,172,13,221,61,104,105,23,106,
224,16,221,249,166,198,203,187,230,206,58,253,106,70,119,30,15,240,133,159,136,99,132,222,221,178,92,220,28,69,26,156,241,208,51,122,100,130,63,224,53,175,226,79,132,241,248,118,206,250,91,171,166,142,
104,84,121,81,197,251,197,114,92,12,147,198,23,27,189,242,0,199,53,206,248,71,92,146,199,79,184,242,176,178,194,119,71,55,120,242,202,120,255,0,190,91,254,250,53,220,248,131,226,86,157,121,224,57,236,
101,188,23,55,254,96,142,55,146,61,174,80,224,156,242,115,222,185,164,228,182,54,138,93,78,31,194,222,24,179,212,175,254,199,119,35,153,110,7,151,3,198,219,66,63,171,113,200,199,106,244,13,103,225,14,
131,162,252,61,109,113,117,89,46,110,163,184,65,45,168,56,253,209,109,187,193,199,63,54,225,198,72,249,73,224,215,156,232,122,228,49,234,16,73,30,249,60,166,220,197,20,146,7,173,84,215,53,141,79,86,186,
152,137,38,75,8,199,202,178,18,0,0,118,30,248,167,9,73,189,66,113,93,8,225,155,201,103,184,133,26,222,62,90,61,199,45,140,227,25,226,164,181,215,53,91,139,132,138,29,66,232,72,236,2,143,180,21,228,251,
147,138,167,127,120,210,108,82,54,1,24,92,109,199,60,102,179,216,250,140,115,210,183,70,44,233,52,223,24,94,219,78,12,250,133,227,198,114,25,86,118,228,30,163,175,214,170,183,136,181,38,108,157,66,239,
30,243,177,254,181,139,188,0,57,249,179,248,84,129,178,165,129,250,226,168,70,185,241,22,160,253,111,174,78,56,255,0,94,223,227,81,255,0,109,95,70,193,190,211,55,191,239,91,159,214,179,81,145,98,57,102,
13,158,56,226,148,75,181,149,136,13,236,122,26,0,190,154,164,190,76,133,174,110,60,221,195,104,222,113,142,231,57,235,210,153,253,169,114,217,13,115,41,63,239,154,173,187,237,10,197,16,111,94,170,13,64,
206,20,119,160,11,127,110,155,129,231,202,71,251,231,138,185,30,173,42,218,200,129,84,21,0,121,153,59,241,159,92,214,73,97,193,61,13,61,38,93,217,98,79,173,3,46,69,169,92,67,149,18,18,167,168,111,155,
63,157,54,107,233,37,99,146,87,158,54,28,85,45,197,91,32,228,118,166,249,131,175,122,46,5,205,205,203,110,98,190,228,211,124,214,224,243,143,173,87,44,20,46,27,131,67,54,213,60,131,219,34,129,19,181,195,
118,226,155,230,49,201,206,127,26,172,178,21,198,58,212,246,182,237,119,38,213,116,64,15,87,108,80,22,6,184,61,55,26,88,110,124,165,113,133,98,195,31,48,233,238,43,83,86,177,79,13,234,19,90,72,240,222,
156,99,116,100,50,224,128,70,8,172,45,195,7,39,30,148,12,145,166,32,99,57,252,105,187,189,241,238,42,18,212,161,143,78,148,138,38,243,142,0,2,145,166,60,96,231,235,81,110,224,211,134,205,195,36,133,61,
78,51,138,64,72,38,4,140,142,245,42,222,249,59,246,40,59,151,111,204,58,85,73,10,231,229,233,235,235,66,228,228,14,123,211,40,153,165,238,41,130,70,235,214,162,223,233,197,33,152,175,42,112,105,220,161,
219,207,174,13,49,216,144,79,235,79,154,233,102,181,142,47,38,53,100,36,153,0,249,155,61,141,85,222,20,245,168,52,136,246,141,214,49,38,8,66,113,184,116,250,83,112,65,25,24,61,122,84,150,186,148,150,205,
181,91,247,77,195,41,25,6,155,125,11,195,40,112,51,3,125,199,29,42,25,188,94,167,162,88,191,252,75,237,206,127,128,82,179,118,235,85,244,214,45,166,219,30,135,96,171,50,97,85,118,184,39,186,145,210,188,
9,252,76,253,163,12,239,70,30,136,77,221,121,164,124,112,115,154,99,72,88,14,41,4,131,144,73,172,206,177,178,157,202,106,21,96,196,10,146,78,65,201,170,223,197,65,162,45,109,218,212,229,82,205,215,138,
100,127,47,90,126,236,26,98,185,48,207,76,126,85,102,56,94,72,221,212,124,168,57,230,170,41,35,189,72,173,180,142,78,59,210,33,143,70,193,245,21,210,219,248,46,226,227,194,243,107,113,221,90,152,98,36,
52,44,255,0,188,24,239,138,230,145,155,140,40,25,227,173,57,102,101,27,67,176,207,85,7,138,163,41,115,61,157,135,43,103,167,20,141,249,247,168,213,190,111,198,165,10,199,230,193,198,123,10,69,108,36,76,
119,17,78,190,27,109,98,98,123,158,42,73,173,225,134,37,101,144,249,167,172,108,42,43,207,154,198,50,125,77,80,175,114,188,36,50,19,78,183,109,178,55,165,50,215,5,122,254,84,232,248,145,134,105,20,139,
18,54,229,60,86,247,130,100,219,117,116,190,182,205,250,16,127,165,115,210,17,229,147,158,125,43,99,193,50,238,213,217,58,110,183,152,127,227,132,210,57,171,255,0,13,156,111,196,124,255,0,194,77,114,73,
225,128,60,215,34,199,63,74,236,190,38,41,95,16,187,30,67,40,35,31,74,226,206,61,49,92,146,220,253,23,2,249,176,212,223,146,44,91,157,173,138,247,159,217,86,224,71,227,243,25,221,137,45,164,24,76,228,
227,7,250,87,129,66,199,60,87,182,254,204,183,70,47,137,154,104,60,6,73,20,237,92,145,148,61,170,233,63,222,68,188,218,28,249,94,33,127,117,254,71,217,138,241,238,3,40,88,140,242,223,48,252,9,171,75,230,
55,202,210,108,61,87,129,205,71,26,202,23,11,34,177,29,140,123,9,253,115,154,111,152,89,66,202,235,207,76,184,78,125,143,255,0,94,190,168,254,95,101,165,154,109,165,60,181,147,29,218,46,15,230,41,170,
187,115,152,213,35,60,156,161,96,191,225,76,86,84,59,163,156,179,1,215,119,63,66,107,231,207,143,223,180,8,177,142,93,11,64,159,51,21,197,197,218,159,95,225,92,127,58,206,165,69,77,93,158,222,79,147,98,
115,172,74,195,225,215,171,232,144,159,31,190,59,38,158,179,248,127,67,149,90,79,187,113,115,25,252,192,175,153,44,180,203,207,23,106,139,109,110,55,51,29,206,238,126,88,215,187,49,244,166,88,217,94,248,
171,84,242,97,249,228,111,153,165,110,138,59,179,26,237,218,75,93,14,204,233,154,89,38,35,255,0,31,23,95,197,59,15,228,190,130,188,58,149,29,87,118,127,79,229,249,110,31,33,194,172,38,21,123,221,95,234,
255,0,68,18,75,107,160,233,255,0,217,26,83,102,2,65,185,185,3,13,59,255,0,241,35,176,169,124,59,225,219,159,18,106,49,218,90,38,88,242,206,223,117,23,185,39,210,162,208,244,27,159,17,106,9,107,104,187,
217,185,201,232,170,58,146,125,43,162,241,55,138,109,60,43,166,201,160,232,114,9,27,32,93,223,175,89,72,28,170,159,238,143,214,166,54,221,145,86,164,185,189,149,45,102,247,125,188,223,232,55,197,94,40,
179,240,222,159,39,135,244,6,28,31,244,187,213,251,211,145,212,3,253,220,215,158,43,75,113,48,81,153,36,144,240,0,201,205,66,204,215,18,42,170,146,236,112,20,114,77,125,13,240,95,224,107,192,214,250,198,
181,31,207,32,221,20,100,125,192,64,253,127,149,36,165,90,86,91,28,152,172,69,12,166,131,156,221,219,251,219,53,126,11,252,21,143,75,179,135,90,213,17,159,86,148,135,134,30,10,164,69,126,247,251,220,143,
167,53,239,247,26,213,158,135,163,188,247,210,8,237,237,99,200,45,216,14,213,74,70,182,240,254,155,37,204,206,144,193,18,114,204,112,0,21,230,75,13,231,198,173,99,123,180,182,158,20,181,115,141,160,238,
185,97,219,233,94,180,98,169,171,35,241,236,85,121,102,19,150,47,25,59,66,59,190,222,75,204,126,159,5,255,0,198,173,113,111,110,227,150,219,194,182,210,101,33,0,131,114,65,254,85,235,246,240,193,97,2,
65,18,44,86,232,161,99,141,19,0,0,58,99,29,42,11,56,45,244,219,88,160,183,141,98,138,37,10,171,28,101,84,1,252,170,220,55,113,72,0,220,168,79,82,205,154,233,132,45,171,220,252,223,53,204,229,152,77,70,
43,150,156,126,24,254,175,204,148,201,30,213,42,145,143,247,122,255,0,42,116,119,12,141,144,25,207,76,176,200,252,13,69,11,196,237,251,167,89,1,244,60,84,175,28,147,0,8,218,7,241,69,134,254,162,181,60,
2,99,124,120,206,213,252,176,63,173,39,150,92,239,243,95,29,123,127,42,132,66,200,187,88,224,118,102,81,205,58,37,45,140,24,220,119,59,122,80,73,39,219,37,183,110,103,109,157,198,210,63,149,34,234,8,220,
51,179,115,143,186,127,157,57,64,141,182,249,15,32,252,49,65,145,247,97,146,69,3,248,122,241,249,83,32,229,164,158,95,226,140,40,245,53,19,111,216,65,33,147,168,193,53,46,12,124,170,202,63,221,98,71,243,
168,247,22,110,9,99,238,121,174,82,200,195,71,209,139,6,31,90,115,72,172,184,24,192,237,154,71,220,6,124,220,15,238,237,31,206,155,242,201,215,114,183,233,72,98,182,8,202,47,63,236,154,138,91,134,142,
54,195,103,140,237,53,21,170,221,198,211,172,174,36,82,228,160,56,27,87,211,142,191,141,65,169,178,199,99,112,239,46,210,177,179,112,15,63,41,239,83,39,160,214,231,153,120,26,233,166,242,128,251,155,89,
189,171,190,70,255,0,70,148,119,219,253,69,112,254,5,140,8,33,37,121,242,207,243,174,217,79,238,36,36,118,28,126,85,149,63,128,218,127,17,93,129,97,215,21,36,50,108,211,39,7,248,179,205,49,254,233,250,
81,207,246,68,141,208,243,252,235,106,27,153,213,216,249,11,226,4,187,188,85,169,41,92,31,180,62,15,227,156,87,37,169,178,143,36,231,141,157,7,173,116,94,48,63,241,83,95,146,51,39,156,252,142,157,122,
215,47,124,197,101,218,160,144,126,81,248,250,87,233,80,254,20,125,15,158,127,19,35,143,9,176,48,37,212,28,140,119,250,213,251,75,43,155,219,171,120,109,80,181,203,62,2,39,94,107,61,91,104,206,120,206,
51,215,154,246,15,130,250,76,83,91,222,234,50,5,50,6,216,141,142,128,14,77,121,248,170,235,15,77,205,157,84,97,237,37,202,113,247,158,7,241,53,172,121,23,6,16,64,249,12,164,159,198,185,109,66,227,196,
250,46,76,159,190,12,57,63,120,87,167,235,30,62,254,211,215,229,211,160,132,45,186,18,12,141,247,155,29,235,142,213,124,93,111,111,172,201,101,117,27,20,60,6,31,74,229,161,82,172,191,137,20,107,86,48,
143,194,114,86,254,63,184,139,43,61,186,177,199,99,142,105,218,167,137,161,215,44,214,31,33,146,64,222,185,21,31,142,244,53,176,184,142,225,21,80,74,1,32,118,174,118,199,118,127,222,224,87,169,8,66,73,
78,40,228,212,210,242,211,229,0,169,237,197,85,213,21,99,180,118,0,231,185,168,229,87,243,190,82,72,206,14,42,189,243,49,130,80,252,12,224,230,182,232,69,181,58,31,2,234,143,165,234,176,174,253,171,32,
219,94,149,121,112,243,32,33,201,175,20,183,149,162,158,39,83,243,41,6,189,138,194,225,111,180,216,37,7,134,80,77,121,88,184,106,166,117,83,125,14,99,81,183,107,59,236,129,195,29,213,211,248,131,82,89,
254,25,203,100,236,9,220,140,63,62,159,173,69,121,167,173,244,32,31,149,151,163,85,191,18,248,85,33,240,79,155,20,210,59,170,111,219,129,131,138,228,175,86,50,166,148,183,20,105,73,78,241,216,249,186,
248,249,55,18,1,217,184,173,157,39,81,45,166,220,198,170,3,237,193,57,63,142,7,225,85,53,56,211,113,46,15,61,197,86,179,101,218,234,178,149,56,233,80,167,120,154,88,98,76,91,35,223,214,186,75,8,45,135,
134,230,150,229,1,149,166,84,86,221,200,24,36,241,248,87,63,22,158,24,185,45,142,50,61,253,170,229,168,11,182,39,5,208,145,245,165,42,139,65,114,150,154,72,225,182,217,27,52,136,231,3,114,224,12,31,122,
220,210,239,222,56,204,194,127,223,68,23,100,125,157,123,143,202,168,205,101,22,98,137,140,141,31,240,130,120,2,175,216,91,218,216,6,153,147,205,17,244,25,192,35,21,21,106,41,218,195,138,229,58,155,173,
121,38,210,190,86,200,147,130,190,158,181,189,225,253,78,63,248,69,111,52,201,227,220,183,31,189,82,122,112,58,98,188,129,181,103,254,210,85,200,242,183,109,227,167,214,189,98,207,83,144,90,219,90,194,
136,242,42,109,64,171,130,199,250,147,87,41,114,83,81,50,112,188,238,114,186,131,121,166,202,108,21,220,135,129,194,143,152,240,163,176,172,246,61,115,93,92,215,19,201,168,104,207,127,167,25,231,195,230,
18,164,110,231,128,64,236,51,210,186,45,11,73,141,126,37,107,214,242,67,29,155,8,231,123,125,240,110,84,57,24,100,94,252,103,24,174,25,51,165,30,125,38,173,121,119,4,118,243,221,207,36,17,253,200,222,
66,85,112,48,48,13,87,223,181,129,207,34,187,79,138,147,91,61,238,153,37,188,2,6,150,201,76,130,68,11,35,16,236,3,48,29,9,0,31,161,174,37,88,47,110,107,51,68,116,222,31,241,116,90,60,187,238,44,151,80,
220,165,89,101,111,188,112,64,57,236,71,106,103,137,60,82,154,253,189,140,11,100,182,139,106,24,2,174,88,182,113,215,242,253,107,123,69,209,98,147,69,210,102,254,205,180,184,183,150,41,94,234,103,108,
72,0,118,25,28,231,160,29,5,102,232,209,90,127,102,73,53,229,148,43,167,198,174,173,112,217,243,36,144,131,181,80,250,244,252,5,96,226,175,115,68,244,34,255,0,132,193,27,72,181,178,22,40,143,110,155,124,
229,124,22,247,60,86,54,165,170,62,169,55,153,32,30,103,77,221,240,58,10,208,107,91,39,240,137,150,40,31,237,145,220,162,203,59,28,140,21,115,128,61,62,81,249,214,14,223,67,73,36,135,113,217,35,57,168,
46,35,220,187,135,94,181,47,174,107,165,147,70,210,236,116,139,41,47,164,156,93,94,64,215,8,209,16,85,23,113,85,4,119,57,82,122,138,119,3,30,242,57,99,182,137,228,82,223,46,228,97,200,101,245,7,189,100,
92,220,15,59,204,64,216,110,74,181,119,94,28,208,219,254,17,219,187,155,194,179,217,42,25,34,182,13,243,130,15,204,192,245,95,235,92,204,246,250,69,249,111,47,83,150,216,30,215,80,150,199,226,180,147,
14,132,43,125,38,169,133,152,100,66,128,7,29,64,28,1,253,63,42,155,75,176,182,153,222,226,100,43,103,0,15,51,117,221,220,32,245,36,241,250,213,120,215,74,211,157,93,175,238,47,89,79,9,4,123,23,241,39,
252,43,161,155,84,179,135,67,210,150,77,30,57,237,238,204,207,229,171,48,101,195,109,249,72,234,222,230,152,28,165,213,236,154,134,165,53,204,159,235,37,114,199,29,6,122,15,192,113,86,87,167,90,232,60,
27,111,167,222,89,202,46,244,184,190,201,10,177,185,212,38,145,129,76,253,213,76,127,23,78,59,214,45,185,136,44,190,106,177,59,8,77,167,24,110,57,62,163,173,59,137,33,161,129,90,55,100,10,64,204,170,64,
56,4,115,72,172,118,227,182,104,44,150,57,36,220,169,27,54,230,56,1,79,90,220,93,58,198,210,195,79,185,191,134,105,222,229,164,15,177,246,148,10,219,70,56,228,215,61,156,176,195,99,154,217,211,124,89,
117,165,219,45,186,71,4,202,133,140,109,52,65,204,100,245,43,233,82,192,210,210,124,34,111,52,102,189,3,204,154,66,223,103,183,14,21,228,3,57,62,248,244,21,204,249,123,100,35,35,35,61,77,106,216,248,187,
81,211,237,226,134,22,143,16,51,60,82,52,96,186,22,235,131,88,140,204,205,200,231,173,76,124,202,31,12,134,64,231,44,118,240,75,26,181,107,117,21,191,152,38,133,38,87,93,188,245,95,112,125,106,156,51,
60,48,203,18,227,107,158,123,255,0,158,148,155,185,28,113,90,153,18,79,133,151,229,59,151,168,56,161,73,206,59,119,173,43,93,55,254,18,11,189,63,78,210,109,157,245,9,203,33,71,145,66,187,103,43,180,182,
0,24,245,53,151,50,189,188,207,11,141,146,163,21,101,61,136,56,52,216,33,204,249,227,35,208,82,44,157,65,231,21,22,238,134,156,172,24,243,249,212,129,34,200,70,72,59,77,43,76,210,182,88,228,212,103,239,
112,120,237,82,71,23,152,142,193,151,229,234,9,228,209,112,13,199,56,31,173,1,182,246,166,167,204,79,28,168,164,221,222,128,36,39,112,192,235,79,187,128,90,200,20,74,147,2,3,110,140,228,115,219,235,81,
121,131,133,32,2,79,222,166,62,127,12,227,61,169,129,60,159,234,35,253,232,113,207,201,221,105,170,195,0,126,181,3,146,173,131,77,201,220,71,65,64,205,6,145,100,177,94,84,58,190,222,23,230,62,135,63,157,
19,233,183,80,195,20,178,68,203,28,152,216,222,185,233,84,124,194,20,15,206,187,141,102,68,109,22,216,5,202,143,44,131,233,82,217,73,28,188,122,108,191,108,142,9,207,217,154,79,186,204,50,42,181,212,45,
107,59,194,255,0,121,78,14,43,169,214,85,214,107,11,151,42,21,37,10,23,29,6,127,90,161,226,123,88,226,242,89,83,12,88,130,125,104,230,11,25,118,58,93,198,161,159,38,60,170,242,91,176,171,178,120,102,225,
112,22,88,217,177,156,28,138,217,211,209,237,237,69,188,123,72,25,203,15,226,160,22,102,101,145,200,43,202,224,84,57,50,172,114,119,86,115,217,73,178,100,104,216,242,55,14,163,214,146,27,89,46,91,8,155,
143,82,115,210,182,53,108,221,194,112,172,254,95,33,241,128,42,45,62,43,225,106,158,92,40,98,108,158,78,51,85,113,216,200,104,100,87,101,219,146,58,210,173,172,161,114,223,39,160,61,235,82,79,181,46,1,
134,28,250,243,86,227,218,52,215,150,121,96,50,231,2,21,206,225,238,9,235,78,44,76,231,100,133,208,243,223,165,48,228,118,247,173,91,200,196,136,24,14,157,112,43,51,204,11,159,126,42,236,36,200,28,144,
195,4,26,137,186,227,34,166,109,167,2,160,109,187,186,96,84,52,104,153,27,55,182,77,90,138,240,173,187,196,88,152,206,8,66,115,207,173,87,146,60,30,161,129,166,172,101,155,133,207,235,82,246,54,139,212,
244,109,42,66,218,93,175,251,149,62,11,54,59,213,61,29,11,105,86,231,182,218,182,84,131,142,149,243,243,248,153,251,62,17,222,132,61,16,141,242,228,19,73,252,63,253,122,66,180,185,199,94,107,51,184,100,
141,133,62,181,4,127,120,103,138,146,118,249,72,199,90,131,147,218,130,211,45,242,135,105,234,56,167,111,227,24,170,138,196,84,138,198,128,45,41,238,41,202,222,181,10,72,27,161,197,72,24,226,128,37,12,
120,169,17,182,243,138,173,230,99,61,41,200,199,158,115,154,8,104,149,152,110,57,169,109,53,41,109,92,180,100,115,213,79,67,76,87,133,99,113,44,101,216,143,145,129,198,211,85,163,25,110,64,197,2,220,178,
211,188,211,51,191,204,199,147,75,112,223,232,120,207,27,169,178,54,233,142,193,192,227,129,214,163,184,127,244,114,9,198,13,52,1,110,118,140,1,78,45,137,57,170,246,210,112,222,180,146,75,243,177,170,
4,139,175,157,160,156,1,90,94,9,147,103,136,109,199,31,50,200,191,248,227,86,36,115,239,135,154,211,240,116,152,241,37,135,251,82,109,231,220,17,82,99,89,123,140,194,248,152,173,253,175,27,177,200,104,
148,131,92,84,159,41,251,217,239,94,135,241,61,83,22,175,179,44,191,41,110,248,32,99,250,215,157,100,228,227,131,92,179,220,251,204,173,243,97,41,191,34,72,201,24,57,175,92,253,157,239,22,223,226,118,
136,206,62,83,33,83,129,147,202,145,94,63,27,96,143,92,215,166,124,13,184,54,255,0,17,244,7,83,131,246,184,192,237,223,20,65,251,200,245,49,112,231,192,214,143,120,203,242,62,248,142,96,203,136,190,238,
50,11,241,197,11,115,26,179,40,112,113,243,21,108,145,255,0,234,166,150,158,70,111,44,132,81,203,43,74,64,199,115,157,191,165,124,251,241,231,246,129,22,54,178,232,26,12,192,201,202,79,121,30,1,35,144,
84,99,183,191,122,250,121,212,84,227,118,127,58,101,25,46,39,58,196,172,62,29,122,190,137,121,141,248,251,241,242,59,88,102,208,180,39,143,205,57,89,238,161,206,61,213,78,127,51,95,51,88,217,94,120,163,
84,91,120,6,249,95,150,99,247,81,123,146,125,41,52,157,55,80,241,126,176,150,118,145,180,247,18,146,75,19,194,142,236,199,176,2,187,233,109,108,124,59,110,218,118,146,204,224,129,246,139,166,24,50,183,
112,61,22,188,90,149,29,103,118,127,78,229,217,126,23,135,240,235,9,133,94,251,213,191,213,254,132,104,182,154,6,159,253,155,167,160,153,84,230,226,235,163,76,223,252,72,236,40,209,244,43,141,115,82,142,
210,210,54,146,70,61,7,76,119,38,141,55,70,186,214,111,98,183,179,139,204,149,248,246,199,114,107,115,92,241,60,30,11,177,155,71,209,101,243,111,36,93,151,119,203,142,79,247,84,246,21,157,187,145,82,164,
175,201,75,89,191,234,236,127,137,188,69,105,225,29,53,244,45,14,85,146,225,192,23,186,130,30,92,227,148,83,217,107,206,38,145,164,96,170,155,228,99,252,61,73,166,73,51,187,96,114,196,254,53,238,127,4,
126,20,79,117,36,90,150,167,110,202,65,221,20,76,189,61,207,189,9,58,178,178,57,177,21,232,229,116,29,73,187,191,197,178,207,192,223,131,109,36,209,107,58,180,57,144,16,98,129,255,0,135,190,79,189,125,
38,76,26,61,142,233,29,98,183,137,9,37,142,2,138,98,199,109,163,91,101,182,195,111,26,228,147,198,208,7,90,242,235,203,219,223,140,122,195,88,217,25,45,188,53,110,216,158,229,115,251,242,14,118,138,245,
33,5,74,54,91,159,145,227,49,115,204,170,75,19,136,151,45,56,238,251,46,203,204,123,201,123,241,163,89,242,19,204,181,240,157,155,254,242,81,144,110,91,208,31,74,246,29,62,222,13,46,194,43,91,88,150,222,
218,21,10,145,196,167,104,0,122,10,169,164,216,217,232,246,16,89,91,197,246,120,35,93,170,144,241,248,253,106,202,198,50,88,25,24,14,155,142,5,117,66,54,213,238,126,103,155,102,111,29,37,10,107,150,156,
118,95,171,243,101,165,190,42,199,114,121,159,245,205,9,199,215,138,104,191,129,155,114,162,163,103,146,75,15,208,241,76,141,154,73,70,216,246,201,253,237,220,31,106,177,36,139,9,38,69,145,101,35,63,57,
86,31,134,15,21,177,243,172,7,149,55,206,176,198,199,169,202,142,125,234,117,83,187,17,175,150,49,212,98,169,69,119,52,209,150,146,37,83,147,183,203,57,24,236,72,35,138,149,23,114,229,100,40,223,237,99,
20,16,203,31,103,157,190,101,39,220,147,205,53,173,100,87,5,206,252,255,0,180,78,41,203,33,81,137,99,86,97,252,67,53,43,50,201,25,42,196,159,70,57,254,67,250,211,32,96,253,218,243,40,192,254,238,79,233,
79,105,129,85,101,150,66,223,66,7,242,166,164,172,156,136,78,113,193,92,159,211,252,105,241,184,111,189,27,43,142,79,85,39,222,153,39,37,36,137,180,144,55,12,119,239,80,124,178,255,0,171,5,71,190,120,
169,148,112,113,242,1,252,44,149,19,202,217,200,112,163,161,200,53,198,88,170,160,112,113,158,252,83,26,49,217,3,228,117,205,53,148,179,103,114,183,251,166,152,205,229,241,156,159,173,72,199,109,11,146,
87,103,182,77,102,248,134,227,201,208,53,35,179,143,179,73,130,73,227,228,53,109,128,110,113,177,190,181,135,226,215,16,248,119,83,57,102,255,0,71,144,101,187,101,113,81,39,163,46,59,156,191,130,215,201,
179,182,110,126,104,143,31,141,117,101,143,144,224,122,138,230,188,56,202,176,194,139,252,49,138,233,145,135,150,223,81,89,211,254,25,164,254,50,9,126,88,92,251,19,73,36,209,174,130,64,207,115,239,214,
157,51,126,237,248,237,210,171,95,171,71,163,56,239,182,182,163,185,21,54,62,60,241,84,197,181,171,220,116,89,91,5,190,181,205,234,215,9,45,243,202,6,113,211,156,116,173,191,16,57,254,220,187,108,100,
249,173,244,174,118,227,6,233,183,46,78,236,110,236,43,244,184,233,4,124,243,221,130,174,236,35,103,177,32,26,245,63,132,62,32,131,77,142,226,202,226,85,135,206,36,174,227,140,158,245,229,208,242,229,
179,183,114,231,36,242,121,244,171,50,50,42,0,14,209,187,131,158,122,117,174,44,69,21,136,131,166,217,189,57,186,111,153,27,107,136,252,107,112,16,172,171,189,177,134,234,61,106,166,187,225,119,189,214,
77,225,152,70,185,4,32,28,241,92,189,197,252,250,125,209,150,218,77,143,183,134,30,159,90,130,235,198,218,148,144,162,9,84,48,229,164,3,147,66,163,59,174,86,14,162,107,83,163,248,147,226,59,107,235,43,
107,37,181,134,41,99,0,177,143,57,56,24,175,63,134,102,141,178,23,111,60,127,141,71,113,113,44,178,9,38,102,118,110,119,55,126,106,196,17,171,55,203,247,122,228,154,237,140,125,156,108,101,123,150,225,
189,98,164,148,7,166,15,122,167,169,92,9,33,101,43,243,109,7,210,180,89,237,227,81,180,150,124,1,207,111,92,86,86,188,193,96,12,164,110,61,125,121,53,45,141,14,14,60,176,11,14,156,215,119,224,77,91,206,
176,123,103,97,185,78,83,215,31,74,243,169,190,67,133,24,28,85,191,15,106,205,166,106,81,205,146,83,56,97,219,7,189,77,74,126,210,22,28,101,202,207,106,93,206,131,0,156,117,174,135,83,96,124,23,41,110,
137,103,41,193,245,193,174,74,27,223,244,116,150,19,149,145,71,56,174,139,84,204,158,11,157,203,100,155,57,73,3,232,107,229,241,113,229,72,244,104,74,236,249,198,249,210,233,143,154,2,38,222,54,138,231,
217,124,150,249,71,32,214,131,72,236,54,231,122,175,21,52,118,144,221,68,119,245,7,147,87,9,242,232,100,245,22,214,97,53,164,106,184,243,3,177,35,215,129,254,21,105,109,230,86,12,7,61,136,53,153,37,155,
199,141,156,168,61,168,105,46,35,108,101,128,250,213,56,41,108,196,153,171,29,212,145,182,37,98,113,253,234,124,186,187,73,108,98,66,54,158,9,171,154,63,133,238,53,173,18,230,243,120,253,207,4,49,193,
168,116,191,12,206,247,91,24,124,184,201,246,170,228,141,61,100,201,230,230,208,206,179,179,121,165,13,183,130,112,56,174,141,110,239,97,88,225,142,86,46,188,169,143,168,199,189,77,36,107,167,149,133,
79,155,38,125,56,81,86,36,177,149,111,36,11,202,96,13,192,99,34,185,103,46,103,115,69,19,90,43,59,217,36,183,187,151,84,242,46,182,17,191,115,51,14,125,71,214,164,188,210,245,203,137,133,244,58,135,246,
188,144,174,75,91,204,198,88,215,232,112,113,244,205,80,158,102,75,88,6,246,60,30,49,239,235,85,226,191,150,222,65,36,114,52,110,15,12,167,21,139,101,149,175,47,94,233,247,74,206,242,127,19,59,18,79,166,
115,81,134,59,107,114,226,107,125,101,119,206,139,29,201,192,121,23,130,199,215,210,177,238,173,205,164,133,115,185,123,53,67,40,158,13,98,238,22,135,100,238,162,21,41,31,63,116,18,73,3,241,39,243,173,
24,124,83,169,65,167,125,129,46,72,181,0,143,47,104,35,158,189,171,159,221,181,178,13,61,100,224,80,198,141,216,124,81,168,197,166,27,4,184,101,181,35,105,140,40,231,63,133,80,150,214,104,74,25,161,146,
32,195,43,189,72,200,245,25,165,210,175,191,179,181,27,123,150,141,101,88,156,49,140,244,96,15,74,237,124,107,227,203,45,123,77,251,21,172,19,200,210,92,27,131,53,214,220,195,159,249,102,152,31,118,177,
109,166,104,111,248,31,224,204,62,48,240,67,107,105,115,36,115,71,63,149,42,179,162,198,131,174,230,201,207,66,58,102,173,120,210,223,72,209,52,63,11,67,111,165,218,221,4,179,144,61,220,165,204,146,179,
54,115,141,216,192,201,198,7,115,214,177,35,211,53,99,225,93,42,84,121,26,194,72,75,97,56,65,243,17,134,247,200,254,85,153,226,203,235,228,211,116,249,174,45,89,33,182,11,100,164,191,13,128,204,48,63,
3,249,138,194,82,232,141,162,151,82,239,132,180,251,91,185,117,4,134,205,92,53,179,70,203,35,182,54,146,9,239,215,143,214,177,60,65,224,189,38,199,194,22,250,149,189,236,159,218,141,36,130,107,34,84,172,
104,25,21,91,212,18,89,186,250,10,217,240,38,173,121,167,216,223,223,67,99,230,195,114,173,105,187,112,5,31,131,145,159,99,250,212,30,40,179,189,181,240,220,178,93,71,24,91,131,25,15,30,125,122,31,127,
150,148,100,211,176,229,20,213,209,205,248,51,192,87,30,44,134,234,104,152,132,182,42,100,198,62,85,32,252,199,61,184,253,107,210,63,225,20,183,208,254,28,199,171,89,248,172,45,201,212,36,179,93,61,173,
149,164,139,228,12,210,3,252,32,231,28,119,252,107,151,248,119,246,232,244,253,78,75,84,144,65,242,172,210,41,232,184,39,31,166,127,10,201,26,131,71,12,145,205,112,60,189,223,63,126,135,134,255,0,62,181,
164,164,245,177,49,138,234,118,191,15,244,151,212,100,139,195,209,234,115,189,188,161,200,142,11,56,216,150,198,114,119,30,105,111,126,19,233,86,222,15,159,89,135,83,184,150,65,12,142,145,52,106,48,233,
156,171,122,14,43,47,193,55,147,67,124,117,29,58,73,199,216,190,118,186,183,7,247,60,30,72,199,63,253,99,80,232,86,26,213,158,155,171,25,165,117,177,184,181,153,246,202,112,8,193,59,177,234,113,89,169,
62,229,74,43,161,195,51,12,144,77,17,171,51,5,95,188,220,109,169,45,237,103,190,121,18,11,121,39,117,93,197,97,66,196,15,94,59,85,97,158,185,247,174,132,204,69,44,67,109,35,7,60,210,179,13,222,156,126,
116,201,21,163,112,172,164,55,161,224,208,196,49,20,192,234,190,31,248,118,15,20,107,82,219,92,9,100,88,173,222,117,183,133,213,30,118,92,0,138,79,0,242,79,209,77,63,226,87,132,211,193,190,38,54,81,52,
134,25,32,142,225,22,98,12,145,135,95,184,196,119,4,17,249,87,45,12,173,19,110,71,100,97,208,169,193,164,188,184,154,242,67,44,211,60,210,183,87,145,137,60,12,14,126,149,157,159,53,239,161,87,210,197,
155,91,63,62,218,226,85,235,16,201,228,14,224,127,90,135,169,228,115,233,73,117,113,111,38,147,111,12,112,52,87,107,35,121,179,121,132,137,23,140,113,219,28,213,5,145,227,206,15,203,215,25,173,9,47,110,
42,249,31,41,83,212,83,115,184,146,91,223,235,81,171,101,115,156,230,157,184,237,192,245,170,39,168,252,238,239,210,145,91,218,146,53,6,76,51,96,30,245,94,105,182,182,212,230,144,203,123,178,163,156,212,
176,221,201,24,194,164,109,233,189,1,53,151,184,177,228,228,210,199,35,35,3,147,199,108,208,6,197,212,119,54,243,3,50,108,108,96,112,0,253,58,213,95,51,28,224,103,210,149,174,36,184,140,18,204,99,206,
64,36,224,19,215,138,135,129,193,252,40,17,106,75,230,153,151,122,43,17,254,200,166,75,48,229,64,10,58,252,163,138,100,42,38,109,170,202,28,240,55,28,126,181,94,70,33,136,60,118,53,87,11,23,138,68,146,
70,243,72,146,70,192,51,44,103,7,233,236,106,163,72,24,156,112,189,133,70,164,54,112,56,169,86,38,11,151,137,138,14,115,180,212,149,96,87,232,123,122,87,105,172,92,255,0,196,134,207,96,207,202,132,156,
215,41,21,139,221,169,242,34,45,183,209,186,213,139,219,205,70,59,84,182,184,86,17,40,10,185,81,218,165,141,29,87,137,118,201,165,197,32,108,178,50,49,254,85,147,226,43,196,184,179,133,135,222,89,14,107,
38,125,74,254,230,208,68,225,140,88,25,109,158,149,94,227,82,154,230,20,133,194,149,94,152,92,103,138,73,20,117,214,250,170,79,12,91,74,12,142,0,235,78,149,88,186,54,118,171,112,125,107,139,134,226,91,
118,225,153,15,94,149,175,30,177,116,240,134,91,86,117,232,27,4,140,210,176,203,154,181,192,181,182,100,206,55,13,162,162,211,218,250,91,24,204,110,155,50,118,238,235,88,151,147,207,36,164,204,24,31,238,
145,140,83,237,53,139,152,98,17,68,196,46,114,23,104,52,250,1,181,37,189,247,79,58,32,63,221,205,98,106,205,113,107,3,59,75,27,0,113,140,114,105,205,172,93,252,219,152,3,238,57,172,93,90,230,123,152,247,
57,37,115,215,28,83,136,153,126,207,81,50,32,86,124,110,172,253,70,225,173,110,94,34,122,26,167,19,19,242,166,88,158,149,118,242,214,250,247,100,147,64,197,149,54,134,0,100,143,122,219,68,69,153,83,251,
64,231,147,205,55,251,67,111,189,69,37,169,87,1,134,61,106,25,161,219,211,149,237,75,66,209,123,251,65,21,65,39,158,252,116,167,199,169,172,109,144,112,125,107,21,161,101,231,154,104,86,247,31,141,73,
164,93,153,236,94,29,212,83,251,30,3,156,241,210,180,22,245,51,158,163,233,92,167,135,114,52,75,110,114,72,57,246,171,251,217,79,92,215,207,212,248,217,251,78,6,55,195,83,126,72,221,107,136,206,49,193,
166,137,147,214,177,60,198,245,167,9,152,119,253,107,3,189,68,209,184,184,69,32,84,75,116,189,122,26,205,184,144,182,15,122,136,57,7,222,131,85,19,126,214,56,238,60,207,222,42,148,82,216,99,140,253,41,
155,209,152,109,233,88,235,43,244,7,138,158,59,143,149,195,2,78,62,83,158,134,169,7,41,181,4,145,241,197,61,182,156,224,113,88,145,206,222,188,84,191,108,56,255,0,235,212,139,149,151,155,3,154,181,20,
235,26,242,51,248,214,27,92,19,140,241,82,36,197,186,80,14,38,149,197,230,236,244,168,22,235,53,20,54,151,23,133,188,152,158,82,163,36,34,147,143,202,171,237,117,108,17,140,83,4,145,171,111,122,21,243,
192,162,234,69,146,57,72,231,145,89,121,59,134,42,194,182,99,149,79,76,3,77,18,213,130,221,184,61,233,204,251,88,250,84,17,30,184,167,201,157,184,162,227,68,208,200,190,91,2,113,222,181,60,49,112,23,196,
26,119,108,78,159,250,16,172,72,100,43,187,140,228,85,237,26,96,154,165,147,227,145,50,127,49,72,138,138,241,101,191,138,18,7,130,221,72,229,79,94,253,255,0,194,188,212,183,56,24,175,82,248,161,18,27,
86,98,135,120,124,3,219,25,96,69,121,91,129,159,74,230,158,231,217,100,206,248,40,10,132,122,99,222,187,95,134,23,41,105,227,61,26,86,251,171,119,25,110,113,198,238,107,135,86,27,184,227,218,183,60,59,
33,77,66,18,167,230,222,49,81,179,62,162,157,53,90,18,166,250,171,31,76,124,116,248,244,144,195,54,131,160,77,251,176,10,77,114,173,146,223,236,143,106,249,170,222,11,207,16,106,9,12,74,211,75,33,252,
135,114,125,170,57,35,185,213,47,138,5,102,145,155,146,217,227,61,201,244,174,207,77,72,52,91,118,182,180,96,238,223,235,103,238,220,14,7,181,117,212,169,42,175,83,187,46,203,112,185,30,21,80,194,199,
94,175,171,125,217,122,213,45,124,59,106,108,180,249,88,188,139,139,139,161,193,145,189,7,162,212,218,125,156,154,141,196,112,65,27,73,35,156,13,163,249,213,24,45,164,191,185,138,43,117,45,43,156,109,
21,177,170,235,246,254,19,176,125,55,79,127,51,80,144,17,115,116,167,238,255,0,178,180,145,132,220,164,237,29,100,255,0,171,178,239,136,53,251,111,7,216,73,165,105,50,135,191,149,118,221,221,169,228,127,
176,135,211,214,188,230,89,140,141,201,203,30,244,201,166,50,73,187,146,199,169,175,91,248,55,240,157,245,203,164,212,245,56,137,182,140,130,144,176,251,222,228,122,82,73,212,118,70,53,170,81,203,104,
186,147,127,230,217,161,240,91,225,4,154,133,213,190,175,169,166,7,13,4,77,255,0,161,26,250,175,75,178,182,209,237,114,236,176,199,26,110,105,27,142,5,99,105,250,108,90,85,176,225,82,56,199,13,140,0,43,
129,213,181,155,255,0,138,218,227,104,26,68,237,6,141,110,223,233,87,163,141,248,254,21,206,1,175,82,156,21,37,100,126,69,152,98,170,102,117,37,86,172,185,105,199,119,209,47,243,37,213,181,27,223,140,
26,243,233,90,107,189,167,135,96,125,183,55,152,35,206,193,251,171,94,183,164,104,246,122,30,155,6,155,103,110,176,91,66,187,86,48,188,31,115,199,38,171,232,58,29,167,135,116,152,116,251,27,95,38,40,87,
3,128,73,245,39,7,189,106,162,78,203,194,41,139,208,156,15,202,187,33,14,175,115,242,236,219,52,120,214,168,209,92,180,163,178,239,230,252,255,0,33,2,131,144,118,168,30,199,252,41,219,206,223,148,46,206,
236,99,200,252,40,10,145,49,219,0,95,163,28,126,88,192,166,53,223,151,32,24,146,45,220,22,102,192,253,107,99,230,153,100,171,200,131,108,123,143,247,186,26,21,84,46,219,139,127,48,245,220,132,7,31,175,
74,129,68,67,239,200,220,247,98,13,78,54,46,54,176,115,250,31,206,153,44,124,111,25,202,69,27,196,59,252,187,129,250,243,79,85,88,201,199,205,199,7,7,3,218,152,219,36,233,31,226,142,0,207,210,146,63,55,
158,86,49,253,230,109,216,252,9,160,130,93,209,142,62,112,72,229,89,142,63,44,10,21,225,228,136,195,123,134,34,152,37,16,225,26,65,46,78,70,88,103,255,0,173,82,238,102,108,228,48,35,133,36,227,243,197,
50,71,199,48,86,194,115,159,239,115,248,100,84,139,51,73,242,155,116,108,127,16,80,113,249,212,43,182,101,219,242,41,235,183,36,127,74,77,210,198,216,118,80,15,70,143,191,181,4,28,123,176,145,182,145,
145,253,210,67,15,206,152,222,106,247,92,122,28,126,85,43,41,85,198,205,248,237,222,153,247,71,17,150,7,179,39,74,226,44,129,151,115,3,180,103,216,113,74,89,87,137,55,227,217,112,63,58,93,192,161,253,
210,71,158,163,29,127,42,67,129,31,3,113,250,145,64,209,20,159,47,4,110,78,205,131,154,196,241,172,140,158,23,212,3,46,213,104,194,246,231,44,5,109,238,111,224,227,253,157,159,227,89,126,32,210,127,183,
52,187,139,9,60,200,22,117,218,36,82,84,228,28,130,57,245,2,179,146,186,118,52,142,231,53,164,192,45,66,96,245,141,70,61,56,174,129,137,251,57,61,78,127,198,184,189,51,78,214,180,99,113,14,160,170,165,
64,242,230,18,9,11,40,227,252,43,119,88,146,234,13,54,22,132,100,151,228,246,233,83,78,50,246,106,251,151,38,185,244,45,73,59,44,114,124,185,227,21,87,92,190,127,236,9,66,143,152,38,127,32,107,10,77,74,
253,161,193,120,193,39,28,169,255,0,26,208,213,46,252,157,40,29,161,254,94,71,99,197,109,73,56,238,68,236,207,144,181,89,74,234,211,25,144,149,18,150,117,28,19,92,228,211,60,210,59,41,218,72,39,30,217,
175,97,241,135,128,167,190,213,26,254,207,202,196,135,50,68,114,0,207,165,112,243,124,42,241,1,98,233,12,28,146,70,100,192,235,210,190,226,24,234,82,130,109,158,75,195,203,153,216,228,162,145,183,97,134,
75,12,19,233,205,88,251,64,44,119,141,193,142,48,15,115,253,43,86,239,225,222,191,102,24,200,182,235,158,219,243,154,164,60,21,174,237,77,171,0,0,1,203,30,107,55,141,165,220,181,135,159,83,11,90,152,133,
7,170,253,222,59,214,9,98,220,12,158,63,10,239,101,248,125,175,76,177,130,45,113,140,1,184,224,126,149,206,53,156,218,125,229,236,23,49,68,239,26,50,3,232,222,163,245,170,142,62,154,210,228,203,12,209,
207,52,135,35,60,251,85,219,57,149,23,7,234,121,170,237,52,140,121,137,69,88,83,57,249,197,160,57,57,30,181,82,199,211,20,104,48,89,252,201,64,220,171,223,216,85,43,139,134,187,27,8,1,119,117,252,107,
110,13,22,246,102,86,54,2,53,111,226,145,176,42,157,231,133,239,244,185,158,71,140,75,17,59,183,69,200,21,139,199,82,111,115,85,135,145,78,76,16,73,249,170,16,112,195,21,177,6,159,123,117,24,242,227,132,
160,247,235,81,207,167,221,90,176,87,182,140,86,145,204,168,144,240,178,58,159,5,107,198,226,19,103,35,100,168,249,78,107,209,181,171,136,225,240,36,236,36,93,255,0,103,117,218,27,158,184,254,181,227,
26,102,161,55,135,117,104,46,26,8,36,17,156,152,243,149,35,240,175,65,184,248,153,165,203,168,29,65,109,18,57,190,204,98,142,217,23,49,70,196,96,147,158,166,188,76,118,33,85,146,246,104,236,161,79,147,
89,51,201,180,216,108,197,195,155,249,36,91,112,164,226,21,5,152,246,3,61,57,239,83,217,237,107,87,8,188,228,156,127,42,109,245,136,77,206,141,149,39,61,106,59,25,35,141,94,54,63,57,228,86,106,90,25,91,
82,85,183,145,151,33,78,218,217,240,237,142,157,53,242,141,83,112,183,199,62,95,90,171,28,172,202,20,240,163,160,171,113,70,171,24,37,126,99,210,179,148,250,35,72,197,110,207,87,240,253,175,128,161,182,
48,61,202,144,223,243,216,48,174,162,22,248,119,102,163,116,86,83,2,63,231,155,48,175,4,133,146,224,180,114,46,121,225,189,42,220,251,210,39,72,28,14,202,164,242,107,149,211,156,181,231,102,188,240,95,
100,250,127,194,63,16,190,25,105,108,75,120,63,195,122,211,170,18,126,221,167,153,56,199,7,154,167,241,39,227,39,195,159,18,105,63,102,135,193,186,70,156,222,94,35,254,200,182,48,16,65,235,193,2,190,120,
240,255,0,137,199,134,245,7,183,146,31,61,202,36,100,47,93,216,228,126,191,165,87,213,32,120,238,165,114,134,53,145,139,34,231,56,231,161,163,146,81,222,76,92,209,151,65,154,213,242,22,86,138,54,72,136,
59,84,243,129,147,89,182,186,146,90,220,44,143,10,92,128,15,238,228,39,110,113,198,113,87,117,40,85,108,44,155,57,121,21,139,15,64,9,197,101,52,0,147,142,107,101,34,44,94,178,186,204,114,46,58,129,205,
37,229,225,107,115,158,162,170,71,40,133,120,235,80,93,92,169,140,142,230,158,228,147,69,55,154,120,171,138,167,110,224,7,165,100,91,182,27,140,244,173,173,38,221,175,47,173,225,81,150,146,69,64,15,25,
201,2,147,208,18,17,84,169,231,143,106,217,177,177,146,251,72,125,141,8,43,47,59,215,230,192,3,163,127,74,245,105,60,7,163,47,197,141,115,76,251,20,77,167,89,105,159,104,17,169,37,67,109,140,231,63,240,
63,214,177,180,191,12,198,62,29,232,151,82,91,131,53,245,239,148,143,188,140,229,138,130,126,132,87,60,167,216,217,68,243,187,173,86,254,221,86,5,191,156,195,24,218,129,36,96,152,246,21,94,109,98,254,
226,199,236,147,94,205,45,190,237,194,39,114,70,125,121,175,113,241,79,129,44,244,223,138,218,214,152,208,88,220,219,88,233,238,100,88,226,42,162,64,128,100,43,40,32,238,97,212,113,206,58,10,242,217,52,
187,86,240,110,155,58,66,191,105,146,234,72,218,78,236,185,24,20,93,110,81,205,65,168,220,219,169,137,39,146,56,216,228,170,177,0,159,90,176,218,149,253,213,152,183,146,226,105,109,183,110,17,179,18,187,
128,235,143,92,31,214,189,43,92,240,222,157,15,196,205,90,195,75,183,142,43,88,172,203,36,97,120,12,80,116,207,187,10,230,86,197,109,124,25,165,94,237,4,201,124,224,122,156,224,113,237,242,159,204,82,
230,91,142,197,29,30,206,88,173,228,120,239,38,133,74,101,214,54,42,8,199,67,142,188,26,172,250,108,48,207,229,189,204,139,184,125,229,92,245,228,119,175,77,125,46,204,248,218,247,79,182,180,86,17,218,
180,194,38,224,12,143,151,234,70,84,251,214,78,153,167,219,221,248,90,25,196,17,137,36,190,218,38,96,50,204,1,0,103,174,59,254,53,143,53,221,203,56,91,207,58,198,216,172,55,110,45,203,143,144,49,93,199,
7,230,32,123,127,58,233,188,29,224,169,60,77,165,172,247,58,141,196,80,79,39,145,18,66,166,80,173,207,50,115,133,90,237,172,116,155,61,63,226,48,89,52,248,39,178,130,198,57,166,70,77,232,187,144,51,49,
7,174,208,27,159,106,241,123,29,94,234,198,57,34,182,187,150,222,57,87,18,44,110,84,55,29,235,69,23,36,75,105,30,131,240,227,198,26,95,130,191,181,173,117,39,185,89,18,225,39,134,123,7,193,153,226,220,
4,76,123,163,100,159,74,243,253,82,248,234,90,149,229,217,69,133,174,38,121,188,164,251,169,185,139,96,123,12,226,168,200,225,120,254,117,161,225,173,53,188,69,226,11,13,45,36,88,154,234,85,139,204,110,
139,147,201,247,192,205,105,203,203,169,157,239,161,86,123,137,46,165,243,36,118,146,66,57,45,237,197,70,8,87,231,244,175,66,248,129,224,29,39,195,222,21,183,214,116,203,171,192,166,237,172,228,134,250,
45,174,205,134,33,151,129,199,202,127,49,94,100,178,245,45,201,244,170,139,83,87,64,244,61,91,225,126,159,225,251,205,46,234,93,82,59,25,140,51,72,215,159,108,144,171,139,97,16,42,97,245,109,193,250,115,
210,188,214,109,173,35,121,69,130,103,229,221,215,29,179,239,85,86,109,202,217,61,5,79,35,121,76,84,224,254,52,148,26,109,135,54,150,18,86,40,48,121,52,213,96,185,200,28,211,36,109,202,59,84,123,183,54,
7,74,187,19,114,236,11,186,66,140,66,12,227,52,226,219,99,200,234,79,90,172,147,8,243,222,148,220,111,192,60,129,85,97,93,19,75,247,178,170,112,122,102,160,144,229,143,28,247,171,144,199,117,170,98,27,
101,121,196,42,72,85,254,17,222,162,48,201,127,3,74,140,166,72,87,231,70,32,29,163,140,251,210,11,149,63,12,26,50,122,245,168,90,66,88,147,193,171,16,91,73,52,138,152,1,152,103,44,112,49,143,90,118,4,
201,162,46,138,58,128,105,205,206,220,154,128,220,5,27,84,228,14,244,231,120,150,221,24,62,101,36,130,155,113,129,216,231,189,43,49,220,157,163,41,142,217,239,81,200,193,128,25,28,119,170,255,0,104,111,
44,224,252,185,166,201,116,165,84,109,10,71,83,220,209,97,92,211,210,45,197,214,165,12,108,50,165,185,250,10,232,174,97,185,134,250,85,73,161,40,62,85,131,63,120,118,174,79,79,213,62,195,116,142,70,6,
112,72,60,128,107,70,21,88,110,197,211,221,43,198,78,237,192,242,125,41,89,150,153,175,164,60,208,89,222,36,67,236,114,52,189,8,200,92,85,125,106,59,228,142,39,184,157,110,109,242,50,99,233,214,161,178,
148,106,150,247,48,71,62,217,25,203,16,205,193,28,83,238,102,135,70,210,69,187,200,179,72,210,100,170,158,213,35,44,205,246,137,111,131,89,200,22,204,99,106,158,152,239,197,80,133,162,109,113,242,35,8,
88,225,92,237,80,125,115,78,187,143,237,211,139,152,111,34,75,126,56,47,202,254,21,147,170,221,71,53,244,140,141,184,112,51,142,188,117,166,5,237,117,177,116,173,149,7,24,33,122,126,21,118,6,188,147,66,
133,45,157,130,111,37,148,54,7,214,177,117,43,136,217,109,246,144,223,187,0,211,254,214,6,150,187,31,111,207,200,7,218,139,5,205,77,89,30,29,46,49,116,219,238,24,228,31,65,222,168,233,234,208,204,159,
46,90,79,187,131,205,57,175,22,239,67,59,223,50,70,253,24,243,138,175,103,170,64,173,181,226,229,176,4,153,229,61,197,33,137,49,111,180,200,58,146,199,222,166,153,97,144,11,87,219,185,212,224,227,189,
52,207,11,92,179,33,84,10,56,61,155,222,179,238,181,166,85,192,68,60,245,167,102,59,162,165,172,63,103,212,81,28,96,171,224,214,218,199,113,246,135,34,92,38,120,231,183,210,177,13,228,45,113,20,167,158,
62,106,179,29,224,107,205,225,206,194,123,154,110,224,172,62,245,145,166,60,3,235,138,165,177,75,125,222,51,210,174,234,12,190,112,42,65,4,118,170,110,251,112,58,84,234,88,94,91,219,121,255,0,232,219,
204,120,31,235,49,156,247,21,91,104,224,16,8,6,158,210,110,224,156,82,112,27,4,211,46,39,117,225,216,213,180,152,248,238,107,71,201,31,74,207,240,195,15,236,133,36,231,147,90,123,197,120,21,126,54,126,
201,151,202,248,90,126,132,77,110,49,219,52,223,179,157,185,3,142,245,97,88,15,122,70,127,151,53,143,83,210,187,41,178,241,142,181,30,209,158,69,76,224,29,196,30,58,212,123,187,99,165,51,65,2,10,122,129,
210,155,187,131,220,83,215,150,56,235,64,238,63,203,249,120,230,163,219,158,181,105,49,183,174,106,39,80,31,131,205,3,185,15,150,125,106,212,17,158,56,170,229,190,106,187,110,192,175,29,169,9,178,254,
155,170,93,104,211,25,109,92,199,33,82,185,3,60,26,161,33,50,49,102,59,153,142,73,52,249,36,192,56,61,170,53,145,87,57,25,166,103,179,184,229,85,239,78,101,93,178,129,208,174,106,49,48,221,237,82,121,
158,102,239,247,8,160,108,171,22,55,96,113,83,180,101,163,103,200,194,227,35,62,181,94,223,30,96,221,247,123,212,183,29,240,114,40,18,220,72,87,229,99,82,216,185,75,152,155,166,215,7,245,168,224,255,0,
87,197,45,179,141,222,184,52,14,90,166,142,175,226,116,37,180,155,137,113,159,46,108,127,227,199,252,107,200,24,252,217,237,94,193,241,49,138,232,242,100,110,70,124,145,245,0,131,94,60,220,147,216,87,
60,207,169,200,159,251,26,245,99,87,253,96,21,177,161,201,182,250,14,63,136,127,58,198,201,82,13,105,233,111,254,145,11,1,143,152,127,58,196,251,28,54,231,79,175,120,153,239,46,222,40,130,68,161,85,29,
227,80,165,246,141,160,156,123,84,122,44,141,52,241,169,57,92,142,107,155,212,166,217,170,93,1,208,74,195,31,137,169,255,0,183,12,86,254,84,96,134,97,243,61,107,204,125,4,169,165,77,70,40,237,181,47,22,
91,233,48,24,52,224,68,237,149,121,201,231,7,28,15,74,229,154,249,230,114,91,44,79,122,231,218,225,217,242,79,204,77,122,151,194,47,135,115,120,163,80,142,238,234,34,44,209,129,28,112,77,84,111,55,100,
121,245,165,75,7,73,212,150,199,67,240,171,225,116,154,228,209,234,26,138,149,180,12,10,35,103,159,127,165,125,75,161,217,197,166,91,172,113,170,198,170,50,91,248,113,88,186,62,143,6,159,107,28,80,128,
177,198,49,140,96,87,63,172,107,23,254,54,212,151,195,30,28,102,1,78,111,111,87,59,98,92,224,140,138,245,169,197,83,90,110,126,75,152,227,39,152,205,202,114,229,132,126,228,139,154,198,189,125,241,35,
92,95,14,248,125,188,157,62,54,255,0,79,190,254,1,234,160,250,159,74,245,93,3,195,22,30,25,210,96,211,108,132,118,240,198,56,110,25,217,187,177,36,117,53,87,194,158,15,181,240,134,143,21,133,133,185,84,
235,36,187,201,50,183,247,136,197,110,42,36,106,86,93,177,30,251,171,190,156,58,189,207,200,51,140,219,235,143,216,97,244,165,29,188,223,119,250,118,34,146,21,140,238,73,92,250,241,193,63,67,210,148,40,
221,251,171,150,71,234,68,209,238,83,234,59,1,83,173,184,184,140,136,90,18,123,22,221,253,56,167,195,230,199,242,137,33,12,59,109,192,207,227,154,218,199,203,92,142,11,133,108,224,35,99,169,78,149,117,
102,114,184,33,54,119,92,3,159,206,161,98,204,167,121,182,3,208,38,223,212,84,98,72,241,134,100,85,233,185,137,226,158,198,108,180,54,253,208,90,17,234,8,111,210,153,246,118,97,149,86,200,254,38,24,168,
132,112,194,65,243,142,91,178,169,193,169,149,149,186,195,27,250,18,131,39,241,206,105,8,114,200,223,198,164,158,244,237,219,152,20,79,155,251,220,131,75,27,39,0,40,15,142,212,161,36,220,65,10,7,211,6,
130,6,249,199,105,249,114,27,171,16,26,156,151,14,91,30,105,36,117,86,82,40,242,90,60,187,24,217,15,247,250,31,196,210,249,193,99,200,64,241,123,14,159,141,4,143,44,62,241,231,111,78,127,250,212,171,112,
203,157,167,112,63,193,176,210,9,99,141,193,27,227,245,228,237,63,134,41,230,65,206,201,11,63,178,99,20,201,57,37,27,151,136,198,238,255,0,49,235,249,212,50,70,227,36,91,238,63,245,211,63,212,210,249,
205,39,61,71,251,184,168,102,109,184,33,156,159,92,140,87,33,66,238,220,63,212,109,250,127,42,139,116,82,125,232,112,7,80,69,39,157,207,251,93,240,121,166,200,207,39,204,232,64,254,238,57,169,40,36,101,
64,10,41,80,59,228,212,51,76,36,143,18,22,11,156,227,119,31,90,93,167,254,121,96,123,154,134,64,192,244,100,252,232,40,197,215,63,214,109,70,87,220,129,120,59,186,176,255,0,10,213,134,20,151,77,10,227,
32,154,205,190,192,188,85,219,253,210,48,49,220,214,181,187,127,161,199,219,60,255,0,42,211,161,11,115,154,214,52,52,251,59,180,103,161,207,95,122,198,212,99,121,52,243,16,36,28,96,115,237,138,235,245,
6,255,0,71,151,253,211,92,212,179,57,132,2,113,192,162,44,25,192,79,107,52,112,108,195,29,167,169,239,84,103,185,188,134,101,81,108,242,196,71,223,81,210,187,228,181,107,171,141,160,230,178,47,236,100,
73,176,73,3,52,155,52,71,35,168,219,172,203,185,227,228,127,120,86,93,213,156,12,160,196,216,125,185,227,215,61,43,75,196,210,61,187,5,13,201,60,86,28,11,60,168,127,121,181,51,201,254,148,22,57,45,202,
170,147,200,83,142,5,120,230,181,164,203,115,125,117,119,182,83,36,242,54,200,214,34,118,140,227,173,123,190,153,50,79,44,113,50,6,96,227,39,215,138,240,230,241,152,209,124,65,115,114,32,123,153,35,158,
77,162,73,78,206,73,31,119,219,53,173,61,204,102,115,207,225,247,220,114,147,169,207,79,36,230,155,14,131,60,206,193,94,77,139,199,66,43,102,235,226,20,183,202,241,172,50,42,183,252,179,142,92,103,242,
21,155,99,173,89,205,113,229,53,187,67,187,36,59,220,48,0,214,236,201,27,94,23,210,229,178,89,223,236,198,249,201,192,46,216,217,199,92,30,181,211,67,111,117,26,161,146,207,103,28,174,225,207,227,84,190,
26,164,58,149,182,174,200,63,121,27,40,72,252,194,199,161,231,158,196,215,110,218,116,55,79,18,194,165,225,32,49,111,226,0,245,21,193,82,92,178,179,59,225,27,171,156,123,232,240,94,67,35,165,169,179,184,
86,224,174,48,194,179,53,237,37,155,78,157,118,111,101,28,50,241,94,143,169,104,118,122,94,143,54,210,100,185,118,1,24,244,81,158,113,248,10,229,47,116,137,174,52,91,165,4,11,139,133,218,187,142,49,239,
250,84,70,90,149,40,232,121,138,233,183,66,222,56,150,201,36,126,167,113,31,227,91,122,103,195,95,16,235,118,172,214,186,76,108,185,229,188,229,24,253,107,11,86,133,116,187,223,179,220,34,9,20,100,178,
200,213,244,15,192,221,61,99,240,92,87,41,242,139,169,154,65,212,240,62,81,215,253,211,93,210,169,203,27,156,145,143,51,177,227,143,240,83,198,3,63,232,10,71,251,50,131,92,238,175,224,61,87,67,184,242,
111,22,56,101,192,56,105,0,254,117,246,36,126,36,211,109,238,37,179,107,149,23,49,96,200,152,60,3,210,188,127,226,138,232,190,50,213,144,9,132,254,82,128,175,19,99,30,163,222,166,158,34,238,204,37,70,
219,30,59,99,162,221,198,99,14,96,33,187,153,212,99,181,107,127,99,93,198,0,103,181,217,237,56,255,0,10,232,172,190,24,65,46,163,98,233,114,22,36,145,6,214,80,120,13,147,222,190,149,209,244,253,14,73,
20,44,118,108,217,192,0,41,52,229,90,49,98,141,55,212,249,89,116,18,144,176,105,109,212,227,239,111,206,63,74,161,37,140,54,50,110,130,234,221,166,94,146,75,33,192,250,0,43,238,77,75,67,210,46,244,185,
45,174,172,237,90,25,144,198,79,146,187,134,70,51,211,173,124,151,241,67,192,235,225,13,113,163,68,91,139,34,127,115,59,198,62,111,111,168,171,141,85,36,103,40,89,152,222,16,240,71,246,230,173,103,110,
117,27,116,184,154,69,8,194,55,145,139,19,217,64,249,143,183,122,234,62,42,120,22,251,194,94,32,155,74,214,47,69,144,70,13,230,92,90,73,3,158,56,59,15,35,32,231,173,108,124,2,248,162,62,24,248,206,223,
95,159,68,176,214,97,130,38,133,86,233,70,96,110,24,72,135,7,107,2,7,56,232,72,227,57,172,47,218,11,227,69,199,197,239,17,93,234,51,238,40,247,12,209,111,1,72,64,2,167,3,143,186,162,180,230,76,135,22,
143,62,214,238,32,141,226,130,218,227,237,113,66,54,153,182,149,13,206,120,205,82,179,134,231,80,153,109,237,185,121,56,198,113,158,253,106,150,239,244,120,192,29,201,205,37,189,196,176,72,36,142,70,141,
212,228,50,156,16,104,176,238,203,122,150,147,121,163,200,137,115,23,151,36,163,112,82,114,113,156,118,172,185,17,252,204,55,56,244,53,102,227,81,185,184,184,51,77,60,146,203,183,110,247,108,156,122,84,
8,51,130,120,166,136,37,133,134,241,230,19,142,153,235,138,245,111,131,158,25,133,190,35,120,102,109,126,54,58,40,187,142,73,196,82,167,152,85,126,96,54,228,156,18,0,62,198,188,166,23,17,202,143,140,133,
96,112,126,181,209,90,120,131,80,183,8,99,186,150,50,189,10,177,226,165,141,31,85,199,227,175,11,69,226,207,141,62,39,93,59,124,198,212,233,218,85,188,136,197,54,249,101,55,48,206,114,90,52,198,15,28,
214,64,213,124,51,15,134,126,12,248,108,165,196,118,130,99,121,171,92,197,242,207,147,181,240,173,208,0,206,192,100,127,8,252,126,116,62,38,213,21,95,253,58,113,230,114,223,57,231,235,77,127,19,106,100,
32,55,247,0,175,79,222,30,62,149,151,41,165,207,165,226,241,246,136,60,101,241,171,196,147,193,53,253,205,204,82,67,166,253,176,238,24,112,228,231,212,229,80,15,65,245,174,34,75,63,12,91,248,127,225,93,
130,197,116,222,101,219,93,106,197,228,0,200,73,143,42,14,62,85,24,192,207,63,51,87,144,127,110,106,82,41,111,183,76,119,117,253,225,230,162,58,141,236,202,75,93,204,72,224,124,230,167,148,180,207,125,
147,196,158,31,147,197,31,17,245,55,176,249,196,9,21,132,155,249,85,17,48,101,199,70,203,5,207,251,162,184,185,46,52,177,224,127,3,105,57,39,58,145,158,239,230,4,141,229,85,251,112,48,169,143,196,247,
175,46,55,87,12,140,76,238,71,127,152,154,174,211,75,183,113,118,56,247,169,228,42,231,183,183,137,116,233,60,125,226,237,97,246,70,109,236,18,43,101,141,64,14,85,23,39,24,193,57,65,245,206,107,30,215,
80,210,173,60,15,224,219,66,210,180,243,106,201,53,238,36,7,108,106,236,14,56,202,240,69,120,244,215,173,31,87,57,235,214,168,73,171,73,218,86,252,9,171,141,59,146,231,99,234,153,188,103,160,223,120,239,
226,64,154,199,205,209,111,116,20,181,142,1,33,66,210,70,145,178,21,101,25,200,116,207,191,35,214,190,124,176,240,229,253,244,46,234,33,223,28,102,70,141,228,10,248,3,39,131,92,188,122,181,194,183,19,
200,15,179,154,191,225,173,70,79,248,72,109,153,228,102,36,48,44,199,60,109,53,188,97,100,115,202,122,144,125,169,167,108,130,118,212,150,247,211,90,220,71,52,46,209,203,27,110,71,94,8,35,161,6,168,163,
13,131,110,64,11,205,6,108,119,230,180,229,91,19,204,205,253,119,198,26,207,137,218,38,213,53,9,239,124,176,66,9,27,133,250,15,90,202,243,184,235,205,84,243,187,19,138,149,238,36,242,208,149,62,88,249,
84,145,199,174,51,77,69,45,131,153,178,127,48,237,35,53,55,218,48,160,30,125,42,139,121,130,216,207,229,183,149,146,161,240,118,231,25,198,125,105,87,204,146,55,145,81,153,16,124,204,6,64,250,250,81,160,
174,205,40,110,21,4,109,42,110,143,113,227,183,74,137,174,55,49,42,2,169,60,98,179,252,242,209,253,236,15,210,144,220,124,160,118,167,96,185,160,46,3,49,7,169,239,66,191,215,61,141,103,253,160,117,205,
59,207,44,160,209,97,115,51,99,76,214,36,211,175,18,84,10,192,252,140,173,208,131,193,205,71,116,202,151,146,188,25,88,65,206,65,206,223,106,203,243,7,255,0,90,164,142,66,223,32,59,115,83,97,220,212,151,
82,50,88,198,141,4,18,34,183,19,8,176,249,244,45,222,161,147,80,150,104,82,61,223,186,92,149,95,76,245,168,111,117,35,113,141,177,164,40,64,204,113,140,41,32,99,56,170,126,119,3,230,197,85,128,183,184,
142,212,140,252,113,85,197,194,179,100,243,75,231,2,112,7,90,44,23,37,220,49,239,77,86,44,192,14,79,106,136,220,14,131,147,237,74,39,88,254,116,98,174,14,69,43,14,229,134,99,147,158,91,167,210,161,220,
127,167,90,150,59,203,127,39,18,69,153,1,225,212,245,252,42,167,157,187,45,142,41,88,46,94,130,11,139,150,253,196,47,39,251,128,154,142,79,49,95,108,128,171,3,200,110,181,185,168,106,82,104,218,109,140,
54,196,70,238,190,99,58,247,250,210,234,211,199,53,149,134,171,229,171,59,124,174,51,247,143,255,0,172,26,146,204,89,45,230,138,44,188,110,168,122,49,4,84,105,12,179,178,172,104,206,199,251,188,215,65,
162,223,203,170,94,72,243,131,37,154,43,23,86,251,171,199,20,221,61,30,235,77,185,77,53,182,205,231,100,140,96,237,237,131,64,204,22,89,109,228,219,34,50,191,101,97,76,249,217,176,21,137,244,2,183,53,
134,146,207,77,182,55,71,55,129,254,70,206,112,42,134,159,127,115,117,117,134,147,228,80,75,28,118,166,128,163,230,50,113,146,40,18,176,239,81,220,92,9,110,24,246,38,155,184,109,230,159,40,174,203,62,
105,101,32,154,171,112,199,234,62,181,161,167,201,21,194,152,118,132,249,73,221,215,53,159,229,25,164,10,167,30,245,37,171,145,134,60,246,165,134,109,185,25,169,230,140,197,108,70,220,224,253,234,205,
243,57,38,165,23,177,161,29,209,143,33,134,120,227,252,106,38,184,102,82,73,231,210,170,52,219,134,115,156,84,77,113,183,250,211,178,29,217,113,174,15,57,164,251,83,41,228,103,138,166,37,221,146,78,223,
175,122,137,174,9,235,205,43,34,226,217,233,62,19,186,102,210,198,15,70,173,143,60,253,77,114,222,11,159,118,150,222,205,142,181,208,185,42,1,200,35,216,215,207,86,95,188,103,237,25,87,189,131,166,252,
139,13,57,24,205,39,218,106,151,156,63,28,211,188,228,1,183,250,113,88,216,245,249,73,36,184,43,210,154,179,51,119,205,85,105,127,17,66,79,138,70,150,46,44,159,49,201,169,99,148,131,154,167,231,12,83,
150,109,216,237,69,133,99,65,110,58,84,109,112,65,60,84,30,111,24,239,235,77,201,45,72,72,155,205,231,154,158,9,136,232,106,142,239,198,165,129,128,235,210,139,21,99,65,165,220,188,26,135,205,56,53,30,
240,58,83,124,197,28,116,239,85,98,44,73,230,19,158,42,104,36,59,136,237,131,85,124,204,240,14,106,123,127,245,131,233,76,58,9,28,159,49,169,100,147,229,53,93,56,36,99,154,150,67,149,193,226,164,133,184,
251,121,7,25,61,233,202,200,178,54,61,106,154,190,210,71,106,85,147,147,222,145,82,59,207,30,76,146,120,101,247,231,247,145,70,200,125,246,169,175,27,110,188,87,174,120,179,109,199,131,227,108,16,68,17,
28,255,0,192,7,248,87,146,15,188,64,220,121,174,122,155,159,73,144,255,0,186,53,230,198,122,16,49,154,208,211,254,89,147,29,200,172,246,229,135,229,87,172,88,249,139,159,187,89,31,101,134,220,102,190,
60,189,98,236,118,47,159,207,154,164,188,226,174,248,147,35,87,151,28,150,8,217,245,202,138,234,254,27,252,57,155,196,247,137,53,210,148,180,7,56,35,239,85,168,57,59,35,233,170,85,133,42,62,210,111,68,
79,240,203,225,133,231,141,53,8,230,145,90,45,61,79,205,33,31,123,216,126,181,245,199,133,116,43,109,10,206,27,123,104,145,33,69,3,0,99,167,122,199,240,246,155,6,151,106,144,67,26,198,168,188,109,24,206,
6,127,165,82,212,117,171,207,22,234,67,195,186,11,133,149,198,103,185,237,26,112,13,122,180,169,198,154,243,63,40,205,113,243,199,201,221,242,211,142,190,73,119,101,221,111,94,190,241,166,180,158,25,240,
211,41,44,113,115,120,56,17,39,126,127,206,107,213,124,35,225,27,15,2,104,233,99,105,28,134,67,243,75,113,26,146,243,55,171,99,53,23,129,252,19,167,248,47,75,22,182,40,211,59,96,205,112,208,190,231,111,
82,70,120,174,153,68,171,242,0,67,118,41,184,103,219,29,127,74,244,105,211,182,178,63,19,206,243,159,173,255,0,179,97,180,164,190,249,62,239,244,67,86,71,218,76,112,202,91,182,101,216,127,35,82,69,116,
192,254,240,237,35,176,112,113,81,249,165,88,239,37,143,127,147,4,125,105,249,77,195,121,31,239,99,21,210,124,113,43,5,111,156,76,192,30,185,98,105,20,196,192,96,182,224,63,128,253,234,68,182,133,88,180,
76,140,222,238,28,254,88,167,254,247,119,238,214,60,14,160,69,183,250,208,64,138,195,254,89,44,141,255,0,93,50,49,82,71,52,155,190,83,206,59,5,169,132,110,192,22,138,34,71,247,164,218,104,46,85,112,240,
42,168,232,0,45,249,1,74,196,138,175,43,169,14,99,193,254,252,184,252,72,20,126,242,54,231,201,199,172,121,207,225,77,17,252,165,163,183,220,189,193,143,31,165,60,62,84,17,2,167,169,82,114,41,146,199,
35,72,156,43,201,179,214,76,128,127,74,178,170,24,112,196,16,59,31,254,181,85,243,74,113,187,104,63,222,52,177,200,222,103,11,22,230,29,216,228,210,32,178,98,97,135,9,185,191,190,184,63,206,157,180,147,
185,131,33,199,12,188,159,198,146,33,42,125,241,131,220,71,210,134,145,203,129,185,136,255,0,105,115,138,162,71,35,96,99,204,145,71,102,101,167,21,195,22,18,201,145,234,78,63,90,97,222,163,229,59,199,
253,115,57,252,169,86,71,102,24,121,16,250,178,99,240,197,2,56,134,105,91,32,156,15,81,154,143,231,94,10,23,83,212,111,197,61,243,183,121,249,72,235,207,244,168,164,1,87,113,220,223,239,55,31,203,138,
225,44,99,76,157,225,193,94,133,72,106,139,114,28,225,159,39,185,206,42,79,181,46,209,128,161,122,112,253,253,51,81,179,43,240,84,196,123,141,249,253,58,80,81,20,128,73,201,237,215,147,81,51,52,121,81,
129,233,205,78,234,161,64,15,211,183,11,252,184,170,178,48,28,135,111,117,192,34,164,102,109,217,221,125,147,198,54,255,0,90,213,141,182,218,69,244,172,105,51,246,183,201,207,63,210,182,14,86,8,199,181,
106,246,39,169,75,82,103,251,44,190,155,77,115,179,70,89,49,212,214,238,168,195,236,175,158,226,177,228,1,87,61,232,136,153,38,139,107,229,204,242,184,251,171,145,81,106,81,195,51,51,50,238,56,192,197,
90,177,109,182,179,191,208,86,109,198,91,115,102,130,143,48,241,68,126,101,244,227,60,32,172,137,191,208,108,211,35,113,126,66,214,198,181,150,186,185,39,248,156,243,248,214,52,234,38,186,80,115,128,48,
180,22,51,75,152,67,174,90,179,124,171,46,229,246,206,9,31,202,190,114,213,183,77,168,220,21,201,45,35,127,51,95,69,222,66,109,94,222,82,184,49,74,141,250,255,0,245,235,231,91,144,90,225,206,49,150,61,
253,235,90,102,85,10,147,69,28,44,90,25,79,202,70,55,12,19,235,85,138,228,227,173,90,251,59,72,219,84,100,147,128,63,149,111,234,158,6,184,208,108,222,230,250,226,18,35,101,71,134,19,185,149,216,100,3,
233,93,23,91,25,89,152,250,22,173,117,225,253,66,43,203,70,217,42,30,115,209,135,161,29,197,123,70,151,227,61,11,88,211,133,199,246,178,232,151,50,46,38,133,134,112,221,241,255,0,214,175,11,3,230,192,
57,21,179,225,253,62,223,80,188,49,92,151,9,177,152,20,199,97,159,229,88,213,165,25,234,109,78,163,137,235,255,0,240,149,104,118,122,59,199,113,226,24,111,132,100,190,192,9,145,143,160,226,188,163,95,
241,213,238,175,127,230,66,205,105,2,100,71,26,49,206,59,100,250,211,109,108,52,198,176,146,242,239,237,13,31,159,229,70,177,99,56,219,158,107,59,90,210,86,198,243,101,185,105,97,120,132,234,72,228,41,
245,168,167,74,49,42,85,37,35,51,80,146,93,66,81,44,174,100,147,24,44,199,39,21,245,199,194,59,1,109,240,235,195,235,140,22,180,89,15,213,190,111,235,95,34,123,19,94,237,240,207,227,55,151,165,218,233,
55,105,28,13,107,18,197,11,227,253,96,3,31,129,197,21,163,238,232,20,158,186,157,119,136,254,24,235,218,142,187,125,168,105,218,180,54,49,220,224,96,161,45,128,0,235,94,91,113,224,249,52,221,74,242,11,
189,98,215,237,49,252,170,48,195,47,145,201,227,211,53,236,171,241,74,45,184,33,49,244,53,192,248,135,71,210,252,79,168,53,204,143,151,98,73,42,228,117,174,56,202,219,157,54,103,63,166,120,103,95,190,
184,91,123,43,235,91,167,126,21,18,224,131,250,138,244,31,12,124,51,241,30,155,226,125,30,230,226,60,219,70,82,73,228,243,65,195,1,146,7,168,206,43,35,193,126,17,211,124,33,226,11,125,93,38,154,86,136,
54,35,121,114,188,169,25,199,227,94,175,255,0,11,38,202,53,1,62,99,245,20,74,75,160,114,157,77,246,229,141,114,122,124,220,215,144,124,71,190,130,79,13,107,80,222,172,119,15,20,15,36,82,127,118,64,50,
8,63,94,43,182,147,198,16,234,16,200,229,149,84,33,192,220,50,77,120,255,0,197,105,210,95,12,202,25,217,22,89,163,66,203,201,198,114,127,149,116,81,212,231,168,173,169,229,22,254,44,158,210,202,123,88,
21,66,207,141,204,221,71,210,179,181,9,163,186,144,52,104,99,92,116,206,121,239,73,174,217,71,103,168,1,108,172,176,180,72,235,187,175,42,13,84,71,252,107,185,35,153,182,74,217,10,180,138,184,235,82,8,
206,213,36,114,122,10,95,92,245,162,226,35,48,171,1,142,189,233,158,73,207,74,176,188,213,166,176,150,59,20,187,96,60,134,115,24,57,239,140,244,165,113,216,161,28,36,158,181,114,35,242,12,254,117,31,241,
112,41,203,157,131,233,72,9,76,159,149,56,55,7,154,106,47,152,193,119,109,207,115,68,113,60,204,168,128,200,236,112,20,82,25,101,38,85,139,142,160,227,20,214,144,236,10,160,142,230,163,104,222,6,112,232,
202,221,8,61,168,243,51,208,28,86,125,75,65,35,24,227,218,202,192,231,156,241,84,111,47,149,84,237,7,53,98,250,236,176,44,217,45,158,245,206,222,93,25,36,62,158,213,106,55,20,164,37,214,160,205,33,193,
199,29,42,180,115,15,226,206,61,170,188,140,121,193,239,201,164,82,119,0,14,73,239,93,17,90,28,236,210,18,66,203,213,163,111,115,145,87,52,22,88,245,200,75,204,187,130,190,213,94,127,128,254,149,131,230,
109,246,169,180,57,177,173,30,255,0,186,147,28,227,254,89,181,82,36,187,246,192,176,133,85,30,229,186,154,135,206,37,78,26,170,172,155,148,6,235,235,154,70,147,105,199,90,0,183,231,51,48,4,244,174,235,
85,96,191,9,52,70,0,101,181,9,139,31,92,110,21,231,31,104,218,217,197,122,55,132,53,175,15,235,158,18,95,15,107,183,18,233,237,111,59,92,65,113,31,32,238,206,65,235,234,105,72,113,25,125,40,31,7,236,207,
127,237,87,63,249,12,214,242,106,154,60,158,3,215,172,180,104,155,201,181,130,54,146,226,65,134,153,216,242,79,211,21,206,120,251,90,209,237,124,55,99,225,173,14,70,185,183,130,102,184,146,230,95,226,
114,8,254,191,160,173,29,38,111,6,232,186,22,161,101,253,177,113,57,191,141,18,86,49,144,80,140,158,6,61,77,101,174,229,232,112,246,49,79,168,205,5,181,186,121,183,19,202,176,197,26,245,103,98,0,31,137,
34,181,252,77,225,235,93,7,236,208,197,169,53,222,163,243,37,229,139,91,52,109,105,42,144,25,9,36,238,32,238,28,122,86,30,160,214,150,183,178,13,54,234,73,109,209,129,142,102,27,91,252,230,171,53,196,
147,76,242,201,35,201,44,140,89,221,201,36,146,121,36,250,214,166,101,182,253,220,120,111,190,79,233,77,243,119,83,102,154,41,160,133,82,17,27,162,225,223,36,239,57,235,80,14,49,206,71,90,6,93,87,44,118,
251,102,163,105,152,1,207,63,90,45,228,219,38,0,225,134,50,106,25,8,85,62,230,128,44,197,117,181,190,124,145,138,108,146,250,116,170,202,216,199,20,141,32,221,197,59,136,176,179,115,199,94,244,190,119,
167,243,170,158,103,205,215,35,189,55,121,221,72,101,181,185,42,195,12,84,138,83,113,234,106,143,153,201,230,157,184,115,222,152,26,86,112,189,222,224,178,70,187,70,226,29,241,80,249,199,113,207,56,238,
42,183,33,114,58,83,124,233,89,68,123,190,65,210,129,216,237,228,181,95,17,104,246,79,11,8,174,163,93,132,49,31,48,28,83,117,28,121,54,154,66,78,191,47,223,115,211,53,199,71,113,44,28,44,140,132,118,7,
20,191,104,44,114,78,123,243,214,162,197,220,244,43,155,19,13,140,54,214,119,17,219,197,140,200,199,150,99,239,89,246,160,182,151,53,141,181,202,69,120,146,229,206,120,113,236,125,43,143,89,153,178,11,
28,99,214,153,230,183,82,121,207,90,92,163,185,213,234,82,181,158,136,109,239,37,15,116,31,42,51,156,10,206,181,188,22,154,92,239,184,121,147,252,163,161,56,21,139,35,52,131,115,54,123,103,52,214,147,
140,21,207,163,83,176,22,22,70,96,199,61,40,51,28,99,53,93,157,149,115,140,83,60,195,212,213,8,211,177,184,17,200,219,206,222,8,6,157,111,168,71,111,35,23,140,201,145,142,14,43,44,73,187,25,38,157,187,
36,84,178,147,58,15,181,36,150,101,196,99,202,232,84,158,69,96,220,54,214,56,233,218,167,141,143,151,180,125,218,165,114,216,227,156,103,165,66,90,154,92,107,62,56,206,69,70,210,13,189,243,233,78,135,
202,146,116,89,28,162,18,1,96,58,84,119,81,164,83,200,145,200,37,141,73,11,32,227,119,189,90,1,190,118,56,234,58,83,89,207,28,82,50,174,208,67,99,138,150,203,108,183,10,142,187,183,116,4,226,147,45,29,
159,130,164,111,236,249,178,49,243,87,64,36,60,224,214,7,134,66,170,220,34,68,208,160,111,184,231,165,109,176,61,43,231,235,233,81,159,180,228,186,224,105,191,33,119,30,244,133,187,211,85,177,193,239,
75,202,130,57,193,174,83,220,17,156,240,49,143,122,69,59,91,173,42,140,169,35,28,122,211,123,244,164,50,64,212,240,79,110,106,37,244,2,158,189,141,48,39,86,38,156,172,91,208,212,94,226,156,172,3,114,56,
160,68,163,47,206,113,78,86,244,53,30,245,100,192,227,154,35,60,231,145,64,19,110,44,41,55,115,77,221,138,66,193,152,83,185,36,138,72,230,174,90,177,105,7,229,89,251,134,122,228,85,171,54,30,98,159,124,
96,208,38,63,131,33,250,211,216,212,76,7,154,74,250,211,155,156,138,76,198,59,145,51,114,104,86,244,20,198,198,239,122,57,227,215,173,6,204,244,27,165,75,207,9,219,199,33,109,143,106,185,32,243,198,225,
253,43,200,25,134,227,94,172,243,31,248,66,109,164,92,101,109,219,39,232,237,94,85,33,249,134,63,31,106,231,168,123,185,14,148,102,191,188,200,255,0,139,61,234,229,167,222,90,166,195,166,13,91,178,111,
222,41,239,88,159,105,135,122,157,174,143,224,179,226,13,126,25,220,31,37,145,15,29,56,95,254,181,123,198,131,167,199,165,218,199,20,72,17,21,113,129,92,135,195,184,147,251,6,222,99,131,35,124,164,253,
43,94,107,155,255,0,16,106,209,104,90,20,102,123,233,219,110,229,56,8,15,82,125,128,175,70,151,194,153,230,230,56,169,86,110,18,118,140,119,237,234,106,205,171,223,248,163,86,143,65,208,23,204,187,151,
135,155,248,98,79,226,102,62,152,175,115,240,79,128,109,252,13,165,180,22,198,9,46,38,109,247,51,151,203,72,199,211,216,118,21,79,225,223,195,200,60,3,165,136,99,220,215,178,225,174,47,8,27,157,177,219,
184,30,213,216,199,229,238,226,104,164,110,219,134,63,157,122,244,105,114,251,210,220,252,7,136,51,223,174,201,225,176,186,82,95,249,51,238,252,187,34,53,121,139,17,198,64,224,110,42,49,253,105,222,99,
42,143,58,24,246,246,39,36,143,167,165,88,243,166,86,218,208,200,169,234,178,160,31,200,241,76,42,100,109,191,100,201,39,140,74,31,63,157,117,159,12,216,190,113,198,85,112,131,219,21,42,109,113,243,15,
151,174,224,127,253,117,23,217,67,72,131,204,242,194,228,236,35,249,243,75,246,121,127,229,156,187,202,30,118,141,162,131,54,76,176,196,135,49,111,35,253,207,235,197,73,180,224,44,182,197,98,236,89,186,
251,128,9,170,251,6,236,164,164,158,225,129,52,229,141,113,147,128,15,92,163,98,145,44,144,70,67,17,20,45,183,212,116,252,234,204,113,180,120,44,36,141,135,76,17,143,231,85,227,154,35,136,203,49,35,160,
193,199,243,163,228,140,30,78,63,186,69,34,75,91,194,49,34,89,51,212,126,243,63,224,41,85,254,208,164,27,146,24,122,124,223,200,84,41,182,51,185,114,190,160,47,31,167,74,151,204,47,130,54,0,127,188,216,
63,202,153,36,145,48,117,40,146,130,125,219,7,242,166,48,133,65,249,163,98,56,45,138,142,72,131,47,33,71,61,191,198,166,83,183,160,82,49,206,6,63,253,116,128,69,1,215,41,30,239,204,212,169,59,40,1,151,
42,63,133,184,31,202,162,85,221,32,33,138,231,143,149,105,91,253,29,178,222,76,177,250,109,59,133,8,130,117,155,114,237,18,164,126,220,154,60,207,155,239,121,135,253,149,34,161,91,136,216,241,24,192,237,
140,212,158,106,55,252,178,57,245,231,38,153,39,35,204,140,88,41,250,18,42,60,19,201,101,111,97,205,12,229,142,50,3,122,83,76,128,253,221,204,123,128,13,113,20,52,249,113,231,247,74,153,238,163,31,152,
170,251,226,29,39,45,236,56,169,164,115,200,201,110,252,176,254,181,85,228,145,178,3,40,78,228,156,226,130,136,228,140,62,74,163,58,119,46,72,168,36,141,85,184,221,27,142,152,201,21,44,147,30,193,36,31,
222,81,211,241,168,26,105,89,126,249,216,63,135,25,254,84,134,102,200,71,218,164,60,253,227,252,171,86,102,253,218,1,216,86,71,153,230,72,199,166,75,14,152,237,90,151,12,194,53,244,219,90,49,35,59,85,
147,253,28,214,68,205,242,231,190,107,67,86,147,247,4,31,81,252,235,38,73,135,151,193,239,214,136,236,46,165,200,228,63,217,206,1,195,23,2,179,102,102,218,217,61,249,171,177,31,51,77,124,28,145,39,244,
170,172,184,183,44,71,57,164,104,143,54,212,129,109,236,79,37,142,106,180,54,81,249,17,75,189,124,194,255,0,119,60,226,172,221,50,180,158,94,57,47,143,214,169,171,11,123,224,164,101,81,185,169,40,103,
142,136,183,92,32,218,118,41,59,71,191,90,249,162,224,124,205,142,181,244,95,139,47,70,163,36,142,7,252,179,118,199,251,168,79,244,175,157,157,78,115,91,210,49,168,84,146,65,14,10,231,112,228,28,247,245,
173,61,91,198,90,142,181,166,155,91,150,140,163,56,119,117,64,29,200,24,27,141,100,93,47,205,237,138,142,50,21,72,0,19,244,174,134,150,230,87,118,176,177,227,191,175,53,208,88,222,105,150,22,134,100,146,
97,122,97,120,204,120,202,150,57,25,207,166,43,182,240,87,128,116,159,17,120,54,27,171,136,153,46,221,220,121,225,200,232,196,125,49,89,51,120,75,75,181,153,173,165,89,60,209,141,178,114,119,131,140,48,
246,172,29,69,123,27,42,110,215,57,155,29,113,108,180,115,2,196,146,74,211,153,15,152,187,148,46,208,6,63,26,126,155,174,44,154,148,210,223,22,84,154,35,17,104,212,124,163,182,7,167,21,232,86,255,0,13,
116,113,10,22,142,73,27,25,39,204,63,202,165,255,0,133,123,161,173,187,185,183,60,3,214,70,255,0,26,205,215,130,45,82,145,230,158,33,208,227,75,148,109,58,25,102,133,208,49,145,70,87,39,210,177,191,179,
111,99,97,182,214,117,32,228,29,135,53,214,235,22,41,97,103,51,88,199,32,85,109,171,182,70,56,193,228,227,53,147,103,13,238,169,9,217,44,145,200,173,131,185,200,24,34,182,83,77,92,205,198,197,237,55,90,
214,26,33,27,217,22,218,49,230,74,118,22,246,231,169,171,49,248,150,249,51,191,78,159,143,99,254,21,145,169,105,87,150,118,235,113,37,200,184,69,108,124,142,73,83,83,190,141,127,29,159,155,246,175,152,
46,243,8,144,239,3,175,74,151,24,203,160,115,201,26,235,226,139,204,99,236,23,88,246,83,86,63,225,42,49,77,12,15,28,159,104,144,103,201,24,44,190,153,231,189,112,183,26,148,211,72,72,150,68,227,31,43,
16,42,238,159,242,249,114,70,88,220,200,119,51,247,197,39,78,35,246,146,61,18,61,118,107,53,221,45,189,196,120,235,148,198,62,181,91,90,241,93,190,165,167,172,71,203,150,68,144,72,177,220,48,85,36,2,6,
127,58,222,240,127,142,181,141,67,194,186,174,130,215,107,53,156,222,91,79,3,168,37,196,121,41,207,80,1,57,227,173,112,23,134,200,249,131,204,140,145,223,20,163,203,23,160,228,228,214,163,23,195,254,39,
241,213,212,48,218,216,71,127,32,83,179,236,123,58,1,147,146,15,64,7,225,92,229,230,147,113,166,94,203,109,117,23,151,113,17,218,203,193,253,71,7,234,43,218,62,29,205,103,225,123,125,47,89,142,245,163,
150,28,185,242,27,102,119,20,5,120,245,10,115,235,154,102,177,98,60,77,225,194,233,107,31,218,35,216,139,229,166,14,208,249,43,159,238,128,78,7,181,83,172,163,161,30,205,238,120,227,134,194,125,41,61,
107,213,181,109,30,49,54,167,111,38,133,4,22,49,194,237,29,215,151,180,171,5,202,225,189,205,115,118,58,118,141,39,130,117,57,145,30,125,82,49,27,187,184,194,196,12,128,109,95,114,58,253,107,84,238,65,
199,99,229,207,175,106,187,166,233,87,186,196,194,11,56,100,157,240,78,20,112,49,220,147,192,170,76,70,226,58,10,232,124,35,37,196,143,127,103,4,107,40,184,181,104,254,105,132,91,62,101,33,178,79,168,
28,80,6,85,198,151,119,105,52,203,53,188,145,152,25,82,69,97,247,73,232,15,215,6,158,203,46,155,43,65,60,106,27,3,114,48,206,56,205,118,126,42,93,66,207,193,214,233,116,208,92,150,158,52,107,136,220,52,
159,42,146,3,17,212,14,113,205,112,46,237,43,238,119,44,196,228,177,57,52,8,95,189,247,104,243,10,182,225,193,29,233,58,103,6,146,134,50,86,102,200,199,63,83,76,47,143,194,131,39,59,137,7,29,170,25,100,
10,135,191,122,130,138,215,183,81,38,229,101,44,196,124,167,119,67,92,252,210,59,114,57,231,25,171,58,133,201,46,115,216,86,107,76,126,81,156,138,222,59,25,201,150,32,183,251,67,74,26,65,16,10,91,56,206,
72,232,42,213,184,210,225,211,94,71,150,89,111,206,85,98,198,17,125,14,107,59,237,59,119,108,194,146,62,180,197,59,216,131,212,214,136,204,112,195,96,118,207,52,253,29,119,107,195,4,227,202,148,143,194,
54,168,177,142,167,21,99,195,177,153,60,65,199,252,251,204,70,63,235,147,85,18,202,203,38,213,250,209,191,158,121,168,201,10,163,244,168,166,108,50,243,138,96,60,204,25,142,13,62,41,27,119,90,234,126,
16,233,246,250,167,196,13,46,43,152,210,226,47,222,179,69,34,229,78,34,114,50,62,184,169,254,27,216,193,125,241,50,202,41,34,86,182,107,137,49,11,12,140,5,98,6,15,166,7,229,67,105,104,8,228,174,183,121,
99,61,233,182,178,48,186,137,70,75,111,24,94,61,125,235,179,26,214,157,225,63,16,107,178,205,167,45,221,242,92,200,150,113,200,7,149,31,206,217,36,125,49,138,220,241,67,73,173,120,22,239,83,215,52,184,
180,139,216,100,95,177,58,38,198,151,35,145,142,184,255,0,61,170,121,128,229,60,76,246,45,228,11,40,4,10,128,171,237,57,5,178,73,32,250,100,254,85,140,172,84,243,205,86,135,80,127,176,177,117,102,82,216,
12,71,241,127,250,191,157,57,101,51,41,126,196,227,20,218,176,214,165,184,200,199,60,45,61,164,69,206,220,224,244,172,217,15,146,133,137,96,191,206,154,151,169,26,129,134,46,127,139,57,253,40,67,53,97,
145,124,213,61,61,113,76,105,217,101,12,167,5,78,69,87,84,49,178,110,39,241,170,151,146,249,44,185,45,184,210,234,54,180,52,90,65,33,201,110,104,86,79,48,114,63,26,204,181,152,220,92,36,64,178,150,226,
172,172,91,24,143,188,105,19,98,215,202,28,224,225,126,148,215,249,123,142,107,62,73,149,89,184,110,15,56,169,109,164,23,64,129,184,5,25,205,48,44,238,6,159,28,145,174,119,46,238,61,113,131,84,218,22,
220,121,111,206,160,142,224,109,98,115,242,246,207,90,16,222,134,153,149,119,14,129,106,67,15,151,10,200,88,13,221,7,183,173,102,194,90,104,75,133,192,206,49,78,184,154,85,133,67,12,133,28,31,111,74,87,
212,118,45,188,172,238,91,63,49,60,208,173,199,243,172,228,153,219,182,0,235,235,90,55,86,171,111,46,33,155,206,140,128,67,99,25,252,40,184,88,77,195,166,234,105,99,235,250,213,107,146,99,85,56,170,235,
62,230,0,134,199,214,128,53,55,100,123,82,43,14,115,211,21,3,66,235,128,79,74,171,36,237,110,219,78,72,52,92,171,51,77,100,220,187,65,200,61,169,23,230,96,188,117,198,107,46,222,102,154,64,0,234,120,53,
102,69,125,163,158,122,208,61,203,146,43,70,229,8,228,117,166,110,195,0,13,102,181,236,176,201,223,119,174,105,240,200,243,49,193,219,129,158,77,15,97,163,110,25,15,80,220,212,58,181,172,150,142,4,152,
203,13,192,138,171,27,48,234,114,49,235,84,174,175,89,152,249,133,152,244,4,154,152,234,50,98,195,110,122,83,3,119,233,80,43,25,62,233,199,29,51,68,155,130,158,15,225,77,148,181,47,88,45,172,151,176,173,
236,178,67,106,205,135,146,33,150,81,235,138,134,233,98,134,234,85,183,155,206,133,92,132,148,130,165,148,30,14,59,85,3,56,232,193,133,75,8,37,67,168,56,52,139,142,231,125,224,219,153,110,45,230,50,190,
242,184,3,61,107,161,25,221,145,207,173,114,126,4,102,95,181,43,115,192,197,117,160,227,167,21,224,98,127,136,207,217,242,47,247,8,18,78,209,200,202,99,82,56,25,4,247,168,137,60,82,100,15,122,70,62,245,
200,123,225,145,222,154,184,205,41,161,125,233,0,241,141,220,100,83,178,55,116,197,49,70,105,217,219,205,88,19,103,111,98,5,73,111,110,215,83,44,72,84,59,28,13,199,2,174,91,106,139,44,105,109,119,24,146,
5,28,21,251,195,223,53,69,155,203,144,133,61,15,20,172,71,48,178,196,98,102,83,195,41,193,31,74,23,20,197,111,152,231,57,167,47,39,218,129,143,24,57,161,151,208,230,155,78,193,245,160,65,142,65,235,87,
180,219,105,46,25,138,40,34,49,189,185,231,30,181,67,39,104,226,172,91,200,219,135,45,140,226,130,101,176,249,27,108,237,142,121,167,51,6,98,123,210,93,13,179,183,166,105,202,1,82,14,71,20,24,197,234,
66,216,63,90,76,113,207,74,27,167,189,55,112,86,197,6,199,123,103,2,221,120,34,46,114,161,92,54,59,124,249,254,181,228,173,195,183,57,231,210,189,99,67,203,120,18,86,83,194,201,50,159,201,77,121,51,127,
173,110,189,115,92,243,220,246,242,25,123,149,87,152,173,243,115,210,172,90,224,176,227,21,3,19,197,88,179,251,195,63,202,177,103,217,80,122,158,217,224,89,175,181,13,30,195,71,210,32,105,181,11,162,193,
72,31,117,115,201,207,106,250,99,225,183,195,120,188,9,165,148,15,19,106,51,16,103,187,97,185,137,254,232,246,21,231,191,178,156,54,210,120,86,242,117,138,35,120,147,121,66,70,96,27,110,1,3,243,205,123,
171,58,55,18,64,88,122,246,7,62,181,239,224,233,174,69,54,126,33,198,89,213,89,98,167,151,83,92,176,139,215,251,207,127,187,200,127,145,38,3,202,230,99,145,135,207,3,234,115,253,41,171,24,86,202,152,151,
62,237,131,248,210,174,99,32,166,81,191,188,184,7,250,84,130,73,139,109,55,30,95,125,207,30,115,248,246,175,76,252,181,143,88,226,12,25,163,33,207,96,249,83,250,84,172,133,190,227,128,253,126,105,54,226,
169,65,116,179,203,52,34,89,217,225,108,49,216,113,200,7,42,122,99,154,183,231,6,92,49,152,237,227,44,135,31,206,131,48,63,54,225,34,71,184,117,101,228,254,20,248,102,138,82,85,4,129,189,24,16,40,142,
104,149,134,72,35,240,6,166,96,220,121,123,35,7,141,165,137,253,115,197,34,9,2,76,203,128,89,7,251,160,211,85,93,120,243,83,61,247,48,63,157,54,40,76,170,65,104,217,191,217,125,216,165,218,99,144,70,89,
80,246,83,200,63,74,68,147,40,124,12,50,17,223,106,224,254,121,169,35,83,180,243,131,253,236,129,255,0,215,170,210,44,209,143,51,105,216,58,182,48,63,26,84,44,78,243,2,167,253,52,85,231,245,164,34,117,
144,131,128,84,183,231,79,249,143,44,118,158,196,40,63,214,152,179,76,202,20,75,33,29,0,199,31,149,57,109,228,92,16,207,238,48,40,32,114,237,95,245,132,12,251,140,126,148,229,16,6,249,155,35,177,207,245,
166,249,131,157,200,115,223,112,205,44,115,147,254,173,21,125,55,99,252,41,146,14,3,116,86,117,29,48,79,249,52,229,137,221,126,69,143,127,99,33,32,127,49,75,177,166,94,29,84,117,249,115,252,133,44,114,
42,2,24,133,63,222,43,254,57,52,236,2,44,44,192,23,96,91,166,213,37,134,126,181,97,97,227,254,90,41,250,241,250,211,63,118,195,170,146,125,255,0,151,2,155,228,172,123,118,22,30,224,176,160,147,136,243,
154,53,255,0,86,200,61,151,63,173,36,146,187,168,32,135,246,205,43,72,155,190,250,224,211,89,182,182,3,237,7,209,64,253,107,136,208,138,73,54,253,244,35,245,34,171,200,235,212,47,65,215,212,85,191,151,
36,13,204,127,218,53,94,77,236,112,202,164,116,13,149,227,235,82,50,187,199,28,132,22,105,148,119,216,71,242,170,242,252,217,49,238,3,166,88,227,21,106,77,234,191,187,84,115,223,230,0,213,57,24,156,153,
6,123,242,122,80,51,58,28,180,207,187,147,185,178,115,239,90,179,183,221,255,0,116,127,42,192,177,186,89,46,25,71,108,156,250,252,228,127,74,218,184,144,6,198,50,64,3,244,173,100,66,50,117,249,8,179,110,
157,69,115,190,121,22,248,227,53,127,196,122,212,73,52,58,112,193,146,67,230,54,59,1,156,127,58,229,245,109,106,61,46,60,144,88,145,144,43,72,199,221,51,111,222,58,77,54,249,26,198,88,203,1,38,252,133,
252,57,164,150,235,16,149,175,27,188,248,135,113,107,171,219,78,84,36,17,201,251,196,78,234,120,53,233,255,0,111,75,139,113,36,71,204,70,0,130,167,130,15,122,137,69,173,205,148,147,56,77,82,95,46,248,
178,118,144,159,214,168,106,18,59,220,23,92,141,248,233,86,117,185,54,222,75,216,19,154,171,109,49,220,28,158,157,177,72,162,150,163,159,177,234,110,6,60,139,41,79,226,87,31,203,53,225,211,36,107,19,117,
103,39,131,216,10,247,61,113,150,15,13,235,44,14,11,90,190,239,98,70,43,192,204,140,84,142,181,173,51,25,238,82,186,31,188,246,168,23,239,128,8,30,185,169,174,62,246,79,53,23,221,250,246,174,142,134,103,
179,252,63,241,102,153,163,248,86,59,43,155,200,35,158,22,96,34,103,251,251,152,156,250,99,6,146,45,82,59,219,155,173,74,230,230,25,109,34,144,42,184,97,146,113,242,168,250,113,94,80,186,85,215,217,82,
224,199,182,9,6,85,178,57,250,83,60,153,188,167,236,139,243,17,154,228,246,105,245,58,20,217,238,145,235,154,116,54,209,51,95,65,22,229,24,221,32,29,170,171,248,139,70,84,100,254,212,182,201,29,60,192,
107,198,181,3,121,118,98,251,90,200,54,174,16,50,109,227,218,170,253,142,70,251,177,72,199,182,1,230,178,250,188,122,179,95,109,46,199,103,226,13,74,210,222,214,226,59,43,248,38,102,96,192,35,114,50,121,
172,175,13,221,155,173,71,201,145,148,153,84,247,238,57,174,110,234,206,107,112,60,200,100,143,113,224,50,145,154,151,78,183,45,112,187,134,213,81,184,141,216,53,186,138,74,198,78,77,187,157,44,186,109,
197,142,139,122,110,192,142,73,228,140,68,187,135,56,36,159,231,87,151,195,183,90,54,139,45,210,198,39,188,150,50,24,238,24,137,49,207,212,215,31,121,112,179,78,238,153,88,115,242,169,57,227,241,166,125,
166,86,83,153,92,143,77,198,180,72,201,145,54,9,195,85,205,38,72,146,102,18,75,228,142,207,140,227,214,170,182,15,106,35,81,201,35,61,234,158,194,90,51,101,214,218,196,171,69,168,111,195,100,249,96,229,
135,112,105,177,234,246,137,168,9,26,219,125,178,174,10,16,50,79,214,168,253,134,113,111,20,242,70,209,219,74,197,86,92,100,54,58,227,243,166,201,110,51,251,182,14,62,152,197,100,162,186,151,204,206,186,
215,197,154,68,8,177,11,57,18,60,238,33,113,207,29,49,93,196,159,16,180,235,31,13,51,216,202,162,95,40,42,47,114,199,168,34,184,136,126,13,248,188,120,94,223,196,79,162,92,29,10,229,154,56,175,144,171,
35,56,3,229,224,146,15,35,0,129,158,113,156,26,227,221,90,55,42,221,71,21,46,140,89,94,209,218,199,85,115,241,2,246,241,111,226,159,19,67,116,184,242,216,156,33,236,71,210,155,164,248,190,207,77,210,229,
177,58,45,189,199,158,161,102,145,157,179,38,14,71,211,7,210,185,70,245,197,31,119,219,233,91,88,200,146,226,65,37,195,56,79,45,75,18,16,116,30,213,107,73,184,176,134,229,206,163,111,53,204,37,72,11,12,
155,8,62,185,197,103,249,156,115,72,57,83,210,152,29,13,222,173,99,117,106,154,118,159,109,37,172,19,78,143,35,205,38,243,199,3,30,220,154,117,167,129,102,95,17,173,141,236,237,107,100,204,225,110,216,
2,14,1,35,161,239,197,115,75,33,86,207,229,90,186,15,153,121,169,67,27,188,132,179,108,76,62,0,99,211,36,244,21,15,69,160,209,164,190,17,183,109,7,90,191,58,135,239,180,249,204,73,0,83,153,64,43,243,127,
227,223,165,91,111,3,90,46,171,161,219,13,87,48,234,48,121,178,74,19,30,91,4,220,87,29,234,77,55,65,138,107,95,17,164,183,44,139,12,101,149,115,195,55,60,159,202,159,255,0,8,244,13,105,225,169,90,237,
150,71,125,146,237,231,98,238,11,145,248,86,46,79,185,170,138,50,199,132,96,107,31,16,207,246,255,0,159,75,148,198,145,227,253,112,4,252,222,220,82,92,120,46,217,102,240,220,102,248,178,234,209,238,102,
199,17,29,161,177,255,0,143,98,180,229,240,237,176,212,60,80,145,221,59,65,28,114,52,89,108,25,8,224,19,143,206,160,147,195,235,113,167,248,48,137,159,206,185,185,242,152,150,192,85,243,2,241,250,82,230,
125,202,229,57,43,191,5,90,180,62,43,127,183,177,147,72,63,187,76,127,173,31,49,207,228,191,173,82,255,0,132,46,205,99,240,147,27,233,8,214,25,86,108,1,251,156,237,56,31,131,31,202,186,169,188,63,107,
31,136,60,112,130,73,60,155,107,118,40,115,247,159,25,201,227,167,90,198,109,10,63,248,68,252,23,48,118,251,100,215,237,25,1,190,234,249,140,163,31,144,173,84,222,215,51,229,69,37,240,93,128,188,241,100,
38,242,66,52,152,247,194,216,31,189,202,179,126,152,3,241,168,36,240,190,159,22,147,225,91,191,181,201,157,82,225,98,152,113,251,181,44,6,71,211,154,233,215,195,214,235,227,111,24,64,4,130,217,108,75,
0,122,150,217,25,249,184,245,38,179,53,175,13,197,103,240,255,0,193,243,129,35,92,205,118,73,102,60,0,90,76,40,255,0,190,71,229,71,59,211,80,229,69,68,240,126,152,250,239,137,236,158,238,101,139,78,182,
243,109,155,140,187,20,220,51,236,15,28,86,79,131,244,59,180,154,77,74,84,72,172,214,210,114,93,229,92,156,196,192,12,103,61,72,174,215,251,30,207,254,22,63,137,160,16,200,214,227,78,99,130,199,57,43,
31,39,241,38,188,165,132,2,203,45,43,121,224,128,168,7,4,119,173,233,55,43,220,198,162,72,145,223,37,115,140,84,18,16,88,250,208,249,109,163,36,83,161,132,180,195,115,96,103,174,43,164,195,115,176,248,
83,169,91,104,30,52,211,175,111,28,69,111,243,70,207,253,221,202,87,39,208,115,94,135,166,248,46,203,225,239,137,143,136,102,215,108,230,176,183,50,76,145,41,253,233,12,172,20,127,227,221,189,43,196,218,
69,182,203,103,56,233,239,84,102,188,146,114,75,59,17,233,154,142,94,103,114,175,99,183,210,180,221,63,199,90,190,178,215,154,137,211,181,9,156,207,100,39,0,35,229,153,142,227,244,199,235,91,222,40,184,
109,31,192,247,90,118,181,171,69,172,223,220,58,155,81,19,111,242,128,239,186,188,157,157,228,193,36,146,0,0,147,158,7,0,83,242,100,24,60,227,189,105,200,77,200,218,98,136,64,63,133,123,39,134,60,43,104,
124,15,167,79,37,176,186,186,184,45,51,54,62,234,231,1,127,74,241,118,251,173,131,207,81,93,12,30,61,214,45,244,155,123,68,186,104,226,137,74,168,28,113,146,127,153,172,234,193,205,89,59,26,83,154,139,
187,58,111,31,105,113,88,232,251,227,183,242,33,243,80,12,103,25,231,214,188,221,134,217,64,12,70,78,51,233,90,26,159,137,181,13,90,1,13,197,195,201,30,224,118,177,56,200,172,185,216,252,164,117,205,84,
32,225,27,49,202,74,82,186,61,179,90,209,237,52,200,109,236,226,210,164,158,72,227,85,55,34,50,119,144,43,207,188,125,110,109,230,211,139,219,181,187,52,77,242,178,237,39,7,174,42,236,127,24,252,69,18,
133,251,66,184,0,15,153,71,106,231,188,81,226,235,239,23,94,91,205,124,219,154,40,246,41,3,28,103,53,201,74,157,72,206,242,216,232,169,82,155,133,163,185,167,240,188,143,248,79,52,183,42,37,242,153,164,
242,219,144,216,70,56,175,66,212,90,214,242,226,95,35,66,242,73,108,238,17,158,43,197,108,175,165,211,175,227,184,183,115,28,145,156,134,83,130,56,173,251,127,136,90,189,171,23,91,134,45,254,208,205,105,
82,148,165,43,166,69,58,145,138,179,68,126,48,140,91,248,130,237,54,152,206,84,178,116,193,218,43,164,248,75,28,18,157,101,166,135,237,44,45,182,8,113,147,203,14,71,211,31,173,112,215,154,132,186,181,
244,215,87,13,186,73,14,88,247,233,138,179,166,106,215,58,4,206,214,147,108,105,163,27,153,79,56,244,173,37,6,225,203,212,202,51,74,124,199,169,91,217,164,147,24,155,75,10,132,114,219,48,64,175,39,184,
80,178,56,83,144,24,129,249,214,147,120,195,83,101,63,233,14,78,49,156,154,201,124,178,150,60,158,181,52,169,184,110,203,169,81,78,214,71,165,120,47,75,55,158,13,219,13,175,218,37,251,99,22,96,1,32,109,
81,138,93,123,68,146,29,38,253,223,79,48,162,66,112,197,118,224,228,96,215,29,225,255,0,24,106,94,29,181,123,107,73,218,24,228,109,231,3,190,42,77,87,199,186,182,169,103,45,180,211,153,34,144,97,189,235,
157,211,169,237,46,182,54,85,33,201,110,166,19,73,134,92,158,252,243,94,209,13,173,188,190,25,209,188,189,45,110,219,236,171,186,117,139,59,142,115,214,188,66,70,59,133,117,122,111,196,77,79,75,179,142,
218,25,89,97,141,118,170,250,86,181,161,57,37,200,101,74,106,47,83,160,241,246,152,176,248,110,41,94,200,89,201,231,13,129,70,50,48,114,15,233,94,125,167,178,155,200,213,156,160,220,49,245,205,107,107,
126,51,212,60,69,26,67,115,33,100,70,221,131,235,138,193,50,152,231,4,14,135,53,84,227,37,27,75,114,101,36,229,116,123,158,181,165,199,61,209,145,116,196,144,183,241,34,215,157,124,64,177,251,29,213,160,
251,57,182,102,140,229,113,140,243,193,170,255,0,240,176,181,93,161,86,230,65,129,192,6,177,245,47,16,93,235,87,9,53,220,141,35,70,54,141,199,165,99,74,156,227,43,203,99,105,206,50,142,134,167,128,86,
57,60,81,166,239,81,42,172,217,104,207,70,24,60,87,161,223,89,147,115,32,125,13,16,100,141,219,58,10,241,221,62,241,236,47,22,226,50,194,72,219,42,195,168,53,182,222,55,213,27,63,233,50,103,220,213,85,
167,57,74,241,97,74,113,138,247,132,241,130,139,93,90,72,86,48,152,195,112,49,212,116,173,175,135,247,16,91,106,82,73,36,105,42,155,87,82,142,51,156,145,216,215,47,253,165,246,171,193,115,115,153,25,143,
204,106,253,157,138,125,163,124,23,241,136,207,27,136,195,0,125,171,163,145,202,28,166,124,233,74,231,117,117,37,148,200,86,29,62,21,118,24,37,87,165,121,142,177,31,151,121,42,14,2,185,21,217,8,109,97,
140,111,215,23,56,234,139,159,235,92,110,173,30,219,201,66,202,179,124,223,235,23,163,123,214,116,224,226,205,106,84,82,86,72,219,240,188,108,218,117,255,0,151,110,46,27,41,213,114,84,115,156,84,207,111,
231,41,81,110,202,127,220,233,92,229,142,165,113,167,231,201,118,66,221,72,171,77,226,43,233,51,251,226,51,74,80,124,215,53,167,85,65,108,103,28,121,152,39,190,43,169,211,22,54,240,236,107,176,51,9,156,
238,29,122,14,43,148,97,235,156,154,183,109,125,61,188,101,99,114,23,219,189,84,163,204,172,69,57,114,206,231,121,225,16,22,107,129,140,124,163,249,215,77,159,94,51,92,87,128,238,165,184,190,156,72,219,
176,149,219,99,43,138,240,113,75,150,161,251,38,65,63,105,130,139,245,27,79,102,143,203,0,2,94,163,11,187,128,49,68,145,149,98,172,48,125,43,144,250,22,11,243,55,3,154,21,89,143,202,11,119,226,145,38,
48,184,97,193,6,180,70,187,58,184,145,18,56,223,24,44,171,214,130,29,250,25,252,14,105,241,168,98,121,169,175,175,35,188,85,97,0,138,108,252,229,62,233,252,42,168,99,76,87,238,90,183,101,89,20,177,249,
69,15,32,118,99,142,167,53,20,106,88,240,113,77,90,96,78,13,29,170,37,37,143,92,83,205,38,4,157,250,241,78,198,222,78,125,42,29,199,138,145,152,182,59,138,72,76,118,239,148,243,82,70,195,204,92,28,114,
42,191,32,245,230,149,15,206,167,223,189,54,75,52,111,142,219,147,147,82,67,116,177,174,12,97,198,15,95,113,81,234,10,60,224,120,251,160,254,148,207,225,7,56,160,230,91,145,72,119,84,106,113,219,189,57,
155,174,122,125,105,141,247,70,0,20,142,155,158,143,224,192,183,158,21,158,212,125,233,37,145,49,238,80,127,133,121,85,197,147,67,35,100,128,3,21,60,250,28,87,163,120,22,108,104,215,99,59,79,156,48,65,
228,101,27,252,43,203,47,161,104,175,37,66,115,177,138,245,247,172,102,122,185,19,180,171,71,205,22,218,31,148,101,151,31,90,158,210,0,207,247,128,252,107,36,41,238,127,90,179,102,191,188,28,254,181,137,
246,148,111,204,125,131,251,39,40,127,14,107,17,178,163,21,153,10,179,71,191,25,7,56,61,186,87,189,135,133,64,14,225,73,59,113,253,239,160,239,95,61,126,201,204,173,162,107,17,186,179,1,36,109,242,253,
24,87,191,9,17,100,218,174,160,55,85,218,24,143,204,98,190,143,7,252,20,127,59,241,122,182,115,95,229,249,34,86,134,49,193,89,61,142,208,184,250,243,154,149,34,102,230,38,153,88,113,176,58,17,250,138,
146,49,133,82,45,229,69,206,11,44,32,175,227,142,0,167,200,172,202,113,38,120,225,178,181,222,124,83,98,8,175,163,194,188,43,229,1,157,192,142,125,170,72,228,234,185,108,119,0,227,245,170,209,202,209,
200,54,186,31,251,105,211,243,169,190,208,204,251,101,15,143,238,175,63,202,145,12,179,186,9,147,105,243,9,235,134,96,63,92,115,83,68,249,93,129,51,31,251,236,42,15,47,201,143,122,171,148,234,84,100,138,
26,117,145,65,224,55,110,212,136,44,201,178,21,37,145,113,215,230,201,81,245,165,103,142,225,19,50,198,142,191,119,13,219,219,53,28,51,188,125,50,71,247,137,228,126,85,42,220,75,187,146,8,61,159,250,82,
32,62,206,172,164,180,158,96,255,0,101,129,253,49,79,143,230,195,4,144,159,126,127,58,63,127,157,222,107,1,253,212,136,48,63,83,74,210,190,208,194,69,227,182,195,145,249,83,36,118,101,114,54,42,169,244,
63,46,42,85,91,182,82,68,66,69,207,59,72,170,237,55,153,128,229,185,231,114,138,127,146,141,146,16,177,238,89,206,127,42,68,178,194,236,99,243,46,227,233,142,105,166,221,25,178,18,69,63,236,13,195,249,
212,42,85,84,16,231,174,49,158,41,89,214,76,0,211,19,253,220,156,126,20,8,145,161,146,54,5,72,85,245,39,159,202,164,141,154,110,72,145,136,232,251,64,21,10,238,3,59,38,87,29,183,19,250,96,210,249,140,
199,146,217,250,103,255,0,213,64,139,11,185,149,134,20,47,251,44,51,72,173,230,100,44,206,135,161,3,138,136,48,111,249,100,187,207,64,122,154,155,118,229,5,163,63,240,30,104,36,225,219,43,242,228,31,246,
120,255,0,10,175,56,84,228,70,56,234,83,3,63,90,115,5,25,195,116,234,24,16,127,51,80,187,194,167,36,140,255,0,188,43,132,216,142,75,148,234,23,24,255,0,100,255,0,58,137,174,226,127,76,250,227,20,147,92,
175,27,78,23,211,57,53,230,126,44,248,217,164,105,179,220,88,233,136,117,125,70,31,188,32,229,16,250,51,14,255,0,74,105,57,59,33,232,143,64,185,187,183,181,141,165,150,64,145,168,203,51,116,21,230,30,
50,248,239,165,233,59,237,180,125,218,133,208,227,205,225,97,83,253,127,207,53,230,94,44,214,60,91,227,7,31,107,130,235,200,251,203,109,20,69,80,14,189,7,94,7,122,228,35,240,253,252,210,167,250,36,252,
182,7,200,121,239,93,49,162,250,153,58,139,161,244,111,135,117,41,38,153,39,145,178,26,2,199,176,39,118,127,173,103,248,155,197,87,214,250,213,226,197,116,201,18,74,84,40,199,99,143,233,76,209,86,72,52,
255,0,61,129,216,176,170,253,50,223,224,13,115,26,173,208,186,212,174,36,35,228,44,210,183,211,147,90,202,10,230,42,90,19,233,58,156,218,175,138,36,146,86,46,254,81,37,141,101,124,66,212,158,222,230,32,
167,32,2,8,207,210,166,248,118,226,247,196,151,114,99,143,40,156,126,34,178,62,38,126,239,88,10,119,8,243,130,71,225,254,21,104,134,112,151,186,130,201,35,239,254,46,181,222,248,71,198,146,233,222,28,
143,77,153,50,33,201,73,51,247,242,78,63,46,43,131,179,210,219,88,188,88,130,17,17,111,158,76,125,209,207,90,165,169,73,115,163,191,144,228,152,65,194,49,224,98,148,213,205,34,207,81,143,206,214,163,121,
192,249,9,200,124,213,201,180,168,116,233,45,79,156,102,145,226,18,176,227,10,73,56,21,71,65,213,44,228,208,99,149,103,69,97,8,5,55,1,131,142,120,171,51,94,25,154,213,247,12,180,8,127,159,90,226,119,58,
140,31,25,48,95,12,234,206,1,37,98,232,59,252,194,188,55,207,18,110,32,227,60,87,177,120,234,125,190,17,213,206,112,118,160,7,254,6,43,194,225,152,134,57,238,125,107,162,146,208,194,123,146,204,197,122,
30,106,5,193,113,158,121,169,219,12,72,198,106,22,202,224,129,210,181,185,39,113,162,186,73,167,139,121,88,170,198,223,41,207,8,15,214,183,150,214,204,222,71,28,91,38,69,69,203,117,220,113,201,174,31,
69,211,239,60,79,246,175,45,84,11,120,188,214,59,176,79,108,15,83,90,176,95,62,128,176,53,221,181,196,81,142,25,246,112,79,124,87,36,225,46,135,68,39,30,167,112,241,218,69,34,41,143,44,221,56,206,42,61,
67,203,138,217,154,53,85,97,206,236,87,57,39,196,141,42,28,98,27,169,125,246,129,253,106,157,247,196,171,43,139,119,88,172,166,220,71,5,152,86,62,206,123,179,126,120,88,212,214,175,60,63,117,167,219,61,
203,49,158,53,218,118,245,247,174,94,206,234,218,243,197,177,53,148,42,177,243,181,49,198,2,156,87,63,169,106,77,168,201,184,67,229,247,60,230,164,210,53,6,211,117,20,187,80,172,241,140,42,158,249,21,
215,24,217,88,229,114,187,208,233,69,226,234,190,27,190,150,226,222,47,58,25,35,217,34,32,7,147,200,226,180,116,137,87,92,177,189,73,161,181,72,97,183,109,150,171,31,239,56,28,54,126,181,206,223,120,138,
75,139,81,111,21,188,54,145,110,222,86,37,251,199,222,175,127,194,89,123,168,44,144,193,105,8,187,153,60,166,150,56,240,236,59,143,198,168,147,155,219,90,218,14,143,38,163,125,110,136,67,70,91,247,196,
176,1,23,129,201,63,90,101,199,135,117,11,107,115,60,150,175,28,72,185,118,97,211,212,214,36,139,230,62,213,125,163,168,53,86,118,21,207,110,241,76,122,14,143,160,88,105,222,109,172,201,18,74,64,70,12,
4,132,141,188,254,6,184,100,147,77,251,100,4,201,108,144,147,137,114,50,49,206,56,247,205,115,118,55,241,219,217,249,51,162,204,48,64,24,228,81,161,220,89,218,221,203,37,236,82,79,27,33,8,171,142,27,61,
121,172,20,28,83,52,189,207,118,186,248,175,21,191,129,239,124,53,109,60,255,0,99,158,69,184,242,90,67,229,71,50,176,195,4,233,187,3,25,247,174,25,87,67,254,208,215,239,239,116,201,46,146,57,208,71,10,
54,2,238,234,120,174,107,75,241,76,118,113,234,144,92,192,183,16,222,199,26,3,176,6,136,164,129,195,47,61,78,10,159,102,53,107,71,241,149,197,132,58,156,177,34,155,139,169,67,237,97,185,85,70,115,193,
252,5,17,139,234,18,179,52,245,43,31,13,67,170,105,183,79,5,197,190,153,113,15,157,37,190,226,88,99,35,3,216,226,161,241,101,142,129,115,225,123,125,83,76,211,103,210,100,55,30,80,89,164,44,38,76,19,184,
100,246,34,161,212,60,85,167,235,250,245,181,246,163,20,194,223,203,81,52,40,65,25,3,4,47,177,171,122,231,147,227,121,20,233,70,238,103,136,96,65,32,85,142,36,232,2,226,182,51,56,6,218,189,13,24,60,26,
222,213,124,29,127,162,216,155,171,180,88,227,12,19,134,207,39,160,197,97,178,236,108,100,19,233,84,3,54,123,82,172,143,1,13,25,33,135,52,6,220,70,115,205,117,90,165,174,145,164,217,195,107,37,164,146,
222,73,105,29,199,218,188,204,97,220,110,3,111,76,12,226,164,102,5,182,161,123,52,146,197,28,210,110,185,33,29,85,177,191,60,0,127,58,177,107,173,220,91,180,12,242,185,16,159,147,105,229,113,233,91,90,
94,155,166,234,154,29,228,144,218,201,28,214,150,205,43,221,52,188,153,7,56,9,233,85,116,29,16,107,151,22,48,47,151,0,144,237,105,25,190,239,60,177,252,42,26,69,166,201,155,90,183,154,198,87,139,113,153,
193,223,207,205,140,99,38,185,201,245,171,248,90,209,210,234,95,244,38,223,110,9,200,141,178,14,64,250,128,107,172,241,22,155,99,103,114,182,150,219,79,147,184,52,168,62,102,206,58,158,226,167,211,124,
45,14,183,225,185,34,136,71,13,204,18,150,89,136,25,110,51,134,61,79,181,101,22,145,163,187,71,149,95,120,151,83,184,186,190,157,239,102,243,111,1,91,134,86,35,205,30,141,89,237,170,94,8,109,162,251,84,
190,85,177,221,10,111,56,140,231,57,95,67,158,107,79,196,26,132,77,11,217,139,72,82,120,102,249,174,80,114,248,200,198,125,63,194,176,75,100,123,87,98,138,236,114,54,205,31,237,237,69,110,110,39,23,247,
6,123,149,219,52,158,97,221,34,241,195,30,227,129,82,95,120,179,85,185,211,172,180,201,239,165,125,62,209,252,203,120,120,194,54,15,32,245,207,204,127,51,89,89,24,193,228,212,99,203,91,232,4,251,188,173,
223,54,58,226,173,69,118,23,51,238,95,159,94,212,60,233,238,5,228,226,226,225,124,185,101,222,119,58,224,12,19,233,128,63,42,173,167,206,150,82,25,36,182,75,128,81,144,44,131,32,100,99,61,58,211,239,163,
183,251,99,136,11,155,124,252,187,250,226,162,225,91,138,165,166,196,222,251,136,87,230,7,128,49,138,36,147,202,141,152,145,145,208,30,244,52,130,60,22,25,53,66,225,139,72,75,138,164,174,75,25,36,207,
51,28,214,199,132,116,88,252,65,173,67,101,60,173,10,56,60,160,25,62,220,214,40,198,114,56,174,151,193,42,175,170,72,236,219,124,184,201,12,14,48,122,127,83,93,152,120,167,86,41,173,14,106,210,106,156,
173,185,234,50,252,7,211,225,177,107,148,150,91,149,143,239,172,119,8,88,126,0,87,55,174,252,58,211,198,139,121,46,159,230,67,119,110,130,67,231,203,195,40,32,17,245,231,244,173,15,237,73,44,237,155,200,
121,218,82,9,30,88,39,113,236,61,235,38,207,197,31,110,107,157,55,88,183,158,37,202,153,188,243,176,170,146,48,91,184,198,65,175,160,175,136,194,66,46,14,154,76,240,240,244,177,82,154,151,61,209,195,174,
145,119,26,182,99,87,67,199,14,43,166,176,248,126,102,209,236,238,238,181,72,237,252,236,236,183,84,222,202,185,234,107,99,197,50,120,79,195,186,221,222,155,109,27,106,17,66,84,45,212,51,144,175,144,15,
76,156,117,168,35,241,6,157,7,145,14,159,163,79,122,205,23,157,177,92,150,11,158,191,231,214,188,220,60,176,110,95,188,90,121,158,149,104,226,121,127,118,200,91,225,173,148,216,31,218,210,72,190,169,109,
199,243,174,67,197,94,29,139,195,154,146,219,71,123,29,236,109,26,202,178,32,219,128,123,16,122,16,69,122,118,155,227,57,97,177,2,11,63,177,239,63,60,109,203,2,14,49,154,243,63,27,220,61,231,136,102,121,
35,242,216,170,252,191,135,90,232,198,83,195,198,146,149,36,115,97,42,87,149,71,26,172,200,89,134,210,114,56,235,83,178,172,150,59,196,106,203,230,115,32,29,48,58,126,181,111,69,240,54,173,175,105,247,
23,182,54,190,117,165,190,124,217,55,0,23,11,147,193,62,149,85,110,95,73,142,72,237,103,229,184,118,199,6,190,127,70,236,153,237,217,218,229,101,183,101,59,210,38,32,127,22,210,69,74,173,43,113,229,49,
61,176,159,253,106,247,61,34,214,5,209,236,160,158,121,45,231,48,161,144,236,12,185,35,210,164,147,73,189,181,196,159,104,137,0,63,127,43,131,95,71,28,178,155,138,147,153,225,188,198,74,77,114,158,0,170,
153,46,7,25,245,171,118,236,101,147,100,8,210,51,127,10,141,196,254,21,169,169,89,90,195,171,94,66,237,25,43,51,2,85,176,15,53,214,124,51,191,179,210,238,53,31,36,219,219,106,13,26,155,121,228,57,198,
15,204,6,123,244,252,171,205,134,25,74,167,36,165,161,223,83,17,203,79,157,35,143,187,211,117,9,155,141,50,230,32,84,101,124,134,252,250,85,73,244,187,139,56,195,92,90,205,110,135,128,210,33,80,126,153,
21,238,243,106,122,158,159,56,212,238,111,227,150,102,249,87,113,28,159,165,115,31,16,47,83,93,240,173,196,198,104,210,120,164,82,240,14,55,243,247,128,252,107,182,174,6,148,32,229,25,234,142,74,120,202,
178,154,140,163,163,60,218,235,94,154,234,206,210,221,196,100,91,39,150,141,142,74,246,7,233,84,38,152,76,6,226,58,231,24,197,77,165,233,255,0,218,26,149,181,168,64,239,60,130,53,94,156,158,7,63,83,87,
252,93,224,173,71,193,186,144,177,212,82,52,153,144,58,172,110,28,96,159,95,90,249,235,171,216,246,181,181,204,219,171,100,182,17,18,232,226,68,222,10,158,158,212,91,223,27,121,17,128,86,219,217,128,53,
20,112,199,19,145,113,211,25,24,166,93,205,20,237,25,138,31,40,42,237,59,123,159,90,161,18,92,204,183,19,25,24,5,61,128,197,49,36,69,57,28,55,214,160,111,152,117,164,101,236,14,64,166,23,46,52,225,151,
57,24,246,197,65,181,25,142,79,94,106,53,202,169,24,28,246,164,85,27,134,252,237,246,160,119,38,141,146,6,202,255,0,76,84,143,114,74,255,0,14,63,10,168,144,150,98,49,77,104,72,200,164,81,102,55,141,115,
128,42,197,179,141,216,233,84,26,221,163,108,50,149,111,70,169,163,249,88,1,197,0,119,112,252,61,215,111,45,85,227,178,50,196,227,42,200,122,138,206,214,188,13,46,147,161,201,125,115,112,144,220,197,48,
133,236,164,56,147,145,144,195,212,87,71,165,252,70,212,180,205,50,218,24,229,32,70,152,21,200,248,183,92,186,241,85,247,218,110,27,116,170,54,146,70,56,168,69,152,107,55,150,160,2,8,62,180,217,31,204,
235,142,61,170,53,141,155,229,219,156,246,169,190,195,46,126,227,3,233,138,161,234,71,143,94,181,98,57,142,204,12,103,233,75,29,140,140,193,74,21,207,241,17,82,253,140,166,118,70,210,99,169,193,166,92,
110,116,126,1,201,213,36,39,161,140,251,87,118,217,246,174,19,192,123,255,0,182,48,122,108,53,222,182,208,220,87,207,99,52,170,126,195,195,46,248,27,121,178,63,78,104,99,185,119,22,203,83,184,197,53,147,
102,70,65,200,235,92,7,213,72,140,183,205,210,159,213,119,117,7,222,162,111,122,94,113,193,3,20,16,199,110,244,252,105,67,26,106,227,214,149,113,131,218,153,44,126,113,143,90,55,126,52,213,230,157,145,
84,34,92,130,41,82,66,188,245,250,212,91,190,90,80,127,26,4,74,167,185,167,231,174,51,81,12,123,231,183,21,34,158,190,180,0,173,249,210,41,59,189,77,28,183,90,85,249,121,239,65,5,251,223,222,73,25,60,
97,5,51,118,64,201,226,146,232,113,19,99,248,113,73,129,229,6,234,115,140,80,114,245,35,101,27,142,15,21,25,234,105,210,123,112,105,177,176,14,185,25,92,242,41,29,39,105,224,28,189,165,234,113,196,177,
55,232,194,184,31,18,66,144,235,87,74,132,156,57,207,215,53,219,120,18,65,157,73,84,96,1,27,243,236,248,254,181,195,248,137,93,181,187,214,111,249,234,70,113,89,84,61,60,145,255,0,180,85,94,72,166,188,
224,116,169,225,249,88,115,147,235,85,184,169,109,201,243,7,60,87,57,247,52,126,35,234,207,217,42,244,167,246,196,64,242,203,25,56,62,228,127,90,250,79,237,6,40,246,189,225,100,60,249,71,230,254,103,138,
249,87,246,75,188,142,61,107,83,138,77,187,36,182,254,33,199,12,181,245,26,171,90,237,35,201,104,255,0,132,174,236,143,207,56,175,160,192,255,0,8,252,7,141,161,203,156,77,247,81,252,137,177,27,169,38,
82,63,219,104,153,191,3,138,150,54,67,243,12,48,31,221,7,21,28,114,22,200,88,23,253,236,151,231,212,100,131,83,45,188,237,134,102,243,113,253,194,20,254,89,175,68,252,249,146,111,12,50,109,249,31,196,
6,127,90,114,238,112,0,84,30,177,171,124,223,151,6,162,9,217,210,117,92,253,229,199,243,169,85,131,40,83,186,80,58,22,34,131,48,49,139,117,36,219,73,27,103,163,62,193,82,149,93,170,196,42,251,200,71,233,
64,140,160,59,69,188,121,233,230,32,7,243,193,166,137,246,182,220,130,222,155,129,252,184,165,161,44,147,200,124,249,158,99,17,233,144,22,165,140,74,188,239,89,23,176,228,26,141,88,255,0,4,59,125,70,226,
127,74,62,247,93,216,245,87,193,20,8,176,172,205,145,157,163,186,156,169,31,141,74,178,43,101,68,210,72,192,253,212,59,241,248,85,84,142,6,108,121,179,100,112,99,114,9,253,42,117,143,107,126,237,103,35,
253,237,163,249,82,36,149,35,134,76,102,57,6,61,23,111,249,20,143,185,184,84,12,163,134,4,211,26,102,232,119,6,94,194,76,212,137,116,210,15,152,200,87,24,192,25,20,18,201,20,55,5,64,39,186,171,144,69,
76,99,75,136,195,50,176,101,232,21,141,64,25,72,198,246,43,232,91,143,202,157,246,112,91,34,61,237,217,212,231,31,129,166,75,36,88,227,225,64,98,221,136,39,39,241,52,198,253,217,196,187,226,36,241,185,
118,31,207,189,55,107,30,88,153,24,119,101,255,0,235,84,190,124,155,72,82,17,177,247,72,94,127,149,4,134,94,54,200,153,157,79,82,192,127,133,79,228,111,192,50,72,73,232,1,21,10,180,144,224,179,132,221,
193,216,227,7,242,205,17,249,108,159,116,227,191,205,131,252,233,104,7,6,210,198,184,88,226,111,161,65,131,248,83,25,188,193,196,106,7,114,0,95,233,78,153,151,187,109,244,108,255,0,76,84,77,35,176,192,
228,253,48,43,132,216,242,255,0,218,35,198,15,224,127,132,90,246,163,103,43,197,122,200,182,208,184,35,229,103,59,73,4,119,219,184,254,21,249,201,107,226,189,86,214,73,18,222,250,72,3,182,226,202,121,
207,28,254,149,246,135,237,221,174,27,63,134,250,46,154,3,3,121,168,121,152,232,8,142,54,207,127,89,5,124,33,207,99,200,244,53,213,71,185,140,217,220,93,252,80,241,9,182,154,63,237,171,226,25,213,210,
70,156,238,220,1,12,122,247,7,165,55,195,254,62,241,29,207,136,180,248,14,177,118,234,215,49,38,60,194,71,204,224,26,226,118,117,4,100,154,232,190,31,89,27,143,27,120,126,60,228,182,161,110,58,255,0,211,
69,174,197,39,115,27,35,238,137,111,158,61,10,227,107,144,170,138,8,245,249,159,31,165,113,23,90,147,65,166,201,243,102,73,112,159,135,83,253,43,166,189,37,52,59,242,125,99,3,242,146,188,251,84,184,44,
81,51,194,140,226,147,220,148,143,73,248,29,2,221,235,90,143,203,187,16,14,79,251,194,168,124,96,88,225,241,31,150,20,34,46,225,255,0,143,31,240,174,163,246,99,179,55,26,150,182,236,160,237,134,49,207,
187,31,240,172,79,138,26,123,106,223,17,161,179,78,36,153,252,177,223,150,145,128,53,149,253,235,22,121,125,247,138,6,131,57,183,180,136,5,218,173,33,110,236,70,127,145,174,95,197,218,165,247,139,154,
218,224,70,165,33,67,18,199,16,198,50,115,249,243,93,95,199,40,172,236,124,125,169,218,217,143,42,222,22,75,117,66,57,249,35,81,159,210,188,250,54,10,178,202,46,12,77,24,5,23,187,28,246,250,85,222,226,
177,137,51,79,11,21,59,212,131,130,50,104,181,215,47,172,37,89,34,185,153,10,253,220,57,164,154,70,222,121,60,158,106,59,139,231,158,222,24,72,80,177,131,140,46,51,147,156,159,83,219,240,161,164,85,217,
165,123,227,141,83,80,210,231,177,184,156,77,12,187,75,110,81,187,131,145,205,51,195,122,60,58,237,207,217,192,153,166,206,115,24,5,64,245,53,130,199,158,153,175,79,240,34,195,13,131,69,4,121,157,147,
123,237,24,227,60,12,247,233,92,181,167,236,160,218,58,104,195,218,73,38,82,215,188,37,99,166,220,91,71,4,23,178,143,44,9,12,99,121,39,28,177,227,3,39,60,82,216,248,38,210,251,77,146,117,51,193,32,63,
42,207,242,244,235,159,210,189,22,211,73,105,54,240,207,43,1,242,168,39,30,213,83,199,186,92,218,7,131,239,174,124,179,242,24,198,239,114,227,138,242,227,140,148,154,137,233,75,11,8,166,207,59,177,215,
37,240,108,247,16,89,13,140,248,223,191,4,253,58,86,103,139,60,97,119,226,27,123,120,46,228,202,194,197,144,14,49,158,255,0,165,65,172,223,71,125,117,231,197,184,35,162,227,127,92,224,102,185,221,65,255,
0,120,189,184,175,106,26,173,79,34,105,39,160,142,27,176,38,155,230,20,227,60,244,53,16,186,116,232,120,237,76,105,183,117,252,107,66,19,52,180,251,203,56,238,9,189,138,73,162,219,140,70,216,57,237,90,
235,125,225,248,219,231,180,186,221,142,210,129,92,205,190,217,36,1,199,203,245,171,230,218,22,108,2,61,185,172,216,205,197,212,252,62,72,197,157,222,125,229,21,98,219,90,177,179,184,142,125,54,222,88,
101,92,146,210,201,187,143,106,230,69,180,59,185,60,103,214,164,80,177,177,17,244,199,20,20,116,122,183,141,47,117,13,50,123,55,148,136,167,192,127,112,8,63,210,185,73,85,183,29,188,142,213,53,204,159,
186,81,239,205,82,82,229,137,205,80,172,75,13,193,140,229,185,29,118,154,234,252,56,150,62,32,184,120,255,0,179,100,93,185,121,101,142,93,177,198,63,31,229,92,113,102,153,194,15,152,147,129,94,163,163,
181,166,157,163,219,233,246,191,61,196,177,25,231,199,69,193,199,39,212,147,249,10,230,175,83,217,198,232,233,195,211,246,147,179,20,120,95,72,222,4,118,210,220,241,147,137,246,255,0,74,181,15,135,244,
69,132,206,45,36,100,198,90,49,57,39,29,198,106,222,145,108,237,230,108,86,102,100,218,164,123,212,203,102,44,109,110,165,151,132,142,22,39,219,142,181,230,44,91,186,87,61,57,96,226,147,103,45,54,161,
225,181,37,63,176,238,70,211,147,186,228,231,249,85,27,175,17,69,167,204,63,178,97,123,4,101,195,254,244,177,38,166,241,148,54,241,136,37,182,144,74,179,40,112,192,99,112,32,98,185,61,217,110,181,234,
194,92,202,231,145,56,242,187,27,26,143,138,110,174,180,249,34,154,79,52,179,12,23,228,142,122,138,192,184,212,26,71,92,170,140,114,113,220,210,221,3,228,146,61,106,131,119,245,173,204,118,55,188,63,125,
12,154,165,183,218,173,214,120,60,197,15,31,77,192,156,99,138,233,117,191,27,75,35,93,216,199,105,108,35,140,189,180,115,24,243,34,198,24,128,185,250,12,87,25,160,177,93,78,219,211,206,79,253,8,82,234,
151,30,94,185,127,253,195,113,39,31,240,35,74,192,153,210,73,227,59,166,210,205,154,193,109,25,104,124,134,157,35,2,66,158,153,172,184,228,48,121,50,67,116,23,0,29,185,57,7,210,169,169,12,160,131,197,
3,21,54,44,232,175,181,168,154,53,155,41,36,210,146,89,16,159,144,0,58,253,106,91,47,23,69,165,216,185,3,116,178,101,145,127,186,195,140,154,230,54,243,197,71,112,159,41,4,84,114,43,148,230,202,254,40,
58,108,214,182,210,91,205,230,93,23,62,106,99,29,114,73,252,235,155,88,242,58,226,175,94,69,243,55,106,165,202,227,38,186,162,180,57,228,73,185,62,206,99,216,55,110,220,95,191,78,149,69,129,146,98,231,
162,244,169,215,247,204,73,56,140,123,245,164,219,233,86,65,175,115,225,123,203,63,14,233,250,220,175,9,180,188,150,72,163,64,249,144,20,234,72,236,15,56,250,86,68,243,5,93,199,128,5,62,75,137,22,21,141,
157,154,53,228,70,79,0,251,10,204,145,140,210,29,220,14,212,208,14,121,139,176,98,50,189,133,73,166,172,114,106,86,194,226,51,52,30,98,249,145,134,193,101,200,200,207,110,42,178,231,233,91,254,25,215,
127,225,31,154,123,148,183,183,187,153,128,2,43,152,247,167,7,57,250,230,169,187,33,29,152,240,206,149,30,183,226,193,107,160,73,169,69,167,220,69,111,5,164,115,55,25,46,25,179,212,253,223,214,179,255,
0,178,236,244,175,19,234,182,214,209,60,10,171,25,88,89,179,229,238,80,204,164,247,32,156,126,21,153,163,221,248,151,196,87,26,140,58,100,115,77,53,252,235,61,196,144,252,191,48,220,71,205,216,124,231,
138,232,99,240,7,137,188,47,107,115,121,114,176,249,108,187,165,231,123,28,103,191,175,52,81,196,66,141,84,230,202,158,30,165,90,111,149,26,218,38,185,253,147,42,187,64,179,133,233,154,131,226,22,181,
97,174,88,234,58,132,86,13,14,171,112,22,39,155,118,83,102,0,219,143,160,21,194,63,142,47,173,228,96,32,132,142,217,90,173,168,120,219,80,212,236,197,164,193,124,128,67,109,85,199,74,247,103,136,195,84,
92,214,212,241,97,71,17,77,218,250,25,81,233,23,50,41,192,93,191,90,245,47,10,219,79,225,219,123,93,78,123,2,100,107,127,41,36,96,66,180,121,227,30,189,171,206,23,91,219,111,181,45,184,7,150,230,181,162,
248,159,174,218,216,219,217,45,193,251,60,7,228,137,212,16,181,207,78,120,88,223,153,92,222,164,113,18,183,38,135,93,117,116,46,38,152,129,143,49,204,132,103,60,147,159,235,92,31,139,161,101,214,92,187,
100,180,106,64,244,227,31,210,156,124,103,168,52,219,214,56,216,231,39,228,226,168,106,151,119,186,214,165,45,228,232,3,191,63,40,192,30,194,171,21,138,163,58,124,144,30,31,13,90,53,57,164,109,248,71,
226,53,239,131,236,110,236,109,210,38,138,231,59,252,193,158,171,180,254,149,203,77,203,18,7,25,167,125,149,247,100,161,207,184,162,52,19,72,177,168,249,171,198,138,138,149,209,233,75,154,214,103,168,
105,250,133,197,140,16,141,254,106,136,148,46,238,64,24,24,170,19,69,175,234,26,115,105,237,45,191,216,94,125,225,140,152,112,51,156,125,42,27,13,82,214,61,58,217,100,157,86,64,129,89,88,114,8,226,167,
58,222,158,171,159,181,46,125,49,95,75,47,99,86,11,153,158,12,125,173,41,55,24,150,53,47,130,154,150,167,125,53,213,142,161,163,173,188,141,186,56,218,239,107,40,244,35,111,90,130,95,132,26,166,159,165,
207,231,92,233,242,205,185,89,12,55,27,202,142,67,3,199,29,171,151,154,85,186,189,154,84,153,118,51,147,247,241,91,30,19,241,17,240,198,165,37,194,186,200,175,25,141,129,249,135,90,241,253,141,170,107,
45,15,81,212,247,52,142,166,141,196,154,245,196,54,144,95,203,111,37,157,179,124,134,63,188,120,198,115,84,117,197,43,164,220,150,244,31,204,86,181,199,136,180,59,133,121,20,205,111,33,57,217,193,65,244,
174,111,92,215,236,110,116,249,97,137,157,157,241,213,120,235,154,244,95,176,167,77,198,12,224,94,214,164,211,154,57,235,91,231,177,187,130,230,31,146,88,88,58,182,123,131,197,105,120,139,196,87,222,39,
184,91,235,199,15,38,54,238,28,86,34,252,231,129,154,183,21,156,238,184,8,216,175,159,124,169,221,158,228,84,154,178,43,199,31,153,112,170,249,249,142,56,53,110,214,194,57,35,36,70,243,29,219,126,83,208,
81,29,173,213,182,230,22,251,207,102,35,165,87,251,69,205,164,101,0,120,131,54,73,0,130,105,169,39,179,7,9,71,116,92,142,198,223,237,109,110,18,73,165,47,180,5,56,169,245,239,12,93,105,49,173,196,145,
129,3,28,6,83,156,122,103,210,170,233,58,220,154,83,239,72,146,71,222,175,185,243,158,14,113,93,95,138,53,248,181,31,11,198,246,118,191,102,73,230,204,171,36,155,219,62,222,131,52,107,114,116,56,69,93,
204,61,106,101,204,42,209,134,86,71,235,154,111,153,31,217,194,148,253,238,239,189,237,80,147,223,53,100,155,203,30,148,182,80,51,121,158,103,241,109,63,54,125,253,171,55,82,146,22,216,150,240,148,141,
127,141,190,243,84,150,23,150,112,194,82,230,205,167,147,57,222,174,87,143,74,155,84,91,89,52,216,46,237,161,104,3,72,80,171,54,123,102,160,208,143,90,249,117,41,14,61,63,144,168,173,252,135,127,155,32,
244,246,169,117,205,191,218,7,35,63,42,159,252,116,85,120,102,133,122,197,243,122,230,144,26,219,130,193,129,200,237,89,178,229,100,36,243,86,146,66,208,169,200,193,170,183,25,223,235,82,89,103,67,212,
33,179,188,142,89,144,74,136,224,148,61,198,122,87,234,158,159,240,159,224,183,136,108,244,221,103,73,210,224,147,77,212,44,98,184,88,223,146,140,203,146,167,61,199,122,252,145,220,68,196,116,57,252,235,
237,63,132,191,19,46,116,191,3,104,214,137,19,50,71,0,80,73,174,92,68,221,52,172,117,97,227,204,207,163,181,79,129,95,9,94,47,151,74,134,23,235,144,56,174,79,88,248,37,240,162,217,166,49,197,12,76,171,
192,174,54,227,226,181,211,169,15,19,98,184,239,17,120,210,91,200,217,246,178,228,247,174,31,172,200,246,176,248,85,81,217,157,63,138,190,21,252,55,211,116,45,78,239,79,255,0,70,188,134,214,71,129,148,
245,144,12,133,35,220,215,207,76,6,226,71,21,209,223,120,146,226,250,73,17,220,148,97,130,59,87,54,223,123,154,227,171,46,119,118,126,151,146,208,250,189,25,69,119,21,99,220,11,116,81,214,154,177,137,
11,5,61,6,104,108,174,70,115,76,206,43,3,232,36,68,223,41,233,197,32,225,105,236,195,167,122,97,250,115,65,155,1,207,175,210,151,110,223,110,40,244,59,112,104,140,110,110,78,41,153,138,156,53,60,26,65,
149,237,145,70,64,250,80,128,122,156,82,231,230,166,143,113,70,59,138,161,14,221,239,82,171,118,205,67,250,211,215,233,64,137,187,115,74,181,26,227,138,112,57,250,208,34,237,214,86,8,9,61,69,49,126,232,
207,214,164,187,63,232,54,199,24,60,212,59,153,85,114,115,197,51,141,191,120,142,94,167,20,218,36,32,212,74,221,65,52,142,131,211,190,17,105,246,19,94,93,155,185,179,230,66,1,137,122,224,48,63,225,94,
125,241,2,225,91,197,87,233,20,98,11,113,41,217,24,237,239,245,174,171,225,77,193,135,94,154,50,164,249,144,176,7,232,65,254,149,201,252,66,132,199,226,171,192,7,241,100,214,85,54,58,178,86,254,189,81,
62,198,20,136,99,84,39,163,12,143,126,212,251,118,219,142,254,181,3,72,91,25,237,199,210,159,111,46,211,142,57,24,174,86,126,133,75,115,223,63,102,61,106,223,70,241,69,204,151,50,136,97,107,102,77,204,
112,1,36,17,252,171,235,173,62,250,223,80,183,205,181,220,51,6,231,229,42,7,231,95,15,124,19,211,103,214,188,71,246,11,113,186,89,163,109,171,235,128,79,244,53,244,45,175,195,253,114,198,97,28,113,203,
27,99,118,81,241,253,107,213,193,214,228,139,71,229,220,97,149,199,21,142,85,121,172,249,81,236,158,91,100,166,99,151,217,219,167,29,177,197,61,109,221,126,97,19,33,29,66,99,252,43,137,208,244,223,20,
89,73,28,101,22,229,89,130,129,41,31,208,215,93,18,223,219,169,107,171,86,77,185,200,73,120,224,224,254,181,234,198,170,145,249,117,124,174,181,39,163,79,208,210,183,80,73,206,226,125,41,219,17,87,33,
1,76,241,147,208,213,101,103,242,204,136,184,80,121,93,217,97,253,42,197,180,208,72,196,72,60,166,35,230,28,18,125,197,109,123,158,36,226,226,218,100,170,209,174,12,140,132,55,252,244,98,63,46,104,242,
97,44,124,184,27,127,102,142,54,254,121,230,145,17,34,147,9,231,57,236,211,21,231,242,167,177,185,249,131,109,192,238,210,30,63,12,210,49,22,54,141,91,27,38,36,122,142,69,89,221,142,145,0,135,169,192,
207,227,80,44,206,252,73,228,150,28,110,76,159,206,133,102,141,176,50,158,155,137,6,130,73,218,20,98,8,251,56,250,166,24,126,52,228,140,183,223,138,77,158,145,140,15,175,90,136,50,47,223,120,195,127,117,
133,60,79,26,156,130,191,72,247,96,126,180,8,148,44,106,85,73,59,61,219,159,235,79,218,177,182,17,186,250,63,95,202,153,231,22,227,97,24,29,199,255,0,94,157,228,163,99,231,76,255,0,123,105,95,210,130,
71,150,153,199,11,39,231,145,71,239,99,25,203,5,29,65,3,32,212,45,152,216,6,112,125,25,69,74,183,46,140,6,255,0,52,127,178,185,255,0,245,83,16,245,184,243,51,153,56,255,0,104,99,250,83,252,201,6,54,224,
122,21,59,169,140,242,73,146,54,131,216,200,191,253,106,142,54,151,56,100,132,255,0,184,70,13,59,136,177,230,72,223,50,150,221,223,104,63,168,161,129,145,119,8,206,239,226,227,173,53,26,72,203,2,2,147,
212,169,220,127,157,39,202,252,27,153,0,233,184,32,32,84,136,226,223,106,100,140,134,61,113,147,89,186,149,205,182,159,107,53,213,220,130,222,218,21,47,36,205,149,10,163,169,38,175,50,59,100,134,95,166,
9,175,159,63,104,239,30,9,53,11,111,8,67,40,84,84,91,187,239,44,242,115,159,46,51,249,110,199,251,181,203,24,185,202,200,210,82,229,87,62,127,253,174,254,36,219,120,251,88,209,237,236,196,144,88,89,172,
166,54,155,172,187,138,252,248,237,157,188,126,29,43,231,21,110,228,103,222,187,143,140,23,75,39,138,188,165,108,164,16,164,120,244,36,110,63,250,21,113,81,178,28,142,66,215,108,99,203,162,49,111,152,
145,87,114,28,3,140,100,99,183,63,253,106,233,190,25,226,63,28,232,120,25,101,188,141,190,132,48,35,249,87,46,151,13,12,79,24,36,35,99,112,245,197,117,255,0,9,87,237,30,62,209,151,183,154,204,115,237,
27,26,213,25,179,235,221,66,99,255,0,8,213,201,206,75,58,143,111,185,255,0,215,175,61,184,147,204,186,97,239,93,182,172,198,63,13,200,62,238,235,134,29,125,17,63,198,184,3,38,217,115,159,122,93,73,61,
239,246,125,214,33,209,102,214,222,84,114,28,66,139,183,219,117,101,221,120,150,11,143,136,151,55,165,8,185,49,121,118,133,134,66,202,199,131,248,6,38,178,254,23,234,15,13,142,167,34,124,219,217,73,63,
65,92,54,163,226,89,244,189,90,246,246,17,190,84,135,140,142,159,32,207,233,154,206,218,220,187,156,95,196,45,90,77,115,197,250,181,227,146,203,37,195,236,36,228,109,7,3,244,2,185,175,45,219,160,250,115,
80,45,195,73,25,45,38,79,191,122,146,25,15,3,61,122,213,108,52,103,220,19,243,119,230,171,178,54,211,86,46,88,6,32,126,20,182,172,54,56,35,38,139,140,207,43,140,129,94,191,240,99,254,39,55,78,172,170,
162,8,214,50,0,224,231,39,159,174,218,192,248,115,164,219,234,75,117,231,192,174,203,32,10,89,65,61,58,87,191,120,87,194,233,162,219,40,179,180,136,180,178,46,236,97,64,7,130,79,208,118,175,31,27,93,70,
46,29,79,83,7,73,185,115,155,26,116,105,166,91,200,229,86,21,42,91,118,63,42,226,254,60,75,33,248,111,32,85,202,61,202,118,235,131,214,189,14,199,82,211,181,3,116,29,227,22,208,50,143,50,82,2,185,201,
206,61,184,167,234,214,246,122,149,169,73,146,27,155,41,78,208,173,134,4,215,131,78,167,36,212,153,235,212,143,52,92,81,241,92,106,237,8,37,123,117,172,253,74,21,243,148,1,218,187,175,137,16,195,99,227,
61,98,222,216,44,86,233,57,81,26,12,42,128,7,24,252,235,134,189,109,211,122,215,216,211,151,52,84,145,243,83,86,118,51,165,94,192,126,53,89,162,111,90,188,192,122,84,46,249,32,99,218,181,102,54,35,142,
214,86,28,14,42,79,177,206,6,224,63,90,153,111,150,56,192,216,115,75,253,166,153,192,21,35,32,22,115,119,83,249,213,251,75,119,143,134,59,114,56,205,66,186,154,244,218,106,205,188,194,227,56,7,143,90,
76,161,110,87,247,121,205,81,10,121,32,102,180,46,20,249,120,34,170,194,185,108,99,154,6,54,214,198,226,234,81,228,33,145,212,231,142,220,215,174,248,47,75,159,88,214,179,37,145,180,179,142,211,203,1,
151,27,155,35,169,238,79,53,200,124,50,183,55,26,244,128,130,84,47,43,235,94,211,99,107,119,98,251,218,214,69,86,96,234,251,73,3,21,226,227,171,91,220,61,108,29,63,182,137,236,244,85,211,103,222,20,18,
160,174,223,74,202,241,70,149,113,170,104,183,118,246,17,171,220,74,187,66,228,115,147,93,6,161,8,91,231,72,93,220,50,239,222,71,66,71,52,150,58,52,240,201,110,198,69,196,136,27,111,125,185,255,0,14,107,
231,227,46,89,115,118,61,137,123,201,163,231,109,121,117,27,121,146,210,253,66,188,3,203,28,117,193,197,101,170,228,240,69,118,63,22,31,127,141,175,211,248,99,192,31,74,227,182,149,80,122,3,95,97,66,92,
212,212,173,185,243,21,149,164,213,199,60,69,163,193,231,158,149,179,164,120,76,106,22,205,43,198,74,183,11,214,179,244,216,190,209,62,223,65,158,107,232,207,6,248,106,206,63,15,88,43,168,102,49,171,17,
223,44,50,127,157,118,197,28,114,118,60,30,63,10,157,62,242,41,118,54,17,213,202,142,115,131,154,179,46,157,164,73,35,201,54,151,113,35,187,179,49,18,17,156,156,215,188,106,30,11,180,147,123,8,254,118,
28,55,165,114,26,151,131,149,93,149,112,199,63,157,95,41,159,49,231,58,214,155,225,237,59,77,113,2,76,47,93,50,136,178,22,8,125,73,174,75,203,255,0,104,215,105,227,205,39,251,30,206,31,151,107,74,196,
103,216,87,13,110,207,45,194,66,163,115,187,4,81,158,228,241,80,226,106,164,76,35,56,206,227,76,145,75,47,222,38,182,151,72,177,86,100,147,88,133,101,82,67,42,163,48,7,235,82,199,162,105,205,159,248,156,
67,199,253,50,106,86,99,185,194,106,81,176,110,24,230,168,50,142,55,18,213,222,95,248,119,72,39,39,93,141,125,127,112,213,142,222,30,209,24,159,248,169,97,28,244,251,59,214,209,209,25,54,115,44,184,199,
56,166,72,226,53,201,174,191,254,17,29,38,224,197,13,167,136,161,184,188,149,130,71,17,133,148,51,30,131,61,178,107,142,185,183,154,27,169,161,185,93,146,66,229,10,250,48,56,52,201,42,73,190,86,220,220,
14,194,134,201,199,21,106,72,243,131,154,99,97,112,58,211,29,174,53,151,204,153,48,6,122,113,94,187,225,120,117,12,104,90,102,147,13,189,173,171,89,37,205,221,195,64,174,197,217,155,36,146,58,224,0,62,
149,228,106,11,93,34,131,134,98,0,175,121,209,252,77,97,161,233,118,118,209,15,58,88,97,72,203,168,198,236,14,167,241,205,113,98,170,186,112,211,115,208,193,208,85,106,123,219,35,211,116,125,62,222,213,
75,8,213,89,176,88,170,129,147,248,85,31,28,172,114,232,119,10,113,202,17,143,194,184,169,190,34,93,149,219,18,34,110,29,71,38,176,53,93,122,247,84,81,246,155,150,144,122,102,190,114,60,206,92,204,250,
217,114,242,114,196,243,77,67,70,221,51,225,56,7,29,43,18,226,38,211,216,237,219,207,170,131,94,129,171,92,65,103,110,94,67,142,112,61,235,159,211,116,41,53,107,207,180,76,184,183,207,202,167,189,123,
148,235,56,199,154,91,30,13,108,44,101,46,88,238,26,110,139,125,170,89,219,207,24,142,222,215,111,239,36,101,234,217,60,1,244,171,83,248,76,72,193,128,50,99,248,182,226,187,104,252,166,84,87,193,69,232,
139,194,138,187,37,226,50,224,34,40,198,58,87,4,241,147,111,221,61,10,89,125,56,199,222,220,228,52,127,6,199,43,15,53,66,174,122,183,106,223,186,240,158,143,107,24,196,251,219,190,5,75,53,223,151,145,
159,202,178,47,245,4,133,176,206,55,49,225,114,43,15,105,82,163,220,237,246,52,105,70,237,20,53,13,38,207,145,24,198,59,230,185,109,82,49,165,70,147,91,170,134,102,217,156,123,86,143,136,53,41,98,178,
127,48,136,89,254,224,83,146,106,157,228,145,106,250,85,148,113,22,121,21,254,108,142,78,6,51,197,122,212,99,40,46,105,51,231,241,85,33,81,242,83,70,67,65,121,51,115,176,228,110,35,3,53,19,89,187,112,
127,42,233,109,52,57,228,193,3,104,245,38,175,199,225,212,94,93,243,244,174,135,138,72,194,56,55,212,226,86,197,149,123,211,76,115,199,157,188,14,249,21,219,205,105,13,186,31,148,96,14,73,172,83,108,183,
183,17,152,217,74,103,36,103,173,16,196,57,10,166,21,68,175,102,24,90,220,150,146,57,100,64,54,241,222,157,99,166,221,95,200,4,132,237,61,23,21,191,166,248,102,24,126,105,95,175,59,69,111,218,173,189,
151,49,160,7,214,185,170,98,249,110,162,118,80,203,239,103,50,191,135,254,26,205,123,183,42,171,254,211,113,93,197,143,195,253,31,79,140,27,251,216,151,142,85,78,107,156,125,114,86,93,171,41,69,255,0,
100,226,178,46,181,19,201,50,22,247,38,188,153,74,173,87,171,61,184,194,149,21,162,58,253,122,199,194,118,81,226,218,225,230,147,209,86,188,247,88,146,195,231,9,17,35,61,241,85,111,181,133,25,1,129,111,
115,88,118,186,131,94,234,209,68,248,242,201,32,254,70,187,240,248,121,238,217,230,226,177,84,210,178,70,125,244,144,180,196,68,187,125,106,89,46,197,197,180,48,176,194,198,43,57,113,206,122,210,134,250,
215,185,21,101,99,230,37,46,103,114,73,8,45,242,46,40,95,67,76,45,235,210,174,104,237,17,213,172,252,226,22,47,49,119,110,60,117,166,35,87,79,178,242,237,255,0,127,163,77,112,196,228,63,35,140,116,170,
90,246,161,36,130,43,79,178,27,56,35,229,99,97,206,79,122,212,213,100,215,191,180,103,242,254,208,209,134,59,60,191,187,183,182,42,13,97,110,27,65,182,107,236,253,163,206,59,119,143,159,102,59,254,53,
159,82,140,237,96,147,124,141,220,198,135,255,0,29,20,200,192,146,60,152,24,144,126,240,61,105,117,70,45,121,30,14,63,115,31,254,130,42,8,254,210,80,237,221,183,182,218,160,38,218,240,169,227,2,169,221,
72,202,87,7,21,108,204,222,94,31,33,253,234,133,243,110,101,32,80,85,244,35,143,45,39,94,107,235,15,2,248,155,78,210,124,31,165,219,93,64,69,194,192,191,48,35,6,190,88,210,108,218,251,82,181,129,6,76,
142,23,2,189,47,88,179,190,210,110,60,133,149,182,40,1,72,206,49,94,102,54,42,118,133,207,95,47,247,121,166,209,237,58,135,141,180,246,93,138,163,57,237,210,176,245,15,19,65,113,11,46,20,169,244,175,33,
143,237,247,27,182,51,156,112,113,90,86,154,180,182,112,178,74,158,99,116,35,184,175,53,225,237,212,247,161,137,229,218,39,78,183,209,53,224,192,224,246,168,155,239,123,215,53,107,126,102,212,109,219,
238,157,224,21,175,84,215,181,205,2,243,194,54,118,150,218,119,149,171,198,70,251,129,198,71,122,153,67,148,251,44,151,21,42,144,106,221,78,60,13,204,1,56,168,228,194,231,61,115,78,72,242,92,140,243,201,
203,18,7,24,224,118,233,218,163,110,59,230,177,62,167,212,21,152,231,165,53,152,109,57,206,115,67,101,64,61,7,106,103,152,118,149,247,207,52,136,97,184,228,84,129,247,46,63,90,132,102,159,199,94,245,70,
82,36,221,142,188,138,95,81,143,165,48,30,153,233,78,86,201,161,8,121,201,160,125,41,50,6,64,253,104,250,158,180,196,73,252,60,122,100,211,135,74,146,198,242,75,23,102,69,66,89,25,14,225,158,8,168,193,
39,173,50,5,251,223,227,75,243,3,199,90,27,27,70,14,79,122,110,238,114,105,10,230,140,217,109,50,15,80,196,85,117,251,166,165,110,116,212,246,122,134,62,80,243,218,168,227,147,247,136,228,166,110,218,
123,19,78,99,243,116,168,250,231,2,164,233,76,235,190,31,106,198,223,92,81,176,96,67,35,113,212,225,9,254,149,145,241,25,199,252,37,166,89,87,116,114,44,114,50,129,216,142,69,63,193,76,127,225,33,135,
159,189,28,171,249,198,213,75,226,28,190,118,177,3,103,254,93,163,7,242,172,170,108,119,101,42,216,246,215,88,156,236,152,220,118,141,163,60,15,74,72,72,7,167,57,167,77,11,66,219,75,14,128,241,239,81,
70,15,173,114,51,244,26,91,158,149,240,167,82,155,79,215,68,214,242,180,18,132,96,36,83,130,56,193,253,43,217,238,60,121,170,196,169,39,219,166,50,244,206,243,128,43,193,254,28,177,109,106,37,25,220,84,
130,163,191,21,233,145,205,230,124,161,129,227,238,154,214,147,106,231,149,155,194,30,214,46,74,250,29,69,167,142,181,85,86,117,191,159,122,140,231,121,227,158,213,117,60,91,169,92,92,41,254,210,156,46,
238,155,201,53,202,69,117,26,198,223,47,207,199,21,45,188,137,246,137,36,108,4,3,119,233,210,182,230,125,207,13,70,155,251,43,238,62,132,248,117,226,73,245,4,85,158,232,179,202,172,75,55,7,43,192,233,
237,154,237,94,221,95,145,115,36,152,228,125,209,143,166,121,175,13,248,91,171,52,119,22,197,216,97,46,20,30,122,43,12,127,90,247,143,180,69,15,89,10,33,236,57,253,13,123,24,89,115,66,204,252,119,137,
176,235,15,140,230,138,178,146,22,57,80,166,31,119,76,21,32,1,245,224,213,129,228,72,139,147,18,127,113,132,164,156,254,85,19,44,13,143,48,168,238,27,43,159,233,138,4,145,197,130,145,36,155,186,177,140,
18,125,242,43,184,248,242,199,150,87,25,148,99,184,193,38,156,35,18,47,200,202,88,122,113,199,210,155,28,234,7,200,152,62,231,31,210,165,89,4,189,34,145,79,253,51,0,243,249,138,8,26,191,50,133,218,20,
250,168,28,83,145,230,81,195,153,24,118,219,140,210,236,242,216,22,251,68,108,127,139,160,252,121,165,51,47,252,180,145,183,127,120,41,99,72,87,29,153,27,230,44,202,125,1,197,13,48,200,194,51,183,187,
22,254,149,25,185,231,6,41,24,122,225,191,48,51,82,52,229,134,208,141,142,159,113,129,63,141,2,37,86,126,132,236,255,0,182,127,227,138,95,153,142,1,86,207,241,32,25,252,106,40,188,206,3,12,99,238,239,
102,111,214,166,243,157,142,27,229,35,174,208,49,250,138,4,53,50,206,3,16,135,161,14,48,106,70,149,91,31,196,195,208,15,230,42,57,21,163,27,161,140,1,212,171,184,231,222,144,220,63,116,63,64,40,36,122,
224,253,232,50,191,143,243,169,54,252,216,17,5,7,220,255,0,90,98,153,74,239,88,158,49,254,247,90,85,98,196,6,4,123,150,160,14,14,234,226,56,99,105,101,113,18,47,222,109,220,15,173,126,118,248,163,226,
9,241,39,140,117,189,118,71,201,188,187,145,227,57,233,22,72,141,127,4,10,63,10,251,115,227,119,136,63,225,27,248,81,226,187,245,145,3,38,159,44,105,128,85,131,184,242,211,31,240,38,21,249,148,47,139,
200,145,103,27,216,32,252,72,21,157,13,27,97,83,107,21,124,97,123,253,161,226,27,185,153,137,45,38,9,62,195,21,146,189,27,183,249,235,78,212,36,251,69,228,210,31,227,118,97,248,146,106,37,24,108,100,231,
174,234,233,51,13,255,0,48,80,50,13,119,159,6,227,31,240,176,116,147,130,7,239,123,127,211,38,174,17,120,206,209,243,118,205,122,63,192,213,142,111,27,69,185,75,200,177,49,67,158,23,160,39,245,199,227,
85,17,72,250,119,197,15,229,248,115,212,27,169,128,61,250,32,255,0,10,243,220,245,174,235,197,207,143,14,219,31,239,205,51,127,227,248,254,149,192,254,60,210,18,216,244,111,1,43,127,96,95,74,27,110,214,
61,253,171,206,124,69,49,72,111,28,55,204,35,255,0,217,107,209,124,27,39,151,225,91,197,192,204,153,35,249,87,152,248,161,85,227,212,147,157,203,27,115,159,65,83,212,14,1,151,107,32,28,225,70,126,164,
102,173,71,247,69,84,183,79,221,140,244,53,117,64,218,41,200,104,100,150,161,227,220,100,11,80,89,223,53,140,205,181,18,92,140,124,227,34,139,153,152,46,51,85,33,148,171,19,142,122,84,150,123,199,236,
247,240,175,88,241,198,157,123,119,101,105,44,246,241,150,46,202,135,104,192,245,233,154,246,137,52,184,52,123,25,244,155,107,245,154,238,197,68,23,18,179,149,216,251,79,32,247,57,244,168,62,13,124,106,
189,240,63,236,235,162,248,75,74,211,227,75,235,129,119,115,115,115,191,4,163,76,216,36,127,186,113,255,0,1,2,184,127,12,104,250,207,136,53,135,145,97,116,178,187,207,155,60,202,118,241,201,252,79,35,
241,175,11,23,24,212,109,220,245,240,210,113,180,78,161,124,23,165,77,103,121,117,117,35,92,221,56,44,86,18,84,71,216,5,95,66,114,119,119,205,116,126,21,240,174,153,168,93,193,166,218,94,35,222,186,225,
13,196,156,41,56,5,177,252,32,127,81,88,254,48,215,162,240,222,156,145,221,143,179,207,112,210,44,108,131,229,96,188,100,250,14,122,87,129,75,227,75,171,59,221,74,230,214,102,136,53,164,163,228,36,49,
202,16,167,243,34,184,104,225,221,84,117,84,173,200,206,91,226,36,144,77,227,141,112,219,220,199,115,7,219,101,85,184,78,81,192,114,55,47,168,56,200,246,174,59,91,242,109,245,75,136,96,155,207,133,28,
170,77,140,110,0,245,197,89,115,242,175,203,142,43,18,245,179,59,115,205,125,69,56,242,197,35,195,147,230,109,142,243,183,82,55,173,66,173,158,130,165,251,194,180,51,25,247,135,76,83,30,51,215,165,88,
140,136,228,86,35,114,130,9,95,90,191,116,214,119,11,185,21,150,99,201,29,169,5,140,117,206,236,99,53,173,167,103,99,18,57,205,83,242,66,96,142,107,66,200,225,72,197,77,192,189,111,16,154,70,13,199,21,
3,40,178,184,33,10,182,71,113,72,211,24,135,203,80,111,243,164,220,213,37,163,234,31,216,159,224,120,248,161,174,234,154,133,200,145,108,172,138,7,153,28,42,169,60,224,147,223,143,231,95,75,252,87,240,
71,132,60,37,99,51,89,95,200,22,40,242,234,152,113,158,152,4,247,53,242,207,236,219,241,75,83,240,7,129,53,251,91,73,10,193,168,94,70,12,106,62,241,84,245,252,69,119,158,55,241,46,187,226,77,21,254,237,
157,173,180,94,124,249,57,243,24,156,42,231,243,175,157,196,181,42,173,51,214,163,25,242,166,152,183,26,247,134,52,237,37,96,153,90,225,164,220,251,25,126,108,245,57,111,169,170,90,15,137,188,55,174,107,
150,54,242,44,150,150,187,126,127,44,229,207,108,100,244,24,175,42,213,53,9,102,181,97,191,114,227,4,226,176,160,158,93,62,242,57,98,151,148,59,142,15,227,138,95,85,131,217,155,186,210,138,212,205,253,
160,53,15,15,183,197,207,17,255,0,194,53,36,210,233,16,74,182,240,180,173,147,35,34,5,145,179,233,188,54,61,177,94,119,103,35,72,140,204,115,243,83,53,203,11,221,58,240,165,252,79,12,236,3,144,253,72,
35,32,254,52,105,191,52,45,245,175,161,167,5,8,40,163,196,156,156,164,238,108,105,179,8,36,206,123,98,189,95,75,241,211,90,193,28,101,240,170,160,123,215,142,174,99,249,177,197,104,253,187,0,13,216,53,
188,76,100,174,123,60,62,62,99,149,119,235,211,38,164,135,197,22,242,48,44,220,245,205,120,242,234,15,22,50,114,79,173,79,38,184,64,194,241,198,50,106,185,136,229,55,62,44,106,201,168,79,98,170,217,84,
70,56,250,145,92,14,143,34,195,174,90,74,223,117,37,86,63,129,205,79,175,95,189,212,145,243,144,163,21,157,165,219,253,179,86,181,183,99,129,44,138,155,135,108,156,85,221,117,33,197,244,61,103,194,62,
23,208,100,187,89,164,64,251,121,204,167,118,79,174,58,87,183,233,255,0,13,126,27,201,97,29,196,218,229,188,119,76,160,188,43,102,126,83,220,103,190,43,229,61,31,88,48,219,162,198,237,230,134,57,231,181,
117,182,190,34,184,142,53,95,56,238,35,158,122,87,209,82,198,81,140,85,163,99,228,113,88,74,238,109,206,109,175,86,123,29,239,128,60,7,113,172,165,175,219,160,91,18,48,247,114,91,244,246,11,94,101,227,
47,7,120,115,195,247,211,174,158,182,183,144,100,55,156,168,0,97,143,127,74,198,190,213,38,102,216,46,183,113,212,26,227,188,77,226,72,224,140,198,215,36,62,8,228,215,124,113,148,37,31,122,40,242,99,131,
196,115,167,78,111,239,99,245,59,59,38,241,94,145,169,89,199,28,59,110,96,6,24,198,23,33,212,6,3,242,174,39,196,68,203,174,234,76,221,90,234,83,129,254,249,171,90,102,177,37,230,189,165,197,16,98,191,
106,136,150,63,239,138,169,172,127,200,90,255,0,39,36,220,73,159,251,236,215,205,98,101,78,85,47,77,89,31,111,131,141,72,211,74,171,187,42,54,54,212,77,219,140,226,159,207,210,145,163,59,179,92,135,113,
93,179,231,14,113,205,122,77,190,159,117,125,103,167,92,105,34,11,152,26,213,60,229,105,213,93,101,94,31,32,159,90,243,121,35,101,98,107,170,240,141,237,230,143,225,221,82,251,75,133,101,190,243,224,136,
183,149,230,50,198,68,132,241,219,36,45,101,82,42,75,83,90,117,37,77,222,44,232,237,237,117,70,151,100,150,145,162,129,212,78,135,250,210,234,67,89,107,40,224,138,214,15,221,177,37,214,84,207,63,141,100,
248,102,243,81,183,213,245,77,74,252,46,159,102,142,173,118,166,33,146,199,144,138,167,161,63,214,181,180,13,73,53,11,29,83,91,10,150,171,38,160,60,216,214,32,236,99,218,54,198,163,220,159,231,92,158,
198,49,214,199,95,214,170,53,107,156,126,183,166,107,55,199,18,164,42,160,112,22,101,227,245,164,178,77,111,77,141,20,50,180,96,96,43,72,164,15,214,179,252,92,171,15,136,245,40,226,27,81,103,108,42,244,
21,153,106,172,247,17,228,110,193,4,174,122,215,84,105,41,70,214,57,253,188,227,46,100,245,59,185,117,77,74,206,59,118,242,18,71,101,203,141,224,96,231,160,252,41,159,240,144,106,106,223,61,146,12,247,
223,92,198,165,117,121,52,101,158,70,42,36,220,191,236,253,42,63,181,94,73,110,138,88,184,220,31,113,169,250,156,118,229,55,89,133,91,95,152,223,190,214,181,134,66,86,221,98,31,237,48,233,249,214,38,161,
111,123,168,56,149,213,65,192,27,67,140,10,134,107,235,139,171,119,142,76,187,6,220,88,246,246,172,244,134,86,133,165,93,219,69,107,79,14,161,178,48,169,137,157,79,138,69,193,163,220,54,56,25,255,0,124,
127,141,116,90,68,107,167,216,162,124,146,221,100,150,141,8,44,22,185,99,110,237,106,178,252,223,55,189,91,181,243,180,246,243,35,249,93,147,1,143,108,214,147,162,228,172,99,78,183,36,185,145,219,199,
120,236,219,86,7,247,199,56,250,212,55,55,210,238,40,145,101,186,114,192,87,63,109,111,169,199,121,246,135,184,242,20,39,207,48,61,84,118,250,210,91,107,13,125,226,40,102,16,249,196,17,26,134,29,6,113,
184,254,181,193,245,117,115,210,250,228,218,45,234,31,111,190,132,199,26,70,161,135,63,189,81,253,107,24,120,94,255,0,57,204,121,255,0,174,194,160,212,237,164,138,250,224,186,148,204,141,128,126,181,76,
242,114,88,253,107,170,20,212,86,135,20,234,185,187,179,175,209,225,188,176,130,230,59,171,148,18,52,120,129,76,129,134,239,115,233,74,183,26,220,107,204,48,191,114,222,96,255,0,26,171,167,220,222,88,
248,126,196,217,90,172,237,60,178,9,24,199,187,56,35,0,251,115,90,90,45,134,163,163,194,207,120,208,218,194,119,50,91,75,129,184,250,123,10,194,84,226,222,168,222,53,234,37,100,202,45,117,172,18,115,20,
71,233,32,255,0,26,167,113,30,172,241,176,116,81,187,161,243,7,248,214,158,141,103,115,110,193,103,146,210,59,105,28,187,114,24,201,147,247,115,92,229,222,143,117,36,146,42,24,164,85,220,193,21,193,56,
30,213,112,165,21,208,206,120,137,189,216,214,240,253,252,173,146,170,79,175,152,63,198,172,216,104,215,58,125,226,92,92,24,226,138,60,177,109,224,246,53,132,3,182,21,65,36,244,2,181,142,147,178,52,107,
169,86,223,143,185,156,191,229,93,54,57,175,125,76,197,8,88,228,224,98,128,187,184,6,183,237,244,125,42,87,132,73,123,44,113,201,214,77,131,11,206,50,69,103,106,22,22,246,243,56,183,187,23,49,171,96,56,
92,100,122,213,92,86,42,43,5,96,78,8,30,180,201,25,11,124,163,255,0,173,79,145,54,174,73,4,31,122,173,187,45,79,161,38,254,147,125,170,93,249,144,195,124,232,35,137,164,10,199,140,14,213,145,119,127,113,
120,193,167,149,166,35,129,184,230,181,252,59,109,112,165,230,131,230,12,134,54,250,30,181,177,105,224,150,109,167,201,235,200,205,77,135,115,154,185,204,147,67,183,56,49,39,63,69,2,162,83,52,44,23,204,
100,7,242,175,74,176,248,123,44,132,50,199,158,122,99,156,85,207,17,124,49,158,31,13,220,223,36,39,100,11,230,18,71,60,117,21,86,14,99,203,21,140,131,47,247,168,251,60,115,48,14,112,51,206,42,59,165,48,
200,0,233,72,178,17,156,240,42,13,46,118,223,15,116,219,75,31,137,122,44,27,188,232,204,235,147,235,149,200,254,117,234,127,20,86,221,245,104,45,159,247,74,140,119,178,143,90,241,31,7,205,44,62,41,211,
36,128,102,69,152,21,197,122,127,141,44,239,163,101,188,186,118,243,38,98,54,183,61,61,61,171,194,197,39,245,136,191,35,222,193,203,150,139,57,249,157,44,218,84,183,125,201,156,131,211,56,169,44,44,146,
246,23,147,46,31,61,199,21,70,227,84,141,228,92,91,170,157,184,98,122,231,214,181,244,251,239,50,197,136,80,10,242,21,125,43,57,243,69,30,198,27,146,164,172,204,251,24,5,174,161,31,158,187,72,110,62,181,
210,179,124,196,28,215,53,253,160,178,92,110,116,251,172,8,207,90,233,102,148,179,110,254,85,141,75,233,115,236,242,85,24,243,168,151,44,52,227,127,107,121,42,220,71,19,65,31,153,178,67,141,227,184,30,
245,152,192,125,69,59,113,237,76,250,214,7,211,13,147,210,152,221,51,222,158,79,205,235,76,102,13,158,148,9,138,172,58,116,167,133,56,200,193,231,21,29,59,31,157,82,51,97,130,113,233,78,82,122,98,145,
20,250,211,240,118,146,69,50,5,236,59,98,156,172,59,142,105,128,147,218,156,190,255,0,92,80,72,255,0,214,156,164,243,77,200,227,28,102,158,163,240,160,66,244,199,106,67,247,179,218,157,218,147,161,246,
160,205,151,87,157,53,177,206,26,171,161,59,77,95,181,141,91,71,188,126,232,200,127,60,214,124,108,54,156,10,174,135,20,190,33,31,230,53,21,74,122,224,10,141,121,98,15,3,214,164,234,142,198,191,130,219,
111,138,52,241,253,233,54,254,96,143,235,85,188,124,187,110,236,27,161,107,117,252,112,106,79,9,159,47,196,250,91,246,251,74,15,252,120,83,254,35,70,171,54,158,64,32,8,138,99,232,198,179,169,177,221,150,
59,99,215,154,103,37,187,60,208,156,28,226,136,209,164,206,222,74,140,210,46,119,12,245,174,51,244,26,111,222,59,207,132,248,111,26,105,75,129,150,184,85,231,167,39,21,233,250,246,159,38,155,173,92,64,
160,39,239,8,57,237,212,154,242,79,135,183,31,101,241,70,153,40,56,219,58,156,143,173,123,135,196,5,206,169,246,152,254,116,147,230,111,94,107,106,91,51,201,206,238,170,83,126,71,56,174,38,147,112,24,
92,245,250,85,132,134,70,70,145,200,219,130,64,63,206,161,95,150,32,64,0,103,62,252,213,153,238,4,104,170,27,167,108,122,255,0,250,235,86,143,2,51,119,58,191,6,204,45,100,219,183,18,48,200,108,247,175,
165,180,251,235,123,139,56,39,68,76,204,138,196,97,138,242,59,159,198,190,86,240,253,195,45,212,45,32,42,139,192,62,188,255,0,245,235,233,79,1,94,155,223,10,217,229,3,34,3,17,110,157,15,25,252,49,93,216,
57,123,205,31,9,197,180,121,169,66,183,103,99,120,68,21,138,139,104,213,125,54,239,7,233,156,84,177,198,62,224,204,124,240,35,80,7,228,77,11,131,128,173,181,71,251,38,157,228,219,50,231,203,243,71,127,
152,140,127,42,245,207,203,132,242,194,46,95,204,113,216,141,163,31,165,73,20,201,38,127,122,195,111,208,254,4,83,18,25,54,225,33,70,95,250,109,198,71,212,28,211,163,27,143,206,136,156,96,21,57,199,182,
122,208,73,107,114,178,238,15,114,184,234,119,46,207,202,158,178,44,139,144,146,150,7,239,71,247,127,17,85,188,148,198,210,84,251,238,207,232,104,80,209,142,38,82,189,192,224,254,70,130,75,67,119,151,
203,170,167,160,140,159,232,41,22,101,242,240,55,52,125,9,146,66,184,62,217,168,99,242,121,102,105,19,215,56,35,242,24,171,30,92,36,229,110,37,99,216,50,0,191,206,128,15,51,42,8,81,33,239,180,228,126,
180,230,87,144,3,19,44,13,142,55,13,217,252,119,83,54,149,96,83,121,29,126,87,192,52,226,191,49,202,22,7,168,221,254,69,4,147,43,78,170,20,220,128,123,22,139,143,204,19,73,111,25,183,69,95,54,221,138,
255,0,18,174,9,250,228,84,33,68,128,249,82,16,65,228,22,207,242,167,46,245,96,90,67,131,198,210,185,31,157,0,89,97,24,195,143,223,169,235,134,227,245,166,238,86,56,88,21,80,255,0,116,6,252,106,37,221,
184,228,174,126,153,205,72,147,75,252,37,188,191,239,174,56,252,40,21,143,149,255,0,108,173,65,44,254,5,106,209,175,47,117,113,107,10,242,63,231,170,190,63,241,202,252,236,179,149,91,80,143,39,238,230,
79,251,228,22,254,149,247,215,237,217,39,149,240,78,0,184,86,58,197,190,89,79,253,51,154,191,62,44,27,45,112,231,170,194,216,227,212,133,254,76,107,26,79,114,166,71,195,49,198,121,252,104,220,17,120,252,
41,155,78,220,145,128,199,131,78,85,203,0,107,168,200,113,249,176,115,201,175,81,253,158,225,255,0,138,237,179,201,91,99,143,175,153,24,255,0,26,243,8,194,238,33,114,79,53,234,223,179,180,101,188,93,44,
140,126,236,74,15,227,34,255,0,133,90,38,71,208,94,54,155,26,38,156,51,247,145,207,254,69,111,240,174,12,41,145,209,84,110,98,113,93,135,140,178,116,125,25,73,251,214,236,223,249,21,205,113,172,197,64,
35,130,14,106,64,236,180,91,153,45,60,63,34,145,243,40,126,51,233,92,54,180,222,96,213,88,168,251,132,126,117,216,105,105,183,195,42,88,240,85,178,127,18,43,148,213,97,15,111,173,133,229,132,100,143,174,
234,66,71,21,113,50,25,24,34,44,75,145,133,29,176,49,77,13,198,106,187,36,159,106,147,120,203,41,195,99,242,169,215,238,158,222,212,49,162,157,206,50,115,214,153,12,43,10,249,143,130,73,202,175,175,214,
159,35,137,48,172,118,132,7,24,29,79,189,69,106,166,107,132,29,114,234,57,250,212,189,139,91,158,255,0,96,183,218,30,135,162,77,111,229,159,38,210,57,73,113,147,251,194,91,29,127,218,253,107,210,124,63,
227,155,51,52,50,220,234,43,108,174,29,188,167,83,128,50,2,142,158,128,159,169,174,19,90,183,70,212,172,108,18,115,33,138,40,237,204,75,193,87,80,16,126,29,57,170,150,58,66,92,235,150,54,183,115,108,182,
243,130,204,234,112,80,110,193,231,233,207,227,94,36,226,166,181,61,72,73,197,217,18,124,70,215,215,94,179,213,228,89,98,190,217,40,48,63,206,190,76,121,25,219,158,62,108,15,203,210,188,131,69,145,191,
180,144,249,129,55,48,12,199,158,9,21,237,223,19,60,47,109,111,166,249,122,124,240,220,219,224,189,199,217,143,200,140,11,109,250,224,28,122,240,107,195,116,216,89,53,53,44,153,216,26,82,51,198,20,22,
254,149,182,26,220,162,196,110,140,107,233,131,94,92,56,25,14,204,70,125,205,115,119,156,202,231,35,241,173,249,179,38,48,184,192,228,250,215,63,115,204,237,158,153,175,82,59,30,115,100,81,49,95,254,189,
88,78,158,149,89,113,156,213,152,219,104,206,42,133,114,76,12,113,75,28,103,107,57,35,229,227,29,233,55,140,82,44,158,245,44,119,39,217,186,182,33,54,43,162,198,16,49,191,50,49,145,143,64,189,177,89,49,
178,254,21,110,36,5,78,58,117,164,49,151,64,170,252,188,247,168,160,67,183,158,57,169,110,159,110,211,138,75,115,185,115,220,154,6,143,85,240,68,73,107,224,117,150,82,248,105,222,64,23,60,183,202,163,
249,31,206,189,105,111,47,175,188,35,3,220,218,181,204,15,152,99,135,113,82,95,28,49,246,235,92,167,195,184,94,211,195,190,31,73,109,252,235,54,15,44,139,179,118,114,199,147,244,21,232,126,31,189,159,
85,190,123,105,237,190,205,100,202,124,128,6,9,25,25,39,208,1,249,230,190,79,19,43,84,108,250,76,63,192,145,230,38,27,187,125,62,104,99,181,87,55,153,64,204,185,216,20,130,72,62,255,0,210,188,254,227,
116,210,108,94,9,110,220,15,173,123,127,197,134,125,54,88,237,85,196,119,13,11,58,133,24,17,134,36,183,30,188,87,134,33,99,117,109,30,236,22,144,2,59,156,154,236,194,201,205,93,153,98,146,208,229,190,
32,93,61,207,136,174,183,177,118,140,172,121,62,138,161,64,253,43,47,75,81,228,158,123,243,82,248,162,79,51,93,190,101,63,43,78,248,250,110,56,166,105,223,234,78,121,230,190,130,63,9,243,242,122,146,220,
62,216,255,0,26,111,218,9,199,99,75,115,254,172,113,222,162,85,200,170,216,155,19,139,131,158,244,255,0,180,110,198,120,170,248,194,158,212,220,145,138,46,61,139,119,75,27,22,203,99,247,121,92,247,230,
178,146,119,181,188,138,120,248,104,200,97,245,28,213,139,130,236,87,57,224,96,85,41,190,102,244,166,65,174,154,197,163,62,241,166,198,167,190,36,97,91,218,109,252,119,142,227,236,208,194,168,187,153,
229,145,128,3,165,113,144,243,192,28,231,173,116,58,123,194,208,205,20,238,98,243,49,137,49,156,96,250,123,209,123,18,224,165,186,54,30,225,100,150,120,254,201,106,22,37,5,166,51,29,184,61,49,249,215,
27,226,41,172,108,111,138,77,164,64,242,32,220,88,74,196,48,237,250,87,77,167,222,91,90,207,115,20,114,176,89,0,84,149,147,61,15,60,123,215,47,227,43,119,188,213,46,46,35,141,188,182,1,70,236,100,224,
1,156,126,21,81,158,187,147,236,162,149,210,34,131,196,22,86,243,71,61,158,141,4,19,161,12,141,185,142,27,177,197,98,76,207,35,60,142,73,102,36,177,61,73,52,171,12,209,170,252,141,192,231,138,70,60,124,
223,173,88,180,176,211,212,118,164,127,173,56,41,56,192,205,13,4,146,49,10,140,72,234,0,166,133,116,46,164,45,25,149,173,119,42,249,106,172,173,146,75,119,63,202,162,211,53,173,67,69,150,70,177,188,150,
212,200,48,222,91,99,118,61,105,151,27,163,125,164,21,62,226,160,85,44,222,194,152,238,91,251,109,205,215,155,230,207,36,190,107,249,141,185,137,203,116,220,125,249,175,112,211,116,125,63,194,62,9,130,
91,75,118,187,186,158,56,230,126,132,150,101,4,147,232,6,112,5,120,66,191,150,164,14,181,220,104,127,22,229,209,244,116,178,150,209,111,118,168,93,204,118,144,63,187,238,63,198,185,235,70,77,46,83,106,
109,117,47,89,120,111,195,218,205,211,205,127,116,182,151,87,50,238,17,185,110,114,123,126,53,67,196,190,19,177,240,222,184,208,233,215,6,246,205,194,149,155,97,80,78,57,3,62,134,185,93,71,196,183,58,
150,182,53,34,171,28,177,184,104,145,7,202,152,57,0,87,95,164,248,194,247,197,75,123,111,123,20,59,98,181,146,225,54,46,24,50,224,140,31,206,174,143,61,57,169,75,99,58,137,78,45,45,202,186,182,150,137,
166,146,177,110,60,123,119,166,216,232,232,240,69,185,70,112,51,205,87,184,241,51,222,88,188,81,70,207,183,31,117,9,199,62,213,90,29,114,100,138,53,72,166,37,87,4,133,53,233,170,145,85,46,222,135,39,36,
189,146,143,91,150,83,67,67,113,127,132,249,85,73,235,245,168,116,221,29,14,131,43,148,24,195,113,222,168,46,179,120,146,220,159,38,96,38,4,30,42,43,29,90,242,206,196,219,136,229,32,231,230,218,123,212,
70,113,238,105,40,182,244,54,142,154,139,161,70,200,153,32,14,191,90,139,84,177,219,99,3,109,218,118,143,229,85,19,92,184,26,114,192,99,147,119,66,124,179,235,154,173,168,235,51,92,89,172,76,142,8,92,
110,42,70,41,198,162,187,98,112,124,169,121,157,95,134,116,13,19,92,209,243,113,119,121,246,133,114,174,177,166,80,126,57,244,197,84,212,188,47,107,99,125,20,22,83,73,29,212,159,234,209,129,12,195,252,
138,171,162,235,151,58,15,132,214,226,219,104,105,47,154,38,44,51,192,141,77,100,106,158,42,191,212,245,40,111,94,81,28,240,99,203,104,198,49,131,154,243,121,102,228,221,244,59,20,162,162,147,59,61,47,
74,184,146,70,181,214,116,225,246,71,85,70,184,17,225,198,120,4,30,230,188,239,80,183,22,122,133,205,190,119,8,228,100,207,174,14,43,187,212,62,47,221,221,104,203,106,214,187,110,54,0,36,39,229,4,119,
2,188,238,73,26,103,119,102,44,236,114,73,239,85,77,79,94,97,77,197,252,37,187,109,78,234,206,221,226,130,226,88,145,142,74,171,96,126,85,179,226,15,58,247,87,211,160,186,149,138,11,72,91,174,113,152,
193,63,157,101,199,225,221,83,236,254,119,216,39,242,241,187,126,206,49,235,90,218,148,38,231,91,211,1,200,197,140,39,242,143,21,170,74,82,73,25,202,78,49,108,166,214,78,99,249,19,228,29,56,166,104,240,
249,58,229,179,144,72,201,7,143,85,53,218,90,217,198,182,185,192,35,29,107,159,79,221,120,130,216,71,247,76,181,221,86,146,140,46,143,42,134,33,206,118,103,59,162,148,135,87,71,235,128,228,113,208,236,
108,26,167,147,52,190,99,59,51,177,231,119,115,90,154,62,145,124,218,132,115,173,179,152,88,63,207,142,48,85,133,103,227,203,192,61,134,8,174,4,207,84,27,59,71,106,123,31,50,54,99,128,65,237,76,239,156,
83,227,194,238,7,145,138,96,50,40,214,103,8,205,179,119,70,61,1,170,210,194,109,238,12,114,46,25,79,34,172,237,37,113,211,154,142,249,139,204,129,212,137,85,66,179,127,123,29,15,229,138,178,119,61,51,
224,220,86,183,146,94,67,62,210,114,10,171,87,175,195,103,165,66,174,55,38,245,61,15,242,175,157,124,19,170,29,46,226,102,83,130,203,138,234,91,197,210,3,141,217,45,212,230,144,185,79,111,75,237,46,221,
86,79,49,23,96,199,74,177,174,248,219,76,188,240,213,213,147,249,127,189,129,227,12,191,222,32,142,107,192,174,60,69,38,78,24,158,58,102,178,239,53,201,89,113,184,227,57,197,23,31,41,201,234,44,86,108,
19,202,241,84,231,147,247,56,207,57,171,151,204,101,147,118,0,201,56,197,83,184,80,177,156,245,160,209,26,158,10,214,155,69,241,37,133,216,199,238,228,199,204,120,231,143,235,94,139,226,143,21,220,107,
146,34,92,79,242,199,208,14,0,175,33,183,97,230,40,199,32,230,182,238,110,30,73,182,151,57,174,10,212,148,166,164,123,24,58,234,156,92,90,185,189,13,204,154,148,177,194,74,109,64,64,111,95,173,119,214,
62,14,48,217,90,94,69,46,232,165,80,121,56,96,115,140,125,56,174,35,64,183,180,49,178,72,251,100,43,144,222,254,213,219,249,151,23,145,218,36,147,16,176,0,171,142,43,203,173,39,123,35,211,210,154,230,
234,111,107,95,11,103,251,76,115,197,229,225,144,57,76,243,159,74,196,153,118,146,167,168,226,187,141,51,92,50,11,64,242,126,254,50,19,119,170,99,165,112,247,76,36,154,71,206,55,18,127,90,224,82,156,157,
164,125,166,69,81,77,202,196,57,218,196,10,107,55,81,78,245,247,166,111,230,172,251,11,142,242,252,198,194,12,16,57,168,75,84,133,251,158,42,54,57,39,20,34,71,35,99,147,206,120,162,154,41,212,201,28,178,
109,6,164,82,172,164,150,33,179,197,69,142,158,244,229,3,119,76,83,33,142,80,221,72,56,245,167,43,1,143,231,70,73,92,103,229,239,70,229,85,233,147,76,129,84,245,167,2,61,105,12,129,182,175,0,10,20,142,
244,18,72,172,7,122,93,221,133,55,112,164,108,129,235,154,9,108,221,209,227,243,116,157,72,18,2,237,66,79,252,10,179,158,36,138,121,99,142,65,42,43,16,178,47,70,30,181,161,160,130,250,118,174,163,167,
217,195,126,76,43,38,60,238,199,106,163,130,127,19,20,182,211,80,183,222,231,169,169,166,198,252,1,197,64,217,235,211,20,142,152,236,90,208,231,242,245,171,6,207,11,58,55,211,12,43,79,226,116,59,100,183,
99,213,101,154,63,192,61,97,90,201,229,221,64,254,142,15,79,122,234,126,41,71,251,145,199,75,217,242,126,173,154,202,166,199,94,2,92,184,250,127,51,207,98,114,185,193,35,35,7,222,133,39,119,52,213,198,
58,243,211,20,138,114,78,43,136,253,22,31,17,211,120,69,182,107,54,135,61,36,95,231,94,227,173,93,27,205,58,18,15,204,14,9,250,87,131,120,113,182,106,22,239,211,18,15,231,94,193,21,243,73,19,40,59,182,
30,62,185,170,131,229,103,46,113,14,122,112,144,182,247,14,168,204,57,56,228,85,184,228,18,111,50,17,191,43,143,111,90,205,50,203,147,34,160,67,142,69,90,181,183,123,229,103,244,229,64,254,34,43,165,159,
37,30,230,190,151,46,235,128,173,243,177,93,171,207,78,167,53,244,31,194,251,228,146,198,107,117,27,148,108,148,169,98,58,140,31,229,95,59,218,238,180,191,34,93,177,150,4,159,95,106,246,95,132,250,160,
254,208,138,21,118,141,37,136,199,185,70,119,17,200,31,161,173,176,242,229,168,143,19,136,40,251,108,4,237,211,95,184,245,222,153,242,80,144,58,160,108,84,136,14,237,202,166,51,250,83,22,57,163,198,55,
109,255,0,107,143,241,169,6,198,93,143,35,22,255,0,100,103,21,239,159,137,15,220,20,126,241,128,25,235,180,255,0,42,151,104,152,142,89,143,108,190,7,229,154,142,37,219,198,230,62,204,118,159,229,64,135,
201,37,138,185,143,168,218,11,143,165,4,19,168,84,25,8,194,65,198,229,115,82,249,115,163,101,138,108,239,212,28,125,106,21,149,100,3,228,5,122,17,180,169,254,84,245,133,87,238,128,200,123,48,200,253,104,
16,255,0,46,22,7,147,159,239,70,114,127,28,154,108,107,2,182,4,236,72,63,115,111,79,199,21,34,164,60,51,74,65,254,238,0,167,171,39,40,178,196,127,186,0,193,160,64,170,56,100,73,89,79,7,99,82,237,79,186,
232,219,79,25,124,99,249,84,77,19,134,220,35,144,231,146,248,28,126,181,50,170,202,184,125,232,221,136,96,63,58,4,14,184,96,235,44,104,70,58,70,70,125,179,82,121,200,224,169,92,143,239,41,201,166,53,179,
72,188,204,184,198,62,92,128,126,181,25,88,209,67,54,23,29,125,40,16,162,117,133,246,177,36,117,95,144,156,126,53,58,200,100,231,116,110,190,168,48,69,70,46,35,145,113,251,166,24,200,1,15,243,6,151,49,
147,184,21,63,68,193,20,1,242,63,237,195,105,246,159,129,210,200,1,2,223,82,182,148,241,219,14,159,205,197,126,122,91,174,203,11,215,254,34,209,198,62,135,113,63,250,8,175,211,127,218,131,67,111,16,124,
11,241,109,188,106,90,88,237,150,232,12,255,0,207,41,22,67,250,41,175,205,40,173,124,237,38,248,33,253,234,60,114,143,117,27,131,127,232,66,185,233,189,205,90,185,153,31,205,242,177,246,205,42,200,23,
233,76,251,43,183,37,177,77,54,109,128,67,245,61,43,163,156,207,148,176,179,39,153,130,112,195,61,61,43,216,191,103,53,13,173,106,178,169,207,150,145,140,227,221,207,244,175,20,54,173,230,124,174,72,245,
34,189,195,246,107,181,104,36,215,100,206,236,136,135,228,178,255,0,141,92,103,119,98,101,29,15,106,241,220,131,236,58,18,1,141,150,104,79,190,75,55,245,174,33,134,91,129,222,187,95,136,32,173,197,130,
103,59,108,173,255,0,88,148,255,0,90,226,217,73,254,181,70,118,58,235,37,101,240,236,64,143,148,143,230,213,201,106,139,149,212,154,51,146,17,216,159,108,49,254,149,223,218,237,30,16,182,27,126,111,148,
231,241,21,192,161,45,246,213,199,18,70,232,71,251,202,84,127,58,134,238,52,115,17,221,89,127,97,220,195,229,148,190,146,101,114,221,67,1,187,31,76,102,179,177,242,156,112,49,73,213,143,173,60,174,213,
39,239,113,76,25,149,112,188,100,28,0,112,106,231,135,109,190,213,174,89,65,212,60,232,188,253,106,148,235,243,17,140,215,89,240,175,75,77,91,199,90,44,50,134,242,126,209,189,143,67,242,169,108,103,240,
168,169,46,88,54,203,166,156,164,146,61,203,203,181,186,187,241,13,251,62,235,229,147,100,81,130,62,101,36,109,56,31,65,249,86,76,246,115,110,195,249,144,56,95,157,71,82,49,205,104,91,248,102,107,61,66,
107,171,119,105,21,206,35,85,60,227,2,180,245,9,35,181,146,40,100,130,72,53,137,138,238,154,73,1,93,152,192,0,126,95,149,120,74,105,234,143,89,197,245,57,155,157,78,24,124,51,117,100,209,201,10,41,37,
159,28,59,28,242,223,200,87,151,173,185,85,212,39,224,170,218,200,23,241,93,191,214,190,133,241,55,132,117,31,20,68,96,204,114,249,234,3,76,34,8,48,0,233,245,57,172,123,191,132,246,186,23,132,245,99,51,
111,188,123,89,16,12,228,32,198,127,60,129,87,10,241,138,20,169,185,108,124,201,112,228,40,94,159,214,185,251,204,121,238,71,173,116,183,203,251,204,30,160,12,215,57,121,143,53,241,235,94,228,118,60,167,
185,73,154,151,206,224,102,149,151,115,14,106,54,83,159,151,38,168,146,127,48,245,205,40,44,114,123,10,174,188,117,207,227,82,172,133,149,87,176,52,138,38,89,182,226,182,116,252,205,15,3,156,246,172,21,
198,73,174,130,198,68,134,202,31,37,155,204,231,121,61,51,158,131,240,169,99,35,189,143,189,86,130,66,184,32,119,171,119,1,165,82,122,224,82,105,54,162,234,234,56,216,125,231,11,249,156,84,183,163,41,
106,209,245,103,130,245,171,13,35,194,250,84,82,110,45,5,156,98,93,163,238,146,185,39,249,215,160,93,79,104,158,18,55,54,167,118,99,88,210,84,28,142,135,173,121,191,139,60,43,50,141,54,61,58,55,41,52,
33,95,203,251,167,128,6,77,117,126,3,102,186,211,229,240,181,244,70,45,209,29,153,63,50,183,90,248,234,210,141,72,243,174,167,210,82,139,78,221,140,63,23,120,38,237,180,104,245,8,183,94,106,23,1,213,222,
105,1,48,228,156,0,61,64,254,117,225,182,218,60,177,120,138,214,39,82,236,146,242,125,193,175,160,175,52,61,86,25,45,180,199,102,51,201,112,68,96,49,232,195,230,102,199,210,159,103,240,215,79,240,213,
240,153,143,218,175,157,78,221,199,56,61,205,107,135,196,170,81,247,130,181,23,81,232,207,139,53,76,181,244,229,184,109,228,145,248,212,250,121,197,177,29,183,102,175,248,231,76,109,39,197,154,173,155,
12,24,46,93,49,223,173,81,178,92,70,65,226,190,178,50,82,130,104,249,201,174,89,52,23,25,249,126,180,221,185,230,150,241,118,132,250,212,161,58,26,100,17,144,54,231,20,198,249,72,169,36,35,110,49,205,
66,199,29,122,80,38,197,111,222,96,147,208,85,203,61,6,210,226,223,237,23,87,223,102,220,216,72,213,55,18,6,114,77,103,137,49,144,42,253,159,217,110,18,53,154,66,10,231,229,205,61,136,18,29,28,137,155,
23,48,152,193,192,98,216,252,113,93,142,157,224,152,109,244,27,189,110,93,111,75,115,108,164,174,158,100,38,103,39,128,66,227,4,12,230,185,59,91,136,19,84,140,198,159,232,202,64,109,220,146,51,205,117,
122,149,222,155,168,88,220,45,186,184,149,99,44,1,24,28,86,78,76,109,163,150,125,72,205,58,253,192,87,161,84,2,174,248,207,198,23,62,32,58,120,189,138,206,36,178,133,96,138,59,59,117,132,21,7,57,108,117,
62,230,176,218,221,161,147,119,81,154,169,124,202,204,75,246,245,165,212,213,73,123,54,143,66,240,119,196,47,14,233,105,24,213,124,35,166,234,145,69,9,143,107,51,35,57,36,29,196,142,227,154,195,248,133,
174,248,79,90,181,31,216,126,24,109,22,118,93,164,173,219,74,187,183,2,91,7,219,35,30,245,199,194,145,178,190,89,123,99,154,163,124,191,42,249,114,115,159,90,214,45,220,202,164,87,179,138,59,173,63,86,
240,252,122,92,17,174,134,22,111,45,85,165,105,216,252,193,112,91,241,57,63,141,111,124,61,248,137,162,120,105,117,31,182,248,86,203,85,243,166,102,86,153,216,20,206,7,31,151,235,94,97,15,156,176,170,
135,200,197,73,103,108,242,41,102,220,114,220,226,134,247,57,99,13,77,79,137,90,149,167,136,60,77,123,121,105,101,30,155,111,52,133,225,182,136,229,98,94,203,158,245,139,163,248,114,251,88,104,197,188,
56,70,145,99,105,159,136,211,61,201,236,0,230,147,88,104,226,149,55,100,145,212,86,150,155,227,1,164,219,181,154,34,201,107,46,3,177,207,203,207,39,29,200,254,148,227,116,142,137,47,222,51,114,231,225,
53,148,182,46,116,237,110,59,203,227,157,144,54,6,226,6,79,211,218,188,196,194,235,51,66,85,132,138,74,149,35,156,142,181,233,182,54,250,22,137,32,213,206,180,183,13,15,239,18,222,19,243,185,244,246,175,
52,188,186,107,171,185,46,62,227,72,197,142,59,86,180,228,221,238,57,164,145,15,57,244,173,45,7,91,184,208,175,62,211,111,143,59,105,81,184,100,96,245,4,86,106,131,187,212,212,165,132,95,40,229,187,243,
91,152,220,233,110,188,121,168,181,187,65,10,91,218,110,229,205,188,65,77,107,248,11,196,90,158,161,121,123,22,69,227,71,108,210,164,76,160,101,131,40,31,204,215,159,249,134,172,217,234,115,105,254,105,
129,218,54,145,60,182,101,56,59,114,15,95,192,84,114,171,88,180,207,79,212,60,68,109,245,253,54,222,249,218,201,102,141,76,182,177,170,177,87,44,64,92,227,161,224,214,13,167,139,111,97,241,5,220,67,117,
244,107,36,145,219,192,0,249,142,226,6,120,228,98,185,165,241,37,227,106,17,95,203,229,207,115,18,4,86,153,119,116,232,126,181,45,175,139,46,236,245,135,212,227,72,35,184,101,218,66,199,133,231,190,61,
106,57,71,115,115,197,158,43,188,179,212,210,59,75,165,67,229,41,154,40,212,50,199,39,57,80,113,205,99,199,227,77,82,54,203,73,28,232,70,12,114,70,165,72,172,173,78,253,181,43,182,184,117,141,29,241,196,
107,180,85,85,230,174,49,86,38,236,214,213,252,69,113,172,195,20,50,44,80,195,9,44,177,192,155,23,39,185,247,172,142,56,231,245,169,119,133,221,219,34,162,251,221,170,196,199,54,78,223,165,44,45,229,204,
173,212,43,3,138,23,229,247,20,232,100,242,228,87,198,118,144,113,235,131,64,45,207,74,186,241,116,45,169,64,144,125,185,132,151,34,234,88,29,112,81,66,127,171,3,184,53,143,170,74,151,94,32,181,153,0,
80,218,124,39,104,254,28,140,226,175,77,172,248,114,111,17,38,189,246,219,196,155,112,148,219,121,124,2,23,27,115,233,218,171,220,220,219,93,106,182,236,23,202,150,91,88,156,12,241,183,109,103,65,90,162,
39,16,255,0,117,43,26,165,64,211,71,169,25,174,97,27,254,39,182,71,191,156,185,252,235,172,153,130,216,182,113,180,10,226,163,159,254,39,246,131,63,242,217,127,152,175,82,180,215,35,71,133,132,139,246,
168,146,211,84,191,183,184,138,194,84,34,41,24,188,71,36,21,28,231,240,60,215,58,163,204,231,21,216,90,248,145,36,212,172,237,35,183,141,202,171,70,204,235,243,2,51,192,62,156,87,35,53,215,219,46,94,79,
45,98,102,57,218,163,138,242,161,230,143,162,99,113,147,197,88,183,136,54,226,220,241,197,71,199,227,86,45,64,89,176,199,25,226,173,179,43,149,27,13,198,59,245,168,111,153,102,184,44,1,224,1,249,10,186,
35,195,176,61,1,197,50,249,99,62,87,150,14,240,9,118,245,57,162,229,33,52,178,109,223,56,234,43,65,167,220,223,225,89,150,236,85,176,77,89,102,33,178,57,20,54,53,169,115,204,109,185,207,4,226,160,149,
189,14,106,13,249,239,147,66,146,198,164,178,141,195,28,231,208,212,119,45,31,217,64,4,249,135,239,103,165,88,184,77,221,14,125,106,181,192,2,54,207,95,165,80,108,65,111,196,131,53,163,180,201,54,51,128,
107,50,220,159,57,7,94,107,86,53,221,59,2,118,243,197,99,51,166,137,177,164,179,181,204,40,0,102,70,0,17,222,189,51,79,142,85,154,54,157,71,151,183,252,230,188,215,67,85,134,240,121,187,176,57,93,191,
222,237,94,149,160,221,27,235,16,175,206,218,242,49,90,52,122,218,180,105,219,221,39,218,6,6,23,156,99,177,172,72,228,50,66,143,253,225,90,22,240,180,122,162,91,229,66,144,115,159,112,106,149,189,169,
183,183,134,57,153,65,217,157,192,240,107,139,151,169,246,92,61,43,84,146,242,24,205,158,252,82,109,227,61,41,172,193,127,149,33,147,21,39,222,92,122,169,102,219,208,154,70,82,153,82,57,29,105,190,102,
49,138,66,199,215,154,98,184,227,156,210,175,56,255,0,26,143,61,63,90,95,50,145,12,147,189,40,7,233,77,13,244,165,45,239,214,168,129,202,198,157,187,25,166,41,207,214,151,113,164,77,193,78,230,228,84,
219,74,140,142,69,69,199,76,211,152,150,199,63,149,4,182,73,223,154,55,109,193,164,80,216,39,249,208,202,59,115,86,102,205,239,13,54,228,212,147,166,235,87,254,134,178,83,229,148,214,167,133,255,0,227,
230,117,254,245,188,131,255,0,29,172,200,206,38,228,83,56,231,241,14,145,89,144,185,60,3,138,129,187,154,154,70,25,224,247,168,91,166,51,82,116,71,98,62,55,41,174,195,226,114,150,177,89,15,123,146,122,
255,0,121,3,127,90,228,50,70,14,58,87,109,241,11,247,158,27,73,57,36,181,187,3,245,133,121,172,234,124,38,216,87,203,141,164,252,207,45,57,20,177,183,174,105,231,253,88,27,123,211,20,28,129,210,184,143,
209,224,205,125,22,66,183,144,146,122,48,175,80,211,230,2,226,225,3,150,195,26,242,189,53,138,220,33,206,0,34,187,203,27,149,77,102,100,118,202,25,6,113,232,122,210,142,225,153,127,187,166,117,67,46,192,
185,192,238,59,213,155,105,36,142,51,24,118,66,6,113,140,103,60,210,41,91,220,176,137,97,0,252,160,116,197,90,188,88,140,104,132,236,61,155,185,174,235,31,9,10,151,208,189,109,107,130,210,191,204,204,
85,121,228,159,255,0,85,122,15,195,189,66,59,107,171,93,164,169,134,101,45,158,138,164,224,159,214,188,254,205,215,11,22,210,193,15,222,207,92,215,67,160,221,21,190,115,27,50,43,38,61,189,127,165,76,93,
157,199,94,30,218,140,169,190,168,250,109,66,187,171,45,211,1,143,225,124,131,248,85,128,229,248,87,222,59,146,71,244,172,189,46,230,59,205,54,218,225,85,148,73,26,183,238,176,59,122,154,188,158,107,46,
24,146,189,152,133,44,63,165,125,12,101,116,153,248,13,72,251,57,184,190,133,133,18,109,226,234,223,96,234,165,139,48,252,42,72,214,225,88,50,12,47,252,244,142,66,223,166,115,250,85,93,141,4,133,188,216,
83,60,16,200,3,31,175,21,42,171,112,232,88,122,148,28,126,149,102,44,147,230,201,18,57,42,122,6,63,47,227,158,149,32,88,213,114,34,25,60,12,55,31,161,197,46,230,97,205,204,168,216,254,224,35,249,209,12,
137,39,12,223,188,28,22,25,231,235,218,130,69,137,121,33,146,53,62,152,39,52,243,111,16,193,72,182,17,252,49,144,180,146,170,178,255,0,174,85,3,251,200,79,242,53,36,114,33,92,124,132,142,205,156,80,33,
166,101,76,141,204,135,209,152,26,86,69,147,1,193,27,186,51,72,66,254,117,97,36,222,160,66,161,79,101,86,11,252,233,60,131,184,228,145,207,42,234,40,17,20,54,108,50,85,36,81,158,71,152,173,248,227,53,
97,80,175,42,202,15,79,159,4,31,195,21,30,209,187,12,204,199,216,115,75,242,199,150,81,38,223,76,3,253,40,2,80,203,183,107,231,25,224,169,227,249,10,111,151,26,177,42,138,199,253,163,200,250,82,134,223,
247,81,164,62,156,84,129,85,176,74,170,251,108,200,252,64,160,147,204,181,141,34,45,95,75,188,176,186,33,237,174,225,120,37,28,156,163,169,83,250,19,95,149,186,207,134,110,124,31,227,45,79,65,189,249,
102,130,89,108,164,56,198,72,36,2,61,137,10,107,245,122,66,1,39,110,241,234,199,250,87,202,127,181,151,192,139,175,16,95,255,0,194,107,161,218,137,46,85,2,223,219,196,185,99,180,97,101,10,57,60,0,15,208,
31,90,227,131,229,122,157,39,196,178,198,98,102,92,96,169,197,70,195,229,53,175,226,11,67,6,165,41,3,111,153,243,129,236,121,197,101,48,198,107,164,204,132,124,189,197,123,223,236,225,15,252,74,117,169,
152,124,173,38,195,248,70,127,248,170,240,140,14,248,175,161,191,103,120,127,226,139,212,228,198,221,215,143,159,251,247,16,254,181,112,38,91,30,145,241,50,19,30,179,20,99,143,46,214,221,127,40,82,184,
134,31,135,53,232,95,22,35,219,226,235,216,250,8,194,39,211,8,163,250,87,2,209,237,221,208,213,35,38,119,203,27,71,225,155,115,142,118,160,254,70,188,210,29,67,201,188,203,125,207,149,155,232,24,19,94,
195,125,26,67,225,11,81,220,36,100,255,0,223,25,254,149,226,115,50,197,116,229,186,20,43,248,226,179,139,189,202,146,229,57,246,93,210,158,121,39,181,59,97,251,189,13,47,152,87,141,163,234,42,72,207,204,
6,221,222,198,181,36,205,154,223,18,110,207,25,174,151,225,168,97,226,75,96,50,2,238,111,76,113,138,231,165,93,211,1,239,197,122,143,193,143,14,203,113,168,221,223,152,183,195,111,32,136,228,116,44,195,
250,3,89,213,183,35,76,210,158,146,77,30,225,225,249,116,251,100,67,169,17,108,87,253,86,240,64,11,211,63,94,123,214,213,215,133,244,103,145,39,138,38,158,225,206,225,35,18,234,15,165,84,188,240,110,175,
171,198,179,194,35,184,87,49,164,200,16,174,197,229,129,38,189,95,194,250,12,122,198,157,246,139,68,145,163,70,49,169,217,203,17,212,215,204,123,39,125,15,114,85,19,73,179,151,181,179,16,90,219,163,74,
20,40,85,25,254,42,242,47,218,19,198,19,248,86,59,109,54,206,52,205,244,50,25,100,126,72,95,187,129,250,215,208,45,164,189,245,244,214,241,88,93,125,166,208,55,222,135,229,39,166,51,219,154,240,79,218,
75,225,39,140,110,150,207,92,159,69,153,172,173,45,229,89,231,137,73,142,48,174,121,62,157,107,76,61,56,206,170,82,232,101,82,110,48,186,62,84,185,203,200,196,247,174,126,235,27,155,3,13,147,205,117,23,
145,237,144,142,226,185,203,174,93,136,25,230,190,154,39,142,204,247,92,254,117,98,194,240,105,226,225,188,149,150,73,34,49,163,48,251,153,35,36,123,227,35,241,169,172,236,133,227,77,186,84,133,98,141,
165,59,143,92,118,30,252,138,166,200,87,60,100,122,213,146,67,36,114,77,190,79,196,226,163,82,65,171,240,255,0,199,188,223,74,161,184,6,62,148,128,177,10,238,207,211,154,218,183,64,177,168,3,142,226,178,
172,163,105,35,148,14,188,86,196,42,2,168,239,244,168,101,151,34,140,53,172,205,142,135,31,165,47,133,225,51,120,134,194,60,101,90,101,221,143,76,213,219,91,22,111,14,221,221,143,186,178,133,252,113,93,
111,192,63,1,220,248,227,226,78,155,167,219,163,72,84,52,206,7,101,31,254,177,89,189,153,73,234,143,169,124,55,166,253,162,210,24,103,43,28,12,152,82,15,204,14,56,2,185,81,165,106,22,30,60,188,189,134,
85,129,226,149,66,175,44,8,32,12,125,66,242,107,232,133,248,121,253,147,107,0,123,41,46,46,34,249,210,56,198,79,214,184,255,0,248,84,126,41,212,180,219,189,83,236,6,11,139,171,189,246,241,119,69,254,34,
125,176,63,74,249,26,148,249,91,72,250,58,21,148,163,118,74,208,218,206,235,50,200,158,115,70,202,157,50,78,58,138,226,180,237,38,226,207,196,112,219,94,51,73,34,193,132,102,57,207,56,235,223,143,231,
95,65,120,119,224,235,120,167,67,176,188,189,180,91,123,184,208,46,7,202,217,7,159,160,36,116,173,153,126,2,195,123,171,69,127,42,48,184,183,220,34,109,192,40,220,49,248,214,180,176,147,168,175,109,14,
121,226,163,6,213,207,201,255,0,27,204,218,151,139,181,139,153,208,60,210,94,72,79,24,224,49,0,126,64,87,62,224,6,198,221,163,167,21,216,124,80,177,143,67,241,142,179,111,230,110,49,95,78,161,135,180,
141,138,227,188,197,145,119,6,200,175,168,135,187,20,143,22,78,237,182,84,190,227,110,58,102,159,28,155,148,30,166,159,60,63,104,86,57,251,160,144,61,106,140,115,20,92,17,90,153,150,89,64,111,78,245,19,
130,120,21,107,75,133,117,9,164,87,200,11,27,191,228,164,212,58,94,175,54,159,33,116,142,57,24,255,0,125,115,138,66,42,50,50,177,102,6,183,252,53,224,187,189,108,172,242,230,218,209,183,98,70,31,123,0,
158,43,167,240,206,124,93,31,145,121,12,65,124,197,109,202,155,126,81,214,189,131,195,30,13,127,19,55,145,10,249,58,125,184,218,88,123,246,30,245,229,98,177,142,156,149,42,107,83,200,196,226,106,123,85,
135,160,175,39,248,28,223,194,13,47,193,154,62,148,46,53,141,35,251,94,247,206,57,18,114,187,71,64,59,87,163,218,234,31,12,245,11,137,210,255,0,194,171,107,4,138,87,116,105,140,126,68,87,101,160,252,53,
209,52,27,52,183,134,205,72,81,146,204,50,73,171,23,126,20,210,238,135,146,108,212,14,196,10,242,42,82,171,57,185,169,189,78,122,217,21,106,211,117,61,171,77,249,179,230,159,27,120,7,195,187,174,46,180,
51,57,182,220,72,183,102,228,12,241,214,188,155,196,26,52,17,233,162,224,219,220,34,171,100,242,51,183,185,175,168,124,109,224,57,52,86,146,230,221,119,90,247,246,21,229,127,20,188,45,105,15,132,127,182,
108,21,188,245,132,195,58,231,140,183,124,125,51,94,158,31,22,160,227,74,166,236,211,219,188,19,142,27,17,123,189,19,60,59,202,211,163,141,101,104,47,132,82,100,35,241,134,199,92,84,137,14,149,37,171,
207,246,123,211,2,144,165,242,49,147,218,174,234,73,113,255,0,8,245,133,204,211,91,200,32,102,43,8,97,184,33,10,7,31,129,162,79,21,91,94,120,78,238,201,237,98,129,226,49,249,97,79,46,196,156,183,185,24,
253,107,221,177,234,167,220,164,178,233,42,160,47,219,16,99,213,105,97,147,77,218,99,91,171,139,97,212,51,174,71,211,138,198,86,222,160,131,237,138,123,97,87,15,192,52,249,17,68,218,228,150,108,214,235,
109,35,79,34,238,105,102,97,180,18,72,192,3,216,15,214,178,154,76,26,148,42,249,223,49,226,152,182,251,155,60,129,218,180,74,200,150,64,169,156,156,117,173,93,55,193,250,182,177,106,215,54,54,50,220,192,
188,52,136,56,7,211,158,245,0,142,53,85,243,56,25,175,102,190,180,185,211,244,151,77,58,232,34,34,239,130,222,32,48,87,60,156,247,56,165,41,242,142,215,60,94,243,79,155,75,145,225,158,38,142,225,126,242,
183,81,82,233,26,60,122,150,166,240,27,157,182,241,163,202,242,170,242,85,70,78,7,173,116,198,214,59,187,228,134,244,25,27,118,17,95,59,142,77,122,14,155,225,95,13,105,182,55,19,203,108,240,72,97,104,
217,201,32,5,35,154,137,85,229,220,165,27,158,71,46,159,165,50,44,154,125,205,195,184,56,104,231,64,50,15,112,69,54,77,20,121,32,164,127,63,83,90,151,90,125,164,58,193,75,71,89,45,183,124,165,125,43,86,
238,209,252,146,81,182,10,198,85,37,115,170,149,52,224,219,56,235,125,29,229,145,129,66,5,83,186,177,123,117,229,27,174,43,182,211,237,157,100,97,187,60,122,85,13,82,213,213,24,134,193,207,241,10,184,
77,220,83,166,149,8,207,171,103,51,107,96,110,48,219,13,92,93,37,178,50,184,24,173,237,46,221,150,17,191,31,123,176,175,68,241,4,122,44,223,11,116,191,179,180,105,171,195,112,68,139,198,74,159,215,222,
148,170,62,107,25,70,11,150,231,139,106,54,13,108,84,149,225,189,42,185,138,63,45,2,231,204,254,42,218,215,35,109,168,11,110,57,173,75,56,108,244,251,40,173,175,44,85,174,110,71,238,157,136,5,123,86,145,
169,166,162,156,87,53,142,83,251,62,118,140,183,148,197,113,184,144,59,85,108,28,251,26,239,52,93,22,242,29,98,38,9,132,82,55,44,131,140,87,51,226,4,130,223,89,188,138,21,81,18,204,225,64,60,1,158,213,
164,101,204,236,67,141,140,164,37,91,167,21,217,223,105,87,114,77,164,95,90,219,189,197,188,150,16,169,146,49,156,48,92,31,200,138,228,138,151,198,6,15,81,83,67,171,222,89,69,229,67,113,44,9,215,106,49,
2,180,213,52,209,155,92,202,204,235,46,38,212,5,171,66,33,103,108,114,187,121,172,61,47,72,191,147,90,181,150,75,89,81,22,85,118,102,82,2,128,114,107,48,234,215,249,200,188,155,62,161,205,58,77,78,250,
104,246,61,204,197,79,7,46,112,125,170,165,41,75,115,26,116,163,79,98,109,46,120,160,241,28,82,200,251,34,243,152,151,244,7,35,250,213,91,237,46,91,9,9,35,120,39,229,145,121,86,29,136,53,27,170,170,140,
125,239,74,234,190,31,232,183,250,213,234,164,83,50,218,231,247,153,229,127,35,92,181,42,70,140,92,229,178,21,90,209,165,7,57,187,36,102,232,62,29,212,181,203,136,35,179,180,146,119,153,182,46,209,198,
115,235,94,207,165,254,198,190,63,213,44,5,217,134,202,221,79,33,38,184,249,191,64,127,157,95,212,238,191,225,31,208,226,181,240,252,11,29,228,78,24,72,138,51,239,138,234,45,245,239,27,107,150,49,73,62,
163,118,164,160,249,124,214,3,242,175,158,169,142,196,214,74,116,34,146,243,62,94,120,204,126,41,123,76,36,82,143,158,231,144,248,187,246,125,241,159,131,203,61,222,153,246,136,112,79,153,106,194,65,192,
252,255,0,74,242,185,21,132,204,187,72,35,130,164,114,43,234,198,214,124,85,163,198,94,89,102,184,141,115,149,47,188,31,206,188,219,196,154,46,157,227,24,37,190,181,129,108,117,98,236,90,50,54,137,79,
248,215,70,27,27,90,246,196,70,203,186,59,48,184,188,92,37,108,100,44,187,175,212,241,144,196,99,35,4,15,74,122,18,196,83,175,173,37,178,187,146,25,99,104,221,78,210,26,136,98,220,71,122,246,175,165,209,
244,80,119,216,80,188,241,74,208,156,16,5,90,75,83,158,15,53,42,219,130,57,206,106,57,142,149,19,50,22,85,145,131,32,96,61,170,189,241,79,37,194,174,222,253,106,121,151,100,206,58,85,123,165,221,19,119,
226,181,137,12,204,141,182,186,178,142,65,206,43,118,63,222,68,146,176,219,184,231,21,137,26,141,195,181,118,215,126,29,123,75,123,69,7,32,194,172,113,207,36,103,21,157,73,36,117,225,226,228,216,186,60,
109,37,194,42,170,184,126,50,123,87,170,104,22,45,166,218,203,18,69,188,206,20,51,14,118,227,210,184,47,8,219,159,237,40,33,144,98,45,224,182,225,210,189,218,109,6,207,71,177,51,253,186,51,16,97,142,121,
42,107,231,49,213,156,90,73,31,67,74,143,50,186,56,43,171,75,181,190,150,73,211,112,242,91,50,15,247,77,114,250,60,197,180,155,98,78,126,95,175,122,244,127,18,120,243,195,218,109,175,151,103,110,110,110,
12,76,142,237,211,36,17,154,243,93,5,71,246,29,174,56,224,143,214,162,140,167,58,124,210,141,143,165,201,146,134,43,149,62,140,182,205,212,210,100,228,250,208,194,144,54,59,226,153,247,12,82,221,179,73,
230,123,82,54,51,199,20,96,50,156,211,36,120,110,248,167,47,92,154,141,112,58,31,206,158,173,142,148,16,217,42,182,15,94,180,126,148,213,61,5,45,52,64,236,227,20,253,221,125,41,203,28,70,21,33,137,144,
182,10,251,84,120,237,200,170,32,118,125,105,119,15,198,147,210,156,160,110,169,41,18,169,59,61,169,255,0,43,96,1,200,28,243,72,188,130,105,202,187,152,102,152,172,109,248,71,157,97,87,168,104,220,127,
227,166,178,192,31,104,111,76,214,207,130,85,79,136,109,21,142,3,18,188,123,169,21,145,50,236,188,144,14,129,136,253,104,57,38,189,225,143,247,152,116,166,50,227,233,82,201,195,122,84,108,127,42,147,120,
236,68,216,56,239,235,93,183,140,157,166,240,108,106,121,85,134,213,184,255,0,112,3,252,171,136,108,140,215,121,170,249,83,120,31,247,187,142,235,24,8,219,216,135,97,159,200,26,82,216,41,190,92,85,39,
230,121,71,222,108,2,113,87,99,211,36,144,70,21,149,165,147,27,98,7,230,57,233,85,14,57,249,115,216,115,210,150,25,158,9,150,72,221,150,69,228,55,127,173,113,31,163,171,150,236,56,149,121,239,93,137,82,
218,240,85,35,205,149,148,109,207,168,28,159,199,53,198,218,16,172,184,235,154,217,214,231,123,125,77,154,50,119,249,81,182,71,174,209,74,63,16,179,71,108,42,126,103,171,67,27,152,214,57,221,17,227,227,
239,84,23,82,36,202,88,204,136,201,38,20,147,94,99,117,226,75,189,67,200,63,234,217,35,8,78,73,47,201,57,63,231,181,70,151,183,77,140,185,56,24,230,186,37,62,135,200,81,160,183,114,61,182,207,82,141,162,
72,67,168,10,56,98,121,63,231,21,169,99,170,65,5,228,72,36,87,57,32,144,120,233,94,17,13,245,211,96,153,73,53,183,163,222,92,172,170,68,135,118,122,214,78,108,244,97,133,139,215,152,251,155,225,174,165,
13,247,131,236,219,35,114,150,139,44,11,14,15,248,17,93,86,243,184,9,28,40,255,0,166,107,184,31,194,188,223,224,42,201,31,128,82,86,44,12,151,14,67,100,224,174,20,127,48,107,209,252,228,101,230,63,248,
23,111,229,95,71,135,119,165,22,207,231,204,218,17,167,143,173,24,237,204,201,21,146,33,140,133,244,224,130,63,3,78,249,219,37,14,15,117,116,193,250,245,168,173,167,73,139,47,158,138,195,190,51,143,194,
172,199,133,192,105,227,144,250,133,199,233,93,39,140,62,59,137,163,96,48,58,125,215,24,169,30,225,164,251,199,99,122,170,134,3,243,230,160,104,155,105,49,162,76,58,253,63,58,122,176,81,200,10,221,213,
9,36,254,20,8,157,100,149,122,76,138,199,251,203,140,254,148,166,29,173,149,157,75,30,159,47,63,202,163,31,119,228,70,207,247,89,51,138,85,153,145,112,251,128,238,191,116,138,9,36,223,180,101,216,110,
238,23,189,46,233,38,81,251,204,1,235,140,212,126,100,113,168,101,14,202,123,200,237,159,165,34,236,220,115,12,209,103,187,156,126,92,115,64,201,188,167,108,31,48,41,29,200,81,159,235,82,198,178,183,40,
84,123,231,255,0,173,77,142,29,223,193,242,255,0,121,142,105,198,205,195,100,3,34,246,206,48,159,142,104,16,131,184,44,172,71,167,106,118,237,185,101,64,61,65,226,164,92,62,21,209,24,244,207,25,63,141,
42,194,209,225,182,176,0,240,75,41,31,150,57,160,147,130,111,151,238,238,70,245,170,210,40,110,172,216,246,29,106,89,25,49,147,251,207,124,19,81,237,92,112,51,254,247,6,184,25,212,124,51,251,109,120,34,
45,15,198,154,110,177,107,2,67,109,168,219,124,222,90,96,121,168,112,223,161,67,248,154,249,157,253,48,107,244,39,246,190,240,127,252,36,159,10,166,190,137,11,92,105,51,45,192,227,39,203,63,43,143,213,
79,252,6,191,62,100,93,174,115,154,222,155,208,137,16,21,207,106,250,91,246,121,183,39,225,252,199,104,195,221,62,125,198,99,31,210,190,108,218,67,123,215,214,63,179,189,161,255,0,132,7,72,140,115,246,
155,166,7,254,255,0,227,255,0,101,174,136,153,72,234,62,40,169,151,198,154,185,61,167,101,252,142,43,130,146,17,157,163,32,158,43,191,248,139,25,147,197,122,171,16,126,107,169,79,254,62,71,244,174,61,
109,183,220,70,152,228,184,31,153,161,18,245,61,15,196,31,185,240,212,35,57,196,67,244,141,171,194,245,4,27,142,211,200,21,238,126,46,95,47,73,100,254,21,70,28,127,186,69,120,142,162,135,204,63,46,70,
122,84,211,28,217,140,176,151,92,145,199,173,75,9,91,121,3,176,207,4,142,61,170,211,34,172,37,8,62,102,50,8,206,48,113,197,82,212,16,199,110,135,4,2,127,1,237,91,153,21,172,230,85,190,73,26,37,149,84,
231,99,116,53,246,215,236,223,113,166,248,23,195,12,151,22,208,205,115,127,59,220,72,37,64,219,80,240,188,31,97,250,215,203,127,2,188,17,111,241,7,226,150,129,163,93,203,228,88,205,54,251,153,113,157,
177,162,151,111,204,46,62,164,87,232,198,155,240,83,225,246,244,63,218,19,29,163,25,103,237,92,181,172,213,141,169,247,49,188,65,227,255,0,12,223,105,111,98,44,215,247,146,111,85,132,237,98,196,146,73,
62,157,107,175,248,99,105,119,103,34,94,64,182,201,165,134,27,35,192,46,249,4,227,219,6,173,105,159,13,254,31,233,183,43,40,152,59,71,202,179,224,143,202,186,203,31,248,69,52,248,201,134,241,98,24,3,228,
80,189,62,130,184,61,147,110,232,233,231,210,204,226,173,252,117,172,222,234,247,123,252,58,214,150,243,190,244,184,98,163,142,0,118,7,175,202,58,15,90,230,255,0,107,15,140,182,26,31,193,93,79,75,89,85,
245,61,85,69,162,129,208,166,65,145,128,250,113,255,0,2,21,234,90,182,165,225,70,136,180,186,140,167,0,225,84,158,79,229,95,156,223,181,111,141,45,117,255,0,139,218,149,150,159,117,37,214,145,166,194,
45,96,15,199,206,0,50,28,123,190,71,208,10,170,52,189,156,157,186,133,73,41,219,77,143,6,191,112,210,177,3,3,53,205,92,97,137,236,9,205,116,183,19,15,42,80,35,3,119,169,231,138,231,36,66,126,99,206,79,
106,244,226,114,178,145,197,71,184,237,96,15,25,205,88,104,216,156,116,168,90,50,173,237,90,18,79,103,24,120,228,95,81,84,228,179,149,95,27,73,173,59,28,108,56,21,107,27,71,53,23,29,174,85,211,237,254,
207,9,45,247,216,242,43,66,222,49,36,138,185,198,78,42,180,145,152,219,175,24,205,94,209,66,54,161,109,230,31,144,200,160,159,108,212,178,145,185,167,234,66,211,68,150,213,128,104,218,109,193,15,118,198,
7,242,175,163,191,100,29,60,248,86,107,207,20,203,7,152,243,70,109,160,29,241,144,73,252,255,0,149,124,191,124,193,110,35,64,14,207,49,155,31,142,63,165,126,151,252,25,213,60,51,225,95,134,94,27,211,63,
177,149,174,237,109,163,243,223,96,37,228,35,44,79,227,154,229,175,53,24,219,185,172,34,228,207,68,240,191,138,37,214,188,169,167,128,194,210,12,109,110,181,218,220,73,113,102,178,221,70,26,72,217,64,
255,0,115,232,43,22,195,226,23,134,149,150,65,167,8,159,24,24,81,90,139,241,75,68,251,134,23,198,112,70,208,107,133,209,133,69,172,141,84,165,23,177,165,164,235,147,71,167,166,109,194,54,11,124,199,212,
231,165,113,191,18,254,57,65,240,251,193,26,222,177,60,106,102,179,130,70,140,31,186,95,24,65,255,0,125,98,183,166,248,141,225,213,228,91,22,220,57,253,216,21,242,175,237,213,241,67,71,184,248,90,154,
62,155,97,228,221,223,95,43,201,49,0,126,237,1,56,252,88,175,229,93,116,151,34,80,82,51,150,174,246,63,63,188,73,171,77,171,94,73,115,60,134,73,100,118,118,99,212,146,114,77,84,181,5,161,92,138,130,117,
223,147,250,86,150,159,166,220,92,89,163,197,19,63,36,100,10,237,49,34,69,149,165,81,14,51,207,90,139,80,142,229,85,124,200,227,92,231,27,106,197,198,155,114,183,8,155,76,110,65,198,238,62,180,205,70,
209,237,98,183,89,36,27,182,158,51,158,249,166,72,190,27,141,252,235,146,71,31,103,151,255,0,64,53,123,194,26,102,170,201,36,246,118,208,188,108,118,238,156,14,222,148,223,11,178,199,121,59,145,189,35,
182,149,216,122,128,189,43,179,209,150,61,97,109,174,172,174,214,24,22,19,17,181,232,17,136,198,106,91,3,71,194,126,119,250,76,151,2,49,48,109,135,202,31,40,199,97,95,83,124,56,208,163,211,252,51,100,
8,27,229,79,57,184,234,79,53,242,94,136,210,104,90,77,196,108,68,178,194,229,73,83,145,158,57,175,175,62,28,235,49,107,62,17,211,110,161,144,50,152,85,78,61,64,193,175,156,113,126,218,83,103,159,151,211,
255,0,106,171,82,70,244,241,227,229,3,53,88,219,98,64,64,199,174,107,70,54,89,0,199,90,108,209,225,193,254,26,220,250,83,154,214,52,244,190,183,184,130,65,149,100,32,138,249,179,197,17,133,209,117,157,
61,249,143,107,140,31,80,107,234,13,122,234,29,62,206,91,137,8,85,85,57,53,242,127,138,53,3,112,186,139,167,42,219,143,231,92,85,227,205,40,219,185,242,121,228,35,55,77,117,185,243,60,249,181,185,144,
30,118,146,188,243,237,85,36,137,227,147,18,43,70,255,0,221,97,131,205,118,62,33,180,134,72,225,145,98,11,127,110,202,76,123,114,37,82,73,201,250,127,35,88,222,38,190,185,214,53,39,190,187,183,16,75,46,
1,85,4,12,0,7,127,165,125,148,90,105,29,177,78,197,27,61,187,148,59,109,25,171,23,12,134,235,114,157,209,122,213,104,99,28,30,181,58,71,201,192,170,52,34,72,191,121,187,244,167,179,44,107,147,78,50,8,
148,147,215,181,66,182,243,223,206,177,195,27,77,43,28,42,32,201,161,1,20,238,124,206,14,236,247,173,237,39,198,154,174,155,104,45,98,184,6,36,251,187,212,49,30,217,61,169,182,222,11,187,186,177,123,135,
100,136,198,121,86,56,199,183,215,138,175,125,225,185,116,251,100,185,50,171,171,0,113,143,90,221,210,109,106,140,213,68,54,93,82,91,139,198,185,146,66,211,179,110,223,223,57,173,237,15,83,188,212,164,
158,209,231,146,111,54,222,64,177,179,117,59,114,63,149,98,183,135,239,160,182,75,135,183,127,32,224,249,128,101,70,72,3,63,137,20,223,178,92,90,221,5,77,201,34,252,223,41,230,167,145,246,43,152,212,211,
244,123,231,115,50,91,48,8,121,47,242,255,0,58,221,154,29,69,99,2,75,117,39,29,153,127,198,185,107,133,188,154,28,207,44,204,131,179,185,53,44,182,215,75,111,19,22,99,184,100,100,214,114,162,228,245,70,
177,172,227,27,39,163,54,163,143,82,89,11,164,11,211,251,194,171,220,105,58,173,230,71,217,198,15,39,231,21,127,80,178,242,236,181,25,174,45,227,130,217,66,253,150,68,60,150,36,96,117,244,205,94,191,179,
211,238,180,45,77,173,100,141,76,54,233,36,104,165,132,168,217,25,221,235,156,154,198,201,50,249,219,138,143,67,159,143,65,214,237,190,229,185,101,255,0,124,82,92,218,235,43,27,51,89,57,85,28,133,32,255,
0,42,196,109,66,84,183,17,23,109,153,206,119,28,213,79,237,11,155,121,67,195,60,177,176,60,21,115,197,57,83,79,82,84,154,208,191,173,90,220,141,53,111,39,141,237,155,206,17,170,200,184,39,229,206,71,233,
88,141,121,53,195,161,146,86,118,94,20,177,206,43,82,206,199,86,241,125,215,144,143,37,219,198,187,191,122,252,32,238,115,218,180,151,225,174,179,30,88,253,156,133,25,255,0,94,189,41,171,71,70,13,185,
20,95,198,26,156,150,162,211,207,196,104,187,119,40,249,136,247,53,138,192,178,147,239,93,61,191,128,117,71,6,80,176,237,206,63,215,46,105,27,192,122,168,96,130,21,98,79,240,184,38,151,61,56,106,221,133,
203,41,28,194,203,180,142,122,116,162,66,93,183,55,225,91,247,190,5,213,109,102,41,229,43,113,235,85,164,240,158,165,13,172,147,53,185,49,198,50,251,88,18,0,239,138,168,213,132,190,22,14,18,142,173,25,
42,225,115,129,214,159,181,152,122,14,198,163,219,206,42,212,43,36,202,200,136,205,198,112,163,53,163,50,42,219,169,154,84,80,50,196,224,87,182,248,3,77,93,23,195,170,192,126,242,97,147,94,59,167,219,
180,115,163,21,32,238,199,34,189,199,74,35,251,34,205,58,12,168,53,224,230,109,202,49,135,118,124,238,107,121,70,48,232,217,232,94,21,209,226,138,21,185,153,119,75,39,35,60,226,186,232,99,29,58,10,165,
105,18,197,111,10,143,186,20,127,42,177,27,109,247,20,233,211,81,130,138,62,159,13,74,52,105,168,69,18,181,186,178,144,70,126,181,230,159,17,188,11,230,68,117,29,63,247,23,17,157,204,171,192,35,215,235,
94,165,142,5,80,212,227,87,182,145,24,100,21,63,202,180,183,67,90,176,85,34,211,62,104,248,137,164,37,245,140,58,138,32,243,212,109,148,168,235,239,92,20,41,133,207,2,186,253,87,94,188,183,184,188,136,
50,188,75,43,198,99,35,60,2,64,174,43,237,200,24,131,199,62,149,211,134,132,161,14,89,51,201,193,211,149,40,184,77,236,93,89,182,226,164,142,97,186,169,172,139,32,4,17,72,199,110,78,121,197,116,88,245,
10,247,57,146,230,77,189,207,106,133,211,247,100,21,233,237,90,254,24,188,181,181,213,25,239,35,243,96,42,65,24,206,15,99,91,250,182,169,161,92,216,203,20,16,8,220,143,149,177,210,181,90,34,119,56,9,16,
6,4,46,15,173,119,243,206,183,16,192,202,132,58,198,187,155,215,129,92,45,194,142,213,213,232,218,180,87,240,152,140,101,38,138,48,67,14,132,12,10,229,173,125,25,221,135,105,59,22,35,47,20,190,98,187,
41,206,73,83,138,233,188,69,227,163,226,43,197,50,66,176,198,176,44,68,70,79,204,84,99,39,222,185,244,144,199,32,33,119,159,76,84,18,89,134,87,99,242,144,9,233,210,184,218,82,220,247,41,185,69,93,2,40,
145,28,146,192,128,113,159,165,109,248,54,206,93,75,73,134,24,176,95,46,126,99,140,226,184,232,181,216,99,99,149,118,4,99,154,233,188,35,35,127,99,169,4,140,59,116,172,234,197,198,7,183,146,212,82,198,
89,118,102,166,209,184,238,166,40,39,138,145,99,121,36,194,134,44,120,3,29,105,187,74,228,17,131,222,184,15,208,134,109,25,205,11,233,142,105,118,252,195,35,30,244,0,67,113,214,129,10,170,205,253,41,251,
74,183,60,17,72,153,82,48,121,169,25,79,205,187,147,76,134,32,27,128,167,46,230,224,12,211,115,75,150,7,174,41,144,57,88,169,207,67,75,156,245,252,77,48,30,188,230,156,59,118,160,145,202,54,227,214,166,
85,85,227,189,69,129,192,237,83,100,117,29,42,75,67,213,187,83,133,34,129,128,123,211,177,218,128,54,252,32,254,95,136,244,246,244,153,127,157,84,213,128,93,90,229,64,225,100,96,63,58,52,73,60,157,90,
209,254,238,217,84,231,241,169,53,181,198,177,116,122,143,53,191,153,170,71,52,227,239,92,173,42,126,120,206,42,169,207,106,179,47,81,233,138,133,144,242,64,36,1,147,72,210,59,17,52,46,98,103,218,74,3,
180,183,161,63,254,170,237,238,25,191,225,3,200,193,221,166,148,57,237,251,231,21,196,60,143,229,152,195,48,76,231,111,108,215,109,28,126,119,195,176,122,145,109,50,159,194,66,127,173,68,182,33,187,86,
164,255,0,188,143,42,92,175,189,11,86,45,180,219,155,165,221,28,123,129,39,184,21,50,232,247,139,147,246,118,108,113,199,53,201,99,244,136,202,55,213,133,169,27,151,215,53,177,172,169,251,84,108,7,13,
108,135,244,199,244,172,203,91,27,143,59,111,145,38,115,140,109,53,208,235,214,114,195,107,109,44,137,180,125,155,28,251,19,197,20,254,35,159,57,146,88,11,174,232,229,227,184,249,186,241,237,87,97,152,
241,206,43,34,31,155,191,53,163,15,24,235,248,215,91,137,249,245,42,210,110,198,173,171,30,13,116,186,12,13,113,113,26,40,57,39,143,127,106,230,108,215,45,200,227,181,122,231,192,255,0,14,13,123,198,218,
92,50,2,97,73,4,178,255,0,186,191,49,29,61,191,90,193,198,242,73,30,207,214,62,175,66,117,101,178,87,62,185,240,94,131,31,135,124,51,166,105,228,54,248,33,80,236,153,24,114,50,223,248,241,53,209,70,210,
198,192,137,157,189,119,17,85,35,133,6,24,75,60,184,228,141,227,63,203,159,210,158,179,21,109,188,237,235,130,0,254,102,190,146,17,229,138,71,243,237,106,146,173,82,85,37,187,119,46,73,51,202,167,116,
132,227,248,115,200,252,169,143,181,84,102,48,65,235,184,211,252,246,200,218,155,40,86,104,200,7,104,250,138,212,230,22,61,145,140,164,49,125,114,84,254,30,181,46,242,123,185,231,133,207,221,254,85,26,
200,156,144,88,14,251,65,254,148,240,84,110,27,113,143,175,62,244,0,190,100,155,177,177,164,199,101,32,230,164,85,14,216,202,198,221,183,68,172,65,244,166,70,207,39,25,62,131,0,102,157,133,95,149,211,
231,250,100,159,202,130,73,227,91,136,212,182,242,169,232,163,35,242,60,15,198,148,62,220,1,181,80,244,43,183,7,240,29,41,145,137,145,131,51,44,121,24,251,163,31,149,18,71,19,115,42,66,73,254,35,24,31,
203,143,210,128,36,42,159,242,212,148,246,200,207,229,70,228,98,66,133,39,174,89,177,81,194,169,31,1,213,207,96,57,31,78,69,75,185,228,225,147,96,237,183,105,63,142,69,0,61,84,112,205,229,143,112,73,160,
121,124,226,77,223,246,204,227,249,82,121,111,184,229,138,183,124,147,253,13,30,95,151,203,74,199,208,146,184,254,84,8,225,202,54,239,186,14,122,101,134,7,189,65,36,98,62,100,17,183,177,171,50,182,239,
149,165,219,158,195,63,225,80,27,119,31,54,240,71,185,174,19,161,24,158,39,208,225,241,46,131,168,233,115,4,48,94,219,201,110,197,121,32,50,149,207,225,159,210,191,44,60,69,164,201,162,235,23,214,51,174,
201,173,166,120,93,79,80,202,72,35,243,6,191,89,36,235,243,62,15,181,126,125,254,214,222,7,151,195,63,21,47,175,86,6,75,45,80,11,184,159,28,22,35,18,15,174,236,159,198,170,155,212,30,199,133,109,59,176,
107,236,95,217,210,220,255,0,194,35,225,32,7,222,185,95,214,225,171,227,185,20,166,48,50,107,238,159,217,207,195,210,183,130,252,25,54,6,25,97,155,240,45,188,255,0,58,236,217,92,193,234,236,69,227,133,
18,107,247,13,221,228,149,143,253,254,122,229,97,183,63,218,150,160,15,249,106,191,206,189,27,92,240,110,161,171,73,13,228,17,239,70,14,51,158,115,230,57,254,181,137,255,0,8,189,253,149,244,47,113,108,
241,133,144,13,196,113,89,243,45,135,202,203,62,44,144,166,159,38,84,18,202,220,87,144,73,124,154,14,174,100,184,183,89,218,61,201,229,231,128,196,16,15,225,94,193,227,72,88,233,46,71,28,99,249,87,142,
234,122,61,213,196,66,101,65,229,183,152,68,140,216,7,98,134,111,199,4,126,117,84,200,154,212,191,107,227,203,120,101,223,38,145,1,76,97,64,29,56,172,127,27,248,190,45,115,78,179,182,183,178,22,171,11,
180,142,195,7,115,16,7,248,214,51,176,42,23,39,119,124,246,170,119,13,251,150,25,235,235,91,166,103,99,216,127,100,246,11,241,6,246,102,92,152,244,233,8,246,38,72,134,127,34,107,236,27,13,71,49,55,206,
115,158,57,233,95,26,126,202,247,16,47,196,57,237,102,148,64,183,54,50,32,115,236,232,223,201,77,125,145,164,217,233,203,3,135,189,66,67,145,156,245,21,243,248,234,211,167,86,209,87,61,108,61,56,202,23,
108,185,111,121,242,226,67,243,116,36,84,226,245,49,157,223,173,17,217,233,164,127,199,220,120,255,0,124,84,83,219,105,145,32,45,168,64,171,223,50,10,243,126,181,87,249,89,211,236,161,220,175,113,115,
11,3,243,238,57,224,154,252,242,241,198,161,253,165,241,11,95,184,98,79,155,117,59,243,238,196,226,190,254,189,185,209,45,97,46,250,156,18,96,231,10,227,4,102,190,7,248,141,101,29,159,196,207,17,71,1,
83,109,246,185,204,68,116,216,88,149,253,8,175,71,1,90,85,38,212,149,142,124,69,53,24,171,51,152,153,247,43,10,195,147,42,204,7,74,220,96,57,207,6,177,174,7,239,159,28,243,94,244,79,53,149,153,15,29,129,
28,84,51,47,203,234,106,220,241,200,54,238,5,114,50,51,85,154,19,187,138,104,68,105,112,241,224,39,74,147,237,147,100,140,143,196,85,195,163,205,28,49,187,109,85,111,152,28,231,52,207,236,198,228,151,
253,42,64,172,110,101,147,229,99,91,22,63,187,104,126,92,242,42,154,105,188,231,127,228,43,66,220,21,145,7,184,164,246,26,39,153,247,106,80,40,24,249,130,243,254,245,126,135,120,110,246,56,180,187,117,
69,249,150,53,4,227,146,112,57,175,206,251,248,218,59,232,228,28,29,217,7,232,107,238,47,3,252,64,208,100,209,244,249,37,152,172,173,18,150,201,24,233,94,30,101,42,177,81,116,213,207,83,7,24,73,62,102,
122,109,181,236,146,49,24,192,2,165,254,208,145,114,10,244,170,186,95,141,188,57,118,167,247,200,6,49,193,21,118,63,17,248,121,185,251,74,47,160,175,41,84,175,111,132,236,113,167,114,19,170,50,131,149,
38,190,88,253,176,181,73,38,147,74,128,100,70,170,207,248,146,7,244,175,171,38,241,54,131,142,39,141,184,175,152,127,107,104,236,53,75,61,50,238,206,111,49,149,228,141,177,248,17,253,107,175,9,82,179,
172,148,213,145,141,104,67,145,180,124,171,8,38,78,70,120,205,116,250,79,138,165,210,236,86,221,33,86,81,252,71,173,98,75,108,96,134,18,70,9,207,229,66,166,236,145,198,43,233,174,120,205,22,60,73,174,
75,171,73,4,229,124,179,18,237,1,79,190,107,159,145,218,102,203,182,79,185,171,215,140,118,5,239,156,214,119,32,159,76,226,153,38,247,135,100,88,98,212,78,55,31,177,76,63,48,5,98,219,205,44,57,8,239,30,
122,237,98,51,90,250,3,152,237,245,64,71,38,194,95,215,104,172,45,197,79,90,66,59,127,2,234,15,246,137,173,230,98,209,72,50,75,28,215,177,124,63,248,140,62,28,73,21,156,207,36,186,124,173,185,187,136,
248,237,94,7,225,139,200,109,117,40,228,184,102,16,159,149,138,142,87,61,235,122,207,87,146,105,36,140,149,149,164,124,110,110,152,246,175,50,189,23,207,207,29,142,41,83,157,58,158,214,155,62,217,208,
254,33,104,154,212,66,91,91,216,200,60,227,112,169,245,207,29,105,58,77,191,155,113,119,26,168,231,173,124,161,161,218,205,29,156,109,9,242,247,103,238,156,85,205,82,198,238,227,76,154,86,151,127,150,
164,128,237,158,107,203,117,210,159,41,31,218,210,82,228,228,58,159,137,31,27,23,90,243,109,45,65,138,196,156,110,254,39,255,0,235,87,157,222,94,196,182,150,241,7,221,37,215,205,255,0,1,174,114,101,12,
133,136,221,38,62,98,121,63,74,163,111,52,211,95,68,83,230,42,70,61,0,21,222,168,41,53,38,76,233,186,213,21,90,157,11,18,90,137,181,201,165,17,183,149,18,170,190,193,207,61,43,99,85,240,125,158,177,97,
36,83,169,65,229,121,145,200,6,74,30,41,158,19,186,91,185,53,40,146,100,81,36,128,190,64,221,129,211,240,235,90,222,53,241,69,159,135,116,133,119,120,229,153,227,242,227,134,17,128,112,78,1,252,249,53,
219,25,74,233,35,214,132,98,227,118,120,4,59,22,38,37,136,112,70,23,31,92,255,0,74,238,27,64,180,210,99,138,201,236,13,245,243,40,121,101,146,66,170,9,0,133,3,208,122,215,15,28,50,8,140,161,126,77,216,
45,239,94,187,161,252,81,209,162,129,37,212,45,255,0,211,188,189,142,68,65,199,76,100,123,215,101,94,107,46,82,97,102,245,50,116,31,133,246,90,166,160,173,170,94,45,173,179,29,198,24,159,44,7,160,205,
118,222,55,240,151,129,252,27,224,251,75,159,12,165,255,0,246,243,72,98,154,230,105,131,70,99,96,217,227,177,251,163,243,175,38,187,241,224,127,25,67,170,71,110,98,178,129,212,37,184,60,148,25,235,238,
115,93,78,173,241,42,31,21,232,250,149,164,22,38,217,163,135,207,18,51,2,48,174,185,31,173,16,246,145,156,91,216,153,40,184,180,183,49,239,24,174,143,179,36,134,112,79,191,6,159,174,68,139,161,90,229,
55,110,40,63,79,254,181,82,143,86,180,184,210,99,73,31,18,171,142,59,244,53,161,226,13,66,211,251,26,212,71,34,187,43,46,113,233,142,181,237,123,69,41,55,228,112,123,54,161,21,230,202,158,32,184,101,184,
211,224,220,226,18,224,121,121,227,239,46,56,167,71,28,114,107,206,25,122,39,31,144,172,253,83,196,54,55,154,149,155,199,157,177,176,220,91,183,204,13,89,26,245,135,246,179,205,230,168,143,110,1,207,181,
63,104,156,254,97,24,181,23,232,105,234,22,169,246,80,168,185,44,71,20,137,10,53,128,87,24,59,112,61,170,43,141,106,214,226,220,60,19,43,108,35,59,77,93,91,235,115,106,178,23,92,5,201,233,91,41,167,89,
191,35,39,22,168,37,230,101,233,250,78,173,226,134,109,34,201,129,13,251,210,36,56,24,24,224,126,149,107,90,208,60,89,103,96,208,77,9,123,124,8,228,104,83,230,32,116,201,29,69,71,161,248,178,13,6,222,
93,74,72,36,148,52,230,8,140,103,24,194,134,63,204,85,111,16,124,88,212,111,175,162,150,194,105,237,33,11,135,140,190,237,231,53,227,215,110,85,31,34,208,244,168,164,160,185,222,164,112,232,176,126,226,
41,237,36,65,40,43,188,228,48,32,87,45,169,89,181,133,244,246,204,193,204,108,87,114,244,56,239,94,197,165,124,87,209,102,208,196,55,150,191,104,184,85,12,170,99,249,139,224,242,91,241,175,44,241,100,
23,80,235,183,6,238,37,130,105,74,205,181,122,109,117,12,184,246,193,21,149,57,73,189,75,156,82,87,69,207,9,198,235,164,248,167,99,97,191,179,183,100,18,58,74,153,254,117,165,160,232,54,214,22,150,179,
222,36,151,119,23,73,230,36,74,229,85,16,240,55,122,147,89,222,16,145,161,176,241,48,207,93,55,191,253,118,138,181,116,63,23,67,21,188,81,222,34,143,179,196,177,41,199,222,0,156,127,58,202,191,50,77,196,
214,138,139,146,82,53,44,188,35,2,221,53,206,214,8,199,114,195,146,66,215,89,101,97,59,109,242,227,242,148,112,25,184,168,180,79,25,88,92,121,113,71,18,188,143,247,21,57,39,218,161,241,7,138,174,191,179,
47,39,181,143,202,75,105,60,153,1,225,131,28,113,250,215,205,77,87,173,59,52,123,74,52,169,171,220,93,94,107,109,55,230,189,157,90,70,56,10,167,129,245,174,10,70,184,255,0,132,210,123,121,14,197,88,165,
80,16,156,50,152,152,243,86,90,251,76,212,182,205,115,126,241,147,204,145,180,101,155,61,192,61,57,170,154,78,161,253,179,227,135,184,9,229,172,136,225,84,246,2,38,81,154,246,112,184,119,79,86,121,184,
154,170,105,40,156,74,67,190,69,92,253,227,138,247,141,47,192,107,163,120,98,224,219,68,179,20,76,207,112,113,145,159,215,21,225,219,86,57,21,134,56,230,190,134,240,223,136,52,191,17,105,50,220,43,190,
217,19,108,144,169,229,91,251,164,127,90,237,196,74,74,42,199,21,56,169,61,79,40,123,24,100,211,110,238,15,50,71,113,128,71,160,32,127,90,218,209,53,41,38,99,19,204,54,5,202,45,97,120,130,87,211,175,181,
11,85,86,88,36,147,114,171,14,199,159,243,244,163,65,154,38,185,88,174,24,162,55,70,7,4,87,37,88,115,194,231,149,140,164,165,22,125,19,225,15,16,199,169,233,112,171,176,243,163,27,92,103,242,53,210,198,
187,185,81,144,43,231,141,99,86,187,208,110,21,244,183,99,133,4,145,207,21,220,120,71,226,212,147,233,106,111,34,204,160,237,37,107,58,114,247,19,145,174,31,20,149,36,234,187,30,187,12,161,80,228,214,
31,138,53,68,211,180,187,135,103,1,182,156,125,107,149,212,190,44,89,89,219,163,121,100,19,242,244,175,58,241,55,141,175,53,221,66,36,66,26,218,67,247,20,244,207,122,28,175,172,77,106,99,34,225,251,189,
89,203,93,219,173,158,159,121,113,112,170,243,57,102,45,238,77,121,196,217,220,77,122,15,142,111,162,134,20,177,138,64,242,103,50,96,244,174,1,241,147,218,187,176,202,78,60,210,234,114,225,84,249,92,167,
187,44,199,159,236,150,144,31,187,48,25,250,173,82,91,151,220,114,217,21,114,60,157,30,227,209,102,67,159,193,170,8,99,89,48,63,136,156,10,233,61,2,91,21,253,235,145,200,197,88,147,59,6,120,166,219,219,
181,189,196,176,184,195,1,82,178,254,233,129,31,141,61,11,69,88,212,52,129,79,35,56,174,193,116,88,116,221,98,49,110,178,34,79,108,31,18,14,135,184,7,191,74,227,190,85,96,73,193,21,221,104,186,135,246,
228,48,66,159,235,99,5,79,174,49,235,92,181,175,186,59,176,246,190,162,202,86,63,186,67,158,227,184,166,201,51,253,157,254,66,119,41,201,63,74,185,61,140,26,81,243,101,184,141,88,242,3,30,181,89,163,146,
79,153,92,52,45,211,29,49,92,54,177,238,198,73,171,28,149,245,154,199,165,69,34,35,0,205,247,152,99,240,174,187,193,159,54,135,158,226,67,92,182,189,169,173,204,198,222,22,205,188,92,99,177,34,187,47,
135,243,91,65,165,202,102,136,206,161,184,80,113,206,43,76,69,253,149,206,204,141,242,227,236,181,209,155,86,216,133,146,102,56,42,114,6,58,154,173,35,25,36,119,97,203,28,159,173,77,113,33,153,183,5,216,
189,148,118,168,191,135,29,107,201,63,79,68,183,23,198,75,24,237,124,164,2,54,46,36,199,205,207,111,165,84,0,169,247,246,169,8,30,152,197,28,47,108,80,3,0,252,13,62,50,21,193,35,112,233,140,208,216,101,
200,235,73,76,144,85,167,99,29,233,126,156,211,183,18,160,99,165,6,108,141,64,28,15,173,63,111,78,41,118,227,189,61,87,143,173,2,20,124,205,248,212,187,76,108,85,178,172,58,131,218,157,109,33,183,145,
92,0,74,243,134,25,21,107,80,190,151,84,190,158,242,228,134,154,102,46,229,87,3,38,145,69,101,251,185,235,78,227,140,80,184,218,123,83,147,106,228,176,221,199,20,1,98,209,182,92,196,221,112,192,254,181,
123,88,135,254,38,146,111,224,177,221,249,140,255,0,90,205,183,199,154,132,250,138,218,214,102,221,168,51,178,128,85,112,62,184,197,82,49,168,100,74,10,227,154,140,72,84,50,169,225,134,15,189,72,255,0,
194,73,168,100,199,24,252,106,71,13,136,229,1,152,243,94,133,160,133,185,240,12,139,30,50,169,112,167,62,187,65,175,59,111,166,127,10,244,79,7,41,127,1,223,40,251,197,166,0,15,116,20,153,205,89,217,193,
249,163,201,237,47,88,3,11,187,4,207,5,73,226,164,154,107,171,57,2,139,150,117,60,134,12,113,84,19,229,126,6,42,222,12,209,5,234,87,154,227,111,161,250,76,98,175,114,221,174,169,117,230,41,19,48,30,213,
185,226,25,158,77,14,9,93,139,55,148,83,44,123,238,255,0,235,215,55,110,184,112,59,102,182,252,69,38,223,12,216,174,114,90,87,31,128,193,255,0,10,116,190,51,60,230,43,251,58,79,208,231,45,215,185,21,163,
108,165,216,19,199,181,84,181,109,172,50,43,86,213,2,227,119,21,220,207,205,240,235,83,70,198,220,52,131,138,250,147,246,93,240,191,238,117,61,94,88,209,150,48,182,203,230,41,32,231,230,110,157,8,1,121,
247,53,243,78,151,1,154,100,3,145,154,251,135,224,239,135,215,66,240,30,152,128,58,220,76,191,105,112,49,143,155,144,125,71,203,182,150,30,28,213,111,216,199,136,241,63,87,203,253,154,222,122,127,153,
218,47,145,22,223,222,39,150,120,192,227,250,84,191,184,101,202,71,12,170,121,201,228,138,100,115,42,55,207,43,21,61,66,74,115,250,138,155,200,182,108,176,222,160,243,201,239,249,87,186,126,58,58,61,131,
11,228,175,61,12,95,47,232,56,167,180,59,149,128,79,51,190,210,255,0,50,254,20,190,92,64,16,34,85,61,136,36,143,174,42,88,164,59,132,114,189,190,227,209,178,84,211,36,100,114,43,125,225,229,158,251,134,
51,239,239,86,135,152,171,247,93,227,234,10,144,69,59,201,185,92,255,0,171,153,127,135,105,4,143,207,35,244,164,88,206,236,24,194,158,236,163,20,196,53,228,141,112,198,22,80,221,75,14,127,42,124,108,76,
103,100,153,111,238,180,135,244,226,144,92,77,110,202,133,119,3,210,79,36,28,255,0,192,177,74,178,74,188,198,196,15,246,143,242,230,129,4,123,247,17,196,128,244,219,39,63,76,10,85,187,48,124,161,126,97,
213,113,147,74,90,70,111,158,49,159,239,103,57,161,88,171,12,236,71,60,110,45,131,249,119,160,9,55,189,196,96,239,218,122,141,209,12,143,106,79,36,185,97,243,204,7,101,11,254,52,46,229,193,2,38,36,243,
131,215,240,167,252,173,135,17,133,117,227,35,181,4,140,91,50,178,43,40,88,207,126,57,63,90,149,97,1,137,80,119,19,247,139,159,229,77,31,50,236,119,200,235,141,189,41,205,11,245,73,55,140,112,54,2,62,
156,16,104,3,133,120,221,121,219,144,125,243,80,54,238,126,111,199,173,88,102,110,72,98,79,191,21,3,49,97,146,62,134,188,243,168,129,193,110,54,253,78,43,147,241,127,195,253,47,199,218,61,198,153,226,
27,104,245,11,70,114,240,252,187,30,30,56,218,195,156,251,215,89,44,139,156,51,228,250,17,81,72,193,184,220,196,246,2,166,227,62,109,151,246,38,240,147,106,70,99,169,106,73,102,27,34,221,93,58,99,187,
17,158,185,237,222,189,155,192,254,27,181,240,172,122,102,147,102,28,90,89,40,134,29,231,45,177,83,11,147,235,129,93,51,110,199,35,39,235,84,225,157,27,86,183,219,193,218,217,252,141,107,25,73,232,43,
33,44,244,196,179,179,138,21,229,84,30,191,82,127,173,83,215,236,124,251,7,93,155,143,210,182,160,249,212,142,234,106,43,189,190,83,2,122,214,47,114,143,31,241,46,154,215,158,29,184,85,31,48,149,7,30,
225,171,197,190,35,105,115,105,19,91,114,194,7,44,99,193,224,96,13,223,173,125,33,37,152,146,61,70,219,28,149,220,159,80,114,43,205,252,125,225,25,60,81,99,110,176,50,164,240,57,63,49,192,42,71,63,200,
87,68,106,91,115,41,71,152,240,54,221,35,100,142,71,83,85,110,85,15,4,133,57,175,73,151,225,46,169,229,228,73,111,158,128,110,60,246,244,170,19,124,27,213,228,145,115,61,178,241,143,188,127,194,186,21,
72,247,50,112,103,25,160,234,151,58,14,167,13,245,140,198,43,136,78,81,151,233,130,62,152,205,122,4,127,27,181,200,227,145,76,153,98,1,83,206,51,158,114,51,85,237,254,11,234,11,42,135,189,129,78,114,112,
172,120,174,154,15,131,58,101,188,13,37,197,213,205,195,40,57,9,132,28,126,6,179,156,169,201,234,105,21,53,177,203,220,124,106,241,20,195,253,120,11,223,104,35,250,213,70,248,185,174,237,59,103,92,158,
164,174,77,71,98,52,246,142,56,19,68,146,242,227,28,152,229,57,63,134,42,61,82,77,63,75,144,11,143,14,73,19,55,35,204,149,151,63,165,46,88,118,31,52,187,136,223,21,188,65,121,178,15,180,129,185,128,25,
94,43,30,241,174,117,47,17,60,23,50,198,39,118,17,60,171,140,30,71,57,173,86,109,53,116,212,191,254,197,136,68,210,152,128,55,13,158,6,114,120,172,169,117,171,54,63,184,211,18,218,108,229,101,89,89,136,
231,61,234,163,24,173,82,19,147,146,213,148,252,69,162,220,104,26,165,205,149,210,109,154,35,131,233,245,21,205,75,31,57,44,0,39,140,87,105,174,95,234,94,40,188,134,226,237,90,107,153,208,44,108,19,27,
241,252,235,153,184,176,41,49,222,74,246,198,43,84,204,218,35,143,82,143,106,199,58,125,161,23,128,79,4,10,165,48,86,153,218,37,40,185,225,125,43,94,203,65,155,80,243,13,188,47,40,140,101,176,7,2,173,
217,95,218,218,160,69,211,109,228,35,171,200,204,196,254,180,238,59,24,158,100,235,106,6,127,118,62,234,154,137,110,37,219,208,87,77,54,181,4,152,255,0,137,77,152,29,127,139,252,106,38,214,225,206,63,
178,44,199,252,5,191,198,166,227,177,131,28,210,110,1,176,7,124,85,152,219,230,206,51,199,21,166,218,220,69,72,26,85,150,122,231,99,127,141,83,251,64,145,137,216,23,156,225,122,10,46,22,38,183,188,181,
243,211,237,161,158,52,108,144,167,147,237,82,205,226,153,151,247,118,175,36,48,47,221,80,213,155,113,10,77,33,43,242,231,218,146,59,116,87,193,5,169,89,61,198,155,91,26,112,248,187,84,86,5,47,38,143,
217,92,226,173,71,227,173,112,231,23,211,227,253,250,134,223,89,22,170,22,61,58,208,133,233,185,9,254,181,103,254,18,169,149,84,11,11,16,63,235,143,255,0,94,165,197,118,45,74,93,197,143,199,90,234,240,
47,238,7,252,12,213,93,79,196,186,158,167,10,165,213,196,147,32,228,6,57,231,214,182,52,173,70,247,88,184,242,109,180,219,2,251,119,29,209,128,63,157,104,222,91,235,22,118,115,93,62,149,167,249,49,242,
205,180,31,203,154,207,68,246,29,219,234,112,19,72,101,81,187,160,24,166,172,76,49,142,5,118,17,235,47,54,151,117,118,109,116,244,120,153,84,70,97,201,108,158,213,205,220,94,53,196,207,35,70,168,88,231,
106,174,0,246,21,172,89,6,69,242,182,225,199,110,106,170,198,91,167,173,108,204,145,77,187,120,57,232,49,85,210,24,227,96,66,103,212,53,105,115,54,139,218,52,106,182,26,155,124,197,190,198,227,3,176,202,
255,0,245,171,159,142,212,150,25,174,223,70,125,67,93,134,109,38,198,11,88,86,68,37,201,1,91,104,32,253,226,125,113,80,234,158,1,212,244,123,55,185,184,16,172,106,51,196,128,159,194,149,194,199,50,145,
170,46,7,21,102,206,124,201,177,152,174,79,13,81,172,36,246,169,110,35,143,121,49,169,217,128,63,250,244,61,73,146,186,58,29,50,250,226,222,124,25,28,244,32,3,212,119,170,151,154,213,221,196,210,171,75,
48,82,223,115,113,245,166,232,122,156,118,123,162,184,13,181,190,228,131,157,191,81,220,86,155,195,116,38,19,90,193,13,242,158,67,71,131,249,142,213,197,42,126,245,236,114,202,147,221,68,175,107,111,61,
244,49,48,5,74,182,9,126,1,172,221,86,250,59,29,240,90,31,222,30,30,79,95,97,237,90,55,3,93,215,38,142,63,179,72,138,157,21,87,0,123,214,134,155,240,214,102,253,254,165,52,113,174,50,144,239,27,164,252,
123,85,197,61,228,105,26,114,151,196,121,197,246,155,113,14,154,215,251,252,181,105,54,32,206,11,241,146,71,176,254,181,207,220,73,36,192,153,9,114,63,188,115,93,191,143,33,190,142,247,202,185,129,109,
196,96,36,113,71,247,85,59,99,215,62,181,200,52,7,111,40,107,190,157,183,53,122,104,81,89,165,88,76,59,136,140,156,149,237,154,147,170,130,61,42,79,179,229,128,197,79,246,92,198,56,199,21,161,153,159,
246,118,110,64,205,107,104,58,148,26,69,236,146,92,219,125,166,9,97,104,100,136,54,9,83,232,125,114,5,84,218,193,182,244,247,244,168,188,159,152,231,230,30,181,64,116,18,107,90,28,43,254,141,161,121,140,
199,230,107,137,137,199,211,21,103,254,18,13,53,173,241,253,131,110,120,255,0,158,141,92,245,181,148,215,151,17,193,12,77,44,210,16,168,138,50,73,244,173,109,95,67,187,208,110,164,178,189,139,202,157,
2,150,92,231,168,205,77,150,195,53,116,73,188,51,121,97,117,121,169,233,31,103,138,41,146,21,242,75,54,75,6,60,254,11,90,246,250,22,132,211,234,107,117,164,41,138,206,100,133,77,182,231,103,44,50,9,29,
134,43,158,240,223,140,23,195,122,124,176,45,172,83,179,220,199,59,121,203,184,21,80,65,95,99,207,90,244,61,7,65,212,174,63,180,174,164,142,107,20,212,167,91,184,66,204,169,49,94,112,172,15,110,120,172,
101,120,151,19,206,117,219,173,47,66,213,175,44,127,176,161,99,3,148,222,179,48,207,189,87,93,123,71,154,61,151,58,67,71,19,12,19,12,231,112,247,25,168,188,104,210,221,120,147,81,154,104,26,214,103,157,
139,66,221,87,235,252,255,0,26,198,242,15,150,59,250,214,241,90,94,228,55,208,210,241,6,177,99,117,165,218,233,250,109,180,176,219,197,43,76,205,51,229,153,136,3,242,192,174,124,169,227,181,117,190,31,
248,121,171,120,162,9,39,179,137,86,8,206,211,44,205,181,73,244,7,189,84,241,7,131,245,31,11,221,199,111,125,6,211,42,238,141,208,238,87,30,198,169,52,180,13,119,50,108,84,238,235,82,106,18,72,242,43,
187,180,140,160,1,184,231,128,48,7,229,93,174,155,240,127,196,51,91,164,255,0,103,141,55,174,225,27,200,3,227,183,21,204,94,105,115,197,118,214,175,11,11,128,251,124,188,115,158,152,197,79,50,111,65,89,
150,60,43,125,101,29,213,236,58,140,178,91,218,222,218,181,185,150,33,184,161,220,172,14,61,50,159,173,117,186,79,195,61,51,94,183,51,89,107,18,75,24,109,155,140,37,114,216,233,207,122,227,117,143,14,
223,120,110,238,56,47,173,204,51,58,9,66,158,187,79,79,235,93,190,147,225,77,75,196,158,17,210,219,79,151,200,22,215,115,9,89,220,160,4,236,42,195,215,21,157,71,213,51,72,249,144,88,248,54,198,40,101,
212,44,245,182,13,98,234,198,69,133,178,135,56,31,142,107,78,203,194,169,175,105,215,18,69,226,6,146,9,230,221,50,178,99,116,131,191,111,90,147,77,240,222,185,164,233,26,222,157,117,52,105,4,209,49,140,
188,138,4,178,7,82,8,39,216,31,206,147,193,55,90,116,190,30,142,11,155,120,231,186,143,80,44,83,206,8,81,74,168,220,63,189,200,174,86,158,232,221,51,156,159,193,250,20,83,50,63,136,162,70,83,130,190,89,
200,53,46,157,165,232,30,27,187,58,130,235,145,222,60,106,219,97,68,32,177,32,143,235,81,234,254,24,186,213,60,81,113,13,156,62,123,220,78,236,159,238,238,60,159,65,84,245,207,135,186,199,135,226,91,139,
171,85,48,177,43,190,54,220,1,247,244,173,215,102,204,100,113,211,70,55,157,188,140,212,150,215,151,54,57,251,60,210,67,187,174,198,35,63,149,107,105,90,5,222,181,116,208,217,218,180,242,42,150,32,118,
3,212,212,31,97,65,103,231,140,112,219,74,103,154,232,209,171,25,108,88,181,243,239,173,77,245,195,180,208,71,34,199,43,51,101,134,79,28,117,199,52,253,70,204,219,254,246,2,101,182,254,250,243,143,99,
73,163,106,9,166,206,37,104,132,144,183,203,44,77,209,212,245,6,182,159,75,138,241,36,127,15,206,94,54,24,107,57,27,18,168,61,71,63,120,123,138,231,154,105,232,103,40,115,106,85,211,245,191,220,164,115,
229,192,227,61,192,174,194,199,82,209,60,133,80,124,166,198,78,71,235,92,75,105,254,92,107,28,182,215,16,92,47,13,185,15,53,53,190,149,52,156,69,28,206,122,124,200,64,252,205,112,212,195,198,175,145,195,
83,14,170,232,117,218,165,246,138,214,224,153,183,149,57,218,189,77,114,90,255,0,138,214,29,208,88,219,125,156,244,50,17,243,15,165,75,122,246,186,42,96,52,119,55,189,130,157,201,31,212,247,62,213,202,
92,110,102,103,144,150,44,114,88,242,73,173,168,225,99,79,93,203,165,131,133,30,183,43,69,111,61,247,218,37,87,201,64,93,203,30,181,157,38,114,15,242,171,7,114,150,10,72,7,131,205,62,217,81,103,13,48,
204,96,30,43,209,59,17,111,77,177,146,239,69,212,2,41,98,141,19,109,80,78,70,88,113,249,138,170,186,61,231,240,219,202,63,224,36,84,130,233,237,230,119,181,121,32,83,253,214,35,249,84,203,174,106,57,3,
237,215,0,31,246,205,45,122,26,171,22,109,124,63,125,36,194,121,34,118,7,174,65,38,173,182,143,42,169,38,222,79,251,228,214,107,107,218,135,27,111,110,20,99,251,230,157,22,181,169,116,55,179,183,25,31,
53,103,105,110,205,35,98,9,180,155,217,27,45,105,40,29,62,225,169,244,223,182,233,119,41,52,113,74,146,70,115,128,167,52,29,123,83,224,125,182,99,223,239,87,81,99,102,211,120,109,111,29,153,231,144,229,
164,99,147,193,35,31,165,103,57,114,173,78,236,61,63,107,53,20,204,45,115,83,189,214,31,50,90,186,42,143,149,85,8,199,189,44,222,32,188,184,209,98,211,222,220,161,139,56,153,84,134,35,208,213,175,159,
160,103,63,67,75,26,182,238,88,247,224,215,63,50,236,123,159,217,211,223,156,229,227,181,249,114,65,7,233,93,223,129,227,49,233,115,143,250,105,199,24,237,89,13,19,12,124,217,252,107,165,240,196,39,236,
115,246,228,86,120,138,156,208,177,236,228,248,23,71,20,167,115,64,251,83,27,243,169,196,101,79,76,211,124,190,248,175,36,253,23,148,139,36,224,26,54,138,151,201,207,108,210,24,79,74,9,229,24,177,157,
132,246,162,164,242,91,210,164,91,114,209,151,36,112,113,183,189,4,52,87,245,165,80,115,138,152,71,197,57,99,28,247,160,155,17,133,7,219,218,166,108,190,15,0,47,29,41,22,49,154,114,241,198,51,64,172,32,
31,53,61,70,91,218,141,180,170,196,100,122,208,49,94,60,134,42,15,244,20,204,122,241,83,137,25,35,117,7,1,184,60,83,49,158,112,49,76,68,144,253,229,250,241,90,158,36,231,84,144,142,20,133,35,254,249,21,
153,26,252,195,158,115,90,90,235,150,187,67,142,54,47,242,20,24,205,106,103,72,62,81,80,49,219,158,226,172,183,221,28,99,154,175,34,245,238,58,210,28,72,203,110,140,140,119,201,61,235,186,240,20,230,61,
6,88,129,230,107,134,65,255,0,126,243,253,63,74,225,57,197,119,95,14,254,123,56,193,232,47,72,233,235,4,159,225,77,156,152,159,133,122,158,76,167,247,188,245,205,91,141,140,110,172,189,65,205,37,231,146,
183,206,182,232,99,137,78,209,147,146,113,220,253,105,192,124,189,107,130,90,51,244,170,122,164,104,201,50,95,48,153,98,88,93,112,27,104,224,213,173,109,124,221,10,192,244,219,52,159,168,90,203,183,92,
72,58,138,220,212,84,201,225,187,126,50,69,193,252,50,191,253,106,170,127,26,22,105,27,229,211,143,167,230,115,177,67,187,3,21,169,103,0,227,60,213,88,34,249,179,159,194,181,236,161,221,140,245,174,201,
59,35,243,204,60,117,59,127,134,222,31,127,16,120,139,78,176,65,204,243,42,113,216,19,201,252,6,107,239,59,84,141,97,142,19,194,70,2,42,47,203,192,224,10,249,115,246,99,240,232,184,241,28,218,148,145,
110,138,206,18,70,127,190,217,81,250,110,252,171,234,37,242,255,0,137,215,39,144,184,53,217,131,142,142,71,194,241,86,39,218,98,99,65,109,21,248,178,192,140,6,204,96,115,221,176,217,253,105,153,146,60,
134,69,255,0,190,64,20,44,104,249,3,114,123,175,74,12,81,198,10,201,51,19,219,40,13,122,103,195,150,18,51,34,143,149,127,221,243,48,79,228,105,124,184,217,54,155,85,113,159,148,179,158,61,179,154,138,
56,254,81,201,199,99,145,83,121,51,51,99,110,245,62,173,131,250,83,16,44,139,9,194,166,208,7,33,73,254,117,50,187,142,85,183,131,211,123,127,134,41,139,31,148,62,114,206,189,183,117,31,141,62,57,16,174,
115,143,247,78,115,65,36,209,206,234,164,46,216,135,117,83,199,235,73,243,22,251,232,65,236,160,12,254,84,139,228,72,1,25,193,254,38,1,177,252,177,82,51,44,108,126,88,163,207,241,96,115,248,142,244,1,
30,217,227,229,151,228,245,78,213,97,36,149,163,109,139,230,143,160,2,155,185,185,33,152,251,100,149,52,177,218,153,6,91,57,247,76,21,252,115,131,249,80,43,129,102,254,226,245,227,165,36,146,58,252,194,
76,143,226,79,44,147,249,211,150,55,137,178,7,152,189,213,150,165,141,131,48,27,124,191,97,138,4,67,27,23,94,197,127,217,21,39,217,164,7,59,2,167,99,247,133,14,201,20,155,146,33,207,95,151,31,214,156,
147,59,49,227,7,31,120,18,41,136,224,158,55,118,249,213,176,58,114,0,168,164,149,147,134,194,143,115,78,150,20,206,49,129,238,121,168,164,81,14,63,143,211,154,243,78,193,172,204,121,2,60,122,245,168,89,
134,211,149,7,240,205,60,180,77,156,166,91,222,147,146,50,14,209,236,41,20,87,111,153,120,7,31,238,226,185,171,75,131,30,165,19,117,27,177,244,4,215,81,34,22,83,243,159,202,185,123,24,91,251,66,52,110,
187,73,233,245,171,137,61,77,51,169,173,156,229,199,204,173,195,10,130,77,74,25,1,37,177,245,167,77,102,188,228,140,213,54,178,12,49,189,69,102,199,99,46,250,65,29,247,155,22,74,176,193,197,100,73,166,
205,113,35,48,198,9,201,2,186,54,211,227,221,130,224,154,79,176,170,253,214,21,28,204,181,20,115,141,160,201,187,57,219,248,208,116,28,242,207,205,110,205,104,59,184,63,141,84,154,215,32,129,38,62,134,
167,153,149,202,85,111,15,237,64,227,145,142,57,21,66,235,78,111,177,220,128,156,237,96,57,30,149,106,234,202,82,48,183,18,127,223,202,200,212,52,185,229,141,145,110,218,47,246,149,232,184,207,22,208,
20,71,225,251,209,28,146,91,93,74,193,75,34,252,235,142,222,184,62,213,157,175,67,124,186,42,36,183,159,107,131,204,206,217,20,249,160,227,223,181,122,25,248,117,37,188,133,160,212,148,147,212,72,114,
41,215,30,10,186,120,136,105,45,28,122,134,34,186,125,161,135,33,230,87,154,29,188,90,29,149,220,98,109,236,231,204,137,216,16,56,251,192,14,153,166,195,225,251,8,108,96,158,69,184,185,150,97,146,176,
224,8,253,142,123,215,160,183,129,238,60,189,166,226,45,189,149,92,84,105,224,185,35,194,153,201,244,249,214,159,180,96,160,114,50,8,98,214,60,62,177,43,36,49,68,126,86,57,43,212,224,159,92,214,93,198,
159,167,222,93,74,158,68,240,59,19,137,153,129,81,248,87,165,47,132,145,153,25,190,102,78,159,48,170,183,62,23,153,155,49,172,24,255,0,104,138,74,160,249,15,50,240,180,47,30,169,56,46,202,130,41,6,238,
199,130,5,103,88,105,173,117,124,35,101,33,1,203,243,131,143,99,235,94,189,103,225,57,225,147,113,91,98,49,206,220,85,198,240,156,3,164,17,134,31,196,172,5,87,180,176,185,15,47,212,188,57,99,253,155,52,
246,237,36,51,66,55,109,145,183,7,246,21,22,151,161,233,242,233,201,61,207,153,44,238,126,226,157,161,71,245,175,79,155,193,222,114,224,20,25,255,0,108,85,86,240,29,203,13,171,115,10,47,251,224,210,246,
163,246,103,149,234,90,125,181,174,163,24,142,222,79,33,112,92,110,201,60,244,205,104,120,170,27,59,139,155,65,103,1,137,76,106,11,3,145,211,167,225,94,143,111,240,246,80,193,158,242,6,62,252,214,148,
63,14,86,246,100,89,39,132,175,251,32,116,29,104,246,163,246,103,154,71,162,105,17,71,178,72,153,248,230,125,228,31,192,86,78,155,164,217,77,113,168,11,137,25,98,137,51,27,99,147,243,122,87,177,127,194,
191,182,86,32,221,171,47,76,113,66,124,59,211,84,177,50,35,113,206,92,81,237,172,47,102,120,190,168,182,142,171,29,149,172,138,23,239,72,231,37,191,194,179,126,203,46,115,229,55,229,95,64,15,0,233,138,
172,238,241,170,175,92,61,107,120,115,225,175,135,181,31,60,220,234,17,90,176,0,199,189,135,204,126,181,81,171,126,130,116,207,155,227,183,157,184,17,48,31,74,232,117,153,46,228,212,22,40,131,152,124,
133,202,227,35,56,175,118,241,23,195,40,124,53,116,34,118,141,195,124,200,196,140,50,213,37,240,197,180,145,180,165,225,82,48,56,34,166,85,108,246,42,52,238,183,60,57,116,113,55,135,230,115,104,201,118,
142,48,220,252,195,39,181,73,164,233,22,176,105,230,230,230,205,239,39,103,216,176,238,218,20,99,239,87,179,77,225,203,118,133,148,73,30,27,156,241,88,183,30,9,37,137,142,242,53,30,149,42,173,202,246,
104,242,93,122,221,100,88,197,182,150,109,72,251,196,49,108,214,41,211,110,121,196,47,158,189,43,219,79,130,95,128,215,113,181,43,120,35,177,185,140,126,53,162,170,75,166,120,156,118,87,177,176,43,11,
169,245,28,87,77,227,68,154,242,107,15,42,55,101,142,194,24,216,14,155,128,57,175,72,183,240,12,123,139,61,216,62,157,42,229,199,132,195,40,2,88,207,0,2,77,47,109,168,189,145,229,30,23,209,81,109,230,
150,246,202,59,141,228,5,87,36,21,197,73,226,15,14,218,174,163,98,109,163,48,195,113,143,57,87,145,30,8,4,138,244,169,60,15,115,36,46,150,243,199,25,63,197,145,89,235,224,13,67,207,71,154,250,57,21,122,
46,69,30,215,91,135,179,177,197,222,89,217,90,204,241,65,162,249,209,169,218,36,105,14,91,222,185,121,44,175,97,184,119,134,25,34,220,79,8,72,199,181,123,90,248,72,153,6,249,99,31,141,75,121,224,161,44,
69,96,154,49,35,116,36,244,169,246,214,220,78,7,137,127,196,210,69,1,154,114,170,48,50,230,186,125,91,77,109,82,215,70,65,55,148,209,218,170,176,108,253,234,234,19,225,221,244,82,130,247,241,178,103,144,
15,90,222,95,11,18,177,238,104,178,171,129,131,84,234,46,129,201,115,206,53,237,22,215,90,213,52,203,123,135,112,144,196,144,201,46,57,96,185,36,254,52,183,190,31,209,228,142,120,164,211,98,130,13,164,
36,209,103,204,24,232,107,209,228,240,121,154,65,34,205,26,145,234,122,212,109,224,121,152,177,55,145,109,244,197,53,85,135,178,76,240,205,31,194,112,221,88,94,219,92,219,52,87,140,85,173,231,237,199,
85,63,92,212,154,159,132,226,211,116,88,173,227,183,105,245,22,125,239,40,232,139,143,187,94,233,23,132,214,11,119,84,150,55,152,142,24,244,172,57,60,17,170,73,129,37,204,93,115,199,165,95,182,98,116,
81,225,215,158,7,212,173,97,138,103,131,137,186,1,244,172,198,240,213,236,109,255,0,30,206,127,10,250,54,79,8,221,58,170,180,234,118,244,233,85,151,225,222,165,121,49,88,110,99,57,60,14,245,162,174,200,
246,40,241,207,8,255,0,104,232,55,147,205,107,98,146,93,180,91,18,89,87,62,86,122,144,61,107,107,226,86,147,115,168,248,138,226,242,56,252,200,90,56,198,225,234,16,3,250,215,175,218,124,55,147,73,96,111,
101,67,33,56,170,158,37,240,109,222,165,112,166,210,88,161,143,28,169,53,62,215,222,185,94,205,88,249,254,227,192,183,240,217,173,211,66,118,62,49,142,188,215,79,166,248,83,81,212,111,161,213,53,187,217,
130,196,20,168,86,59,200,94,128,122,87,187,104,63,8,181,47,176,226,242,120,165,228,96,41,232,49,254,56,166,234,223,14,36,211,238,140,77,112,128,237,4,15,106,114,170,250,137,82,93,207,155,124,119,29,223,
136,124,73,123,124,108,154,31,48,128,23,216,0,1,62,245,207,199,164,220,174,87,201,111,94,149,244,188,254,1,86,145,179,112,135,220,154,165,47,195,115,35,2,151,49,175,214,169,87,178,176,157,31,51,199,180,
95,15,235,154,213,140,118,2,121,33,211,225,144,200,17,142,20,49,234,125,235,123,95,30,80,240,222,150,137,52,240,233,247,34,70,185,151,157,217,112,72,30,221,107,213,180,95,4,53,140,100,61,194,72,15,97,
75,169,120,28,220,58,149,149,0,7,56,106,205,214,187,45,81,208,227,110,44,97,177,241,101,222,181,60,179,95,201,35,230,218,4,99,181,6,49,147,250,215,49,121,117,46,151,241,11,80,212,96,176,91,198,36,249,
91,254,234,177,85,249,190,163,154,245,150,240,108,199,24,120,213,123,96,213,57,60,15,63,219,26,79,54,32,15,110,244,149,75,21,236,143,46,248,149,99,113,172,106,90,109,235,33,146,79,176,70,37,42,63,139,
44,79,31,141,93,211,116,212,190,240,37,157,157,205,204,182,98,43,137,24,8,199,223,7,212,123,102,189,86,239,193,235,113,26,4,216,164,38,214,207,122,161,117,224,185,162,179,68,182,17,239,221,146,114,58,
81,237,110,172,79,178,179,60,183,199,154,107,54,159,225,235,88,164,146,234,40,162,96,103,113,150,228,129,200,170,16,248,95,75,181,154,41,99,213,27,122,144,70,96,61,69,122,228,30,15,188,184,101,23,9,31,
202,48,14,65,171,171,224,37,117,57,10,15,212,81,237,109,160,253,145,230,126,18,243,239,110,188,72,171,62,46,102,183,217,111,57,93,189,251,122,118,173,75,104,173,116,191,10,234,250,120,146,91,187,131,1,
146,73,164,36,169,126,152,90,235,35,240,29,205,180,207,36,126,83,14,222,180,233,60,27,117,36,110,141,28,103,61,178,42,121,211,119,31,179,208,243,255,0,134,250,180,150,87,22,214,9,96,145,71,55,153,246,
139,163,213,254,82,84,123,98,188,202,109,54,225,89,132,144,176,61,57,90,250,46,203,193,247,176,97,60,164,63,238,226,150,79,2,79,34,254,242,8,247,15,94,107,104,213,229,109,144,232,220,249,202,91,18,145,
144,16,158,51,210,171,253,157,227,33,144,50,145,208,247,21,239,87,159,14,111,252,227,178,8,93,59,112,5,72,62,29,186,168,45,104,153,239,197,83,196,46,168,143,99,230,120,156,122,246,177,10,237,75,203,128,
184,238,115,252,234,189,197,254,161,120,216,158,238,105,1,29,11,113,249,87,183,55,195,215,147,165,138,99,233,83,199,240,213,85,70,235,100,13,244,169,246,241,236,30,197,247,62,125,22,101,155,151,111,202,
160,146,205,155,248,178,61,235,232,105,62,25,33,233,110,191,149,68,62,24,162,255,0,203,164,108,61,113,86,177,11,176,123,7,220,249,209,172,89,27,28,243,81,201,106,114,5,125,13,117,240,221,49,255,0,30,74,
79,176,53,145,127,240,253,224,27,162,210,124,209,223,130,13,90,196,38,79,176,103,137,73,106,21,84,14,91,28,138,139,236,238,114,118,156,87,181,90,248,21,110,164,11,38,142,241,251,237,173,47,248,86,246,
229,72,254,206,198,125,141,30,221,45,195,216,51,196,244,221,4,234,22,119,147,137,227,136,219,32,125,146,16,11,143,65,239,85,214,212,71,48,33,129,24,175,93,189,248,118,109,28,145,164,23,80,126,242,156,
210,91,248,22,9,6,91,77,117,111,76,98,143,110,138,246,44,242,2,133,88,227,129,94,173,225,61,29,46,190,30,43,103,231,220,252,125,28,212,242,120,22,40,219,13,162,202,195,215,53,217,104,48,71,164,104,171,
103,30,158,200,153,99,134,247,53,205,90,167,58,208,244,48,177,246,115,230,103,138,92,68,208,220,50,176,193,7,6,149,227,242,86,39,222,173,184,103,104,234,57,175,84,212,188,55,107,169,76,100,123,38,86,245,
90,207,151,225,172,51,70,90,22,116,110,184,34,176,230,62,174,56,138,114,91,158,105,33,195,17,205,117,126,21,141,190,195,55,25,201,171,19,124,60,186,50,144,161,177,158,184,53,210,232,190,27,54,118,11,30,
214,86,238,72,172,42,202,234,200,247,178,235,58,138,93,12,129,110,70,78,211,71,217,78,122,102,186,131,166,185,183,48,236,24,13,187,59,121,206,49,77,93,29,135,81,143,194,184,207,170,246,145,57,175,179,
55,166,41,86,208,149,7,21,211,67,164,6,153,22,70,217,25,32,22,198,112,61,106,198,173,163,218,199,169,92,38,158,239,53,152,111,221,188,139,130,71,191,227,154,12,221,69,123,28,127,217,78,238,105,190,86,
220,241,154,232,228,210,100,111,113,81,255,0,99,63,247,63,26,97,204,142,124,71,140,241,71,146,79,76,214,239,246,44,157,150,151,251,22,78,227,242,164,46,100,97,121,101,105,118,100,100,142,149,183,253,134,
253,118,147,239,138,153,180,9,35,138,41,10,241,33,32,123,98,130,92,151,115,159,104,240,160,131,207,127,106,68,140,158,149,180,116,182,4,241,250,83,163,211,27,111,11,64,238,172,100,181,187,199,8,118,31,
41,56,31,231,241,166,199,30,245,53,170,116,246,242,255,0,26,69,211,219,107,113,131,138,119,22,134,119,151,181,135,113,87,181,69,220,241,30,163,104,31,165,59,236,36,30,65,171,79,106,100,198,65,200,28,83,
76,137,25,45,30,232,243,142,106,9,35,192,231,175,90,212,251,41,92,241,249,212,114,105,238,204,14,220,140,84,178,98,100,52,125,120,174,223,225,196,109,63,149,8,31,59,95,194,170,62,177,200,63,173,115,205,
99,251,188,99,6,186,79,2,219,152,124,215,25,5,110,161,195,47,108,135,6,153,205,137,94,225,230,23,145,109,191,184,3,28,72,195,143,173,42,175,161,171,122,156,34,29,82,233,7,65,43,1,199,185,168,97,136,200,
225,87,36,244,0,87,28,183,63,74,165,240,39,228,77,103,110,210,72,170,163,44,199,140,87,77,175,105,173,97,163,89,192,231,116,146,200,210,178,250,0,0,31,204,214,207,132,124,42,45,118,205,56,204,189,135,
247,69,125,87,225,159,132,218,18,232,26,115,106,186,84,55,55,222,88,105,26,104,242,202,73,221,183,175,24,206,43,162,133,23,57,31,37,196,57,229,44,30,31,217,189,121,157,143,137,99,209,229,85,86,100,41,
233,145,91,26,102,150,242,76,136,170,204,204,71,0,117,175,184,36,248,91,225,121,148,36,186,53,147,39,81,251,189,184,253,106,238,151,240,243,195,186,13,210,220,90,232,182,145,202,188,172,158,72,98,62,153,
174,239,171,73,238,207,206,225,196,212,41,173,41,187,152,159,4,252,42,254,11,240,124,107,117,20,73,119,120,254,124,138,202,11,40,198,21,79,225,147,248,215,161,252,155,248,27,84,255,0,10,84,48,201,28,153,
84,8,184,236,160,113,248,85,184,218,96,187,119,100,119,94,196,123,87,161,78,42,17,81,71,193,98,177,19,197,86,149,105,239,38,72,145,68,164,103,229,111,225,98,184,63,141,88,133,164,80,84,77,189,61,2,213,
117,94,152,36,142,225,234,67,27,169,12,138,160,119,194,159,241,173,206,54,75,229,5,201,101,80,135,175,39,245,25,254,148,214,142,41,56,223,242,255,0,179,219,218,149,80,147,243,38,71,177,193,20,229,95,188,
170,191,134,57,252,104,36,116,113,162,131,137,92,109,234,161,185,252,169,233,8,221,189,48,192,246,8,50,126,189,255,0,90,69,133,219,13,20,67,204,245,92,143,204,212,158,92,140,159,188,87,255,0,121,16,22,
31,136,237,64,14,193,80,65,84,79,124,17,253,105,209,229,112,1,137,135,247,70,65,166,172,108,217,194,144,61,100,97,255,0,215,165,85,61,54,169,231,146,132,255,0,133,0,63,203,39,43,242,175,160,201,192,164,
193,13,243,5,45,237,207,243,167,172,123,148,134,66,195,219,138,2,142,67,110,39,183,205,210,130,71,22,249,64,5,83,61,24,30,63,28,82,237,232,76,155,199,247,83,24,31,202,153,229,166,88,124,172,127,187,180,
231,249,83,149,89,122,64,200,125,118,156,31,210,168,9,67,121,107,247,48,59,16,72,252,242,106,38,221,35,29,160,224,127,181,64,144,238,195,124,158,187,136,253,41,222,96,29,10,18,122,100,226,144,143,63,146,
104,149,138,128,234,125,73,235,249,213,119,117,102,25,37,125,177,154,178,204,205,247,91,7,251,195,4,154,97,243,186,157,216,247,197,121,199,97,85,159,60,13,216,244,219,138,138,89,130,227,115,99,208,115,
86,157,157,190,240,255,0,190,134,42,172,145,171,54,24,40,239,130,115,73,148,70,89,157,126,72,217,190,149,139,112,62,203,170,69,35,124,138,199,7,216,30,181,183,34,237,32,43,96,251,213,123,219,69,190,135,
107,237,200,57,200,60,211,139,179,212,151,174,197,41,244,123,182,206,212,103,250,115,84,164,208,47,142,113,19,19,87,215,251,78,201,86,56,46,1,64,56,12,121,20,214,190,214,49,254,181,51,86,249,73,212,201,
111,15,106,44,252,64,212,55,135,239,207,88,36,207,181,107,67,125,168,179,41,154,233,98,83,215,3,56,169,100,154,127,47,114,234,170,79,161,140,230,162,209,47,83,159,111,13,223,16,65,183,148,126,53,94,79,
11,221,242,13,180,248,173,246,154,241,173,165,149,53,84,223,30,9,141,148,130,121,199,30,181,20,58,133,204,114,49,159,80,102,78,8,242,211,57,227,154,158,88,119,31,188,115,179,120,74,92,2,182,247,71,241,
172,141,123,193,55,151,218,125,196,80,89,207,231,180,108,35,57,199,205,142,51,94,133,54,165,111,28,168,77,245,203,198,202,9,85,80,8,62,149,145,172,106,87,13,8,58,110,161,40,155,174,217,144,96,254,52,46,
75,238,63,120,241,155,111,133,30,39,88,24,92,89,203,230,19,195,43,26,130,251,225,143,138,22,215,203,130,194,102,220,126,98,73,207,30,149,232,242,235,30,41,61,47,212,126,32,85,105,181,159,22,142,5,242,
183,226,5,108,229,30,232,207,150,93,143,51,184,248,79,226,105,32,132,71,99,114,178,128,119,110,110,41,27,225,71,137,211,103,250,21,201,56,231,230,205,122,43,106,254,48,207,252,126,41,31,239,81,38,181,
226,214,108,253,169,64,39,177,165,120,247,67,74,93,143,62,255,0,133,95,226,67,118,173,253,159,112,33,217,134,27,142,119,99,173,85,255,0,133,83,226,117,4,181,141,206,113,198,26,189,37,181,127,22,224,98,
241,127,58,103,246,207,139,71,6,240,81,238,119,67,180,187,30,117,103,240,175,197,2,57,4,214,119,37,153,112,184,99,193,162,15,132,190,40,89,15,155,107,112,203,142,54,177,175,72,77,115,197,35,173,208,252,
232,255,0,132,139,196,224,128,46,7,226,105,222,29,208,249,101,216,243,203,159,133,94,36,48,176,138,214,232,73,158,55,49,197,36,63,10,252,76,177,168,107,89,217,187,252,213,232,159,240,144,120,159,63,53,
202,254,116,245,241,7,137,114,73,159,2,139,199,186,11,75,177,230,242,124,39,241,75,77,148,130,117,143,63,119,121,171,77,240,167,196,207,118,172,145,77,12,93,254,115,248,244,175,66,95,16,120,133,186,220,
83,215,196,58,255,0,105,133,28,209,238,131,150,125,142,1,190,22,248,151,105,81,4,184,207,82,230,161,135,225,63,138,60,185,119,164,187,206,54,252,253,43,209,127,225,36,241,0,255,0,150,195,243,167,175,137,
53,238,115,40,31,141,28,208,238,130,211,236,121,148,159,8,188,87,147,143,48,15,247,141,34,252,36,241,90,255,0,207,108,127,188,107,212,7,137,117,191,226,151,143,168,169,87,196,250,183,121,113,83,207,21,
212,57,37,216,224,53,47,0,248,207,88,142,208,222,77,44,205,111,18,193,24,36,143,148,116,207,189,87,185,248,83,226,38,144,249,66,65,31,101,44,125,43,210,127,225,40,213,59,205,197,47,252,36,218,158,7,239,
58,210,231,143,114,212,37,216,243,89,62,20,235,223,217,251,54,205,231,110,206,67,16,49,138,134,47,133,58,250,194,161,210,109,249,57,231,138,244,217,60,73,170,158,146,241,85,207,136,245,178,220,73,145,
73,78,29,196,227,35,205,230,248,77,226,66,65,141,101,3,212,181,33,248,71,226,102,193,253,233,255,0,129,31,241,175,77,255,0,132,151,89,29,37,252,233,15,138,181,165,255,0,150,156,244,170,230,143,113,114,
200,243,168,126,21,248,149,99,40,68,152,245,221,239,82,95,124,41,215,164,147,48,9,148,0,58,181,122,16,241,54,181,221,134,41,100,241,70,179,252,46,13,28,241,238,28,178,236,112,86,95,12,117,232,33,195,139,
130,254,205,197,45,199,195,45,125,174,34,101,89,246,47,222,203,243,93,179,120,175,94,13,195,12,82,175,139,181,209,203,48,199,210,142,104,247,66,229,151,99,138,111,134,90,239,152,197,68,192,19,192,220,
106,38,248,95,226,85,195,32,144,156,244,201,175,66,95,22,235,60,101,168,147,198,26,185,81,177,129,205,43,197,131,167,46,199,155,63,195,15,19,200,217,41,38,127,222,53,113,254,25,235,108,209,124,146,0,20,
6,249,187,215,114,190,48,214,247,124,204,0,250,84,203,227,29,83,28,224,254,20,94,61,208,185,37,216,243,233,62,24,235,127,105,70,69,152,70,58,141,198,164,147,225,158,178,209,182,209,48,111,173,122,3,120,
195,82,11,219,242,165,79,25,106,28,103,2,171,154,61,199,203,46,199,154,195,240,183,90,141,50,237,59,55,160,99,81,92,124,54,241,11,127,171,23,27,115,220,154,245,73,124,97,122,177,141,160,111,244,170,159,
240,154,234,185,193,10,63,10,119,143,112,229,151,99,205,46,190,23,235,140,137,179,237,1,255,0,139,147,75,162,248,31,197,58,30,161,13,212,43,43,180,109,157,174,78,26,189,63,254,19,109,71,190,223,202,163,
147,198,154,167,85,3,31,74,124,209,238,133,203,46,199,157,106,94,15,241,86,185,124,243,222,52,136,55,18,169,24,192,94,122,86,55,136,62,30,235,198,99,246,86,186,232,49,201,252,107,216,23,197,218,131,47,
207,180,31,97,84,174,252,93,170,44,216,68,66,191,74,92,202,251,149,202,237,177,230,150,186,7,141,32,211,86,40,174,175,68,187,129,57,118,244,198,42,234,248,87,196,115,238,123,159,181,73,41,199,46,249,35,
3,165,122,21,159,139,53,6,92,200,19,39,166,5,44,158,48,191,83,194,169,252,41,57,39,212,57,95,99,198,53,143,1,248,166,226,250,87,135,237,8,140,122,100,241,89,191,240,128,248,190,39,206,235,143,197,141,
123,202,248,194,251,248,149,127,42,100,190,46,187,108,254,237,73,30,212,249,149,186,21,175,99,203,52,79,3,248,135,200,255,0,72,251,73,124,245,201,169,53,47,2,248,137,166,139,200,23,0,103,230,228,215,173,
217,120,210,229,97,27,226,81,248,10,145,252,109,113,158,35,83,248,10,199,115,69,115,202,159,193,186,226,124,160,92,145,235,154,197,187,240,95,137,22,250,77,166,235,202,234,49,94,218,124,111,63,95,41,63,
33,81,159,26,92,55,252,177,79,251,228,85,33,59,158,49,168,248,87,196,112,136,205,185,186,207,151,243,125,105,214,90,47,137,96,176,196,177,92,75,38,243,201,244,175,102,255,0,132,186,109,160,249,9,207,251,
34,161,147,198,87,11,140,91,35,15,97,87,161,26,158,59,115,163,248,149,84,121,49,92,6,35,158,58,83,109,244,255,0,21,172,100,52,19,55,57,206,43,216,227,241,180,236,216,107,84,3,253,209,83,127,194,95,38,
222,45,227,255,0,190,104,208,53,60,86,195,77,241,67,94,76,39,19,36,88,202,140,116,171,50,88,120,144,69,46,209,57,112,167,111,203,94,184,222,51,145,15,54,145,159,194,151,254,19,70,198,126,198,159,247,205,
3,212,241,173,30,199,197,30,98,181,196,178,167,63,243,206,153,112,190,47,220,204,178,51,100,255,0,18,226,189,163,254,19,67,207,250,20,127,247,205,42,120,205,91,131,101,16,63,238,210,25,224,254,103,140,
35,111,152,57,231,251,148,243,117,226,207,226,83,143,165,123,140,190,55,69,36,125,130,54,255,0,128,138,104,241,196,71,174,157,16,255,0,128,210,36,241,88,111,60,78,171,202,54,127,220,205,78,218,151,137,
118,228,198,73,255,0,118,189,148,120,222,223,190,155,17,255,0,128,211,151,198,150,108,216,58,100,95,247,205,67,31,41,225,237,171,120,160,55,250,156,127,192,106,41,53,207,20,199,255,0,44,135,175,221,175,
119,111,22,105,237,215,76,132,227,218,163,127,20,105,173,215,75,139,215,238,213,41,121,23,99,193,164,241,47,138,119,127,199,176,63,240,19,81,55,138,188,77,27,0,214,195,31,238,215,189,127,194,73,164,127,
208,42,47,251,230,152,222,37,208,142,119,105,17,255,0,223,34,171,155,200,131,197,173,252,69,175,180,123,158,223,147,208,109,53,99,254,18,13,117,191,229,219,63,240,19,94,205,31,138,60,61,252,90,82,15,76,
138,180,186,247,135,88,127,200,53,63,42,27,99,71,136,29,123,89,108,102,212,99,191,201,83,219,234,154,172,163,139,76,159,247,43,218,191,181,60,55,252,90,114,244,244,169,32,213,188,45,184,127,160,40,52,
69,249,9,158,62,183,26,179,12,155,85,199,186,154,211,183,211,245,105,172,90,113,107,31,7,24,60,87,175,197,168,120,110,70,31,232,97,87,235,82,94,106,94,27,251,59,168,132,129,233,158,245,109,4,101,103,169,
243,174,173,226,45,71,75,144,163,105,200,196,28,124,188,214,59,124,66,189,143,254,97,107,239,197,123,253,246,143,225,107,165,50,75,23,65,235,222,176,46,44,252,25,25,218,109,216,253,42,26,61,8,86,167,216,
241,228,248,155,116,91,157,43,61,177,91,250,127,139,5,229,186,200,214,40,135,63,119,21,220,53,175,130,23,57,183,113,248,82,121,158,5,143,130,93,7,106,198,81,114,91,30,206,23,27,66,143,198,153,203,67,226,
40,139,97,172,99,252,170,226,235,16,178,143,244,24,207,61,112,51,93,45,172,190,6,110,21,220,213,213,62,10,206,60,198,172,61,155,61,31,237,44,43,251,44,229,86,250,197,151,115,219,42,176,254,16,185,205,
53,117,11,57,14,63,179,215,242,206,107,174,242,124,17,184,230,114,167,208,154,158,24,60,22,49,182,244,168,163,145,147,253,161,135,236,206,40,223,105,233,204,186,94,127,221,21,36,122,166,133,198,253,53,
212,125,43,185,77,55,193,147,177,39,81,96,59,227,21,33,240,255,0,131,101,110,53,70,11,219,32,83,228,39,235,248,127,239,28,156,23,30,24,125,166,75,121,20,119,194,85,141,158,17,145,249,221,26,31,239,41,
174,174,63,8,248,69,198,70,172,255,0,144,165,147,193,62,22,145,64,143,86,252,212,83,229,102,79,25,65,237,41,28,252,209,248,70,234,52,67,60,104,168,48,2,169,31,137,247,169,162,210,252,41,246,112,139,119,
3,13,219,182,145,207,74,213,111,135,62,30,153,114,186,162,103,233,81,183,194,205,25,185,77,85,63,1,71,40,190,179,71,165,73,25,13,225,15,13,73,200,153,91,158,198,161,147,192,126,29,144,113,112,200,125,
179,91,95,240,170,236,212,254,235,86,90,183,107,240,149,230,251,154,154,226,154,136,125,110,49,218,171,57,54,248,79,166,92,71,186,13,73,118,158,236,106,148,223,8,213,89,188,187,232,95,61,57,175,75,143,
224,236,202,191,242,17,82,125,234,9,190,16,234,60,249,90,132,99,216,209,201,228,109,28,197,173,171,126,7,151,183,194,27,212,141,164,243,98,101,3,179,212,150,63,15,35,158,232,68,95,10,177,2,91,28,110,39,
165,122,189,135,194,187,251,85,31,106,186,141,208,159,152,238,63,40,245,173,187,127,135,150,141,110,101,142,227,107,18,0,25,199,65,215,245,161,83,42,166,105,43,105,59,158,24,223,9,238,46,46,124,152,25,
100,124,240,42,189,247,194,109,74,209,192,34,50,127,222,21,238,49,120,6,230,73,139,65,35,3,158,27,118,42,43,191,135,250,131,55,250,199,39,253,236,209,236,140,227,154,84,95,108,241,91,31,133,115,79,159,
52,174,213,251,219,79,95,106,211,131,194,63,217,185,183,68,17,43,72,191,119,208,103,147,249,215,127,175,120,119,87,208,237,33,142,212,151,154,102,203,103,162,129,92,197,189,205,210,193,115,54,160,202,
30,16,242,48,199,64,163,24,252,255,0,149,101,56,91,65,172,93,90,205,123,215,62,113,212,180,73,238,245,107,246,140,1,26,76,193,153,186,46,73,192,253,43,163,240,207,134,99,180,219,113,47,204,248,200,207,
65,239,87,94,36,186,215,39,232,232,92,182,23,238,231,215,249,215,174,252,43,248,101,7,140,35,186,184,212,21,255,0,179,225,34,44,47,27,220,243,140,246,0,99,63,81,92,241,167,205,43,35,244,220,118,104,176,
184,85,42,142,201,36,116,31,7,126,27,45,244,16,107,215,168,26,220,243,107,9,254,34,15,223,60,116,207,65,237,154,246,225,104,0,37,80,134,61,74,128,65,168,116,251,107,107,11,27,123,72,34,88,160,138,53,137,
18,49,141,160,12,14,115,86,198,247,207,202,172,7,27,131,127,48,43,220,165,77,83,137,248,70,99,142,169,143,174,234,77,233,209,118,67,86,222,70,92,24,219,35,219,63,210,133,179,86,82,12,83,17,253,216,211,
24,63,157,88,88,209,248,117,227,179,3,142,127,10,120,143,120,43,39,207,206,67,41,34,183,60,155,144,173,184,92,114,71,174,245,3,244,230,172,171,68,202,2,147,145,198,227,81,197,31,151,144,14,113,206,9,207,
243,169,22,70,92,142,8,61,87,24,167,97,18,44,65,127,129,91,254,5,82,170,100,240,66,143,110,162,161,141,164,28,14,87,216,96,143,168,169,87,134,207,95,81,210,129,49,230,33,39,38,102,83,236,63,198,164,68,
43,128,100,35,140,3,183,154,69,80,220,125,239,79,156,110,252,187,211,149,82,64,70,229,113,233,156,48,166,72,227,30,197,203,93,52,139,236,49,138,146,49,189,178,170,28,17,247,183,10,141,88,67,243,13,234,
115,143,152,245,167,35,171,16,194,92,251,108,35,245,239,77,8,123,91,159,238,178,147,221,27,113,253,41,6,245,59,71,239,27,253,179,180,254,181,40,140,178,243,200,61,198,63,198,152,214,235,144,11,110,56,
232,192,80,33,81,178,112,119,6,233,183,130,106,69,183,249,139,129,47,61,85,136,192,168,124,178,178,96,112,15,35,105,21,50,170,227,12,204,24,114,62,98,8,160,7,224,240,126,117,237,185,91,31,165,59,108,173,
159,145,166,3,190,220,17,248,209,202,183,205,188,131,245,108,209,230,70,205,192,222,221,62,82,65,252,169,216,7,249,114,50,229,118,252,167,163,54,15,211,20,44,104,223,116,161,112,51,200,36,138,96,116,233,
38,229,63,90,95,49,25,70,222,171,254,207,52,18,121,227,74,75,97,70,49,207,220,197,35,72,221,131,147,223,140,82,180,192,12,30,63,74,110,232,216,13,188,253,92,255,0,141,121,167,105,20,147,252,219,10,182,
125,243,80,180,156,114,191,141,89,101,85,7,13,140,245,195,30,127,58,140,174,238,224,15,94,105,49,149,129,145,88,225,247,15,113,210,155,39,155,212,133,35,240,169,220,109,92,110,1,125,54,212,56,72,242,66,
229,189,106,70,66,235,242,242,51,244,226,171,72,129,121,228,159,173,90,147,12,115,143,211,53,86,77,234,122,252,190,194,160,180,85,151,56,229,126,152,170,243,3,180,245,21,110,78,23,33,79,214,171,54,91,
130,107,38,205,17,81,129,45,205,67,38,106,219,98,171,200,189,69,102,203,69,23,220,27,147,147,77,219,156,19,143,202,165,108,238,199,244,163,142,132,126,85,5,149,228,92,41,194,131,85,124,183,105,55,73,183,
104,251,170,58,231,235,90,4,119,234,106,23,224,128,57,164,81,89,163,24,56,20,195,30,62,149,103,105,25,255,0,10,99,15,151,238,228,80,50,190,220,224,129,154,67,30,122,140,26,123,3,158,135,220,82,255,0,14,
113,199,165,72,202,205,14,238,163,159,74,107,91,159,79,122,176,195,3,63,119,240,164,231,253,174,158,130,130,138,251,67,127,90,79,36,112,13,91,84,20,21,247,162,226,42,121,33,73,244,250,82,180,63,40,171,
59,75,3,147,73,229,129,143,231,69,202,69,95,44,183,110,41,225,113,207,127,106,153,148,115,218,148,198,49,72,101,99,17,110,49,197,39,148,27,183,74,176,203,149,32,244,254,116,223,44,142,159,149,23,21,138,
225,119,54,7,34,159,228,241,199,95,173,88,84,24,192,20,108,227,3,240,197,3,43,249,59,87,30,149,30,214,7,177,21,112,70,23,146,114,126,148,195,24,110,134,150,192,87,85,4,143,146,158,35,220,220,109,30,188,
85,133,139,111,191,173,46,8,244,167,112,43,121,125,177,71,145,212,246,169,217,73,7,56,2,140,5,254,19,147,64,21,60,189,188,96,31,165,41,139,61,170,193,249,135,33,128,237,249,211,149,79,167,242,164,5,101,
70,198,71,52,115,158,71,235,86,246,110,255,0,245,82,121,99,177,252,113,64,202,158,94,238,162,154,208,175,166,127,19,86,140,103,156,55,233,77,104,207,110,104,25,87,203,235,156,83,150,51,142,153,171,75,
30,222,180,141,129,219,138,98,208,168,177,182,121,164,117,218,71,28,213,141,133,151,218,145,161,254,34,1,250,82,25,23,151,242,158,58,210,121,92,117,227,222,167,242,203,2,7,4,247,20,121,101,87,3,243,197,
33,149,124,182,7,214,144,219,150,92,176,205,90,242,247,28,15,206,145,131,142,0,205,0,86,88,64,233,207,174,77,49,161,60,242,0,237,86,163,140,255,0,118,149,163,249,121,92,80,5,63,32,14,115,245,160,195,243,
113,140,98,173,170,141,191,119,181,71,36,120,110,62,237,0,67,228,250,16,5,70,214,228,12,241,184,213,177,26,183,44,180,141,26,231,1,112,40,184,21,60,144,172,14,9,250,81,246,97,235,159,108,85,165,132,228,
99,138,119,151,212,241,75,80,42,121,42,188,14,41,166,30,197,170,226,168,147,144,120,245,167,121,93,79,25,167,113,20,188,174,212,44,24,231,156,10,189,229,0,167,52,158,81,167,118,5,47,45,91,175,242,163,
200,30,159,173,91,104,70,114,79,20,141,18,211,187,25,75,200,238,7,20,190,88,232,77,89,88,198,236,0,72,246,233,79,242,207,52,115,10,200,166,209,46,222,148,158,64,219,216,85,166,141,177,143,233,77,104,119,
10,119,97,100,82,88,6,71,3,52,173,14,1,192,12,61,106,211,69,252,233,76,33,184,206,105,243,49,89,20,22,48,221,176,105,76,35,167,36,85,179,9,244,200,30,244,198,140,12,124,167,175,173,23,99,178,42,139,117,
24,224,115,80,189,170,158,64,25,207,122,186,200,7,33,122,123,230,145,126,101,251,162,159,51,23,42,41,249,41,200,219,250,80,45,195,1,129,138,185,229,147,232,163,20,211,133,239,145,71,51,238,28,168,129,
173,215,111,60,254,20,209,101,24,57,41,206,122,213,146,171,211,185,232,41,124,179,216,100,250,81,207,46,227,229,93,138,198,221,123,103,31,90,103,217,151,223,243,171,120,249,177,142,125,105,25,113,219,
244,163,218,75,184,212,35,216,168,33,202,178,242,51,215,53,15,246,108,76,217,120,193,63,90,191,183,175,201,138,102,220,116,28,82,246,146,238,104,163,30,197,6,209,237,100,201,49,159,166,106,188,158,25,
176,155,150,128,175,252,10,182,113,242,158,113,237,72,84,244,7,244,163,218,75,185,124,136,198,79,12,216,70,199,106,183,210,165,93,14,218,62,99,79,155,168,36,230,181,49,183,183,52,155,121,25,233,218,143,
105,46,227,229,70,97,208,237,100,229,163,203,30,228,211,27,195,118,185,249,114,8,244,60,86,177,133,73,228,41,250,211,219,175,255,0,90,143,105,46,227,229,70,23,252,35,112,39,2,102,28,115,182,158,218,10,
178,34,137,153,118,140,3,129,91,92,115,131,248,98,147,105,199,80,125,233,251,73,119,14,84,98,46,132,84,252,183,36,15,117,167,174,143,62,56,184,4,246,224,214,194,198,115,156,100,122,116,169,99,66,91,5,
106,149,89,119,14,84,98,199,165,221,255,0,207,96,79,177,171,112,105,247,184,63,188,207,227,90,241,194,58,85,184,225,60,116,235,218,173,84,147,33,217,25,16,233,218,130,224,137,14,15,251,85,173,101,38,183,
102,7,148,196,168,63,222,21,163,12,39,0,250,122,125,42,204,112,190,237,195,230,95,67,91,70,76,197,177,145,235,218,210,48,6,38,115,234,13,92,139,94,214,127,231,206,99,254,238,106,213,162,6,25,29,143,35,
240,173,24,163,7,105,35,254,4,15,90,217,54,204,100,210,51,35,241,22,162,219,150,75,43,140,116,33,148,212,240,234,119,164,101,109,46,64,244,216,107,94,24,62,114,164,144,51,215,25,173,107,72,38,130,79,221,
145,140,231,4,241,249,86,169,25,57,152,86,186,134,162,209,121,137,12,202,135,215,138,124,151,218,180,135,112,138,98,123,96,243,93,114,182,224,14,220,113,200,60,149,252,233,124,189,216,238,227,144,15,203,
252,248,171,81,50,246,135,146,120,133,252,79,121,117,230,164,51,136,148,0,163,32,215,25,226,109,7,94,190,209,254,199,111,167,220,25,46,27,51,49,94,74,142,112,15,169,56,175,165,35,145,100,94,65,87,238,
180,145,182,120,104,64,244,46,188,214,114,162,164,118,97,241,242,195,206,53,20,83,177,242,135,131,126,12,248,166,246,243,116,186,121,181,139,166,249,136,0,123,154,250,131,194,62,31,135,194,186,29,174,
157,27,164,130,33,251,201,17,190,251,147,150,110,125,123,123,0,43,81,99,66,219,184,46,58,142,244,248,248,36,168,86,231,145,199,35,233,78,149,24,211,119,58,115,44,235,17,153,165,26,150,81,93,16,232,246,
46,55,34,200,189,248,198,126,181,47,153,20,108,60,175,144,30,128,230,152,178,32,0,237,85,143,161,237,138,145,89,36,139,1,70,123,249,109,156,215,81,243,164,128,134,110,29,3,122,55,6,149,164,104,240,199,
229,29,246,31,214,163,249,177,200,96,189,48,221,190,149,42,176,101,192,196,135,209,134,42,145,3,100,145,219,13,185,182,231,130,160,154,153,88,62,3,114,62,156,212,94,111,150,197,14,216,139,122,158,15,235,
78,86,110,9,25,31,236,144,127,157,32,39,31,139,31,214,128,228,114,120,236,105,33,35,42,87,99,41,232,91,112,255,0,245,84,216,103,206,80,6,252,193,166,72,41,67,213,153,123,227,21,48,144,14,55,182,61,48,
42,36,70,35,33,65,199,4,102,164,88,196,103,251,163,253,160,24,80,34,72,230,103,3,37,136,245,193,200,169,112,75,101,190,99,245,198,106,5,109,188,100,145,234,0,197,73,25,24,194,177,43,234,88,13,191,173,
49,15,242,194,177,101,76,169,234,49,210,151,230,85,195,38,209,212,28,212,145,196,210,118,193,254,241,199,52,229,183,41,131,146,132,30,132,241,76,67,22,64,235,143,54,35,254,204,139,207,211,57,165,17,170,
253,226,195,209,130,113,252,234,69,81,39,27,21,190,135,25,165,88,118,228,124,202,61,70,78,63,1,76,68,107,177,120,14,168,79,125,204,65,253,14,42,210,249,161,113,148,96,58,236,201,63,203,154,79,179,110,
67,177,85,207,117,192,6,155,18,140,124,201,211,191,165,48,29,228,188,200,88,48,97,159,225,28,254,60,211,54,134,27,72,101,97,199,4,243,250,226,164,97,142,66,177,95,92,116,167,169,36,124,220,159,97,64,143,
56,12,169,192,96,79,212,102,162,150,77,220,99,30,228,138,145,159,106,147,133,31,135,74,137,186,31,148,26,242,238,118,140,192,199,205,203,125,105,187,119,119,249,125,219,154,147,111,247,138,129,237,214,
152,229,122,41,253,41,12,142,69,249,186,169,30,245,20,141,184,103,0,129,82,5,192,251,252,142,121,239,81,51,255,0,156,210,101,16,54,198,228,33,207,169,111,233,80,62,113,235,233,86,36,198,236,229,137,168,
27,29,121,172,217,104,172,125,66,241,222,171,48,239,253,42,220,157,51,223,235,85,159,158,49,197,100,203,69,105,56,227,28,250,85,121,179,130,58,85,153,2,250,115,85,228,198,107,54,104,138,178,54,24,3,159,
175,106,71,7,174,112,61,170,87,1,178,113,145,81,237,249,115,210,160,161,185,10,113,77,227,215,138,144,15,106,132,146,173,147,200,52,12,100,138,120,195,84,76,219,126,243,0,79,185,171,24,221,208,118,168,
217,118,227,43,147,235,74,224,138,216,36,117,6,147,105,0,116,30,181,56,27,137,255,0,14,148,121,99,159,155,4,80,81,93,147,208,126,66,151,104,10,120,169,138,30,165,184,250,208,84,99,147,154,64,65,219,25,
207,214,151,175,99,82,113,233,143,165,49,227,62,98,176,44,0,24,219,145,131,239,254,125,104,24,1,248,15,122,110,220,117,197,63,105,224,226,157,183,185,24,160,119,33,111,93,188,14,122,210,42,110,195,99,
21,46,214,247,62,148,109,102,60,138,6,68,177,244,25,164,216,23,53,43,166,123,129,77,227,112,4,49,250,10,67,184,192,187,79,95,195,20,184,244,253,69,74,16,114,114,115,74,168,123,12,210,64,69,183,35,154,
68,143,56,169,182,30,135,31,133,40,80,180,198,69,183,234,40,101,11,244,246,169,182,13,180,38,25,114,40,2,38,140,55,108,210,24,186,115,83,147,237,77,218,187,129,35,145,220,246,164,3,21,126,153,244,164,
217,158,106,66,7,20,109,219,237,64,17,249,101,187,1,75,130,63,194,159,143,74,77,187,123,102,158,224,68,84,117,193,166,182,55,99,250,84,185,224,228,96,253,41,173,185,187,124,190,152,165,96,19,111,112,105,
141,156,130,106,69,200,192,9,145,78,85,231,238,255,0,245,168,176,16,224,244,193,20,5,192,235,83,115,220,83,88,23,232,56,166,4,123,127,200,166,20,231,215,235,83,249,103,147,154,132,71,34,200,229,216,109,
236,184,228,82,24,134,49,233,143,122,101,194,190,195,177,176,227,218,166,98,19,230,36,154,77,187,142,65,249,104,176,21,161,38,104,195,103,219,0,83,153,91,140,241,86,21,15,61,169,141,26,156,3,200,169,2,
29,189,0,31,214,146,51,184,114,184,228,143,173,73,228,237,86,193,231,233,205,42,227,140,149,166,23,25,34,243,144,58,211,118,150,35,140,154,151,203,221,201,56,20,5,59,136,60,14,220,80,23,35,242,200,231,
25,163,203,200,31,202,165,85,110,56,253,40,49,144,122,208,59,145,44,72,137,193,80,59,0,48,41,184,27,170,70,83,219,242,167,133,7,168,252,232,2,53,66,222,244,184,110,123,123,84,155,64,233,197,53,179,187,
219,183,52,8,174,209,182,226,105,54,110,60,230,167,193,218,112,48,115,220,210,109,56,233,207,214,128,32,49,142,195,31,74,80,160,251,227,189,75,180,240,106,57,145,246,55,150,87,126,62,93,217,198,125,233,
216,4,48,227,161,166,249,126,164,84,171,238,57,246,166,182,63,28,83,184,16,72,155,84,144,62,162,141,163,3,138,144,175,205,237,67,16,189,63,58,96,51,203,12,14,63,149,48,141,188,17,154,115,103,118,115,154,
56,233,138,64,64,217,24,201,218,180,205,219,151,25,227,61,69,88,245,220,7,183,90,110,193,215,150,29,134,41,133,202,252,179,3,147,142,184,199,74,93,185,35,156,99,219,173,75,180,184,219,247,127,221,164,
218,85,73,12,79,127,122,10,35,219,184,158,73,253,41,126,81,255,0,235,167,237,27,112,91,52,141,128,61,7,210,129,145,240,87,56,35,52,210,203,130,1,207,181,73,247,73,228,211,60,178,65,32,253,121,164,81,16,
33,179,142,131,222,147,163,112,70,49,79,104,248,57,56,39,184,164,242,246,130,67,100,251,138,86,40,78,191,196,0,246,165,11,78,219,223,60,251,210,121,123,179,192,30,254,180,20,152,208,75,99,154,54,158,152,
31,92,212,129,87,166,63,58,60,175,160,164,59,145,99,229,4,224,123,230,151,32,142,113,142,149,32,81,245,246,165,43,149,239,249,211,176,238,69,140,250,40,165,218,7,124,251,117,169,18,54,218,161,136,47,142,
79,74,114,236,221,183,171,98,158,161,113,170,167,130,57,63,74,158,27,112,217,56,24,239,79,133,48,227,143,174,42,202,70,59,14,245,73,16,228,44,48,227,39,169,199,28,123,213,139,120,207,39,173,58,56,195,
2,118,213,200,163,218,122,113,142,43,104,163,25,49,34,140,169,24,28,231,1,171,65,35,224,169,25,7,210,162,183,141,151,233,158,149,126,8,195,17,145,248,214,201,24,182,75,107,1,143,167,86,3,189,95,183,219,
180,231,36,122,84,49,194,10,143,203,129,86,99,132,112,57,86,234,51,208,214,241,48,147,44,219,225,70,65,37,122,3,184,224,85,184,225,145,183,186,199,144,58,237,63,173,87,129,26,63,226,93,184,231,173,93,
133,100,24,112,23,215,118,227,154,217,24,178,197,187,103,239,6,111,160,34,173,169,59,112,10,108,60,109,108,228,84,42,119,228,20,87,231,174,41,234,173,27,28,132,74,209,25,19,71,230,50,236,102,32,244,12,
135,34,157,228,238,39,113,145,129,199,86,228,125,41,170,200,170,114,62,95,246,137,254,148,245,217,33,56,1,216,117,82,228,127,58,162,73,86,53,92,9,28,237,198,50,7,204,15,189,18,91,236,249,144,238,140,242,
67,103,53,26,239,218,65,79,44,127,121,152,17,250,83,150,54,94,73,118,199,96,50,15,235,65,4,139,254,246,210,58,114,0,35,223,53,40,131,56,109,203,158,227,25,168,255,0,117,192,101,86,29,64,144,96,143,210,
149,96,80,115,30,236,30,118,224,252,191,141,80,137,85,200,202,131,74,23,204,60,35,30,56,42,173,252,192,165,92,58,140,182,214,7,134,205,57,100,151,144,199,120,245,86,60,210,36,60,198,143,0,196,197,125,
36,67,143,194,166,77,135,7,203,140,30,196,160,254,116,213,109,188,28,140,244,220,73,166,201,242,243,183,110,123,109,207,243,170,2,208,195,49,224,28,158,87,165,61,102,218,219,24,2,189,129,231,21,94,22,
222,0,59,125,155,110,42,207,222,80,28,177,237,203,113,248,83,36,112,133,56,116,118,200,236,191,224,104,243,128,144,38,24,110,254,250,99,31,157,67,229,133,251,203,207,111,155,143,161,20,245,242,228,192,
42,170,71,175,106,98,38,243,12,76,1,33,84,250,47,32,212,133,136,144,54,192,224,244,249,127,198,155,26,134,200,82,164,227,174,240,73,252,233,203,242,48,4,99,223,113,6,129,50,69,218,72,37,89,71,109,167,
24,167,139,128,160,130,88,227,251,199,52,209,183,161,228,250,83,148,46,239,152,178,15,93,216,197,2,28,101,109,187,148,236,30,220,173,42,220,249,139,150,17,145,211,14,51,73,27,20,206,10,191,251,67,6,157,
189,145,179,229,47,63,197,142,180,8,84,33,78,228,49,198,125,83,189,61,219,113,37,157,247,123,17,138,140,153,50,119,12,169,244,198,105,200,202,220,15,155,234,58,83,16,240,140,189,36,102,244,13,208,210,
238,43,206,70,71,168,201,161,89,87,63,41,63,133,8,235,34,140,2,71,170,158,106,132,121,212,159,55,63,210,155,180,168,231,147,239,82,156,47,37,185,168,228,218,221,79,235,214,188,163,184,99,116,60,129,81,
124,173,247,87,3,190,59,210,176,28,103,167,165,25,13,140,31,160,164,81,19,5,94,49,138,174,224,238,232,0,250,115,86,26,60,246,31,149,70,202,19,57,11,249,98,147,26,32,145,67,46,1,252,118,213,102,207,115,
154,158,71,61,0,253,106,22,94,58,254,149,12,164,67,39,0,118,170,178,49,7,222,173,76,187,71,90,172,209,16,122,214,76,209,21,190,124,124,199,113,246,24,168,157,119,30,120,252,106,203,99,30,245,6,225,187,
181,67,45,50,38,31,228,211,27,105,21,51,71,187,249,212,114,41,7,211,241,172,202,34,110,27,129,81,48,92,128,71,2,166,101,0,142,79,183,52,198,233,156,96,211,25,31,241,125,220,82,55,255,0,171,53,33,66,205,
214,149,99,25,197,32,33,242,207,94,49,223,138,107,32,124,169,3,110,48,70,42,193,140,253,63,10,110,223,76,126,84,134,64,84,244,192,246,168,215,118,239,189,147,234,106,198,15,113,150,250,82,5,13,142,61,
232,40,133,125,15,3,20,161,67,117,206,61,170,109,167,181,55,144,216,226,128,34,242,247,115,222,152,209,251,103,219,21,99,5,191,139,34,146,68,200,61,105,1,93,97,60,238,52,253,167,105,193,20,237,131,175,
90,92,231,182,40,40,175,229,14,253,125,113,214,157,208,113,82,19,185,143,79,198,134,79,108,143,106,0,141,70,123,83,136,3,29,105,203,24,110,49,78,218,87,129,206,104,2,60,159,76,15,74,122,229,148,113,138,
103,241,99,13,249,84,163,43,142,9,160,100,76,135,60,210,170,119,7,53,35,43,122,12,81,183,191,11,64,16,237,57,199,95,106,94,87,30,191,90,126,223,155,138,77,135,60,12,145,74,195,184,222,113,197,56,39,227,
239,75,183,191,67,237,74,177,231,187,81,96,35,218,113,232,58,117,164,227,235,83,21,29,9,168,155,43,209,134,126,148,192,137,253,49,159,198,156,164,227,167,62,244,238,115,156,102,149,148,238,25,24,62,244,
5,198,178,142,163,244,161,86,165,85,20,187,85,71,92,254,52,8,139,27,186,99,138,105,192,207,25,169,124,177,65,65,215,167,214,129,144,72,184,30,228,118,164,3,219,2,167,11,180,127,123,241,166,73,242,142,
156,208,50,61,187,186,242,61,105,165,118,242,14,7,165,76,170,122,237,24,167,50,242,120,230,129,92,131,203,56,224,253,78,41,187,71,25,197,88,232,58,83,56,102,224,1,248,84,216,46,65,180,28,141,195,61,169,
60,190,181,62,222,73,198,13,12,163,189,22,25,14,208,9,59,185,164,218,24,125,234,149,163,228,112,62,180,109,110,71,106,5,114,37,227,56,234,59,209,134,235,82,24,217,84,113,210,141,165,127,139,52,1,31,62,
156,210,109,59,115,215,210,166,31,40,25,25,247,205,38,220,231,159,194,152,202,255,0,49,98,27,1,113,248,210,73,149,232,51,83,136,254,99,253,105,187,88,41,245,166,43,145,42,177,94,70,7,210,145,182,142,78,
120,169,66,54,236,241,73,36,121,244,254,116,134,66,164,63,32,146,15,181,56,175,108,96,211,246,237,199,25,111,165,5,88,175,81,154,98,185,22,207,194,154,217,237,205,72,79,92,224,159,173,53,149,65,29,15,
227,69,130,228,92,250,254,116,214,90,149,148,117,93,191,206,155,229,142,24,230,129,145,249,123,87,4,147,76,219,187,140,16,5,76,203,148,60,159,202,154,136,115,220,243,64,16,180,96,127,22,104,29,177,140,
230,165,120,119,28,246,238,15,122,97,143,111,240,131,76,6,179,1,212,130,41,3,33,232,212,121,42,173,158,84,250,102,157,229,144,126,238,61,233,12,134,72,220,178,148,11,215,146,199,182,15,79,124,226,148,
167,76,12,250,212,155,14,119,16,71,177,161,163,207,77,223,152,160,100,76,172,64,56,199,167,20,121,61,207,90,82,167,0,118,250,209,202,246,30,220,208,50,19,142,122,102,145,215,25,25,169,246,238,108,143,
199,158,122,83,25,122,14,64,247,52,135,114,12,30,71,126,199,20,245,4,174,3,47,225,82,21,27,72,200,36,125,105,35,140,118,81,249,82,44,143,99,183,241,116,252,105,118,48,244,63,133,73,237,183,229,245,165,
198,79,76,123,118,167,96,185,11,101,112,54,131,220,241,78,69,78,48,185,36,250,84,219,75,54,208,86,157,229,144,58,140,251,112,42,172,14,68,107,24,199,95,168,163,236,205,231,43,199,244,57,171,17,196,72,
227,24,239,83,34,237,170,72,158,97,176,197,234,70,59,241,86,225,143,11,198,113,66,46,112,54,156,96,85,136,227,224,96,96,142,42,210,34,227,162,143,106,240,42,236,113,131,211,245,166,70,156,140,112,59,85,
184,87,174,6,15,90,214,40,198,82,29,26,183,205,128,55,14,213,110,221,56,200,27,77,70,139,187,168,57,199,53,110,37,94,14,222,125,184,53,178,70,77,142,143,45,216,14,217,252,106,234,168,43,128,216,233,80,
70,1,207,13,245,29,71,225,86,64,220,255,0,35,2,15,99,154,213,25,50,221,186,238,81,157,192,247,194,245,247,21,60,49,240,127,124,196,122,149,35,21,90,29,203,140,246,239,87,163,221,38,226,28,43,241,219,173,
104,140,153,36,112,190,8,102,92,245,12,59,212,203,144,163,114,43,127,181,158,42,40,212,179,5,39,62,217,227,242,169,210,46,185,217,142,252,158,42,200,100,177,198,194,82,10,2,8,224,103,175,181,63,202,117,
233,19,166,223,111,243,197,51,247,105,242,179,100,118,57,230,157,184,182,60,189,193,199,229,84,73,54,74,12,152,240,58,48,101,200,63,224,105,115,186,48,195,118,222,152,101,60,82,196,88,18,194,85,32,245,
28,230,158,141,35,100,171,13,221,10,145,214,153,2,46,201,23,27,247,56,231,4,211,190,99,247,73,83,219,52,190,97,145,182,179,46,127,184,199,6,134,85,94,113,142,123,177,2,128,5,83,146,178,2,27,233,144,105,
124,165,200,216,202,135,177,201,31,165,46,226,253,27,97,30,156,138,151,204,60,111,59,190,163,138,104,68,19,67,52,106,25,138,50,142,241,30,127,35,83,195,113,186,60,71,42,134,29,6,120,63,133,58,43,179,11,
237,108,33,63,222,228,17,82,172,202,221,162,32,244,249,121,252,234,137,17,101,118,251,225,119,125,77,61,89,213,62,100,32,250,168,200,253,69,27,163,147,3,12,24,115,138,120,61,144,117,237,200,164,33,233,
33,117,1,187,241,243,45,74,209,43,12,237,92,175,33,129,63,202,160,218,27,57,194,183,82,181,34,183,150,203,185,241,158,6,229,36,126,117,72,66,252,175,208,6,97,232,213,40,109,203,143,47,113,239,184,140,
82,52,110,205,210,28,119,236,212,42,229,176,89,179,236,188,83,36,127,150,88,100,237,199,96,115,72,190,112,124,124,164,143,99,154,145,2,243,184,231,212,49,52,237,163,104,29,71,110,51,64,129,67,182,114,
136,231,182,0,83,68,123,177,130,165,1,237,199,20,138,161,178,48,64,244,169,55,20,42,61,78,3,100,115,245,166,23,21,83,140,146,192,142,10,177,83,248,210,23,128,117,220,216,247,233,82,109,99,146,162,48,223,
237,103,250,83,209,95,169,117,86,3,160,228,83,2,37,148,49,200,98,167,233,205,75,179,230,4,184,195,127,18,241,250,83,148,62,51,133,199,124,210,237,70,200,202,251,168,24,160,147,205,87,229,200,60,251,98,
149,156,169,249,99,11,158,188,243,78,101,13,207,28,122,45,67,180,113,134,85,31,76,147,94,89,222,132,147,123,177,63,40,7,189,48,70,171,140,159,214,157,180,244,221,184,122,226,147,175,1,73,169,184,200,216,
174,120,28,255,0,178,57,252,234,25,120,61,50,125,234,102,102,236,15,226,120,21,3,41,97,201,3,61,42,74,34,39,176,226,162,96,219,143,7,138,151,0,2,51,250,84,108,167,222,164,164,66,202,112,122,98,160,144,
15,198,167,147,212,230,160,108,55,67,89,50,202,228,12,251,84,76,187,187,125,106,195,15,90,133,154,165,150,136,246,149,206,58,84,101,79,126,79,90,149,178,221,14,62,166,149,128,29,107,49,144,0,51,235,199,
28,84,110,160,251,212,229,125,72,199,210,144,198,51,199,39,233,76,10,229,113,200,63,149,11,131,207,52,253,187,88,244,34,148,168,56,231,7,233,72,100,101,122,142,212,195,24,29,42,66,54,250,159,198,143,226,
255,0,235,208,50,31,45,153,135,205,199,165,35,46,227,142,71,175,53,49,83,214,155,180,103,60,210,25,4,54,230,49,128,229,134,115,150,230,158,87,208,1,79,218,91,177,31,90,108,139,34,237,8,138,217,63,49,99,
140,15,235,76,6,28,237,233,147,236,40,101,224,18,42,70,80,65,249,104,24,244,32,253,104,40,174,112,185,199,82,125,40,193,221,156,112,125,170,87,143,166,120,31,239,26,107,117,28,126,132,212,128,213,247,
82,41,172,1,39,63,149,74,184,198,69,56,41,192,226,152,21,213,66,142,163,233,79,94,188,247,235,82,149,166,115,200,99,248,98,144,12,117,27,192,207,39,165,60,47,7,20,252,138,83,233,142,104,25,19,3,212,244,
166,152,220,200,27,36,46,8,43,235,211,252,254,53,46,209,215,57,20,99,57,200,230,152,92,140,161,199,76,251,210,166,54,241,205,59,140,100,156,126,20,5,10,188,31,210,144,196,17,143,127,206,130,55,119,253,
41,234,159,40,228,159,122,118,208,104,11,145,109,224,231,175,210,144,70,24,0,192,19,79,108,253,41,168,58,159,199,20,236,2,20,2,145,64,108,247,230,164,231,252,154,77,220,227,128,126,180,236,2,50,142,131,
138,111,151,146,15,34,157,191,230,11,215,220,83,204,99,7,35,154,67,25,183,214,162,242,250,243,199,64,42,93,163,119,65,237,74,202,118,156,98,144,16,182,23,3,230,52,152,220,167,229,227,158,249,169,89,119,
112,87,3,233,73,176,14,7,79,165,0,70,20,247,56,252,104,108,116,207,227,82,40,59,113,138,69,81,192,2,129,17,238,227,25,193,250,211,50,50,48,63,26,146,72,200,201,166,42,134,83,156,138,6,39,61,198,69,13,
215,161,167,178,225,115,206,62,180,223,155,177,197,1,113,141,242,245,28,103,56,165,87,218,50,127,149,46,14,227,223,241,167,109,246,231,235,72,8,148,238,207,24,250,209,142,58,126,149,35,41,80,59,210,42,
158,244,192,103,208,113,72,173,243,17,223,184,169,89,70,220,100,3,72,170,123,128,40,2,54,93,252,138,107,71,82,149,61,233,140,187,78,69,0,70,202,121,230,154,217,3,252,42,98,164,224,1,197,53,144,243,144,
1,161,1,23,78,155,179,72,220,227,229,61,122,83,190,108,19,140,143,165,61,149,155,24,4,126,20,196,65,179,56,24,168,246,19,144,83,1,122,115,214,172,170,142,132,103,240,161,147,251,166,152,202,225,120,1,
84,3,70,210,87,39,0,119,169,54,178,28,19,156,244,24,20,187,125,69,0,84,108,46,79,175,76,244,165,80,91,169,92,227,214,167,42,188,2,48,123,113,72,209,157,196,126,152,160,104,172,1,221,158,191,74,29,79,45,
233,86,12,59,122,242,125,169,27,104,207,111,94,105,8,129,212,6,247,246,164,101,249,64,86,85,30,253,106,94,59,116,250,208,83,115,127,74,99,43,178,182,224,11,6,63,74,54,5,92,224,254,85,97,151,105,230,152,
65,231,160,246,52,134,69,179,230,233,147,244,164,101,199,240,254,149,35,124,188,156,208,126,99,235,65,87,32,245,206,7,224,105,74,43,99,61,125,133,79,229,243,232,105,222,89,193,1,168,11,149,154,61,163,
190,125,133,11,22,229,206,127,165,76,200,197,135,60,83,188,183,228,140,227,222,132,59,149,140,45,187,61,191,58,114,192,113,239,234,106,96,157,55,102,156,139,185,136,35,0,119,166,43,144,121,10,173,200,
201,237,83,44,43,156,241,140,212,203,30,120,4,30,58,211,214,51,247,106,133,113,158,89,231,129,147,218,149,96,218,192,17,86,22,13,153,35,25,245,197,73,12,103,63,48,201,30,149,105,19,113,35,140,113,199,
110,112,106,104,33,11,200,250,242,106,88,224,27,136,199,21,102,56,182,255,0,14,70,107,68,140,219,8,99,59,20,144,61,198,106,194,252,193,112,57,250,82,136,198,229,29,186,253,13,78,137,142,63,74,213,25,54,
10,157,14,48,58,213,200,241,202,150,198,58,113,81,172,123,151,24,250,113,82,133,111,238,242,58,131,86,102,201,140,106,8,0,159,78,42,104,209,73,216,197,189,69,49,113,193,7,35,60,115,86,124,183,231,129,
34,159,67,200,173,9,37,183,234,63,120,199,177,205,88,133,2,176,25,28,247,200,168,162,64,120,101,221,142,65,7,154,181,10,163,31,245,100,31,92,154,180,102,201,60,146,248,44,196,129,239,145,255,0,214,169,
20,28,12,46,238,58,154,34,133,119,114,187,189,41,241,128,156,42,50,158,163,28,85,144,72,179,109,92,249,33,189,118,129,72,211,133,101,60,3,216,138,81,113,140,6,249,191,26,144,44,111,209,65,29,193,193,31,
202,168,155,139,27,129,247,83,159,246,120,167,134,61,199,94,157,169,145,170,140,109,39,3,210,166,85,109,197,119,16,59,2,13,2,30,179,9,20,43,199,207,124,175,242,169,99,86,108,21,218,222,189,0,170,235,189,
7,239,58,143,110,42,117,143,114,228,0,63,90,164,72,246,140,238,232,168,123,128,220,211,163,242,219,228,98,205,219,4,138,106,57,93,188,47,224,42,86,220,62,102,112,163,233,197,50,70,172,34,62,21,2,175,165,
42,168,82,196,167,212,55,74,146,61,219,127,132,145,212,168,161,102,249,185,101,227,161,80,114,62,180,196,57,54,227,143,151,184,4,228,83,246,164,145,240,118,145,200,61,197,27,71,57,4,241,158,153,252,170,
72,157,15,1,49,239,138,122,18,44,118,235,42,128,100,83,244,167,198,158,72,33,89,128,199,204,146,115,72,160,6,31,63,252,4,143,235,82,47,204,56,108,251,131,64,49,234,202,202,6,3,16,59,55,52,54,24,240,54,
183,208,26,70,83,212,243,244,52,241,32,97,202,237,199,66,13,80,129,92,127,16,59,191,189,180,26,85,153,55,124,167,112,238,58,83,163,35,174,120,236,77,58,76,54,24,109,244,63,40,197,2,98,238,89,7,204,10,
122,48,161,140,67,135,76,243,252,67,57,164,25,97,141,184,35,184,237,248,84,171,30,228,192,200,247,193,227,245,160,146,69,218,58,42,159,78,77,39,148,20,128,169,180,118,96,217,168,148,52,108,119,18,77,73,
185,88,245,193,239,78,224,59,114,129,134,10,15,160,161,24,144,65,66,71,247,128,28,83,87,190,9,3,251,194,156,25,9,195,2,79,247,134,51,72,15,56,109,189,249,246,168,216,243,133,76,254,60,83,246,8,199,202,
49,77,57,207,94,43,203,61,2,54,39,29,54,159,173,55,107,47,124,122,243,79,216,58,238,230,154,200,91,252,106,71,98,22,218,6,115,244,21,12,159,54,121,199,189,76,248,25,227,119,215,181,68,112,220,230,165,
148,67,183,29,27,53,27,12,113,82,48,59,178,63,58,139,146,73,36,84,20,136,153,79,92,212,78,184,235,197,74,249,237,210,160,101,35,147,214,161,148,70,221,249,252,170,22,234,56,171,39,216,113,80,48,235,199,
231,80,90,25,183,154,107,30,163,176,169,25,118,231,214,163,239,214,164,99,10,3,200,28,211,89,78,220,118,245,169,142,57,245,250,83,72,60,208,4,37,74,228,227,52,189,84,100,1,235,154,120,83,200,235,77,219,
187,134,25,29,197,32,24,241,158,199,159,106,110,205,188,10,177,250,84,123,114,61,251,243,65,68,123,15,57,164,11,233,154,159,104,218,113,80,157,188,138,0,79,225,231,60,81,193,233,147,79,88,248,231,4,210,
237,226,144,12,32,250,83,10,251,113,86,25,112,185,166,40,228,140,113,222,152,200,182,129,212,147,73,180,122,224,84,197,122,112,105,177,130,209,169,117,216,228,100,169,57,193,244,164,192,139,111,183,94,
226,141,141,254,21,50,254,148,214,94,65,198,77,23,24,205,189,120,250,211,25,78,56,0,212,140,164,208,114,203,200,192,161,5,200,145,112,222,244,254,167,175,21,24,206,227,143,211,235,82,46,113,128,48,41,
140,107,103,140,46,70,121,201,160,47,203,201,169,118,19,140,243,248,83,136,39,169,164,4,62,95,76,245,166,144,87,25,35,218,165,42,14,14,115,138,93,163,174,57,160,8,148,118,61,123,211,182,246,167,122,122,
210,237,203,125,218,96,69,183,220,145,75,229,159,122,121,5,79,74,69,206,57,160,8,219,215,105,60,226,149,84,55,36,83,240,59,10,56,224,109,160,6,96,116,31,144,160,199,244,52,187,130,183,78,105,197,126,95,
246,177,64,16,178,231,131,138,80,171,238,15,214,158,177,238,206,69,43,41,81,129,64,238,66,216,82,71,191,173,46,213,167,99,110,115,77,245,227,245,247,160,4,219,199,29,41,139,25,221,210,166,199,231,245,
163,203,219,211,129,154,4,66,87,61,7,210,153,180,49,231,241,169,153,73,233,248,156,244,166,109,32,156,126,28,208,59,137,36,121,31,41,193,245,244,168,219,11,130,114,113,237,83,109,33,127,157,29,123,84,
140,174,177,158,78,115,205,73,25,192,36,142,126,149,35,40,234,69,53,177,184,123,208,33,26,50,203,201,197,49,163,236,56,62,181,62,221,189,233,187,128,61,71,210,152,238,65,252,59,122,159,90,60,176,61,115,
83,28,55,83,77,60,18,1,253,41,0,140,185,192,168,246,30,123,212,163,242,244,164,219,223,25,160,100,108,48,56,235,77,252,42,76,12,2,65,7,189,27,119,28,227,138,0,143,203,93,196,227,242,166,242,199,24,35,
223,165,74,202,59,80,223,136,21,64,69,179,140,227,245,166,52,107,198,65,250,212,219,179,146,63,10,105,227,222,128,32,42,160,244,252,104,10,9,24,53,46,222,7,248,82,13,171,206,40,36,133,151,61,0,52,21,45,
129,147,138,147,110,118,158,113,244,165,56,60,12,208,81,14,220,99,156,158,135,138,70,143,174,78,71,255,0,90,134,253,222,62,83,159,231,79,81,211,169,205,43,1,18,174,9,202,129,138,27,239,1,212,84,189,57,
34,128,1,28,126,52,1,25,140,242,2,237,168,157,10,245,60,154,176,164,2,65,198,239,198,149,151,112,60,15,231,72,119,43,121,125,14,40,75,116,89,11,227,230,110,188,250,85,173,167,183,242,160,138,161,21,217,
91,32,109,231,235,66,169,236,120,169,188,173,204,11,96,99,218,157,183,253,154,97,114,190,211,158,153,167,114,49,233,82,42,244,226,164,218,73,233,197,22,31,49,88,169,45,216,113,147,74,176,229,114,167,34,
166,43,181,135,203,79,93,219,133,82,66,184,197,66,220,15,231,82,172,35,174,51,79,84,60,99,53,48,200,109,189,71,242,170,177,55,35,242,250,143,90,124,105,198,112,79,208,84,194,48,196,48,62,212,229,251,216,
29,123,226,173,34,110,58,37,206,50,10,253,106,202,169,219,207,31,133,51,104,99,212,131,86,23,10,172,72,249,106,210,33,177,202,138,64,207,202,125,106,120,211,230,207,229,81,70,59,227,30,149,106,48,113,
211,138,209,25,220,126,208,203,200,201,239,82,40,27,84,103,144,112,57,52,145,70,35,7,104,44,164,244,53,50,128,192,146,130,173,16,199,46,50,122,131,158,199,35,165,76,170,51,140,224,244,4,212,126,88,100,
206,222,71,60,12,211,240,204,163,4,142,51,210,172,146,220,113,253,220,176,252,106,85,37,91,12,193,179,237,80,65,35,73,18,176,96,200,195,33,135,67,83,161,27,185,0,26,178,25,60,45,208,48,96,127,58,181,27,
18,191,123,119,161,43,206,42,170,199,206,1,231,182,77,74,171,150,198,226,167,53,100,22,150,64,188,19,193,245,233,73,230,109,108,16,71,166,209,214,157,30,85,112,199,159,76,142,106,66,70,23,238,133,28,114,
57,31,67,84,136,24,178,71,39,163,122,231,130,42,194,225,128,1,151,158,158,244,205,161,152,238,218,88,116,44,49,159,173,63,106,50,146,29,62,148,201,21,85,151,60,100,30,14,79,90,86,142,88,190,97,31,184,
195,2,13,42,252,253,113,207,161,253,105,62,205,229,201,196,132,169,57,28,241,252,169,129,42,200,37,81,148,96,127,218,234,42,88,201,94,114,113,208,174,1,31,149,87,109,202,192,224,156,240,122,159,233,82,
111,117,198,23,35,245,20,33,49,202,139,28,153,195,109,62,157,170,195,34,55,32,18,13,68,224,180,108,119,237,61,207,245,161,99,40,171,186,66,224,140,137,56,230,153,36,209,167,151,134,4,200,163,243,90,145,
24,58,159,188,167,177,78,127,157,54,18,71,32,116,61,113,131,82,238,89,185,46,87,253,172,102,169,8,65,39,64,195,159,82,49,79,218,251,139,42,2,7,7,212,82,44,39,230,216,224,250,224,99,181,88,88,228,251,193,
131,28,114,115,76,67,35,110,160,238,30,153,29,42,65,133,108,238,101,250,138,108,144,187,62,67,2,15,81,183,4,82,249,109,30,57,7,28,231,214,128,30,140,146,54,86,92,48,254,239,122,126,231,92,237,149,156,
125,105,191,123,156,32,250,10,81,156,158,153,250,226,130,4,222,221,66,146,222,212,238,31,5,159,104,250,116,165,242,217,241,129,27,127,188,121,167,42,237,39,124,106,15,162,168,166,2,172,43,223,230,247,
20,244,140,47,202,21,143,60,103,20,109,70,56,219,183,211,6,151,203,49,255,0,24,3,173,0,41,82,185,14,184,244,96,248,165,85,59,113,149,3,235,81,168,243,24,171,225,151,28,117,205,59,106,175,221,192,63,90,
96,121,206,113,208,230,163,37,63,185,147,74,234,35,228,143,214,153,198,236,129,207,175,74,242,15,72,67,32,85,1,64,30,166,163,44,91,25,226,164,37,189,42,38,98,167,144,63,44,212,128,211,150,227,159,174,
106,61,165,122,255,0,58,86,147,118,114,49,248,83,73,221,73,140,141,216,116,21,11,99,181,76,234,87,160,207,210,160,145,143,208,125,107,54,90,24,217,168,164,94,61,42,93,195,111,28,212,50,54,72,237,205,34,
136,91,39,128,126,90,99,225,125,253,57,169,88,115,76,11,215,214,160,6,109,245,60,82,21,231,25,167,119,60,226,144,240,189,106,74,35,242,207,78,212,221,163,119,20,243,147,236,42,54,29,198,72,237,72,96,14,
115,138,24,26,93,167,111,161,197,38,227,183,167,52,0,139,233,154,86,166,238,102,227,166,41,202,167,28,208,4,108,9,200,198,5,32,81,184,99,147,82,50,238,235,210,155,229,132,7,4,231,173,3,23,111,124,116,
160,228,246,193,160,22,7,191,233,78,199,78,57,160,99,22,48,187,142,73,221,201,165,206,51,199,30,212,238,188,28,102,147,32,123,80,2,122,243,199,210,163,111,96,106,64,223,54,49,250,82,54,54,225,142,40,2,
61,191,137,250,208,127,95,173,59,3,28,127,42,97,0,130,13,3,13,221,120,168,228,97,211,25,52,239,188,72,231,31,74,70,95,66,65,160,4,80,23,174,127,58,127,221,234,41,20,29,163,61,125,170,76,97,79,61,123,80,
49,171,142,248,252,41,60,177,193,228,159,90,118,222,127,74,93,157,51,210,129,145,148,238,6,77,38,9,110,148,230,98,138,196,41,62,194,145,209,152,142,72,3,210,147,1,79,122,23,245,164,101,219,159,74,114,
131,248,253,41,136,107,6,192,193,205,24,61,255,0,42,126,79,166,69,47,39,140,226,129,140,108,173,35,46,123,231,215,154,118,209,208,115,77,100,201,235,64,12,219,183,7,165,24,249,189,254,148,187,70,236,230,
151,31,41,29,126,166,128,15,169,230,145,177,212,100,147,232,40,124,162,231,165,30,132,126,134,128,35,218,55,240,62,188,83,151,30,132,143,202,158,6,115,154,77,191,55,35,154,0,67,140,231,191,181,55,35,176,
228,211,130,237,237,199,189,55,110,230,207,242,160,6,54,57,200,168,246,157,192,227,140,254,85,46,193,220,211,149,118,245,160,8,194,99,171,100,82,14,184,169,118,250,15,206,143,45,121,56,252,232,2,45,167,
189,27,123,82,171,134,102,0,28,142,188,82,241,159,106,0,99,124,184,239,72,169,234,63,19,79,244,164,242,254,109,220,244,197,0,49,148,123,126,52,109,252,41,36,77,210,33,32,146,167,35,156,115,140,115,235,
82,115,129,149,192,160,8,246,156,250,131,72,74,142,49,237,78,110,71,248,80,185,250,255,0,74,6,70,195,229,4,224,143,173,24,95,239,126,2,158,87,175,106,104,79,90,0,63,135,142,77,53,148,237,52,253,165,120,
201,62,212,109,195,122,208,50,187,16,188,82,246,233,250,84,140,157,130,143,165,70,217,205,4,134,221,220,228,143,74,143,10,195,105,235,82,237,56,164,242,249,39,118,121,233,64,17,42,133,192,2,145,212,228,
100,115,83,129,232,115,248,211,126,241,198,104,2,186,229,151,37,74,243,142,148,187,78,65,221,154,159,105,227,181,12,191,55,99,64,16,42,231,167,235,72,203,185,112,9,7,214,167,10,51,198,51,73,180,43,115,
200,160,119,34,85,249,112,122,251,83,153,55,103,7,154,120,67,215,244,167,5,207,52,5,200,202,250,244,164,218,121,246,169,112,125,40,218,115,158,181,72,68,91,79,79,151,25,230,147,104,201,224,26,159,102,
78,123,82,21,197,48,34,11,236,7,210,145,91,12,65,25,39,218,166,28,12,149,36,244,197,60,175,25,231,147,76,6,52,38,72,202,134,49,146,49,185,113,145,238,51,78,88,198,240,51,82,170,128,216,53,46,222,224,85,
8,141,80,112,120,197,75,28,123,88,99,140,210,133,231,173,76,177,250,254,21,72,150,198,24,202,200,0,233,215,21,44,112,241,134,52,109,249,184,61,56,230,164,84,37,125,42,209,23,21,99,249,118,245,199,175,
90,146,53,109,187,79,204,13,27,75,97,176,9,235,154,126,224,167,29,243,199,229,84,73,42,199,239,199,214,167,133,8,96,119,96,212,49,171,41,206,224,73,28,241,197,89,85,251,163,30,249,171,68,220,154,63,188,
70,51,79,198,194,0,4,2,51,234,41,131,114,144,122,253,77,78,152,227,35,2,173,16,58,53,232,193,134,214,244,167,66,167,187,3,73,31,203,208,103,214,166,143,128,24,100,41,252,197,104,136,38,88,199,12,159,142,
42,85,67,187,4,253,56,226,163,76,237,36,57,207,189,77,30,89,64,124,145,234,167,165,81,44,124,17,42,177,199,241,115,138,159,105,221,131,187,35,128,58,84,91,74,244,124,143,168,205,77,27,25,20,3,212,85,8,
122,146,157,122,125,113,82,249,172,189,8,62,212,205,191,40,32,22,97,219,142,105,219,70,3,5,56,247,166,136,36,95,45,177,149,80,77,74,35,194,252,142,171,254,240,168,85,85,135,64,125,241,82,168,17,227,7,
112,247,170,36,85,231,43,187,13,212,21,7,20,237,204,203,195,1,142,195,191,231,74,178,35,116,110,69,57,112,88,236,32,127,179,255,0,214,166,128,122,49,43,206,211,239,140,126,120,167,46,211,242,237,32,227,
183,32,212,101,100,140,238,228,174,113,140,113,138,145,89,142,210,9,4,119,94,13,50,88,161,214,17,187,239,175,110,122,84,203,179,110,66,148,7,175,28,84,11,117,27,54,201,2,22,239,82,164,203,202,227,35,183,
52,8,153,84,5,202,12,143,246,121,164,77,155,201,195,47,98,70,41,99,144,196,192,140,237,61,179,197,74,236,207,134,56,98,61,13,80,152,138,83,212,100,116,39,140,212,163,118,1,194,129,234,42,37,249,65,39,
27,63,218,92,226,149,36,218,223,43,71,147,232,7,52,196,76,166,67,198,224,65,233,212,83,246,244,228,15,198,162,105,155,3,247,129,15,225,138,122,228,227,40,29,191,187,210,129,15,101,59,178,91,63,141,57,
119,183,24,220,190,148,192,123,8,252,191,64,212,224,216,39,156,55,167,74,100,146,46,254,65,136,145,220,49,4,83,252,182,96,10,49,95,106,137,152,201,212,231,143,249,102,50,105,187,99,94,68,132,250,169,28,
81,96,45,237,145,190,86,3,62,189,41,99,220,153,203,18,61,170,40,228,13,132,57,3,160,27,142,63,3,218,159,206,236,21,99,255,0,2,20,1,35,49,56,4,2,123,30,153,166,177,199,12,56,207,214,151,107,47,5,114,59,
28,102,151,201,45,207,111,81,193,21,66,60,198,69,61,51,205,38,205,131,169,63,141,56,227,118,20,18,105,62,109,222,159,81,94,49,233,145,51,99,142,167,191,52,210,204,120,10,41,204,165,114,115,76,98,122,116,
247,169,24,198,220,121,38,163,110,189,113,82,54,91,248,134,125,169,165,79,60,230,164,100,12,164,244,108,15,173,66,196,3,142,166,172,49,62,188,123,212,13,140,240,56,169,101,34,54,30,245,9,206,121,254,85,
59,103,39,229,207,227,81,176,25,230,164,100,76,125,121,52,194,7,210,158,113,233,199,229,76,110,106,70,53,151,25,168,143,222,235,83,31,78,212,204,17,154,150,89,19,122,22,192,237,66,174,209,255,0,215,165,
218,78,120,226,141,187,104,16,159,194,115,81,249,37,139,115,199,106,151,183,76,83,189,241,210,144,200,124,188,115,154,121,207,61,233,118,22,230,133,61,69,0,34,168,0,231,167,189,53,177,211,52,48,61,207,
211,138,20,124,220,154,6,32,94,57,235,75,216,0,121,167,50,244,163,105,94,194,128,27,249,211,27,59,136,167,158,61,189,42,60,122,156,159,231,197,3,28,172,125,49,245,52,214,193,239,207,173,29,14,61,125,169,
118,140,30,127,12,80,2,28,237,198,126,130,153,177,183,14,112,59,212,131,229,227,7,218,152,208,238,193,102,207,52,0,173,24,252,105,155,56,29,197,72,192,46,6,51,74,204,58,99,143,106,0,102,220,244,227,214,
145,84,134,45,156,131,219,20,190,102,24,98,159,134,108,124,191,141,3,17,87,158,79,34,156,203,211,39,20,208,220,30,69,46,114,160,99,52,12,107,33,237,200,166,242,51,252,234,70,233,242,240,105,61,65,25,52,
0,220,99,222,151,30,217,231,147,78,95,151,57,205,53,185,206,14,7,165,4,136,51,252,57,52,163,10,220,245,166,114,203,140,156,83,129,200,25,57,252,104,24,167,142,132,12,251,83,118,231,190,104,233,254,120,
164,44,7,56,252,115,64,8,192,46,120,201,62,130,151,35,29,56,161,143,78,158,212,214,246,56,63,74,10,23,110,105,54,149,207,35,20,170,219,169,212,8,140,13,220,244,52,160,108,94,78,105,205,142,59,81,206,125,
168,24,205,192,241,140,210,21,95,167,122,127,208,243,77,110,198,129,12,108,30,249,164,92,238,245,20,227,158,227,138,65,129,158,113,235,72,99,155,7,190,41,153,61,51,75,248,231,20,125,238,127,51,76,4,8,
79,94,159,74,76,115,215,154,86,56,20,198,195,30,26,128,17,189,250,80,222,212,109,235,206,105,25,78,58,227,241,160,5,207,79,240,166,183,203,206,126,180,191,117,70,73,38,151,239,96,118,164,3,55,1,142,198,
131,206,120,165,0,123,116,164,207,35,181,48,14,118,156,242,125,169,164,229,72,28,26,0,219,33,193,235,67,48,86,224,243,233,64,9,188,175,227,77,42,79,67,238,120,167,183,204,167,111,126,115,76,109,219,134,
7,227,64,8,100,37,136,59,151,30,163,249,83,84,134,201,228,254,20,246,99,180,2,41,55,115,143,229,64,13,235,239,72,114,189,87,154,85,103,243,182,133,98,152,37,164,227,0,231,167,92,230,164,242,247,114,78,
51,210,128,33,96,56,227,39,173,57,186,131,143,173,57,163,249,169,84,99,191,52,1,26,158,6,126,239,189,25,27,134,41,216,99,208,100,254,84,8,202,175,175,189,0,53,86,128,135,189,62,60,3,140,80,193,122,211,
1,191,46,125,125,48,104,228,142,56,29,243,74,171,142,71,229,78,218,196,122,10,16,12,218,88,83,150,48,56,3,154,20,29,184,254,116,238,113,199,95,106,100,220,76,49,226,145,148,41,228,254,116,248,243,208,
154,127,151,149,232,13,90,17,22,6,9,234,115,233,79,64,57,199,167,165,63,110,238,148,170,163,241,161,0,0,59,241,82,5,249,105,170,11,110,233,129,216,83,198,85,122,252,217,170,64,10,132,158,79,35,165,77,
180,47,61,169,2,254,21,34,174,236,131,200,171,68,49,202,131,28,247,52,247,93,172,48,112,49,207,189,38,67,48,192,224,211,153,115,142,48,123,85,144,44,127,47,29,187,115,82,198,20,231,32,19,142,244,197,95,
144,63,32,138,154,54,7,3,250,117,166,132,61,0,59,112,50,105,222,98,198,197,126,235,122,48,165,87,242,241,144,112,122,226,164,108,73,159,151,122,158,153,237,84,72,245,102,101,193,110,106,117,231,248,155,
29,198,42,163,70,126,76,59,34,169,229,115,154,181,27,21,36,171,238,171,68,146,174,229,98,7,43,219,34,167,139,36,5,206,220,244,168,21,186,22,227,214,165,28,182,55,231,211,138,162,73,118,188,121,32,135,
29,212,212,176,176,24,59,91,29,214,160,219,187,7,45,239,237,239,82,199,187,105,101,98,125,61,69,89,44,156,42,228,145,146,58,131,208,138,149,80,238,222,172,164,247,235,205,71,27,191,92,227,218,166,143,
28,16,48,125,125,105,162,9,97,109,216,218,193,91,174,51,83,2,235,193,108,123,138,128,254,240,101,91,159,238,154,145,91,42,56,207,161,53,64,72,241,74,220,171,5,31,222,207,244,165,142,2,196,135,118,7,216,
30,41,84,176,92,121,108,63,217,63,210,146,206,111,181,198,146,15,50,46,219,100,92,48,231,21,68,15,85,147,24,201,45,217,135,113,233,205,74,153,227,122,252,185,235,73,229,237,108,137,9,29,247,30,159,74,
69,83,184,175,152,81,243,235,215,240,166,4,165,150,54,249,156,41,237,145,140,254,117,52,115,198,216,195,1,249,98,161,196,203,242,143,153,61,27,7,31,157,61,98,108,29,234,131,253,164,63,210,168,146,215,
238,216,100,149,221,234,86,155,181,131,97,24,22,246,24,168,163,132,142,119,6,29,49,79,249,131,114,56,160,9,22,66,191,235,19,143,113,82,198,35,110,49,149,236,87,168,168,247,14,55,5,111,70,239,79,86,218,
217,3,31,149,49,18,47,25,193,57,237,142,159,141,39,156,17,190,101,219,239,154,55,5,93,192,145,249,98,133,145,27,239,41,207,67,145,138,162,73,85,139,2,12,113,159,115,79,18,62,222,56,24,232,42,1,48,81,130,
164,142,199,20,232,230,231,114,238,92,28,250,208,34,88,228,103,200,49,150,250,244,167,171,156,243,215,182,20,113,77,89,142,73,222,163,253,225,129,78,87,116,232,84,15,246,78,104,36,122,200,120,249,100,
94,227,176,171,10,190,96,200,104,215,61,205,85,249,155,0,128,57,225,179,208,251,211,133,188,170,164,141,161,186,227,117,59,140,86,65,143,148,229,129,193,29,69,74,178,41,234,174,79,112,162,144,110,144,
12,156,55,177,235,237,65,93,167,251,171,245,160,68,203,35,119,82,61,243,77,145,76,202,84,12,123,140,154,69,193,92,48,98,158,184,165,72,226,92,99,114,243,128,84,231,20,1,230,175,185,134,51,143,160,164,
218,84,99,119,231,78,108,238,35,173,51,134,62,181,228,30,145,27,100,119,250,109,21,27,16,71,74,157,144,126,21,11,133,233,140,212,140,134,70,88,148,177,83,199,160,201,252,40,39,218,156,223,76,15,122,103,
57,246,168,29,200,38,99,183,35,191,181,51,105,11,205,78,234,115,199,21,19,30,49,233,214,145,68,37,143,60,212,76,64,255,0,26,154,68,36,16,77,71,229,132,80,189,115,235,83,97,144,72,231,60,138,97,231,29,
69,88,100,24,247,166,16,20,117,164,198,86,108,175,106,68,249,170,102,77,223,74,137,160,27,178,14,61,170,74,27,143,152,138,90,115,16,163,142,180,114,223,74,6,55,171,116,163,25,231,24,165,232,73,6,145,62,
102,235,205,32,21,151,140,82,99,235,248,83,217,79,212,211,87,60,208,34,54,3,130,51,138,21,112,221,56,167,21,221,144,121,221,216,250,82,237,63,81,72,99,14,56,235,78,237,71,126,125,40,42,204,164,41,231,
183,20,0,198,82,195,175,20,138,160,119,230,158,170,87,25,57,52,188,243,235,64,198,113,156,210,108,27,113,186,165,219,236,105,155,73,224,241,64,200,253,65,226,141,163,166,63,26,126,222,184,52,222,78,58,
99,235,64,9,129,216,83,91,29,6,1,169,49,149,199,20,155,49,142,180,0,200,212,231,61,141,57,151,57,39,183,189,57,87,111,67,67,253,104,2,50,78,61,189,41,115,220,3,138,122,160,81,211,154,8,246,230,128,35,
227,119,62,148,119,228,115,216,98,158,84,41,4,143,210,149,128,234,40,11,145,29,204,57,245,199,74,65,242,246,227,189,76,184,235,223,165,53,142,236,96,113,76,6,127,145,78,225,128,245,167,99,60,96,26,27,
24,224,102,144,17,100,109,255,0,235,82,114,120,230,164,82,49,128,0,238,121,165,86,221,64,200,79,99,142,62,180,21,199,63,149,62,69,28,115,238,69,49,179,184,15,94,41,133,197,227,110,58,138,111,52,224,164,
3,206,126,180,187,143,74,65,113,152,203,115,197,42,247,207,90,92,252,195,142,180,109,30,180,12,110,223,65,80,71,49,152,18,7,66,65,252,9,6,172,21,199,106,139,96,81,194,224,103,181,2,16,40,221,145,211,181,
59,111,127,206,137,35,51,66,234,29,162,102,4,7,92,101,114,58,140,130,63,58,114,174,58,26,99,184,194,184,237,72,172,91,211,216,83,219,7,130,113,248,211,12,99,118,61,5,32,184,141,150,206,113,159,97,76,85,
235,129,199,78,69,73,183,111,248,102,160,85,49,163,52,178,121,173,188,227,11,208,19,192,192,244,207,95,106,145,142,245,245,160,19,254,69,42,168,228,158,1,166,201,187,203,114,138,29,128,202,169,56,4,246,
25,237,76,67,153,78,70,5,1,79,76,81,229,224,134,199,56,197,61,114,205,198,62,148,192,139,105,247,252,169,118,244,226,165,249,105,187,119,19,198,71,214,128,184,205,164,253,41,25,119,103,156,253,105,248,
63,116,209,140,114,6,125,104,24,207,47,143,173,71,229,178,228,103,254,4,106,117,250,123,81,183,119,81,245,164,4,59,123,49,201,52,133,113,147,140,118,205,73,36,43,35,41,35,37,78,225,74,87,140,158,158,148,
196,66,58,245,253,105,67,0,62,246,125,42,77,167,210,130,185,83,133,207,210,128,33,96,25,185,6,147,97,200,108,241,82,12,244,237,255,0,215,165,218,49,130,104,25,8,92,48,61,79,165,43,175,202,58,254,21,47,
201,216,208,49,157,216,193,197,2,33,95,189,131,233,233,75,183,229,233,197,73,179,230,60,241,222,157,131,211,166,42,172,23,25,179,112,57,224,210,5,207,7,38,165,11,254,115,71,151,206,115,248,83,36,102,209,
183,25,4,230,141,187,113,159,90,126,208,79,96,9,226,159,229,128,192,28,102,154,1,155,67,103,138,122,169,244,165,219,142,5,59,24,233,129,76,68,74,14,227,143,229,82,40,12,57,230,156,170,84,227,175,181,58,
53,193,57,235,154,104,67,86,50,185,224,26,126,208,115,242,226,156,177,142,213,34,198,57,31,152,170,16,129,126,81,207,225,74,33,59,183,3,145,143,90,118,221,191,150,5,61,148,170,177,198,70,51,210,169,8,
35,83,222,159,183,159,215,233,81,198,163,134,249,128,60,243,83,42,245,238,123,85,34,88,177,169,236,121,238,181,39,150,164,112,64,60,81,24,62,153,90,149,87,126,8,10,73,28,173,90,34,225,24,110,14,241,205,
76,138,234,220,29,203,64,77,202,56,4,123,245,169,17,123,227,140,115,84,32,11,185,143,39,167,67,223,138,116,80,42,140,16,113,223,158,69,59,98,63,86,219,239,253,105,241,198,11,2,11,110,250,228,85,16,61,
99,137,112,14,125,141,74,177,252,184,13,149,39,143,74,103,24,200,199,248,84,177,169,231,8,125,78,5,88,135,5,1,131,12,231,223,161,167,198,202,156,109,218,26,151,202,89,23,32,31,168,39,138,126,199,220,184,
4,227,168,245,170,68,143,141,138,158,88,55,56,206,56,52,248,216,69,176,97,182,158,0,219,197,71,204,76,112,70,27,159,214,173,70,54,227,144,84,245,95,74,100,142,12,23,162,224,245,21,34,57,101,35,24,61,197,
24,59,14,211,66,130,84,18,10,181,49,15,218,89,120,13,237,205,44,123,185,4,144,115,73,27,124,220,252,188,242,13,76,93,143,117,110,213,68,139,229,175,4,162,253,115,64,82,132,163,38,229,254,28,140,210,174,
122,110,222,167,248,72,228,126,52,110,57,42,164,3,233,208,213,129,43,100,227,131,248,127,133,53,80,6,39,121,82,63,17,249,83,227,102,242,193,220,88,127,181,218,164,99,191,60,0,222,244,18,38,213,254,246,
15,251,35,20,244,101,102,4,62,7,189,40,147,24,193,25,247,230,148,48,251,193,121,238,51,199,225,76,67,130,142,115,134,31,236,210,255,0,203,60,30,7,174,58,83,132,165,122,12,143,113,74,173,187,161,3,61,65,
166,43,143,139,124,108,64,244,228,122,210,238,101,39,1,84,17,216,83,60,185,6,50,14,15,32,129,156,26,148,43,47,84,35,241,226,129,14,70,98,56,85,111,161,20,190,118,227,128,112,125,72,197,49,149,115,204,
127,141,61,165,33,155,35,234,8,231,243,170,17,32,145,199,46,161,192,252,105,60,196,221,140,50,18,56,192,20,139,39,35,107,125,42,76,171,12,17,64,129,148,190,0,110,113,208,247,165,85,218,114,16,131,254,
246,104,108,227,42,55,15,115,76,85,118,207,150,165,216,30,71,20,12,155,204,124,29,193,241,215,146,41,201,50,237,193,56,247,235,76,141,101,86,198,197,86,254,233,28,211,134,238,241,175,226,0,52,9,143,243,
0,229,142,245,245,199,52,139,40,42,118,198,121,29,178,77,55,229,96,118,253,236,246,167,69,52,167,24,12,113,237,145,76,71,255,217,0,0};

const char* AiassAudioProcessorEditor::sidblaster_jpg = (const char*) resource_AiassAudioProcessorEditor_sidblaster_jpg;
const int AiassAudioProcessorEditor::sidblaster_jpgSize = 166862;

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


//[EndFile] You can add extra defines here...
//[/EndFile]

