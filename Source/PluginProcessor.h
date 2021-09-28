/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Sid.h"
#include <math.h>

//==============================================================================


class AiassAudioProcessor  : public AudioProcessor
	                        ,private AudioProcessorValueTreeState::Listener
	                        
{
public:
    //==============================================================================
    AiassAudioProcessor();
    ~AiassAudioProcessor();


    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
	void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;
	
	Sid * getSid() {
		return m_sid;
	}

	bool LED = false;

	AudioProcessorValueTreeState parameters;
   	
    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect () const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

private:
	void parameterChanged(const String& parameterID, float newValue) override;
	void setWaveformStatus(BYTE Voice, BYTE Waveform, bool State);
	void setFilterStatus(BYTE FilterStatusBit, bool State);
	void setFilterMode(BYTE FilterModeBit, bool State);
	void noteOn(MidiMessage m);
	void noteOff(MidiMessage m);
	
    //==============================================================================

	enum PlayModes {Retrigger,Legato,LastStep};
	enum PriorityModes {LastNote, HighNote, LowNote};
	
	Sid  * m_sid;

	bool VOICE1 = true;
	bool VOICE2 = true;
	bool VOICE3 = true;
	bool V1isPlaying = false;
	bool V2isPlaying = false;
	bool V3isPlaying = false;
	int OCTAVE1 = 0;
	int OCTAVE2 = 0;
	int OCTAVE3 = 0;
	int SEMI1 = 0;
	int SEMI2 = 0;
	int SEMI3 = 0;
	float CENT1 = 0;
	float CENT2 = 0;
	float CENT3 = 0;

	bool TRIA1 = false;
	bool SAW1 = false;
	bool PULSE1 = true;
	bool NOISE1 = false;
	bool TRIA2 = false;
	bool SAW2 = false;
	bool PULSE2 = true;
	bool NOISE2 = false;
	bool TRIA3 = false;
	bool SAW3 = false;
	bool PULSE3 = true;
	bool NOISE3 = false;

	bool FILTER8580 = true;

	bool FILTER1 = false;
	bool FILTER2 = false;
	bool FILTER3 = false;
	bool FILTERIN = false;

	bool LOWPASS = false;
	bool BANDPASS = false;
	bool HIGHPASS = false;
	bool F3OFF = false;
	bool VELVOL = false;

	PlayModes LEGATOMODE = Retrigger;
	PriorityModes NOTEPRIORITYMODE = LastNote;

	int	MIDICHANNEL = 0;

	Array<MidiMessage> heldNotesList{};
	MidiMessage isPlaying;

	
	int MyProgram = 0;
	
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AiassAudioProcessor)
};
