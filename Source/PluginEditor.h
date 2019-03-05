/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class AiassAudioProcessorEditor  : public AudioProcessorEditor,
                                   private Timer,
                                   public ComboBox::Listener
{
public:
    //==============================================================================
    AiassAudioProcessorEditor (AiassAudioProcessor& p, AudioProcessorValueTreeState& vts);
    ~AiassAudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
	typedef AudioProcessorValueTreeState::ButtonAttachment ButtonAttachment;
	typedef AudioProcessorValueTreeState::ComboBoxAttachment ComboBoxAttachment;

	//==============================================================================
	AiassAudioProcessor& getProcessor() const
	{
		return static_cast<AiassAudioProcessor&> (processor);
	}

	void set_LED_On(void) {
		Led->setState(juce::Button::buttonDown);
	}
	void set_LED_Off(void) {
		Led->setState(juce::Button::buttonNormal);
	}

	void timerCallback() override;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;

    // Binary resources:
    static const char* aiassmonoHintergrund4_png;
    static const int aiassmonoHintergrund4_pngSize;
    static const char* commoFinal3_png;
    static const int commoFinal3_pngSize;
    static const char* redledonth_png;
    static const int redledonth_pngSize;
    static const char* ledredoffth_png;
    static const int ledredoffth_pngSize;
    static const char* commoFinal2_png;
    static const int commoFinal2_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.

       //AiassAudioProcessor& processor;
	   AudioProcessorValueTreeState& valueTreeState;
	   ScopedPointer<SliderAttachment>SidVolAttachment;
	   ScopedPointer<ButtonAttachment>VelvolAttachment;
	   ScopedPointer<SliderAttachment>Attack1Attachment;
	   ScopedPointer<SliderAttachment>Attack2Attachment;
	   ScopedPointer<SliderAttachment>Attack3Attachment;
	   ScopedPointer<SliderAttachment>Decay1Attachment;
	   ScopedPointer<SliderAttachment>Decay2Attachment;
	   ScopedPointer<SliderAttachment>Decay3Attachment;
	   ScopedPointer<SliderAttachment>Sustain1Attachment;
	   ScopedPointer<SliderAttachment>Sustain2Attachment;
	   ScopedPointer<SliderAttachment>Sustain3Attachment;
	   ScopedPointer<SliderAttachment>Release1Attachment;
	   ScopedPointer<SliderAttachment>Release2Attachment;
	   ScopedPointer<SliderAttachment>Release3Attachment;
	   ScopedPointer<SliderAttachment>Pulsw1Attachment;
	   ScopedPointer<SliderAttachment>Pulsw2Attachment;
	   ScopedPointer<SliderAttachment>Pulsw3Attachment;
	   ScopedPointer<ButtonAttachment>Voice1Attachment;
	   ScopedPointer<ButtonAttachment>Voice2Attachment;
	   ScopedPointer<ButtonAttachment>Voice3Attachment;
	   ScopedPointer<SliderAttachment>Octave1Attachment;
	   ScopedPointer<SliderAttachment>Octave2Attachment;
	   ScopedPointer<SliderAttachment>Octave3Attachment;
	   ScopedPointer<SliderAttachment>Semi1Attachment;
	   ScopedPointer<SliderAttachment>Semi2Attachment;
	   ScopedPointer<SliderAttachment>Semi3Attachment;
	   ScopedPointer<SliderAttachment>Cent1Attachment;
	   ScopedPointer<SliderAttachment>Cent2Attachment;
	   ScopedPointer<SliderAttachment>Cent3Attachment;
	   ScopedPointer<ButtonAttachment>Noise1Attachment;
	   ScopedPointer<ButtonAttachment>Noise2Attachment;
	   ScopedPointer<ButtonAttachment>Noise3Attachment;
	   ScopedPointer<ButtonAttachment>Pulse1Attachment;
	   ScopedPointer<ButtonAttachment>Pulse2Attachment;
	   ScopedPointer<ButtonAttachment>Pulse3Attachment;
	   ScopedPointer<ButtonAttachment>Saw1Attachment;
	   ScopedPointer<ButtonAttachment>Saw2Attachment;
	   ScopedPointer<ButtonAttachment>Saw3Attachment;
	   ScopedPointer<ButtonAttachment>Tria1Attachment;
	   ScopedPointer<ButtonAttachment>Tria2Attachment;
	   ScopedPointer<ButtonAttachment>Tria3Attachment;
	   ScopedPointer<ButtonAttachment>Ringmod1Attachment;
	   ScopedPointer<ButtonAttachment>Ringmod2Attachment;
	   ScopedPointer<ButtonAttachment>Ringmod3Attachment;
	   ScopedPointer<ButtonAttachment>Sync1Attachment;
	   ScopedPointer<ButtonAttachment>Sync2Attachment;
	   ScopedPointer<ButtonAttachment>Sync3Attachment;
	   ScopedPointer<SliderAttachment>FilterfreqAttachment;
	   ScopedPointer<SliderAttachment>ResonanceAttachment;
	   ScopedPointer<ButtonAttachment>Filter8085Attachment;
	   ScopedPointer<ButtonAttachment>Filter1Attachment;
	   ScopedPointer<ButtonAttachment>Filter2Attachment;
	   ScopedPointer<ButtonAttachment>Filter3Attachment;
	   ScopedPointer<ButtonAttachment>FilterinAttachment;
	   ScopedPointer<ButtonAttachment>FilterLPAttachment;
	   ScopedPointer<ButtonAttachment>FilterBPAttachment;
	   ScopedPointer<ButtonAttachment>FilterHPAttachment;
	   ScopedPointer<ButtonAttachment>Filter3OFFAttachment;
	   ScopedPointer<ComboBoxAttachment>LegatoModeAttachment;
	   ScopedPointer<ComboBoxAttachment>NotePrioritymodeAttachment;


	   TooltipWindow tooltipWindow; // to add tooltips to an application, you
									// just need to create one of these and leave it
									// there to do its work..

	   Sid * m_sid;

	   int hz1 = 0; //for error-LED flashing


    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<GroupComponent> groupComponent5;
    std::unique_ptr<GroupComponent> groupComponent4;
    std::unique_ptr<GroupComponent> groupComponent2;
    std::unique_ptr<GroupComponent> groupComponent;
    std::unique_ptr<GroupComponent> groupComponent3;
    std::unique_ptr<Slider> sidvolume;
    std::unique_ptr<Slider> Octave1;
    std::unique_ptr<Slider> Octave2;
    std::unique_ptr<Slider> Octave3;
    std::unique_ptr<Slider> Semi1;
    std::unique_ptr<Slider> Semi2;
    std::unique_ptr<Slider> Semi3;
    std::unique_ptr<Slider> Cent1;
    std::unique_ptr<Slider> Cent2;
    std::unique_ptr<Slider> Cent3;
    std::unique_ptr<Slider> Attack1;
    std::unique_ptr<Slider> Attack2;
    std::unique_ptr<Slider> Attack3;
    std::unique_ptr<Slider> Decay1;
    std::unique_ptr<Slider> Decay2;
    std::unique_ptr<Slider> Decay3;
    std::unique_ptr<Slider> Sustain1;
    std::unique_ptr<Slider> Sustain2;
    std::unique_ptr<Slider> Sustain3;
    std::unique_ptr<Slider> Release1;
    std::unique_ptr<Slider> Release2;
    std::unique_ptr<Slider> Release3;
    std::unique_ptr<Slider> Pulsew1;
    std::unique_ptr<Slider> Pulsew2;
    std::unique_ptr<Slider> Pulsew3;
    std::unique_ptr<ToggleButton> Velvol;
    std::unique_ptr<ComboBox> legatomode;
    std::unique_ptr<ComboBox> noteprioritymode;
    std::unique_ptr<HyperlinkButton> hyperlinkButton;
    std::unique_ptr<ToggleButton> Filter1;
    std::unique_ptr<ToggleButton> Filter2;
    std::unique_ptr<ToggleButton> Filter3off;
    std::unique_ptr<ToggleButton> Filter3;
    std::unique_ptr<ToggleButton> Filterin;
    std::unique_ptr<ToggleButton> Filterlp;
    std::unique_ptr<ToggleButton> Filterhp;
    std::unique_ptr<ToggleButton> Filterbp;
    std::unique_ptr<ToggleButton> Filter8085;
    std::unique_ptr<Slider> CutOff;
    std::unique_ptr<Slider> Resonace;
    std::unique_ptr<ToggleButton> Noise1;
    std::unique_ptr<ToggleButton> Noise2;
    std::unique_ptr<ToggleButton> Noise3;
    std::unique_ptr<ToggleButton> Pulse1;
    std::unique_ptr<ToggleButton> Pulse2;
    std::unique_ptr<ToggleButton> Pulse3;
    std::unique_ptr<ToggleButton> Saw1;
    std::unique_ptr<ToggleButton> Saw2;
    std::unique_ptr<ToggleButton> Saw3;
    std::unique_ptr<ToggleButton> Tria1;
    std::unique_ptr<ToggleButton> Tria2;
    std::unique_ptr<ToggleButton> Tria3;
    std::unique_ptr<ToggleButton> Ringmod1;
    std::unique_ptr<ToggleButton> Ringmod2;
    std::unique_ptr<ToggleButton> Ringmod3;
    std::unique_ptr<ToggleButton> Sync1;
    std::unique_ptr<ToggleButton> Sync2;
    std::unique_ptr<ToggleButton> Sync3;
    std::unique_ptr<ToggleButton> Voice1;
    std::unique_ptr<ToggleButton> Voice2;
    std::unique_ptr<ToggleButton> Voice3;
    std::unique_ptr<ImageButton> Led;
    Image cachedImage_aiassmonoHintergrund4_png_1;
    Image cachedImage_commoFinal2_png_2;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AiassAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...



//[/EndFile]

