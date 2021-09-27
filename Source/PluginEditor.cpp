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
      m_sid(p.getSid())
{
    //[Constructor_pre] You can add your own custom stuff here..




    //[/Constructor_pre]

    groupComponent5.reset (new juce::GroupComponent ("new group",
                                                     TRANS("Control")));
    addAndMakeVisible (groupComponent5.get());

    groupComponent5->setBounds (15, 80, 245, 210);

    groupComponent4.reset (new juce::GroupComponent ("new group",
                                                     TRANS("Waveform")));
    addAndMakeVisible (groupComponent4.get());

    groupComponent4->setBounds (362, 292, 421, 210);

    groupComponent2.reset (new juce::GroupComponent ("new group",
                                                     TRANS("Tone")));
    addAndMakeVisible (groupComponent2.get());

    groupComponent2->setBounds (270, 80, 236, 210);

    groupComponent.reset (new juce::GroupComponent ("new group",
                                                    TRANS("Sound")));
    addAndMakeVisible (groupComponent.get());
    groupComponent->setTextLabelPosition (juce::Justification::centred);

    groupComponent->setBounds (15, 292, 340, 210);

    groupComponent3.reset (new juce::GroupComponent ("new group",
                                                     TRANS("Filter")));
    addAndMakeVisible (groupComponent3.get());

    groupComponent3->setBounds (512, 80, 270, 210);

    sidvolume.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (sidvolume.get());
    sidvolume->setTooltip (TRANS("SID-Volume"));
    sidvolume->setRange (0, 15, 1);
    sidvolume->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    sidvolume->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    sidvolume->setBounds (64, 90, 66, 66);

    Octave1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Octave1.get());
    Octave1->setTooltip (TRANS("Octave1 Up/Down"));
    Octave1->setRange (-4, 4, 1);
    Octave1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Octave1->setBounds (315, 90, 66, 66);

    Octave2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Octave2.get());
    Octave2->setTooltip (TRANS("Octave2 Up/Down"));
    Octave2->setRange (-4, 4, 1);
    Octave2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Octave2->setBounds (315, 153, 66, 66);

    Octave3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Octave3.get());
    Octave3->setTooltip (TRANS("Octave3 Up/Down"));
    Octave3->setRange (-4, 4, 1);
    Octave3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Octave3->setBounds (315, 218, 66, 66);

    Semi1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Semi1.get());
    Semi1->setTooltip (TRANS("Semitone1 Up/Down"));
    Semi1->setRange (-12, 12, 1);
    Semi1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Semi1->setBounds (375, 90, 66, 66);

    Semi2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Semi2.get());
    Semi2->setTooltip (TRANS("Semitone2 Up/Down"));
    Semi2->setRange (-12, 12, 1);
    Semi2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Semi2->setBounds (375, 153, 66, 66);

    Semi3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Semi3.get());
    Semi3->setTooltip (TRANS("Semitone3 Up/Down"));
    Semi3->setRange (-12, 12, 1);
    Semi3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Semi3->setBounds (375, 218, 66, 66);

    Cent1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Cent1.get());
    Cent1->setTooltip (TRANS("Cent1 Up/Down"));
    Cent1->setRange (-100, 100, 1);
    Cent1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Cent1->setBounds (435, 90, 66, 66);

    Cent2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Cent2.get());
    Cent2->setTooltip (TRANS("Cent2 Up/Down"));
    Cent2->setRange (-100, 100, 1);
    Cent2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Cent2->setBounds (435, 153, 66, 66);

    Cent3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Cent3.get());
    Cent3->setTooltip (TRANS("Cent3 Up/Down"));
    Cent3->setRange (-100, 100, 1);
    Cent3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Cent3->setBounds (435, 218, 66, 66);

    Attack1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Attack1.get());
    Attack1->setTooltip (TRANS("Attack 1"));
    Attack1->setRange (0, 15, 1);
    Attack1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Attack1->setBounds (30, 300, 66, 66);

    Attack2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Attack2.get());
    Attack2->setTooltip (TRANS("Attack 2"));
    Attack2->setRange (0, 15, 1);
    Attack2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Attack2->setBounds (30, 365, 66, 66);

    Attack3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Attack3.get());
    Attack3->setTooltip (TRANS("Attack 3"));
    Attack3->setRange (0, 15, 1);
    Attack3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Attack3->setBounds (30, 430, 66, 66);

    Decay1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Decay1.get());
    Decay1->setTooltip (TRANS("Decay 1"));
    Decay1->setRange (0, 15, 1);
    Decay1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Decay1->setBounds (90, 300, 66, 66);

    Decay2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Decay2.get());
    Decay2->setTooltip (TRANS("Decay 2"));
    Decay2->setRange (0, 15, 1);
    Decay2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Decay2->setBounds (90, 365, 66, 66);

    Decay3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Decay3.get());
    Decay3->setTooltip (TRANS("Decay 3"));
    Decay3->setRange (0, 15, 1);
    Decay3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Decay3->setBounds (90, 430, 66, 66);

    Sustain1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Sustain1.get());
    Sustain1->setTooltip (TRANS("Sustain 1"));
    Sustain1->setRange (0, 15, 1);
    Sustain1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Sustain1->setBounds (150, 300, 66, 66);

    Sustain2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Sustain2.get());
    Sustain2->setTooltip (TRANS("Sustain 2"));
    Sustain2->setRange (0, 15, 1);
    Sustain2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Sustain2->setBounds (150, 365, 66, 66);

    Sustain3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Sustain3.get());
    Sustain3->setTooltip (TRANS("Sustain 3"));
    Sustain3->setRange (0, 15, 1);
    Sustain3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Sustain3->setBounds (150, 430, 66, 66);

    Release1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Release1.get());
    Release1->setTooltip (TRANS("Release 1"));
    Release1->setRange (0, 15, 1);
    Release1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Release1->setBounds (210, 300, 66, 66);

    Release2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Release2.get());
    Release2->setTooltip (TRANS("Release 2"));
    Release2->setRange (0, 15, 1);
    Release2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Release2->setBounds (210, 365, 66, 66);

    Release3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Release3.get());
    Release3->setTooltip (TRANS("Release 3"));
    Release3->setRange (0, 15, 1);
    Release3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Release3->setBounds (210, 430, 66, 66);

    Pulsew1.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Pulsew1.get());
    Pulsew1->setTooltip (TRANS("Pulswidth 1"));
    Pulsew1->setRange (1, 4094, 1);
    Pulsew1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);

    Pulsew1->setBounds (280, 300, 66, 66);

    Pulsew2.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Pulsew2.get());
    Pulsew2->setTooltip (TRANS("Pulsewidth 2"));
    Pulsew2->setRange (1, 4094, 1);
    Pulsew2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Pulsew2->setBounds (280, 365, 66, 66);

    Pulsew3.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Pulsew3.get());
    Pulsew3->setTooltip (TRANS("Pulswidth 3"));
    Pulsew3->setRange (1, 4094, 1);
    Pulsew3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Pulsew3->setBounds (280, 430, 66, 66);

    Velvol.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Velvol.get());
    Velvol->setTooltip (TRANS("maps Velocity to Volume"));
    Velvol->setButtonText (TRANS("Vel."));

    Velvol->setBounds (156, 109, 66, 30);

    legatomode.reset (new juce::ComboBox ("legatomode"));
    addAndMakeVisible (legatomode.get());
    legatomode->setTooltip (TRANS("not implemented yet"));
    legatomode->setEditableText (false);
    legatomode->setJustificationType (juce::Justification::centredLeft);
    legatomode->setTextWhenNothingSelected (juce::String());
    legatomode->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    legatomode->addItem (TRANS("Retrigger"), 1);
    legatomode->addItem (TRANS("Legato"), 2);
    legatomode->addItem (TRANS("Last Step"), 3);
    legatomode->addListener (this);

    legatomode->setBounds (64, 209, 150, 24);

    noteprioritymode.reset (new juce::ComboBox ("noteprioritymode"));
    addAndMakeVisible (noteprioritymode.get());
    noteprioritymode->setTooltip (TRANS("not implemented yet"));
    noteprioritymode->setEditableText (false);
    noteprioritymode->setJustificationType (juce::Justification::centredLeft);
    noteprioritymode->setTextWhenNothingSelected (juce::String());
    noteprioritymode->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    noteprioritymode->addItem (TRANS("Last Note"), 1);
    noteprioritymode->addItem (TRANS("High Note"), 2);
    noteprioritymode->addItem (TRANS("Low Note"), 3);
    noteprioritymode->addListener (this);

    noteprioritymode->setBounds (64, 254, 150, 24);

    hyperlinkButton.reset (new juce::HyperlinkButton (TRANS("crazy-midi.de"),
                                                      URL ("http://www.crazy-midi.de")));
    addAndMakeVisible (hyperlinkButton.get());
    hyperlinkButton->setTooltip (TRANS("http://www.crazy-midi.de"));
    hyperlinkButton->setButtonText (TRANS("crazy-midi.de"));
    hyperlinkButton->setColour (juce::HyperlinkButton::textColourId, juce::Colours::green);

    hyperlinkButton->setBounds (660, 500, 150, 24);

    Filter1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter1.get());
    Filter1->setTooltip (TRANS("Voice 1 to Filter"));
    Filter1->setButtonText (TRANS("1"));

    Filter1->setBounds (710, 109, 66, 30);

    Filter2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter2.get());
    Filter2->setTooltip (TRANS("Voice 2 to Filter"));
    Filter2->setButtonText (TRANS("2"));

    Filter2->setBounds (650, 109, 66, 30);

    Filter3off.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter3off.get());
    Filter3off->setTooltip (TRANS("Mute Voice 3"));
    Filter3off->setButtonText (TRANS("3off"));

    Filter3off->setBounds (530, 159, 66, 30);

    Filter3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter3.get());
    Filter3->setTooltip (TRANS("Voice 3 to Filter"));
    Filter3->setButtonText (TRANS("3"));

    Filter3->setBounds (590, 109, 66, 30);

    Filterin.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterin.get());
    Filterin->setTooltip (TRANS("extern In"));
    Filterin->setButtonText (TRANS("in"));

    Filterin->setBounds (530, 109, 66, 30);

    Filterlp.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterlp.get());
    Filterlp->setTooltip (TRANS("Low Pass"));
    Filterlp->setButtonText (TRANS("LP"));

    Filterlp->setBounds (710, 159, 66, 30);

    Filterhp.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterhp.get());
    Filterhp->setTooltip (TRANS("High Pass"));
    Filterhp->setButtonText (TRANS("HP"));

    Filterhp->setBounds (590, 159, 66, 30);

    Filterbp.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterbp.get());
    Filterbp->setTooltip (TRANS("Band Pass"));
    Filterbp->setButtonText (TRANS("BP"));

    Filterbp->setBounds (650, 159, 66, 30);

    Filter8580.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter8580.get());
    Filter8580->setTooltip (TRANS("scales filterfreq. to 0-71"));
    Filter8580->setButtonText (TRANS("8580"));
    Filter8580->setToggleState (true, juce::dontSendNotification);

    Filter8580->setBounds (532, 236, 90, 30);

    CutOff.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (CutOff.get());
    CutOff->setTooltip (TRANS("Cutoff"));
    CutOff->setRange (0, 2047, 1);
    CutOff->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    CutOff->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);

    CutOff->setBounds (632, 216, 66, 66);

    Resonace.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (Resonace.get());
    Resonace->setTooltip (TRANS("Resonance"));
    Resonace->setRange (0, 15, 1);
    Resonace->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Resonace->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);

    Resonace->setBounds (702, 216, 66, 66);

    Noise1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Noise1.get());
    Noise1->setButtonText (TRANS("Noise"));
    Noise1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Noise1->setBounds (374, 319, 66, 30);

    Noise2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Noise2.get());
    Noise2->setButtonText (TRANS("Noise"));

    Noise2->setBounds (373, 389, 66, 30);

    Noise3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Noise3.get());
    Noise3->setButtonText (TRANS("Noise"));

    Noise3->setBounds (375, 459, 66, 30);

    Pulse1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Pulse1.get());
    Pulse1->setButtonText (TRANS("Pulse"));
    Pulse1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Pulse1->setBounds (443, 319, 66, 30);

    Pulse2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Pulse2.get());
    Pulse2->setButtonText (TRANS("Pulse"));

    Pulse2->setBounds (443, 389, 66, 30);

    Pulse3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Pulse3.get());
    Pulse3->setButtonText (TRANS("Pulse"));

    Pulse3->setBounds (443, 459, 66, 30);

    Saw1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Saw1.get());
    Saw1->setButtonText (TRANS("Saw"));
    Saw1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Saw1->setBounds (509, 319, 66, 30);

    Saw2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Saw2.get());
    Saw2->setButtonText (TRANS("Saw"));

    Saw2->setBounds (509, 389, 66, 30);

    Saw3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Saw3.get());
    Saw3->setButtonText (TRANS("Saw"));

    Saw3->setBounds (509, 459, 66, 30);

    Tria1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Tria1.get());
    Tria1->setButtonText (TRANS("Tria"));
    Tria1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Tria1->setBounds (572, 319, 66, 30);

    Tria2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Tria2.get());
    Tria2->setButtonText (TRANS("Tria"));

    Tria2->setBounds (570, 390, 66, 30);

    Tria3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Tria3.get());
    Tria3->setButtonText (TRANS("Tria"));

    Tria3->setBounds (572, 459, 66, 30);

    Ringmod1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Ringmod1.get());
    Ringmod1->setButtonText (TRANS("Ringmod"));
    Ringmod1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Ringmod1->setBounds (629, 319, 66, 30);

    Ringmod2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Ringmod2.get());
    Ringmod2->setButtonText (TRANS("Ringmod"));

    Ringmod2->setBounds (629, 389, 66, 30);

    Ringmod3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Ringmod3.get());
    Ringmod3->setButtonText (TRANS("Ringmod"));

    Ringmod3->setBounds (629, 459, 66, 30);

    Sync1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Sync1.get());
    Sync1->setButtonText (TRANS("Sync."));
    Sync1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Sync1->setBounds (705, 319, 66, 30);

    Sync2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Sync2.get());
    Sync2->setButtonText (TRANS("Sync."));

    Sync2->setBounds (705, 389, 66, 30);

    Sync3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Sync3.get());
    Sync3->setButtonText (TRANS("Sync."));

    Sync3->setBounds (705, 459, 66, 30);

    Voice1.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Voice1.get());
    Voice1->setTooltip (TRANS("Voice 1 On/Off"));
    Voice1->setButtonText (TRANS("1"));
    Voice1->setToggleState (true, juce::dontSendNotification);

    Voice1->setBounds (285, 105, 66, 30);

    Voice2.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Voice2.get());
    Voice2->setTooltip (TRANS("Voice 2 On/Off"));
    Voice2->setButtonText (TRANS("2"));
    Voice2->setToggleState (true, juce::dontSendNotification);

    Voice2->setBounds (285, 167, 66, 30);

    Voice3.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (Voice3.get());
    Voice3->setTooltip (TRANS("Voice 3 On/Off"));
    Voice3->setButtonText (TRANS("3"));
    Voice3->setToggleState (true, juce::dontSendNotification);

    Voice3->setBounds (285, 230, 66, 30);

    Led.reset (new juce::ImageButton ("Power_LED"));
    addAndMakeVisible (Led.get());
    Led->setTooltip (TRANS("midi-activity and  blinks when error-status"));
    Led->setButtonText (juce::String());

    Led->setImages (false, true, true,
                    juce::ImageCache::getFromMemory (redledoff_png, redledoff_pngSize), 1.000f, juce::Colour (0x00ffffff),
                    juce::ImageCache::getFromMemory (redledoff_png, redledoff_pngSize), 1.000f, juce::Colour (0x00ffffff),
                    juce::ImageCache::getFromMemory (redledon_png, redledon_pngSize), 1.000f, juce::Colour (0x00ffffff));
    Led->setBounds (710, 26, 40, 40);

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

    midichannel->setBounds (64, 162, 150, 24);

    cachedImage_aiasshintergrund_png_1 = juce::ImageCache::getFromMemory (aiasshintergrund_png, aiasshintergrund_pngSize);
    cachedImage_aiass_mono_typenschild_png_2 = juce::ImageCache::getFromMemory (aiass_mono_typenschild_png, aiass_mono_typenschild_pngSize);

    //[UserPreSize]
	legatomode->setSelectedItemIndex(0);
	noteprioritymode->setSelectedItemIndex(0);
    midichannel->setSelectedItemIndex(0);
	legatomode->setEnabled(false);
	noteprioritymode->setEnabled(false);
    midichannel->setEnabled(true);

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
    //[/UserPreSize]

    setSize (800, 525);


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


    //[/Destructor_pre]

    groupComponent5 = nullptr;
    groupComponent4 = nullptr;
    groupComponent2 = nullptr;
    groupComponent = nullptr;
    groupComponent3 = nullptr;
    sidvolume = nullptr;
    Octave1 = nullptr;
    Octave2 = nullptr;
    Octave3 = nullptr;
    Semi1 = nullptr;
    Semi2 = nullptr;
    Semi3 = nullptr;
    Cent1 = nullptr;
    Cent2 = nullptr;
    Cent3 = nullptr;
    Attack1 = nullptr;
    Attack2 = nullptr;
    Attack3 = nullptr;
    Decay1 = nullptr;
    Decay2 = nullptr;
    Decay3 = nullptr;
    Sustain1 = nullptr;
    Sustain2 = nullptr;
    Sustain3 = nullptr;
    Release1 = nullptr;
    Release2 = nullptr;
    Release3 = nullptr;
    Pulsew1 = nullptr;
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
    Voice1 = nullptr;
    Voice2 = nullptr;
    Voice3 = nullptr;
    Led = nullptr;
    midichannel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..



    //[/Destructor]
}

//==============================================================================
void AiassAudioProcessorEditor::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff5a5d9d));

    {
        int x = 0, y = 0, width = 800, height = 520;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black.withAlpha (0.597f));
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
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AiassAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, private Timer"
                 constructorParams="AiassAudioProcessor&amp; p, AudioProcessorValueTreeState&amp; vts"
                 variableInitialisers="AudioProcessorEditor (&amp;p)&#10;valueTreeState (vts)&#10;m_sid(p.getSid())&#10;&#10;"
                 snapPixels="10" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="800" initialHeight="525">
  <BACKGROUND backgroundColour="ff5a5d9d">
    <IMAGE pos="0 0 800 520" resource="aiasshintergrund_png" opacity="0.597"
           mode="0"/>
    <IMAGE pos="25 29 315 41" resource="aiass_mono_typenschild_png" opacity="1.0"
           mode="0"/>
  </BACKGROUND>
  <GROUPCOMPONENT name="new group" id="f28a7389bff6ea97" memberName="groupComponent5"
                  virtualName="" explicitFocusOrder="0" pos="15 80 245 210" title="Control"/>
  <GROUPCOMPONENT name="new group" id="52ab711584b2835a" memberName="groupComponent4"
                  virtualName="" explicitFocusOrder="0" pos="362 292 421 210" title="Waveform"/>
  <GROUPCOMPONENT name="new group" id="6d64fe01c88e0968" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="270 80 236 210" title="Tone"/>
  <GROUPCOMPONENT name="new group" id="9c52dd13730dcbb" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="15 292 340 210" title="Sound"
                  textpos="36"/>
  <GROUPCOMPONENT name="new group" id="5844d35c6980f98d" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="512 80 270 210" title="Filter"/>
  <SLIDER name="new slider" id="d351edf4789a40e0" memberName="sidvolume"
          virtualName="" explicitFocusOrder="0" pos="64 90 66 66" tooltip="SID-Volume"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="26c4155703d3dafe" memberName="Octave1"
          virtualName="" explicitFocusOrder="0" pos="315 90 66 66" tooltip="Octave1 Up/Down"
          min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="7808b9c1fb74ccc8" memberName="Octave2"
          virtualName="" explicitFocusOrder="0" pos="315 153 66 66" tooltip="Octave2 Up/Down"
          min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="d3e4a1e141ca77b6" memberName="Octave3"
          virtualName="" explicitFocusOrder="0" pos="315 218 66 66" tooltip="Octave3 Up/Down"
          min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="4297018af851022d" memberName="Semi1" virtualName=""
          explicitFocusOrder="0" pos="375 90 66 66" tooltip="Semitone1 Up/Down"
          min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="4e87cf183b0e0e77" memberName="Semi2" virtualName=""
          explicitFocusOrder="0" pos="375 153 66 66" tooltip="Semitone2 Up/Down"
          min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="f03b15fac2d0a403" memberName="Semi3" virtualName=""
          explicitFocusOrder="0" pos="375 218 66 66" tooltip="Semitone3 Up/Down"
          min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="b0bba6848acec451" memberName="Cent1" virtualName=""
          explicitFocusOrder="0" pos="435 90 66 66" tooltip="Cent1 Up/Down"
          min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="new slider" id="873ffcdb55231a19" memberName="Cent2" virtualName=""
          explicitFocusOrder="0" pos="435 153 66 66" tooltip="Cent2 Up/Down"
          min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="new slider" id="77eb6b6e2092a08c" memberName="Cent3" virtualName=""
          explicitFocusOrder="0" pos="435 218 66 66" tooltip="Cent3 Up/Down"
          min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="new slider" id="53619e38d7835c9d" memberName="Attack1"
          virtualName="" explicitFocusOrder="0" pos="30 300 66 66" tooltip="Attack 1"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="40a979315f74e3a" memberName="Attack2" virtualName=""
          explicitFocusOrder="0" pos="30 365 66 66" tooltip="Attack 2"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="7e38002dde33164c" memberName="Attack3"
          virtualName="" explicitFocusOrder="0" pos="30 430 66 66" tooltip="Attack 3"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="49642dbf385beee8" memberName="Decay1" virtualName=""
          explicitFocusOrder="0" pos="90 300 66 66" tooltip="Decay 1" min="0.0"
          max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="379b886c43a29254" memberName="Decay2" virtualName=""
          explicitFocusOrder="0" pos="90 365 66 66" tooltip="Decay 2" min="0.0"
          max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="ff55788389bcec83" memberName="Decay3" virtualName=""
          explicitFocusOrder="0" pos="90 430 66 66" tooltip="Decay 3" min="0.0"
          max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="2793e34c7a6a6286" memberName="Sustain1"
          virtualName="" explicitFocusOrder="0" pos="150 300 66 66" tooltip="Sustain 1"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="25e905e8830bd418" memberName="Sustain2"
          virtualName="" explicitFocusOrder="0" pos="150 365 66 66" tooltip="Sustain 2"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="740735c3d8776e72" memberName="Sustain3"
          virtualName="" explicitFocusOrder="0" pos="150 430 66 66" tooltip="Sustain 3"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="26b01f2c9f0fcbd4" memberName="Release1"
          virtualName="" explicitFocusOrder="0" pos="210 300 66 66" tooltip="Release 1"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="cede2f433ff54882" memberName="Release2"
          virtualName="" explicitFocusOrder="0" pos="210 365 66 66" tooltip="Release 2"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="a6cb93496f682a4d" memberName="Release3"
          virtualName="" explicitFocusOrder="0" pos="210 430 66 66" tooltip="Release 3"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="a63bd08caa77c655" memberName="Pulsew1"
          virtualName="" explicitFocusOrder="0" pos="280 300 66 66" tooltip="Pulswidth 1"
          min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="c761eb76e90133c8" memberName="Pulsew2"
          virtualName="" explicitFocusOrder="0" pos="280 365 66 66" tooltip="Pulsewidth 2"
          min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="c9edf691a324176f" memberName="Pulsew3"
          virtualName="" explicitFocusOrder="0" pos="280 430 66 66" tooltip="Pulswidth 3"
          min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <TOGGLEBUTTON name="new toggle button" id="498d1ccffc218a3e" memberName="Velvol"
                virtualName="" explicitFocusOrder="0" pos="156 109 66 30" tooltip="maps Velocity to Volume"
                buttonText="Vel." connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <COMBOBOX name="legatomode" id="185cc42c904fe921" memberName="legatomode"
            virtualName="" explicitFocusOrder="0" pos="64 209 150 24" tooltip="not implemented yet"
            editable="0" layout="33" items="Retrigger&#10;Legato&#10;Last Step"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="noteprioritymode" id="c728000aa37b04a3" memberName="noteprioritymode"
            virtualName="" explicitFocusOrder="0" pos="64 254 150 24" tooltip="not implemented yet"
            editable="0" layout="33" items="Last Note&#10;High Note&#10;Low Note"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <HYPERLINKBUTTON name="new hyperlink" id="27b1f728dfa971d5" memberName="hyperlinkButton"
                   virtualName="" explicitFocusOrder="0" pos="660 500 150 24" tooltip="http://www.crazy-midi.de"
                   textCol="ff008000" buttonText="crazy-midi.de" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="http://www.crazy-midi.de"/>
  <TOGGLEBUTTON name="new toggle button" id="f988e7a5126e5bac" memberName="Filter1"
                virtualName="" explicitFocusOrder="0" pos="710 109 66 30" tooltip="Voice 1 to Filter"
                buttonText="1" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="e8384ca904cc9cee" memberName="Filter2"
                virtualName="" explicitFocusOrder="0" pos="650 109 66 30" tooltip="Voice 2 to Filter"
                buttonText="2" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="46436fd7c74f713f" memberName="Filter3off"
                virtualName="" explicitFocusOrder="0" pos="530 159 66 30" tooltip="Mute Voice 3"
                buttonText="3off" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="15351388c9102c09" memberName="Filter3"
                virtualName="" explicitFocusOrder="0" pos="590 109 66 30" tooltip="Voice 3 to Filter"
                buttonText="3" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="1a8bcabfd8647671" memberName="Filterin"
                virtualName="" explicitFocusOrder="0" pos="530 109 66 30" tooltip="extern In"
                buttonText="in" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="fe8269d4b1a9c6e6" memberName="Filterlp"
                virtualName="" explicitFocusOrder="0" pos="710 159 66 30" tooltip="Low Pass"
                buttonText="LP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="17b0fa917ff0851e" memberName="Filterhp"
                virtualName="" explicitFocusOrder="0" pos="590 159 66 30" tooltip="High Pass"
                buttonText="HP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="2bd008bd14ea7c51" memberName="Filterbp"
                virtualName="" explicitFocusOrder="0" pos="650 159 66 30" tooltip="Band Pass"
                buttonText="BP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="1f267441a830f9ff" memberName="Filter8580"
                virtualName="" explicitFocusOrder="0" pos="532 236 90 30" tooltip="scales filterfreq. to 0-71"
                buttonText="8580" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <SLIDER name="new slider" id="b104465dc77b15ae" memberName="CutOff" virtualName=""
          explicitFocusOrder="0" pos="632 216 66 66" tooltip="Cutoff" min="0.0"
          max="2047.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="new slider" id="b18e0fc28c589ec5" memberName="Resonace"
          virtualName="" explicitFocusOrder="0" pos="702 216 66 66" tooltip="Resonance"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <TOGGLEBUTTON name="new toggle button" id="53248eb179f92afc" memberName="Noise1"
                virtualName="" explicitFocusOrder="0" pos="374 319 66 30" buttonText="Noise"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="d83f77113f37d2ea" memberName="Noise2"
                virtualName="" explicitFocusOrder="0" pos="373 389 66 30" buttonText="Noise"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="1da77acd9957a585" memberName="Noise3"
                virtualName="" explicitFocusOrder="0" pos="375 459 66 30" buttonText="Noise"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="3bbfb8f7a8ca0db0" memberName="Pulse1"
                virtualName="" explicitFocusOrder="0" pos="443 319 66 30" buttonText="Pulse"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="520ab3980bfa9711" memberName="Pulse2"
                virtualName="" explicitFocusOrder="0" pos="443 389 66 30" buttonText="Pulse"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="1dd05bea0d3cdf7d" memberName="Pulse3"
                virtualName="" explicitFocusOrder="0" pos="443 459 66 30" buttonText="Pulse"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="a48dd1aa6574a3e4" memberName="Saw1"
                virtualName="" explicitFocusOrder="0" pos="509 319 66 30" buttonText="Saw"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="ae3029edeecd4b14" memberName="Saw2"
                virtualName="" explicitFocusOrder="0" pos="509 389 66 30" buttonText="Saw"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="656ce7e680e8573a" memberName="Saw3"
                virtualName="" explicitFocusOrder="0" pos="509 459 66 30" buttonText="Saw"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="5747f6f8bb660f63" memberName="Tria1"
                virtualName="" explicitFocusOrder="0" pos="572 319 66 30" buttonText="Tria"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="cc78b8161478c5a4" memberName="Tria2"
                virtualName="" explicitFocusOrder="0" pos="570 390 66 30" buttonText="Tria"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="d9035b35478c1c9b" memberName="Tria3"
                virtualName="" explicitFocusOrder="0" pos="572 459 66 30" buttonText="Tria"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="11efaf86d1acf272" memberName="Ringmod1"
                virtualName="" explicitFocusOrder="0" pos="629 319 66 30" buttonText="Ringmod"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="9d63104088c0485a" memberName="Ringmod2"
                virtualName="" explicitFocusOrder="0" pos="629 389 66 30" buttonText="Ringmod"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="a97c9d37cd1a1d18" memberName="Ringmod3"
                virtualName="" explicitFocusOrder="0" pos="629 459 66 30" buttonText="Ringmod"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="fb4637c0f86bc855" memberName="Sync1"
                virtualName="" explicitFocusOrder="0" pos="705 319 66 30" buttonText="Sync."
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="99a8550e2ad2c6da" memberName="Sync2"
                virtualName="" explicitFocusOrder="0" pos="705 389 66 30" buttonText="Sync."
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="880c3fcf4ab4a1f6" memberName="Sync3"
                virtualName="" explicitFocusOrder="0" pos="705 459 66 30" buttonText="Sync."
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="883f3d3793f0f11b" memberName="Voice1"
                virtualName="" explicitFocusOrder="0" pos="285 105 66 30" tooltip="Voice 1 On/Off"
                buttonText="1" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="3b39ff7f634b369" memberName="Voice2"
                virtualName="" explicitFocusOrder="0" pos="285 167 66 30" tooltip="Voice 2 On/Off"
                buttonText="2" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="62c330b01d3c339c" memberName="Voice3"
                virtualName="" explicitFocusOrder="0" pos="285 230 66 30" tooltip="Voice 3 On/Off"
                buttonText="3" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <IMAGEBUTTON name="Power_LED" id="77dead3478e9a659" memberName="Led" virtualName=""
               explicitFocusOrder="0" pos="710 26 40 40" tooltip="midi-activity and  blinks when error-status"
               buttonText="" connectedEdges="0" needsCallback="0" radioGroupId="0"
               keepProportions="1" resourceNormal="redledoff_png" opacityNormal="1.0"
               colourNormal="ffffff" resourceOver="redledoff_png" opacityOver="1.0"
               colourOver="ffffff" resourceDown="redledon_png" opacityDown="1.0"
               colourDown="ffffff"/>
  <COMBOBOX name="midichannel" id="62ff9b6ec5b8843e" memberName="midichannel"
            virtualName="" explicitFocusOrder="0" pos="64 162 150 24" tooltip="MIDI channel"
            editable="0" layout="33" items="all&#10;1&#10;2&#10;3&#10;4&#10;5&#10;6&#10;7&#10;8&#10;9&#10;10&#10;11&#10;12&#10;13&#10;14&#10;15&#10;16"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: redledoff_png, 4947, "../images/red-led-off.png"
static const unsigned char resource_AiassAudioProcessorEditor_redledoff_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,40,0,0,0,40,8,2,0,0,0,3,156,47,58,0,0,0,6,116,82,78,83,0,0,0,0,0,0,
110,166,7,145,0,0,0,9,112,72,89,115,0,0,21,57,0,0,21,57,1,232,159,31,137,0,0,18,243,73,68,65,84,88,9,1,232,18,23,237,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,18,
18,18,44,44,44,35,35,35,25,25,25,13,13,13,6,6,6,2,2,2,0,0,0,254,254,254,250,250,250,242,242,242,231,231,231,221,221,221,213,213,213,238,238,238,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,82,82,82,61,61,61,24,24,24,249,249,249,246,246,246,252,252,252,254,254,254,255,255,255,0,0,0,1,1,1,2,2,2,
4,4,4,10,10,10,7,7,7,232,232,232,195,195,195,174,174,174,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,95,95,76,76,
76,248,248,248,243,243,243,249,249,249,254,254,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,7,7,7,13,13,13,6,6,6,183,183,183,160,160,160,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,42,42,107,107,107,10,10,10,241,241,241,250,250,250,255,255,255,255,255,255,255,2,2,255,4,4,254,6,6,254,6,6,254,1,1,255,255,255,2,254,254,
5,253,253,5,253,253,1,252,252,0,254,254,255,255,255,255,255,255,6,6,6,16,16,16,244,244,244,149,149,149,215,215,215,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
119,119,119,43,43,43,238,238,238,247,247,247,254,254,254,253,0,0,2,11,11,0,17,17,251,12,12,5,237,237,13,218,218,11,222,222,6,240,240,253,255,255,246,11,11,237,26,26,236,28,28,248,15,15,11,252,252,19,2,
2,5,253,253,255,252,252,0,0,0,9,9,9,17,17,17,212,212,212,138,138,138,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,140,140,140,10,10,10,242,242,242,252,251,251,253,255,255,
2,13,13,4,22,22,7,241,241,27,172,172,30,190,190,16,0,0,255,0,0,252,0,0,255,0,0,254,0,0,1,0,0,0,0,0,0,0,0,236,0,0,214,59,59,213,55,55,1,20,20,24,4,4,8,255,255,254,253,253,2,2,2,14,14,14,244,244,244,118,
118,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,126,126,21,21,21,242,242,242,252,252,252,252,255,255,11,26,26,6,11,11,38,140,140,36,207,207,11,24,24,251,10,10,248,239,239,245,
240,240,248,255,255,0,0,0,0,1,1,253,0,0,0,255,255,255,0,0,3,0,0,5,0,0,249,0,0,213,43,43,200,75,75,20,10,10,21,8,8,254,252,252,1,1,1,14,14,14,233,233,233,132,132,132,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,
0,0,0,0,0,0,0,82,82,82,43,43,43,239,239,239,250,250,250,251,255,255,12,30,30,12,253,253,45,121,121,45,10,10,9,68,68,252,17,17,252,253,253,255,244,244,4,250,250,253,0,0,251,255,255,254,1,1,0,0,0,253,1,
1,255,1,1,251,1,1,251,0,0,255,0,0,27,235,235,16,222,222,214,34,34,252,8,8,9,3,3,254,252,252,248,248,248,20,20,20,7,7,7,216,216,216,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,39,39,39,93,93,93,237,237,237,250,
250,250,251,0,0,20,37,37,19,224,224,66,119,119,38,103,103,0,39,39,249,240,240,252,236,236,252,240,240,253,238,238,255,249,249,5,3,3,244,254,254,0,0,0,254,1,1,0,0,0,253,0,0,0,0,0,253,1,1,254,0,0,250,0,
0,19,244,244,41,201,201,210,23,23,243,12,12,14,7,7,254,252,252,250,250,250,46,46,46,219,219,219,237,237,237,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,93,93,93,236,236,236,247,247,247,248,252,252,14,33,33,19,223,
223,58,134,134,28,149,149,250,23,23,249,240,240,254,248,248,255,252,252,255,252,252,0,253,253,0,1,1,2,2,2,0,1,1,254,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,1,1,253,1,1,244,0,0,2,0,0,78,168,168,249,220,
220,231,250,250,0,3,3,250,250,250,239,239,239,93,93,93,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,98,98,98,22,22,22,242,242,242,249,250,250,19,38,38,28,236,236,61,124,124,31,175,175,248,245,245,251,230,230,254,239,
239,254,243,243,254,241,241,253,242,242,254,241,241,0,1,1,2,0,0,242,253,253,0,0,0,254,1,1,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,255,255,0,0,0,251,0,0,3,0,0,45,213,213,204,22,22,251,14,14,10,2,2,249,249,
249,11,11,11,29,29,29,208,208,208,0,0,0,2,0,0,0,6,6,6,49,49,49,240,240,240,249,249,249,2,12,12,24,20,20,38,120,120,29,176,176,250,252,252,252,238,238,255,250,250,255,251,251,254,251,251,254,251,251,255,
250,250,254,255,255,2,2,2,250,255,255,253,0,0,254,1,1,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,254,2,2,252,2,2,247,1,1,252,0,0,71,176,176,228,234,234,250,0,0,253,253,253,240,240,240,48,48,48,6,
6,6,0,0,0,2,1,1,1,74,74,74,240,240,240,250,250,250,251,251,251,26,41,41,20,156,156,30,52,52,255,34,34,251,238,238,254,251,251,254,252,252,254,252,252,255,252,252,1,252,252,0,252,252,1,254,254,2,0,0,242,
254,254,255,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,255,255,253,0,0,253,0,0,0,0,0,254,1,1,249,0,0,17,251,251,37,206,206,229,243,243,0,1,1,251,251,251,242,242,242,72,72,72,1,1,1,2,6,6,6,37,37,37,
245,245,245,252,252,252,0,6,6,9,27,27,21,181,181,15,110,110,250,234,234,254,252,252,1,253,253,1,252,252,1,252,252,1,252,252,255,252,252,255,251,251,2,2,2,0,255,255,246,254,254,1,0,0,253,0,0,0,0,0,253,
0,0,0,0,0,253,0,0,0,255,255,255,0,0,254,2,2,0,0,0,253,0,0,0,0,0,251,1,1,249,0,0,47,209,209,235,250,250,254,1,1,255,255,255,246,246,246,37,37,37,6,6,6,2,22,22,22,16,16,16,248,248,248,249,249,249,19,31,
31,20,194,194,15,0,0,8,62,62,254,240,240,1,248,248,255,248,248,255,251,251,255,251,251,255,251,251,254,250,250,0,251,251,2,1,1,234,253,253,255,0,0,254,1,1,0,0,0,253,0,0,0,0,0,253,0,0,0,255,255,255,0,0,
252,2,2,0,0,0,253,0,0,0,0,0,253,0,0,0,1,1,249,0,0,18,254,254,20,215,215,237,247,247,254,254,254,247,247,247,18,18,18,21,21,21,2,23,23,23,249,249,249,253,253,253,249,250,250,19,37,37,17,166,166,1,15,15,
0,6,6,254,248,248,255,253,253,255,253,253,255,253,253,255,252,252,255,253,253,1,253,253,4,253,253,245,255,255,246,254,254,255,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,255,255,255,0,0,252,2,2,0,0,0,253,0,0,0,
0,0,253,0,0,0,0,0,253,0,0,254,2,2,248,0,0,41,216,216,237,249,249,0,1,1,253,253,253,249,249,249,23,23,23,2,26,26,26,245,245,245,251,251,251,255,3,3,18,10,10,16,213,213,251,6,6,0,251,251,255,250,250,255,
251,251,255,251,251,255,248,248,255,252,252,1,250,250,1,252,252,237,251,251,234,253,253,255,0,0,1,1,1,253,0,0,0,0,0,253,255,255,0,255,255,254,0,0,252,2,2,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,
0,253,0,0,250,0,0,29,231,231,243,241,241,253,255,255,252,252,252,245,245,245,27,27,27,2,14,14,14,249,249,249,252,252,252,9,14,14,5,236,236,2,0,0,241,235,235,248,222,222,3,10,10,255,252,252,255,252,252,
1,255,255,3,2,2,0,250,250,231,234,234,240,255,255,1,0,0,1,1,1,253,0,0,0,0,0,253,0,0,0,0,0,254,2,2,253,2,2,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,251,0,0,9,0,0,6,241,241,
250,254,254,255,255,255,249,249,249,14,14,14,2,6,6,6,250,250,250,251,251,251,6,10,10,3,233,233,1,0,0,254,0,0,215,92,92,254,245,245,8,21,21,7,14,14,0,252,252,234,214,214,220,215,215,246,254,254,2,0,0,1,
1,1,253,0,0,0,0,0,253,0,0,0,255,255,253,0,0,253,0,0,0,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,254,1,1,1,0,0,8,247,247,247,251,251,253,253,253,250,250,250,6,6,6,4,0,
0,0,253,253,253,253,253,253,2,5,5,2,247,247,0,0,0,1,0,0,243,229,229,210,105,105,9,25,25,251,245,245,247,236,236,251,0,0,1,0,0,1,0,0,0,1,1,253,0,0,0,0,0,253,0,0,0,255,255,255,0,0,254,2,2,0,0,0,253,0,0,
0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,254,0,0,254,0,0,4,251,251,252,253,253,5,255,255,254,254,254,0,0,0,4,254,254,254,1,1,1,254,254,254,0,255,255,255,255,255,254,0,0,1,0,0,2,0,
0,253,250,250,240,225,225,0,0,0,255,0,0,2,0,0,254,0,0,0,1,1,253,0,0,0,0,0,253,0,0,0,255,255,255,0,0,252,2,2,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,254,
0,0,0,255,255,254,253,253,254,254,254,255,255,255,255,255,255,2,251,251,251,0,0,0,0,0,0,248,245,245,253,12,12,254,0,0,254,0,0,0,1,1,255,1,1,3,1,1,0,1,1,1,1,1,254,1,1,0,1,1,253,0,0,0,0,0,253,0,0,0,255,
255,255,0,0,254,2,2,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,254,0,0,255,0,0,249,6,6,0,254,254,254,254,254,0,0,0,250,250,250,2,242,242,242,254,254,254,
253,253,253,239,234,234,250,27,27,252,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,255,255,0,255,255,255,0,0,254,2,2,253,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,
0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,1,255,255,251,0,0,245,11,11,3,0,0,250,250,250,254,254,254,243,243,243,2,238,238,238,3,3,3,0,0,0,242,237,237,247,11,11,249,6,6,255,0,0,0,0,0,253,0,0,0,0,0,253,
0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,2,2,254,2,2,253,0,0,0,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,1,0,0,240,5,5,251,10,10,255,
251,251,255,255,255,3,3,3,237,237,237,2,236,236,236,3,3,3,0,0,0,255,253,253,233,231,231,243,59,59,2,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,255,255,255,0,0,255,0,0,255,0,0,255,0,0,255,
0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,4,0,0,226,26,26,6,4,4,254,252,252,254,254,254,3,3,3,236,236,236,2,239,239,239,0,0,0,255,255,
255,4,3,3,231,217,217,244,72,72,2,0,0,0,255,255,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,255,255,255,0,0,253,2,2,0,0,0,253,0,0,0,0,0,254,0,0,255,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,
0,253,0,0,0,0,0,255,0,0,1,254,254,4,0,0,225,32,32,8,252,252,253,253,253,255,255,255,1,1,1,239,239,239,2,239,239,239,239,239,239,0,0,0,1,1,1,224,211,211,234,50,50,250,4,4,1,0,0,0,255,255,253,0,0,0,0,0,
253,0,0,0,255,255,255,0,0,253,2,2,0,0,0,253,0,0,0,0,0,253,0,0,255,0,0,0,0,0,255,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,254,255,255,2,0,0,238,1,1,232,27,27,5,253,253,252,252,
252,1,1,1,236,236,236,240,240,240,3,254,254,254,4,4,4,26,26,26,251,251,251,247,245,245,9,10,10,15,42,42,16,200,200,250,0,0,255,1,1,253,0,0,0,255,255,255,0,0,253,2,2,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,
0,0,0,0,0,255,0,0,255,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,255,0,0,255,0,0,2,255,255,8,0,0,198,55,55,250,15,15,6,252,252,0,0,0,9,9,9,215,215,215,231,231,231,2,0,0,0,210,210,210,252,252,252,1,
1,1,4,4,4,203,188,188,225,56,56,235,61,61,5,0,0,254,255,255,0,255,255,255,0,0,253,2,2,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,255,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,
254,0,0,255,254,254,6,0,0,213,30,30,227,33,33,5,249,249,252,252,252,0,0,0,251,251,251,210,210,210,0,0,0,3,0,0,0,0,0,0,247,247,247,27,27,27,251,251,251,254,250,250,234,229,229,15,96,96,17,186,186,3,249,
249,252,0,0,255,3,3,254,255,255,255,1,1,254,0,0,255,0,0,254,0,0,255,0,0,254,0,0,255,0,0,254,0,0,255,0,0,254,0,0,254,0,0,254,0,0,255,0,0,254,0,0,255,0,0,254,0,0,0,254,254,4,0,0,239,10,10,196,71,71,7,246,
246,0,250,250,0,0,0,8,8,8,204,204,204,239,239,239,0,0,0,3,0,0,0,0,0,0,239,239,239,30,30,30,4,4,4,255,255,255,243,238,238,248,248,248,10,93,93,11,188,188,3,252,252,253,1,1,254,0,0,0,1,1,254,0,0,0,0,0,254,
0,0,0,0,0,254,0,0,0,0,0,254,0,0,0,0,0,255,0,0,255,0,0,254,0,0,0,0,0,254,0,0,0,0,0,255,255,255,6,0,0,245,6,6,193,74,74,253,250,250,2,248,248,0,0,0,4,4,4,245,245,245,204,204,204,0,0,0,0,0,0,3,0,0,0,0,0,
0,0,0,0,242,242,242,36,36,36,251,251,251,1,0,0,236,231,231,12,25,25,3,63,63,19,189,189,255,255,255,254,0,0,253,0,0,0,1,1,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,255,0,0,254,0,0,0,0,0,255,
255,255,1,255,255,6,0,0,254,0,0,198,73,73,242,4,4,1,244,244,0,255,255,3,3,3,8,8,8,202,202,202,245,245,245,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,245,245,245,1,1,1,20,20,20,254,254,254,255,253,253,223,216,216,
252,22,22,253,92,92,7,216,216,8,239,239,255,0,0,253,255,255,0,1,1,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,0,0,253,0,0,0,254,254,2,0,0,7,0,0,233,22,22,195,81,81,236,252,252,0,243,243,1,255,
255,2,2,2,6,6,6,218,218,218,224,224,224,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,235,235,235,14,14,14,14,14,14,254,254,254,0,255,255,231,223,223,241,246,246,6,91,91,253,24,24,11,211,211,10,254,254,
255,255,255,1,255,255,254,255,255,0,255,255,254,0,0,0,0,0,254,255,255,2,255,255,4,255,255,5,255,255,9,0,0,247,3,3,211,67,67,213,52,52,243,237,237,255,242,242,1,255,255,2,2,2,8,8,8,233,233,233,209,209,
209,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,36,36,36,36,36,249,249,249,250,250,250,250,251,251,251,0,0,24,38,38,36,50,50,21,252,252,11,202,202,15,199,199,8,229,229,4,0,0,1,0,0,
253,0,0,254,0,0,249,0,0,241,21,21,232,46,46,231,36,36,236,0,0,243,229,229,251,240,240,5,255,255,2,2,2,4,4,4,7,7,7,218,218,218,222,222,222,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,20,20,20,48,48,48,254,254,254,251,251,251,253,253,253,251,251,251,249,251,251,13,20,20,21,32,32,17,30,30,4,8,8,4,252,252,1,248,248,252,253,253,249,0,0,248,254,254,247,242,242,244,233,233,245,
235,235,254,248,248,4,2,2,2,2,2,2,2,2,5,5,5,2,2,2,208,208,208,236,236,236,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,46,46,46,13,13,13,250,250,250,253,
253,253,255,255,255,254,254,254,252,252,252,254,254,254,1,2,2,4,6,6,2,3,3,1,0,0,254,253,253,253,252,252,1,0,0,1,1,1,2,2,2,2,2,2,0,0,0,3,3,3,6,6,6,243,243,243,210,210,210,250,250,250,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,38,38,27,27,27,254,254,254,251,251,251,253,253,253,0,0,0,255,255,255,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,1,1,1,
0,0,0,1,1,1,0,0,0,3,3,3,5,5,5,2,2,2,229,229,229,218,218,218,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,30,30,24,
24,24,9,9,9,254,254,254,252,252,252,254,254,254,255,255,255,255,255,255,0,0,0,1,1,1,1,1,1,2,2,2,4,4,4,2,2,2,247,247,247,232,232,232,226,226,226,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,10,10,10,12,12,12,11,11,11,7,7,7,5,5,5,2,2,2,0,0,0,254,254,254,251,251,251,249,249,249,245,245,245,244,244,
244,246,246,246,253,253,253,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,52,178,143,202,3,44,126,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::redledoff_png = (const char*) resource_AiassAudioProcessorEditor_redledoff_png;
const int AiassAudioProcessorEditor::redledoff_pngSize = 4947;

// JUCER_RESOURCE: redledon_png, 4947, "../images/red-led-on.png"
static const unsigned char resource_AiassAudioProcessorEditor_redledon_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,40,0,0,0,40,8,2,0,0,0,3,156,47,58,0,0,0,6,116,82,78,83,0,0,0,0,0,0,
110,166,7,145,0,0,0,9,112,72,89,115,0,0,21,57,0,0,21,57,1,232,159,31,137,0,0,18,243,73,68,65,84,88,9,1,232,18,23,237,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,18,
18,18,44,44,44,35,35,35,25,25,25,13,13,13,6,6,6,2,2,2,0,0,0,254,254,254,250,250,250,242,242,242,231,231,231,221,221,221,213,213,213,238,238,238,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,82,82,82,61,61,61,24,24,24,249,249,249,246,246,246,252,252,252,254,254,254,255,255,255,0,0,0,1,1,1,2,2,2,
4,4,4,10,10,10,7,7,7,232,232,232,195,195,195,174,174,174,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,95,95,95,76,76,
76,248,248,248,243,243,243,249,249,249,254,254,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,7,7,7,13,13,13,6,6,6,183,183,183,160,160,160,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42,42,42,107,107,107,10,10,10,241,241,241,250,250,250,255,255,255,255,255,255,255,1,2,253,3,4,252,3,6,252,4,6,252,0,1,255,255,255,3,255,254,
7,0,253,7,255,253,4,254,252,0,254,254,255,255,255,255,255,255,6,6,6,16,16,16,244,244,244,149,149,149,215,215,215,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,119,
119,119,43,43,43,238,238,238,247,247,247,254,254,254,253,255,0,255,9,11,252,12,17,245,6,12,13,245,237,26,233,218,24,235,222,12,246,240,253,253,255,242,5,11,223,13,26,218,17,28,242,8,15,16,0,252,25,7,2,
8,254,253,0,253,252,0,0,0,9,9,9,17,17,17,212,212,212,138,138,138,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,140,140,140,10,10,10,242,242,242,252,252,251,253,254,255,255,
9,13,0,19,22,12,247,240,58,202,167,56,210,196,1,237,0,0,3,0,0,6,0,0,2,0,0,255,0,0,254,0,0,251,0,0,0,0,253,14,0,182,33,59,178,32,55,249,15,20,31,9,4,11,0,255,255,254,253,2,2,2,14,14,14,244,244,244,118,
118,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,126,126,21,21,21,242,242,242,252,252,252,252,254,255,7,21,27,5,11,10,75,182,133,43,217,214,0,34,37,0,19,43,0,248,251,254,232,214,
0,239,223,1,3,0,0,254,1,0,0,0,0,254,255,1,254,0,0,250,0,0,249,0,0,1,0,191,33,43,150,46,75,23,10,10,27,12,8,254,252,252,1,1,1,14,14,14,233,233,233,132,132,132,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,
0,0,0,0,82,82,82,43,43,43,239,239,239,250,250,250,250,254,255,6,25,30,15,1,249,88,164,104,35,16,18,0,85,127,0,36,68,0,9,20,0,254,11,1,4,27,255,245,236,0,251,241,1,255,0,0,0,1,0,0,1,0,0,1,0,1,1,1,5,0,0,
1,0,33,234,235,44,239,222,182,16,34,247,5,8,13,4,3,254,252,252,248,248,248,20,20,20,7,7,7,216,216,216,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,39,39,39,93,93,93,237,237,237,250,250,250,251,255,0,15,33,38,
33,237,219,100,167,120,13,105,145,0,66,106,0,247,248,0,233,230,0,240,237,0,240,236,0,245,244,1,246,12,255,249,221,1,0,0,0,0,1,0,253,0,0,254,0,0,255,0,0,0,1,0,0,0,1,3,0,21,238,244,85,219,201,184,13,23,
231,6,12,17,9,7,255,252,252,250,250,250,46,46,46,219,219,219,237,237,237,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,93,93,93,236,236,236,247,247,247,247,250,252,9,27,33,29,234,218,90,174,133,0,146,195,0,38,60,0,
233,224,0,244,239,0,251,249,0,253,252,0,252,252,0,252,249,0,251,254,0,254,5,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,1,255,1,1,0,8,0,0,0,0,149,196,168,6,227,220,222,246,250,255,3,3,250,250,250,239,
239,239,93,93,93,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,98,98,98,5,5,5,244,244,244,247,249,249,14,30,34,37,249,231,91,181,131,0,172,228,0,9,19,0,236,230,0,247,246,0,250,251,0,251,249,0,249,249,0,249,249,0,249,
249,0,250,247,0,255,252,0,253,0,0,253,0,0,255,0,0,255,0,0,255,0,0,255,0,0,253,0,0,253,0,255,0,1,0,4,0,0,253,0,157,188,169,254,221,215,225,244,247,254,0,0,244,244,244,6,6,6,97,97,97,0,0,0,0,0,0,2,0,0,0,
6,6,6,49,49,49,240,240,240,249,249,249,1,9,12,25,21,19,85,152,124,0,160,215,0,0,3,0,238,231,0,250,248,0,250,250,0,251,251,0,251,251,0,251,251,0,251,251,0,251,252,0,250,244,0,0,255,0,0,0,0,0,0,0,0,0,0,
255,0,0,253,0,0,253,0,0,0,0,0,0,0,0,253,255,255,0,0,0,4,0,0,3,0,153,200,172,227,232,235,246,255,0,253,253,253,240,240,240,48,48,48,6,6,6,0,0,0,2,1,1,1,74,74,74,240,240,240,250,250,250,251,251,251,21,37,
41,49,187,152,5,78,70,0,34,40,0,238,233,0,251,251,0,252,252,0,253,253,0,252,252,0,252,252,0,252,252,0,252,253,0,251,0,0,0,234,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,0,0,0,255,0,0,253,255,0,
255,0,0,255,0,255,255,0,0,5,0,11,243,254,85,221,206,222,241,243,0,1,1,251,251,251,242,242,242,72,72,72,1,1,1,2,6,6,6,37,37,37,245,245,245,252,252,252,255,5,6,6,21,25,51,187,187,0,97,134,0,234,238,0,249,
248,0,252,252,0,253,253,0,252,252,0,253,253,0,252,254,0,254,254,0,255,0,0,252,255,254,255,231,0,255,0,0,255,1,0,255,0,0,255,0,0,255,0,255,255,0,255,255,0,255,253,255,0,0,0,0,0,0,0,255,0,0,255,0,255,1,
0,0,6,0,98,223,206,228,247,251,251,1,1,255,255,255,246,246,246,37,37,37,6,6,6,2,22,22,22,16,16,16,248,248,248,249,249,249,15,27,31,40,216,193,1,9,0,0,41,51,0,240,237,0,251,251,0,251,250,0,250,250,0,250,
250,0,250,250,0,250,251,0,251,252,0,251,1,0,247,213,0,254,255,1,255,0,0,255,0,0,255,0,0,253,0,255,253,0,0,0,0,2,253,255,0,255,0,0,255,0,0,253,0,0,253,0,0,255,0,0,255,0,0,2,0,6,242,0,53,226,215,232,245,
247,254,254,254,247,247,247,18,18,18,21,21,21,2,23,23,23,249,249,249,253,253,253,249,250,250,14,32,37,46,194,165,0,45,34,0,0,0,0,249,247,0,252,253,0,252,253,0,253,253,0,253,253,0,253,253,0,255,0,0,0,7,
0,246,229,254,247,230,0,1,0,0,0,1,0,255,0,0,255,0,255,255,0,0,0,0,2,253,255,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,255,0,255,1,0,0,6,0,87,226,214,226,249,249,255,1,1,253,253,253,249,249,249,23,23,23,
2,26,26,26,245,245,245,251,251,251,254,1,3,20,11,10,28,215,217,0,254,254,0,0,0,0,251,252,0,251,250,0,251,251,0,250,250,0,252,252,0,255,2,0,0,7,0,228,200,254,233,203,0,1,0,1,0,0,0,255,0,0,253,0,255,253,
0,0,0,0,2,253,255,0,0,0,254,255,0,0,253,0,0,253,0,0,0,0,0,255,0,0,255,0,0,255,0,0,253,0,0,2,0,64,232,232,249,240,240,252,255,255,252,252,252,245,245,245,27,27,27,2,14,14,14,249,249,249,252,252,252,7,13,
14,13,244,236,0,249,0,0,212,224,0,227,229,0,14,20,0,0,2,0,254,0,0,2,6,0,6,15,0,246,246,254,205,160,254,228,212,0,2,0,1,1,0,0,253,1,0,253,0,255,0,0,0,0,0,2,253,255,0,0,0,0,253,0,0,253,0,1,255,0,0,0,0,0,
253,0,0,255,0,0,253,0,0,253,0,0,255,0,0,1,0,0,251,0,16,244,243,247,253,254,255,255,255,249,249,249,14,14,14,4,6,6,6,250,250,250,251,251,251,12,9,10,8,241,233,0,1,0,255,252,0,255,94,44,2,117,163,0,17,27,
0,245,249,0,226,221,254,195,169,0,220,212,0,255,0,1,6,0,0,1,1,0,255,0,0,255,0,255,0,0,0,255,0,2,253,255,0,255,0,0,0,0,254,255,0,0,0,0,0,0,0,0,255,0,0,1,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0,251,0,21,248,
245,246,250,251,12,253,253,254,254,254,6,6,6,4,0,0,0,253,253,253,253,253,253,2,4,5,6,249,247,0,0,0,0,16,0,0,231,240,254,117,77,0,19,15,0,249,250,0,241,247,0,252,0,1,6,0,0,2,0,0,0,1,0,255,0,0,255,0,255,
255,0,0,0,0,2,253,255,0,0,0,0,0,0,0,255,0,0,255,0,1,0,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,0,0,0,255,0,255,0,0,1,1,0,9,253,253,240,253,253,255,255,255,254,254,254,0,0,0,4,254,254,254,1,1,1,254,
254,254,255,0,255,255,255,255,0,255,0,0,0,0,1,10,0,0,253,0,0,238,241,0,254,0,0,3,0,0,5,0,0,255,1,0,0,0,0,255,0,0,253,0,255,255,0,0,0,0,2,253,255,0,255,0,0,0,0,0,253,0,0,255,0,0,255,0,0,0,0,0,255,0,0,255,
0,0,253,0,0,255,0,0,255,0,0,0,0,0,253,0,0,255,0,0,254,0,0,255,255,254,254,253,254,255,254,255,255,255,255,255,255,2,251,251,251,0,0,0,0,0,0,249,246,245,249,10,12,0,255,0,1,255,0,0,1,1,0,3,1,0,5,1,0,4,
1,0,3,1,0,0,1,0,0,0,0,255,0,0,255,0,255,255,0,0,0,0,2,253,255,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,255,0,0,255,0,0,255,0,0,255,0,0,0,0,0,0,0,0,255,0,0,255,0,1,1,0,0,0,0,243,4,4,2,254,255,254,254,
254,0,0,0,250,250,250,2,242,242,242,254,254,254,253,253,253,241,235,234,241,16,27,0,4,0,0,253,0,0,255,0,0,253,0,0,253,0,0,255,0,0,255,0,0,255,0,0,255,0,0,253,0,255,253,0,0,0,0,2,253,255,0,0,0,0,255,0,
0,253,0,0,253,0,0,0,0,254,255,0,0,255,0,0,255,0,0,253,0,0,253,0,0,0,0,0,255,0,0,253,0,0,253,0,0,255,0,0,252,0,0,0,0,228,9,12,5,0,255,250,250,250,254,254,254,243,243,243,2,238,238,238,3,3,3,0,0,0,243,238,
237,240,6,11,255,19,6,0,249,0,0,253,0,0,255,0,0,0,0,0,0,0,0,255,0,0,253,0,0,253,0,255,0,0,0,0,0,2,253,255,0,0,0,0,253,0,0,253,0,0,255,0,0,0,0,0,253,0,0,255,0,1,253,0,0,253,0,0,255,0,0,0,0,0,253,0,0,253,
0,0,255,0,0,0,0,0,0,0,0,252,0,247,10,2,239,10,11,1,252,251,255,255,255,3,3,3,237,237,237,2,236,236,236,3,3,3,0,0,0,0,253,253,233,232,231,219,41,59,0,249,0,0,0,0,0,0,0,0,255,0,0,255,0,0,255,0,0,255,0,255,
0,0,0,255,0,2,253,255,0,255,0,0,255,0,0,255,0,0,0,0,0,0,0,0,255,0,254,1,0,0,255,0,0,255,0,0,0,0,0,0,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,251,0,188,23,28,9,3,3,255,252,252,254,254,254,3,
3,3,236,236,236,2,239,239,239,0,0,0,255,255,255,4,4,3,236,221,217,216,48,72,0,246,0,1,253,255,0,255,0,0,255,0,0,255,0,0,255,0,255,255,0,0,255,0,2,253,255,0,0,0,0,0,0,0,255,0,0,255,0,0,255,0,0,255,0,0,
255,0,0,255,0,1,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,1,0,0,255,0,0,255,0,1,253,0,0,250,0,177,26,32,16,253,252,254,253,253,255,255,255,1,1,1,239,239,239,2,239,239,239,239,239,239,0,0,0,1,1,1,
228,214,211,211,33,50,0,24,4,0,248,0,0,254,255,0,255,0,0,253,0,255,253,0,0,0,0,2,253,0,0,255,0,0,255,0,0,253,0,0,253,0,0,255,0,0,255,0,0,255,0,0,255,0,0,253,0,0,253,0,0,255,0,0,255,0,0,253,0,0,253,0,0,
255,0,0,253,0,0,255,0,0,255,0,0,249,0,254,12,1,193,23,29,11,253,253,252,252,252,1,1,1,236,236,236,240,240,240,3,254,254,254,4,4,4,26,26,26,251,251,251,248,245,245,8,11,10,6,36,42,34,199,200,1,5,0,0,2,
1,255,254,0,0,0,0,2,253,0,0,0,255,0,0,0,0,255,0,0,254,0,0,0,0,0,0,0,0,255,0,0,255,0,0,255,0,255,254,0,1,0,0,0,0,0,0,255,0,0,254,0,0,1,0,0,254,0,0,0,0,0,0,0,1,252,0,0,248,0,127,51,54,233,14,15,13,253,252,
0,0,0,9,9,9,215,215,215,231,231,231,2,0,0,0,210,210,210,252,252,252,1,1,1,4,4,4,209,191,188,194,35,56,218,63,61,0,242,0,1,251,255,0,0,0,2,253,0,0,0,0,0,255,0,0,253,0,0,253,0,0,0,0,0,255,0,0,255,0,0,255,
0,0,253,0,254,253,0,0,0,0,0,255,0,0,253,0,0,253,0,0,255,0,0,254,0,0,0,0,0,255,0,1,251,0,0,245,0,185,37,31,176,29,34,14,249,249,253,252,252,0,0,0,251,251,251,210,210,210,0,0,0,3,0,0,0,0,0,0,247,247,247,
27,27,27,251,251,251,255,251,250,235,230,229,239,79,96,56,214,186,4,237,249,1,2,0,0,1,1,0,253,255,0,254,0,0,255,0,0,0,0,0,253,0,0,0,0,0,253,0,0,254,0,254,255,0,0,0,0,1,253,0,0,254,0,0,255,0,0,0,0,0,0,
0,0,255,0,0,253,0,1,253,0,0,248,0,239,17,7,90,61,72,19,248,246,6,250,250,0,0,0,8,8,8,204,204,204,239,239,239,0,0,0,3,0,0,0,0,0,0,239,239,239,30,30,30,4,4,4,255,255,255,244,239,238,247,248,248,232,75,93,
52,209,187,3,243,252,0,4,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,255,0,0,254,0,0,0,0,255,0,0,1,255,0,0,254,0,0,255,0,0,255,0,0,0,0,0,255,0,0,255,0,1,253,0,0,249,0,245,12,5,84,67,77,0,250,250,10,248,247,
1,0,0,4,4,4,245,245,245,204,204,204,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,242,242,242,36,36,36,251,251,251,1,1,0,238,231,231,5,22,26,233,51,62,51,202,190,0,245,0,0,3,0,0,0,0,0,0,0,0,255,0,0,255,0,0,255,0,0,
254,0,0,0,0,255,255,0,1,255,0,0,254,0,0,1,0,0,254,0,0,0,0,0,255,0,1,252,0,0,246,0,0,3,0,103,67,75,228,1,3,11,245,243,1,255,255,3,3,3,8,8,8,202,202,202,245,245,245,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,245,245,
245,1,1,1,20,20,20,254,254,254,255,254,253,225,218,216,239,17,23,217,78,91,38,229,215,12,227,239,0,1,0,0,1,0,0,0,0,0,253,0,0,254,0,0,255,0,0,0,0,255,253,0,1,254,0,0,255,0,0,254,0,0,0,0,1,253,0,1,248,0,
0,248,0,216,30,21,91,74,80,223,251,253,10,243,243,3,255,255,2,2,2,6,6,6,218,218,218,224,224,224,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,235,235,235,14,14,14,14,14,14,254,254,254,1,255,255,236,225,
223,237,245,247,216,76,91,246,30,23,41,222,208,0,230,255,0,252,0,0,253,0,0,1,0,0,0,0,255,255,0,1,255,0,1,0,0,1,252,0,1,250,0,1,245,0,0,249,0,0,9,2,138,66,66,137,46,54,248,236,237,8,243,242,3,255,255,2,
2,2,8,8,8,233,233,233,209,209,209,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,36,36,36,36,36,249,249,249,250,250,250,250,251,251,247,255,0,17,36,38,26,47,51,37,1,249,50,210,203,61,
208,197,20,226,232,0,245,0,0,254,0,0,0,0,0,0,0,0,9,0,229,23,20,182,37,46,190,34,35,216,253,2,252,231,229,6,240,240,9,0,255,2,2,2,4,4,4,7,7,7,218,218,218,222,222,222,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,20,20,48,48,48,254,254,254,251,251,251,253,253,253,251,251,251,247,251,252,10,19,19,14,30,32,8,29,30,2,7,8,7,253,252,6,250,249,254,252,253,241,0,255,242,254,255,
253,242,241,252,235,234,252,235,234,3,249,249,5,2,1,2,2,2,2,2,2,5,5,5,2,2,2,208,208,208,236,236,236,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,46,46,46,
13,13,13,250,250,250,253,253,253,255,255,255,254,254,254,252,252,252,254,254,254,1,2,2,3,6,6,0,2,3,1,1,0,255,253,253,254,252,252,2,0,0,1,1,1,2,2,2,2,2,2,0,0,0,3,3,3,6,6,6,243,243,243,210,210,210,250,250,
250,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,38,38,27,27,27,254,254,254,251,251,251,253,253,253,0,0,0,255,255,255,0,0,0,255,255,255,0,
0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,0,3,3,3,5,5,5,2,2,2,229,229,229,218,218,218,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,30,30,30,24,24,24,9,9,9,254,254,254,252,252,252,254,254,254,255,255,255,255,255,255,0,0,0,1,1,1,1,1,1,2,2,2,4,4,4,2,2,2,247,247,247,232,232,232,226,226,226,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,10,10,10,12,12,12,11,11,11,7,7,7,5,5,5,2,2,2,0,0,0,254,254,254,251,251,251,249,249,
249,245,245,245,244,244,244,246,246,246,253,253,253,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,185,149,101,165,46,68,50,19,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::redledon_png = (const char*) resource_AiassAudioProcessorEditor_redledon_png;
const int AiassAudioProcessorEditor::redledon_pngSize = 4947;

// JUCER_RESOURCE: aiasshintergrund_png, 4011, "../images/AIASS-Hintergrund.png"
static const unsigned char resource_AiassAudioProcessorEditor_aiasshintergrund_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,3,32,0,0,2,13,8,6,0,0,0,198,53,27,52,0,0,0,1,115,82,71,66,0,174,
206,28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,0,7,116,73,77,69,7,228,6,12,7,25,59,171,211,239,149,0,0,15,45,73,68,65,84,120,94,
237,221,75,143,100,117,29,199,225,223,233,91,117,245,181,250,50,61,3,3,137,8,12,48,134,224,134,203,202,151,3,211,205,208,61,46,136,219,217,224,59,211,144,24,53,98,136,18,19,197,4,130,114,19,153,75,119,
79,87,213,177,234,116,139,152,176,235,154,239,234,121,54,167,170,78,189,129,79,126,255,75,243,238,187,191,104,207,238,127,92,47,191,244,116,13,135,227,154,106,154,166,123,2,0,0,204,82,243,230,155,183,
218,237,254,87,245,179,55,110,212,206,96,173,22,230,231,106,52,110,107,78,132,0,0,0,51,214,236,239,223,110,119,86,190,170,23,158,189,90,253,222,98,61,125,125,183,139,144,243,183,34,4,0,0,152,157,230,240,
240,168,253,228,111,31,212,222,206,90,157,62,26,214,230,70,191,54,86,151,187,41,72,123,241,39,0,0,128,89,152,127,227,245,55,238,126,251,205,63,170,223,95,156,228,72,213,241,201,163,186,127,124,90,189,
165,197,154,159,107,170,157,132,72,247,2,0,0,224,146,154,91,183,14,218,235,91,247,234,149,159,92,175,135,199,103,147,232,152,235,38,31,79,92,25,212,246,214,74,141,71,147,111,77,35,65,0,0,128,75,107,142,
14,143,218,191,126,244,219,26,12,86,106,52,137,141,233,9,88,227,182,173,229,222,98,245,150,230,107,242,209,86,16,0,0,96,38,154,119,14,15,219,207,63,249,176,174,238,174,215,217,104,220,157,126,213,78,170,
99,181,191,220,45,203,154,46,193,114,44,47,0,0,48,11,205,91,111,29,180,79,237,220,171,87,110,62,117,177,4,171,169,209,36,64,246,118,54,106,187,155,138,140,39,1,114,113,42,22,0,0,192,37,52,183,111,31,182,
247,190,252,115,61,121,109,171,206,206,70,53,109,141,233,178,171,245,213,229,90,233,47,117,203,177,76,64,0,0,128,89,104,238,220,185,211,126,248,135,247,187,224,24,183,231,55,161,79,45,45,45,212,226,194,
66,183,28,75,128,0,0,0,179,112,190,4,107,251,94,189,124,243,122,29,95,156,130,53,154,132,200,222,246,70,109,13,86,106,108,15,8,0,0,48,35,205,193,193,237,118,113,244,73,61,251,163,189,58,125,52,170,185,
185,243,83,176,182,54,86,106,99,109,89,128,0,0,0,51,211,252,252,206,157,246,131,223,255,186,86,87,122,221,237,231,211,216,152,46,187,234,45,45,212,194,252,244,78,16,1,2,0,0,204,70,55,1,89,26,125,90,207,
62,115,165,78,79,191,55,1,217,92,173,141,213,158,77,232,0,0,192,204,52,183,110,189,221,238,173,125,93,55,95,124,178,78,142,135,231,1,82,109,237,14,214,107,176,217,119,15,8,0,0,48,51,205,209,209,81,251,
241,95,126,87,91,131,213,139,59,63,154,110,217,85,191,183,84,189,165,69,167,96,1,0,0,51,211,28,30,30,182,159,253,253,143,117,101,122,19,250,112,122,19,122,213,244,48,222,213,254,210,36,66,22,107,220,78,
254,116,254,95,0,0,128,75,233,142,225,125,102,239,65,253,244,229,167,235,225,241,240,187,155,208,175,237,108,212,214,214,170,83,176,0,0,128,153,105,222,121,231,176,253,215,63,255,84,79,236,109,118,19,
144,105,107,180,147,23,107,253,229,234,175,44,218,3,2,0,0,204,76,115,231,232,168,253,232,195,223,212,198,250,244,206,143,139,95,39,150,122,11,213,91,92,56,63,5,203,34,44,0,0,96,6,154,253,91,7,237,246,
202,215,117,243,198,19,117,114,114,113,10,214,36,58,118,183,214,106,176,185,242,221,221,32,0,0,0,151,213,236,239,191,221,110,46,125,81,47,221,184,246,127,1,178,51,88,171,205,141,21,123,64,0,0,128,153,
233,46,34,92,95,248,188,94,124,254,234,15,4,72,95,128,0,0,0,51,211,77,64,6,189,47,39,1,242,67,19,16,1,2,0,0,204,206,252,107,175,189,126,183,55,247,160,118,183,215,106,248,223,83,176,38,1,210,95,94,170,
94,111,161,251,12,0,0,48,11,221,18,172,233,30,16,19,16,0,0,224,113,155,187,120,2,0,0,60,118,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,
2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,
70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,
196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,
128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,
0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,
1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,
32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,
2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,
70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,
196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,
128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,
0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,
1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,
32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,
2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,
70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,
196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,
128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,
0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,
1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,
32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,
2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,
70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,
196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,
128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,
0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,
1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,
32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,
2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,
70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,
196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,
128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,
0,16,35,64,0,0,128,24,1,2,0,0,196,204,191,250,234,107,119,151,231,31,214,238,206,90,13,135,227,106,154,166,218,201,139,126,111,177,122,189,133,106,219,233,55,0,0,128,203,107,14,14,110,183,155,75,95,212,
139,207,95,171,147,147,179,154,155,155,171,209,120,92,187,91,235,181,185,209,175,241,184,237,162,4,0,0,224,178,254,23,32,207,77,2,228,116,56,137,141,234,38,32,91,27,171,147,0,89,22,32,0,0,192,204,124,
111,2,114,181,142,143,135,53,63,127,62,1,217,25,172,213,96,211,4,4,0,0,152,157,102,127,18,32,131,73,128,188,240,220,181,58,61,61,155,252,210,116,251,62,182,55,215,106,99,173,87,163,201,103,1,2,0,0,204,
66,55,1,217,88,252,188,94,122,254,90,61,236,38,32,77,55,1,185,255,224,164,70,163,105,124,76,23,100,9,16,0,0,224,242,154,253,253,183,219,65,239,203,122,225,185,189,58,61,25,213,184,218,250,247,189,135,
245,232,209,176,155,134,72,15,0,0,96,86,230,166,145,49,157,120,84,219,212,112,242,252,230,219,243,248,152,46,187,18,31,0,0,192,44,117,19,144,237,254,87,117,227,199,123,245,217,23,223,214,112,56,170,185,
185,73,124,216,247,1,0,0,204,88,183,7,100,97,244,105,93,189,178,94,247,31,156,118,123,64,0,0,0,30,135,230,151,239,189,215,190,255,254,175,206,151,92,153,122,0,0,0,143,77,213,127,0,154,136,194,45,133,239,
119,5,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::aiasshintergrund_png = (const char*) resource_AiassAudioProcessorEditor_aiasshintergrund_png;
const int AiassAudioProcessorEditor::aiasshintergrund_pngSize = 4011;

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


//[EndFile] You can add extra defines here...
//[/EndFile]

