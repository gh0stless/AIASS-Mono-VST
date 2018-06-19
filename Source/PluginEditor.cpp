/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

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

    groupComponent5.reset (new GroupComponent ("new group",
                                               TRANS("Control")));
    addAndMakeVisible (groupComponent5.get());

    groupComponent5->setBounds (15, 80, 245, 210);

    groupComponent4.reset (new GroupComponent ("new group",
                                               TRANS("Waveform")));
    addAndMakeVisible (groupComponent4.get());

    groupComponent4->setBounds (362, 292, 421, 210);

    groupComponent2.reset (new GroupComponent ("new group",
                                               TRANS("Tone")));
    addAndMakeVisible (groupComponent2.get());

    groupComponent2->setBounds (270, 80, 236, 210);

    groupComponent.reset (new GroupComponent ("new group",
                                              TRANS("Sound")));
    addAndMakeVisible (groupComponent.get());
    groupComponent->setTextLabelPosition (Justification::centred);

    groupComponent->setBounds (15, 292, 340, 210);

    groupComponent3.reset (new GroupComponent ("new group",
                                               TRANS("Filter")));
    addAndMakeVisible (groupComponent3.get());

    groupComponent3->setBounds (512, 80, 270, 210);

    sidvolume.reset (new Slider ("new slider"));
    addAndMakeVisible (sidvolume.get());
    sidvolume->setTooltip (TRANS("SID-Volume"));
    sidvolume->setRange (0, 15, 1);
    sidvolume->setSliderStyle (Slider::RotaryVerticalDrag);
    sidvolume->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    sidvolume->setBounds (64, 111, 66, 66);

    Octave1.reset (new Slider ("new slider"));
    addAndMakeVisible (Octave1.get());
    Octave1->setTooltip (TRANS("Octave1 Up/Down"));
    Octave1->setRange (-4, 4, 1);
    Octave1->setSliderStyle (Slider::RotaryVerticalDrag);
    Octave1->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Octave1->setBounds (315, 90, 66, 66);

    Octave2.reset (new Slider ("new slider"));
    addAndMakeVisible (Octave2.get());
    Octave2->setTooltip (TRANS("Octave2 Up/Down"));
    Octave2->setRange (-4, 4, 1);
    Octave2->setSliderStyle (Slider::RotaryVerticalDrag);
    Octave2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Octave2->setBounds (315, 153, 66, 66);

    Octave3.reset (new Slider ("new slider"));
    addAndMakeVisible (Octave3.get());
    Octave3->setTooltip (TRANS("Octave3 Up/Down"));
    Octave3->setRange (-4, 4, 1);
    Octave3->setSliderStyle (Slider::RotaryVerticalDrag);
    Octave3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Octave3->setBounds (315, 218, 66, 66);

    Semi1.reset (new Slider ("new slider"));
    addAndMakeVisible (Semi1.get());
    Semi1->setTooltip (TRANS("Semitone1 Up/Down"));
    Semi1->setRange (-12, 12, 1);
    Semi1->setSliderStyle (Slider::RotaryVerticalDrag);
    Semi1->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Semi1->setBounds (375, 90, 66, 66);

    Semi2.reset (new Slider ("new slider"));
    addAndMakeVisible (Semi2.get());
    Semi2->setTooltip (TRANS("Semitone2 Up/Down"));
    Semi2->setRange (-12, 12, 1);
    Semi2->setSliderStyle (Slider::RotaryVerticalDrag);
    Semi2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Semi2->setBounds (375, 153, 66, 66);

    Semi3.reset (new Slider ("new slider"));
    addAndMakeVisible (Semi3.get());
    Semi3->setTooltip (TRANS("Semitone3 Up/Down"));
    Semi3->setRange (-12, 12, 1);
    Semi3->setSliderStyle (Slider::RotaryVerticalDrag);
    Semi3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Semi3->setBounds (375, 218, 66, 66);

    Cent1.reset (new Slider ("new slider"));
    addAndMakeVisible (Cent1.get());
    Cent1->setTooltip (TRANS("Cent1 Up/Down"));
    Cent1->setRange (-100, 100, 1);
    Cent1->setSliderStyle (Slider::RotaryVerticalDrag);
    Cent1->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Cent1->setBounds (435, 90, 66, 66);

    Cent2.reset (new Slider ("new slider"));
    addAndMakeVisible (Cent2.get());
    Cent2->setTooltip (TRANS("Cent2 Up/Down"));
    Cent2->setRange (-100, 100, 1);
    Cent2->setSliderStyle (Slider::RotaryVerticalDrag);
    Cent2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Cent2->setBounds (435, 153, 66, 66);

    Cent3.reset (new Slider ("new slider"));
    addAndMakeVisible (Cent3.get());
    Cent3->setTooltip (TRANS("Cent3 Up/Down"));
    Cent3->setRange (-100, 100, 1);
    Cent3->setSliderStyle (Slider::RotaryVerticalDrag);
    Cent3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Cent3->setBounds (435, 218, 66, 66);

    Attack1.reset (new Slider ("new slider"));
    addAndMakeVisible (Attack1.get());
    Attack1->setTooltip (TRANS("Attack 1"));
    Attack1->setRange (0, 15, 1);
    Attack1->setSliderStyle (Slider::RotaryVerticalDrag);
    Attack1->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Attack1->setBounds (30, 300, 66, 66);

    Attack2.reset (new Slider ("new slider"));
    addAndMakeVisible (Attack2.get());
    Attack2->setTooltip (TRANS("Attack 2"));
    Attack2->setRange (0, 15, 1);
    Attack2->setSliderStyle (Slider::RotaryVerticalDrag);
    Attack2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Attack2->setBounds (30, 365, 66, 66);

    Attack3.reset (new Slider ("new slider"));
    addAndMakeVisible (Attack3.get());
    Attack3->setTooltip (TRANS("Attack 3"));
    Attack3->setRange (0, 15, 1);
    Attack3->setSliderStyle (Slider::RotaryVerticalDrag);
    Attack3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Attack3->setBounds (30, 430, 66, 66);

    Decay1.reset (new Slider ("new slider"));
    addAndMakeVisible (Decay1.get());
    Decay1->setTooltip (TRANS("Decay 1"));
    Decay1->setRange (0, 15, 1);
    Decay1->setSliderStyle (Slider::RotaryVerticalDrag);
    Decay1->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Decay1->setBounds (90, 300, 66, 66);

    Decay2.reset (new Slider ("new slider"));
    addAndMakeVisible (Decay2.get());
    Decay2->setTooltip (TRANS("Decay 2"));
    Decay2->setRange (0, 15, 1);
    Decay2->setSliderStyle (Slider::RotaryVerticalDrag);
    Decay2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Decay2->setBounds (90, 365, 66, 66);

    Decay3.reset (new Slider ("new slider"));
    addAndMakeVisible (Decay3.get());
    Decay3->setTooltip (TRANS("Decay 3"));
    Decay3->setRange (0, 15, 1);
    Decay3->setSliderStyle (Slider::RotaryVerticalDrag);
    Decay3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Decay3->setBounds (90, 430, 66, 66);

    Sustain1.reset (new Slider ("new slider"));
    addAndMakeVisible (Sustain1.get());
    Sustain1->setTooltip (TRANS("Sustain 1"));
    Sustain1->setRange (0, 15, 1);
    Sustain1->setSliderStyle (Slider::RotaryVerticalDrag);
    Sustain1->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Sustain1->setBounds (150, 300, 66, 66);

    Sustain2.reset (new Slider ("new slider"));
    addAndMakeVisible (Sustain2.get());
    Sustain2->setTooltip (TRANS("Sustain 2"));
    Sustain2->setRange (0, 15, 1);
    Sustain2->setSliderStyle (Slider::RotaryVerticalDrag);
    Sustain2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Sustain2->setBounds (150, 365, 66, 66);

    Sustain3.reset (new Slider ("new slider"));
    addAndMakeVisible (Sustain3.get());
    Sustain3->setTooltip (TRANS("Sustain 3"));
    Sustain3->setRange (0, 15, 1);
    Sustain3->setSliderStyle (Slider::RotaryVerticalDrag);
    Sustain3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Sustain3->setBounds (150, 430, 66, 66);

    Release1.reset (new Slider ("new slider"));
    addAndMakeVisible (Release1.get());
    Release1->setTooltip (TRANS("Release 1"));
    Release1->setRange (0, 15, 1);
    Release1->setSliderStyle (Slider::RotaryVerticalDrag);
    Release1->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Release1->setBounds (210, 300, 66, 66);

    Release2.reset (new Slider ("new slider"));
    addAndMakeVisible (Release2.get());
    Release2->setTooltip (TRANS("Release 2"));
    Release2->setRange (0, 15, 1);
    Release2->setSliderStyle (Slider::RotaryVerticalDrag);
    Release2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Release2->setBounds (210, 365, 66, 66);

    Release3.reset (new Slider ("new slider"));
    addAndMakeVisible (Release3.get());
    Release3->setTooltip (TRANS("Release 3"));
    Release3->setRange (0, 15, 1);
    Release3->setSliderStyle (Slider::RotaryVerticalDrag);
    Release3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Release3->setBounds (210, 430, 66, 66);

    Pulsew1.reset (new Slider ("new slider"));
    addAndMakeVisible (Pulsew1.get());
    Pulsew1->setTooltip (TRANS("Pulswidth 1"));
    Pulsew1->setRange (1, 4094, 1);
    Pulsew1->setSliderStyle (Slider::RotaryVerticalDrag);
    Pulsew1->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 12);

    Pulsew1->setBounds (280, 300, 66, 66);

    Pulsew2.reset (new Slider ("new slider"));
    addAndMakeVisible (Pulsew2.get());
    Pulsew2->setTooltip (TRANS("Pulsewidth 2"));
    Pulsew2->setRange (1, 4094, 1);
    Pulsew2->setSliderStyle (Slider::RotaryVerticalDrag);
    Pulsew2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Pulsew2->setBounds (280, 365, 66, 66);

    Pulsew3.reset (new Slider ("new slider"));
    addAndMakeVisible (Pulsew3.get());
    Pulsew3->setTooltip (TRANS("Pulswidth 3"));
    Pulsew3->setRange (1, 4094, 1);
    Pulsew3->setSliderStyle (Slider::RotaryVerticalDrag);
    Pulsew3->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 12);

    Pulsew3->setBounds (280, 430, 66, 66);

    Velvol.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Velvol.get());
    Velvol->setTooltip (TRANS("maps Velocity to Volume"));
    Velvol->setButtonText (TRANS("Vel."));

    Velvol->setBounds (156, 130, 56, 32);

    legatomode.reset (new ComboBox ("legatomode"));
    addAndMakeVisible (legatomode.get());
    legatomode->setTooltip (TRANS("not implemented yet"));
    legatomode->setEditableText (false);
    legatomode->setJustificationType (Justification::centredLeft);
    legatomode->setTextWhenNothingSelected (String());
    legatomode->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    legatomode->addItem (TRANS("Retrigger"), 1);
    legatomode->addItem (TRANS("Legato"), 2);
    legatomode->addItem (TRANS("Last Step"), 3);
    legatomode->addListener (this);

    legatomode->setBounds (64, 191, 150, 24);

    noteprioritymode.reset (new ComboBox ("noteprioritymode"));
    addAndMakeVisible (noteprioritymode.get());
    noteprioritymode->setTooltip (TRANS("not implemented yet"));
    noteprioritymode->setEditableText (false);
    noteprioritymode->setJustificationType (Justification::centredLeft);
    noteprioritymode->setTextWhenNothingSelected (String());
    noteprioritymode->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    noteprioritymode->addItem (TRANS("Last Note"), 1);
    noteprioritymode->addItem (TRANS("High Note"), 2);
    noteprioritymode->addItem (TRANS("Low Note"), 3);
    noteprioritymode->addListener (this);

    noteprioritymode->setBounds (64, 241, 150, 24);

    hyperlinkButton.reset (new HyperlinkButton (TRANS("crazy-midi.de"),
                                                URL ("http://www.crazy-midi.de")));
    addAndMakeVisible (hyperlinkButton.get());
    hyperlinkButton->setTooltip (TRANS("http://www.crazy-midi.de"));
    hyperlinkButton->setButtonText (TRANS("crazy-midi.de"));
    hyperlinkButton->setColour (HyperlinkButton::textColourId, Colours::green);

    hyperlinkButton->setBounds (660, 500, 150, 24);

    Filter1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter1.get());
    Filter1->setTooltip (TRANS("Voice 1 to Filter"));
    Filter1->setButtonText (TRANS("1"));

    Filter1->setBounds (710, 109, 50, 30);

    Filter2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter2.get());
    Filter2->setTooltip (TRANS("Voice 2 to Filter"));
    Filter2->setButtonText (TRANS("2"));

    Filter2->setBounds (650, 109, 50, 30);

    Filter3off.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter3off.get());
    Filter3off->setTooltip (TRANS("Mute Voice 3"));
    Filter3off->setButtonText (TRANS("3off"));

    Filter3off->setBounds (530, 159, 50, 30);

    Filter3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter3.get());
    Filter3->setTooltip (TRANS("Voice 3 to Filter"));
    Filter3->setButtonText (TRANS("3"));

    Filter3->setBounds (590, 109, 50, 30);

    Filterin.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterin.get());
    Filterin->setTooltip (TRANS("extern In"));
    Filterin->setButtonText (TRANS("in"));

    Filterin->setBounds (530, 109, 50, 30);

    Filterlp.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterlp.get());
    Filterlp->setTooltip (TRANS("Low Pass"));
    Filterlp->setButtonText (TRANS("LP"));

    Filterlp->setBounds (710, 159, 50, 30);

    Filterhp.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterhp.get());
    Filterhp->setTooltip (TRANS("High Pass"));
    Filterhp->setButtonText (TRANS("HP"));

    Filterhp->setBounds (590, 159, 50, 30);

    Filterbp.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filterbp.get());
    Filterbp->setTooltip (TRANS("Band Pass"));
    Filterbp->setButtonText (TRANS("BP"));

    Filterbp->setBounds (650, 159, 50, 30);

    Filter8085.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Filter8085.get());
    Filter8085->setTooltip (TRANS("scales filterfreq. to 0-71"));
    Filter8085->setButtonText (TRANS("8085"));
    Filter8085->setToggleState (true, dontSendNotification);

    Filter8085->setBounds (532, 236, 90, 30);

    CutOff.reset (new Slider ("new slider"));
    addAndMakeVisible (CutOff.get());
    CutOff->setTooltip (TRANS("Cutoff"));
    CutOff->setRange (0, 2047, 1);
    CutOff->setSliderStyle (Slider::RotaryVerticalDrag);
    CutOff->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 12);

    CutOff->setBounds (632, 216, 66, 66);

    Resonace.reset (new Slider ("new slider"));
    addAndMakeVisible (Resonace.get());
    Resonace->setTooltip (TRANS("Resonance"));
    Resonace->setRange (0, 15, 1);
    Resonace->setSliderStyle (Slider::RotaryVerticalDrag);
    Resonace->setTextBoxStyle (Slider::TextBoxBelow, false, 40, 12);

    Resonace->setBounds (702, 216, 66, 66);

    Noise1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Noise1.get());
    Noise1->setButtonText (TRANS("Noise"));
    Noise1->setConnectedEdges (Button::ConnectedOnBottom);

    Noise1->setBounds (374, 319, 66, 30);

    Noise2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Noise2.get());
    Noise2->setButtonText (TRANS("Noise"));

    Noise2->setBounds (373, 389, 66, 30);

    Noise3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Noise3.get());
    Noise3->setButtonText (TRANS("Noise"));

    Noise3->setBounds (375, 459, 66, 30);

    Pulse1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Pulse1.get());
    Pulse1->setButtonText (TRANS("Pulse"));
    Pulse1->setConnectedEdges (Button::ConnectedOnBottom);

    Pulse1->setBounds (443, 319, 66, 30);

    Pulse2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Pulse2.get());
    Pulse2->setButtonText (TRANS("Pulse"));

    Pulse2->setBounds (443, 389, 66, 30);

    Pulse3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Pulse3.get());
    Pulse3->setButtonText (TRANS("Pulse"));

    Pulse3->setBounds (443, 459, 66, 30);

    Saw1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Saw1.get());
    Saw1->setButtonText (TRANS("Saw"));
    Saw1->setConnectedEdges (Button::ConnectedOnBottom);

    Saw1->setBounds (509, 319, 66, 30);

    Saw2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Saw2.get());
    Saw2->setButtonText (TRANS("Saw"));

    Saw2->setBounds (509, 389, 66, 30);

    Saw3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Saw3.get());
    Saw3->setButtonText (TRANS("Saw"));

    Saw3->setBounds (509, 459, 66, 30);

    Tria1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Tria1.get());
    Tria1->setButtonText (TRANS("Tria"));
    Tria1->setConnectedEdges (Button::ConnectedOnBottom);

    Tria1->setBounds (572, 319, 66, 30);

    Tria2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Tria2.get());
    Tria2->setButtonText (TRANS("Tria"));

    Tria2->setBounds (570, 390, 66, 30);

    Tria3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Tria3.get());
    Tria3->setButtonText (TRANS("Tria"));

    Tria3->setBounds (572, 459, 66, 30);

    Ringmod1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Ringmod1.get());
    Ringmod1->setButtonText (TRANS("Ringmod"));
    Ringmod1->setConnectedEdges (Button::ConnectedOnBottom);

    Ringmod1->setBounds (629, 319, 66, 30);

    Ringmod2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Ringmod2.get());
    Ringmod2->setButtonText (TRANS("Ringmod"));

    Ringmod2->setBounds (629, 389, 66, 30);

    Ringmod3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Ringmod3.get());
    Ringmod3->setButtonText (TRANS("Ringmod"));

    Ringmod3->setBounds (629, 459, 66, 30);

    Sync1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Sync1.get());
    Sync1->setButtonText (TRANS("Sync."));
    Sync1->setConnectedEdges (Button::ConnectedOnBottom);

    Sync1->setBounds (705, 319, 66, 30);

    Sync2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Sync2.get());
    Sync2->setButtonText (TRANS("Sync."));

    Sync2->setBounds (705, 389, 66, 30);

    Sync3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Sync3.get());
    Sync3->setButtonText (TRANS("Sync."));

    Sync3->setBounds (705, 459, 66, 30);

    Voice1.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Voice1.get());
    Voice1->setTooltip (TRANS("Voice 1 On/Off"));
    Voice1->setButtonText (TRANS("1"));
    Voice1->setToggleState (true, dontSendNotification);

    Voice1->setBounds (280, 110, 35, 35);

    Voice2.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Voice2.get());
    Voice2->setTooltip (TRANS("Voice 2 On/Off"));
    Voice2->setButtonText (TRANS("2"));
    Voice2->setToggleState (true, dontSendNotification);

    Voice2->setBounds (280, 170, 35, 35);

    Voice3.reset (new ToggleButton ("new toggle button"));
    addAndMakeVisible (Voice3.get());
    Voice3->setTooltip (TRANS("Voice 3 On/Off"));
    Voice3->setButtonText (TRANS("3"));
    Voice3->setToggleState (true, dontSendNotification);

    Voice3->setBounds (280, 230, 35, 35);

    Led.reset (new ImageButton ("new button"));
    addAndMakeVisible (Led.get());
    Led->setTooltip (TRANS("midi-activity and  blinks when error-status"));

    Led->setImages (false, true, true,
                    ImageCache::getFromMemory (ledredoffth_png, ledredoffth_pngSize), 1.000f, Colour (0x00000000),
                    ImageCache::getFromMemory (ledredoffth_png, ledredoffth_pngSize), 1.000f, Colour (0x00000000),
                    ImageCache::getFromMemory (redledonth_png, redledonth_pngSize), 1.000f, Colour (0x00000000));
    Led->setBounds (691, 16, 90, 40);

    cachedImage_aiassmonoHintergrund4_png_1 = ImageCache::getFromMemory (aiassmonoHintergrund4_png, aiassmonoHintergrund4_pngSize);
    cachedImage_commoFinal2_png_2 = ImageCache::getFromMemory (commoFinal2_png, commoFinal2_pngSize);

    //[UserPreSize]

	legatomode->setSelectedItemIndex(0);
	noteprioritymode->setSelectedItemIndex(0);
	legatomode->setEnabled(false);
	noteprioritymode->setEnabled(false);

	SidVolAttachment = new SliderAttachment (valueTreeState, "SidVol", *sidvolume);
	VelvolAttachment = new ButtonAttachment(valueTreeState, "VelVol", *Velvol);
	Attack1Attachment = new SliderAttachment(valueTreeState, "AttAck1", *Attack1);
	Attack2Attachment = new SliderAttachment(valueTreeState, "AttAck2", *Attack2);
	Attack3Attachment = new SliderAttachment(valueTreeState, "AttAck3", *Attack3);
	Decay1Attachment = new SliderAttachment(valueTreeState, "DeCay1", *Decay1);
	Decay2Attachment = new SliderAttachment(valueTreeState, "DeCay2", *Decay2);
	Decay3Attachment = new SliderAttachment(valueTreeState, "DeCay3", *Decay3);
	Sustain1Attachment = new SliderAttachment(valueTreeState, "SuStain1", *Sustain1);
	Sustain2Attachment = new SliderAttachment(valueTreeState, "SuStain2", *Sustain2);
	Sustain3Attachment = new SliderAttachment(valueTreeState, "SuStain3", *Sustain3);
	Release1Attachment = new SliderAttachment(valueTreeState, "ReLease1", *Release1);
	Release2Attachment = new SliderAttachment(valueTreeState, "ReLease2", *Release2);
	Release3Attachment = new SliderAttachment(valueTreeState, "ReLease3", *Release3);
	Pulsw1Attachment = new SliderAttachment(valueTreeState, "PulsW1", *Pulsew1);
	Pulsw2Attachment = new SliderAttachment(valueTreeState, "PulsW2", *Pulsew2);
	Pulsw3Attachment = new SliderAttachment(valueTreeState, "PulsW3", *Pulsew3);

	Voice1Attachment = new ButtonAttachment(valueTreeState, "VoiCe1", *Voice1);
	Voice2Attachment = new ButtonAttachment(valueTreeState, "VoiCe2", *Voice2);
	Voice3Attachment = new ButtonAttachment(valueTreeState, "VoiCe3", *Voice3);

	Octave1Attachment = new SliderAttachment(valueTreeState, "OcTave1", *Octave1);
	Octave2Attachment = new SliderAttachment(valueTreeState, "OcTave2", *Octave2);
	Octave3Attachment = new SliderAttachment(valueTreeState, "OcTave3", *Octave3);
	Semi1Attachment = new SliderAttachment(valueTreeState, "SeMi1", *Semi1);
	Semi2Attachment = new SliderAttachment(valueTreeState, "SeMi2", *Semi2);
	Semi3Attachment = new SliderAttachment(valueTreeState, "SeMi3", *Semi3);
	Cent1Attachment = new SliderAttachment(valueTreeState, "CenT1", *Cent1);
	Cent2Attachment = new SliderAttachment(valueTreeState, "CenT2", *Cent2);
	Cent3Attachment = new SliderAttachment(valueTreeState, "CenT3", *Cent3);

	Noise1Attachment = new ButtonAttachment(valueTreeState, "NoiSe1", *Noise1);
	Noise2Attachment = new ButtonAttachment(valueTreeState, "NoiSe2", *Noise2);
	Noise3Attachment = new ButtonAttachment(valueTreeState, "NoiSe3", *Noise3);

	Pulse1Attachment = new ButtonAttachment(valueTreeState, "PulSe1", *Pulse1);
	Pulse2Attachment = new ButtonAttachment(valueTreeState, "PulSe2", *Pulse2);
	Pulse3Attachment = new ButtonAttachment(valueTreeState, "PulSe3", *Pulse3);

	Saw1Attachment = new ButtonAttachment(valueTreeState, "SaW1", *Saw1);
	Saw2Attachment = new ButtonAttachment(valueTreeState, "SaW2", *Saw2);
	Saw3Attachment = new ButtonAttachment(valueTreeState, "SaW3", *Saw3);

	Tria1Attachment = new ButtonAttachment(valueTreeState, "TriA1", *Tria1);
	Tria2Attachment = new ButtonAttachment(valueTreeState, "TriA2", *Tria2);
	Tria3Attachment = new ButtonAttachment(valueTreeState, "TriA3", *Tria3);

	Ringmod1Attachment = new ButtonAttachment(valueTreeState, "RingMod1", *Ringmod1);
	Ringmod2Attachment = new ButtonAttachment(valueTreeState, "RingMod2", *Ringmod2);
	Ringmod3Attachment = new ButtonAttachment(valueTreeState, "RingMod3", *Ringmod3);

	Sync1Attachment = new ButtonAttachment(valueTreeState, "SynC1", *Sync1);
	Sync2Attachment = new ButtonAttachment(valueTreeState, "SynC2", *Sync2);
	Sync3Attachment = new ButtonAttachment(valueTreeState, "SynC3", *Sync3);

	FilterfreqAttachment = new SliderAttachment(valueTreeState, "FilterFreq", *CutOff);
	ResonanceAttachment = new SliderAttachment(valueTreeState, "ResoNance", *Resonace);
	Filter8085Attachment = new ButtonAttachment(valueTreeState, "FilTer8085", *Filter8085);

	Filter1Attachment = new ButtonAttachment(valueTreeState, "FilTer1", *Filter1);
	Filter2Attachment = new ButtonAttachment(valueTreeState, "FilTer2", *Filter2);
	Filter3Attachment = new ButtonAttachment(valueTreeState, "FilTer3", *Filter3);
	FilterinAttachment = new ButtonAttachment(valueTreeState, "FilTerIn", *Filterin);

	FilterLPAttachment = new ButtonAttachment(valueTreeState, "FilTerLP", *Filterlp);
	FilterBPAttachment = new ButtonAttachment(valueTreeState, "FilTerBP", *Filterbp);
	FilterHPAttachment = new ButtonAttachment(valueTreeState, "FilTerHP", *Filterhp);
	Filter3OFFAttachment = new ButtonAttachment(valueTreeState, "FilTer3OFF", *Filter3off);

	LegatoModeAttachment = new ComboBoxAttachment(valueTreeState, "LegatoMode", *legatomode);
	NotePrioritymodeAttachment = new ComboBoxAttachment(valueTreeState, "NotePrioritymode", *noteprioritymode);

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
	Filter8085Attachment = nullptr;
	Filter1Attachment = nullptr;
	Filter2Attachment = nullptr;
	Filter3Attachment = nullptr;
	FilterinAttachment = nullptr;
	FilterLPAttachment = nullptr;
	FilterBPAttachment = nullptr;
	FilterHPAttachment = nullptr;
	Filter3OFFAttachment = nullptr;
	LegatoModeAttachment = nullptr;
	NotePrioritymodeAttachment = nullptr;


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
    Filter8085 = nullptr;
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


    //[Destructor]. You can add your own custom destruction code here..



    //[/Destructor]
}

//==============================================================================
void AiassAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        int x = 0, y = 0, width = 800, height = 525;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImage (cachedImage_aiassmonoHintergrund4_png_1,
                     x, y, width, height,
                     0, 0, cachedImage_aiassmonoHintergrund4_png_1.getWidth(), cachedImage_aiassmonoHintergrund4_png_1.getHeight());
    }

    {
        int x = 26, y = 13, width = 307, height = 51;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImageWithin (cachedImage_commoFinal2_png_2,
                           x, y, width, height,
                           RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize,
                           false);
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

void AiassAudioProcessorEditor::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
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
  <BACKGROUND backgroundColour="ff323e44">
    <IMAGE pos="0 0 800 525" resource="aiassmonoHintergrund4_png" opacity="1.00000000000000000000"
           mode="0"/>
    <IMAGE pos="26 13 307 51" resource="commoFinal2_png" opacity="1.00000000000000000000"
           mode="2"/>
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
          virtualName="" explicitFocusOrder="0" pos="64 111 66 66" tooltip="SID-Volume"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="26c4155703d3dafe" memberName="Octave1"
          virtualName="" explicitFocusOrder="0" pos="315 90 66 66" tooltip="Octave1 Up/Down"
          min="-4.00000000000000000000" max="4.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="7808b9c1fb74ccc8" memberName="Octave2"
          virtualName="" explicitFocusOrder="0" pos="315 153 66 66" tooltip="Octave2 Up/Down"
          min="-4.00000000000000000000" max="4.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="d3e4a1e141ca77b6" memberName="Octave3"
          virtualName="" explicitFocusOrder="0" pos="315 218 66 66" tooltip="Octave3 Up/Down"
          min="-4.00000000000000000000" max="4.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="4297018af851022d" memberName="Semi1" virtualName=""
          explicitFocusOrder="0" pos="375 90 66 66" tooltip="Semitone1 Up/Down"
          min="-12.00000000000000000000" max="12.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="4e87cf183b0e0e77" memberName="Semi2" virtualName=""
          explicitFocusOrder="0" pos="375 153 66 66" tooltip="Semitone2 Up/Down"
          min="-12.00000000000000000000" max="12.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="f03b15fac2d0a403" memberName="Semi3" virtualName=""
          explicitFocusOrder="0" pos="375 218 66 66" tooltip="Semitone3 Up/Down"
          min="-12.00000000000000000000" max="12.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="b0bba6848acec451" memberName="Cent1" virtualName=""
          explicitFocusOrder="0" pos="435 90 66 66" tooltip="Cent1 Up/Down"
          min="-100.00000000000000000000" max="100.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="873ffcdb55231a19" memberName="Cent2" virtualName=""
          explicitFocusOrder="0" pos="435 153 66 66" tooltip="Cent2 Up/Down"
          min="-100.00000000000000000000" max="100.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="77eb6b6e2092a08c" memberName="Cent3" virtualName=""
          explicitFocusOrder="0" pos="435 218 66 66" tooltip="Cent3 Up/Down"
          min="-100.00000000000000000000" max="100.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="53619e38d7835c9d" memberName="Attack1"
          virtualName="" explicitFocusOrder="0" pos="30 300 66 66" tooltip="Attack 1"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="40a979315f74e3a" memberName="Attack2" virtualName=""
          explicitFocusOrder="0" pos="30 365 66 66" tooltip="Attack 2"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="7e38002dde33164c" memberName="Attack3"
          virtualName="" explicitFocusOrder="0" pos="30 430 66 66" tooltip="Attack 3"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="49642dbf385beee8" memberName="Decay1" virtualName=""
          explicitFocusOrder="0" pos="90 300 66 66" tooltip="Decay 1" min="0.00000000000000000000"
          max="15.00000000000000000000" int="1.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.00000000000000000000" needsCallback="0"/>
  <SLIDER name="new slider" id="379b886c43a29254" memberName="Decay2" virtualName=""
          explicitFocusOrder="0" pos="90 365 66 66" tooltip="Decay 2" min="0.00000000000000000000"
          max="15.00000000000000000000" int="1.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.00000000000000000000" needsCallback="0"/>
  <SLIDER name="new slider" id="ff55788389bcec83" memberName="Decay3" virtualName=""
          explicitFocusOrder="0" pos="90 430 66 66" tooltip="Decay 3" min="0.00000000000000000000"
          max="15.00000000000000000000" int="1.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="12" skewFactor="1.00000000000000000000" needsCallback="0"/>
  <SLIDER name="new slider" id="2793e34c7a6a6286" memberName="Sustain1"
          virtualName="" explicitFocusOrder="0" pos="150 300 66 66" tooltip="Sustain 1"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="25e905e8830bd418" memberName="Sustain2"
          virtualName="" explicitFocusOrder="0" pos="150 365 66 66" tooltip="Sustain 2"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="740735c3d8776e72" memberName="Sustain3"
          virtualName="" explicitFocusOrder="0" pos="150 430 66 66" tooltip="Sustain 3"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="26b01f2c9f0fcbd4" memberName="Release1"
          virtualName="" explicitFocusOrder="0" pos="210 300 66 66" tooltip="Release 1"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="cede2f433ff54882" memberName="Release2"
          virtualName="" explicitFocusOrder="0" pos="210 365 66 66" tooltip="Release 2"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="a6cb93496f682a4d" memberName="Release3"
          virtualName="" explicitFocusOrder="0" pos="210 430 66 66" tooltip="Release 3"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="a63bd08caa77c655" memberName="Pulsew1"
          virtualName="" explicitFocusOrder="0" pos="280 300 66 66" tooltip="Pulswidth 1"
          min="1.00000000000000000000" max="4094.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="c761eb76e90133c8" memberName="Pulsew2"
          virtualName="" explicitFocusOrder="0" pos="280 365 66 66" tooltip="Pulsewidth 2"
          min="1.00000000000000000000" max="4094.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="c9edf691a324176f" memberName="Pulsew3"
          virtualName="" explicitFocusOrder="0" pos="280 430 66 66" tooltip="Pulswidth 3"
          min="1.00000000000000000000" max="4094.00000000000000000000"
          int="1.00000000000000000000" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <TOGGLEBUTTON name="new toggle button" id="498d1ccffc218a3e" memberName="Velvol"
                virtualName="" explicitFocusOrder="0" pos="156 130 56 32" tooltip="maps Velocity to Volume"
                buttonText="Vel." connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <COMBOBOX name="legatomode" id="185cc42c904fe921" memberName="legatomode"
            virtualName="" explicitFocusOrder="0" pos="64 191 150 24" tooltip="not implemented yet"
            editable="0" layout="33" items="Retrigger&#10;Legato&#10;Last Step"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="noteprioritymode" id="c728000aa37b04a3" memberName="noteprioritymode"
            virtualName="" explicitFocusOrder="0" pos="64 241 150 24" tooltip="not implemented yet"
            editable="0" layout="33" items="Last Note&#10;High Note&#10;Low Note"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <HYPERLINKBUTTON name="new hyperlink" id="27b1f728dfa971d5" memberName="hyperlinkButton"
                   virtualName="" explicitFocusOrder="0" pos="660 500 150 24" tooltip="http://www.crazy-midi.de"
                   textCol="ff008000" buttonText="crazy-midi.de" connectedEdges="0"
                   needsCallback="0" radioGroupId="0" url="http://www.crazy-midi.de"/>
  <TOGGLEBUTTON name="new toggle button" id="f988e7a5126e5bac" memberName="Filter1"
                virtualName="" explicitFocusOrder="0" pos="710 109 50 30" tooltip="Voice 1 to Filter"
                buttonText="1" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="e8384ca904cc9cee" memberName="Filter2"
                virtualName="" explicitFocusOrder="0" pos="650 109 50 30" tooltip="Voice 2 to Filter"
                buttonText="2" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="46436fd7c74f713f" memberName="Filter3off"
                virtualName="" explicitFocusOrder="0" pos="530 159 50 30" tooltip="Mute Voice 3"
                buttonText="3off" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="15351388c9102c09" memberName="Filter3"
                virtualName="" explicitFocusOrder="0" pos="590 109 50 30" tooltip="Voice 3 to Filter"
                buttonText="3" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="1a8bcabfd8647671" memberName="Filterin"
                virtualName="" explicitFocusOrder="0" pos="530 109 50 30" tooltip="extern In"
                buttonText="in" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="fe8269d4b1a9c6e6" memberName="Filterlp"
                virtualName="" explicitFocusOrder="0" pos="710 159 50 30" tooltip="Low Pass"
                buttonText="LP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="17b0fa917ff0851e" memberName="Filterhp"
                virtualName="" explicitFocusOrder="0" pos="590 159 50 30" tooltip="High Pass"
                buttonText="HP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="2bd008bd14ea7c51" memberName="Filterbp"
                virtualName="" explicitFocusOrder="0" pos="650 159 50 30" tooltip="Band Pass"
                buttonText="BP" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="1f267441a830f9ff" memberName="Filter8085"
                virtualName="" explicitFocusOrder="0" pos="532 236 90 30" tooltip="scales filterfreq. to 0-71"
                buttonText="8085" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <SLIDER name="new slider" id="b104465dc77b15ae" memberName="CutOff" virtualName=""
          explicitFocusOrder="0" pos="632 216 66 66" tooltip="Cutoff" min="0.00000000000000000000"
          max="2047.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
          needsCallback="0"/>
  <SLIDER name="new slider" id="b18e0fc28c589ec5" memberName="Resonace"
          virtualName="" explicitFocusOrder="0" pos="702 216 66 66" tooltip="Resonance"
          min="0.00000000000000000000" max="15.00000000000000000000" int="1.00000000000000000000"
          style="RotaryVerticalDrag" textBoxPos="TextBoxBelow" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="12" skewFactor="1.00000000000000000000"
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
                virtualName="" explicitFocusOrder="0" pos="280 110 35 35" tooltip="Voice 1 On/Off"
                buttonText="1" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="3b39ff7f634b369" memberName="Voice2"
                virtualName="" explicitFocusOrder="0" pos="280 170 35 35" tooltip="Voice 2 On/Off"
                buttonText="2" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <TOGGLEBUTTON name="new toggle button" id="62c330b01d3c339c" memberName="Voice3"
                virtualName="" explicitFocusOrder="0" pos="280 230 35 35" tooltip="Voice 3 On/Off"
                buttonText="3" connectedEdges="0" needsCallback="0" radioGroupId="0"
                state="1"/>
  <IMAGEBUTTON name="new button" id="77dead3478e9a659" memberName="Led" virtualName=""
               explicitFocusOrder="0" pos="691 16 90 40" tooltip="midi-activity and  blinks when error-status"
               buttonText="new button" connectedEdges="0" needsCallback="0"
               radioGroupId="0" keepProportions="1" resourceNormal="ledredoffth_png"
               opacityNormal="1.00000000000000000000" colourNormal="0" resourceOver="ledredoffth_png"
               opacityOver="1.00000000000000000000" colourOver="0" resourceDown="redledonth_png"
               opacityDown="1.00000000000000000000" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: aiassmonoHintergrund4_png, 10141, "../../../../../Pictures/Bilder und Grafiken/Für Programmierprojekte/AIASS-Mono Hintergrund #4.png"
static const unsigned char resource_AiassAudioProcessorEditor_aiassmonoHintergrund4_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,10,222,0,0,1,223,8,6,0,0,0,221,227,62,34,0,0,10,55,105,67,
67,80,115,82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,0,0,120,156,157,150,119,84,83,217,22,135,207,189,55,189,80,146,16,138,148,208,107,104,82,2,72,13,189,72,145,46,42,49,9,16,74,192,144,0,34,54,68,
84,112,68,81,145,166,8,50,40,224,128,163,67,145,177,34,138,133,1,81,177,235,4,25,68,212,113,112,20,27,150,73,100,173,25,223,188,121,239,205,155,223,31,247,126,107,159,189,207,221,103,239,125,214,186,0,
144,252,131,5,194,76,88,9,128,12,161,88,20,225,231,197,136,141,139,103,96,7,1,12,240,0,3,108,0,224,112,179,179,66,22,248,70,2,153,2,124,216,140,108,153,19,248,23,189,186,14,32,249,251,42,211,63,140,193,
0,255,159,148,185,89,34,49,0,80,152,140,231,242,248,217,92,25,23,201,56,61,87,156,37,183,79,201,152,182,52,77,206,48,74,206,34,89,130,50,86,147,115,242,44,91,124,246,153,101,15,57,243,50,132,60,25,203,
115,206,226,101,240,228,220,39,227,141,57,18,190,140,145,96,25,23,231,8,248,185,50,190,38,99,131,116,73,134,64,198,111,228,177,25,124,78,54,0,40,146,220,46,230,115,83,100,108,45,99,146,40,50,130,45,227,
121,0,224,72,201,95,240,210,47,88,204,207,19,203,15,197,206,204,90,46,18,36,167,136,25,38,92,83,134,141,147,19,139,225,207,207,77,231,139,197,204,48,14,55,141,35,226,49,216,153,25,89,28,225,114,0,102,
207,252,89,20,121,109,25,178,34,59,216,56,57,56,48,109,45,109,190,40,212,127,93,252,155,146,247,118,150,94,132,127,238,25,68,31,248,195,246,87,126,153,13,0,176,166,101,181,217,250,135,109,105,21,0,93,
235,1,80,187,253,135,205,96,47,0,138,178,190,117,14,125,113,30,186,124,94,82,196,226,44,103,43,171,220,220,92,75,1,159,107,41,47,232,239,250,159,14,127,67,95,124,207,82,190,221,239,229,97,120,243,147,
56,146,116,49,67,94,55,110,102,122,166,68,196,200,206,226,112,249,12,230,159,135,248,31,7,254,117,30,22,17,252,36,190,136,47,148,69,68,203,166,76,32,76,150,181,91,200,19,136,5,153,66,134,64,248,159,154,
248,15,195,254,164,217,185,150,137,218,248,17,208,150,88,2,165,33,26,64,126,30,0,40,42,17,32,9,123,100,43,208,239,125,11,198,71,3,249,205,139,209,153,152,157,251,207,130,254,125,87,184,76,254,200,22,36,
127,142,99,71,68,50,184,18,81,206,236,154,252,90,2,52,32,0,69,64,3,234,64,27,232,3,19,192,4,182,192,17,184,0,15,224,3,2,65,40,136,4,113,96,49,224,130,20,144,1,68,32,23,20,128,181,160,24,148,130,173,96,
39,168,6,117,160,17,52,131,54,112,24,116,129,99,224,52,56,7,46,129,203,96,4,220,1,82,48,14,158,128,41,240,10,204,64,16,132,133,200,16,21,82,135,116,32,67,200,28,178,133,88,144,27,228,3,5,67,17,80,28,148,
8,37,67,66,72,2,21,64,235,160,82,168,28,170,134,234,161,102,232,91,232,40,116,26,186,0,13,67,183,160,81,104,18,250,21,122,7,35,48,9,166,193,90,176,17,108,5,179,96,79,56,8,142,132,23,193,201,240,50,56,
31,46,130,183,192,149,112,3,124,16,238,132,79,195,151,224,17,88,10,63,129,167,17,128,16,17,58,162,139,48,17,22,194,70,66,145,120,36,9,17,33,171,144,18,164,2,105,64,218,144,30,164,31,185,138,72,145,167,
200,91,20,6,69,69,49,80,76,148,11,202,31,21,133,226,162,150,161,86,161,54,163,170,81,7,80,157,168,62,212,85,212,40,106,10,245,17,77,70,107,162,205,209,206,232,0,116,44,58,25,157,139,46,70,87,160,155,208,
29,232,179,232,17,244,56,250,21,6,131,161,99,140,49,142,24,127,76,28,38,21,179,2,179,25,179,27,211,142,57,133,25,198,140,97,166,177,88,172,58,214,28,235,138,13,197,114,176,98,108,49,182,10,123,16,123,
18,123,5,59,142,125,131,35,226,116,112,182,56,95,92,60,78,136,43,196,85,224,90,112,39,112,87,112,19,184,25,188,18,222,16,239,140,15,197,243,240,203,241,101,248,70,124,15,126,8,63,142,159,33,40,19,140,
9,174,132,72,66,42,97,45,161,146,208,70,56,75,184,75,120,65,36,18,245,136,78,196,112,162,128,184,134,88,73,60,68,60,79,28,37,190,37,81,72,102,36,54,41,129,36,33,109,33,237,39,157,34,221,34,189,32,147,
201,70,100,15,114,60,89,76,222,66,110,38,159,33,223,39,191,81,160,42,88,42,4,40,240,20,86,43,212,40,116,42,92,81,120,166,136,87,52,84,244,84,92,172,152,175,88,161,120,68,113,72,241,169,18,94,201,72,137,
173,196,81,90,165,84,163,116,84,233,134,210,180,50,85,217,70,57,84,57,67,121,179,114,139,242,5,229,71,20,44,197,136,226,67,225,81,138,40,251,40,103,40,99,84,132,170,79,101,83,185,212,117,212,70,234,89,
234,56,13,67,51,166,5,208,82,105,165,180,111,104,131,180,41,21,138,138,157,74,180,74,158,74,141,202,113,21,41,29,161,27,209,3,232,233,244,50,250,97,250,117,250,59,85,45,85,79,85,190,234,38,213,54,213,
43,170,175,213,230,168,121,168,241,213,74,212,218,213,70,212,222,169,51,212,125,212,211,212,183,169,119,169,223,211,64,105,152,105,132,107,228,106,236,209,56,171,241,116,14,109,142,203,28,238,156,146,
57,135,231,220,214,132,53,205,52,35,52,87,104,238,211,28,208,156,214,210,214,242,211,202,210,170,210,58,163,245,84,155,174,237,161,157,170,189,67,251,132,246,164,14,85,199,77,71,160,179,67,231,164,206,
99,134,10,195,147,145,206,168,100,244,49,166,116,53,117,253,117,37,186,245,186,131,186,51,122,198,122,81,122,133,122,237,122,247,244,9,250,44,253,36,253,29,250,189,250,83,6,58,6,33,6,5,6,173,6,183,13,
241,134,44,195,20,195,93,134,253,134,175,141,140,141,98,140,54,24,117,25,61,50,86,51,14,48,206,55,110,53,190,107,66,54,113,55,89,102,210,96,114,205,20,99,202,50,77,51,221,109,122,217,12,54,179,55,75,49,
171,49,27,50,135,205,29,204,5,230,187,205,135,45,208,22,78,22,66,139,6,139,27,76,18,211,147,153,195,108,101,142,90,210,45,131,45,11,45,187,44,159,89,25,88,197,91,109,179,234,183,250,104,109,111,157,110,
221,104,125,199,134,98,19,104,83,104,211,99,243,171,173,153,45,215,182,198,246,218,92,242,92,223,185,171,231,118,207,125,110,103,110,199,183,219,99,119,211,158,106,31,98,191,193,190,215,254,131,131,163,
131,200,161,205,97,210,209,192,49,209,177,214,241,6,139,198,10,99,109,102,157,119,66,59,121,57,173,118,58,230,244,214,217,193,89,236,124,216,249,23,23,166,75,154,75,139,203,163,121,198,243,248,243,26,
231,141,185,234,185,114,92,235,93,165,110,12,183,68,183,189,110,82,119,93,119,142,123,131,251,3,15,125,15,158,71,147,199,132,167,169,103,170,231,65,207,103,94,214,94,34,175,14,175,215,108,103,246,74,246,
41,111,196,219,207,187,196,123,208,135,226,19,229,83,237,115,223,87,207,55,217,183,213,119,202,207,222,111,133,223,41,127,180,127,144,255,54,255,27,1,90,1,220,128,230,128,169,64,199,192,149,129,125,65,
164,160,5,65,213,65,15,130,205,130,69,193,61,33,112,72,96,200,246,144,187,243,13,231,11,231,119,133,130,208,128,208,237,161,247,194,140,195,150,133,125,31,142,9,15,11,175,9,127,24,97,19,81,16,209,191,
128,186,96,201,130,150,5,175,34,189,34,203,34,239,68,153,68,73,162,122,163,21,163,19,162,155,163,95,199,120,199,148,199,72,99,173,98,87,198,94,138,211,136,19,196,117,199,99,227,163,227,155,226,167,23,
250,44,220,185,112,60,193,62,161,56,225,250,34,227,69,121,139,46,44,214,88,156,190,248,248,18,197,37,156,37,71,18,209,137,49,137,45,137,239,57,161,156,6,206,244,210,128,165,181,75,167,184,108,238,46,238,
19,158,7,111,7,111,146,239,202,47,231,79,36,185,38,149,39,61,74,118,77,222,158,60,153,226,158,82,145,242,84,192,22,84,11,158,167,250,167,214,165,190,78,11,77,219,159,246,41,61,38,189,61,3,151,145,152,
113,84,72,17,166,9,251,50,181,51,243,50,135,179,204,179,138,179,164,203,156,151,237,92,54,37,10,18,53,101,67,217,139,178,187,197,52,217,207,212,128,196,68,178,94,50,154,227,150,83,147,243,38,55,58,247,
72,158,114,158,48,111,96,185,217,242,77,203,39,242,125,243,191,94,129,90,193,93,209,91,160,91,176,182,96,116,165,231,202,250,85,208,170,165,171,122,87,235,175,46,90,61,190,198,111,205,129,181,132,181,
105,107,127,40,180,46,44,47,124,185,46,102,93,79,145,86,209,154,162,177,245,126,235,91,139,21,138,69,197,55,54,184,108,168,219,136,218,40,216,56,184,105,238,166,170,77,31,75,120,37,23,75,173,75,43,74,
223,111,230,110,190,248,149,205,87,149,95,125,218,146,180,101,176,204,161,108,207,86,204,86,225,214,235,219,220,183,29,40,87,46,207,47,31,219,30,178,189,115,7,99,71,201,142,151,59,151,236,188,80,97,87,
81,183,139,176,75,178,75,90,25,92,217,93,101,80,181,181,234,125,117,74,245,72,141,87,77,123,173,102,237,166,218,215,187,121,187,175,236,241,216,211,86,167,85,87,90,247,110,175,96,239,205,122,191,250,206,
6,163,134,138,125,152,125,57,251,30,54,70,55,246,127,205,250,186,185,73,163,169,180,233,195,126,225,126,233,129,136,3,125,205,142,205,205,45,154,45,101,173,112,171,164,117,242,96,194,193,203,223,120,127,
211,221,198,108,171,111,167,183,151,30,2,135,36,135,30,127,155,248,237,245,195,65,135,123,143,176,142,180,125,103,248,93,109,7,181,163,164,19,234,92,222,57,213,149,210,37,237,142,235,30,62,26,120,180,
183,199,165,167,227,123,203,239,247,31,211,61,86,115,92,229,120,217,9,194,137,162,19,159,78,230,159,156,62,149,117,234,233,233,228,211,99,189,75,122,239,156,137,61,115,173,47,188,111,240,108,208,217,243,
231,124,207,157,233,247,236,63,121,222,245,252,177,11,206,23,142,94,100,93,236,186,228,112,169,115,192,126,160,227,7,251,31,58,6,29,6,59,135,28,135,186,47,59,93,238,25,158,55,124,226,138,251,149,211,87,
189,175,158,187,22,112,237,210,200,252,145,225,235,81,215,111,222,72,184,33,189,201,187,249,232,86,250,173,231,183,115,110,207,220,89,115,23,125,183,228,158,210,189,138,251,154,247,27,126,52,253,177,93,
234,32,61,62,234,61,58,240,96,193,131,59,99,220,177,39,63,101,255,244,126,188,232,33,249,97,197,132,206,68,243,35,219,71,199,38,125,39,47,63,94,248,120,252,73,214,147,153,167,197,63,43,255,92,251,204,
228,217,119,191,120,252,50,48,21,59,53,254,92,244,252,211,175,155,95,168,191,216,255,210,238,101,239,116,216,244,253,87,25,175,102,94,151,188,81,127,115,224,45,235,109,255,187,152,119,19,51,185,239,177,
239,43,63,152,126,232,249,24,244,241,238,167,140,79,159,126,3,247,132,243,251,143,112,102,42,0,0,0,9,112,72,89,115,0,0,46,35,0,0,46,35,1,120,165,63,118,0,0,29,12,73,68,65,84,120,156,236,220,79,139,100,
87,29,199,225,115,235,239,116,117,166,103,18,48,154,81,36,146,69,24,4,195,128,32,184,112,229,42,203,108,92,187,240,37,136,217,7,242,2,4,113,37,162,46,220,132,232,194,133,171,65,49,11,81,144,144,77,200,
206,197,192,104,16,99,79,146,153,116,117,213,185,86,21,204,37,152,244,244,247,246,84,51,101,247,243,204,173,250,117,247,156,115,234,188,128,15,53,106,154,102,124,243,230,139,63,42,0,0,0,0,0,0,0,0,0,0,
192,9,234,159,70,55,110,220,24,55,165,121,109,56,28,148,253,189,201,147,190,17,0,0,0,0,0,0,0,0,0,0,236,148,123,31,125,82,74,59,124,109,244,240,15,95,254,210,245,242,253,239,125,187,28,92,157,149,131,167,
174,60,201,187,1,0,0,0,0,0,0,0,0,0,192,206,248,193,15,127,185,153,163,79,255,241,240,195,7,221,207,226,91,0,0,0,0,0,0,0,0,0,0,46,179,249,241,162,28,205,23,221,239,163,255,93,32,190,5,0,0,0,0,0,0,0,0,0,
224,178,123,24,221,206,31,21,222,174,137,111,1,0,0,0,0,0,0,0,0,0,184,172,62,47,186,93,251,220,240,118,77,124,11,0,0,0,0,0,0,0,0,0,192,101,115,82,116,187,118,98,120,187,38,190,5,0,0,0,0,0,0,0,0,0,224,178,
120,84,116,187,246,200,240,118,77,124,11,0,0,0,0,0,0,0,0,0,192,69,119,90,116,187,118,106,120,187,38,190,5,0,0,0,0,0,0,0,0,0,224,162,74,162,219,181,46,188,109,219,82,106,109,79,92,248,193,225,253,205,255,
175,95,226,91,0,0,0,0,0,0,0,0,0,0,46,130,52,186,93,235,194,219,187,255,252,79,249,241,207,110,159,235,197,0,0,0,0,0,0,0,0,0,0,224,255,213,232,244,37,0,0,0,0,0,0,0,0,0,0,64,23,222,62,125,125,86,190,249,
210,243,241,198,217,222,164,236,93,153,148,217,149,241,121,220,11,0,0,0,0,0,0,0,0,0,0,206,197,98,89,203,241,98,89,22,139,26,173,255,245,111,255,178,153,93,120,187,142,104,95,124,225,139,189,62,244,218,
213,189,114,112,117,86,14,158,186,210,107,31,0,0,0,0,0,0,0,0,0,0,60,9,243,227,69,57,154,47,202,124,245,74,125,38,188,61,139,195,15,31,116,63,139,111,1,0,0,0,0,0,0,0,0,0,216,101,103,137,110,63,237,177,
194,219,181,227,69,45,159,28,205,203,96,208,60,238,81,0,0,0,0,0,0,0,0,0,0,112,110,106,173,101,89,219,51,239,127,236,240,22,0,0,0,0,0,0,0,0,0,0,46,3,225,45,0,0,0,0,0,0,0,0,0,0,4,186,240,246,95,255,254,
168,188,241,187,191,245,62,96,48,104,202,112,56,40,195,193,96,171,23,3,0,0,0,0,0,0,0,0,0,128,109,106,215,255,218,245,15,237,153,246,119,225,237,124,190,40,119,238,126,176,173,123,1,0,0,0,0,0,0,0,0,0,192,
133,210,133,183,179,217,164,124,245,198,51,253,15,24,13,87,175,65,25,13,135,91,189,24,0,0,0,0,0,0,0,0,0,0,108,211,195,111,188,109,123,126,227,237,95,223,254,251,102,118,225,237,245,131,89,249,238,119,
110,246,190,192,108,111,90,246,103,147,205,4,0,0,0,0,0,0,0,0,0,128,93,85,107,45,203,218,150,186,172,189,246,125,38,188,5,0,0,0,0,0,0,0,0,0,0,78,38,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,
0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,208,133,183,31,223,63,42,239,188,123,167,247,1,147,241,184,76,39,195,213,212,240,2,0,0,0,0,0,0,0,0,0,176,187,106,219,150,213,83,218,90,
207,180,191,171,101,15,239,61,40,183,223,122,111,107,23,3,0,0,0,0,0,0,0,0,0,128,139,164,11,111,155,65,83,198,205,176,255,9,205,230,89,189,53,219,187,21,0,0,0,0,0,0,0,0,0,0,156,151,182,223,242,249,241,
98,51,187,240,246,185,103,175,149,87,94,190,213,251,115,103,123,211,178,63,155,108,38,0,0,0,0,0,0,0,0,0,0,236,170,90,107,89,214,182,212,101,237,181,239,213,215,223,220,204,209,41,235,0,0,0,0,0,0,0,0,0,
0,128,34,188,5,0,0,0,0,0,0,0,0,0,128,136,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,64,23,222,222,125,255,176,252,228,231,127,
232,127,66,179,121,86,111,205,214,46,5,0,0,0,0,0,0,0,0,0,0,231,166,61,219,182,46,188,109,107,91,22,203,186,173,235,0,0,0,0,0,0,0,0,0,0,192,133,210,133,183,215,14,246,202,75,95,255,74,239,3,38,227,113,
153,78,134,171,57,58,125,49,0,0,0,0,0,0,0,0,0,0,60,33,181,109,203,234,41,109,237,247,101,181,191,249,253,219,155,217,213,178,251,179,105,249,198,205,254,225,237,108,111,186,218,59,217,76,0,0,0,0,0,0,0,
0,0,0,216,85,181,214,178,172,109,169,203,199,12,111,1,0,0,0,0,0,0,0,0,0,128,147,9,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,
8,116,225,237,199,247,143,202,59,239,222,233,125,192,100,60,46,211,201,112,53,53,188,0,0,0,0,0,0,0,0,0,0,236,174,218,182,101,245,148,182,214,51,237,239,106,217,195,123,15,202,237,183,222,219,218,197,0,
0,0,0,0,0,0,0,0,0,224,34,233,194,219,102,208,148,113,51,236,127,66,179,121,86,111,205,246,110,5,0,0,0,0,0,0,0,0,0,0,231,165,237,183,124,126,188,216,204,46,188,125,238,217,107,229,149,151,111,245,254,220,
217,222,180,236,207,38,155,9,0,0,0,0,0,0,0,0,0,0,187,170,214,90,150,181,45,117,89,123,237,123,245,245,55,55,115,116,202,58,0,0,0,0,0,0,0,0,0,0,160,8,111,1,0,0,0,0,0,0,0,0,0,32,34,188,5,0,0,0,0,0,0,0,0,
0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,116,225,109,173,109,57,154,47,122,31,48,24,12,202,112,216,148,166,25,108,245,98,0,0,0,0,0,0,0,0,0,0,176,77,181,214,77,51,91,151,245,
76,251,187,240,246,31,239,31,150,159,254,226,143,91,187,24,0,0,0,0,0,0,0,0,0,0,92,36,163,211,151,0,0,0,0,0,0,0,0,0,0,0,93,120,251,204,211,251,229,91,183,190,214,251,128,233,100,92,166,211,209,234,53,222,
234,197,0,0,0,0,0,0,0,0,0,0,96,155,218,90,75,109,75,169,171,217,199,175,222,248,243,102,118,225,237,149,233,184,188,240,252,23,122,95,96,182,55,45,251,179,201,102,2,0,0,0,0,0,0,0,0,0,192,174,90,7,183,
203,218,150,186,236,23,222,62,52,58,125,9,0,0,0,0,0,0,0,0,0,0,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,
0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,
111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,
0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,
0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,
0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,
0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,
32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,
0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,
240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,
0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,
0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,
128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,
0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,
2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,
0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,
1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,
0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,
0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,
8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,
0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,
5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,
0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,
0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,
32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,
0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,
240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,
0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,
0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,
128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,
0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,
2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,
0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,
1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,
0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,
0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,
8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,
0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,
5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,
0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,
0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,
32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,
0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,
240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,
0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,0,0,32,32,188,5,0,0,0,0,0,0,0,0,0,128,128,240,22,0,0,0,0,0,0,0,0,0,0,2,194,91,
0,0,0,0,0,0,0,0,0,0,8,8,111,1,0,0,0,0,0,0,0,128,255,182,107,119,41,109,69,97,24,70,79,193,155,22,52,29,126,110,59,21,111,157,69,193,80,16,164,45,69,52,10,149,32,134,20,171,62,57,105,201,223,90,176,97,
223,124,240,14,224,1,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,
128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,
0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,
111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,
0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,
0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,
129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,
0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,
2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,
0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,
0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,
225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,
0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,
0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,
16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,194,91,0,0,0,0,0,0,0,0,0,0,8,132,183,0,0,0,0,0,
0,0,0,0,0,16,8,111,1,0,0,0,0,0,0,0,0,0,32,16,222,2,0,0,0,0,0,0,0,0,0,64,32,188,5,0,0,0,0,0,0,0,0,0,128,64,120,11,0,0,0,0,0,0,0,0,0,0,129,240,22,0,0,0,0,0,0,0,0,0,0,2,225,45,0,0,0,0,0,0,0,0,0,0,4,27,135,
183,215,63,126,13,223,174,30,134,219,187,251,127,177,7,0,0,0,0,0,0,0,0,0,0,254,139,207,103,159,134,201,233,226,125,28,117,191,81,120,123,59,191,31,230,115,209,45,0,0,0,0,0,0,0,0,0,0,187,239,251,207,155,
229,127,76,124,59,58,188,21,221,2,0,0,0,0,0,0,0,0,0,176,111,54,137,111,71,133,183,162,91,0,0,0,0,0,0,0,0,0,0,246,213,216,248,118,237,240,86,116,11,0,0,0,0,0,0,0,0,0,192,190,27,19,223,174,21,222,138,110,
1,0,0,0,0,0,0,0,0,0,56,20,235,198,183,57,188,21,221,2,0,0,0,0,0,0,0,0,0,112,104,214,137,111,83,120,43,186,5,0,0,0,0,0,0,0,0,0,224,80,213,248,246,221,240,86,116,11,0,0,0,0,0,0,0,0,0,192,161,43,241,237,
155,225,173,232,22,0,0,0,0,0,0,0,0,0,128,99,241,94,124,251,106,120,43,186,5,0,0,0,0,0,0,0,0,0,224,216,188,21,223,254,53,188,21,221,2,0,0,0,0,0,0,0,0,0,112,172,94,139,111,95,132,183,162,91,0,0,0,0,0,0,
0,0,0,0,142,221,106,124,251,236,143,240,86,116,11,0,0,0,0,0,0,0,0,0,0,79,22,241,237,106,128,187,12,111,191,94,94,15,211,47,231,91,25,5,0,0,0,0,0,0,0,0,0,0,187,238,100,54,155,61,76,38,167,211,109,15,1,
0,0,0,0,0,0,0,0,0,128,93,245,123,248,112,241,8,52,189,20,77,54,157,160,26,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::aiassmonoHintergrund4_png = (const char*) resource_AiassAudioProcessorEditor_aiassmonoHintergrund4_png;
const int AiassAudioProcessorEditor::aiassmonoHintergrund4_pngSize = 10141;

// JUCER_RESOURCE: commoFinal3_png, 6792, "../../../../../Pictures/Bilder und Grafiken/Für Programmierprojekte/commo final3.png"
static const unsigned char resource_AiassAudioProcessorEditor_commoFinal3_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,179,0,0,0,21,8,6,0,0,0,13,81,223,0,0,0,10,55,105,67,67,80,115,82,
71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,0,0,120,156,157,150,119,84,83,217,22,135,207,189,55,189,80,146,16,138,148,208,107,104,82,2,72,13,189,72,145,46,42,49,9,16,74,192,144,0,34,54,68,84,112,68,81,
145,166,8,50,40,224,128,163,67,145,177,34,138,133,1,81,177,235,4,25,68,212,113,112,20,27,150,73,100,173,25,223,188,121,239,205,155,223,31,247,126,107,159,189,207,221,103,239,125,214,186,0,144,252,131,
5,194,76,88,9,128,12,161,88,20,225,231,197,136,141,139,103,96,7,1,12,240,0,3,108,0,224,112,179,179,66,22,248,70,2,153,2,124,216,140,108,153,19,248,23,189,186,14,32,249,251,42,211,63,140,193,0,255,159,
148,185,89,34,49,0,80,152,140,231,242,248,217,92,25,23,201,56,61,87,156,37,183,79,201,152,182,52,77,206,48,74,206,34,89,130,50,86,147,115,242,44,91,124,246,153,101,15,57,243,50,132,60,25,203,115,206,226,
101,240,228,220,39,227,141,57,18,190,140,145,96,25,23,231,8,248,185,50,190,38,99,131,116,73,134,64,198,111,228,177,25,124,78,54,0,40,146,220,46,230,115,83,100,108,45,99,146,40,50,130,45,227,121,0,224,
72,201,95,240,210,47,88,204,207,19,203,15,197,206,204,90,46,18,36,167,136,25,38,92,83,134,141,147,19,139,225,207,207,77,231,139,197,204,48,14,55,141,35,226,49,216,153,25,89,28,225,114,0,102,207,252,89,
20,121,109,25,178,34,59,216,56,57,56,48,109,45,109,190,40,212,127,93,252,155,146,247,118,150,94,132,127,238,25,68,31,248,195,246,87,126,153,13,0,176,166,101,181,217,250,135,109,105,21,0,93,235,1,80,187,
253,135,205,96,47,0,138,178,190,117,14,125,113,30,186,124,94,82,196,226,44,103,43,171,220,220,92,75,1,159,107,41,47,232,239,250,159,14,127,67,95,124,207,82,190,221,239,229,97,120,243,147,56,146,116,49,
67,94,55,110,102,122,166,68,196,200,206,226,112,249,12,230,159,135,248,31,7,254,117,30,22,17,252,36,190,136,47,148,69,68,203,166,76,32,76,150,181,91,200,19,136,5,153,66,134,64,248,159,154,248,15,195,254,
164,217,185,150,137,218,248,17,208,150,88,2,165,33,26,64,126,30,0,40,42,17,32,9,123,100,43,208,239,125,11,198,71,3,249,205,139,209,153,152,157,251,207,130,254,125,87,184,76,254,200,22,36,127,142,99,71,
68,50,184,18,81,206,236,154,252,90,2,52,32,0,69,64,3,234,64,27,232,3,19,192,4,182,192,17,184,0,15,224,3,2,65,40,136,4,113,96,49,224,130,20,144,1,68,32,23,20,128,181,160,24,148,130,173,96,39,168,6,117,
160,17,52,131,54,112,24,116,129,99,224,52,56,7,46,129,203,96,4,220,1,82,48,14,158,128,41,240,10,204,64,16,132,133,200,16,21,82,135,116,32,67,200,28,178,133,88,144,27,228,3,5,67,17,80,28,148,8,37,67,66,
72,2,21,64,235,160,82,168,28,170,134,234,161,102,232,91,232,40,116,26,186,0,13,67,183,160,81,104,18,250,21,122,7,35,48,9,166,193,90,176,17,108,5,179,96,79,56,8,142,132,23,193,201,240,50,56,31,46,130,183,
192,149,112,3,124,16,238,132,79,195,151,224,17,88,10,63,129,167,17,128,16,17,58,162,139,48,17,22,194,70,66,145,120,36,9,17,33,171,144,18,164,2,105,64,218,144,30,164,31,185,138,72,145,167,200,91,20,6,69,
69,49,80,76,148,11,202,31,21,133,226,162,150,161,86,161,54,163,170,81,7,80,157,168,62,212,85,212,40,106,10,245,17,77,70,107,162,205,209,206,232,0,116,44,58,25,157,139,46,70,87,160,155,208,29,232,179,232,
17,244,56,250,21,6,131,161,99,140,49,142,24,127,76,28,38,21,179,2,179,25,179,27,211,142,57,133,25,198,140,97,166,177,88,172,58,214,28,235,138,13,197,114,176,98,108,49,182,10,123,16,123,18,123,5,59,142,
125,131,35,226,116,112,182,56,95,92,60,78,136,43,196,85,224,90,112,39,112,87,112,19,184,25,188,18,222,16,239,140,15,197,243,240,203,241,101,248,70,124,15,126,8,63,142,159,33,40,19,140,9,174,132,72,66,
42,97,45,161,146,208,70,56,75,184,75,120,65,36,18,245,136,78,196,112,162,128,184,134,88,73,60,68,60,79,28,37,190,37,81,72,102,36,54,41,129,36,33,109,33,237,39,157,34,221,34,189,32,147,201,70,100,15,114,
60,89,76,222,66,110,38,159,33,223,39,191,81,160,42,88,42,4,40,240,20,86,43,212,40,116,42,92,81,120,166,136,87,52,84,244,84,92,172,152,175,88,161,120,68,113,72,241,169,18,94,201,72,137,173,196,81,90,165,
84,163,116,84,233,134,210,180,50,85,217,70,57,84,57,67,121,179,114,139,242,5,229,71,20,44,197,136,226,67,225,81,138,40,251,40,103,40,99,84,132,170,79,101,83,185,212,117,212,70,234,89,234,56,13,67,51,166,
5,208,82,105,165,180,111,104,131,180,41,21,138,138,157,74,180,74,158,74,141,202,113,21,41,29,161,27,209,3,232,233,244,50,250,97,250,117,250,59,85,45,85,79,85,190,234,38,213,54,213,43,170,175,213,230,168,
121,168,241,213,74,212,218,213,70,212,222,169,51,212,125,212,211,212,183,169,119,169,223,211,64,105,152,105,132,107,228,106,236,209,56,171,241,116,14,109,142,203,28,238,156,146,57,135,231,220,214,132,
53,205,52,35,52,87,104,238,211,28,208,156,214,210,214,242,211,202,210,170,210,58,163,245,84,155,174,237,161,157,170,189,67,251,132,246,164,14,85,199,77,71,160,179,67,231,164,206,99,134,10,195,147,145,
206,168,100,244,49,166,116,53,117,253,117,37,186,245,186,131,186,51,122,198,122,81,122,133,122,237,122,247,244,9,250,44,253,36,253,29,250,189,250,83,6,58,6,33,6,5,6,173,6,183,13,241,134,44,195,20,195,
93,134,253,134,175,141,140,141,98,140,54,24,117,25,61,50,86,51,14,48,206,55,110,53,190,107,66,54,113,55,89,102,210,96,114,205,20,99,202,50,77,51,221,109,122,217,12,54,179,55,75,49,171,49,27,50,135,205,
29,204,5,230,187,205,135,45,208,22,78,22,66,139,6,139,27,76,18,211,147,153,195,108,101,142,90,210,45,131,45,11,45,187,44,159,89,25,88,197,91,109,179,234,183,250,104,109,111,157,110,221,104,125,199,134,
98,19,104,83,104,211,99,243,171,173,153,45,215,182,198,246,218,92,242,92,223,185,171,231,118,207,125,110,103,110,199,183,219,99,119,211,158,106,31,98,191,193,190,215,254,131,131,163,131,200,161,205,97,
210,209,192,49,209,177,214,241,6,139,198,10,99,109,102,157,119,66,59,121,57,173,118,58,230,244,214,217,193,89,236,124,216,249,23,23,166,75,154,75,139,203,163,121,198,243,248,243,26,231,141,185,234,185,
114,92,235,93,165,110,12,183,68,183,189,110,82,119,93,119,142,123,131,251,3,15,125,15,158,71,147,199,132,167,169,103,170,231,65,207,103,94,214,94,34,175,14,175,215,108,103,246,74,246,41,111,196,219,207,
187,196,123,208,135,226,19,229,83,237,115,223,87,207,55,217,183,213,119,202,207,222,111,133,223,41,127,180,127,144,255,54,255,27,1,90,1,220,128,230,128,169,64,199,192,149,129,125,65,164,160,5,65,213,65,
15,130,205,130,69,193,61,33,112,72,96,200,246,144,187,243,13,231,11,231,119,133,130,208,128,208,237,161,247,194,140,195,150,133,125,31,142,9,15,11,175,9,127,24,97,19,81,16,209,191,128,186,96,201,130,150,
5,175,34,189,34,203,34,239,68,153,68,73,162,122,163,21,163,19,162,155,163,95,199,120,199,148,199,72,99,173,98,87,198,94,138,211,136,19,196,117,199,99,227,163,227,155,226,167,23,250,44,220,185,112,60,193,
62,161,56,225,250,34,227,69,121,139,46,44,214,88,156,190,248,248,18,197,37,156,37,71,18,209,137,49,137,45,137,239,57,161,156,6,206,244,210,128,165,181,75,167,184,108,238,46,238,19,158,7,111,7,111,146,
239,202,47,231,79,36,185,38,149,39,61,74,118,77,222,158,60,153,226,158,82,145,242,84,192,22,84,11,158,167,250,167,214,165,190,78,11,77,219,159,246,41,61,38,189,61,3,151,145,152,113,84,72,17,166,9,251,
50,181,51,243,50,135,179,204,179,138,179,164,203,156,151,237,92,54,37,10,18,53,101,67,217,139,178,187,197,52,217,207,212,128,196,68,178,94,50,154,227,150,83,147,243,38,55,58,247,72,158,114,158,48,111,
96,185,217,242,77,203,39,242,125,243,191,94,129,90,193,93,209,91,160,91,176,182,96,116,165,231,202,250,85,208,170,165,171,122,87,235,175,46,90,61,190,198,111,205,129,181,132,181,105,107,127,40,180,46,
44,47,124,185,46,102,93,79,145,86,209,154,162,177,245,126,235,91,139,21,138,69,197,55,54,184,108,168,219,136,218,40,216,56,184,105,238,166,170,77,31,75,120,37,23,75,173,75,43,74,223,111,230,110,190,248,
149,205,87,149,95,125,218,146,180,101,176,204,161,108,207,86,204,86,225,214,235,219,220,183,29,40,87,46,207,47,31,219,30,178,189,115,7,99,71,201,142,151,59,151,236,188,80,97,87,81,183,139,176,75,178,75,
90,25,92,217,93,101,80,181,181,234,125,117,74,245,72,141,87,77,123,173,102,237,166,218,215,187,121,187,175,236,241,216,211,86,167,85,87,90,247,110,175,96,239,205,122,191,250,206,6,163,134,138,125,152,
125,57,251,30,54,70,55,246,127,205,250,186,185,73,163,169,180,233,195,126,225,126,233,129,136,3,125,205,142,205,205,45,154,45,101,173,112,171,164,117,242,96,194,193,203,223,120,127,211,221,198,108,171,
111,167,183,151,30,2,135,36,135,30,127,155,248,237,245,195,65,135,123,143,176,142,180,125,103,248,93,109,7,181,163,164,19,234,92,222,57,213,149,210,37,237,142,235,30,62,26,120,180,183,199,165,167,227,
123,203,239,247,31,211,61,86,115,92,229,120,217,9,194,137,162,19,159,78,230,159,156,62,149,117,234,233,233,228,211,99,189,75,122,239,156,137,61,115,173,47,188,111,240,108,208,217,243,231,124,207,157,233,
247,236,63,121,222,245,252,177,11,206,23,142,94,100,93,236,186,228,112,169,115,192,126,160,227,7,251,31,58,6,29,6,59,135,28,135,186,47,59,93,238,25,158,55,124,226,138,251,149,211,87,189,175,158,187,22,
112,237,210,200,252,145,225,235,81,215,111,222,72,184,33,189,201,187,249,232,86,250,173,231,183,115,110,207,220,89,115,23,125,183,228,158,210,189,138,251,154,247,27,126,52,253,177,93,234,32,61,62,234,
61,58,240,96,193,131,59,99,220,177,39,63,101,255,244,126,188,232,33,249,97,197,132,206,68,243,35,219,71,199,38,125,39,47,63,94,248,120,252,73,214,147,153,167,197,63,43,255,92,251,204,228,217,119,191,120,
252,50,48,21,59,53,254,92,244,252,211,175,155,95,168,191,216,255,210,238,101,239,116,216,244,253,87,25,175,102,94,151,188,81,127,115,224,45,235,109,255,187,152,119,19,51,185,239,177,239,43,63,152,126,
232,249,24,244,241,238,167,140,79,159,126,3,247,132,243,251,143,112,102,42,0,0,0,9,112,72,89,115,0,0,46,35,0,0,46,35,1,120,165,63,118,0,0,15,247,73,68,65,84,120,156,237,91,9,124,13,215,23,62,51,243,178,
11,17,33,41,161,214,162,69,44,65,236,138,42,154,216,53,164,74,75,251,215,70,233,98,169,150,162,155,22,85,109,169,238,213,218,35,182,144,162,170,177,212,26,34,34,165,74,169,37,36,132,132,236,219,123,243,
63,223,77,230,121,203,36,146,54,109,181,63,223,207,243,230,205,220,185,115,231,206,57,223,249,206,185,19,131,170,170,84,28,130,131,101,69,150,251,212,83,84,169,150,36,75,30,220,212,32,73,188,101,50,201,
170,44,155,36,19,21,168,178,202,223,18,255,80,229,98,59,42,5,100,85,50,161,47,189,99,60,70,147,170,202,186,199,238,100,72,146,73,198,124,253,211,227,248,55,129,159,181,196,51,167,88,218,25,63,254,28,50,
73,9,215,110,230,29,223,186,117,107,102,113,231,26,244,118,14,27,214,183,137,131,36,189,236,164,4,5,241,207,74,36,21,238,151,138,190,73,150,11,119,241,99,146,176,37,227,159,164,215,85,233,33,21,245,165,
119,72,18,7,255,133,184,107,199,101,133,36,89,60,232,34,59,19,124,160,16,85,243,116,138,27,49,172,239,98,149,76,135,151,174,140,220,107,123,174,149,49,131,137,157,148,192,153,108,200,83,108,143,217,66,
81,20,2,169,155,76,198,242,185,139,187,184,139,219,195,143,45,123,130,68,242,28,89,150,247,155,24,150,7,205,6,27,28,220,212,145,13,121,61,251,65,159,226,122,170,93,167,30,61,212,243,17,106,212,184,9,41,
6,133,20,89,161,220,188,92,138,143,139,165,31,182,69,210,229,75,9,127,229,141,220,197,93,0,53,217,70,23,12,31,26,52,96,120,80,208,224,101,155,54,165,106,7,204,198,236,36,215,157,199,95,186,134,12,22,14,
25,62,154,234,55,104,72,155,34,214,208,183,139,63,35,15,15,15,42,40,40,160,188,188,60,106,27,208,145,38,190,60,131,246,236,222,65,235,215,174,164,146,116,184,184,168,193,129,170,84,241,18,219,25,25,233,
148,153,153,97,215,198,201,201,137,175,225,41,182,175,95,79,22,215,178,69,213,170,222,28,137,100,49,134,212,212,235,37,94,179,154,183,15,213,169,83,159,28,185,223,244,180,155,116,250,212,73,221,235,106,
227,187,175,97,99,242,228,49,26,249,186,137,137,151,232,252,185,179,197,222,87,205,244,76,114,52,222,217,146,30,225,250,130,187,27,229,41,255,25,233,211,77,174,32,127,31,28,220,161,75,88,216,222,108,236,
16,198,60,34,36,168,189,42,73,85,245,52,43,52,204,216,241,147,40,41,241,50,189,62,125,18,105,204,14,227,77,73,73,161,119,223,158,70,63,110,223,66,251,247,237,166,49,161,47,210,19,163,158,165,197,95,45,
42,113,20,93,30,124,136,70,62,57,70,108,199,28,62,72,31,190,63,203,174,77,211,102,45,105,252,139,83,196,246,171,47,143,163,132,139,23,172,142,123,123,223,67,115,231,127,42,182,179,50,51,105,92,232,72,
202,207,207,183,235,199,197,213,149,198,60,251,2,181,108,213,214,106,63,218,110,221,188,129,214,172,94,110,101,164,104,55,234,233,177,84,177,98,37,171,246,151,47,93,164,69,11,231,209,133,243,191,219,93,
163,199,133,36,170,148,103,127,237,59,13,107,26,212,162,132,10,174,255,244,48,202,15,18,181,118,148,189,102,243,214,120,252,44,100,102,85,110,42,73,170,183,94,251,158,15,7,82,218,205,27,244,219,233,95,
233,165,73,175,209,218,240,229,116,241,194,121,250,242,243,133,204,136,185,228,232,232,72,190,190,247,210,8,54,206,53,171,151,210,192,193,143,81,235,182,237,233,208,193,125,197,142,161,99,167,174,230,
237,230,45,252,133,225,164,49,91,150,5,29,44,250,112,117,115,163,86,254,1,116,96,255,79,118,237,70,61,53,214,108,200,55,110,164,48,43,167,145,207,61,213,201,193,193,145,130,250,13,161,155,124,111,219,
182,70,138,227,247,84,247,165,113,47,76,230,72,100,32,163,209,40,24,217,217,217,153,188,188,170,81,245,26,53,105,18,59,240,228,9,161,148,157,157,101,117,141,112,54,18,195,109,162,145,45,68,98,83,170,83,
212,82,182,227,150,146,214,179,245,62,237,244,116,7,7,221,243,48,119,192,241,159,227,168,178,103,21,106,209,178,53,71,194,124,138,62,176,151,231,44,149,220,221,43,82,27,142,190,46,46,46,162,205,239,103,
127,179,235,195,203,171,42,249,53,247,39,247,138,21,57,146,94,163,163,177,135,196,92,107,64,164,109,210,180,133,216,142,61,18,205,243,233,43,218,131,28,143,196,68,211,149,164,203,118,125,130,176,154,249,
181,36,183,10,21,40,57,249,42,29,61,114,200,46,154,50,215,134,14,27,22,184,112,229,202,200,83,194,152,57,66,30,87,20,169,171,109,103,142,142,78,244,96,143,94,52,115,218,4,234,216,185,27,37,95,189,34,152,
9,225,250,212,175,39,68,155,7,154,52,163,177,227,38,51,3,186,136,172,19,172,60,238,133,151,233,112,244,126,221,176,236,237,83,157,234,213,111,104,254,13,9,211,190,99,87,102,201,8,221,137,214,3,162,5,206,
177,68,167,46,221,237,140,217,213,213,141,218,176,99,1,27,214,133,153,37,80,165,74,30,52,227,205,185,194,72,225,172,154,49,119,236,244,160,48,228,244,244,52,122,237,213,23,41,133,31,10,240,112,239,190,
244,216,227,163,169,146,71,101,225,168,187,119,110,183,186,78,125,23,137,220,202,185,218,162,146,102,132,229,215,113,60,231,234,25,58,142,241,252,75,175,136,239,109,91,55,81,247,135,250,136,103,2,244,
31,56,148,37,229,167,52,242,137,103,168,130,187,187,185,253,215,95,126,76,59,163,182,153,127,247,31,24,44,218,66,242,105,200,201,201,166,175,152,240,14,30,216,35,126,123,84,174,98,190,206,234,85,75,104,
72,240,112,210,170,150,143,14,29,65,239,207,125,147,226,143,197,22,222,49,63,223,224,97,35,169,247,35,253,173,170,27,136,192,159,124,60,143,226,142,198,88,14,95,113,32,25,97,126,130,48,102,30,123,160,
229,81,60,180,238,108,196,169,169,41,194,27,114,114,114,40,54,230,16,121,86,246,98,239,116,21,201,159,6,39,39,103,250,116,209,124,234,209,179,15,157,61,123,154,50,51,50,232,38,123,51,188,189,110,189,6,
180,113,67,184,240,236,228,228,43,162,189,198,202,55,5,219,159,20,237,58,177,163,148,197,152,235,55,104,68,213,170,249,136,237,40,150,56,221,122,244,102,175,247,35,79,102,149,148,148,91,218,217,205,173,
130,121,194,174,241,245,53,231,194,181,215,175,93,69,126,126,173,40,155,39,29,19,134,99,24,39,144,155,155,35,116,181,134,237,219,190,19,26,58,159,181,57,38,212,22,13,101,35,121,149,162,12,46,209,95,83,
97,44,109,159,103,140,10,101,148,208,186,7,39,247,91,190,219,32,216,111,208,144,16,170,80,193,157,137,106,18,157,56,30,79,135,162,247,209,195,189,2,57,170,213,160,190,253,135,152,141,185,125,135,46,28,
141,67,196,246,201,95,142,211,175,39,143,115,36,108,67,53,107,213,166,103,198,190,68,87,175,38,217,49,249,128,65,195,40,114,227,90,190,78,166,112,4,103,103,23,209,167,102,204,120,158,125,2,7,136,237,159,
227,143,210,217,51,167,201,191,77,59,170,206,145,19,210,115,250,171,47,209,37,150,125,183,38,64,130,253,78,40,74,0,85,127,109,74,96,200,126,205,91,178,87,12,160,184,216,195,180,111,239,78,122,114,116,
168,8,47,81,63,110,161,42,28,78,18,47,95,22,33,25,78,243,115,124,28,179,237,61,180,106,197,98,10,104,215,89,132,19,220,20,140,11,131,58,255,251,25,58,89,196,226,133,140,250,160,216,70,8,251,229,68,188,
48,102,220,56,42,37,231,184,109,105,0,6,5,146,56,52,133,175,94,38,52,56,24,181,3,239,71,130,170,1,225,46,35,61,93,176,202,232,255,61,71,77,57,100,65,254,196,199,199,210,79,187,126,20,31,75,156,59,87,120,
125,48,246,236,121,139,56,161,141,18,154,30,209,104,193,7,179,139,29,79,88,190,83,169,198,125,167,99,231,142,109,20,182,242,91,177,125,255,3,205,248,25,54,23,134,253,254,220,55,68,146,173,170,38,145,19,
97,126,52,2,128,17,2,48,186,185,239,206,20,251,54,69,132,211,155,179,62,96,27,169,65,253,6,60,74,31,204,179,206,137,34,214,135,9,146,3,60,216,222,122,245,233,39,108,8,64,191,65,253,6,137,109,68,247,5,
31,206,22,125,194,248,223,153,179,64,216,95,96,223,65,244,217,39,31,88,118,217,160,87,175,94,110,69,198,44,249,106,123,97,140,199,142,30,161,31,124,34,169,106,53,111,14,185,233,204,74,247,139,138,66,244,
193,189,116,237,90,178,144,10,87,146,18,201,201,217,73,220,224,197,11,231,196,185,3,7,133,8,253,26,203,108,14,3,130,151,199,197,197,8,102,7,192,110,85,171,86,19,219,144,4,231,126,255,141,178,178,50,133,
28,232,212,185,123,169,140,25,149,6,84,79,128,131,220,7,34,1,194,14,116,49,164,6,110,90,99,96,212,192,225,100,79,141,25,47,24,26,231,225,3,61,12,71,194,248,52,54,0,96,188,221,217,1,225,92,120,96,8,157,
248,64,107,163,82,179,133,19,70,75,29,168,97,104,247,100,242,170,116,251,4,16,195,42,163,180,190,45,76,170,84,234,62,35,246,84,161,164,20,199,98,143,159,179,96,80,77,155,34,63,130,33,3,150,247,110,48,
24,200,153,53,52,114,9,0,196,160,205,59,218,239,223,183,75,48,118,163,70,77,236,174,131,252,75,131,22,73,241,92,1,68,92,79,207,194,74,215,238,93,219,205,125,66,182,192,254,32,61,26,54,126,192,182,75,201,
203,221,193,91,43,205,153,235,94,87,175,36,137,111,232,26,232,22,84,3,94,153,252,156,213,153,105,105,55,168,214,189,181,69,98,152,154,157,109,222,191,240,163,57,226,27,6,128,234,199,247,91,54,90,157,215,
161,136,149,193,152,144,24,24,40,188,175,115,215,30,212,174,125,103,90,185,252,107,221,18,156,37,144,156,192,97,128,3,251,11,245,216,254,189,187,133,49,251,176,147,161,124,136,178,155,134,221,60,201,25,
108,240,3,7,15,227,49,215,17,251,160,9,193,58,248,224,62,225,0,0,30,194,172,183,166,210,32,126,8,200,17,16,254,0,148,8,193,6,237,59,118,161,55,166,79,182,146,50,64,118,174,76,25,217,10,149,39,56,33,39,
169,156,53,137,233,54,70,159,155,155,123,171,109,81,213,10,70,100,187,79,131,179,147,139,121,219,54,49,3,201,136,54,46,46,100,11,203,62,145,104,90,194,137,19,110,13,25,25,54,125,22,93,67,123,46,150,200,
151,101,85,147,25,231,121,250,236,204,29,90,167,62,39,107,199,152,249,96,0,8,1,96,87,116,154,112,241,188,48,70,45,89,208,110,20,223,13,216,160,54,70,132,91,245,229,192,153,116,155,128,14,133,253,178,6,
170,87,239,62,177,125,249,114,225,66,11,152,188,69,203,54,66,155,149,4,45,241,131,158,119,225,155,194,248,80,9,1,219,98,44,96,120,75,99,6,142,196,28,20,31,84,49,144,65,183,242,111,43,22,126,128,193,143,
14,167,125,123,118,154,13,20,15,97,201,55,159,179,99,45,22,161,214,175,133,63,181,110,211,94,36,141,96,140,65,67,30,163,47,62,251,200,170,127,48,222,127,1,122,9,123,73,107,6,200,61,16,153,17,245,16,173,
41,238,136,249,152,38,27,174,23,37,209,150,176,117,10,75,220,224,231,170,193,135,251,0,233,221,234,179,186,248,78,177,239,211,148,156,156,158,168,25,243,94,189,149,191,99,44,17,160,137,54,110,88,45,24,
17,225,23,210,195,129,67,2,140,16,55,170,101,155,216,254,245,228,9,81,241,240,102,163,177,53,168,230,96,84,215,66,70,133,152,199,199,22,144,9,37,25,51,18,146,230,45,90,137,237,202,149,61,105,250,27,115,
236,218,4,180,235,68,203,150,124,41,202,134,96,226,186,117,235,147,129,29,105,251,182,205,34,90,36,37,110,20,17,3,137,11,18,20,100,224,144,81,209,172,165,81,249,64,206,128,36,6,146,7,242,5,159,85,108,
216,83,103,188,35,170,56,141,238,111,106,119,205,180,135,242,201,232,81,206,250,161,156,187,3,220,119,56,144,225,122,249,209,61,230,24,249,81,99,158,19,232,222,152,67,251,5,41,212,172,121,175,120,150,
0,246,149,5,32,38,44,80,221,91,187,174,136,134,199,216,65,176,15,197,132,128,118,133,242,242,240,161,3,182,167,253,28,21,21,149,83,88,154,203,151,215,41,14,244,182,109,11,104,221,125,123,119,177,65,63,
74,27,214,173,18,90,184,153,95,43,214,185,25,102,221,163,25,180,230,193,47,78,156,70,27,214,174,178,243,62,45,105,43,9,168,41,34,33,64,109,83,15,109,217,80,145,232,149,4,132,53,255,214,1,98,220,232,15,
101,31,140,45,46,54,198,92,81,1,48,97,26,160,255,192,48,79,62,21,42,170,53,88,0,250,100,225,60,243,113,200,143,196,75,9,194,152,209,214,238,154,39,21,50,185,168,101,43,87,232,25,107,113,6,92,92,159,165,
189,150,169,240,35,23,251,190,217,31,7,100,218,212,233,239,136,92,8,139,88,87,88,166,162,234,0,146,64,109,56,130,137,176,172,64,84,156,252,202,235,66,143,207,251,240,115,186,150,156,204,219,53,68,4,192,
226,21,22,187,172,161,174,195,255,226,201,44,15,143,56,249,120,72,191,45,60,55,189,109,59,70,201,236,133,9,83,169,91,143,94,130,221,16,174,245,128,16,63,242,201,103,132,142,222,243,211,14,171,99,40,164,
195,9,0,232,83,172,186,89,162,54,123,225,204,183,222,19,19,0,25,177,57,114,189,238,53,180,178,30,12,113,198,180,137,86,199,112,238,252,143,190,16,204,10,13,14,99,134,243,193,152,225,108,161,227,39,210,
87,159,47,224,201,184,68,222,222,62,98,145,71,195,25,150,61,48,248,216,152,104,113,125,176,59,36,214,174,29,63,136,36,210,159,101,70,155,162,164,243,236,153,83,118,227,202,78,241,161,2,165,248,196,234,
143,64,2,73,148,51,61,27,242,147,73,166,242,93,169,60,243,219,41,154,245,230,84,122,124,228,211,84,135,163,160,175,111,173,34,242,56,76,95,127,185,200,172,157,203,130,19,199,143,209,156,119,102,136,218,
62,212,64,13,223,154,130,28,193,242,223,124,253,137,185,160,192,224,206,213,29,185,70,163,88,114,54,211,140,41,63,127,138,226,224,128,216,96,245,84,208,201,71,243,223,165,145,163,158,17,172,27,177,46,
76,212,147,53,200,178,66,205,154,183,164,254,3,130,69,133,32,60,108,169,221,224,2,2,58,153,181,53,88,207,246,77,59,244,7,143,131,39,118,230,240,164,103,204,208,187,218,98,139,94,31,248,141,253,8,119,8,
123,88,145,186,148,112,65,24,36,74,119,208,232,179,102,47,176,235,23,231,36,22,233,118,212,158,53,57,20,50,124,148,248,88,2,201,105,196,122,123,166,217,217,98,52,101,184,120,218,237,191,211,208,61,230,
51,242,73,177,95,189,27,17,210,207,110,31,34,147,101,116,2,98,14,31,208,109,11,93,59,99,218,4,150,126,85,68,238,3,77,107,155,16,98,133,79,239,92,16,36,62,182,128,65,79,157,242,188,120,63,6,235,5,215,175,
37,139,202,151,5,240,150,59,235,68,74,11,11,251,46,25,59,204,198,188,60,124,243,177,225,33,253,66,101,162,47,200,38,128,33,227,4,171,53,184,175,49,245,14,236,207,158,82,139,178,185,99,132,124,87,87,87,
58,205,146,3,171,66,122,239,45,0,29,138,36,6,116,182,86,198,179,5,216,28,44,10,131,134,62,178,235,195,98,197,47,186,104,85,73,175,15,24,51,152,24,213,8,172,250,193,147,33,91,122,246,10,20,18,66,3,22,70,
118,68,109,163,112,14,147,26,174,92,73,20,44,51,226,137,49,34,209,181,4,198,189,108,201,23,186,229,195,78,199,150,82,190,82,88,107,22,108,106,147,52,73,98,73,250,143,189,136,164,114,104,85,75,163,39,36,
169,228,118,124,200,235,198,133,226,143,151,3,240,178,215,237,94,248,42,43,224,24,58,9,159,209,68,166,80,73,82,175,230,25,55,71,106,59,173,4,224,178,21,17,95,141,24,26,148,197,116,59,135,159,199,105,158,
159,174,100,97,216,167,79,253,34,62,0,202,35,70,99,129,238,203,61,182,152,249,218,196,219,182,129,252,208,74,100,0,86,125,44,61,57,225,226,10,90,27,190,162,196,62,224,76,182,222,143,42,7,222,39,129,230,
71,17,31,94,158,149,149,37,216,88,175,12,136,62,222,122,125,138,144,70,120,43,15,17,5,154,173,164,135,228,153,118,247,213,215,191,11,42,169,209,170,145,198,101,23,228,159,75,77,205,75,139,138,186,21,162,
237,178,153,37,171,54,173,124,124,240,35,63,73,142,134,161,124,230,10,252,201,18,147,67,29,85,149,240,26,153,34,33,149,96,154,201,201,206,42,192,223,5,253,173,119,242,39,0,163,182,125,243,174,36,96,129,
64,111,129,228,46,254,22,40,108,123,14,170,164,114,102,14,27,83,211,152,82,19,152,143,119,47,13,139,140,47,238,36,221,210,192,210,53,223,129,106,222,235,214,173,155,193,199,199,217,87,201,147,10,140,142,
38,201,104,116,20,44,173,40,5,127,250,175,164,202,27,70,163,131,201,209,88,240,175,113,174,59,13,70,199,2,19,63,223,191,125,254,20,37,79,86,242,12,114,158,98,144,21,37,95,150,243,21,206,229,11,196,11,
53,48,177,2,69,42,48,228,81,238,146,53,155,19,111,215,215,255,1,174,57,47,36,102,100,206,80,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::commoFinal3_png = (const char*) resource_AiassAudioProcessorEditor_commoFinal3_png;
const int AiassAudioProcessorEditor::commoFinal3_pngSize = 6792;

// JUCER_RESOURCE: redledonth_png, 8265, "../../../../../Pictures/Bilder und Grafiken/Für Programmierprojekte/red-ledon-th.png"
static const unsigned char resource_AiassAudioProcessorEditor_redledonth_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,100,0,0,0,100,8,6,0,0,0,112,226,149,84,0,0,0,6,98,75,71,68,0,255,
0,255,0,255,160,189,167,147,0,0,0,9,112,72,89,115,0,0,21,44,0,0,21,44,1,140,49,106,181,0,0,0,9,118,112,65,103,0,0,0,100,0,0,0,100,0,135,38,94,230,0,0,31,77,73,68,65,84,120,218,237,157,121,140,28,215,157,
223,191,191,87,175,142,62,166,57,51,156,131,55,77,138,34,41,138,58,124,73,43,202,66,188,146,69,201,135,44,83,244,149,13,144,21,16,32,127,36,88,108,144,4,8,146,32,249,35,72,254,8,22,14,2,9,144,86,48,162,
149,45,89,145,100,235,182,44,139,182,156,85,44,81,150,20,202,162,238,139,20,207,225,244,12,231,236,179,170,222,251,253,242,71,117,115,122,168,153,238,158,97,207,144,218,221,7,60,188,26,178,186,234,213,
239,83,191,227,189,122,7,225,2,75,249,124,30,111,191,253,54,0,40,34,202,1,24,4,176,14,192,70,0,107,106,127,247,2,200,2,72,3,208,0,156,218,207,45,0,3,160,12,160,8,96,28,64,30,192,16,128,163,0,78,0,200,
139,200,52,0,222,185,115,39,6,7,7,207,247,35,207,74,116,190,43,0,0,207,63,255,60,0,64,68,178,68,180,30,192,14,0,219,1,108,6,48,0,32,3,192,3,160,106,63,145,179,202,249,158,171,94,50,128,8,64,9,192,8,128,
195,0,222,7,240,174,136,28,39,162,34,0,220,112,195,13,231,91,20,231,15,200,111,127,251,91,92,115,205,53,216,191,127,127,22,192,86,34,186,10,192,23,0,108,0,208,133,68,248,210,144,59,245,188,245,204,0,10,
0,142,1,120,93,68,94,5,240,225,174,93,187,138,47,191,252,50,190,246,181,175,157,23,185,44,59,144,125,251,246,1,137,176,215,3,184,22,192,117,0,182,16,81,166,65,80,157,2,208,206,243,43,0,34,34,37,0,31,3,
248,61,128,151,0,28,7,192,187,119,239,94,86,249,44,27,144,231,158,123,14,72,236,253,118,0,55,33,129,49,88,19,200,114,66,104,38,139,122,93,242,72,160,60,135,196,180,153,155,110,186,105,217,42,177,164,233,
217,103,159,5,18,167,187,157,136,190,141,68,35,122,112,97,64,104,38,23,5,96,2,192,239,69,228,41,36,96,236,215,191,254,245,37,191,241,146,164,103,159,125,22,68,4,102,94,15,224,54,34,186,17,192,74,92,216,
32,230,146,143,2,48,38,34,191,1,240,152,82,234,184,136,96,169,192,116,28,200,51,207,60,83,63,204,0,216,13,224,7,68,180,1,157,117,206,203,157,8,0,137,200,49,0,15,3,216,135,36,98,195,55,191,249,205,142,
223,168,99,233,233,167,159,134,136,64,41,181,13,192,237,0,118,1,112,145,104,197,185,85,148,8,152,1,74,34,210,88,54,158,39,77,206,63,215,164,0,196,0,246,3,184,143,153,63,32,34,220,114,203,45,29,147,97,
199,128,60,245,212,83,0,224,19,209,110,0,127,14,96,45,146,134,218,98,147,32,17,36,49,179,99,173,213,113,28,107,99,140,107,173,213,214,90,199,90,171,152,153,68,164,46,112,33,34,38,34,118,28,199,104,173,
141,235,186,198,243,188,216,117,93,227,56,14,215,128,157,43,32,7,192,73,0,63,17,145,125,0,194,111,127,251,219,29,145,227,57,3,121,242,201,39,235,135,189,0,110,39,162,91,0,248,88,156,86,8,0,98,102,39,142,
99,47,138,162,84,28,199,65,28,199,158,181,86,51,51,177,8,177,8,68,128,164,156,201,44,2,48,215,254,102,64,4,16,17,165,148,213,90,27,207,243,194,116,58,93,77,167,211,213,32,8,34,165,20,159,131,12,20,128,
80,68,158,6,112,31,146,94,1,220,122,235,173,231,15,200,227,143,63,94,55,13,155,0,252,5,128,171,27,4,219,126,37,136,132,153,29,99,76,16,69,81,38,138,162,180,49,198,101,17,197,82,139,2,152,161,108,12,29,
135,228,70,101,242,194,50,185,81,149,28,19,146,98,75,194,2,75,74,98,199,149,208,241,164,234,6,82,117,124,9,29,87,12,17,88,0,176,5,37,38,213,6,65,80,205,102,179,229,92,46,87,74,165,82,17,17,137,136,44,
84,30,245,243,95,1,112,39,128,79,68,4,123,246,236,89,126,32,143,61,246,24,28,199,1,51,95,1,224,95,1,216,134,69,104,5,51,235,56,142,51,81,20,117,25,99,2,102,81,12,64,68,160,227,42,101,11,167,85,247,196,
73,189,114,252,132,211,61,53,172,179,165,113,21,132,37,229,70,33,105,27,19,49,131,106,230,71,64,96,82,176,74,75,228,248,82,241,210,60,149,238,230,177,108,159,201,231,86,217,145,174,126,51,153,234,230,
170,227,138,8,131,152,225,56,142,201,102,179,229,158,158,158,233,92,46,87,113,28,135,23,1,70,1,248,0,192,255,84,74,29,180,214,226,182,219,110,91,62,32,143,62,250,40,180,214,48,198,92,77,68,255,6,73,231,
223,130,96,48,179,54,198,116,69,81,148,179,214,250,9,4,192,141,202,212,51,118,220,89,51,244,174,183,106,248,35,183,123,234,148,14,170,69,229,88,51,91,239,36,1,80,63,110,44,73,228,83,255,102,149,131,178,
151,225,211,217,126,115,116,229,134,248,112,223,230,104,56,55,96,203,142,39,96,134,34,112,38,147,169,244,245,245,77,118,119,119,151,29,199,145,5,250,25,5,224,132,136,252,72,107,253,138,49,6,123,247,238,
93,122,32,191,248,197,47,224,121,30,162,40,186,182,6,99,213,66,96,136,136,178,214,118,197,113,220,61,3,66,144,157,30,85,235,142,189,225,109,60,250,186,191,242,244,81,215,15,43,4,17,128,106,130,63,187,
59,113,174,238,197,22,231,52,130,170,184,41,57,149,91,21,191,183,122,123,248,254,192,150,104,60,181,130,89,24,138,72,186,178,217,210,224,224,224,68,46,151,171,212,76,242,66,160,12,139,200,143,60,207,123,
41,138,34,124,247,187,223,93,58,32,63,255,249,207,65,68,16,145,171,1,252,187,69,192,72,25,99,122,173,181,105,150,36,210,201,77,14,57,155,63,122,201,255,220,39,175,5,93,83,35,142,178,156,200,140,26,170,
215,248,198,207,5,167,13,24,115,149,36,2,38,133,241,116,143,125,123,245,246,234,235,235,118,134,35,153,94,43,44,208,142,178,189,189,189,83,171,87,175,158,244,125,223,44,64,91,20,128,97,0,255,157,136,94,
17,17,124,239,123,223,235,60,144,135,31,126,184,238,192,175,0,240,31,177,48,51,165,152,185,219,90,219,195,34,14,3,72,23,198,212,150,247,95,8,46,250,232,197,32,59,53,234,144,8,196,207,0,217,126,32,219,
15,242,186,1,114,1,99,129,176,4,41,141,1,165,60,16,78,2,194,64,163,153,95,4,140,198,146,68,32,32,76,164,187,237,129,117,59,171,175,173,187,188,58,17,100,25,204,72,167,82,213,181,107,215,158,238,233,233,
41,183,45,213,154,249,2,240,223,0,28,20,17,252,224,7,63,232,28,144,135,30,122,168,126,184,137,136,254,51,22,230,192,61,102,238,99,230,44,131,160,76,132,245,159,188,230,239,56,248,76,186,119,244,168,38,
114,32,43,215,131,214,93,14,244,109,1,252,110,128,9,136,12,16,134,73,174,86,129,176,10,148,167,128,201,35,144,233,15,0,83,4,218,49,101,237,150,0,136,5,66,132,147,185,65,243,194,230,47,151,223,26,188,56,
140,161,160,29,101,7,6,6,38,214,172,89,51,233,56,78,219,47,33,128,15,68,228,191,0,248,4,0,126,248,195,31,182,252,145,110,231,202,53,117,237,69,18,218,110,19,145,182,42,69,68,105,17,233,23,17,95,72,161,
107,42,175,46,125,253,137,244,198,143,94,14,92,27,147,172,217,6,92,242,85,208,170,29,128,242,103,132,111,170,128,53,51,153,45,192,12,144,7,164,63,7,146,20,100,250,77,192,76,119,6,74,237,88,40,185,214,
186,201,97,253,221,131,207,117,109,89,115,212,125,254,162,171,203,163,65,14,39,135,134,86,86,42,21,111,195,134,13,167,219,52,97,76,68,219,68,228,47,0,252,87,212,218,41,173,146,211,234,132,7,31,124,16,
72,190,214,253,115,0,55,182,27,122,16,81,23,17,13,2,240,4,192,234,227,111,186,87,255,223,255,149,91,123,228,13,95,173,232,39,218,245,125,208,53,63,4,250,183,36,66,141,35,32,142,1,19,39,102,202,152,121,
114,12,176,6,177,7,196,99,137,249,234,0,140,217,255,70,112,152,105,221,84,222,221,52,126,210,155,72,229,236,233,244,10,46,151,74,126,177,88,244,211,233,116,213,243,60,219,74,20,53,89,173,67,210,80,62,
176,119,239,94,251,232,163,143,46,30,200,3,15,60,0,165,20,68,228,27,72,250,166,90,2,4,0,165,212,10,34,234,23,64,19,91,108,121,247,249,224,139,47,254,180,43,55,53,234,200,142,175,128,110,254,151,192,69,
95,78,46,23,71,179,5,30,199,77,96,52,64,177,26,176,21,64,10,51,254,164,19,48,102,201,152,176,162,82,84,91,79,31,243,98,71,203,137,92,191,169,132,145,91,44,20,130,116,58,93,245,125,191,37,20,36,110,97,
11,128,81,165,212,135,123,246,236,193,99,143,61,182,112,32,15,60,240,64,210,29,193,188,13,192,191,70,242,13,163,229,221,29,199,89,161,148,234,23,34,199,137,67,218,113,224,137,244,101,175,61,154,241,9,
74,190,250,79,64,215,255,51,160,171,15,136,162,154,54,204,39,116,219,2,144,5,89,6,120,28,181,70,73,231,96,52,150,68,8,76,68,23,141,159,240,180,181,56,210,189,202,148,227,88,23,10,133,32,147,201,84,61,
207,107,167,191,206,5,112,17,51,31,4,48,182,119,239,222,121,161,168,249,174,192,73,159,80,70,68,110,103,230,181,156,36,52,203,74,169,156,227,56,253,66,164,220,168,74,151,191,242,112,250,146,3,79,166,117,
58,71,216,243,111,65,95,253,167,128,151,74,4,202,220,36,203,204,113,210,31,245,233,204,12,136,159,60,235,82,193,64,157,53,193,55,134,110,56,124,32,253,173,15,247,167,125,27,83,177,92,14,14,29,58,52,88,
42,149,188,218,139,219,44,51,51,175,21,145,219,69,36,195,60,191,11,158,83,67,238,187,239,190,122,123,227,22,0,109,5,209,142,227,100,92,215,29,16,192,113,226,144,46,251,195,67,233,139,223,252,117,90,245,
172,38,250,254,191,7,118,126,117,198,220,52,53,71,182,13,147,213,144,101,2,64,212,190,217,90,32,140,198,82,9,211,134,201,17,215,55,49,14,245,172,49,229,56,214,149,114,217,205,229,114,101,173,117,43,247,
90,247,39,167,137,232,189,91,111,189,21,79,60,241,196,167,78,106,166,33,27,68,228,251,34,226,202,89,189,170,103,103,34,242,61,207,235,7,72,19,91,92,114,224,137,212,150,55,159,75,81,207,42,208,159,253,
39,96,199,117,128,181,51,111,127,227,91,126,174,89,22,16,101,157,3,140,250,231,53,197,140,235,142,190,149,218,125,232,64,202,17,193,228,212,84,230,232,209,163,125,198,24,106,37,167,154,44,191,207,204,
27,230,147,251,167,128,220,123,239,189,168,125,103,216,35,34,27,68,132,231,187,65,77,245,28,223,247,251,136,200,19,0,155,223,121,62,216,246,199,95,166,85,182,155,232,135,255,1,184,228,218,90,232,90,23,
32,55,55,71,11,6,210,102,148,117,206,48,102,46,164,153,233,250,35,7,211,215,30,127,39,0,128,209,211,167,115,67,67,67,43,218,0,194,34,178,129,153,247,88,107,213,189,247,222,219,28,200,253,247,223,95,111,
115,92,34,34,55,50,179,52,179,141,34,2,207,243,122,28,199,201,48,41,172,58,118,208,221,241,234,207,51,154,136,104,207,95,2,87,222,48,27,70,91,2,94,0,32,49,0,108,107,115,213,41,24,13,133,111,98,250,230,
199,7,50,59,78,31,119,173,8,13,13,13,245,78,76,76,164,218,240,39,34,34,55,214,100,140,251,239,191,127,126,32,213,106,21,204,172,69,228,86,17,89,41,73,154,151,184,214,58,227,186,110,55,131,144,157,26,86,
151,189,252,96,54,85,154,82,114,253,159,1,215,125,111,238,183,121,193,26,48,159,22,9,32,49,146,145,163,203,7,163,17,74,46,44,171,91,63,124,37,219,95,158,86,97,28,235,99,199,142,173,12,195,208,105,161,
37,82,147,237,173,204,172,171,213,234,252,64,106,105,187,136,124,165,153,169,170,249,13,39,8,130,94,34,82,142,137,176,253,181,199,210,61,195,135,181,92,242,39,160,91,254,5,224,232,25,129,114,187,166,168,
205,243,234,80,80,169,105,200,242,194,104,132,178,113,234,180,254,250,161,63,166,93,182,40,20,139,233,83,167,78,181,107,186,190,130,100,140,218,220,64,238,185,231,158,186,239,184,73,68,122,154,105,7,51,
195,247,253,156,214,58,197,164,176,230,208,43,254,134,15,94,12,164,171,7,180,247,47,129,238,129,6,39,94,211,140,78,248,139,89,80,44,4,197,249,133,182,196,48,26,239,115,213,240,199,193,231,243,71,124,43,
64,62,159,239,46,20,10,126,27,90,210,195,204,55,89,107,213,61,247,220,243,105,32,53,223,177,65,68,174,109,213,230,112,28,199,243,125,191,91,64,72,23,78,171,109,175,63,149,214,97,72,248,71,223,5,46,189,
182,214,189,177,24,115,180,16,32,33,64,101,116,178,59,126,193,48,106,237,81,63,54,180,251,147,55,211,189,213,162,10,163,88,15,13,13,117,91,107,169,85,219,68,68,174,173,201,124,54,144,187,238,186,171,78,
110,151,136,12,182,242,29,65,16,228,148,82,174,64,240,185,119,158,15,186,243,135,181,172,222,8,218,253,231,0,57,231,240,230,75,155,154,36,0,166,0,196,231,21,198,25,40,4,108,156,62,173,175,59,249,97,0,
8,38,38,38,178,83,83,83,65,253,69,111,162,37,131,53,153,227,174,187,238,154,1,82,51,67,89,17,185,78,68,84,51,83,85,211,142,46,33,66,215,248,73,103,227,187,47,4,196,0,174,253,14,176,118,203,252,81,85,203,
183,95,22,160,73,33,4,147,23,4,140,122,73,2,236,58,249,81,176,170,52,229,68,214,58,249,124,126,133,181,182,85,219,68,137,200,117,53,217,207,6,34,34,91,153,121,203,124,206,188,30,230,6,65,208,165,148,114,
33,130,13,239,189,224,103,38,135,29,233,29,0,93,183,7,0,117,174,125,209,52,143,3,82,189,96,96,212,139,129,74,193,217,117,234,99,159,4,152,154,154,202,180,225,75,184,38,243,173,103,128,220,113,199,29,245,
110,146,171,106,253,44,50,95,155,67,41,165,131,32,200,130,20,210,83,35,106,221,71,127,8,200,2,216,241,39,192,186,173,205,125,71,83,64,11,136,194,108,9,34,167,47,40,24,141,229,151,134,143,6,125,149,130,
138,140,113,78,159,62,157,109,209,46,145,90,127,225,85,68,132,59,238,184,35,209,16,107,109,86,68,190,80,31,1,56,143,134,136,239,251,41,199,113,60,6,176,250,240,1,47,59,113,202,17,77,160,43,255,20,112,
253,115,104,95,112,155,154,20,67,236,112,226,208,59,4,131,58,5,163,118,56,88,158,118,174,28,61,238,49,128,201,201,201,108,165,82,209,45,180,132,68,228,11,214,218,44,0,212,253,197,134,86,221,36,0,84,162,
29,164,220,176,76,107,14,189,226,147,101,32,219,3,92,252,249,153,175,122,231,234,63,230,52,119,181,28,143,0,118,28,157,250,158,222,73,24,103,58,32,89,240,197,145,99,126,218,196,84,13,67,119,122,122,58,
5,160,89,144,196,13,242,135,170,169,206,14,102,238,106,214,85,226,56,142,246,60,47,16,144,172,24,61,226,116,231,63,113,5,0,86,174,73,178,181,75,228,47,106,64,227,9,72,116,98,198,188,116,8,134,116,16,70,
189,220,56,61,238,174,47,140,59,134,133,38,39,39,211,45,66,96,169,201,126,7,51,67,49,179,18,145,237,45,162,43,241,125,63,72,66,93,96,224,216,155,158,87,45,18,4,64,207,32,16,164,207,106,8,206,241,134,75,
27,218,49,223,255,199,5,72,229,16,192,209,5,171,25,141,206,61,19,71,116,233,216,41,15,0,138,197,98,42,12,67,157,192,111,26,109,109,103,102,165,0,228,68,100,83,179,182,7,0,242,125,63,13,34,210,81,133,250,
78,188,231,214,187,163,145,202,182,110,123,200,28,109,140,118,157,120,92,132,20,26,70,153,92,192,48,26,203,109,19,35,110,96,99,10,163,200,173,125,196,106,102,182,68,68,54,1,200,41,102,30,100,230,129,102,
230,138,136,148,235,186,190,128,36,61,53,162,186,198,79,204,140,86,97,110,238,63,90,58,245,121,28,186,8,16,21,32,147,239,0,209,196,146,192,88,180,185,106,227,156,181,165,41,221,87,41,42,203,66,197,98,
49,96,230,86,102,107,128,153,7,149,136,172,171,133,94,243,18,116,28,199,213,90,187,2,32,55,118,92,251,229,105,37,245,33,150,211,227,64,84,157,255,173,95,148,67,7,80,157,132,140,189,1,84,79,127,166,52,
163,94,116,69,161,90,87,156,210,12,65,169,84,10,90,52,18,235,225,239,58,37,34,27,69,196,107,230,63,92,215,117,149,82,10,0,86,140,28,113,148,105,24,248,156,63,14,140,143,204,196,243,157,112,234,133,33,
200,169,87,129,202,216,103,14,70,189,212,204,216,88,152,112,8,64,24,134,110,28,199,170,9,16,212,24,108,84,34,178,166,153,67,23,17,184,174,235,1,32,101,99,116,77,12,233,51,55,39,2,198,78,1,239,190,154,
212,100,46,167,206,205,32,157,245,27,19,2,35,239,64,78,190,12,132,83,75,10,99,193,230,106,161,247,23,96,117,105,90,107,102,196,198,232,40,138,90,125,39,81,34,178,70,51,115,171,197,62,72,107,173,1,34,39,
170,34,61,61,170,102,221,60,138,33,191,123,8,180,99,23,224,165,231,55,89,115,181,47,132,147,235,48,3,211,195,144,163,255,15,152,60,158,248,164,207,168,102,52,254,166,175,90,82,190,53,84,38,82,81,20,233,
84,42,21,74,243,185,39,131,74,68,122,91,69,88,142,227,104,1,196,13,203,228,85,10,51,31,181,4,128,34,224,189,215,32,79,223,3,132,149,228,223,219,117,234,44,64,241,52,228,240,126,200,187,207,2,227,71,146,
255,251,172,195,168,105,72,54,138,84,42,142,136,69,40,138,162,86,45,118,17,145,94,45,34,217,38,196,64,68,164,148,114,4,128,174,150,72,135,213,100,154,107,227,205,217,2,207,61,0,41,21,65,127,250,143,129,
108,47,102,79,37,144,217,231,199,33,112,250,56,228,232,219,192,208,187,201,32,106,8,102,141,253,94,66,24,109,155,171,115,4,153,50,49,165,77,76,34,130,56,142,157,134,151,124,190,148,213,34,146,62,171,10,
51,117,73,58,20,137,136,148,32,153,221,228,216,104,70,106,141,190,196,68,192,255,121,4,242,222,107,192,206,175,128,214,93,2,164,87,0,66,201,200,245,194,20,48,62,12,201,31,1,78,29,2,198,79,2,97,125,132,
63,225,66,238,14,89,108,233,178,165,148,137,136,1,24,99,20,51,55,51,87,2,32,173,153,185,213,8,120,162,218,196,16,21,135,68,182,102,82,230,170,56,0,12,29,6,134,14,67,92,31,240,51,128,227,38,102,40,170,
2,81,165,54,184,13,103,77,200,233,140,16,218,129,33,237,92,171,3,48,68,146,126,45,207,90,130,0,214,90,213,134,134,104,45,34,77,7,80,215,253,8,0,40,107,105,214,252,189,185,42,84,111,159,196,17,16,157,213,
43,91,95,25,137,58,47,132,11,73,51,234,37,65,224,48,147,32,233,213,109,54,132,180,150,28,221,130,216,25,162,115,158,215,242,225,230,17,254,223,3,24,51,199,51,242,107,37,107,0,208,34,98,49,207,144,210,
198,8,0,0,88,57,34,243,153,171,243,36,132,11,25,134,16,193,144,106,120,167,91,2,177,154,153,13,146,225,242,115,159,97,173,212,190,108,193,104,79,132,234,11,189,117,110,230,210,114,193,144,101,132,65,2,
48,8,161,114,132,32,32,34,110,67,75,140,22,145,50,146,197,36,231,60,211,90,43,214,90,118,33,136,189,64,172,227,138,150,202,167,35,173,11,28,198,242,154,169,36,69,202,145,138,163,5,0,148,82,92,107,107,
204,23,105,17,128,178,22,145,34,128,190,249,144,49,179,24,99,44,68,16,121,105,49,110,74,2,153,78,162,212,207,16,140,57,163,171,165,130,33,73,174,58,90,74,218,149,250,114,30,109,56,245,162,18,145,241,249,
190,165,51,51,172,181,18,199,177,129,8,197,126,90,194,84,150,235,55,252,172,192,88,138,122,180,115,173,130,235,115,217,113,133,136,68,107,109,218,248,182,62,174,153,57,223,12,153,136,72,24,134,6,34,18,
107,31,165,174,62,94,41,135,218,139,158,254,30,195,0,128,209,32,197,85,199,145,250,114,81,50,179,140,212,124,41,175,69,100,8,152,127,206,185,136,160,90,173,70,34,34,236,104,154,238,89,109,0,248,159,37,
24,179,204,213,50,193,128,0,67,233,46,19,19,193,87,202,56,142,211,202,100,49,128,33,45,34,71,145,44,50,236,205,3,132,42,149,74,108,140,97,229,122,206,100,255,6,107,29,13,197,246,51,1,163,147,245,88,200,
181,140,82,56,146,237,182,2,64,107,29,215,163,172,38,41,2,112,84,139,200,9,0,37,17,241,207,186,221,153,84,173,86,227,40,138,226,64,187,206,228,202,117,38,76,117,113,186,48,161,234,19,237,255,1,198,217,
117,6,166,61,143,143,101,115,134,4,240,60,175,10,64,154,104,8,17,81,9,192,9,197,204,121,102,30,105,54,72,46,142,99,46,151,203,33,9,83,49,215,199,83,189,107,77,91,142,253,2,128,113,166,42,203,4,163,94,
158,200,228,204,104,144,102,69,16,223,247,171,45,6,57,16,51,143,48,115,94,1,152,22,145,79,90,141,90,156,158,158,46,51,179,196,110,32,35,107,183,197,45,43,119,1,192,232,68,61,22,123,173,247,122,250,226,
138,227,136,118,156,216,117,221,168,182,54,100,179,8,235,19,0,211,170,54,79,225,125,105,62,99,138,10,133,66,53,142,227,24,0,78,109,216,17,133,65,70,230,29,19,123,129,192,144,14,92,99,161,207,68,0,74,174,
43,111,246,14,68,181,207,223,21,165,84,171,144,151,69,228,125,102,230,250,200,197,119,153,185,48,223,80,21,17,65,165,82,49,197,98,177,74,194,52,209,191,193,142,247,111,140,137,47,92,24,29,185,198,34,175,
117,184,171,59,62,146,205,89,5,72,16,4,101,212,252,199,60,153,106,178,127,151,153,207,140,237,61,86,203,243,14,118,176,214,242,196,196,68,81,152,57,242,82,114,108,203,23,67,81,234,31,96,156,85,50,8,175,
12,172,13,75,218,21,237,56,177,239,251,149,22,230,74,53,200,255,204,232,247,162,136,188,222,202,241,76,78,78,86,170,213,106,68,34,56,190,249,138,104,186,123,208,18,203,162,42,190,212,48,58,98,174,22,252,
12,192,169,116,214,30,232,95,29,145,8,124,223,47,182,97,174,68,68,94,183,214,22,1,64,221,121,231,157,245,249,33,175,138,72,169,153,217,170,86,171,102,124,124,188,8,97,20,115,253,124,228,226,47,85,59,17,
197,208,121,122,155,59,126,45,0,127,24,92,91,205,167,210,236,16,217,32,8,138,245,46,168,249,204,149,136,148,68,228,85,34,194,157,119,222,57,107,6,213,135,204,252,113,171,49,90,163,163,163,133,48,12,99,
16,112,232,146,93,97,97,197,192,140,150,44,26,134,124,230,97,144,0,195,169,140,125,97,205,198,80,4,240,60,175,228,186,110,88,127,153,231,51,87,53,153,127,88,111,52,54,206,49,44,138,200,239,91,68,91,40,
149,74,209,248,248,120,1,204,152,236,89,101,63,222,177,171,218,86,3,241,239,178,102,212,222,167,191,93,187,177,122,34,147,181,14,193,166,82,169,169,22,46,160,30,93,253,190,38,251,25,32,119,223,125,119,
253,132,253,34,146,111,209,38,65,62,159,159,14,195,48,6,128,15,118,126,165,58,214,191,209,16,47,236,45,95,74,24,75,57,136,122,190,103,57,156,235,49,191,91,183,169,10,0,158,231,21,181,214,213,54,122,119,
243,53,153,227,238,187,239,158,1,146,60,132,0,192,49,17,121,169,33,28,158,211,151,20,139,197,104,100,100,100,18,194,40,102,123,249,205,47,238,46,199,158,47,159,26,127,213,22,140,115,48,87,157,0,122,174,
48,144,124,247,120,106,211,214,242,233,32,197,14,145,9,130,96,18,205,67,93,212,230,229,188,84,147,249,153,42,156,25,113,114,224,192,1,124,254,243,159,23,17,41,32,217,5,39,64,147,84,169,84,226,92,46,151,
242,93,215,157,236,30,176,217,233,113,213,159,63,230,162,133,249,90,106,51,181,168,232,234,28,234,65,2,188,176,110,99,245,233,77,91,43,12,32,8,130,113,207,243,138,141,66,158,35,17,128,73,17,249,107,17,
201,255,248,199,63,62,243,31,115,13,110,120,95,68,94,108,229,220,171,213,170,61,113,226,196,184,49,134,173,163,241,199,171,190,94,30,29,168,153,174,243,4,99,185,175,85,55,85,143,93,116,73,57,82,10,218,
113,202,158,231,77,181,48,85,245,182,199,139,72,182,81,154,149,230,90,13,200,136,200,147,34,50,214,204,151,0,192,216,216,88,41,159,207,79,130,25,83,43,250,248,213,107,111,45,150,51,57,158,11,202,220,48,
22,97,174,46,32,24,147,126,192,15,110,191,172,56,156,206,176,2,140,239,251,99,68,100,219,240,29,99,34,242,36,51,155,179,87,3,154,53,72,238,205,55,223,196,149,87,94,9,34,26,19,145,62,17,217,217,42,82,40,
149,74,97,54,155,245,3,223,247,38,115,253,108,180,43,107,78,124,228,41,107,168,62,50,101,185,52,99,65,230,234,28,97,84,29,45,15,109,219,89,122,105,245,250,136,68,196,243,188,177,186,169,106,165,29,0,158,
34,162,103,68,68,126,250,211,159,206,15,4,0,222,120,227,13,92,126,249,229,34,34,167,0,92,5,160,251,172,199,152,149,140,49,82,169,84,162,92,46,151,214,90,59,163,253,107,141,99,13,86,157,58,226,42,22,250,
187,104,166,12,41,121,250,162,109,229,103,54,109,173,48,17,180,214,211,158,231,141,183,240,27,64,98,145,142,137,200,157,34,50,121,223,125,247,125,234,132,57,135,145,94,121,229,149,96,230,41,36,159,21,
191,140,38,107,51,2,64,24,134,54,138,162,120,197,138,92,154,28,173,134,7,63,103,220,176,74,3,195,199,92,106,172,228,98,205,213,5,2,3,2,48,41,236,251,220,150,202,47,182,94,90,137,200,129,163,84,201,243,
188,17,160,173,165,215,13,128,123,69,228,15,68,132,131,7,15,182,7,228,224,193,131,184,226,138,43,128,100,91,210,77,72,246,164,157,23,191,136,160,92,46,199,214,90,155,235,234,74,179,118,105,104,245,38,
227,198,17,250,71,142,107,197,76,139,158,243,209,230,185,109,153,171,115,128,65,2,88,82,178,111,211,197,149,135,183,93,86,174,58,142,40,66,213,117,221,17,34,50,109,192,112,144,236,34,250,55,0,226,179,
77,85,83,32,0,112,217,101,151,1,201,142,100,39,68,228,203,34,146,155,207,159,212,83,177,88,12,153,249,12,148,147,107,54,27,18,193,64,254,132,235,212,125,74,66,176,163,48,150,250,90,117,159,241,203,45,
219,203,191,216,186,179,82,117,28,33,160,170,181,206,19,81,212,102,84,53,4,224,127,0,56,37,34,120,235,173,183,22,6,228,173,183,222,194,101,151,93,6,107,237,24,17,85,144,248,147,150,139,247,23,10,133,144,
153,109,87,54,155,18,237,210,137,213,155,227,106,144,230,193,145,227,174,27,134,237,107,202,5,4,99,210,15,248,145,75,46,47,253,106,243,246,74,164,20,20,80,117,28,39,79,68,97,43,121,32,121,224,8,192,95,
91,107,247,19,17,126,246,179,159,205,123,114,211,169,8,117,40,0,142,32,113,238,59,218,168,0,10,133,66,24,199,177,201,100,50,41,210,90,13,15,172,55,163,189,171,77,223,120,94,103,74,211,179,167,196,117,
64,128,210,193,107,157,13,227,147,238,94,243,147,203,191,84,216,191,118,99,196,0,72,164,76,68,121,34,106,88,86,162,37,144,39,0,252,111,34,178,181,205,13,22,7,4,0,222,126,251,109,236,220,185,211,34,217,
244,234,34,17,89,127,214,227,126,42,213,187,87,42,149,74,152,73,167,125,173,181,30,239,238,231,35,235,47,142,188,56,164,222,137,81,237,24,75,75,49,79,164,19,215,34,1,66,173,229,197,245,155,171,63,185,
226,75,197,143,123,86,218,218,102,137,5,0,35,68,20,163,141,84,11,113,95,1,112,7,128,98,195,62,44,139,7,2,0,151,94,122,41,144,44,1,250,97,173,109,210,223,172,125,82,79,229,114,57,46,20,10,21,223,247,117,
224,121,94,37,72,203,39,235,183,70,19,43,250,108,119,97,220,201,148,138,138,206,70,187,64,1,118,114,68,59,9,32,32,28,237,233,53,15,239,252,66,233,87,23,239,168,76,123,190,16,179,21,230,113,17,25,3,208,
170,225,215,216,222,248,0,192,95,1,56,5,0,239,188,243,78,103,128,188,243,206,59,184,244,210,75,33,34,147,72,204,215,149,0,86,160,133,166,0,64,20,69,118,114,114,178,36,34,156,14,2,31,90,171,252,202,213,
246,208,198,109,81,232,249,178,162,48,233,4,213,202,236,176,122,153,53,163,254,82,140,102,178,118,223,197,59,42,15,237,252,98,233,131,222,126,35,0,132,185,106,173,29,17,145,233,118,158,183,150,234,91,
30,253,149,136,188,15,0,143,60,242,72,91,63,108,11,72,29,202,142,29,59,32,34,121,36,225,240,149,0,186,218,169,164,181,86,166,167,167,43,165,82,169,234,121,158,246,180,118,35,63,133,163,171,55,197,135,
55,92,28,133,94,192,217,74,193,9,170,85,69,103,71,243,75,4,131,0,16,3,66,132,124,87,206,254,237,230,109,149,71,46,255,82,233,181,53,27,163,138,235,10,152,173,181,118,210,24,51,42,34,237,56,239,70,24,195,
53,24,7,128,100,51,181,118,211,130,183,205,219,187,119,47,162,40,130,231,121,215,138,200,130,183,205,211,90,171,190,190,190,174,190,190,190,238,32,8,206,108,155,183,98,106,76,109,57,242,190,119,201,225,
247,252,85,163,167,220,32,172,18,90,152,51,89,32,12,18,156,9,2,42,158,39,199,186,87,198,7,214,110,12,223,88,181,62,26,77,103,146,113,133,214,178,49,166,108,140,153,176,214,86,22,40,30,5,96,152,136,126,
20,69,209,75,158,231,161,213,142,58,231,12,4,0,110,187,237,54,24,99,160,181,190,186,6,101,193,27,75,250,190,175,87,174,92,217,213,219,219,155,243,60,207,23,34,88,17,248,213,10,13,140,13,59,155,143,31,
242,54,158,58,230,246,79,140,234,76,181,172,148,225,57,117,81,230,121,251,33,13,25,201,88,219,162,31,240,169,92,183,249,168,127,117,252,238,192,154,232,248,138,30,91,210,174,212,22,51,96,99,76,37,138,
162,73,107,109,89,218,232,7,153,3,198,9,34,250,145,49,230,21,173,117,211,157,116,58,10,4,0,246,236,217,3,107,45,148,82,87,96,17,91,175,214,159,215,247,125,221,211,211,147,233,238,238,238,10,130,32,32,
34,101,65,16,97,184,81,72,43,166,39,212,224,248,136,30,28,203,59,253,19,99,186,187,56,173,210,213,178,242,227,136,28,99,73,241,217,91,175,18,98,165,37,212,174,20,253,128,39,210,89,30,238,234,54,39,186,
87,218,147,185,30,115,58,157,229,106,125,175,15,102,88,99,140,49,166,28,69,209,180,49,166,34,201,134,103,139,222,122,149,153,15,58,142,131,199,31,127,124,81,114,61,167,205,137,191,243,157,239,212,5,187,
232,205,137,107,191,23,173,181,147,201,100,130,92,46,151,201,100,50,105,215,117,93,34,82,76,148,236,10,205,12,101,12,220,56,34,63,172,82,16,86,201,139,66,114,77,76,202,26,18,1,12,145,68,74,75,69,187,82,
118,93,169,104,79,170,90,215,54,39,150,68,157,172,133,181,214,26,99,170,81,20,149,163,40,42,89,107,35,17,17,90,224,182,158,13,242,59,179,57,49,17,205,185,81,203,178,0,1,128,134,125,196,123,1,220,46,201,
174,60,139,218,190,187,46,20,215,117,157,32,8,188,76,38,147,74,165,82,129,235,186,158,227,56,14,17,41,17,16,67,32,192,167,182,239,22,22,136,212,70,121,212,214,83,97,102,225,4,128,137,227,56,140,162,168,
26,199,113,213,24,19,45,82,27,234,73,1,8,137,104,214,246,221,181,125,229,207,31,144,122,186,229,150,91,0,192,23,145,142,108,112,95,179,225,164,148,34,173,181,227,186,174,246,60,79,107,173,93,173,181,86,
74,57,181,53,188,8,181,13,235,107,43,179,177,181,182,206,192,24,99,98,99,140,177,214,26,78,230,3,72,7,158,251,204,6,247,68,180,15,64,248,244,211,79,119,68,142,29,3,2,0,223,250,214,183,64,68,168,237,236,
118,59,128,93,72,166,92,47,88,91,26,83,131,127,173,31,16,17,97,46,19,83,119,198,245,162,241,252,14,36,133,164,195,117,63,128,251,148,82,31,136,8,126,249,203,95,118,76,134,29,5,2,0,223,248,198,55,234,135,
25,0,187,1,252,64,68,54,96,86,204,243,153,75,132,4,234,49,0,15,3,216,7,160,4,0,191,250,213,175,58,126,163,37,73,55,223,124,115,125,53,161,245,0,110,147,100,155,159,149,72,180,229,179,2,134,144,104,197,
24,17,253,6,192,99,204,124,156,136,240,235,95,255,122,201,110,184,164,233,230,155,111,6,18,155,187,93,68,190,141,100,136,81,15,46,108,48,117,16,19,0,126,79,68,79,33,25,33,98,151,10,68,227,141,151,37,237,
222,189,27,72,190,167,108,7,112,19,128,107,1,12,214,30,252,66,128,83,135,192,0,242,0,94,2,240,28,18,16,102,223,190,125,203,86,137,101,77,55,222,120,35,106,15,190,30,9,148,235,0,108,17,145,76,173,62,203,
9,167,14,65,106,147,46,63,70,242,153,245,37,0,199,1,240,111,126,243,155,101,149,207,178,3,169,167,27,110,184,1,47,191,252,50,118,237,218,149,5,176,85,68,174,2,240,5,0,27,144,116,90,214,87,185,233,100,
48,64,13,153,1,20,144,116,148,190,78,68,175,2,248,112,255,254,253,197,107,174,185,6,207,63,255,252,121,145,203,121,3,210,152,174,191,254,250,164,50,68,217,218,7,176,29,72,76,219,102,0,3,72,34,54,15,51,
163,95,230,234,86,156,235,185,234,37,35,249,140,90,2,48,2,224,48,18,83,244,46,17,29,151,100,189,23,252,238,119,191,59,223,162,184,48,128,52,166,129,129,1,236,220,185,19,72,182,210,200,33,241,51,235,0,
108,4,176,166,246,119,47,128,44,146,85,140,52,102,62,35,88,36,67,109,202,0,138,72,90,207,121,0,67,0,142,34,249,70,145,39,162,105,0,252,246,219,111,99,100,100,228,124,63,242,172,244,255,1,212,213,103,109,
107,252,67,136,0,0,0,37,116,69,88,116,100,97,116,101,58,99,114,101,97,116,101,0,50,48,49,50,45,48,54,45,49,50,84,48,56,58,52,55,58,53,50,45,48,55,58,48,48,85,4,12,3,0,0,0,37,116,69,88,116,100,97,116,101,
58,109,111,100,105,102,121,0,50,48,49,50,45,48,54,45,49,50,84,48,56,58,52,55,58,53,50,45,48,55,58,48,48,36,89,180,191,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,
115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::redledonth_png = (const char*) resource_AiassAudioProcessorEditor_redledonth_png;
const int AiassAudioProcessorEditor::redledonth_pngSize = 8265;

// JUCER_RESOURCE: ledredoffth_png, 8203, "../../../../../Pictures/Bilder und Grafiken/Für Programmierprojekte/led-red-off-th.png"
static const unsigned char resource_AiassAudioProcessorEditor_ledredoffth_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,100,0,0,0,100,8,6,0,0,0,112,226,149,84,0,0,0,6,98,75,71,68,0,255,
0,255,0,255,160,189,167,147,0,0,0,9,112,72,89,115,0,0,21,44,0,0,21,44,1,140,49,106,181,0,0,0,9,118,112,65,103,0,0,0,100,0,0,0,100,0,135,38,94,230,0,0,31,15,73,68,65,84,120,218,237,157,91,140,29,213,185,
231,255,223,170,85,151,125,233,221,23,119,187,109,140,219,224,216,216,24,115,9,14,225,96,18,157,163,16,48,33,33,196,56,57,228,229,16,158,230,237,72,163,153,135,121,24,105,30,70,51,15,163,163,140,70,32,
193,65,57,98,152,64,50,199,73,48,4,72,136,73,28,9,17,76,76,100,14,6,67,8,4,131,237,118,187,119,187,221,183,125,171,203,90,235,155,135,170,106,239,110,239,91,183,251,150,104,62,169,84,213,181,171,247,94,
245,253,234,187,172,91,45,194,26,147,98,177,136,147,39,79,2,128,32,162,2,128,65,0,87,3,216,2,224,170,228,239,62,0,121,0,89,0,18,128,149,252,187,6,160,0,84,1,148,1,76,0,40,2,24,1,112,26,192,48,128,34,51,
207,0,48,187,119,239,198,224,224,224,106,223,242,28,161,213,46,0,0,28,57,114,4,0,192,204,121,34,218,12,96,23,128,157,0,182,2,88,15,32,7,192,1,32,146,127,225,121,251,102,247,149,238,13,128,16,64,5,192,
24,128,83,0,62,4,240,1,51,159,37,162,50,0,220,117,215,93,171,173,138,213,3,242,155,223,252,6,119,220,113,7,142,30,61,154,7,112,29,17,125,17,192,173,0,134,0,116,33,86,62,215,109,75,117,191,233,102,0,148,
0,156,1,240,54,51,191,5,224,163,189,123,247,150,223,124,243,77,124,245,171,95,93,21,189,172,56,144,87,95,125,21,136,149,189,25,192,157,0,190,12,96,27,17,229,234,20,181,84,0,58,185,127,1,128,153,185,2,
224,207,0,94,7,240,6,128,179,0,204,61,247,220,179,162,250,89,49,32,135,15,31,6,98,127,191,19,192,62,196,48,6,19,133,172,36,132,86,186,72,203,82,68,12,229,48,98,215,166,246,237,219,183,98,133,88,86,121,
229,149,87,128,56,232,238,36,162,111,34,182,136,94,172,13,8,173,244,34,0,76,2,120,157,153,95,68,12,70,127,237,107,95,91,246,31,94,22,121,229,149,87,64,68,48,198,108,6,240,32,17,221,13,96,29,214,54,136,
70,250,17,0,46,50,243,175,1,28,18,66,156,101,102,44,23,152,37,7,242,139,95,252,34,61,204,1,184,7,192,67,68,52,132,165,13,206,43,45,4,128,152,249,12,128,131,0,94,69,156,177,225,235,95,255,250,146,255,208,
146,201,75,47,189,4,102,134,16,98,7,128,71,0,236,5,96,35,182,138,43,43,40,17,112,9,40,49,115,253,190,254,58,110,113,253,149,138,0,16,1,56,10,224,105,99,204,159,136,8,247,223,127,255,146,233,112,201,128,
188,248,226,139,0,224,18,209,61,0,190,7,96,19,226,138,218,98,133,17,43,146,140,49,150,214,90,70,81,36,149,82,182,214,90,106,173,45,173,181,48,198,16,51,167,10,103,34,50,68,100,44,203,82,82,74,101,219,
182,114,28,39,178,109,91,89,150,101,18,96,87,10,200,2,112,14,192,255,97,230,87,1,4,223,252,230,55,151,68,143,87,12,228,231,63,255,121,122,216,7,224,17,34,186,31,128,139,197,89,5,3,32,99,140,21,69,145,
19,134,97,38,138,34,47,138,34,71,107,45,141,49,100,18,229,27,0,204,60,187,153,244,216,24,32,217,51,51,192,204,66,8,45,165,84,142,227,4,217,108,214,207,102,179,190,231,121,161,16,194,92,129,14,4,128,128,
153,95,2,240,52,226,86,1,60,240,192,3,171,7,228,249,231,159,79,93,195,181,0,254,17,192,237,117,138,237,188,16,68,108,140,177,148,82,94,24,134,185,48,12,179,74,41,219,48,11,70,146,5,24,3,138,34,80,16,144,
168,86,227,205,247,73,4,1,65,235,24,146,16,172,108,155,149,227,176,242,60,142,92,151,181,109,179,38,138,191,67,107,80,236,82,181,231,121,126,62,159,175,22,10,133,74,38,147,9,137,136,153,121,161,250,72,
175,63,6,224,49,0,159,50,51,246,239,223,191,242,64,14,29,58,4,203,178,96,140,185,25,192,191,7,176,3,139,176,10,99,140,140,162,40,23,134,97,151,82,202,51,204,34,125,250,133,239,147,61,62,46,188,115,231,
100,102,120,216,114,71,71,165,51,49,33,172,74,69,136,32,32,138,34,162,212,34,0,48,17,140,16,48,82,178,114,93,142,178,89,19,244,244,152,74,127,191,42,111,216,160,43,3,3,170,214,211,99,148,109,51,27,3,24,
3,203,178,84,62,159,175,246,246,246,206,20,10,133,154,101,89,102,17,96,4,128,63,1,248,95,66,136,19,90,107,60,248,224,131,43,7,228,185,231,158,131,148,18,74,169,219,137,232,63,34,110,252,91,16,12,99,140,
84,74,117,133,97,88,208,90,187,169,37,136,106,149,188,179,103,173,174,15,62,112,114,31,127,108,123,231,207,75,171,92,22,164,20,128,185,169,26,19,205,105,212,154,61,174,139,15,233,121,99,89,136,114,57,
83,25,24,80,83,67,67,209,228,214,173,97,121,253,122,29,58,14,179,49,16,128,201,229,114,181,254,254,254,169,158,158,158,170,101,89,188,192,56,35,0,12,51,243,247,165,148,199,148,82,56,112,224,192,242,3,
249,217,207,126,6,199,113,16,134,225,157,9,140,13,11,129,193,204,66,107,221,21,69,81,143,214,218,53,241,73,216,23,46,136,174,119,222,113,186,223,126,219,205,156,62,109,91,213,42,205,42,57,81,252,252,22,
197,134,48,90,157,75,20,204,0,162,76,134,203,27,54,68,23,118,238,12,198,183,109,11,171,221,221,134,141,1,17,113,87,62,95,25,28,28,156,44,20,10,181,196,37,47,4,202,40,51,127,223,113,156,55,194,48,196,183,
191,253,237,229,3,242,211,159,254,20,68,4,102,190,29,192,127,90,4,140,140,82,170,79,107,157,53,0,129,25,206,200,136,213,243,198,27,110,247,31,254,224,57,99,99,22,25,3,22,2,176,172,24,132,49,96,99,96,234,
148,185,40,24,13,206,33,142,59,168,246,246,234,177,157,59,253,209,221,187,131,74,95,159,54,204,144,66,232,190,190,190,233,141,27,55,78,185,174,171,22,96,45,2,192,40,128,255,65,68,199,152,25,223,249,206,
119,150,30,200,193,131,7,211,0,126,51,128,255,140,133,185,41,97,140,233,209,90,247,26,102,139,1,200,139,23,69,239,107,175,121,189,175,191,238,217,227,227,150,240,60,200,222,94,88,249,60,132,109,199,113,
33,12,193,190,15,93,171,65,85,171,136,194,16,218,152,37,129,49,167,150,202,12,38,66,173,167,71,159,223,189,219,63,119,211,77,190,159,207,27,54,6,217,76,198,223,180,105,211,120,111,111,111,181,99,173,38,
238,11,192,127,7,112,130,153,241,208,67,15,45,29,144,127,253,215,127,77,15,175,37,162,255,130,133,5,112,199,24,211,111,140,201,51,17,16,134,232,250,195,31,220,254,151,95,206,102,206,158,149,178,183,23,
238,150,45,176,7,6,64,150,5,14,2,152,90,13,92,171,93,218,251,62,184,86,131,14,2,68,90,35,212,122,78,251,203,82,1,74,193,204,12,14,170,51,183,221,86,29,219,190,61,80,66,64,10,161,215,175,95,63,121,213,
85,87,77,89,150,213,241,67,8,224,79,204,252,95,1,124,10,0,223,253,238,119,219,254,147,236,228,155,19,115,237,67,156,218,238,96,230,142,10,69,68,89,102,30,96,102,151,133,128,83,44,138,254,23,94,200,22,
142,30,245,156,108,150,50,123,247,194,29,26,2,132,136,21,95,173,130,181,6,180,142,247,137,187,74,247,196,12,71,8,16,128,154,214,75,10,163,62,86,117,141,142,202,29,135,15,119,245,156,62,109,127,122,251,
237,213,106,161,128,115,35,35,235,106,181,154,51,52,52,52,222,161,11,51,68,180,131,153,255,17,192,127,67,82,79,105,39,86,187,11,126,252,227,31,3,113,111,221,191,3,112,119,167,169,7,17,117,17,209,32,0,
135,1,228,223,125,215,222,248,47,255,82,40,156,60,233,102,119,237,162,194,93,119,193,217,188,25,4,196,174,41,12,129,40,2,71,81,188,87,42,62,78,247,81,4,152,248,57,176,146,122,133,170,139,43,75,106,45,
68,16,198,80,190,88,180,187,207,157,115,252,66,65,87,187,187,77,181,82,113,203,229,178,155,205,102,125,199,113,116,59,85,36,186,186,26,113,69,249,248,129,3,7,244,115,207,61,183,120,32,207,62,251,44,132,
16,96,230,251,16,183,77,181,5,8,0,66,136,110,34,26,96,64,66,107,244,254,230,55,222,134,31,254,176,43,235,251,86,97,223,62,228,255,230,111,64,174,11,204,3,81,15,99,14,156,244,92,157,2,4,17,162,180,254,
177,148,48,230,129,113,203,101,209,123,230,140,163,165,228,210,192,128,170,133,161,93,46,149,188,108,54,235,187,174,219,22,10,226,176,176,13,192,5,33,196,71,251,247,239,199,161,67,135,22,14,228,217,103,
159,141,155,36,140,217,1,224,63,32,238,195,104,251,235,150,101,117,11,33,6,64,100,81,16,80,255,243,207,103,251,15,29,202,101,250,250,68,239,183,191,13,111,199,142,248,169,15,195,57,10,159,163,248,121,
231,208,4,136,98,134,110,144,125,45,181,181,88,97,72,61,195,195,142,208,26,211,27,54,168,90,20,201,82,169,228,229,114,57,223,113,156,78,218,235,108,0,159,51,198,156,0,112,241,192,129,3,77,161,136,102,
223,96,226,182,160,28,51,63,98,140,217,100,98,65,171,77,8,81,176,44,107,0,68,66,248,62,173,63,120,48,187,238,165,151,178,153,107,174,161,190,135,31,134,187,117,107,28,31,146,184,48,39,70,196,237,78,179,
231,103,207,165,215,52,120,18,211,167,105,217,96,164,27,17,44,165,104,203,241,227,217,207,29,61,154,149,81,68,149,106,213,251,228,147,79,6,43,149,138,147,60,184,173,54,99,140,217,196,204,143,48,115,206,
152,230,33,184,33,144,167,159,126,58,46,16,243,62,102,222,203,204,186,190,33,175,209,38,132,200,73,41,251,25,16,20,4,212,127,240,96,182,231,240,225,108,102,199,14,90,247,240,195,176,55,108,136,227,194,
60,16,72,149,61,47,128,99,254,231,13,128,80,179,154,250,50,156,227,248,41,165,171,223,123,47,187,245,216,177,172,165,20,149,203,101,239,212,169,83,3,190,239,91,137,190,90,109,58,209,229,190,122,29,47,
196,66,134,152,249,239,153,217,110,7,131,136,92,199,113,6,64,36,73,107,244,189,240,66,166,231,240,225,140,183,109,27,214,61,252,48,100,127,127,236,114,230,91,69,93,203,108,195,207,234,172,164,145,164,
57,251,114,195,168,223,131,25,155,78,158,204,108,121,251,237,12,49,99,122,122,58,119,250,244,233,126,165,20,181,211,83,162,203,191,55,198,12,117,108,33,79,61,245,20,146,126,134,253,204,60,196,204,166,
217,15,36,166,103,185,174,219,79,68,14,0,116,31,57,226,245,190,252,114,214,217,184,145,214,125,239,123,144,131,131,179,48,26,61,249,173,172,98,142,203,106,244,208,172,48,12,78,178,59,210,154,134,78,156,
200,94,245,193,7,30,3,24,31,31,47,140,140,140,116,119,0,196,48,243,144,49,102,191,214,90,60,245,212,83,173,129,60,243,204,51,105,157,227,122,102,190,219,24,195,173,124,35,51,195,113,156,94,203,178,114,
44,4,178,39,78,216,125,63,253,105,78,58,14,245,253,195,63,192,189,246,90,160,206,50,26,62,249,45,172,99,142,203,106,4,36,201,178,86,18,70,122,44,162,136,174,61,126,60,183,110,120,216,214,204,52,50,50,
210,55,57,57,153,233,32,158,48,51,223,157,232,24,207,60,243,76,115,32,190,239,195,24,35,153,249,1,102,94,199,177,52,37,46,165,204,217,182,221,195,68,176,71,71,69,255,143,127,156,151,51,51,162,103,255,
126,100,247,236,105,26,51,184,131,152,49,231,179,38,162,231,43,109,37,96,212,157,115,170,85,241,185,183,222,202,103,102,102,68,24,69,242,204,153,51,235,130,32,176,218,88,9,39,186,125,192,24,35,125,223,
111,14,36,145,157,204,252,165,86,174,42,137,27,150,231,121,125,68,36,40,12,209,119,232,80,214,57,117,74,102,110,187,13,133,251,238,155,147,49,205,143,25,77,173,162,206,77,205,137,45,13,44,196,48,67,205,
179,144,21,131,145,110,68,232,186,112,65,94,243,206,59,89,161,53,74,229,114,246,252,249,243,157,186,174,47,33,30,163,214,24,200,147,79,62,153,198,142,125,204,220,219,202,58,140,49,112,93,183,32,165,204,
176,16,200,29,59,230,230,127,247,59,207,234,233,65,223,67,15,193,202,229,46,75,111,59,138,25,205,50,176,6,50,191,14,178,210,48,102,143,137,48,248,201,39,222,192,103,159,185,12,160,88,44,246,148,74,37,
183,3,43,233,53,198,236,211,90,139,39,159,124,242,114,32,73,236,24,98,230,59,219,213,57,44,203,114,92,215,237,97,34,200,241,113,209,243,226,139,89,10,2,234,186,251,110,120,187,118,93,238,170,234,159,252,
197,196,147,6,18,164,253,234,171,8,35,221,91,81,68,91,222,123,47,227,86,42,34,136,34,57,50,50,210,163,181,166,118,117,19,102,190,51,209,249,92,32,143,63,254,120,74,110,47,51,15,182,139,29,158,231,21,132,
16,54,152,209,117,228,136,231,158,58,37,229,224,32,186,239,187,47,110,162,111,243,228,183,141,39,109,42,132,154,25,193,50,244,143,44,6,70,106,37,249,139,23,237,171,62,250,200,3,51,38,39,39,243,211,211,
211,94,250,160,183,176,146,193,68,231,120,252,241,199,47,1,73,220,80,158,153,191,204,204,162,149,171,74,172,163,139,137,96,159,59,103,117,189,246,154,199,0,242,127,251,183,112,135,134,230,90,71,187,39,
191,85,60,105,225,178,252,196,93,173,5,24,179,231,152,177,241,227,143,189,220,244,180,21,105,109,21,139,197,110,157,12,190,104,177,9,102,254,114,162,251,185,64,152,249,58,99,204,182,102,193,60,77,115,
61,207,235,74,173,35,255,218,107,174,28,29,181,68,161,128,174,191,251,59,160,206,58,22,156,73,205,7,215,164,118,174,153,225,207,235,164,90,117,24,201,255,102,74,37,107,195,39,159,184,0,48,61,61,157,235,
32,150,152,68,231,215,205,2,121,244,209,71,211,110,217,47,38,237,44,220,172,206,33,132,144,158,231,229,33,4,228,216,152,200,253,254,247,30,3,240,118,238,132,183,109,219,37,235,104,243,228,215,91,78,195,
207,234,255,127,158,212,140,65,180,196,13,138,87,12,163,110,91,127,250,180,151,41,149,68,168,148,53,62,62,158,111,83,47,225,164,189,240,139,68,132,71,31,125,52,182,16,173,117,158,153,111,229,100,16,90,
19,11,97,215,117,51,150,101,57,12,32,123,252,184,35,207,159,183,0,32,183,103,15,132,231,1,90,119,246,228,55,251,172,17,156,58,137,152,81,77,32,173,53,24,179,86,50,51,99,245,15,15,59,0,48,53,53,149,175,
213,106,178,141,149,16,51,223,170,181,206,3,64,26,47,134,218,53,147,0,16,158,231,229,137,72,136,106,149,178,199,142,185,48,6,148,201,192,187,254,250,75,215,93,73,204,152,111,57,117,64,12,128,178,214,208,
107,21,70,178,39,102,12,156,57,227,202,40,34,63,8,236,153,153,153,12,128,86,73,146,169,211,63,68,98,58,187,140,49,93,173,154,74,44,203,146,142,227,120,76,196,246,103,159,89,206,167,159,218,12,192,234,
233,129,179,113,99,108,29,205,50,169,22,49,99,126,90,60,7,106,29,144,138,214,179,153,213,90,133,49,91,89,156,156,180,243,19,19,150,97,166,169,169,169,108,155,20,152,19,221,239,50,198,64,24,99,4,51,239,
108,147,93,177,235,186,158,16,194,102,0,153,119,223,117,68,185,76,12,192,234,237,133,200,231,103,251,192,59,122,242,59,253,44,145,154,49,168,206,11,228,107,18,70,178,201,32,160,190,209,81,7,0,202,229,
114,38,8,2,9,180,76,129,5,51,239,52,198,8,9,160,192,204,215,214,125,119,35,33,215,117,179,32,34,170,213,224,254,241,143,118,122,177,200,102,65,82,118,214,98,187,128,120,146,90,71,192,140,146,49,115,148,
183,86,97,164,199,4,160,123,108,204,182,162,136,66,102,187,82,169,56,142,227,68,220,124,136,42,35,30,31,93,144,198,152,65,196,83,143,155,2,177,44,75,216,182,237,130,136,229,216,152,101,15,15,203,250,66,
44,170,246,221,164,66,88,111,57,33,51,102,180,94,178,38,146,149,128,1,196,241,46,55,51,35,189,74,69,148,10,5,46,151,203,94,119,119,119,117,126,146,50,15,200,122,0,131,130,153,175,78,82,175,166,129,199,
178,44,91,74,105,51,0,251,236,89,41,102,102,4,146,33,150,186,82,129,9,130,185,169,108,139,58,72,163,78,41,52,112,99,129,49,152,214,122,201,70,150,172,20,12,6,0,34,216,65,32,114,83,83,146,153,81,169,84,
188,54,149,196,52,253,189,90,48,243,22,102,118,90,197,15,219,182,109,33,132,0,0,251,179,207,44,40,53,91,152,104,124,28,106,98,226,146,146,23,154,73,53,168,153,215,162,8,211,74,253,69,194,72,55,210,26,
249,169,41,11,0,130,32,176,163,40,18,45,128,32,97,176,69,48,243,85,173,2,58,51,195,182,109,7,0,33,138,96,143,140,200,250,39,33,154,156,68,245,195,15,147,18,45,190,14,146,254,111,185,86,195,116,16,252,
197,194,168,63,151,157,153,145,194,24,68,74,201,48,12,219,245,147,8,102,190,74,24,99,6,219,244,10,146,148,82,130,136,200,247,201,186,112,65,212,255,176,81,10,83,191,253,45,116,169,212,56,46,180,138,25,
117,53,243,40,8,48,57,53,133,233,74,229,47,46,102,52,59,231,85,171,66,40,69,70,107,17,134,161,228,184,173,164,85,205,125,80,48,115,95,171,248,1,128,44,203,146,12,48,85,171,68,165,146,152,19,208,137,80,
126,231,29,76,30,57,114,249,83,223,42,102,36,32,76,24,162,52,49,129,11,197,34,42,213,234,95,68,106,219,233,57,25,4,66,134,33,25,102,74,128,180,107,253,237,147,204,156,71,11,33,34,18,66,88,0,32,42,21,34,
223,167,203,178,138,48,196,216,193,131,0,51,186,247,236,137,63,75,219,164,230,87,244,146,2,104,223,71,101,108,12,165,209,81,4,149,202,236,116,131,191,22,24,72,198,114,201,40,34,102,70,20,69,86,221,67,
222,76,242,146,153,179,117,223,55,71,146,6,69,34,34,193,0,168,90,37,10,67,186,172,0,68,136,102,102,112,254,217,103,81,126,255,125,116,239,217,3,167,183,23,148,186,41,173,97,162,8,170,92,70,48,62,142,234,
249,243,168,22,139,8,42,149,216,114,234,38,197,252,85,192,192,108,96,39,43,138,136,1,40,165,132,49,166,213,108,3,6,144,149,198,152,118,35,224,137,146,137,33,20,4,4,99,192,137,2,231,187,46,29,4,152,124,
243,77,76,255,219,191,193,233,235,131,44,20,64,82,194,132,33,84,165,130,168,84,130,170,86,161,211,233,105,68,179,35,206,255,218,96,0,113,187,150,80,138,24,128,214,90,116,96,33,82,50,115,203,1,212,105,
28,97,0,233,108,87,106,82,128,20,140,9,2,212,70,70,192,35,35,151,95,211,0,194,95,35,12,142,149,7,50,134,18,55,77,173,134,144,38,98,201,54,196,46,17,93,168,143,111,50,55,111,89,110,124,45,194,168,251,140,
19,61,182,211,53,0,72,102,214,104,50,164,180,62,3,0,0,99,89,204,243,252,253,154,184,241,53,6,163,190,92,44,46,213,18,58,0,162,165,49,70,33,30,46,223,248,10,173,57,233,217,2,59,14,179,16,32,230,134,113,
228,255,195,152,235,190,153,8,218,178,24,204,32,34,211,129,149,40,201,204,85,196,47,147,108,120,165,214,154,181,214,6,204,48,158,199,198,182,89,212,106,52,191,0,171,5,99,181,21,223,234,156,182,44,86,82,
50,0,8,33,76,82,215,104,150,105,17,128,170,96,230,114,171,10,139,49,134,149,82,26,204,48,217,44,155,76,134,87,251,198,235,97,240,50,255,214,98,207,129,25,74,74,142,164,100,196,213,7,157,142,77,104,177,
149,5,51,79,52,235,75,55,198,64,107,205,81,20,41,48,147,201,102,217,228,243,102,173,192,168,151,181,4,35,61,23,57,142,81,182,205,68,196,82,74,213,65,223,250,132,52,198,20,209,66,152,153,131,32,80,204,
204,236,186,80,253,253,198,254,228,147,53,1,99,190,133,172,21,24,169,212,50,25,163,44,139,69,242,186,40,190,244,26,169,102,82,148,204,60,2,52,159,115,206,204,240,125,63,100,102,102,41,41,218,184,81,121,
128,187,22,96,204,41,231,26,130,145,238,171,93,93,202,16,65,10,161,44,203,210,109,234,33,6,192,136,100,230,211,136,95,50,236,52,1,66,181,90,45,82,74,25,203,113,172,112,104,72,179,148,241,96,234,85,134,
49,223,58,214,10,12,6,192,66,160,220,221,173,1,64,74,25,165,89,86,11,9,1,156,150,204,60,12,160,194,204,110,131,251,3,0,248,190,31,133,97,24,101,108,219,138,174,190,90,233,174,46,35,38,39,69,125,234,187,
154,48,120,222,182,218,48,0,32,116,93,83,46,20,20,0,56,142,227,3,224,22,22,66,68,84,1,48,44,140,49,69,99,204,88,171,65,114,81,20,153,106,181,26,192,24,82,253,253,38,218,180,73,161,195,130,174,4,140,249,
178,218,48,192,140,74,87,151,242,179,89,67,0,187,174,235,183,234,226,72,154,85,198,140,49,69,1,96,134,153,63,229,54,163,22,103,102,102,170,198,24,54,158,199,254,142,29,209,114,251,236,133,192,104,102,
33,171,1,35,61,158,234,239,143,148,101,177,180,172,200,182,237,48,121,55,100,171,12,235,83,0,51,34,153,167,240,33,183,158,49,69,165,82,201,143,162,40,2,128,96,215,174,208,228,114,12,230,53,3,163,94,86,
19,6,0,68,142,195,147,3,3,97,210,253,93,19,66,180,75,121,13,51,127,104,140,49,233,200,197,15,140,49,37,99,12,53,233,198,69,173,86,83,229,114,217,135,49,20,14,13,233,112,203,150,104,45,193,88,233,56,210,
236,51,48,163,220,211,19,149,187,187,53,1,236,121,94,21,73,252,104,178,81,162,251,15,140,49,179,99,123,207,36,91,211,193,14,90,107,51,57,57,89,102,99,140,201,100,184,186,103,79,192,241,64,148,53,1,99,
190,172,6,12,6,96,136,112,97,227,198,64,73,201,210,178,34,215,117,107,109,220,149,168,211,255,236,232,247,50,51,191,221,46,240,76,77,77,213,124,223,15,193,140,218,205,55,135,106,112,112,246,229,43,171,
13,99,165,226,72,203,207,152,81,203,231,245,197,141,27,67,48,195,117,221,114,7,238,138,153,249,109,173,117,25,0,196,99,143,61,150,206,15,121,139,153,43,173,220,150,239,251,106,98,98,162,12,99,160,6,6,
76,245,11,95,240,215,18,140,122,89,105,24,156,220,195,133,77,155,124,63,155,53,130,72,123,158,87,78,155,160,154,185,43,102,174,48,243,91,68,132,199,30,123,108,206,12,170,143,140,49,127,110,55,70,235,194,
133,11,165,32,8,34,0,168,236,221,27,68,235,215,107,212,89,201,106,194,88,78,215,213,246,122,102,212,114,57,93,28,26,10,24,128,227,56,21,219,182,131,54,13,138,34,209,249,71,169,167,169,159,99,88,102,230,
215,219,100,91,168,84,42,225,196,196,68,9,198,64,109,216,160,43,123,247,250,188,200,126,241,229,128,177,28,174,171,163,235,137,80,28,26,242,171,249,188,22,128,206,100,50,211,109,66,64,154,93,189,158,232,
254,18,144,39,158,120,34,189,224,40,51,23,219,212,73,80,44,22,103,130,32,136,24,64,229,75,95,242,195,45,91,212,66,83,224,229,132,81,47,43,1,35,205,172,70,175,185,198,7,0,199,113,202,82,74,191,131,214,
221,98,162,115,60,241,196,19,151,128,196,223,201,0,112,134,153,223,168,75,135,27,198,146,114,185,28,142,141,141,77,193,24,168,190,62,51,115,207,61,85,227,186,220,169,235,90,110,24,141,92,216,178,89,6,
0,37,37,15,95,119,93,45,200,100,140,32,82,158,231,77,1,104,55,74,81,48,243,27,137,206,103,203,57,59,226,228,248,241,227,248,252,231,63,207,204,92,66,188,10,142,135,22,82,171,213,162,66,161,144,113,108,
219,142,214,175,215,214,196,132,176,207,156,177,219,117,237,206,194,88,169,118,176,101,134,1,102,140,109,217,226,159,219,190,189,6,0,158,231,77,56,142,83,174,87,114,3,33,0,83,204,252,207,204,92,252,193,
15,126,48,251,65,163,193,13,31,50,243,239,218,5,119,223,247,245,240,240,240,132,82,202,176,148,152,254,218,215,170,237,92,215,74,194,184,18,215,181,16,24,229,222,94,53,188,115,103,213,8,1,203,178,170,
142,227,76,183,113,85,105,221,227,119,136,151,81,154,35,141,222,6,164,152,249,231,204,124,177,85,44,1,128,139,23,47,86,138,197,226,20,27,3,213,223,111,166,30,120,160,172,11,5,211,200,117,93,6,99,137,234,
47,157,88,196,114,193,8,61,207,156,222,189,187,92,203,229,12,1,202,117,221,139,68,212,238,237,123,148,232,246,231,198,24,53,255,109,64,115,6,201,189,251,238,187,184,229,150,91,64,68,23,153,185,159,153,
119,183,203,20,42,149,74,144,207,231,93,207,117,157,104,96,192,24,219,102,247,227,143,29,40,69,115,6,196,173,176,101,44,38,5,94,200,247,106,41,249,204,238,221,149,11,155,55,135,196,204,142,227,92,76,93,
85,59,235,0,240,34,17,253,130,153,249,135,63,252,97,115,32,0,240,206,59,239,224,166,155,110,98,102,62,15,224,139,0,122,154,220,31,0,64,41,197,181,90,45,44,20,10,89,41,165,21,110,218,164,160,20,156,207,
62,179,145,140,176,88,45,24,11,73,129,23,242,189,134,136,71,118,236,168,142,108,223,94,99,34,72,41,103,28,199,153,104,19,55,128,216,35,157,97,230,199,152,121,170,209,123,23,27,14,35,189,229,150,91,96,
140,153,70,220,173,120,27,90,188,155,17,0,130,32,208,97,24,70,221,133,66,150,164,20,193,53,215,40,242,125,114,206,156,177,83,32,115,110,50,137,51,43,5,8,109,174,91,32,12,140,110,219,86,27,222,181,171,
102,132,128,37,68,197,113,156,49,160,163,87,175,43,0,79,49,243,239,137,8,39,78,156,232,12,200,137,19,39,112,243,205,55,3,241,178,164,215,34,94,147,182,41,126,102,70,181,90,141,180,214,186,208,213,149,
37,219,166,224,218,107,21,133,33,156,225,97,9,99,104,53,7,214,53,2,179,72,24,92,220,190,189,118,118,247,238,170,182,44,38,34,223,182,237,49,34,82,104,47,22,226,85,68,255,55,128,104,190,171,106,9,4,0,110,
188,241,70,32,94,145,108,152,153,111,99,230,66,179,120,146,74,185,92,14,140,49,186,171,171,43,11,219,38,127,235,86,197,0,156,179,103,109,210,154,86,107,96,91,253,249,197,6,112,45,37,159,223,185,179,122,
238,134,27,106,218,178,152,0,95,74,89,36,162,176,195,172,106,4,192,255,4,112,158,153,241,222,123,239,45,12,200,123,239,189,135,27,111,188,17,90,235,139,68,84,67,28,79,218,190,188,191,84,42,197,80,242,
249,12,217,54,249,215,94,27,233,108,214,216,195,195,182,240,253,203,231,150,172,32,32,44,230,59,152,17,102,50,102,248,166,155,42,163,59,118,212,76,188,24,128,111,89,86,145,136,130,118,250,64,92,231,8,
1,252,179,214,250,40,17,225,71,63,250,81,211,139,91,78,69,72,161,0,248,12,113,112,223,213,65,1,80,42,149,130,40,138,84,46,151,203,88,82,138,96,243,102,21,110,216,160,236,98,49,158,82,13,172,202,48,208,
78,130,251,124,24,149,190,62,117,250,11,95,40,77,12,13,133,201,185,42,17,21,137,40,236,68,23,9,144,23,0,252,95,34,210,201,226,6,139,3,2,0,39,79,158,196,238,221,187,53,226,69,175,62,199,204,155,113,249,
67,55,71,210,230,149,90,173,22,100,179,89,87,74,41,163,129,1,83,219,182,45,20,97,72,242,194,5,73,243,211,226,101,134,49,167,124,109,174,7,51,140,109,243,248,214,173,254,233,61,123,202,149,117,235,116,
226,174,75,0,198,136,40,234,132,68,146,226,30,3,240,40,128,114,221,58,44,139,7,2,0,55,220,112,3,0,212,0,124,148,212,77,6,90,213,79,82,169,86,171,81,169,84,170,185,174,43,93,199,113,76,54,203,181,237,219,
195,168,191,95,203,201,73,75,148,74,2,201,72,250,213,74,129,231,92,159,148,165,186,110,157,26,190,229,150,74,241,250,235,107,145,235,50,140,209,108,204,4,51,95,4,208,246,181,235,117,245,141,63,1,248,39,
0,231,1,224,253,247,223,95,26,32,239,191,255,62,110,184,225,6,48,243,20,98,247,117,11,128,110,180,177,20,0,8,195,80,79,77,77,85,152,217,100,60,207,37,41,69,176,97,131,174,238,216,17,106,215,101,57,53,
101,137,90,109,214,141,45,23,140,249,50,223,53,1,64,208,213,165,199,174,191,190,54,124,235,173,149,242,192,128,98,0,108,140,175,181,30,99,230,153,78,238,55,145,116,201,163,127,98,230,15,1,224,39,63,249,
73,71,255,216,17,144,20,202,174,93,187,192,204,69,196,233,240,45,0,186,58,41,164,214,154,103,102,102,106,149,74,197,119,28,71,218,82,218,156,201,160,118,205,53,81,117,251,246,80,123,158,17,229,178,101,
249,190,224,244,173,63,75,61,247,176,17,160,196,34,130,238,110,61,190,99,71,237,220,158,61,149,169,161,161,80,199,235,28,106,173,245,148,82,234,2,51,119,18,188,235,97,140,38,48,142,3,241,98,106,157,202,
130,151,205,59,112,224,0,194,48,132,227,56,119,50,243,130,151,205,147,82,138,254,254,254,174,254,254,254,30,207,243,92,70,28,115,172,137,9,145,249,240,67,39,251,199,63,186,206,232,168,77,181,26,205,186,
179,43,168,229,207,249,172,174,253,44,114,93,174,173,91,23,77,13,13,5,211,87,95,29,250,185,156,1,0,163,181,81,74,85,149,82,147,90,235,218,2,213,35,0,140,18,209,247,195,48,124,195,113,28,180,91,81,231,
138,129,0,192,131,15,62,8,165,20,164,148,183,39,80,22,188,176,164,235,186,114,221,186,117,93,125,125,125,5,199,113,92,16,65,51,131,106,53,114,70,71,45,239,212,41,199,59,115,198,182,199,199,165,168,86,
5,105,29,199,167,250,121,33,205,64,213,181,4,164,80,141,101,65,121,158,241,123,122,84,121,195,134,104,102,227,198,176,214,219,171,211,85,63,217,24,163,148,170,133,97,56,165,181,174,114,7,237,32,13,96,
12,19,209,247,149,82,199,164,148,45,87,210,89,82,32,0,176,127,255,126,104,173,33,132,184,25,139,88,122,53,189,95,215,117,101,111,111,111,174,167,167,167,203,243,60,143,136,132,73,214,47,164,32,32,107,
106,74,216,99,99,210,41,22,45,251,226,69,41,103,102,132,168,213,4,133,33,145,214,84,255,110,198,212,154,140,148,172,109,155,149,231,153,48,159,55,65,119,183,170,173,91,167,107,61,61,42,200,231,141,150,
50,78,72,140,129,86,74,41,165,170,97,24,206,40,165,106,28,47,120,182,232,165,87,141,49,39,44,203,194,243,207,63,191,40,189,94,209,226,196,223,250,214,183,82,101,44,122,113,226,228,255,89,74,105,229,114,
57,175,80,40,228,114,185,92,214,182,109,155,136,4,199,35,98,96,140,1,148,2,133,33,145,239,199,91,178,30,110,253,226,196,218,178,226,5,137,29,135,149,109,179,150,146,77,242,29,204,12,214,26,90,107,173,
148,242,195,48,172,134,97,88,209,90,135,204,204,180,192,101,61,209,96,113,98,34,194,11,47,188,176,104,157,94,241,242,221,117,235,136,247,1,120,132,153,23,189,124,119,170,20,219,182,45,207,243,156,92,46,
151,201,100,50,158,109,219,142,101,89,86,242,70,9,74,27,39,231,244,245,167,199,233,40,143,100,111,140,97,19,3,80,81,20,5,97,24,250,81,20,249,74,169,112,145,214,144,138,0,16,16,209,156,229,187,147,117,
229,87,15,72,42,247,223,127,63,0,184,204,188,36,11,220,39,62,156,132,16,36,165,180,108,219,150,142,227,72,41,165,45,165,148,66,8,43,121,135,23,33,129,148,188,80,210,104,173,83,6,74,41,21,41,165,148,214,
90,153,120,62,0,47,193,125,207,46,112,79,68,175,2,8,94,122,233,165,37,209,227,146,1,1,128,111,124,227,27,32,34,36,43,187,61,2,96,47,226,41,215,11,182,150,122,169,139,175,233,1,17,17,26,185,152,52,24,167,
187,250,235,151,64,4,226,6,215,163,0,158,22,66,252,137,153,241,242,203,47,47,153,14,151,20,8,0,220,119,223,125,233,97,14,192,61,0,30,98,230,33,52,110,231,251,75,17,66,12,245,12,128,131,0,94,5,80,1,128,
95,254,242,151,75,254,67,203,34,247,222,123,47,152,25,66,136,205,0,30,228,120,153,159,117,192,156,101,108,215,186,16,98,171,184,72,68,191,6,112,200,24,115,150,136,240,171,95,253,106,217,126,112,89,229,
222,123,239,5,98,159,187,147,153,191,137,120,136,81,47,214,54,152,20,196,36,128,215,137,232,69,196,35,68,244,114,129,168,255,225,21,145,123,238,185,7,136,251,83,118,2,216,7,224,78,0,131,201,141,175,5,
56,41,4,3,160,8,224,13,0,135,17,131,80,175,190,250,234,138,21,98,69,229,238,187,239,70,114,227,155,17,67,249,50,128,109,204,156,75,202,179,146,112,82,8,156,76,186,252,51,226,110,214,55,0,156,5,96,126,
253,235,95,175,168,126,86,28,72,42,119,221,117,23,222,124,243,77,236,221,187,55,15,224,58,102,254,34,128,91,1,12,33,110,180,20,184,188,197,124,41,238,55,221,12,128,18,226,134,210,183,137,232,45,0,31,29,
61,122,180,124,199,29,119,224,200,145,35,171,162,151,85,3,82,47,95,249,202,87,226,194,16,229,147,14,176,93,136,93,219,86,196,111,124,206,33,158,71,159,142,126,105,213,178,94,127,95,233,222,32,238,70,173,
0,24,3,112,10,177,43,250,128,136,206,50,115,25,0,126,251,219,223,174,182,42,214,6,144,122,89,191,126,61,118,239,222,13,196,75,105,20,16,199,153,171,1,108,1,112,85,242,119,31,128,60,226,183,24,73,92,234,
70,208,136,135,218,84,1,148,17,215,158,139,0,70,0,156,70,220,71,81,36,162,25,0,230,228,201,147,24,27,27,91,237,91,158,35,255,15,193,5,93,135,158,222,134,71,0,0,0,37,116,69,88,116,100,97,116,101,58,99,
114,101,97,116,101,0,50,48,49,49,45,48,54,45,50,49,84,48,49,58,50,56,58,52,51,45,48,55,58,48,48,226,216,222,57,0,0,0,37,116,69,88,116,100,97,116,101,58,109,111,100,105,102,121,0,50,48,49,49,45,48,54,45,
50,49,84,48,49,58,50,56,58,52,51,45,48,55,58,48,48,147,133,102,133,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,
0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::ledredoffth_png = (const char*) resource_AiassAudioProcessorEditor_ledredoffth_png;
const int AiassAudioProcessorEditor::ledredoffth_pngSize = 8203;

// JUCER_RESOURCE: commoFinal2_png, 21153, "../../../../../Pictures/Bilder und Grafiken/Für Programmierprojekte/commo final2.png"
static const unsigned char resource_AiassAudioProcessorEditor_commoFinal2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,198,0,0,0,80,8,6,0,0,0,26,200,179,194,0,0,10,55,105,67,67,80,115,
82,71,66,32,73,69,67,54,49,57,54,54,45,50,46,49,0,0,120,156,157,150,119,84,83,217,22,135,207,189,55,189,80,146,16,138,148,208,107,104,82,2,72,13,189,72,145,46,42,49,9,16,74,192,144,0,34,54,68,84,112,68,
81,145,166,8,50,40,224,128,163,67,145,177,34,138,133,1,81,177,235,4,25,68,212,113,112,20,27,150,73,100,173,25,223,188,121,239,205,155,223,31,247,126,107,159,189,207,221,103,239,125,214,186,0,144,252,131,
5,194,76,88,9,128,12,161,88,20,225,231,197,136,141,139,103,96,7,1,12,240,0,3,108,0,224,112,179,179,66,22,248,70,2,153,2,124,216,140,108,153,19,248,23,189,186,14,32,249,251,42,211,63,140,193,0,255,159,
148,185,89,34,49,0,80,152,140,231,242,248,217,92,25,23,201,56,61,87,156,37,183,79,201,152,182,52,77,206,48,74,206,34,89,130,50,86,147,115,242,44,91,124,246,153,101,15,57,243,50,132,60,25,203,115,206,226,
101,240,228,220,39,227,141,57,18,190,140,145,96,25,23,231,8,248,185,50,190,38,99,131,116,73,134,64,198,111,228,177,25,124,78,54,0,40,146,220,46,230,115,83,100,108,45,99,146,40,50,130,45,227,121,0,224,
72,201,95,240,210,47,88,204,207,19,203,15,197,206,204,90,46,18,36,167,136,25,38,92,83,134,141,147,19,139,225,207,207,77,231,139,197,204,48,14,55,141,35,226,49,216,153,25,89,28,225,114,0,102,207,252,89,
20,121,109,25,178,34,59,216,56,57,56,48,109,45,109,190,40,212,127,93,252,155,146,247,118,150,94,132,127,238,25,68,31,248,195,246,87,126,153,13,0,176,166,101,181,217,250,135,109,105,21,0,93,235,1,80,187,
253,135,205,96,47,0,138,178,190,117,14,125,113,30,186,124,94,82,196,226,44,103,43,171,220,220,92,75,1,159,107,41,47,232,239,250,159,14,127,67,95,124,207,82,190,221,239,229,97,120,243,147,56,146,116,49,
67,94,55,110,102,122,166,68,196,200,206,226,112,249,12,230,159,135,248,31,7,254,117,30,22,17,252,36,190,136,47,148,69,68,203,166,76,32,76,150,181,91,200,19,136,5,153,66,134,64,248,159,154,248,15,195,254,
164,217,185,150,137,218,248,17,208,150,88,2,165,33,26,64,126,30,0,40,42,17,32,9,123,100,43,208,239,125,11,198,71,3,249,205,139,209,153,152,157,251,207,130,254,125,87,184,76,254,200,22,36,127,142,99,71,
68,50,184,18,81,206,236,154,252,90,2,52,32,0,69,64,3,234,64,27,232,3,19,192,4,182,192,17,184,0,15,224,3,2,65,40,136,4,113,96,49,224,130,20,144,1,68,32,23,20,128,181,160,24,148,130,173,96,39,168,6,117,
160,17,52,131,54,112,24,116,129,99,224,52,56,7,46,129,203,96,4,220,1,82,48,14,158,128,41,240,10,204,64,16,132,133,200,16,21,82,135,116,32,67,200,28,178,133,88,144,27,228,3,5,67,17,80,28,148,8,37,67,66,
72,2,21,64,235,160,82,168,28,170,134,234,161,102,232,91,232,40,116,26,186,0,13,67,183,160,81,104,18,250,21,122,7,35,48,9,166,193,90,176,17,108,5,179,96,79,56,8,142,132,23,193,201,240,50,56,31,46,130,183,
192,149,112,3,124,16,238,132,79,195,151,224,17,88,10,63,129,167,17,128,16,17,58,162,139,48,17,22,194,70,66,145,120,36,9,17,33,171,144,18,164,2,105,64,218,144,30,164,31,185,138,72,145,167,200,91,20,6,69,
69,49,80,76,148,11,202,31,21,133,226,162,150,161,86,161,54,163,170,81,7,80,157,168,62,212,85,212,40,106,10,245,17,77,70,107,162,205,209,206,232,0,116,44,58,25,157,139,46,70,87,160,155,208,29,232,179,232,
17,244,56,250,21,6,131,161,99,140,49,142,24,127,76,28,38,21,179,2,179,25,179,27,211,142,57,133,25,198,140,97,166,177,88,172,58,214,28,235,138,13,197,114,176,98,108,49,182,10,123,16,123,18,123,5,59,142,
125,131,35,226,116,112,182,56,95,92,60,78,136,43,196,85,224,90,112,39,112,87,112,19,184,25,188,18,222,16,239,140,15,197,243,240,203,241,101,248,70,124,15,126,8,63,142,159,33,40,19,140,9,174,132,72,66,
42,97,45,161,146,208,70,56,75,184,75,120,65,36,18,245,136,78,196,112,162,128,184,134,88,73,60,68,60,79,28,37,190,37,81,72,102,36,54,41,129,36,33,109,33,237,39,157,34,221,34,189,32,147,201,70,100,15,114,
60,89,76,222,66,110,38,159,33,223,39,191,81,160,42,88,42,4,40,240,20,86,43,212,40,116,42,92,81,120,166,136,87,52,84,244,84,92,172,152,175,88,161,120,68,113,72,241,169,18,94,201,72,137,173,196,81,90,165,
84,163,116,84,233,134,210,180,50,85,217,70,57,84,57,67,121,179,114,139,242,5,229,71,20,44,197,136,226,67,225,81,138,40,251,40,103,40,99,84,132,170,79,101,83,185,212,117,212,70,234,89,234,56,13,67,51,166,
5,208,82,105,165,180,111,104,131,180,41,21,138,138,157,74,180,74,158,74,141,202,113,21,41,29,161,27,209,3,232,233,244,50,250,97,250,117,250,59,85,45,85,79,85,190,234,38,213,54,213,43,170,175,213,230,168,
121,168,241,213,74,212,218,213,70,212,222,169,51,212,125,212,211,212,183,169,119,169,223,211,64,105,152,105,132,107,228,106,236,209,56,171,241,116,14,109,142,203,28,238,156,146,57,135,231,220,214,132,
53,205,52,35,52,87,104,238,211,28,208,156,214,210,214,242,211,202,210,170,210,58,163,245,84,155,174,237,161,157,170,189,67,251,132,246,164,14,85,199,77,71,160,179,67,231,164,206,99,134,10,195,147,145,
206,168,100,244,49,166,116,53,117,253,117,37,186,245,186,131,186,51,122,198,122,81,122,133,122,237,122,247,244,9,250,44,253,36,253,29,250,189,250,83,6,58,6,33,6,5,6,173,6,183,13,241,134,44,195,20,195,
93,134,253,134,175,141,140,141,98,140,54,24,117,25,61,50,86,51,14,48,206,55,110,53,190,107,66,54,113,55,89,102,210,96,114,205,20,99,202,50,77,51,221,109,122,217,12,54,179,55,75,49,171,49,27,50,135,205,
29,204,5,230,187,205,135,45,208,22,78,22,66,139,6,139,27,76,18,211,147,153,195,108,101,142,90,210,45,131,45,11,45,187,44,159,89,25,88,197,91,109,179,234,183,250,104,109,111,157,110,221,104,125,199,134,
98,19,104,83,104,211,99,243,171,173,153,45,215,182,198,246,218,92,242,92,223,185,171,231,118,207,125,110,103,110,199,183,219,99,119,211,158,106,31,98,191,193,190,215,254,131,131,163,131,200,161,205,97,
210,209,192,49,209,177,214,241,6,139,198,10,99,109,102,157,119,66,59,121,57,173,118,58,230,244,214,217,193,89,236,124,216,249,23,23,166,75,154,75,139,203,163,121,198,243,248,243,26,231,141,185,234,185,
114,92,235,93,165,110,12,183,68,183,189,110,82,119,93,119,142,123,131,251,3,15,125,15,158,71,147,199,132,167,169,103,170,231,65,207,103,94,214,94,34,175,14,175,215,108,103,246,74,246,41,111,196,219,207,
187,196,123,208,135,226,19,229,83,237,115,223,87,207,55,217,183,213,119,202,207,222,111,133,223,41,127,180,127,144,255,54,255,27,1,90,1,220,128,230,128,169,64,199,192,149,129,125,65,164,160,5,65,213,65,
15,130,205,130,69,193,61,33,112,72,96,200,246,144,187,243,13,231,11,231,119,133,130,208,128,208,237,161,247,194,140,195,150,133,125,31,142,9,15,11,175,9,127,24,97,19,81,16,209,191,128,186,96,201,130,150,
5,175,34,189,34,203,34,239,68,153,68,73,162,122,163,21,163,19,162,155,163,95,199,120,199,148,199,72,99,173,98,87,198,94,138,211,136,19,196,117,199,99,227,163,227,155,226,167,23,250,44,220,185,112,60,193,
62,161,56,225,250,34,227,69,121,139,46,44,214,88,156,190,248,248,18,197,37,156,37,71,18,209,137,49,137,45,137,239,57,161,156,6,206,244,210,128,165,181,75,167,184,108,238,46,238,19,158,7,111,7,111,146,
239,202,47,231,79,36,185,38,149,39,61,74,118,77,222,158,60,153,226,158,82,145,242,84,192,22,84,11,158,167,250,167,214,165,190,78,11,77,219,159,246,41,61,38,189,61,3,151,145,152,113,84,72,17,166,9,251,
50,181,51,243,50,135,179,204,179,138,179,164,203,156,151,237,92,54,37,10,18,53,101,67,217,139,178,187,197,52,217,207,212,128,196,68,178,94,50,154,227,150,83,147,243,38,55,58,247,72,158,114,158,48,111,
96,185,217,242,77,203,39,242,125,243,191,94,129,90,193,93,209,91,160,91,176,182,96,116,165,231,202,250,85,208,170,165,171,122,87,235,175,46,90,61,190,198,111,205,129,181,132,181,105,107,127,40,180,46,
44,47,124,185,46,102,93,79,145,86,209,154,162,177,245,126,235,91,139,21,138,69,197,55,54,184,108,168,219,136,218,40,216,56,184,105,238,166,170,77,31,75,120,37,23,75,173,75,43,74,223,111,230,110,190,248,
149,205,87,149,95,125,218,146,180,101,176,204,161,108,207,86,204,86,225,214,235,219,220,183,29,40,87,46,207,47,31,219,30,178,189,115,7,99,71,201,142,151,59,151,236,188,80,97,87,81,183,139,176,75,178,75,
90,25,92,217,93,101,80,181,181,234,125,117,74,245,72,141,87,77,123,173,102,237,166,218,215,187,121,187,175,236,241,216,211,86,167,85,87,90,247,110,175,96,239,205,122,191,250,206,6,163,134,138,125,152,
125,57,251,30,54,70,55,246,127,205,250,186,185,73,163,169,180,233,195,126,225,126,233,129,136,3,125,205,142,205,205,45,154,45,101,173,112,171,164,117,242,96,194,193,203,223,120,127,211,221,198,108,171,
111,167,183,151,30,2,135,36,135,30,127,155,248,237,245,195,65,135,123,143,176,142,180,125,103,248,93,109,7,181,163,164,19,234,92,222,57,213,149,210,37,237,142,235,30,62,26,120,180,183,199,165,167,227,
123,203,239,247,31,211,61,86,115,92,229,120,217,9,194,137,162,19,159,78,230,159,156,62,149,117,234,233,233,228,211,99,189,75,122,239,156,137,61,115,173,47,188,111,240,108,208,217,243,231,124,207,157,233,
247,236,63,121,222,245,252,177,11,206,23,142,94,100,93,236,186,228,112,169,115,192,126,160,227,7,251,31,58,6,29,6,59,135,28,135,186,47,59,93,238,25,158,55,124,226,138,251,149,211,87,189,175,158,187,22,
112,237,210,200,252,145,225,235,81,215,111,222,72,184,33,189,201,187,249,232,86,250,173,231,183,115,110,207,220,89,115,23,125,183,228,158,210,189,138,251,154,247,27,126,52,253,177,93,234,32,61,62,234,
61,58,240,96,193,131,59,99,220,177,39,63,101,255,244,126,188,232,33,249,97,197,132,206,68,243,35,219,71,199,38,125,39,47,63,94,248,120,252,73,214,147,153,167,197,63,43,255,92,251,204,228,217,119,191,120,
252,50,48,21,59,53,254,92,244,252,211,175,155,95,168,191,216,255,210,238,101,239,116,216,244,253,87,25,175,102,94,151,188,81,127,115,224,45,235,109,255,187,152,119,19,51,185,239,177,239,43,63,152,126,
232,249,24,244,241,238,167,140,79,159,126,3,247,132,243,251,143,112,102,42,0,0,0,9,112,72,89,115,0,0,46,35,0,0,46,35,1,120,165,63,118,0,0,32,0,73,68,65,84,120,156,237,157,7,124,83,213,23,199,207,75,210,
150,81,246,148,165,178,65,246,222,27,101,87,65,44,173,180,238,61,248,131,34,136,40,200,86,64,4,20,28,40,202,174,200,166,32,162,128,236,173,32,83,16,148,189,167,140,142,228,253,239,239,182,41,105,154,228,
221,151,188,151,22,189,95,62,143,52,201,203,125,55,47,111,156,123,238,57,191,99,83,85,149,50,27,139,197,162,116,239,222,190,160,205,97,43,96,13,113,228,87,85,75,30,69,165,92,14,11,229,178,168,20,166,42,
100,83,84,213,198,122,106,83,20,246,168,42,22,246,232,32,213,226,80,73,117,40,68,201,120,36,197,226,96,159,75,118,40,142,100,197,161,36,43,164,38,58,20,37,217,162,42,14,213,194,222,103,176,239,235,96,
237,243,191,21,197,193,218,81,44,252,111,7,255,48,127,174,56,28,252,53,182,2,123,45,229,253,148,117,212,180,245,93,113,160,29,202,248,186,55,20,214,127,246,159,216,250,232,187,146,210,119,205,85,217,62,
176,164,126,183,116,175,227,59,179,111,37,210,134,69,197,126,205,184,61,213,194,246,181,135,215,93,247,109,186,237,121,232,135,43,86,139,67,115,29,215,246,44,30,182,237,117,125,214,184,234,112,8,182,109,
113,88,173,226,109,75,196,176,219,113,142,58,132,207,9,81,20,92,44,236,198,183,11,112,174,123,58,191,141,0,251,130,117,219,180,182,205,232,183,243,154,104,116,187,188,109,215,235,172,196,235,245,85,47,
158,174,199,94,183,41,112,157,150,72,60,129,107,14,179,53,108,236,170,105,101,79,173,176,149,152,41,105,99,199,158,13,175,195,102,131,57,194,237,34,254,158,154,102,35,113,91,141,221,34,20,133,18,152,177,
145,200,142,217,219,118,85,185,198,222,184,166,144,227,146,197,110,63,59,99,254,15,103,29,130,247,112,51,176,5,115,99,29,59,118,12,203,159,155,106,146,98,173,205,140,195,138,164,80,5,246,242,189,61,123,
116,46,201,30,179,19,118,49,97,63,178,7,5,127,165,60,42,252,81,73,121,100,255,43,202,157,55,92,94,165,212,63,216,231,44,105,31,190,211,70,234,122,138,179,193,148,109,145,203,159,22,231,27,46,247,175,116,
87,110,139,66,158,176,144,206,235,187,146,246,159,208,186,138,224,186,10,41,30,155,85,20,209,22,248,202,148,186,131,221,187,145,178,239,4,250,151,126,31,123,195,226,105,51,94,186,148,122,64,8,194,215,
214,101,131,136,183,45,17,195,154,122,46,155,211,184,57,237,154,107,165,89,204,234,54,153,214,115,215,107,162,41,237,75,187,216,137,215,235,171,31,13,9,223,47,132,174,211,18,137,39,44,169,199,206,157,
115,88,81,238,216,32,41,38,142,235,123,119,14,52,215,227,211,146,186,178,213,213,38,99,23,74,102,19,38,198,68,71,252,205,94,222,203,12,238,221,236,141,109,142,155,180,121,230,162,69,23,76,252,82,105,152,
110,24,199,70,69,212,82,137,58,177,253,210,182,64,30,91,61,246,82,40,127,67,158,144,18,137,68,34,145,72,36,146,244,132,50,19,177,28,123,44,199,108,199,135,241,130,53,39,169,177,209,93,246,50,227,241,7,
187,157,22,205,158,187,100,163,89,94,101,83,12,227,174,93,91,229,13,15,11,127,142,13,19,158,100,6,112,101,105,3,75,36,18,137,68,34,145,72,116,114,145,45,183,216,146,151,25,197,85,216,99,21,171,149,222,
236,217,163,243,9,102,40,127,147,96,87,190,140,139,91,116,204,200,13,26,106,24,199,116,236,152,155,242,216,222,9,207,150,235,101,246,52,220,200,182,37,18,137,68,34,145,72,36,255,41,16,191,252,229,141,
132,235,19,20,197,106,205,102,203,81,201,98,81,235,43,138,210,134,25,202,125,195,172,212,47,54,58,98,106,50,37,14,155,53,107,249,113,35,54,104,136,97,140,124,152,232,30,157,159,182,228,177,141,96,79,11,
27,209,166,68,34,145,72,36,18,137,228,63,77,62,69,161,247,195,179,229,234,67,42,77,183,59,40,110,102,220,210,143,28,14,199,88,56,99,213,220,214,14,22,162,246,54,37,116,117,76,84,196,107,211,103,47,90,
30,232,6,3,54,140,163,162,58,87,234,217,163,211,231,236,207,166,129,182,37,145,72,36,18,137,68,34,145,184,145,135,20,122,213,106,165,87,31,239,209,249,80,108,116,196,23,137,225,142,175,227,102,199,207,
97,239,97,161,110,221,218,22,48,98,67,126,27,198,173,90,181,178,149,40,26,254,118,136,98,121,135,61,13,51,162,51,18,137,68,34,145,72,36,18,137,55,82,19,243,70,135,89,67,223,139,137,142,152,236,184,65,
163,161,88,49,111,222,202,139,70,180,239,151,97,220,179,123,151,114,37,138,228,154,201,254,172,107,68,39,36,18,137,68,34,145,72,36,18,29,228,98,70,242,91,214,156,244,66,108,84,196,168,139,215,146,199,
197,199,199,39,4,218,168,110,195,184,103,84,151,30,150,16,229,75,202,194,201,117,208,204,11,15,207,69,217,115,228,160,16,91,8,57,84,149,146,146,18,233,198,141,127,232,214,205,155,153,221,61,137,68,34,
145,72,36,18,137,49,32,204,98,100,129,60,182,158,49,81,29,159,157,62,59,126,115,32,141,233,50,140,99,162,186,12,180,40,202,208,64,54,104,52,161,161,97,84,190,66,37,190,220,123,95,105,42,94,188,36,21,40,
88,136,172,86,207,95,45,33,225,54,157,59,123,134,78,156,56,70,71,254,60,68,127,28,220,71,127,255,117,132,50,177,200,138,68,34,145,72,36,18,137,36,48,30,80,20,219,250,216,232,46,195,18,236,75,135,198,197,
57,236,254,52,34,108,24,199,70,117,233,171,100,17,163,24,198,112,221,122,13,169,65,195,166,84,185,74,117,10,9,9,17,254,108,88,88,54,42,89,234,62,190,52,108,212,140,191,118,253,250,53,218,185,125,11,109,
220,176,134,14,236,223,75,89,161,76,182,68,34,145,72,36,18,137,68,23,86,34,101,80,152,181,83,147,200,200,246,143,197,197,45,191,164,183,1,33,195,56,38,170,203,135,204,40,238,171,191,127,198,146,55,95,
126,106,223,33,130,154,183,104,75,57,114,230,52,172,221,92,185,114,83,243,150,109,249,114,234,212,9,250,97,217,34,90,191,118,53,37,39,39,25,182,13,137,68,34,145,72,36,18,73,48,80,90,135,89,66,183,68,71,
119,108,55,107,86,252,159,122,62,169,105,24,199,70,119,25,154,217,70,49,226,133,35,30,121,140,90,181,105,239,211,59,124,243,198,13,58,113,226,111,58,127,238,44,93,185,114,153,110,221,186,73,118,187,29,
58,203,148,35,71,78,202,155,55,31,21,40,88,152,138,21,43,78,185,243,228,245,216,70,177,98,37,232,233,103,95,97,219,139,164,121,115,103,210,134,117,171,165,7,89,34,145,72,36,18,137,228,110,66,161,178,54,
178,173,139,138,234,242,224,236,217,139,247,136,126,204,167,97,220,51,170,115,119,75,138,28,91,166,128,36,186,102,45,218,80,143,232,39,41,103,206,140,185,126,48,122,247,237,217,69,59,119,108,165,125,251,
126,167,51,167,79,10,27,177,5,10,20,162,138,149,30,160,170,213,107,81,141,154,117,184,225,156,254,253,130,244,252,139,189,168,237,131,29,105,234,87,147,232,175,163,186,6,28,18,137,68,34,145,72,36,146,
204,229,158,16,69,249,57,38,178,99,203,233,113,241,251,68,62,224,213,48,238,217,189,115,105,75,136,101,10,113,201,184,224,147,59,119,30,122,238,133,215,169,58,51,90,221,57,119,246,52,173,92,17,79,27,214,
175,161,127,254,185,238,87,251,23,47,158,231,159,199,2,47,116,157,186,13,233,193,118,157,168,76,217,10,233,214,187,191,116,89,26,60,116,12,205,255,126,54,45,89,52,87,122,143,37,18,137,68,34,145,72,238,
30,10,43,22,219,143,49,143,118,108,48,253,251,248,19,90,43,123,52,140,83,138,119,228,154,206,254,204,109,120,247,4,40,93,186,28,189,222,167,63,229,207,95,48,221,235,231,206,157,161,121,223,205,164,45,
155,215,11,169,72,192,227,12,207,111,66,98,2,93,191,118,205,235,122,73,73,73,180,105,227,90,190,84,170,92,133,186,71,198,82,217,114,119,12,100,132,98,60,250,216,227,84,142,189,54,249,211,143,232,230,205,
27,254,127,57,137,68,144,60,121,243,81,153,50,229,232,158,98,37,168,80,225,34,84,128,157,15,97,217,178,241,228,83,197,162,144,61,57,153,110,223,190,77,87,175,92,102,3,189,11,116,250,212,9,58,118,236,47,
58,113,252,239,76,27,192,225,156,67,56,210,125,247,151,161,34,69,239,161,66,133,138,240,65,110,104,88,24,79,124,85,217,191,164,196,36,126,14,93,190,124,145,46,156,63,71,167,78,158,160,163,71,14,209,165,
75,134,104,179,251,69,169,235,55,40,212,238,160,100,182,95,29,74,166,248,2,36,146,116,88,216,57,172,176,211,248,98,246,48,186,22,42,158,96,46,145,72,60,160,80,113,37,212,22,31,25,217,170,113,92,220,170,
127,124,173,234,209,48,46,86,52,215,107,236,161,17,254,102,231,230,106,118,159,64,33,143,160,232,22,215,170,93,159,94,121,253,77,10,9,9,77,123,13,26,196,139,22,204,165,101,75,23,8,39,196,85,170,92,149,
158,121,238,21,42,92,228,30,254,252,183,95,183,211,231,147,199,209,141,127,124,238,15,218,191,111,15,13,29,220,143,43,94,60,30,251,44,191,169,59,129,247,250,189,33,31,210,152,15,222,231,55,244,172,8,228,
234,222,232,247,158,208,186,91,55,111,160,57,179,190,49,181,63,3,222,29,78,5,11,21,214,92,239,141,94,207,155,102,204,61,249,244,139,84,173,70,109,161,117,135,191,63,128,207,38,100,22,249,243,23,160,166,
205,91,83,221,122,141,168,212,189,247,251,213,6,244,186,113,188,111,92,191,134,246,252,254,91,80,140,228,178,101,43,80,147,102,45,169,86,157,250,148,55,111,126,191,218,192,76,208,182,173,155,104,253,218,
85,116,242,228,113,131,123,232,157,138,151,174,81,187,191,79,5,109,123,18,137,30,174,135,216,232,171,42,101,51,187,27,18,201,191,129,106,97,214,92,95,176,199,104,95,43,101,48,140,163,163,219,151,180,81,
232,16,254,68,85,167,218,21,199,36,27,89,183,153,211,199,244,52,105,218,146,158,125,225,117,238,161,117,114,252,216,95,244,233,196,209,220,171,36,74,225,34,69,233,141,183,222,163,208,208,59,198,53,226,
136,95,121,173,47,125,56,114,144,230,231,97,72,192,123,188,103,207,111,244,212,51,47,243,48,11,39,240,134,189,59,104,20,141,28,62,144,206,156,206,122,55,83,196,100,23,44,168,109,136,130,150,173,31,226,
33,34,137,137,1,23,138,241,74,190,124,5,132,250,3,79,163,25,6,28,98,199,97,104,186,14,180,124,209,188,101,27,190,79,130,13,246,83,215,238,209,252,28,176,90,173,1,181,133,120,252,198,77,90,240,229,20,51,
48,23,204,155,195,103,89,204,160,124,133,202,244,88,143,88,174,35,30,40,24,196,118,236,220,149,47,187,152,97,255,93,220,116,126,254,155,77,190,4,243,142,127,137,36,80,114,37,37,83,136,195,65,73,46,247,
69,137,68,226,55,81,177,81,17,171,166,205,94,52,197,219,10,25,12,99,102,20,143,161,20,239,240,170,253,135,79,191,80,169,220,61,113,102,246,208,73,189,250,141,233,185,23,95,103,6,210,157,147,31,241,191,
83,167,124,202,12,183,68,93,109,53,109,214,58,157,81,236,164,74,213,26,84,164,104,49,58,123,70,204,160,69,248,197,196,143,63,160,46,15,119,167,174,143,70,115,227,13,228,203,95,128,222,126,103,24,247,44,
95,184,144,121,222,69,119,96,80,193,24,18,37,123,246,28,84,175,65,99,238,161,251,183,210,160,81,83,97,163,24,52,109,222,134,27,146,193,12,69,128,49,28,251,228,11,148,45,123,118,195,219,46,86,188,36,189,
242,122,95,106,198,6,7,159,77,30,231,51,164,72,15,136,203,143,238,249,12,181,110,219,222,144,246,220,193,236,12,18,99,17,215,143,223,195,204,2,60,22,153,54,32,201,226,40,50,183,69,34,49,14,133,62,138,
140,140,248,57,46,110,209,81,79,111,167,51,140,99,162,58,54,80,20,91,119,246,231,5,74,76,234,89,190,116,177,250,236,239,71,204,238,99,133,138,149,233,197,87,250,164,51,138,23,45,248,142,203,165,249,67,
174,92,185,188,190,151,59,119,110,97,195,24,192,64,66,95,78,159,58,73,47,189,218,39,173,162,30,140,227,55,251,13,162,247,223,123,139,203,194,101,5,170,215,168,237,85,134,206,27,45,90,62,248,175,54,140,
155,49,67,87,15,136,73,175,90,173,38,237,222,181,211,164,30,165,39,234,241,167,168,125,199,135,77,223,14,140,204,33,195,199,209,135,35,222,163,211,167,79,6,212,86,206,240,112,122,243,173,247,50,36,170,
26,13,102,142,32,155,120,223,125,101,104,194,199,163,120,46,128,25,36,90,165,39,78,146,181,177,43,242,24,149,72,12,36,87,152,149,38,177,71,143,158,157,116,134,49,51,138,71,225,193,65,212,119,214,252,31,
206,244,140,236,60,223,236,222,229,103,134,200,235,189,223,38,155,237,78,87,22,45,136,99,70,241,44,191,219,60,116,232,32,215,60,118,7,229,160,143,31,251,219,175,54,183,110,217,192,63,255,191,55,6,164,
25,199,240,198,61,255,210,255,104,194,184,145,89,66,173,162,169,78,35,16,96,10,28,201,93,72,220,250,183,81,188,68,41,42,93,166,156,238,207,97,176,16,12,195,184,91,247,199,131,98,20,59,129,209,63,224,189,
17,52,132,13,230,206,159,63,235,87,27,240,20,191,209,215,124,163,216,21,120,143,255,215,103,0,141,29,61,140,28,254,85,248,244,201,149,48,241,25,5,137,36,216,36,43,10,217,45,50,33,84,34,49,152,118,49,209,
93,30,153,62,107,241,2,247,55,210,172,209,216,232,206,77,137,44,205,217,159,91,102,205,89,242,109,116,100,199,71,72,161,6,102,246,10,30,161,151,94,233,195,43,207,57,65,213,57,87,163,24,225,11,40,223,140,
27,242,223,127,29,21,74,190,219,180,97,45,15,167,168,252,64,213,116,175,207,156,54,133,110,223,190,37,212,47,36,107,33,158,24,49,154,48,146,48,149,187,235,183,29,244,217,164,113,60,86,217,73,237,58,245,
233,193,118,157,105,197,242,197,34,95,217,52,144,36,88,195,131,180,157,8,45,90,182,165,217,51,167,26,220,163,204,7,225,3,254,80,179,118,61,190,63,175,93,187,106,112,143,238,128,36,83,20,173,9,54,121,242,
228,165,222,111,190,67,131,223,125,83,119,136,18,136,121,226,249,116,138,45,193,2,30,239,168,199,159,164,153,211,191,50,188,237,19,225,57,104,91,145,2,126,127,30,211,220,162,102,139,66,198,79,139,167,
180,233,235,253,140,111,98,125,79,175,139,182,233,218,182,200,122,122,80,40,147,52,66,83,81,83,23,205,245,20,172,39,214,211,148,117,189,109,79,225,239,187,62,119,253,220,45,91,96,57,7,90,184,107,248,187,
131,123,174,183,107,197,189,247,149,166,106,236,220,132,10,13,106,3,64,121,6,235,95,189,122,133,221,175,143,208,158,223,127,165,131,7,246,9,135,66,225,126,95,166,76,121,126,255,189,159,181,137,106,183,
54,91,8,119,74,93,189,122,153,43,238,236,221,179,155,14,236,223,107,202,32,217,157,108,217,178,243,122,7,112,176,20,43,86,146,247,7,85,119,21,246,47,49,41,129,39,243,67,45,235,228,241,99,244,199,31,251,
233,216,223,71,13,115,146,97,95,32,220,209,23,16,38,240,54,147,134,107,61,102,145,239,47,157,162,108,148,147,245,219,106,179,241,125,137,34,104,232,43,146,179,131,85,163,1,223,7,199,73,249,242,149,168,
68,201,123,185,210,18,138,183,193,41,138,239,0,219,236,226,133,243,116,230,204,105,250,243,240,65,250,227,224,62,214,87,115,243,63,216,239,56,170,110,221,186,75,183,109,219,150,110,39,186,120,140,149,
254,196,207,93,71,31,60,177,40,150,33,166,246,136,1,111,89,133,138,15,164,61,71,38,189,171,129,134,120,224,94,125,222,166,18,37,74,241,231,48,84,150,44,250,62,37,20,130,237,228,19,199,254,242,24,227,139,
19,102,204,7,131,169,69,171,7,169,98,197,42,116,139,237,240,181,107,126,162,67,236,192,245,132,243,7,131,71,45,36,52,140,30,98,134,174,171,167,241,240,161,3,52,122,212,251,60,100,98,203,166,245,220,96,
126,164,91,84,218,251,143,245,136,161,61,187,127,13,106,38,189,59,136,45,246,55,105,171,113,211,150,52,55,110,58,187,160,37,27,220,171,204,67,111,188,181,251,103,155,52,107,197,85,80,204,0,23,219,167,
158,121,201,148,182,69,192,69,9,199,111,220,236,111,117,125,174,98,165,42,252,156,202,44,30,106,223,133,118,108,223,194,110,138,194,5,140,132,128,225,177,161,88,33,67,219,148,72,238,6,44,22,43,125,54,
197,247,236,236,242,248,133,233,238,203,184,95,214,111,208,132,58,117,233,230,83,57,7,6,115,231,136,71,185,17,182,112,65,28,15,217,243,102,52,162,77,92,175,59,71,116,103,70,92,113,175,109,214,172,85,143,
175,115,229,202,37,138,95,178,128,126,94,185,204,240,251,22,250,130,112,58,36,167,87,175,81,39,221,108,182,22,151,46,93,224,142,185,31,127,88,202,229,40,3,1,73,235,99,199,127,225,115,29,79,179,235,176,
101,144,23,5,167,157,226,37,4,7,131,15,40,111,33,113,26,9,206,184,215,109,220,240,139,41,51,223,69,138,220,67,173,218,180,163,70,141,155,115,9,82,81,48,24,251,117,231,86,94,179,2,70,178,73,148,175,84,
182,216,19,236,49,93,34,30,255,197,99,35,219,151,37,107,104,123,182,87,102,77,155,189,100,35,57,58,195,234,123,192,83,43,70,1,125,83,87,227,18,7,250,151,159,141,79,251,97,112,194,194,179,5,35,212,9,188,
120,221,35,99,232,173,62,47,242,17,41,166,202,107,148,186,143,142,30,57,204,181,92,93,193,201,242,211,143,203,248,226,11,156,216,8,231,192,232,9,237,196,62,245,66,134,233,247,178,229,42,82,183,238,209,
52,99,90,202,190,91,56,63,142,27,244,149,31,168,198,159,35,185,235,233,231,94,161,97,239,191,157,105,33,21,77,91,232,15,163,112,130,253,138,11,206,182,173,27,13,236,81,230,130,11,154,222,120,107,87,154,
183,104,203,111,8,102,252,158,109,30,236,160,235,2,1,112,188,227,24,197,136,26,35,107,11,51,222,179,51,3,27,163,110,28,195,90,94,31,119,96,100,174,252,49,158,46,93,188,32,252,153,238,145,61,117,109,3,
160,26,229,137,19,199,120,137,246,228,164,36,126,174,192,227,2,89,193,226,37,74,166,133,37,137,130,152,108,120,187,179,66,232,146,68,242,95,3,94,225,23,94,238,205,189,168,162,224,26,133,98,93,144,160,
156,52,113,52,215,94,119,5,247,95,204,28,187,58,201,180,128,36,228,227,49,207,112,99,122,252,71,35,13,147,216,196,61,61,186,231,211,126,75,101,162,246,2,84,117,112,125,253,137,93,95,145,56,28,172,28,36,
204,170,227,250,136,132,104,111,6,177,39,48,35,143,223,20,159,155,244,201,88,195,164,104,225,93,143,100,134,119,163,38,205,117,245,199,9,4,20,48,0,195,130,25,130,233,223,126,97,142,74,145,66,253,35,35,
45,83,227,226,238,76,65,240,187,146,106,9,141,81,136,206,39,56,236,189,45,22,139,242,120,143,206,111,153,61,149,21,25,253,68,58,229,136,47,38,143,167,235,215,239,100,204,99,186,214,213,40,118,130,207,
32,233,13,222,228,1,111,189,70,191,237,220,70,15,84,169,78,217,194,178,209,217,179,167,117,245,1,197,60,46,156,63,79,199,255,249,139,254,185,126,157,31,32,13,26,52,245,184,110,141,90,117,211,12,99,220,
148,191,252,108,2,141,252,112,98,154,146,64,185,242,149,168,78,189,134,180,109,75,240,141,75,20,68,113,122,213,253,5,225,20,255,38,195,184,89,11,255,194,40,156,192,107,129,223,212,232,145,42,188,17,40,
51,46,2,166,31,127,89,179,146,126,94,185,156,27,197,222,64,232,15,116,187,31,233,214,131,203,167,137,0,47,8,102,70,68,67,104,224,133,192,254,16,1,231,49,60,16,27,214,173,230,6,177,55,178,101,203,70,13,
26,53,163,71,186,246,224,201,172,34,160,18,37,110,202,208,27,151,72,36,193,3,73,242,189,122,15,160,112,31,201,237,190,64,168,95,191,119,134,210,200,161,3,211,36,66,161,127,222,187,239,192,116,225,148,
122,192,117,105,224,160,145,92,33,42,144,2,65,97,97,97,204,208,126,214,176,25,49,92,95,219,117,136,224,70,221,39,19,70,123,157,173,54,10,200,125,194,145,136,253,225,47,112,0,14,30,50,154,134,15,25,16,
112,130,54,6,44,112,50,106,133,130,136,130,107,254,208,17,227,104,254,247,179,120,212,128,193,142,145,50,161,214,78,93,216,99,218,20,177,211,93,211,66,85,147,35,226,226,226,207,135,90,187,180,102,70,113,
13,35,183,234,14,126,60,200,179,57,193,20,11,98,93,92,193,77,211,27,152,10,6,175,246,122,139,198,126,56,132,246,238,217,197,219,195,168,81,116,90,165,36,107,3,55,240,188,249,242,209,59,239,141,76,167,
157,236,9,247,24,41,108,11,170,25,40,2,226,4,222,236,237,91,55,5,221,155,21,168,17,8,170,84,171,201,189,1,153,89,220,194,40,82,98,171,252,139,183,118,5,131,5,163,13,99,92,124,68,140,64,204,128,124,52,
102,24,159,197,208,2,199,38,206,129,125,123,119,211,163,143,245,228,211,151,34,32,132,6,225,20,34,241,127,174,231,171,47,112,30,79,154,56,70,168,84,59,60,71,107,86,253,200,7,147,184,168,139,26,245,77,
154,181,150,134,177,68,18,68,224,124,234,253,230,64,143,50,168,122,192,20,254,51,207,191,74,147,63,25,203,207,247,190,253,7,241,184,228,64,40,80,176,16,189,244,234,27,52,114,216,64,191,100,29,113,191,
128,179,13,241,210,70,131,107,61,138,92,125,245,197,68,90,191,110,181,225,237,3,120,220,177,141,194,133,139,6,220,86,238,212,28,148,129,111,255,207,175,28,20,56,126,122,68,63,105,74,82,121,74,5,226,158,
84,170,212,253,244,217,164,143,12,13,161,81,84,229,101,114,55,140,213,100,245,217,25,115,227,15,241,21,72,49,61,248,209,53,233,8,59,31,66,254,238,252,249,231,31,60,176,220,147,6,45,166,149,167,78,153,
196,223,255,112,236,100,218,188,105,29,125,255,221,12,170,204,78,222,221,191,237,16,234,3,202,213,110,223,182,153,154,51,227,7,49,201,136,13,242,85,136,2,158,105,119,126,90,185,140,90,182,105,151,230,
217,46,90,180,24,213,174,211,128,181,187,73,168,15,70,128,11,21,188,110,129,130,3,26,6,54,166,126,238,118,26,5,16,111,237,74,61,54,218,159,62,237,75,186,117,211,184,169,48,120,118,69,128,60,153,136,81,
236,10,6,100,136,21,71,129,27,120,42,180,64,8,13,164,208,142,28,57,164,185,46,102,87,180,64,89,106,40,180,184,79,149,106,129,74,125,227,198,12,167,17,31,78,164,124,249,180,171,230,33,118,209,172,130,48,
18,137,36,61,152,73,69,188,109,160,70,177,147,134,236,126,133,196,60,12,224,3,53,138,157,32,12,3,133,156,126,89,189,82,215,231,144,252,245,246,192,97,92,97,202,44,112,47,122,238,197,94,60,241,77,111,255,
180,64,190,202,27,125,223,53,196,40,118,82,244,158,226,212,161,83,87,90,56,95,191,45,128,240,22,136,17,152,9,106,47,192,195,255,241,71,35,200,110,55,40,1,83,161,86,145,145,17,165,226,226,22,29,195,83,
110,24,207,152,187,152,223,25,187,117,107,87,56,103,88,88,23,99,182,228,25,148,7,174,85,187,94,218,243,85,63,45,167,43,151,47,101,88,15,217,158,43,150,47,161,142,157,31,201,16,159,210,239,141,151,233,
230,205,27,252,239,55,122,63,79,239,189,63,154,239,32,187,224,8,2,89,174,80,184,64,28,115,155,182,29,248,115,132,98,192,131,236,105,74,7,85,184,224,145,115,7,219,92,52,63,142,143,86,157,180,239,24,17,
84,195,24,134,184,72,124,41,70,210,90,94,241,102,45,218,242,248,233,187,221,224,16,209,46,22,217,31,184,17,224,34,190,234,167,31,140,234,26,143,171,213,2,113,84,135,254,56,224,247,54,102,77,255,154,234,
212,109,32,20,191,91,182,124,5,33,195,184,120,113,237,80,157,141,235,87,235,54,138,157,192,56,158,199,6,183,168,124,169,5,60,60,133,216,117,228,220,57,255,36,231,220,41,110,113,80,100,136,177,217,207,
162,202,6,153,205,221,212,207,187,1,51,246,231,117,85,161,105,137,198,24,144,254,128,194,88,70,3,175,162,209,116,121,248,49,158,100,47,122,255,194,253,31,82,177,102,26,197,78,48,144,71,21,221,203,151,
46,26,42,5,138,124,21,189,121,26,34,60,212,190,51,197,47,153,167,75,59,30,33,130,102,27,197,78,32,225,249,228,211,47,209,87,95,126,98,84,147,150,48,43,33,233,237,3,60,73,183,71,115,134,133,116,99,15,33,
70,109,201,19,48,90,156,134,174,221,158,76,203,227,23,121,92,15,177,41,48,70,115,229,206,67,205,93,18,203,86,174,88,202,141,98,140,194,224,41,221,188,113,45,173,89,181,130,223,88,69,164,220,0,66,57,206,
157,61,205,43,237,57,167,79,112,67,199,129,80,182,124,69,106,220,164,101,218,186,200,212,252,236,211,143,188,38,6,160,212,110,183,199,30,79,27,177,33,14,243,30,54,226,10,52,70,71,148,166,2,146,100,72,
126,130,130,135,150,103,57,216,197,45,204,0,137,147,34,198,39,202,62,63,202,126,55,45,160,105,108,164,97,12,47,173,22,151,61,12,20,245,128,108,104,168,55,136,132,63,136,24,188,72,234,16,169,202,119,233,
82,96,253,222,184,97,45,69,199,60,35,52,208,43,86,162,148,97,134,177,141,153,50,225,70,107,142,73,36,6,145,21,75,123,192,248,132,12,219,81,54,168,198,253,56,103,120,46,170,82,165,122,90,152,163,191,64,
250,12,10,79,184,6,226,58,0,163,28,30,107,17,48,88,70,14,194,145,63,181,7,250,0,202,13,122,146,8,157,64,66,44,41,49,145,39,17,107,57,87,92,193,186,40,100,246,78,191,94,1,43,86,56,241,102,20,67,9,100,255,
190,223,121,220,53,10,246,66,168,160,90,245,218,194,94,255,156,57,195,153,45,80,139,118,238,216,34,180,62,66,83,163,99,158,22,238,183,19,216,128,55,111,222,228,51,7,122,103,36,48,219,127,240,224,62,195,
10,148,169,164,118,37,79,134,49,27,215,152,46,172,138,12,69,39,59,119,108,245,122,128,192,27,139,16,7,132,75,184,18,194,118,30,70,95,48,68,59,116,124,152,7,181,235,221,161,248,49,144,49,153,63,53,214,
19,83,229,95,79,249,148,79,227,126,62,233,99,158,249,143,209,167,243,61,95,192,243,184,250,231,21,20,25,245,68,218,107,77,154,65,254,108,134,174,62,249,3,98,130,17,251,165,197,38,102,220,255,253,247,81,
161,144,11,28,108,119,179,97,220,76,64,157,3,170,14,208,203,174,94,163,150,102,66,25,6,81,200,80,246,149,252,166,7,145,236,220,162,69,239,9,120,59,8,253,17,49,140,17,99,175,133,104,70,113,160,253,198,
192,22,49,202,66,253,14,64,113,68,34,185,155,200,106,67,54,232,249,207,248,246,203,12,201,238,60,177,248,161,142,212,51,246,57,221,109,94,187,122,133,190,253,230,115,143,57,58,112,254,60,243,220,171,66,
70,104,185,114,21,133,12,99,72,136,69,60,210,93,184,127,167,78,157,224,247,12,72,202,58,103,184,225,156,195,189,1,185,26,45,91,61,196,29,8,90,32,116,227,233,103,95,166,177,163,135,10,111,91,15,103,206,
156,226,34,1,191,179,123,184,251,126,196,76,219,179,207,191,198,189,173,34,32,124,78,196,48,230,222,112,246,157,68,61,215,184,255,34,161,124,211,198,181,92,151,218,25,23,94,176,96,33,174,142,213,142,217,
117,24,228,136,16,251,228,243,124,32,229,43,201,91,20,133,148,186,145,145,157,139,198,197,45,57,147,246,77,98,58,118,204,173,228,177,137,101,216,248,0,30,49,215,76,196,36,118,179,115,74,66,149,40,89,42,
93,44,140,47,75,31,89,171,73,73,201,52,253,155,47,248,65,12,79,38,220,250,213,216,40,6,70,107,252,210,249,244,238,128,222,124,68,9,61,69,72,107,137,254,48,40,239,140,81,232,184,49,195,104,200,240,143,
232,200,145,195,84,161,82,21,174,236,176,142,245,105,243,166,245,105,134,113,165,212,34,33,22,31,149,135,16,84,15,61,64,28,32,0,178,52,78,195,24,39,79,225,34,233,13,6,36,86,57,67,65,2,161,105,243,86,105,
219,244,5,12,99,120,243,16,155,157,71,195,160,168,21,132,226,22,102,193,227,173,27,122,86,21,113,5,222,84,28,95,27,214,173,17,82,90,64,166,242,180,169,159,27,209,69,186,117,75,251,119,199,241,130,99,40,
16,149,16,120,115,112,3,227,231,81,98,34,37,176,199,68,120,58,146,82,196,250,157,175,195,67,163,5,6,167,24,168,106,197,109,163,168,206,210,37,243,51,72,39,234,1,55,198,208,208,48,222,215,4,126,13,72,76,
249,155,45,188,208,64,234,235,135,15,31,244,123,27,238,200,154,98,146,172,140,254,116,50,243,128,19,232,155,175,39,123,12,87,192,107,208,239,69,222,2,116,224,69,129,84,235,144,65,253,188,202,132,173,251,
229,103,238,196,66,165,80,45,138,9,204,22,2,200,175,138,218,11,75,23,207,227,137,246,238,241,172,120,142,60,16,44,208,218,237,213,187,191,144,199,28,134,41,236,153,223,153,65,103,36,152,97,159,48,110,
148,87,121,56,220,255,199,141,29,65,253,223,25,42,228,41,23,245,254,195,152,69,82,185,8,135,15,29,164,79,39,140,246,152,228,143,154,20,144,16,133,18,19,20,66,16,215,174,5,98,172,145,144,55,229,139,137,
66,219,215,64,9,83,8,225,2,179,211,142,12,37,143,165,5,25,16,70,241,196,211,47,242,155,186,19,140,8,6,244,75,137,27,172,82,181,102,218,235,168,190,242,251,238,223,50,124,222,149,28,57,114,240,147,13,242,
28,56,144,48,45,80,164,72,81,126,80,215,168,89,155,199,6,227,199,219,245,219,118,126,51,21,21,226,198,136,5,109,35,124,2,7,116,183,199,162,233,229,23,98,73,77,29,185,64,24,59,165,143,9,116,148,141,62,
97,76,222,186,229,189,98,30,12,1,196,132,162,188,50,64,240,186,83,225,1,122,139,31,140,249,52,221,250,223,124,53,153,86,253,156,113,122,190,117,219,14,180,113,195,26,161,100,47,24,196,48,68,180,128,170,
130,179,8,10,70,104,237,218,251,14,33,199,197,194,204,226,22,102,82,187,110,67,161,105,248,141,235,215,240,71,132,193,64,85,68,107,164,15,97,242,57,51,167,250,149,165,235,206,121,193,233,255,231,95,234,
197,141,215,93,130,201,164,25,182,115,254,44,87,108,49,2,156,131,104,15,201,165,190,192,212,226,91,253,7,179,139,239,112,191,181,48,145,72,139,37,152,72,195,88,146,149,113,168,89,227,8,197,172,217,183,
83,63,215,140,225,253,113,197,82,93,134,241,100,1,237,92,36,186,119,125,52,74,115,246,10,178,101,90,240,228,228,134,218,201,201,96,246,140,175,105,249,50,207,225,158,174,160,232,24,234,24,64,29,66,68,
3,25,97,28,70,26,198,103,207,156,230,122,206,90,149,125,49,11,255,237,212,207,184,212,172,22,80,251,16,161,243,195,98,42,72,208,34,70,225,53,173,251,40,222,159,250,213,36,30,30,11,167,167,22,56,214,230,
207,155,173,75,147,223,27,170,69,193,180,250,108,23,75,210,162,237,106,19,0,6,170,43,54,102,116,32,204,0,70,43,140,91,39,7,246,237,209,140,9,134,103,23,58,135,248,209,129,171,123,189,12,123,29,113,72,
131,6,190,193,79,88,36,161,233,57,208,32,39,5,227,21,177,192,57,114,132,211,136,81,227,105,49,51,192,43,86,124,128,123,8,145,53,251,209,232,97,60,212,3,154,124,136,53,246,5,194,15,156,134,49,192,212,2,
250,125,241,82,198,145,145,197,154,254,228,198,62,131,132,13,42,139,109,88,39,22,47,131,17,31,132,211,181,216,184,254,78,191,225,161,215,50,140,1,194,17,238,70,195,88,164,4,52,166,236,80,82,20,224,196,
251,237,215,109,233,6,114,158,128,177,93,183,126,99,174,203,27,40,162,241,111,136,185,122,227,173,247,248,84,22,102,67,254,56,184,63,83,147,34,209,111,45,195,24,96,38,102,212,232,79,121,69,42,140,254,
141,18,139,55,147,243,170,133,22,38,137,133,99,25,97,162,24,89,242,56,43,182,165,8,23,74,22,105,139,23,57,53,174,173,44,212,142,104,91,255,100,17,195,24,121,25,34,101,152,113,63,134,113,35,18,226,136,
208,41,17,233,69,36,227,159,60,113,92,211,139,153,75,64,99,25,97,15,34,225,97,184,231,139,24,197,78,48,11,252,241,216,225,52,226,131,137,154,57,25,200,89,66,92,238,241,227,127,11,183,239,11,232,209,107,
25,197,78,78,158,56,198,127,35,45,3,94,68,91,26,57,90,144,224,211,2,206,195,137,31,143,210,229,92,130,194,18,218,119,181,27,61,129,16,155,214,109,218,25,18,190,170,144,194,149,33,210,12,99,118,207,173,
29,200,5,8,157,67,88,131,205,109,186,21,175,111,88,191,154,123,119,93,19,197,14,10,232,195,194,75,133,10,97,57,195,115,114,93,61,24,210,121,242,228,227,153,143,181,106,215,229,161,16,206,31,248,248,241,
191,210,68,195,69,248,243,240,31,172,141,250,244,215,95,127,242,74,90,56,168,32,187,118,239,253,165,185,193,52,122,212,96,30,78,128,74,56,152,162,208,50,74,220,245,110,113,146,172,89,253,35,229,240,32,
112,141,234,56,24,177,162,188,52,42,0,66,213,2,53,229,191,254,242,19,225,218,224,34,202,11,136,165,222,178,101,125,218,115,236,43,120,240,181,46,46,216,15,208,152,52,177,12,163,225,32,62,201,89,137,208,
23,240,70,186,94,220,97,236,106,25,198,0,149,240,140,48,140,113,44,137,132,37,56,193,49,138,5,131,44,132,86,32,212,224,232,209,195,65,55,146,33,131,8,207,185,8,184,33,66,199,18,2,247,56,134,120,191,183,
109,54,100,68,111,6,48,60,118,219,141,207,236,150,72,254,45,220,190,117,139,199,215,138,128,152,81,200,159,138,12,164,245,92,83,207,156,62,165,121,239,114,119,204,185,131,153,214,134,141,181,115,109,112,
31,158,57,125,138,230,122,238,96,118,118,241,162,185,60,180,82,11,200,129,26,97,24,35,68,2,14,30,61,252,117,244,79,77,195,88,164,56,135,232,61,1,70,174,107,1,55,17,112,143,67,8,227,7,99,39,105,198,151,
215,171,223,196,168,188,174,42,117,235,214,13,185,19,74,161,144,111,179,92,3,132,12,64,36,251,224,254,189,233,94,103,22,56,207,124,15,203,150,45,221,52,55,126,152,59,219,86,120,9,197,54,109,219,243,236,
214,195,127,28,160,89,108,4,116,250,212,9,58,124,232,0,175,236,86,168,72,17,218,183,103,55,157,58,121,130,103,91,230,12,15,231,75,115,248,102,0,0,32,0,73,68,65,84,94,53,196,148,34,222,208,213,51,149,43,
119,110,234,212,185,27,247,32,163,93,24,131,191,238,220,198,13,67,215,81,21,188,113,15,84,169,70,86,102,180,67,34,11,109,227,6,142,0,121,168,97,84,173,94,139,118,239,218,65,215,175,165,252,160,13,217,
65,208,180,89,43,30,215,130,62,32,246,200,25,207,227,250,125,0,74,222,226,36,246,36,66,13,79,47,170,8,89,216,168,181,76,185,10,52,233,147,49,186,60,107,56,96,235,8,24,115,152,134,199,72,219,21,196,67,
139,72,229,152,81,220,194,76,80,244,65,36,222,218,213,131,14,176,143,188,201,244,185,2,15,125,209,123,138,241,139,115,32,96,91,168,255,94,167,110,67,93,159,131,238,54,166,149,176,112,175,247,222,221,220,
219,178,151,45,129,84,124,18,101,199,246,205,124,176,167,167,244,52,126,15,120,70,176,32,33,231,212,201,227,252,156,68,191,15,30,216,235,183,180,155,68,34,9,46,168,43,32,226,45,118,130,74,178,36,32,173,
139,235,128,40,48,0,181,128,3,206,23,184,39,195,49,165,5,194,237,156,247,125,189,64,197,232,145,110,81,154,33,122,168,4,136,216,229,64,57,116,112,191,238,194,38,24,184,104,1,99,84,75,47,190,122,141,218,
154,237,224,158,183,33,53,124,81,47,72,240,132,237,230,12,111,245,6,238,143,168,134,140,144,150,0,9,45,91,182,104,89,110,24,119,235,214,182,64,206,176,28,126,165,121,99,212,129,208,131,157,219,83,178,
23,29,30,118,34,196,152,139,187,105,5,34,203,211,9,100,179,58,71,220,201,16,69,112,58,66,37,6,244,127,157,103,128,66,103,21,94,50,72,177,56,53,7,225,149,194,141,26,113,162,174,63,28,18,245,138,21,47,193,
167,158,225,101,67,156,37,118,88,177,98,197,169,87,159,183,185,39,216,245,32,194,180,58,188,119,165,203,148,231,7,1,66,62,208,54,138,21,184,142,102,187,62,26,77,15,119,141,76,123,142,146,213,112,241,163,
20,37,18,154,96,112,35,180,195,89,160,0,241,57,217,179,103,231,201,66,158,192,182,246,236,249,141,199,253,234,165,126,170,192,181,22,238,70,32,127,109,195,47,20,25,21,171,57,149,100,70,113,11,179,224,
241,214,2,97,20,200,216,117,215,236,133,247,118,243,198,117,60,155,90,11,120,141,81,41,46,80,22,47,156,203,67,127,68,12,121,79,160,58,17,244,149,27,166,170,140,224,123,237,253,125,23,247,70,99,230,193,
12,131,19,30,20,132,116,136,36,192,120,3,231,46,22,12,86,83,18,87,14,177,254,238,226,134,50,6,192,254,84,173,146,72,36,230,163,215,33,32,50,173,143,107,202,69,29,179,72,222,146,202,92,209,242,44,138,86,
215,220,186,101,131,208,122,158,128,93,178,143,93,139,181,212,31,16,118,134,251,184,232,44,177,55,78,159,62,161,189,146,27,34,149,73,1,108,35,111,21,230,224,76,18,209,128,134,109,24,72,33,14,212,133,208,
50,140,65,185,114,21,140,48,140,201,70,150,50,220,48,206,110,203,118,159,222,15,99,167,64,191,23,143,200,8,68,134,59,98,144,96,48,186,162,178,127,7,246,239,73,119,192,226,6,232,148,60,65,233,231,118,29,
50,150,15,68,61,118,20,223,64,69,59,222,14,51,126,181,226,51,49,66,123,189,119,127,174,59,124,246,236,153,180,208,10,236,44,190,176,209,7,60,110,238,181,182,241,163,249,170,101,14,15,180,167,50,187,144,
242,130,84,11,202,218,2,200,188,57,13,99,84,236,219,191,247,119,10,15,15,207,240,185,51,167,78,242,236,94,127,71,164,66,146,100,124,234,43,227,244,10,246,59,6,3,90,162,237,102,20,183,48,11,196,102,139,
200,187,108,242,18,39,142,1,144,136,97,140,32,127,28,143,129,86,219,193,236,194,207,63,45,231,199,183,17,96,202,18,75,235,182,237,249,32,13,6,242,246,173,27,105,219,214,77,66,55,19,81,16,119,142,120,123,
36,151,6,10,46,184,200,100,198,130,1,39,194,150,126,221,177,149,223,144,208,127,105,36,75,36,89,7,17,15,163,43,34,229,122,47,94,56,167,43,36,76,180,78,129,47,74,9,104,34,163,79,24,168,7,2,66,69,181,12,
99,216,68,247,20,43,145,97,182,89,47,122,6,23,78,110,251,16,19,72,143,119,231,141,168,106,133,72,216,172,47,254,56,32,246,249,64,53,180,157,176,111,92,138,27,198,22,43,233,186,211,65,226,170,79,223,129,
220,131,244,237,215,159,165,29,220,40,33,248,191,55,6,164,95,153,189,215,190,227,35,84,234,222,251,210,94,250,231,250,181,180,27,95,190,252,5,189,78,57,96,234,90,15,225,225,185,105,206,172,111,188,198,
237,32,84,34,79,155,124,186,68,192,65,177,98,37,189,198,132,186,158,104,174,49,52,248,78,29,59,119,245,120,65,185,198,214,219,183,119,183,240,246,93,193,137,36,34,141,178,141,141,178,188,5,186,195,16,
20,169,102,4,77,227,187,193,48,22,25,40,0,79,30,116,0,47,50,18,61,239,41,230,251,52,128,58,73,205,90,117,121,184,77,160,204,153,249,13,215,220,116,22,152,49,10,28,119,152,162,195,18,251,212,139,220,64,
94,241,195,18,221,229,165,61,1,163,251,211,137,99,232,221,193,31,24,86,30,214,9,36,2,113,188,97,193,204,203,250,181,63,211,143,43,226,3,146,126,147,72,36,198,224,30,146,167,133,72,216,133,168,215,210,
73,114,114,224,229,127,69,18,214,17,39,28,176,23,247,148,88,129,47,228,24,5,106,24,235,253,109,128,158,138,118,222,16,217,151,0,33,116,129,112,129,13,160,32,219,9,103,163,47,10,10,106,31,107,162,168,133,
185,97,172,146,37,92,207,164,46,110,138,147,216,13,210,147,10,132,251,8,16,161,21,144,7,129,241,226,212,140,117,61,232,46,156,63,203,167,93,16,183,235,14,12,89,61,160,78,247,220,239,124,7,96,163,4,53,
180,149,243,23,40,40,156,12,228,107,61,87,249,45,247,233,35,24,233,248,49,31,238,218,35,221,235,162,217,163,158,16,81,94,0,27,125,196,244,96,106,226,201,132,151,52,235,212,223,127,127,89,67,139,91,152,
1,143,183,22,136,215,69,140,156,187,32,189,43,72,16,133,30,162,22,8,167,48,194,48,198,108,6,146,71,33,239,227,174,115,109,20,56,79,27,53,105,193,23,132,43,64,122,40,208,100,15,168,181,124,50,254,3,94,
74,85,84,30,81,47,152,117,65,104,21,102,146,126,89,253,35,125,255,221,76,67,116,191,189,81,170,72,2,189,24,225,253,216,112,5,151,55,163,243,30,29,188,77,99,149,7,204,232,39,250,104,180,31,223,172,126,
26,223,166,241,178,105,162,223,61,217,161,208,248,185,129,207,210,4,130,222,123,150,200,140,207,205,76,8,211,67,254,144,22,87,175,4,86,193,19,92,17,108,35,92,64,69,67,11,127,102,5,3,157,245,4,34,251,18,
4,90,124,3,54,37,226,203,11,22,244,109,248,194,49,106,4,236,250,145,63,229,206,230,80,115,146,143,2,22,238,96,170,211,27,144,13,65,12,165,19,103,229,58,215,80,10,85,117,184,188,159,68,139,22,124,151,174,
114,28,192,129,5,201,39,61,192,248,177,186,73,161,161,60,51,36,215,112,162,194,131,122,210,143,209,11,212,49,48,197,235,94,145,11,73,80,235,92,138,148,168,110,23,3,59,27,53,223,188,122,153,43,106,184,
226,175,132,21,246,97,227,166,45,52,215,195,190,67,114,160,55,48,48,129,186,1,194,64,180,48,178,184,133,25,4,18,111,157,254,253,53,60,126,86,43,238,183,90,141,90,92,108,222,136,132,55,180,49,108,200,0,
234,253,230,59,124,16,98,38,152,33,24,50,98,28,45,93,252,61,15,121,10,68,213,2,217,233,136,221,127,173,87,63,174,93,108,22,240,126,183,121,176,35,151,202,155,242,249,4,191,53,157,53,183,99,117,80,222,
112,237,169,95,137,36,51,72,74,206,124,185,54,35,12,41,119,140,8,141,208,139,77,160,58,157,17,57,26,168,211,32,130,150,138,134,8,254,232,235,27,17,170,38,82,233,15,136,238,11,159,109,220,214,246,224,135,
133,25,51,139,201,76,128,28,41,134,177,133,12,155,23,61,119,214,115,37,45,87,215,189,213,45,115,52,126,201,124,30,134,128,24,73,212,232,70,177,140,239,227,102,8,101,161,186,130,56,98,87,47,40,218,66,145,
13,28,56,240,110,193,128,178,88,172,60,136,68,111,82,217,23,147,199,179,145,228,21,174,74,17,150,45,140,87,22,67,24,137,235,116,80,136,219,244,178,61,217,206,15,64,163,60,174,213,170,215,226,234,31,90,
32,153,76,235,192,135,58,133,136,97,220,168,145,113,197,45,204,64,36,140,2,251,98,139,70,209,8,76,159,33,22,190,82,229,170,62,215,67,210,34,182,185,112,126,156,174,126,122,3,49,223,67,7,245,167,71,186,
245,224,18,103,102,121,97,1,194,129,34,30,137,164,82,247,150,230,213,135,244,200,27,186,131,193,49,146,99,159,126,246,21,126,92,154,9,66,88,250,244,125,151,31,135,122,116,69,69,17,172,120,45,145,100,10,
142,44,80,19,218,12,195,216,140,54,53,183,41,16,251,236,111,82,116,250,54,196,46,42,174,78,66,127,241,207,200,13,252,160,18,253,253,20,3,84,191,69,126,18,163,36,76,89,43,161,169,161,20,202,109,179,199,
164,55,111,220,137,131,201,233,193,203,180,118,205,79,124,9,4,132,53,180,108,211,142,75,197,192,203,11,35,227,70,234,118,145,12,224,76,8,200,233,33,33,78,11,24,17,211,191,253,130,102,76,251,146,31,244,
158,98,168,92,165,172,160,33,28,136,225,225,9,17,237,98,160,85,140,4,32,198,249,242,165,139,148,47,191,239,74,65,240,8,66,231,215,95,185,21,51,17,141,183,70,24,129,72,137,107,196,94,107,25,198,160,41,
251,29,48,203,97,212,137,8,207,9,116,30,81,10,179,75,68,119,62,96,17,213,57,246,7,196,73,163,124,233,216,209,195,116,73,48,185,131,16,163,49,31,188,207,213,89,144,64,39,82,94,219,95,112,179,138,234,249,
52,191,9,32,102,218,72,116,76,150,73,36,65,199,232,48,27,255,48,222,58,207,140,130,69,34,222,75,8,2,4,138,104,27,222,84,171,244,224,200,132,1,6,16,13,175,193,190,208,27,79,158,161,13,141,130,41,32,208,
184,112,39,236,108,75,81,181,183,56,28,55,73,67,230,36,80,224,109,117,130,120,98,196,134,26,153,49,15,16,63,249,195,178,69,188,120,6,234,171,163,178,29,60,209,48,50,224,117,130,97,140,120,23,127,130,213,
157,224,100,86,85,207,7,162,83,145,2,92,185,108,108,210,16,212,63,106,214,174,171,185,30,100,240,68,130,249,241,61,96,64,35,65,80,139,230,45,31,204,146,134,177,17,241,214,174,64,197,1,9,107,90,137,101,
80,192,120,160,74,117,110,112,27,9,102,91,160,240,2,229,139,102,45,218,82,147,166,198,40,64,120,2,26,221,143,245,136,225,113,240,129,130,92,3,44,80,105,65,85,169,122,13,26,243,217,26,51,136,142,121,154,
142,29,251,203,103,168,144,94,44,74,22,112,201,73,36,94,144,2,45,198,33,226,32,201,43,80,86,90,187,13,237,153,93,112,69,231,172,184,39,84,19,6,45,34,136,170,106,97,127,98,70,214,95,16,66,10,251,77,11,
3,19,181,19,83,60,198,138,229,186,217,99,210,115,231,210,135,88,64,144,57,208,108,76,143,219,97,198,197,173,91,183,120,1,12,84,225,131,178,133,213,102,163,135,218,117,230,25,245,168,164,135,4,34,163,193,
143,87,168,240,29,69,115,120,172,141,4,21,102,172,86,237,105,118,173,88,90,87,16,78,33,98,24,163,184,133,65,226,217,134,129,144,152,38,2,161,32,24,69,162,144,139,8,24,168,237,220,190,153,26,52,210,174,
140,212,130,13,22,140,54,140,157,96,240,182,120,225,119,124,129,177,137,228,66,8,169,35,17,210,136,105,62,39,8,221,64,172,57,10,228,24,1,206,103,212,184,199,204,10,6,14,232,119,213,234,53,133,4,245,69,
193,108,205,115,47,190,78,253,223,124,197,176,240,158,75,215,66,232,199,173,249,116,244,65,53,172,76,177,231,246,141,43,131,236,185,125,213,84,47,121,74,255,205,187,89,243,246,77,107,61,101,6,193,244,
254,235,248,2,9,73,89,193,99,252,239,64,196,64,67,14,9,156,119,129,36,201,163,168,153,8,174,201,251,119,27,80,139,16,1,117,37,2,145,191,67,109,10,17,219,199,40,155,75,85,213,171,124,107,118,197,126,198,
70,230,77,221,2,184,210,145,172,150,59,213,242,135,184,181,25,134,49,112,38,237,149,45,91,129,66,195,194,184,33,140,105,114,51,181,81,97,128,187,6,163,163,174,187,145,136,74,146,121,211,234,245,4,106,
166,99,223,136,72,134,161,18,158,17,197,45,140,162,26,51,184,48,200,209,2,70,177,158,100,138,245,235,215,8,25,198,181,234,212,231,94,124,189,101,46,245,130,115,4,11,188,200,208,211,174,92,185,26,85,174,
82,141,170,84,169,33,44,151,227,13,24,217,221,123,196,208,200,97,3,13,234,109,10,152,153,65,162,156,51,89,14,9,176,149,153,161,140,42,147,232,127,160,9,123,200,78,110,221,166,189,97,241,198,231,174,132,
208,194,245,129,123,137,36,18,73,214,230,20,187,231,105,129,235,98,249,138,149,105,119,0,201,190,168,108,171,5,6,246,162,178,110,89,17,81,213,176,138,21,31,8,40,76,86,100,95,2,163,28,158,236,247,191,152,
98,24,219,213,191,109,230,218,197,156,163,236,6,239,44,33,136,66,32,8,119,48,19,163,60,97,34,184,199,186,162,82,159,81,192,112,45,41,32,76,142,81,153,222,81,19,188,198,34,134,177,81,197,45,140,66,56,222,
90,103,8,200,158,221,191,241,164,79,173,169,27,196,175,35,22,248,7,19,146,193,188,129,169,43,84,122,196,2,10,51,195,184,74,213,154,60,44,2,70,167,39,201,67,45,16,83,93,178,228,189,1,203,184,249,226,244,
233,147,124,193,128,21,51,43,40,241,94,165,90,13,158,180,87,166,108,121,225,68,21,87,218,182,235,68,63,44,95,156,41,113,138,18,137,228,238,228,136,160,158,123,253,250,141,253,54,140,225,192,64,209,41,
205,190,232,44,179,157,213,192,12,171,136,254,127,205,218,245,184,211,208,95,237,100,228,56,137,112,232,144,65,246,158,195,113,146,27,198,113,113,241,231,99,163,35,16,236,226,87,89,104,81,254,64,53,152,
84,195,24,83,173,129,82,188,68,169,52,169,46,132,80,4,26,224,29,8,238,223,231,143,0,171,189,184,34,106,4,230,201,155,159,250,246,27,164,171,237,236,57,196,188,119,48,20,107,212,172,75,59,182,7,174,225,
27,40,162,241,214,0,225,2,15,62,212,73,87,251,162,19,151,208,52,14,166,97,236,206,185,115,103,105,213,207,63,240,197,102,11,161,170,204,216,196,204,66,45,118,33,210,99,108,162,252,183,153,134,177,43,152,
181,193,128,21,11,148,61,112,19,193,133,15,177,201,122,138,157,192,107,92,186,76,57,250,243,240,31,38,246,86,34,145,252,155,56,126,236,47,158,156,175,165,31,140,89,67,212,68,112,86,232,213,3,238,55,34,
201,211,59,119,108,213,221,118,86,99,255,190,221,154,134,49,242,77,144,51,163,87,126,23,148,40,89,138,170,84,171,169,185,30,164,122,13,139,49,182,208,223,46,129,27,234,239,204,36,104,106,76,203,158,65,
130,78,247,200,24,254,119,225,194,69,169,120,241,146,126,233,10,59,233,253,198,128,180,226,8,95,124,54,158,214,187,104,10,7,19,156,4,213,171,215,78,123,142,18,141,122,107,203,123,3,6,79,195,198,218,83,
251,0,73,97,34,165,145,253,5,225,20,89,193,48,22,141,183,6,149,31,168,102,90,63,138,151,40,201,103,10,2,45,31,106,4,80,182,248,117,231,54,190,96,192,248,236,243,175,82,153,178,21,180,63,72,36,164,196,
97,22,240,130,163,186,34,74,164,215,169,215,144,158,124,250,37,62,240,17,1,253,150,134,177,68,34,17,5,51,76,8,175,211,10,77,132,135,51,246,137,231,105,194,199,163,116,181,143,144,74,84,250,213,2,14,130,
173,169,51,127,119,51,59,182,111,161,86,109,218,107,174,215,237,209,104,218,177,109,147,174,98,31,152,93,124,226,169,23,133,242,106,54,111,88,43,220,174,22,246,27,150,253,119,172,11,118,188,144,66,166,
26,198,136,1,129,209,88,160,64,74,50,14,70,101,243,230,206,244,184,110,246,236,217,185,241,3,119,189,171,182,43,4,177,81,52,4,113,163,16,235,134,230,113,46,54,250,131,146,0,52,140,241,94,138,102,113,54,
46,151,230,220,169,88,223,169,99,140,147,35,52,44,148,110,223,186,205,215,119,170,16,56,215,69,184,0,220,254,240,102,37,39,37,167,190,231,189,82,15,166,178,93,227,38,119,110,23,75,246,18,1,222,63,209,
10,51,102,99,100,113,139,64,16,141,183,14,6,24,44,24,97,24,227,216,195,239,108,68,204,50,98,199,71,12,125,135,250,246,127,159,39,78,106,225,90,174,93,47,24,20,34,132,227,198,13,255,149,94,0,206,201,109,
91,54,114,143,206,224,33,99,132,226,144,75,9,132,23,73,36,18,137,43,235,214,254,44,116,15,193,64,29,250,242,11,230,205,17,106,23,246,194,255,250,12,208,84,53,2,72,122,206,236,251,168,17,64,207,254,210,
165,11,154,9,214,240,208,247,122,99,0,125,56,98,144,144,26,25,238,135,61,99,159,165,10,21,181,239,95,183,111,221,162,181,198,133,229,158,153,185,104,209,133,52,139,83,85,104,19,179,253,122,25,213,186,
39,112,243,67,161,133,14,157,82,70,84,144,219,194,65,231,41,206,38,91,182,28,100,177,90,120,128,58,140,97,124,22,59,43,123,170,158,29,12,221,148,233,98,149,125,94,229,73,118,208,203,131,126,48,140,98,
231,122,206,207,97,125,180,3,163,25,81,137,120,223,97,119,164,26,198,233,171,207,88,109,14,110,24,231,200,158,147,18,109,119,50,223,189,25,198,152,82,119,101,211,70,227,70,47,89,201,8,196,254,110,202,
126,51,104,248,102,22,80,105,16,137,183,14,22,144,6,156,49,109,138,102,6,51,234,184,151,40,121,47,229,205,147,151,39,13,162,80,11,36,125,242,230,205,203,229,108,240,136,129,96,159,94,207,249,93,25,209,
21,28,191,95,125,249,9,125,56,118,146,230,136,27,134,45,140,114,79,161,72,136,7,46,80,168,16,235,119,62,158,56,11,73,66,44,248,14,88,114,179,155,193,201,147,39,104,192,91,175,5,220,103,128,153,150,5,243,
102,211,227,236,162,168,69,193,66,129,37,31,58,177,231,81,233,122,179,0,43,223,177,139,74,150,80,125,203,42,125,200,10,253,0,89,160,31,129,30,23,10,59,52,115,173,18,171,50,38,209,6,197,185,142,252,121,
136,135,98,105,241,72,183,40,126,173,158,57,125,138,79,21,28,132,129,189,214,235,173,180,25,108,95,192,91,188,112,129,152,177,157,213,225,186,242,203,151,80,212,227,79,105,174,91,166,76,121,26,56,104,
36,125,50,97,52,157,62,229,61,113,47,123,142,28,244,212,51,47,83,131,134,98,126,218,229,203,22,26,40,253,171,110,195,255,105,134,113,162,93,253,37,204,202,79,97,83,181,97,214,254,242,83,154,97,140,226,
18,245,234,55,162,205,30,170,146,161,8,65,131,70,190,119,76,120,120,56,93,188,112,142,27,187,45,91,62,68,181,106,213,51,165,207,78,224,133,115,167,112,145,162,84,203,37,222,21,106,20,70,77,173,231,99,
6,19,226,70,179,18,136,21,66,201,239,204,74,122,18,213,46,14,22,24,132,225,56,93,179,234,71,159,235,65,90,174,235,163,209,154,237,85,168,80,217,16,195,24,64,94,239,196,241,191,133,6,18,57,189,24,198,177,
79,189,160,121,3,65,72,148,55,195,218,31,182,111,219,44,100,24,135,251,81,168,199,19,42,187,10,58,194,179,128,5,37,145,120,64,9,126,229,228,127,61,115,227,166,81,191,1,67,133,214,109,217,250,33,170,81,
179,14,253,180,114,25,253,182,115,27,175,21,128,89,101,20,10,131,177,215,168,73,11,110,196,89,4,107,65,172,250,105,57,187,46,107,171,99,220,45,252,188,114,57,61,216,174,115,90,36,128,47,112,47,26,241,
193,120,90,191,110,13,109,222,248,11,79,134,68,21,98,132,140,34,158,24,51,228,173,219,118,16,14,167,187,120,225,60,197,47,89,16,232,87,184,131,170,108,196,67,154,97,28,23,183,228,76,76,116,151,157,10,
41,181,189,127,42,112,32,241,1,253,215,42,85,83,12,190,46,15,119,231,89,246,238,134,22,164,168,68,50,59,157,31,67,0,184,86,16,120,160,192,243,230,222,207,206,17,221,211,37,58,173,92,177,212,176,237,53,
105,214,210,175,140,125,51,65,12,51,226,118,49,133,18,108,82,226,173,155,7,125,187,90,64,211,88,203,48,22,149,229,169,193,6,132,70,22,83,65,76,151,136,97,108,243,146,44,114,230,244,73,77,195,24,231,5,
146,106,141,234,247,149,43,98,9,47,162,113,230,154,88,164,81,44,145,252,151,216,187,103,55,87,44,130,81,43,2,156,120,200,143,114,230,72,193,83,42,106,8,187,114,230,204,169,44,37,123,106,4,8,89,253,118,
234,103,212,231,77,49,217,79,92,183,155,183,104,195,23,128,65,134,63,149,94,81,78,251,179,73,227,12,173,48,156,172,216,185,174,92,186,59,11,51,138,145,54,104,170,97,12,150,46,158,151,102,24,99,122,185,
105,179,86,25,98,68,150,46,254,158,126,250,49,158,187,200,67,66,66,185,129,136,27,112,72,104,40,37,37,38,242,210,142,35,62,156,64,41,115,152,196,43,120,65,195,23,83,200,88,223,41,15,130,170,48,170,67,
229,33,19,240,238,89,109,86,178,39,219,249,251,104,3,11,94,119,159,115,67,97,8,196,12,97,91,78,91,216,221,40,134,204,85,179,230,173,210,158,227,134,142,248,37,35,192,119,21,85,163,8,54,45,90,61,152,41,
134,113,237,58,245,77,171,168,22,8,48,28,181,36,207,68,53,187,107,214,170,199,61,17,129,84,103,116,69,52,62,221,219,52,33,36,22,69,110,30,144,243,51,202,48,14,180,207,122,81,179,214,216,83,34,145,4,129,
111,167,126,78,247,149,46,75,197,138,149,208,253,89,127,140,226,155,55,111,208,248,143,70,26,86,186,56,43,1,79,58,20,154,218,117,136,208,253,89,127,140,98,48,103,230,55,116,240,192,94,191,62,235,133,179,
115,230,44,219,57,107,150,155,97,156,76,246,197,54,178,190,107,228,150,60,177,111,239,110,190,56,21,3,34,163,159,164,95,127,221,150,174,196,32,12,97,24,162,137,137,73,105,70,49,158,135,132,216,232,118,
194,45,238,126,119,30,156,24,189,33,78,25,11,226,128,179,101,115,240,0,120,172,103,181,88,249,251,56,40,177,62,107,129,27,201,104,39,217,158,204,99,143,145,144,167,88,20,178,164,110,19,224,224,205,205,
158,39,37,167,38,223,185,69,152,160,63,79,61,251,114,58,143,238,162,249,223,249,173,213,231,78,185,242,149,120,117,192,172,72,237,58,13,130,82,220,194,157,172,22,70,225,74,115,54,88,152,241,237,151,94,
223,63,123,246,116,186,2,55,222,192,113,139,42,141,243,191,159,29,112,159,96,96,139,36,214,225,152,191,122,213,115,182,240,161,63,246,11,109,11,114,133,136,71,62,114,228,144,158,46,122,68,84,37,227,242,
101,131,146,87,100,97,49,73,86,70,78,104,152,2,156,110,99,62,120,159,199,189,26,89,157,211,19,112,192,125,60,118,4,79,140,254,183,2,231,36,246,99,189,6,141,77,223,214,178,165,11,12,43,240,148,134,74,11,
29,169,85,224,210,25,198,179,102,45,221,30,27,221,133,221,9,149,74,198,110,49,35,51,167,77,161,161,35,63,230,198,42,140,44,200,114,124,50,254,195,180,247,93,227,21,33,69,229,196,53,251,29,165,159,161,
76,129,207,195,80,190,122,53,165,14,58,140,96,44,238,184,182,233,234,145,243,180,46,128,54,178,55,218,181,239,146,174,168,199,9,118,192,175,89,237,123,58,93,15,162,70,224,169,147,199,185,158,173,81,192,
147,239,170,2,226,9,188,15,47,226,138,229,139,13,219,174,22,80,195,168,34,16,111,141,233,149,93,191,237,52,108,187,136,155,18,9,69,104,204,246,71,28,187,48,248,26,24,237,218,181,147,207,142,104,209,161,
83,87,218,184,225,151,128,37,255,218,119,120,88,172,148,230,185,51,94,189,175,240,116,95,187,118,149,114,231,206,163,217,206,19,207,188,72,67,222,123,43,160,34,48,184,30,136,148,41,7,70,221,100,44,255,
40,148,125,175,149,84,171,202,227,141,177,56,11,129,114,111,178,211,112,78,13,185,80,149,212,215,156,175,187,254,237,130,234,250,154,168,241,45,96,4,121,76,230,242,148,240,230,225,121,134,207,102,120,
174,100,124,95,245,176,93,111,9,118,238,175,185,127,111,183,125,149,97,31,165,123,174,222,121,221,189,139,190,246,173,151,223,195,227,54,125,161,103,192,228,242,189,61,238,99,213,109,61,231,111,225,80,
238,60,119,220,89,23,9,119,10,78,163,36,133,44,255,62,7,99,150,1,249,28,195,6,247,167,62,125,223,229,179,215,102,0,187,99,220,152,97,92,65,235,223,12,108,202,73,159,140,97,223,247,154,144,132,155,191,
192,105,180,112,190,241,201,139,118,7,165,121,163,50,222,53,85,101,26,187,32,140,52,124,171,110,96,218,121,121,252,194,180,155,96,189,250,141,185,2,131,158,210,129,91,55,111,160,60,121,243,114,25,56,84,
214,10,22,80,70,232,222,35,54,237,57,60,110,83,167,76,50,172,42,28,212,53,68,71,93,208,111,70,134,173,81,188,218,235,45,254,91,104,129,184,218,96,26,198,152,170,23,137,183,70,236,216,71,163,197,146,42,
68,128,46,229,135,99,39,107,174,135,16,143,58,117,27,250,84,36,217,190,117,163,144,97,12,175,49,100,127,134,15,25,224,183,87,30,179,49,162,6,230,129,253,222,167,163,112,177,131,118,53,10,112,104,113,255,
253,101,185,14,241,215,83,62,245,59,57,19,49,124,162,133,62,140,154,70,179,194,48,222,29,132,210,159,18,137,36,203,113,225,194,121,26,252,110,95,234,241,248,147,188,212,188,136,110,174,40,40,60,241,233,
248,15,249,54,254,11,224,126,241,205,215,159,209,193,131,251,41,230,137,231,12,149,154,189,121,227,6,77,249,98,2,79,206,54,129,63,103,207,93,178,118,102,92,202,147,12,134,113,178,114,123,154,141,178,189,
207,254,212,22,227,11,144,249,223,207,226,234,19,197,138,151,228,207,113,83,69,114,158,168,170,131,55,13,100,51,65,5,184,215,123,247,79,231,85,133,129,47,58,229,44,66,93,102,152,138,148,247,61,123,230,
180,161,70,49,64,145,20,17,195,56,152,197,45,112,161,106,218,76,204,131,14,79,171,145,192,107,123,248,208,65,94,194,92,139,230,108,176,224,203,48,134,39,251,242,165,139,60,145,67,11,156,19,3,7,141,162,
137,227,71,233,206,96,174,223,160,9,61,251,194,235,194,177,91,219,53,138,182,32,177,80,196,48,6,205,91,182,165,108,217,179,243,129,162,183,153,24,79,32,177,18,55,38,209,42,133,8,117,66,193,32,137,68,34,
9,20,36,112,77,155,250,57,173,255,101,21,61,26,217,51,45,7,202,95,224,208,128,236,36,138,23,165,206,206,255,167,64,190,215,238,93,59,40,226,225,199,168,101,235,118,105,21,138,253,1,179,192,80,177,192,
140,44,102,47,77,65,85,39,58,160,251,155,74,6,195,120,214,172,21,167,98,163,186,204,97,214,72,172,251,123,70,131,105,231,137,108,52,53,120,232,24,190,227,96,108,34,179,113,232,224,126,65,245,0,139,146,
35,71,78,122,179,223,32,94,142,214,201,159,135,15,210,247,223,205,48,116,59,162,97,20,27,55,172,49,116,187,96,247,174,95,133,98,97,65,115,131,138,91,104,81,190,130,88,188,53,98,199,119,152,48,154,92,191,
110,149,144,97,92,249,129,170,92,190,207,91,8,14,98,224,87,252,176,132,122,68,63,41,180,93,168,172,12,29,241,49,159,69,89,189,106,133,207,4,62,24,150,15,84,169,70,15,181,239,162,235,162,142,130,59,187,
53,66,79,142,30,57,204,189,179,34,98,235,0,134,121,165,74,85,104,25,27,48,98,160,226,171,172,42,60,10,24,136,117,232,244,176,144,6,168,19,100,148,255,27,147,88,36,18,73,230,129,28,137,15,71,14,162,82,
247,222,207,147,204,235,213,107,36,116,47,116,114,244,232,97,218,176,110,53,253,178,122,229,127,254,250,132,112,213,89,51,190,166,37,139,190,231,51,190,8,55,196,126,21,5,118,200,150,205,27,232,199,21,
75,185,244,168,193,32,150,214,153,201,127,229,250,237,203,95,187,190,233,49,0,209,158,156,60,214,26,18,2,93,18,211,211,82,16,39,248,197,228,143,249,20,62,175,254,149,43,23,13,120,119,56,141,28,62,144,
123,143,179,10,152,42,239,219,127,112,186,105,222,203,236,134,63,126,220,40,74,78,14,176,56,128,11,69,152,113,32,106,128,108,52,176,12,162,19,24,111,27,55,174,229,49,212,90,52,104,216,132,199,138,107,
21,183,8,20,81,117,142,95,119,108,51,80,232,251,14,91,54,173,167,158,177,207,105,198,94,3,72,208,204,141,243,62,80,130,210,10,146,235,68,188,198,0,94,95,232,104,98,65,45,248,99,127,31,229,21,147,18,18,
19,184,196,26,6,107,144,54,44,89,234,126,161,138,75,238,44,101,23,45,79,5,118,220,249,110,206,116,122,119,176,120,121,84,220,76,48,0,192,2,221,79,196,194,99,180,143,115,5,138,48,185,115,231,165,162,69,
139,81,177,226,37,116,79,93,162,136,79,252,146,121,186,62,35,145,72,50,130,115,63,54,90,191,146,128,22,19,198,233,43,165,44,194,226,133,223,241,37,24,224,58,11,15,242,244,111,190,224,247,124,232,21,23,
47,89,138,231,156,192,22,176,178,123,65,194,237,4,186,113,227,58,119,132,28,59,246,23,119,30,92,186,120,193,176,62,156,63,127,214,148,223,6,32,28,193,172,182,221,129,247,28,179,234,88,144,43,4,97,1,236,
83,56,187,224,24,65,113,182,228,164,36,158,51,6,93,98,220,47,48,3,143,223,192,12,111,187,170,210,34,118,23,249,72,81,172,169,211,203,234,248,5,11,214,165,19,225,247,120,167,159,57,119,217,238,152,168,
136,197,236,126,21,148,61,183,109,235,70,154,61,115,42,69,247,124,154,63,71,69,45,76,35,227,228,58,176,127,79,48,186,224,19,84,45,227,193,249,37,74,165,189,134,105,226,177,31,14,241,233,13,243,135,166,
130,222,98,132,80,152,48,138,226,32,156,66,196,48,22,45,110,17,8,122,226,173,205,240,160,3,36,124,238,220,177,69,40,196,4,191,223,188,185,179,189,26,155,72,114,251,230,235,201,212,91,80,243,209,21,156,
23,85,217,98,20,40,254,177,90,240,183,195,133,10,94,107,209,144,10,87,32,135,228,143,36,146,55,80,105,201,200,132,83,137,68,34,241,4,114,37,48,83,39,42,183,41,241,13,156,58,168,91,129,37,179,186,144,232,
80,95,177,88,44,249,82,107,73,94,80,175,218,63,114,95,201,171,11,76,113,36,245,35,107,72,7,246,103,80,106,81,66,3,15,30,185,199,82,147,218,48,146,232,55,224,125,174,85,7,87,122,102,85,90,171,90,173,38,
189,244,202,27,220,147,237,4,70,241,152,81,239,243,17,141,145,32,35,31,69,61,68,216,100,112,44,173,43,248,94,199,217,8,88,68,141,1,225,20,102,26,198,48,70,83,116,166,125,3,227,117,247,46,227,212,40,220,
89,191,110,181,144,97,140,242,161,53,106,214,102,134,244,86,175,235,252,186,115,27,175,162,212,166,109,7,35,187,168,11,132,49,125,62,249,99,33,111,177,147,217,51,166,242,209,190,235,0,49,216,64,253,5,
185,9,70,114,45,71,33,250,165,198,147,134,182,169,64,90,32,147,174,89,122,64,63,149,187,160,159,116,151,244,19,125,84,12,214,87,203,150,112,157,154,239,250,198,208,54,37,146,255,32,236,196,116,60,21,23,
183,228,100,76,84,151,30,41,175,168,195,166,199,199,103,200,112,247,106,24,79,139,91,118,48,38,42,226,51,69,161,215,76,236,104,58,80,248,3,113,57,61,99,159,229,211,171,144,154,66,105,216,170,213,107,241,
76,119,35,167,41,180,64,204,243,163,143,245,228,165,14,93,167,122,49,29,60,122,212,96,174,132,97,52,208,130,21,209,83,196,244,130,167,50,218,70,2,175,113,84,170,7,223,23,152,98,210,42,110,17,8,205,90,
136,133,81,64,161,196,200,144,22,119,126,103,70,183,168,108,25,6,11,190,12,99,48,227,219,41,60,86,29,165,70,131,13,6,153,83,62,159,160,251,24,70,200,204,184,209,195,232,157,65,35,76,215,253,244,196,213,
171,87,232,227,49,195,12,43,236,225,228,124,222,251,232,90,206,194,218,43,74,36,153,68,146,53,140,66,236,255,237,152,85,137,36,32,84,117,194,180,217,75,22,183,106,213,202,86,162,72,174,87,216,43,187,79,
156,253,231,83,79,171,250,12,154,84,255,113,12,82,114,89,186,179,63,139,154,209,79,79,160,164,50,226,76,94,124,165,119,154,50,67,53,102,24,143,26,253,9,45,90,240,29,253,248,195,18,195,138,104,120,2,70,
48,166,238,123,68,61,73,5,10,22,74,247,30,12,9,136,116,95,188,104,142,244,138,168,17,136,170,115,48,18,204,4,113,198,40,188,34,82,225,71,171,184,133,191,20,41,90,140,202,87,168,44,180,174,209,106,20,238,
64,138,15,94,250,135,4,66,76,170,215,168,67,121,243,229,247,25,102,3,79,237,132,113,35,233,249,151,254,71,13,26,54,53,178,171,62,65,124,238,148,47,62,241,169,158,225,11,196,189,13,127,127,0,245,237,63,
136,138,222,99,110,9,118,87,144,36,56,134,13,72,205,8,161,184,145,221,184,240,20,137,196,12,110,102,203,75,121,110,200,240,33,137,196,31,84,82,119,92,186,102,239,135,191,139,23,13,127,150,61,220,171,170,
246,102,171,86,173,242,232,77,243,105,24,207,88,178,228,114,76,84,167,23,21,197,186,208,132,190,122,5,241,156,131,6,190,73,175,188,246,102,90,22,35,140,228,200,168,39,168,237,67,29,105,197,178,197,180,
102,245,74,67,19,173,16,198,1,153,180,78,157,187,122,12,33,248,121,229,114,30,7,109,100,93,110,87,16,208,95,171,118,125,161,117,205,12,163,112,130,68,47,200,97,85,175,161,93,33,92,164,184,133,63,184,150,
219,246,5,6,82,127,28,220,103,232,182,61,129,112,10,17,195,24,131,9,232,21,35,27,215,23,240,112,79,254,100,44,29,253,243,16,151,8,66,41,115,51,57,207,140,202,201,159,126,20,176,146,8,140,99,156,159,168,
252,24,12,163,126,215,175,219,233,139,207,199,167,171,140,105,36,201,150,160,68,139,73,36,126,147,100,243,95,238,74,34,249,143,115,205,78,246,200,248,248,248,132,200,200,7,243,132,89,179,67,142,120,252,
244,217,75,55,120,251,128,102,154,61,251,240,162,152,232,46,159,41,164,188,104,104,87,53,56,125,234,4,13,126,247,77,138,120,228,49,234,212,165,91,90,5,47,76,225,98,138,191,107,247,104,218,182,159,52,203,
71,0,0,7,248,73,68,65,84,101,35,15,226,70,121,105,127,140,50,24,48,165,203,148,167,250,13,26,83,195,70,205,60,202,178,156,63,127,142,190,253,122,178,169,241,171,160,97,227,102,60,91,95,11,76,35,155,36,
112,157,1,200,148,137,24,198,34,197,45,244,194,227,173,155,138,25,198,216,110,48,98,208,49,99,160,39,246,26,161,65,90,253,194,251,40,109,137,34,26,143,70,198,240,99,81,164,144,137,30,32,140,254,195,242,
197,188,140,166,81,3,59,12,74,39,77,28,195,67,110,16,114,132,162,55,70,131,236,100,104,149,227,60,55,19,57,69,45,201,234,132,36,223,206,236,46,72,36,119,33,234,13,187,93,233,50,43,46,158,103,79,134,90,
179,13,103,15,23,78,156,185,62,192,215,167,180,245,167,24,39,207,252,211,187,68,209,92,8,134,12,106,64,36,60,106,243,230,206,162,13,235,215,80,100,212,147,84,187,206,29,143,42,18,178,160,141,135,5,250,
181,40,183,136,66,12,200,180,135,124,202,149,43,151,184,252,7,166,192,97,100,229,200,145,131,194,115,229,166,194,133,139,114,137,168,251,75,151,229,178,104,222,42,179,160,182,57,12,137,248,37,243,13,143,
105,244,132,168,36,25,188,233,102,203,163,165,109,107,251,22,158,104,8,73,48,45,96,8,26,105,24,67,139,87,84,210,44,24,30,116,39,240,26,71,61,254,148,230,122,56,206,42,85,174,202,7,109,34,32,68,0,134,230,
188,239,102,82,179,22,173,169,126,195,166,188,13,127,193,113,127,240,192,62,54,112,92,199,246,207,90,211,142,25,12,24,177,84,170,92,133,157,139,173,249,57,42,114,188,120,3,70,252,174,93,59,184,22,40,102,
44,130,49,224,41,118,225,32,29,40,213,140,18,67,238,20,213,81,84,71,106,178,151,154,250,60,125,82,149,235,123,119,222,119,147,22,242,145,136,37,156,164,165,102,237,164,51,21,249,23,2,114,123,252,219,10,
174,167,213,158,74,22,161,182,72,199,54,197,218,19,37,144,246,50,126,182,232,165,67,148,251,230,127,163,114,154,68,98,32,55,29,14,181,243,204,184,197,220,64,136,137,234,212,76,81,172,49,73,170,218,120,
213,170,85,62,71,154,66,134,49,26,137,140,236,242,112,152,69,217,194,206,219,224,5,22,166,130,234,99,227,63,26,193,141,89,120,143,235,212,109,144,206,171,134,41,104,148,192,197,18,40,80,55,88,185,34,158,
199,50,163,198,121,176,120,239,157,62,65,219,150,40,240,194,191,248,108,116,64,109,244,237,227,223,68,3,140,173,96,233,44,234,193,169,199,104,22,103,207,158,230,58,200,88,32,19,8,21,8,36,55,162,216,71,
222,188,249,40,23,27,220,65,247,17,199,60,6,132,137,9,9,60,97,21,50,56,136,125,71,184,4,164,133,80,120,230,246,237,224,121,153,246,239,219,195,151,175,216,32,20,26,149,152,137,129,122,5,190,67,190,124,
249,41,71,206,156,188,207,208,101,78,98,3,77,232,48,195,8,190,116,233,2,15,133,193,57,142,242,169,102,105,87,250,162,192,181,227,244,232,154,65,148,108,11,229,6,177,205,110,94,14,131,68,162,133,131,221,
219,146,173,97,100,183,134,144,45,57,65,206,104,72,36,250,185,105,183,19,51,138,151,172,198,147,200,200,136,251,195,172,214,239,84,82,159,153,61,123,177,166,6,176,144,97,12,226,226,22,159,140,138,234,
210,46,132,20,88,223,249,3,232,176,223,160,2,215,196,143,63,160,252,5,10,242,105,118,76,59,139,76,107,107,129,132,36,220,212,215,173,93,69,219,183,110,52,53,185,79,34,17,229,194,249,115,124,217,148,217,
29,209,1,140,90,156,167,88,238,38,224,189,13,73,150,6,136,36,243,177,176,193,89,104,242,45,162,228,224,204,12,74,36,255,46,212,243,108,121,152,25,197,60,6,47,53,174,120,137,170,210,196,233,179,23,251,
78,252,73,69,216,48,6,176,180,99,163,34,218,178,187,200,74,202,36,227,24,64,182,205,89,5,167,80,161,34,244,64,213,234,220,179,86,166,76,57,94,77,197,25,143,236,13,132,7,32,86,20,55,111,36,109,237,249,
125,87,208,194,19,36,18,137,68,34,145,72,36,134,243,123,130,93,137,136,139,91,204,139,76,164,72,179,133,199,177,63,151,79,159,189,104,184,104,35,186,12,99,48,109,246,162,157,81,81,93,154,135,144,242,67,
102,132,85,184,131,12,121,20,152,112,22,153,64,60,49,164,178,242,230,201,71,217,115,228,224,106,19,136,85,134,23,248,230,205,127,232,226,133,11,166,148,13,150,72,36,18,137,68,34,145,4,29,84,84,154,152,
96,191,216,63,46,110,67,154,151,179,120,209,240,143,137,148,223,103,204,89,242,214,52,29,117,161,116,27,198,0,158,227,152,71,59,54,80,66,109,11,40,125,66,222,122,149,212,93,10,41,40,95,231,57,171,205,
100,48,149,11,143,114,48,139,129,72,36,18,137,68,34,145,72,130,206,62,102,247,245,98,198,239,79,174,47,246,140,238,252,188,133,104,239,180,89,139,39,235,49,138,129,95,134,49,152,254,125,252,137,86,173,
90,53,101,22,249,56,23,41,183,38,138,74,59,18,28,137,247,133,90,66,94,86,20,165,55,101,98,200,133,68,34,145,72,36,18,137,228,95,199,89,85,165,225,39,207,94,159,236,94,168,227,241,135,219,22,113,100,207,
190,113,134,64,162,157,39,252,54,140,65,170,228,197,75,49,81,17,241,164,208,231,10,81,49,82,148,94,97,214,144,42,9,118,122,34,244,159,228,9,74,30,107,47,34,229,85,182,158,172,185,42,145,72,36,18,137,68,
34,241,151,131,42,169,19,175,221,80,166,46,90,180,200,99,92,236,204,133,43,81,38,210,239,82,145,1,25,198,78,166,207,94,180,52,166,99,199,74,106,30,219,251,204,56,126,153,25,194,173,195,172,180,87,205,
99,237,63,99,206,210,225,221,187,63,240,65,136,229,254,174,22,69,137,36,82,219,178,247,253,23,58,149,72,36,18,137,68,34,145,252,71,80,255,86,85,101,49,145,61,110,102,220,178,141,14,135,195,84,113,119,
67,12,99,48,61,62,30,245,90,123,199,70,182,255,148,172,161,131,216,223,81,10,41,147,123,70,118,126,154,253,253,202,180,217,139,230,176,199,57,173,90,181,202,86,188,104,120,99,82,149,6,204,136,174,78,10,
85,96,175,151,102,75,184,81,125,145,72,36,18,137,68,34,145,220,117,92,97,203,65,182,236,82,29,234,118,69,77,94,59,45,110,217,65,231,155,211,103,155,223,1,195,12,99,39,211,226,150,67,192,52,166,103,247,
206,131,44,33,150,87,153,225,139,68,188,205,177,209,17,211,18,236,234,192,85,171,86,157,100,207,127,78,93,210,136,233,216,49,183,61,15,21,178,216,45,185,44,86,202,229,112,80,152,162,88,178,41,42,161,72,
188,213,161,168,188,162,135,69,85,28,170,133,237,46,85,117,88,20,74,118,56,148,100,197,162,36,59,236,148,108,177,216,147,21,69,73,102,111,57,20,178,217,137,75,20,39,37,59,108,182,224,86,12,144,72,36,18,
137,68,34,249,151,98,73,78,182,88,109,33,176,33,173,164,56,66,152,77,102,83,85,197,170,88,44,33,164,82,168,67,37,155,162,56,44,22,213,98,131,253,198,108,51,139,226,112,176,167,22,135,226,96,182,155,226,
72,38,85,73,98,159,185,161,90,237,55,108,118,251,197,4,74,56,19,23,183,234,159,204,254,110,134,27,198,78,102,204,93,114,132,61,244,233,216,177,227,219,5,114,217,58,49,3,57,50,204,170,108,143,137,142,152,
169,216,19,63,75,53,160,211,72,245,56,95,51,171,63,18,137,68,34,145,72,36,18,137,47,76,51,140,157,196,199,199,163,156,212,60,44,145,145,85,67,67,148,251,26,43,214,144,39,152,129,28,174,16,93,39,85,61,
236,112,208,129,36,82,143,205,157,27,127,214,236,216,17,137,68,34,145,72,36,18,137,196,19,166,27,198,174,196,197,253,158,200,30,86,167,46,40,198,161,116,239,222,185,100,168,149,42,134,144,90,227,241,200,
78,5,98,162,34,44,68,170,162,144,146,236,80,40,65,81,153,161,172,88,216,159,142,36,246,71,154,209,172,168,138,69,85,200,166,192,125,79,112,217,115,55,190,37,152,223,199,23,172,63,14,82,45,50,132,195,100,
84,82,29,138,162,200,253,28,12,84,156,140,170,220,215,193,128,95,243,228,190,14,10,8,207,83,228,190,14,6,184,126,88,228,125,49,40,32,220,84,181,120,190,55,34,32,21,161,13,248,219,145,26,238,192,140,42,
11,140,45,226,81,170,236,145,189,207,218,72,253,155,253,108,220,190,82,216,231,84,252,173,40,60,188,53,101,157,59,13,179,247,153,105,231,179,95,216,36,81,178,170,18,36,214,236,10,66,42,200,194,108,67,
245,54,123,231,92,130,122,100,97,170,173,152,105,252,31,227,128,192,55,50,252,16,34,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* AiassAudioProcessorEditor::commoFinal2_png = (const char*) resource_AiassAudioProcessorEditor_commoFinal2_png;
const int AiassAudioProcessorEditor::commoFinal2_pngSize = 21153;


//[EndFile] You can add extra defines here...
//[/EndFile]
