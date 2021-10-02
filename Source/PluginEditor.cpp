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

    controlgroup.reset (new juce::GroupComponent ("control group",
                                                  TRANS("Control")));
    addAndMakeVisible (controlgroup.get());

    controlgroup->setBounds (15, 80, 245, 210);

    waveformgroup.reset (new juce::GroupComponent ("waveform group",
                                                   TRANS("Waveform")));
    addAndMakeVisible (waveformgroup.get());

    waveformgroup->setBounds (362, 292, 421, 210);

    tonegroup.reset (new juce::GroupComponent ("tone group",
                                               TRANS("Tone")));
    addAndMakeVisible (tonegroup.get());

    tonegroup->setBounds (270, 80, 236, 210);

    soundgroup.reset (new juce::GroupComponent ("sound group",
                                                TRANS("Sound")));
    addAndMakeVisible (soundgroup.get());
    soundgroup->setTextLabelPosition (juce::Justification::centred);

    soundgroup->setBounds (15, 292, 340, 210);

    filtergroup.reset (new juce::GroupComponent ("filter group",
                                                 TRANS("Filter")));
    addAndMakeVisible (filtergroup.get());

    filtergroup->setBounds (512, 80, 270, 210);

    sidvolume.reset (new juce::Slider ("sidvolume slider"));
    addAndMakeVisible (sidvolume.get());
    sidvolume->setTooltip (TRANS("SID-Volume"));
    sidvolume->setRange (0, 15, 1);
    sidvolume->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    sidvolume->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    sidvolume->setBounds (30, 90, 66, 66);

    Octave1.reset (new juce::Slider ("octave1 slider"));
    addAndMakeVisible (Octave1.get());
    Octave1->setTooltip (TRANS("Octave1 Up/Down"));
    Octave1->setRange (-4, 4, 1);
    Octave1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Octave1->setBounds (315, 90, 66, 66);

    Octave2.reset (new juce::Slider ("octave2 slider"));
    addAndMakeVisible (Octave2.get());
    Octave2->setTooltip (TRANS("Octave2 Up/Down"));
    Octave2->setRange (-4, 4, 1);
    Octave2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Octave2->setBounds (315, 153, 66, 66);

    Octave3.reset (new juce::Slider ("octave3 slider"));
    addAndMakeVisible (Octave3.get());
    Octave3->setTooltip (TRANS("Octave3 Up/Down"));
    Octave3->setRange (-4, 4, 1);
    Octave3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Octave3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Octave3->setBounds (315, 218, 66, 66);

    Semi1.reset (new juce::Slider ("semi1 slider"));
    addAndMakeVisible (Semi1.get());
    Semi1->setTooltip (TRANS("Semitone1 Up/Down"));
    Semi1->setRange (-12, 12, 1);
    Semi1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Semi1->setBounds (375, 90, 66, 66);

    Semi2.reset (new juce::Slider ("semi2 slider"));
    addAndMakeVisible (Semi2.get());
    Semi2->setTooltip (TRANS("Semitone2 Up/Down"));
    Semi2->setRange (-12, 12, 1);
    Semi2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Semi2->setBounds (375, 153, 66, 66);

    Semi3.reset (new juce::Slider ("semi3 slider"));
    addAndMakeVisible (Semi3.get());
    Semi3->setTooltip (TRANS("Semitone3 Up/Down"));
    Semi3->setRange (-12, 12, 1);
    Semi3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Semi3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Semi3->setBounds (375, 218, 66, 66);

    Cent1.reset (new juce::Slider ("cent1 slider"));
    addAndMakeVisible (Cent1.get());
    Cent1->setTooltip (TRANS("Cent1 Up/Down"));
    Cent1->setRange (-100, 100, 1);
    Cent1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Cent1->setBounds (435, 90, 66, 66);

    Cent2.reset (new juce::Slider ("cent2 slider"));
    addAndMakeVisible (Cent2.get());
    Cent2->setTooltip (TRANS("Cent2 Up/Down"));
    Cent2->setRange (-100, 100, 1);
    Cent2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Cent2->setBounds (435, 153, 66, 66);

    Cent3.reset (new juce::Slider ("cent3 slider"));
    addAndMakeVisible (Cent3.get());
    Cent3->setTooltip (TRANS("Cent3 Up/Down"));
    Cent3->setRange (-100, 100, 1);
    Cent3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Cent3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Cent3->setBounds (435, 218, 66, 66);

    Attack1.reset (new juce::Slider ("attack1 slider"));
    addAndMakeVisible (Attack1.get());
    Attack1->setTooltip (TRANS("Attack 1"));
    Attack1->setRange (0, 15, 1);
    Attack1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Attack1->setBounds (30, 300, 66, 66);

    Attack2.reset (new juce::Slider ("attack2 slider"));
    addAndMakeVisible (Attack2.get());
    Attack2->setTooltip (TRANS("Attack 2"));
    Attack2->setRange (0, 15, 1);
    Attack2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Attack2->setBounds (30, 365, 66, 66);

    Attack3.reset (new juce::Slider ("attack3 slider"));
    addAndMakeVisible (Attack3.get());
    Attack3->setTooltip (TRANS("Attack 3"));
    Attack3->setRange (0, 15, 1);
    Attack3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Attack3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Attack3->setBounds (30, 430, 66, 66);

    Decay1.reset (new juce::Slider ("decay1 slider"));
    addAndMakeVisible (Decay1.get());
    Decay1->setTooltip (TRANS("Decay 1"));
    Decay1->setRange (0, 15, 1);
    Decay1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Decay1->setBounds (90, 300, 66, 66);

    Decay2.reset (new juce::Slider ("decay2 slider"));
    addAndMakeVisible (Decay2.get());
    Decay2->setTooltip (TRANS("Decay 2"));
    Decay2->setRange (0, 15, 1);
    Decay2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Decay2->setBounds (90, 365, 66, 66);

    Decay3.reset (new juce::Slider ("decay3 slider"));
    addAndMakeVisible (Decay3.get());
    Decay3->setTooltip (TRANS("Decay 3"));
    Decay3->setRange (0, 15, 1);
    Decay3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Decay3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Decay3->setBounds (90, 430, 66, 66);

    Sustain1.reset (new juce::Slider ("sustain1 slider"));
    addAndMakeVisible (Sustain1.get());
    Sustain1->setTooltip (TRANS("Sustain 1"));
    Sustain1->setRange (0, 15, 1);
    Sustain1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Sustain1->setBounds (150, 300, 66, 66);

    Sustain2.reset (new juce::Slider ("sustain2 slider"));
    addAndMakeVisible (Sustain2.get());
    Sustain2->setTooltip (TRANS("Sustain 2"));
    Sustain2->setRange (0, 15, 1);
    Sustain2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Sustain2->setBounds (150, 365, 66, 66);

    Sustain3.reset (new juce::Slider ("sustain3 slider"));
    addAndMakeVisible (Sustain3.get());
    Sustain3->setTooltip (TRANS("Sustain 3"));
    Sustain3->setRange (0, 15, 1);
    Sustain3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Sustain3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Sustain3->setBounds (150, 430, 66, 66);

    Release1.reset (new juce::Slider ("release1 slider"));
    addAndMakeVisible (Release1.get());
    Release1->setTooltip (TRANS("Release 1"));
    Release1->setRange (0, 15, 1);
    Release1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release1->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Release1->setBounds (210, 300, 66, 66);

    Release2.reset (new juce::Slider ("release2 slider"));
    addAndMakeVisible (Release2.get());
    Release2->setTooltip (TRANS("Release 2"));
    Release2->setRange (0, 15, 1);
    Release2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Release2->setBounds (210, 365, 66, 66);

    Release3.reset (new juce::Slider ("release3 slider"));
    addAndMakeVisible (Release3.get());
    Release3->setTooltip (TRANS("Release 3"));
    Release3->setRange (0, 15, 1);
    Release3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Release3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Release3->setBounds (210, 430, 66, 66);

    Pulsew1.reset (new juce::Slider ("pulsew1 slider"));
    addAndMakeVisible (Pulsew1.get());
    Pulsew1->setTooltip (TRANS("Pulse width 1"));
    Pulsew1->setRange (1, 4094, 1);
    Pulsew1->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew1->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);

    Pulsew1->setBounds (280, 300, 66, 66);

    Pulsew2.reset (new juce::Slider ("pulsew2 slider"));
    addAndMakeVisible (Pulsew2.get());
    Pulsew2->setTooltip (TRANS("Pulse width 2"));
    Pulsew2->setRange (1, 4094, 1);
    Pulsew2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew2->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Pulsew2->setBounds (280, 365, 66, 66);

    Pulsew3.reset (new juce::Slider ("pulsew3 slider"));
    addAndMakeVisible (Pulsew3.get());
    Pulsew3->setTooltip (TRANS("Pulse width 3"));
    Pulsew3->setRange (1, 4094, 1);
    Pulsew3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Pulsew3->setTextBoxStyle (juce::Slider::TextBoxBelow, true, 40, 12);

    Pulsew3->setBounds (280, 430, 66, 66);

    Velvol.reset (new juce::ToggleButton ("Vel2Vol button"));
    addAndMakeVisible (Velvol.get());
    Velvol->setTooltip (TRANS("maps Velocity to Volume"));
    Velvol->setButtonText (TRANS("Vel2Vol"));

    Velvol->setBounds (100, 110, 66, 30);

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

    legatomode->setBounds (30, 209, 150, 24);

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

    noteprioritymode->setBounds (30, 254, 150, 24);

    hyperlinkButton.reset (new juce::HyperlinkButton (TRANS("crazy-midi.de"),
                                                      URL ("http://www.crazy-midi.de")));
    addAndMakeVisible (hyperlinkButton.get());
    hyperlinkButton->setTooltip (TRANS("http://www.crazy-midi.de"));
    hyperlinkButton->setButtonText (TRANS("crazy-midi.de"));
    hyperlinkButton->setColour (juce::HyperlinkButton::textColourId, juce::Colours::green);

    hyperlinkButton->setBounds (660, 500, 150, 24);

    Filter1.reset (new juce::ToggleButton ("Filer1 toggle button"));
    addAndMakeVisible (Filter1.get());
    Filter1->setTooltip (TRANS("Voice 1 to Filter"));
    Filter1->setButtonText (TRANS("1"));

    Filter1->setBounds (710, 109, 66, 30);

    Filter2.reset (new juce::ToggleButton ("Filter2 toggle button"));
    addAndMakeVisible (Filter2.get());
    Filter2->setTooltip (TRANS("Voice 2 to Filter"));
    Filter2->setButtonText (TRANS("2"));

    Filter2->setBounds (650, 109, 66, 30);

    Filter3off.reset (new juce::ToggleButton ("3off toggle button"));
    addAndMakeVisible (Filter3off.get());
    Filter3off->setTooltip (TRANS("Mute Voice 3"));
    Filter3off->setButtonText (TRANS("3off"));

    Filter3off->setBounds (530, 159, 66, 30);

    Filter3.reset (new juce::ToggleButton ("Filter3 toggle button"));
    addAndMakeVisible (Filter3.get());
    Filter3->setTooltip (TRANS("Voice 3 to Filter"));
    Filter3->setButtonText (TRANS("3"));

    Filter3->setBounds (590, 109, 66, 30);

    Filterin.reset (new juce::ToggleButton ("FilterIn toggle button"));
    addAndMakeVisible (Filterin.get());
    Filterin->setTooltip (TRANS("extern In"));
    Filterin->setButtonText (TRANS("in"));

    Filterin->setBounds (530, 109, 66, 30);

    Filterlp.reset (new juce::ToggleButton ("lowpass toggle button"));
    addAndMakeVisible (Filterlp.get());
    Filterlp->setTooltip (TRANS("Low Pass"));
    Filterlp->setButtonText (TRANS("LP"));

    Filterlp->setBounds (710, 159, 66, 30);

    Filterhp.reset (new juce::ToggleButton ("high pass toggle button"));
    addAndMakeVisible (Filterhp.get());
    Filterhp->setTooltip (TRANS("High Pass"));
    Filterhp->setButtonText (TRANS("HP"));

    Filterhp->setBounds (590, 159, 66, 30);

    Filterbp.reset (new juce::ToggleButton ("band pass toggle button"));
    addAndMakeVisible (Filterbp.get());
    Filterbp->setTooltip (TRANS("Band Pass"));
    Filterbp->setButtonText (TRANS("BP"));

    Filterbp->setBounds (650, 159, 66, 30);

    Filter8580.reset (new juce::ToggleButton ("scale toggle button"));
    addAndMakeVisible (Filter8580.get());
    Filter8580->setTooltip (TRANS("scales filterfreq. to 0-71"));
    Filter8580->setButtonText (TRANS("scale"));
    Filter8580->setToggleState (true, juce::dontSendNotification);

    Filter8580->setBounds (530, 236, 90, 30);

    CutOff.reset (new juce::Slider ("cutoff slider"));
    addAndMakeVisible (CutOff.get());
    CutOff->setTooltip (TRANS("Cutoff"));
    CutOff->setRange (0, 2047, 1);
    CutOff->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    CutOff->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);

    CutOff->setBounds (632, 216, 66, 66);

    Resonace.reset (new juce::Slider ("resonance slider"));
    addAndMakeVisible (Resonace.get());
    Resonace->setTooltip (TRANS("Resonance"));
    Resonace->setRange (0, 15, 1);
    Resonace->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    Resonace->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 40, 12);

    Resonace->setBounds (702, 216, 66, 66);

    Noise1.reset (new juce::ToggleButton ("noise1 toggle button"));
    addAndMakeVisible (Noise1.get());
    Noise1->setButtonText (TRANS("Noise"));
    Noise1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Noise1->setBounds (374, 319, 66, 30);

    Noise2.reset (new juce::ToggleButton ("noise2 toggle button"));
    addAndMakeVisible (Noise2.get());
    Noise2->setButtonText (TRANS("Noise"));

    Noise2->setBounds (373, 389, 66, 30);

    Noise3.reset (new juce::ToggleButton ("noise3 toggle button"));
    addAndMakeVisible (Noise3.get());
    Noise3->setButtonText (TRANS("Noise"));

    Noise3->setBounds (375, 459, 66, 30);

    Pulse1.reset (new juce::ToggleButton ("pulse1 toggle button"));
    addAndMakeVisible (Pulse1.get());
    Pulse1->setButtonText (TRANS("Pulse"));
    Pulse1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Pulse1->setBounds (443, 319, 66, 30);

    Pulse2.reset (new juce::ToggleButton ("pulse2 toggle button"));
    addAndMakeVisible (Pulse2.get());
    Pulse2->setButtonText (TRANS("Pulse"));

    Pulse2->setBounds (443, 389, 66, 30);

    Pulse3.reset (new juce::ToggleButton ("pulse3 toggle button"));
    addAndMakeVisible (Pulse3.get());
    Pulse3->setButtonText (TRANS("Pulse"));

    Pulse3->setBounds (443, 459, 66, 30);

    Saw1.reset (new juce::ToggleButton ("saw1 toggle button"));
    addAndMakeVisible (Saw1.get());
    Saw1->setButtonText (TRANS("Saw"));
    Saw1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Saw1->setBounds (509, 319, 66, 30);

    Saw2.reset (new juce::ToggleButton ("saw2 toggle button"));
    addAndMakeVisible (Saw2.get());
    Saw2->setButtonText (TRANS("Saw"));

    Saw2->setBounds (509, 389, 66, 30);

    Saw3.reset (new juce::ToggleButton ("saw3 toggle button"));
    addAndMakeVisible (Saw3.get());
    Saw3->setButtonText (TRANS("Saw"));

    Saw3->setBounds (509, 459, 66, 30);

    Tria1.reset (new juce::ToggleButton ("tria1 toggle button"));
    addAndMakeVisible (Tria1.get());
    Tria1->setButtonText (TRANS("Tria"));
    Tria1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Tria1->setBounds (572, 319, 66, 30);

    Tria2.reset (new juce::ToggleButton ("tria2 toggle button"));
    addAndMakeVisible (Tria2.get());
    Tria2->setButtonText (TRANS("Tria"));

    Tria2->setBounds (570, 390, 66, 30);

    Tria3.reset (new juce::ToggleButton ("tria3 toggle button"));
    addAndMakeVisible (Tria3.get());
    Tria3->setButtonText (TRANS("Tria"));

    Tria3->setBounds (572, 459, 66, 30);

    Ringmod1.reset (new juce::ToggleButton ("ringmod1 toggle button"));
    addAndMakeVisible (Ringmod1.get());
    Ringmod1->setButtonText (TRANS("Ringmod"));
    Ringmod1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Ringmod1->setBounds (629, 319, 66, 30);

    Ringmod2.reset (new juce::ToggleButton ("ringmod2 toggle button"));
    addAndMakeVisible (Ringmod2.get());
    Ringmod2->setButtonText (TRANS("Ringmod"));

    Ringmod2->setBounds (629, 389, 66, 30);

    Ringmod3.reset (new juce::ToggleButton ("ringmod3 toggle button"));
    addAndMakeVisible (Ringmod3.get());
    Ringmod3->setButtonText (TRANS("Ringmod"));

    Ringmod3->setBounds (629, 459, 66, 30);

    Sync1.reset (new juce::ToggleButton ("syn1 toggle button"));
    addAndMakeVisible (Sync1.get());
    Sync1->setButtonText (TRANS("Sync."));
    Sync1->setConnectedEdges (juce::Button::ConnectedOnBottom);

    Sync1->setBounds (705, 319, 66, 30);

    Sync2.reset (new juce::ToggleButton ("sync2 toggle button"));
    addAndMakeVisible (Sync2.get());
    Sync2->setButtonText (TRANS("Sync."));

    Sync2->setBounds (705, 389, 66, 30);

    Sync3.reset (new juce::ToggleButton ("sync3 toggle button"));
    addAndMakeVisible (Sync3.get());
    Sync3->setButtonText (TRANS("Sync."));

    Sync3->setBounds (705, 459, 66, 30);

    Voice1.reset (new juce::ToggleButton ("voice1 toggle button"));
    addAndMakeVisible (Voice1.get());
    Voice1->setTooltip (TRANS("Voice 1 On/Off"));
    Voice1->setButtonText (TRANS("1"));
    Voice1->setToggleState (true, juce::dontSendNotification);

    Voice1->setBounds (285, 105, 66, 30);

    Voice2.reset (new juce::ToggleButton ("voice2 toggle button"));
    addAndMakeVisible (Voice2.get());
    Voice2->setTooltip (TRANS("Voice 2 On/Off"));
    Voice2->setButtonText (TRANS("2"));
    Voice2->setToggleState (true, juce::dontSendNotification);

    Voice2->setBounds (285, 167, 66, 30);

    Voice3.reset (new juce::ToggleButton ("voice3 toggle button"));
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
    Led->setBounds (710, 30, 40, 40);

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

    midichannel->setBounds (30, 162, 150, 24);

    reset_button.reset (new juce::ImageButton ("reset button"));
    addAndMakeVisible (reset_button.get());
    reset_button->setTooltip (TRANS("click twice for SID reset"));

    reset_button->setImages (false, true, true,
                             juce::ImageCache::getFromMemory (reset_png, reset_pngSize), 1.000f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (reset_png, reset_pngSize), 1.000f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (reset_png, reset_pngSize), 1.000f, juce::Colour (0x00000000));
    reset_button->setBounds (400, 30, 138, 40);

    link_button.reset (new juce::ToggleButton ("link button"));
    addAndMakeVisible (link_button.get());
    link_button->setTooltip (TRANS("link gui elements"));
    link_button->setButtonText (TRANS("link"));

    link_button->setBounds (190, 110, 66, 30);

    cachedImage_aiasshintergrund_png2_1 = juce::ImageCache::getFromMemory (aiasshintergrund_png2, aiasshintergrund_png2Size);
    cachedImage_aiass_mono_typenschild_png_2 = juce::ImageCache::getFromMemory (aiass_mono_typenschild_png, aiass_mono_typenschild_pngSize);

    //[UserPreSize]
	legatomode->setSelectedItemIndex(0);
	noteprioritymode->setSelectedItemIndex(0);
    midichannel->setSelectedItemIndex(0);
	legatomode->setEnabled(true);
	noteprioritymode->setEnabled(true);
    midichannel->setEnabled(true);
    link_button->setEnabled(false);
    reset_button->setEnabled(false);

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

    controlgroup = nullptr;
    waveformgroup = nullptr;
    tonegroup = nullptr;
    soundgroup = nullptr;
    filtergroup = nullptr;
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
    reset_button = nullptr;
    link_button = nullptr;


    //[Destructor]. You can add your own custom destruction code here..



    //[/Destructor]
}

//==============================================================================
void AiassAudioProcessorEditor::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        int x = 0, y = 0, width = 800, height = 520;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImage (cachedImage_aiasshintergrund_png2_1,
                     x, y, width, height,
                     0, 0, cachedImage_aiasshintergrund_png2_1.getWidth(), cachedImage_aiasshintergrund_png2_1.getHeight());
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
        juce::String text (TRANS("v. 0.4"));
        juce::Colour fillColour = juce::Colours::black;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
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
  <BACKGROUND backgroundColour="ffffff">
    <IMAGE pos="0 0 800 520" resource="aiasshintergrund_png2" opacity="1.0"
           mode="0"/>
    <IMAGE pos="25 29 315 41" resource="aiass_mono_typenschild_png" opacity="1.0"
           mode="0"/>
    <TEXT pos="353 49 40 20" fill="solid: ff000000" hasStroke="0" text="v. 0.4"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
  </BACKGROUND>
  <GROUPCOMPONENT name="control group" id="f28a7389bff6ea97" memberName="controlgroup"
                  virtualName="" explicitFocusOrder="0" pos="15 80 245 210" title="Control"/>
  <GROUPCOMPONENT name="waveform group" id="52ab711584b2835a" memberName="waveformgroup"
                  virtualName="" explicitFocusOrder="0" pos="362 292 421 210" title="Waveform"/>
  <GROUPCOMPONENT name="tone group" id="6d64fe01c88e0968" memberName="tonegroup"
                  virtualName="" explicitFocusOrder="0" pos="270 80 236 210" title="Tone"/>
  <GROUPCOMPONENT name="sound group" id="9c52dd13730dcbb" memberName="soundgroup"
                  virtualName="" explicitFocusOrder="0" pos="15 292 340 210" title="Sound"
                  textpos="36"/>
  <GROUPCOMPONENT name="filter group" id="5844d35c6980f98d" memberName="filtergroup"
                  virtualName="" explicitFocusOrder="0" pos="512 80 270 210" title="Filter"/>
  <SLIDER name="sidvolume slider" id="d351edf4789a40e0" memberName="sidvolume"
          virtualName="" explicitFocusOrder="0" pos="30 90 66 66" tooltip="SID-Volume"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="octave1 slider" id="26c4155703d3dafe" memberName="Octave1"
          virtualName="" explicitFocusOrder="0" pos="315 90 66 66" tooltip="Octave1 Up/Down"
          min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="octave2 slider" id="7808b9c1fb74ccc8" memberName="Octave2"
          virtualName="" explicitFocusOrder="0" pos="315 153 66 66" tooltip="Octave2 Up/Down"
          min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="octave3 slider" id="d3e4a1e141ca77b6" memberName="Octave3"
          virtualName="" explicitFocusOrder="0" pos="315 218 66 66" tooltip="Octave3 Up/Down"
          min="-4.0" max="4.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="semi1 slider" id="4297018af851022d" memberName="Semi1"
          virtualName="" explicitFocusOrder="0" pos="375 90 66 66" tooltip="Semitone1 Up/Down"
          min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="semi2 slider" id="4e87cf183b0e0e77" memberName="Semi2"
          virtualName="" explicitFocusOrder="0" pos="375 153 66 66" tooltip="Semitone2 Up/Down"
          min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="semi3 slider" id="f03b15fac2d0a403" memberName="Semi3"
          virtualName="" explicitFocusOrder="0" pos="375 218 66 66" tooltip="Semitone3 Up/Down"
          min="-12.0" max="12.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="cent1 slider" id="b0bba6848acec451" memberName="Cent1"
          virtualName="" explicitFocusOrder="0" pos="435 90 66 66" tooltip="Cent1 Up/Down"
          min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="cent2 slider" id="873ffcdb55231a19" memberName="Cent2"
          virtualName="" explicitFocusOrder="0" pos="435 153 66 66" tooltip="Cent2 Up/Down"
          min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="cent3 slider" id="77eb6b6e2092a08c" memberName="Cent3"
          virtualName="" explicitFocusOrder="0" pos="435 218 66 66" tooltip="Cent3 Up/Down"
          min="-100.0" max="100.0" int="1.0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.0" needsCallback="0"/>
  <SLIDER name="attack1 slider" id="53619e38d7835c9d" memberName="Attack1"
          virtualName="" explicitFocusOrder="0" pos="30 300 66 66" tooltip="Attack 1"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="attack2 slider" id="40a979315f74e3a" memberName="Attack2"
          virtualName="" explicitFocusOrder="0" pos="30 365 66 66" tooltip="Attack 2"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="attack3 slider" id="7e38002dde33164c" memberName="Attack3"
          virtualName="" explicitFocusOrder="0" pos="30 430 66 66" tooltip="Attack 3"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="decay1 slider" id="49642dbf385beee8" memberName="Decay1"
          virtualName="" explicitFocusOrder="0" pos="90 300 66 66" tooltip="Decay 1"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="decay2 slider" id="379b886c43a29254" memberName="Decay2"
          virtualName="" explicitFocusOrder="0" pos="90 365 66 66" tooltip="Decay 2"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="decay3 slider" id="ff55788389bcec83" memberName="Decay3"
          virtualName="" explicitFocusOrder="0" pos="90 430 66 66" tooltip="Decay 3"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="sustain1 slider" id="2793e34c7a6a6286" memberName="Sustain1"
          virtualName="" explicitFocusOrder="0" pos="150 300 66 66" tooltip="Sustain 1"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="sustain2 slider" id="25e905e8830bd418" memberName="Sustain2"
          virtualName="" explicitFocusOrder="0" pos="150 365 66 66" tooltip="Sustain 2"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="sustain3 slider" id="740735c3d8776e72" memberName="Sustain3"
          virtualName="" explicitFocusOrder="0" pos="150 430 66 66" tooltip="Sustain 3"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="release1 slider" id="26b01f2c9f0fcbd4" memberName="Release1"
          virtualName="" explicitFocusOrder="0" pos="210 300 66 66" tooltip="Release 1"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="release2 slider" id="cede2f433ff54882" memberName="Release2"
          virtualName="" explicitFocusOrder="0" pos="210 365 66 66" tooltip="Release 2"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="release3 slider" id="a6cb93496f682a4d" memberName="Release3"
          virtualName="" explicitFocusOrder="0" pos="210 430 66 66" tooltip="Release 3"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="pulsew1 slider" id="a63bd08caa77c655" memberName="Pulsew1"
          virtualName="" explicitFocusOrder="0" pos="280 300 66 66" tooltip="Pulse width 1"
          min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="pulsew2 slider" id="c761eb76e90133c8" memberName="Pulsew2"
          virtualName="" explicitFocusOrder="0" pos="280 365 66 66" tooltip="Pulse width 2"
          min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="pulsew3 slider" id="c9edf691a324176f" memberName="Pulsew3"
          virtualName="" explicitFocusOrder="0" pos="280 430 66 66" tooltip="Pulse width 3"
          min="1.0" max="4094.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <TOGGLEBUTTON name="Vel2Vol button" id="498d1ccffc218a3e" memberName="Velvol"
                virtualName="" explicitFocusOrder="0" pos="100 110 66 30" tooltip="maps Velocity to Volume"
                buttonText="Vel2Vol" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <COMBOBOX name="legatomode" id="185cc42c904fe921" memberName="legatomode"
            virtualName="" explicitFocusOrder="0" pos="30 209 150 24" tooltip="play mode"
            editable="0" layout="33" items="Retrigger&#10;Legato&#10;Last Step"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="noteprioritymode" id="c728000aa37b04a3" memberName="noteprioritymode"
            virtualName="" explicitFocusOrder="0" pos="30 254 150 24" tooltip="note priority"
            editable="0" layout="33" items="Last Note&#10;High Note&#10;Low Note"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <HYPERLINKBUTTON name="new hyperlink" id="27b1f728dfa971d5" memberName="hyperlinkButton"
                   virtualName="" explicitFocusOrder="0" pos="660 500 150 24" tooltip="http://www.crazy-midi.de"
                   textCol="ff008000" buttonText="crazy-midi.de" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="http://www.crazy-midi.de"/>
  <TOGGLEBUTTON name="Filer1 toggle button" id="f988e7a5126e5bac" memberName="Filter1"
                virtualName="" explicitFocusOrder="0" pos="710 109 66 30" tooltip="Voice 1 to Filter"
                buttonText="1" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="Filter2 toggle button" id="e8384ca904cc9cee" memberName="Filter2"
                virtualName="" explicitFocusOrder="0" pos="650 109 66 30" tooltip="Voice 2 to Filter"
                buttonText="2" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="3off toggle button" id="46436fd7c74f713f" memberName="Filter3off"
                virtualName="" explicitFocusOrder="0" pos="530 159 66 30" tooltip="Mute Voice 3"
                buttonText="3off" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="Filter3 toggle button" id="15351388c9102c09" memberName="Filter3"
                virtualName="" explicitFocusOrder="0" pos="590 109 66 30" tooltip="Voice 3 to Filter"
                buttonText="3" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="FilterIn toggle button" id="1a8bcabfd8647671" memberName="Filterin"
                virtualName="" explicitFocusOrder="0" pos="530 109 66 30" tooltip="extern In"
                buttonText="in" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="lowpass toggle button" id="fe8269d4b1a9c6e6" memberName="Filterlp"
                virtualName="" explicitFocusOrder="0" pos="710 159 66 30" tooltip="Low Pass"
                buttonText="LP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="high pass toggle button" id="17b0fa917ff0851e" memberName="Filterhp"
                virtualName="" explicitFocusOrder="0" pos="590 159 66 30" tooltip="High Pass"
                buttonText="HP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="band pass toggle button" id="2bd008bd14ea7c51" memberName="Filterbp"
                virtualName="" explicitFocusOrder="0" pos="650 159 66 30" tooltip="Band Pass"
                buttonText="BP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="scale toggle button" id="1f267441a830f9ff" memberName="Filter8580"
                virtualName="" explicitFocusOrder="0" pos="530 236 90 30" tooltip="scales filterfreq. to 0-71"
                buttonText="scale" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <SLIDER name="cutoff slider" id="b104465dc77b15ae" memberName="CutOff"
          virtualName="" explicitFocusOrder="0" pos="632 216 66 66" tooltip="Cutoff"
          min="0.0" max="2047.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <SLIDER name="resonance slider" id="b18e0fc28c589ec5" memberName="Resonace"
          virtualName="" explicitFocusOrder="0" pos="702 216 66 66" tooltip="Resonance"
          min="0.0" max="15.0" int="1.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.0"
          needsCallback="0"/>
  <TOGGLEBUTTON name="noise1 toggle button" id="53248eb179f92afc" memberName="Noise1"
                virtualName="" explicitFocusOrder="0" pos="374 319 66 30" buttonText="Noise"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="noise2 toggle button" id="d83f77113f37d2ea" memberName="Noise2"
                virtualName="" explicitFocusOrder="0" pos="373 389 66 30" buttonText="Noise"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="noise3 toggle button" id="1da77acd9957a585" memberName="Noise3"
                virtualName="" explicitFocusOrder="0" pos="375 459 66 30" buttonText="Noise"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="pulse1 toggle button" id="3bbfb8f7a8ca0db0" memberName="Pulse1"
                virtualName="" explicitFocusOrder="0" pos="443 319 66 30" buttonText="Pulse"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="pulse2 toggle button" id="520ab3980bfa9711" memberName="Pulse2"
                virtualName="" explicitFocusOrder="0" pos="443 389 66 30" buttonText="Pulse"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="pulse3 toggle button" id="1dd05bea0d3cdf7d" memberName="Pulse3"
                virtualName="" explicitFocusOrder="0" pos="443 459 66 30" buttonText="Pulse"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="saw1 toggle button" id="a48dd1aa6574a3e4" memberName="Saw1"
                virtualName="" explicitFocusOrder="0" pos="509 319 66 30" buttonText="Saw"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="saw2 toggle button" id="ae3029edeecd4b14" memberName="Saw2"
                virtualName="" explicitFocusOrder="0" pos="509 389 66 30" buttonText="Saw"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="saw3 toggle button" id="656ce7e680e8573a" memberName="Saw3"
                virtualName="" explicitFocusOrder="0" pos="509 459 66 30" buttonText="Saw"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="tria1 toggle button" id="5747f6f8bb660f63" memberName="Tria1"
                virtualName="" explicitFocusOrder="0" pos="572 319 66 30" buttonText="Tria"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="tria2 toggle button" id="cc78b8161478c5a4" memberName="Tria2"
                virtualName="" explicitFocusOrder="0" pos="570 390 66 30" buttonText="Tria"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="tria3 toggle button" id="d9035b35478c1c9b" memberName="Tria3"
                virtualName="" explicitFocusOrder="0" pos="572 459 66 30" buttonText="Tria"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="ringmod1 toggle button" id="11efaf86d1acf272" memberName="Ringmod1"
                virtualName="" explicitFocusOrder="0" pos="629 319 66 30" buttonText="Ringmod"
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="ringmod2 toggle button" id="9d63104088c0485a" memberName="Ringmod2"
                virtualName="" explicitFocusOrder="0" pos="629 389 66 30" buttonText="Ringmod"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="ringmod3 toggle button" id="a97c9d37cd1a1d18" memberName="Ringmod3"
                virtualName="" explicitFocusOrder="0" pos="629 459 66 30" buttonText="Ringmod"
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="syn1 toggle button" id="fb4637c0f86bc855" memberName="Sync1"
                virtualName="" explicitFocusOrder="0" pos="705 319 66 30" buttonText="Sync."
                connectedEdges="8" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="sync2 toggle button" id="99a8550e2ad2c6da" memberName="Sync2"
                virtualName="" explicitFocusOrder="0" pos="705 389 66 30" buttonText="Sync."
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="sync3 toggle button" id="880c3fcf4ab4a1f6" memberName="Sync3"
                virtualName="" explicitFocusOrder="0" pos="705 459 66 30" buttonText="Sync."
                connectedEdges="0" needsCallback="0" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="voice1 toggle button" id="883f3d3793f0f11b" memberName="Voice1"
                virtualName="" explicitFocusOrder="0" pos="285 105 66 30" tooltip="Voice 1 On/Off"
                buttonText="1" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <TOGGLEBUTTON name="voice2 toggle button" id="3b39ff7f634b369" memberName="Voice2"
                virtualName="" explicitFocusOrder="0" pos="285 167 66 30" tooltip="Voice 2 On/Off"
                buttonText="2" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <TOGGLEBUTTON name="voice3 toggle button" id="62c330b01d3c339c" memberName="Voice3"
                virtualName="" explicitFocusOrder="0" pos="285 230 66 30" tooltip="Voice 3 On/Off"
                buttonText="3" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <IMAGEBUTTON name="Power_LED" id="77dead3478e9a659" memberName="Led" virtualName=""
               explicitFocusOrder="0" pos="710 30 40 40" tooltip="midi-activity and  blinks when error-status"
               buttonText="" connectedEdges="0" needsCallback="0" radioGroupId="0"
               keepProportions="1" resourceNormal="redledoff_png" opacityNormal="1.0"
               colourNormal="ffffff" resourceOver="redledoff_png" opacityOver="1.0"
               colourOver="ffffff" resourceDown="redledon_png" opacityDown="1.0"
               colourDown="ffffff"/>
  <COMBOBOX name="midichannel" id="62ff9b6ec5b8843e" memberName="midichannel"
            virtualName="" explicitFocusOrder="0" pos="30 162 150 24" tooltip="MIDI channel"
            editable="0" layout="33" items="all&#10;1&#10;2&#10;3&#10;4&#10;5&#10;6&#10;7&#10;8&#10;9&#10;10&#10;11&#10;12&#10;13&#10;14&#10;15&#10;16"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <IMAGEBUTTON name="reset button" id="99243fa27f37fff" memberName="reset_button"
               virtualName="" explicitFocusOrder="0" pos="400 30 138 40" tooltip="click twice for SID reset"
               buttonText="reset button" connectedEdges="0" needsCallback="0"
               radioGroupId="0" keepProportions="1" resourceNormal="reset_png"
               opacityNormal="1.0" colourNormal="0" resourceOver="reset_png"
               opacityOver="1.0" colourOver="0" resourceDown="reset_png" opacityDown="1.0"
               colourDown="0"/>
  <TOGGLEBUTTON name="link button" id="8ffae76151409f08" memberName="link_button"
                virtualName="" explicitFocusOrder="0" pos="190 110 66 30" tooltip="link gui elements"
                buttonText="link" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
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

// JUCER_RESOURCE: aiasshintergrund_png2, 4011, "../images/AIASS-Hintergrund.png"
static const unsigned char resource_AiassAudioProcessorEditor_aiasshintergrund_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,3,32,0,0,2,13,8,6,0,0,0,198,53,27,52,0,0,0,1,115,82,71,66,0,
174,206,28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,0,7,116,73,77,69,7,228,6,12,7,25,59,171,211,239,149,0,0,15,45,73,68,65,84,120,
94,237,221,75,143,100,117,29,199,225,223,233,91,117,245,181,250,50,61,3,3,137,8,12,48,134,224,134,203,202,151,3,211,205,208,61,46,136,219,217,224,59,211,144,24,53,98,136,18,19,197,4,130,114,19,153,75,
119,79,87,213,177,234,116,139,152,176,235,154,239,234,121,54,167,170,78,189,129,79,126,255,75,243,238,187,191,104,207,238,127,92,47,191,244,116,13,135,227,154,106,154,166,123,2,0,0,204,82,243,230,155,
183,218,237,254,87,245,179,55,110,212,206,96,173,22,230,231,106,52,110,107,78,132,0,0,0,51,214,236,239,223,110,119,86,190,170,23,158,189,90,253,222,98,61,125,125,183,139,144,243,183,34,4,0,0,152,157,230,
240,240,168,253,228,111,31,212,222,206,90,157,62,26,214,230,70,191,54,86,151,187,41,72,123,241,39,0,0,128,89,152,127,227,245,55,238,126,251,205,63,170,223,95,156,228,72,213,241,201,163,186,127,124,90,
189,165,197,154,159,107,170,157,132,72,247,2,0,0,224,146,154,91,183,14,218,235,91,247,234,149,159,92,175,135,199,103,147,232,152,235,38,31,79,92,25,212,246,214,74,141,71,147,111,77,35,65,0,0,128,75,107,
142,14,143,218,191,126,244,219,26,12,86,106,52,137,141,233,9,88,227,182,173,229,222,98,245,150,230,107,242,209,86,16,0,0,96,38,154,119,14,15,219,207,63,249,176,174,238,174,215,217,104,220,157,126,213,
78,170,99,181,191,220,45,203,154,46,193,114,44,47,0,0,48,11,205,91,111,29,180,79,237,220,171,87,110,62,117,177,4,171,169,209,36,64,246,118,54,106,187,155,138,140,39,1,114,113,42,22,0,0,192,37,52,183,111,
31,182,247,190,252,115,61,121,109,171,206,206,70,53,109,141,233,178,171,245,213,229,90,233,47,117,203,177,76,64,0,0,128,89,104,238,220,185,211,126,248,135,247,187,224,24,183,231,55,161,79,45,45,45,212,
226,194,66,183,28,75,128,0,0,0,179,112,190,4,107,251,94,189,124,243,122,29,95,156,130,53,154,132,200,222,246,70,109,13,86,106,108,15,8,0,0,48,35,205,193,193,237,118,113,244,73,61,251,163,189,58,125,52,
170,185,185,243,83,176,182,54,86,106,99,109,89,128,0,0,0,51,211,252,252,206,157,246,131,223,255,186,86,87,122,221,237,231,211,216,152,46,187,234,45,45,212,194,252,244,78,16,1,2,0,0,204,70,55,1,89,26,125,
90,207,62,115,165,78,79,191,55,1,217,92,173,141,213,158,77,232,0,0,192,204,52,183,110,189,221,238,173,125,93,55,95,124,178,78,142,135,231,1,82,109,237,14,214,107,176,217,119,15,8,0,0,48,51,205,209,209,
81,251,241,95,126,87,91,131,213,139,59,63,154,110,217,85,191,183,84,189,165,69,167,96,1,0,0,51,211,28,30,30,182,159,253,253,143,117,101,122,19,250,112,122,19,122,213,244,48,222,213,254,210,36,66,22,107,
220,78,254,116,254,95,0,0,128,75,233,142,225,125,102,239,65,253,244,229,167,235,225,241,240,187,155,208,175,237,108,212,214,214,170,83,176,0,0,128,153,105,222,121,231,176,253,215,63,255,84,79,236,109,
118,19,144,105,107,180,147,23,107,253,229,234,175,44,218,3,2,0,0,204,76,115,231,232,168,253,232,195,223,212,198,250,244,206,143,139,95,39,150,122,11,213,91,92,56,63,5,203,34,44,0,0,96,6,154,253,91,7,237,
246,202,215,117,243,198,19,117,114,114,113,10,214,36,58,118,183,214,106,176,185,242,221,221,32,0,0,0,151,213,236,239,191,221,110,46,125,81,47,221,184,246,127,1,178,51,88,171,205,141,21,123,64,0,0,128,
153,233,46,34,92,95,248,188,94,124,254,234,15,4,72,95,128,0,0,0,51,211,77,64,6,189,47,39,1,242,67,19,16,1,2,0,0,204,206,252,107,175,189,126,183,55,247,160,118,183,215,106,248,223,83,176,38,1,210,95,94,
170,94,111,161,251,12,0,0,48,11,221,18,172,233,30,16,19,16,0,0,224,113,155,187,120,2,0,0,60,118,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,
49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,
32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,
0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,
0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,
0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,
0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,32,0,0,64,140,0,1,0,0,98,4,8,0,0,16,35,64,0,0,128,24,1,2,0,0,196,8,16,0,0,32,70,128,0,0,0,49,2,4,0,0,136,17,
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

const char* AiassAudioProcessorEditor::aiasshintergrund_png2 = (const char*) resource_AiassAudioProcessorEditor_aiasshintergrund_png2;
const int AiassAudioProcessorEditor::aiasshintergrund_png2Size = 4011;


//[EndFile] You can add extra defines here...
//[/EndFile]

