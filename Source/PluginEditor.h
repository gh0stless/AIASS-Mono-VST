/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.7

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
    ~AiassAudioProcessorEditor() override;

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
    static const char* redledoff_png;
    static const int redledoff_pngSize;
    static const char* redledon_png;
    static const int redledon_pngSize;
    static const char* aiasshintergrund_png;
    static const int aiasshintergrund_pngSize;
    static const char* aiass_mono_typenschild_png;
    static const int aiass_mono_typenschild_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.

       //AiassAudioProcessor& processor;
	   AudioProcessorValueTreeState& valueTreeState;
	   std::unique_ptr<SliderAttachment>SidVolAttachment;
       std::unique_ptr<ButtonAttachment>VelvolAttachment;
	   std::unique_ptr<SliderAttachment>Attack1Attachment;
	   std::unique_ptr<SliderAttachment>Attack2Attachment;
	   std::unique_ptr<SliderAttachment>Attack3Attachment;
	   std::unique_ptr<SliderAttachment>Decay1Attachment;
	   std::unique_ptr<SliderAttachment>Decay2Attachment;
	   std::unique_ptr<SliderAttachment>Decay3Attachment;
	   std::unique_ptr<SliderAttachment>Sustain1Attachment;
	   std::unique_ptr<SliderAttachment>Sustain2Attachment;
	   std::unique_ptr<SliderAttachment>Sustain3Attachment;
	   std::unique_ptr<SliderAttachment>Release1Attachment;
	   std::unique_ptr<SliderAttachment>Release2Attachment;
	   std::unique_ptr<SliderAttachment>Release3Attachment;
	   std::unique_ptr<SliderAttachment>Pulsw1Attachment;
	   std::unique_ptr<SliderAttachment>Pulsw2Attachment;
	   std::unique_ptr<SliderAttachment>Pulsw3Attachment;
	   std::unique_ptr<ButtonAttachment>Voice1Attachment;
	   std::unique_ptr<ButtonAttachment>Voice2Attachment;
	   std::unique_ptr<ButtonAttachment>Voice3Attachment;
	   std::unique_ptr<SliderAttachment>Octave1Attachment;
	   std::unique_ptr<SliderAttachment>Octave2Attachment;
	   std::unique_ptr<SliderAttachment>Octave3Attachment;
	   std::unique_ptr<SliderAttachment>Semi1Attachment;
	   std::unique_ptr<SliderAttachment>Semi2Attachment;
	   std::unique_ptr<SliderAttachment>Semi3Attachment;
	   std::unique_ptr<SliderAttachment>Cent1Attachment;
	   std::unique_ptr<SliderAttachment>Cent2Attachment;
	   std::unique_ptr<SliderAttachment>Cent3Attachment;
	   std::unique_ptr<ButtonAttachment>Noise1Attachment;
	   std::unique_ptr<ButtonAttachment>Noise2Attachment;
	   std::unique_ptr<ButtonAttachment>Noise3Attachment;
	   std::unique_ptr<ButtonAttachment>Pulse1Attachment;
	   std::unique_ptr<ButtonAttachment>Pulse2Attachment;
	   std::unique_ptr<ButtonAttachment>Pulse3Attachment;
	   std::unique_ptr<ButtonAttachment>Saw1Attachment;
	   std::unique_ptr<ButtonAttachment>Saw2Attachment;
	   std::unique_ptr<ButtonAttachment>Saw3Attachment;
	   std::unique_ptr<ButtonAttachment>Tria1Attachment;
	   std::unique_ptr<ButtonAttachment>Tria2Attachment;
	   std::unique_ptr<ButtonAttachment>Tria3Attachment;
	   std::unique_ptr<ButtonAttachment>Ringmod1Attachment;
	   std::unique_ptr<ButtonAttachment>Ringmod2Attachment;
	   std::unique_ptr<ButtonAttachment>Ringmod3Attachment;
	   std::unique_ptr<ButtonAttachment>Sync1Attachment;
	   std::unique_ptr<ButtonAttachment>Sync2Attachment;
	   std::unique_ptr<ButtonAttachment>Sync3Attachment;
	   std::unique_ptr<SliderAttachment>FilterfreqAttachment;
	   std::unique_ptr<SliderAttachment>ResonanceAttachment;
	   std::unique_ptr<ButtonAttachment>Filter8580Attachment;
	   std::unique_ptr<ButtonAttachment>Filter1Attachment;
	   std::unique_ptr<ButtonAttachment>Filter2Attachment;
	   std::unique_ptr<ButtonAttachment>Filter3Attachment;
	   std::unique_ptr<ButtonAttachment>FilterinAttachment;
	   std::unique_ptr<ButtonAttachment>FilterLPAttachment;
	   std::unique_ptr<ButtonAttachment>FilterBPAttachment;
	   std::unique_ptr<ButtonAttachment>FilterHPAttachment;
	   std::unique_ptr<ButtonAttachment>Filter3OFFAttachment;
	   std::unique_ptr<ComboBoxAttachment>LegatoModeAttachment;
	   std::unique_ptr<ComboBoxAttachment>NotePrioritymodeAttachment;


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
    std::unique_ptr<ToggleButton> Filter8580;
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
    Image cachedImage_aiasshintergrund_png_1;
    Image cachedImage_aiass_mono_typenschild_png_2;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AiassAudioProcessorEditor)
};

//[EndFile] You can add extra defines here...



//[/EndFile]

