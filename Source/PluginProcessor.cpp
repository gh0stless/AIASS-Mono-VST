/*
  ==============================================================================

	AIASS-Mono VST by gh0stless for www.crazy-midi.de Start: Oct. 2017

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "Sid.h"


	//==============================================================================
	AiassAudioProcessor::AiassAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
		 : AudioProcessor(BusesProperties()
#if ! JucePlugin_IsMidiEffect
#if ! JucePlugin_IsSynth
			.withInput("Input", AudioChannelSet::stereo(), true)
#endif
			.withOutput("Output", AudioChannelSet::stereo(), true)
#endif
		)
#endif
		
		,parameters(*this, nullptr)
	{
		using Parameter = AudioProcessorValueTreeState::Parameter;
		
		parameters.createAndAddParameter(std::make_unique<Parameter>("SidVol",       // parameterID
			"SIDVolume",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			15.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("VelVol",       // parameterID
			"Velocity",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("AttAck1",       // parameterID
			"Attack 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			1.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("AttAck2",       // parameterID
			"Attack 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			1.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("AttAck3",       // parameterID
			"Attack 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			1.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("DeCay1",       // parameterID
			"Decay 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("DeCay2",       // parameterID
			"Decay 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("DeCay3",       // parameterID
			"Decay 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SuStain1",       // parameterID
			"Sustain 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SuStain2",       // parameterID
			"Sustain 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SuStain3",       // parameterID
			"Sustain 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("ReLease1",       // parameterID
			"Release 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("ReLease2",       // parameterID
			"Release 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("ReLease3",       // parameterID
			"Release 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			7.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("PulsW1",       // parameterID
			"Pulswith 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(1.0f, 4094.0f, 1.0f),    // range
			1024.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("PulsW2",       // parameterID
			"Pulswith 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(1.0f, 4094.0f, 1.0f),    // range
			1024.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("PulsW3",       // parameterID
			"Pulswith 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(1.0f, 4094.0f, 1.0f),    // range
			1024.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("VoiCe1",       // parameterID
			"Voice 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			1.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("VoiCe2",       // parameterID
			"Voice 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			1.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("VoiCe3",       // parameterID
			"Voice 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			1.0f,         // default value
			[](float value)
			{
				// value to text function
				return value < 0.5 ? "Off" : "On";
			},
			[](const String& text)
			{
				// text to value function
				if (text == "Off") return 0.0f;
				if (text == "On")  return 1.0f;
				return 0.0f;
			}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("OcTave1",       // parameterID
			"Octave 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-4.0f, 4.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("OcTave2",       // parameterID
			"Octave 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-4.0f, 4.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("OcTave3",       // parameterID
			"Octave 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-4.0f, 4.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SeMi1",       // parameterID
			"Semitone 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-12.0f, 12.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SeMi2",       // parameterID
			"Semitone 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-12.0f, 12.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SeMi3",       // parameterID
			"Semitone 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-12.0f, 12.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("CenT1",       // parameterID
			"Cent 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-100.0f, 100.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("CenT2",       // parameterID
			"Cent 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-100.0f, 100.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("CenT3",       // parameterID
			"Cent 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(-100.0f, 100.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("NoiSe1",       // parameterID
			"Noise 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("NoiSe2",       // parameterID
			"Noise 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("NoiSe3",       // parameterID
			"Noise 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("PulSe1",       // parameterID
			"Pulse 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			1.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("PulSe2",       // parameterID
			"Pulse 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			1.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("PulSe3",       // parameterID
			"Pulse 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			1.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SaW1",       // parameterID
			"Saw 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SaW2",       // parameterID
			"Saw 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SaW3",       // parameterID
			"Saw 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("TriA1",       // parameterID
			"Tria 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("TriA2",       // parameterID
			"Tria 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("TriA3",       // parameterID
			"Tria 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("RingMod1",       // parameterID
			"Ringmod 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("RingMod2",       // parameterID
			"Ringmod 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("RingMod3",       // parameterID
			"Ringmod 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SynC1",      // parameterID
			"Sync 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SynC2",      // parameterID
			"Sync 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("SynC3",      // parameterID
			"Sync 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));
		
		parameters.createAndAddParameter(std::make_unique<Parameter>("FilterFreq",       // parameterID
			"Cutoff",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 2047.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));
		
		parameters.createAndAddParameter(std::make_unique<Parameter>("ResoNance",       // parameterID
			"Resonance",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 15.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTer8580",       // parameterID
			"8580",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			1.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTer1",       // parameterID
			"Filter 1",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTer2",       // parameterID
			"Filter 2",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTer3",       // parameterID
			"Filter 3",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTerIn",       // parameterID
			"Filter In",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTerLP",       // parameterID
			"Low Pass",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTerBP",       // parameterID
			"Band Pass",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTerHP",       // parameterID
			"High Pass",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("FilTer3OFF",       // parameterID
			"3OFF",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 1.0f, 1.0f),    // range
			0.0f,         // default value
			[](float value)
		{
			// value to text function
			return value < 0.5 ? "Off" : "On";
		},
			[](const String& text)
		{
			// text to value function
			if (text == "Off") return 0.0f;
			if (text == "On")  return 1.0f;
			return 0.0f;
		}));

		parameters.createAndAddParameter(std::make_unique<Parameter>("LegatoMode",       // parameterID
			"Legatomode",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 2.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("NotePriorityMode",       // parameterID
			"Notepriority",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 2.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));

		parameters.createAndAddParameter(std::make_unique<Parameter>("MidiChannel",       // parameterID
			"Midichannel",       // parameter name
			String(),     // parameter label (suffix)
			NormalisableRange<float>(0.0f, 16.0f, 1.0f),    // range
			0.0f,         // default value
			nullptr,
			nullptr));
		
		parameters.state = ValueTree(Identifier("AIASS"));

		parameters.addParameterListener("SidVol", this);
		parameters.addParameterListener("VelVol", this);
		parameters.addParameterListener("AttAck1", this);
		parameters.addParameterListener("AttAck2", this);
		parameters.addParameterListener("AttAck3", this);
		parameters.addParameterListener("DeCay1", this);
		parameters.addParameterListener("DeCay2", this);
		parameters.addParameterListener("DeCay3", this);
		parameters.addParameterListener("SuStain1", this);
		parameters.addParameterListener("SuStain2", this);
		parameters.addParameterListener("SuStain3", this);
		parameters.addParameterListener("ReLease1", this);
		parameters.addParameterListener("ReLease2", this);
		parameters.addParameterListener("ReLease3", this);
		parameters.addParameterListener("PulsW1", this);
		parameters.addParameterListener("PulsW2", this);
		parameters.addParameterListener("PulsW3", this);
		parameters.addParameterListener("VoiCe1", this);
		parameters.addParameterListener("VoiCe2", this);
		parameters.addParameterListener("VoiCe3", this);
		parameters.addParameterListener("OcTave1", this);
		parameters.addParameterListener("OcTave2", this);
		parameters.addParameterListener("OcTave3", this);
		parameters.addParameterListener("SeMi1", this);
		parameters.addParameterListener("SeMi2", this);
		parameters.addParameterListener("SeMi3", this);
		parameters.addParameterListener("CenT1", this);
		parameters.addParameterListener("CenT2", this);
		parameters.addParameterListener("CenT3", this);
		parameters.addParameterListener("NoiSe1", this);
		parameters.addParameterListener("NoiSe2", this);
		parameters.addParameterListener("NoiSe3", this);
		parameters.addParameterListener("PulSe1", this);
		parameters.addParameterListener("PulSe2", this);
		parameters.addParameterListener("PulSe3", this);
		parameters.addParameterListener("SaW1", this);
		parameters.addParameterListener("SaW2", this);
		parameters.addParameterListener("SaW3", this);
		parameters.addParameterListener("TriA1", this);
		parameters.addParameterListener("TriA2", this);
		parameters.addParameterListener("TriA3", this);
		parameters.addParameterListener("RingMod1", this);
		parameters.addParameterListener("RingMod2", this);
		parameters.addParameterListener("RingMod3", this);
		parameters.addParameterListener("SynC1", this);
		parameters.addParameterListener("SynC2", this);
		parameters.addParameterListener("SynC3", this);
		parameters.addParameterListener("FilterFreq", this);
		parameters.addParameterListener("ResoNance", this);
		parameters.addParameterListener("FilTer8580", this);
		parameters.addParameterListener("FilTer1", this);
		parameters.addParameterListener("FilTer2", this);
		parameters.addParameterListener("FilTer3", this);
		parameters.addParameterListener("FilTerIn", this);
		parameters.addParameterListener("FilTerLP", this);
		parameters.addParameterListener("FilTerBP", this);
		parameters.addParameterListener("FilTerHP", this);
		parameters.addParameterListener("FilTer3OFF", this);
		parameters.addParameterListener("LegatoMode", this);
		parameters.addParameterListener("NotePriorityMode", this);
		parameters.addParameterListener("MidiChannel", this);
		
		m_sid = new Sid();

		m_sid->init();
		
		m_sid->set_volume(15);
		m_sid->set_a(1, 1);
		m_sid->set_d(1, 7);
		m_sid->set_s(1, 7);
		m_sid->set_r(1, 7);
		m_sid->set_a(2, 1);
		m_sid->set_d(2, 7);
		m_sid->set_s(2, 7);
		m_sid->set_r(2, 7);
		m_sid->set_a(3, 1);
		m_sid->set_d(3, 7);
		m_sid->set_s(3, 7);
		m_sid->set_r(3, 7);
		m_sid->set_pulsw(1, 1024);
		m_sid->set_pulsw(2, 1024);
		m_sid->set_pulsw(3, 1024);

		setWaveformStatus(1, 3, true);
		setWaveformStatus(2, 3, true);
		setWaveformStatus(3, 3, true);



	}

	AiassAudioProcessor::~AiassAudioProcessor()
	{
		m_sid->init();
		delete m_sid;
	}

	//==============================================================================
	const String AiassAudioProcessor::getName() const
	{
		return JucePlugin_Name;
	}

	bool AiassAudioProcessor::acceptsMidi() const
	{
#if JucePlugin_WantsMidiInput
		return true;
#else
		return false;
#endif
	}

	bool AiassAudioProcessor::producesMidi() const
	{
#if JucePlugin_ProducesMidiOutput
		return true;
#else
		return false;
#endif
	}

	bool AiassAudioProcessor::isMidiEffect() const
	{
#if JucePlugin_IsMidiEffect
		return true;
#else
		return false;
#endif
	}

	double AiassAudioProcessor::getTailLengthSeconds() const
	{
		return 0.0;
	}

	int AiassAudioProcessor::getNumPrograms()
	{
		return 3;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
					// so this should be at least 1, even if you're not really implementing programs.
	}

	int AiassAudioProcessor::getCurrentProgram()
	{
		return MyProgram;
	}

	void AiassAudioProcessor::setCurrentProgram(int index)
	{
		Value SIDVolume = parameters.getParameterAsValue("SidVol");
		switch (index) {
		case 0:	SIDVolume = 15.0f;
			MyProgram = 0;
			break;
		case 1: SIDVolume = 7.0f;
			MyProgram = 1;
			break;
		case 2: SIDVolume = 1.0f;
			MyProgram = 2;
			break;
		}
	}

	const String AiassAudioProcessor::getProgramName(int index)
	{
		switch (index) {
		case 0:	return { "init 1" };
				break;
		case 1:	return { "init 2" };
				break;
		case 2:	return { "init 3" };
				break;
		default: return {};
		}
	}

	void AiassAudioProcessor::changeProgramName(int index, const String& newName)
	{
	}

	//==============================================================================
	void AiassAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
	{
		// Use this method as the place to do any pre-playback
		// initialisation that you need..

	}

	void AiassAudioProcessor::releaseResources()
	{
		// When playback stops, you can use this as an opportunity to free up any
		// spare memory, etc.
	}

#ifndef JucePlugin_PreferredChannelConfigurations
	bool AiassAudioProcessor::isBusesLayoutSupported(const BusesLayout& layouts) const
	{
#if JucePlugin_IsMidiEffect
		ignoreUnused(layouts);
		return true;
#else
		// This is the place where you check if the layout is supported.
		// In this template code we only support mono or stereo.
		if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
			&& layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
			return false;

		// This checks if the input layout matches the output layout
#if ! JucePlugin_IsSynth
		if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
			return false;
#endif

		return true;
#endif
	}
#endif

	void AiassAudioProcessor::processBlock(AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
	{
		ScopedNoDenormals noDenormals;
		const int totalNumInputChannels = getTotalNumInputChannels();
		const int totalNumOutputChannels = getTotalNumOutputChannels();

		// In case we have more outputs than inputs, this code clears any output
		// channels that didn't contain input data, (because these aren't
		// guaranteed to be empty - they may contain garbage).
		// This is here to avoid people getting screaming feedback
		// when they first compile a plugin, but obviously you don't need to keep
		// this code if your algorithm always overwrites all the output channels.
		for (int i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
			buffer.clear(i, 0, buffer.getNumSamples());

		// This is the place where you'd normally do the guts of your plugin's
		// audio processing...
		for (int channel = 0; channel < totalNumInputChannels; ++channel)
		{
			float* channelData = buffer.getWritePointer(channel);

			// ..do something to the data...
		}

		buffer.clear();
		MidiBuffer processedMidi;
		int time;
		MidiMessage m;

		for (MidiBuffer::Iterator i(midiMessages); i.getNextEvent(m, time);)
		{
		
			if (m.isNoteOn())
			{	
				if ((m.getChannel()) == MIDICHANNEL || (MIDICHANNEL == 0))
				{
					int lowestNote = 127;
					int highestNote = 0;
					MidiMessage MIDImsgWithLowestNote = NULL;
					MidiMessage MIDImsgWithHighestNote = NULL;
					heldNotesList.add(m);  //add held notes to a Juce Array so we can use for note memory, arpeggiator or other 
					for (int j = 0; j < heldNotesList.size(); ++j)
					{
						if (heldNotesList[j].getNoteNumber() < lowestNote) {
							lowestNote = heldNotesList[j].getNoteNumber();
							MIDImsgWithLowestNote = heldNotesList[j];
						}
						if (heldNotesList[j].getNoteNumber() > highestNote) {
							highestNote = heldNotesList[j].getNoteNumber();
							MIDImsgWithHighestNote = heldNotesList[j];
						}
					}
					if (heldNotesList.size() == 1)
					{
						isPlaying = m;
						noteOn(m, true);
					}
					else
					{
						switch (NOTEPRIORITYMODE)
						{
							case LastNote:
								switch (LEGATOMODE)
								{
									case Retrigger:
										noteOff(isPlaying);
										isPlaying = m;
										noteOn(m, true);
										break;
									case Legato:
										isPlaying = m;
										noteOn(m, false);
										break;
									case LastStep:
										isPlaying = m;
										noteOn(m, true);
										break;
								}
								break;
							case LowNote:
								switch (LEGATOMODE)
								{
									case Retrigger:
										if (lowestNote >= m.getNoteNumber())
										{
											noteOff(isPlaying);
											isPlaying = MIDImsgWithLowestNote;
											noteOn(MIDImsgWithLowestNote, true);
										}
										break;
									case Legato:
										if (lowestNote >= m.getNoteNumber())
										{
											isPlaying = MIDImsgWithLowestNote;
											noteOn(MIDImsgWithLowestNote, false);
										}
										break;
									case LastStep:
										if (lowestNote >= m.getNoteNumber())
										{
											isPlaying = MIDImsgWithLowestNote;
											noteOn(MIDImsgWithLowestNote, true);
										}
										break;
								}
								break;
							case HighNote:
								switch (LEGATOMODE)
								{
									case Retrigger:
										if (highestNote <= m.getNoteNumber())
										{
											noteOff(isPlaying);
											isPlaying = MIDImsgWithHighestNote;
											noteOn(MIDImsgWithHighestNote, true);
										}
										break;
									case Legato:
										if (highestNote <= m.getNoteNumber())
										{
											isPlaying = MIDImsgWithHighestNote;
											noteOn(MIDImsgWithHighestNote, false);
										}
										break;
									case LastStep:
										if (highestNote <= m.getNoteNumber())
										{
											isPlaying = MIDImsgWithHighestNote;
											noteOn(MIDImsgWithHighestNote, true);
										}
										break;
								}
								break;
						}
					}
				}
			}
			else if (m.isNoteOff())
			{
				if ((m.getChannel()) == MIDICHANNEL || (MIDICHANNEL == 0))
				{
					int lowestNote = 127;
					int highestNote = 0;
					MidiMessage MIDImsgWithLowestNote = NULL;
					MidiMessage MIDImsgWithHighestNote = NULL;
					for (int j = 0; j < heldNotesList.size(); ++j)
					{
						if (heldNotesList[j].getNoteNumber() < lowestNote) {
							lowestNote = heldNotesList[j].getNoteNumber();
							MIDImsgWithLowestNote = heldNotesList[j];
						}
						if (heldNotesList[j].getNoteNumber() > highestNote) {
							highestNote = heldNotesList[j].getNoteNumber();
							MIDImsgWithHighestNote = heldNotesList[j];
						}
					}
					const int noteNumberToRemove = m.getNoteNumber();
					for (int j = 0; j < heldNotesList.size(); ++j)
					{
						if (heldNotesList[j].getNoteNumber() == noteNumberToRemove)
						{
							if (heldNotesList.size() == 1)
							{
								noteOff(j);
								isPlaying = NULL;
								heldNotesList.remove(j);
							}
							if (heldNotesList.size() > 1)
							{
								switch (NOTEPRIORITYMODE)
								{
								case LastNote:
									switch (LEGATOMODE)
									{
										case Retrigger:
											noteOff(m);
											heldNotesList.remove(j);
											noteOn(heldNotesList.getLast(), true);
											isPlaying = heldNotesList.getLast();
											break;
										case LastStep:
											heldNotesList.remove(j);
											noteOn(heldNotesList.getLast(), false);
											isPlaying = heldNotesList.getLast();
											break;
										case Legato:
											noteOff(m);
											heldNotesList.remove(j);
											noteOn(heldNotesList.getLast(), true);
											isPlaying = heldNotesList.getLast();
											break;
									}
									break;
								case LowNote:
									switch (LEGATOMODE)
									{
										case Retrigger:
											noteOff(isPlaying);
											heldNotesList.remove(j);
											noteOn(MIDImsgWithLowestNote, true);
											isPlaying = MIDImsgWithLowestNote;
											break;
										case LastStep:
											heldNotesList.remove(j);
											noteOn(MIDImsgWithLowestNote, false);
											isPlaying = MIDImsgWithLowestNote;
											break;
										case Legato:
											noteOff(isPlaying);
											heldNotesList.remove(j);
											noteOn(MIDImsgWithLowestNote, true);
											isPlaying = MIDImsgWithLowestNote;
											break;
									}
										break;
								case HighNote:
									switch (LEGATOMODE)
									{
										case Retrigger:
											noteOff(isPlaying);
											heldNotesList.remove(j);
											noteOn(MIDImsgWithHighestNote, true);
											isPlaying = MIDImsgWithHighestNote;
											break;
										case LastStep:
											heldNotesList.remove(j);
											noteOn(MIDImsgWithHighestNote, false);
											isPlaying = MIDImsgWithHighestNote;
											break;
										case Legato:
											noteOff(isPlaying);
											heldNotesList.remove(j);
											noteOn(MIDImsgWithHighestNote, true);
											isPlaying = MIDImsgWithHighestNote;
											break;
									}
										break;
								}
							}
							break;
						}
					}
				}
			}
			else if (m.isAftertouch())
			{
			}
			else if (m.isPitchWheel())
			{
			}

		}
	}

	//==============================================================================
	bool AiassAudioProcessor::hasEditor() const
	{
		return true; // (change this to false if you choose to not supply an editor)
	}

	AudioProcessorEditor* AiassAudioProcessor::createEditor()
	{
		return new AiassAudioProcessorEditor(*this, parameters);

	}

	//==============================================================================
	void AiassAudioProcessor::getStateInformation(MemoryBlock& destData)
	{
		// You should use this method to store your parameters in the memory block.
		// You could do that either as raw data, or use the XML or ValueTree classes
		// as intermediaries to make it easy to save and load complex data.
		std::unique_ptr<XmlElement> xml(parameters.state.createXml());
		copyXmlToBinary(*xml, destData);
	}

	void AiassAudioProcessor::setStateInformation(const void* data, int sizeInBytes)
	{
		// You should use this method to restore your parameters from this memory block,
		// whose contents will have been created by the getStateInformation() call.
		std::unique_ptr<XmlElement> xmlState(getXmlFromBinary(data, sizeInBytes));

		if (xmlState != nullptr)
			if (xmlState->hasTagName(parameters.state.getType()))
				parameters.state = ValueTree::fromXml(*xmlState);
	}

	void AiassAudioProcessor::parameterChanged(const String& parameterID, float newValue)
	{
		if (parameterID == "SidVol")
		{
			m_sid->set_volume((BYTE)newValue);
		}
		else if (parameterID == "AttAck1")
		{
			m_sid->set_a(1, (BYTE)newValue);
		}
		else if (parameterID == "AttAck2")
		{
			m_sid->set_a(2, (BYTE)newValue);
		}
		else if (parameterID == "AttAck3")
		{
			m_sid->set_a(3, (BYTE)newValue);
		}
		else if (parameterID == "DeCay1")
		{
			m_sid->set_d(1, (BYTE)newValue);
		}
		else if (parameterID == "DeCay2")
		{
			m_sid->set_d(2, (BYTE)newValue);
		}
		else if (parameterID == "DeCay3")
		{
			m_sid->set_d(3, (BYTE)newValue);
		}
		else if (parameterID == "SuStain1")
		{
			m_sid->set_s(1, (BYTE)newValue);
		}
		else if (parameterID == "SuStain2")
		{
			m_sid->set_s(2, (BYTE)newValue);
		}
		else if (parameterID == "SuStain3")
		{
			m_sid->set_s(3, (BYTE)newValue);
		}
		else if (parameterID == "ReLease1")
		{
			m_sid->set_r(1, (BYTE)newValue);
		}
		else if (parameterID == "ReLease2")
		{
			m_sid->set_r(2, (BYTE)newValue);
		}
		else if (parameterID == "ReLease3")
		{
			m_sid->set_r(3, (BYTE)newValue);
		}
		else if (parameterID == "PulsW1")
		{
			m_sid->set_pulsw(1, (Uint16)newValue);
		}
		else if (parameterID == "PulsW2")
		{
			m_sid->set_pulsw(2, (Uint16)newValue);
		}
		else if (parameterID == "PulsW3")
		{
			m_sid->set_pulsw(3, (Uint16)newValue);
		}
		else if (parameterID == "VoiCe1")
		{
			if (newValue == 0) VOICE1 = false;
			else VOICE1 = true;
		}
		else if (parameterID == "VoiCe2")
		{
			if (newValue == 0) VOICE2 = false;
			else VOICE2 = true;
		}
		else if (parameterID == "VoiCe3")
		{
			if (newValue == 0) VOICE3 = false;
			else VOICE3 = true;
		}
		else if (parameterID == "OcTave1")
		{
			OCTAVE1 = (int)newValue;
		}
		else if (parameterID == "OcTave2")
		{
			OCTAVE2 = (int)newValue;
		}
		else if (parameterID == "OcTave3")
		{
			OCTAVE3 = (int)newValue;
		}
		else if (parameterID == "SeMi1")
		{
			SEMI1 = (int)newValue;
		}
		else if (parameterID == "SeMi2")
		{
			SEMI2 = (int)newValue;
		}
		else if (parameterID == "SeMi3")
		{
			SEMI3 = (int)newValue;
		}
		else if (parameterID == "CenT1")
		{
			CENT1 = newValue;
		}
		else if (parameterID == "CenT2")
		{
			CENT2 = newValue;
		}
		else if (parameterID == "CenT3")
		{
			CENT3 = newValue;
		}
		else if (parameterID == "NoiSe1")
		{
			if (newValue == 0) setWaveformStatus(1, 4, false);
			else               setWaveformStatus(1, 4, true);
		}
		else if (parameterID == "NoiSe2")
		{
			if (newValue == 0) setWaveformStatus(2, 4, false);
			else               setWaveformStatus(2, 4, true);
		}
		else if (parameterID == "NoiSe3")
		{
			if (newValue == 0) setWaveformStatus(3, 4, false);
			else               setWaveformStatus(3, 4, true);
		}
		else if (parameterID == "PulSe1")
		{
			if (newValue == 0) setWaveformStatus(1, 3, false);
			else               setWaveformStatus(1, 3, true);
		}
		else if (parameterID == "PulSe2")
		{
			if (newValue == 0) setWaveformStatus(2, 3, false);
			else               setWaveformStatus(2, 3, true);
		}
		else if (parameterID == "PulSe3")
		{
			if (newValue == 0) setWaveformStatus(3, 3, false);
			else               setWaveformStatus(3, 3, true);
		}
		else if (parameterID == "SaW1")
		{
			if (newValue == 0) setWaveformStatus(1, 2, false);
			else               setWaveformStatus(1, 2, true);
		}
		else if (parameterID == "SaW2")
		{
			if (newValue == 0) setWaveformStatus(2, 2, false);
			else               setWaveformStatus(2, 2, true);
		}
		else if (parameterID == "SaW3")
		{
			if (newValue == 0) setWaveformStatus(3, 2, false);
			else               setWaveformStatus(3, 2, true);
		}
		else if (parameterID == "TriA1")
		{
			if (newValue == 0) setWaveformStatus(1, 1, false);
			else               setWaveformStatus(1, 1, true);
		}
		else if (parameterID == "TriA2")
		{
			if (newValue == 0) setWaveformStatus(2, 1, false);
			else               setWaveformStatus(2, 1, true);
		}
		else if (parameterID == "TriA3")
		{
			if (newValue == 0) setWaveformStatus(3, 1, false);
			else               setWaveformStatus(3, 1, true);
		}
		else if (parameterID == "RingMod1")
		{
			if (newValue == 0) m_sid->set_ringmod(1, false);
			else               m_sid->set_ringmod(1, true); 
		}
		else if (parameterID == "RingMod2")
		{
			if (newValue == 0) m_sid->set_ringmod(2, false);
			else               m_sid->set_ringmod(2, true);
		}
		else if (parameterID == "RingMod3")
		{
			if (newValue == 0) m_sid->set_ringmod(3, false);
			else               m_sid->set_ringmod(3, true);
		}
		else if (parameterID == "SynC1")
		{
			if (newValue == 0) m_sid->set_sync(1, false);
			else               m_sid->set_sync(1, true);
		}
		else if (parameterID == "SynC2")
		{
			if (newValue == 0) m_sid->set_sync(2, false);
			else               m_sid->set_sync(2, true);
		}
		else if (parameterID == "SynC3")
		{
			if (newValue == 0) m_sid->set_sync(3, false);
			else               m_sid->set_sync(3, true);
		}
		else if (parameterID == "FilterFreq") 
		{
			if (!FILTER8580) {
				m_sid->set_filterfreq((Uint16)newValue);
			}
			else { //scale
				m_sid->set_filterfreq((Uint16)(newValue*(71.0f/2047.0f)));
			}
		}
		else if (parameterID == "ResoNance")
		{
			m_sid->set_filterres((Uint8)newValue);
		}
		else if (parameterID == "FilTer8580")
		{
			if (newValue == 0) FILTER8580 = false;
			else FILTER8580 = true;
		}
		else if (parameterID == "FilTer1")
		{
			if (newValue == 0) setFilterStatus(1, false);
			else               setFilterStatus(1, true);
		}
		else if (parameterID == "FilTer2")
		{
			if (newValue == 0) setFilterStatus(2, false);
			else               setFilterStatus(2, true);
		}
		else if (parameterID == "FilTer3")
		{
			if (newValue == 0) setFilterStatus(3, false);
			else               setFilterStatus(3, true);
		}
		else if (parameterID == "FilTerIn")
		{
			if (newValue == 0) setFilterStatus(4, false);
			else               setFilterStatus(4, true);
		}
		else if (parameterID == "FilTerLP")
		{
			if (newValue == 0) setFilterMode(1, false);
			else               setFilterMode(1, true);
		}
		else if (parameterID == "FilTerBP")
		{
			if (newValue == 0) setFilterMode(2, false);
			else               setFilterMode(2, true);
		}
		else if (parameterID == "FilTerHP")
		{
			if (newValue == 0) setFilterMode(3, false);
			else               setFilterMode(3, true);
		}
		else if (parameterID == "FilTer3OFF")
		{
			if (newValue == 0) setFilterMode(4, false);
			else               setFilterMode(4, true);
		}
		else if (parameterID == "VelVol")
		{
			if (newValue == 0) VELVOL = false;
			else VELVOL = true;
		}
		else if (parameterID == "LegatoMode")
		{
			LEGATOMODE = (PlayModes)(int)newValue;
		}
		else if (parameterID == "NotePriorityMode")
		{
			NOTEPRIORITYMODE = (PriorityModes)(int)newValue;
		}
		else if (parameterID == "MidiChannel")
		{
		MIDICHANNEL = (int)newValue;
		}
	}

	void AiassAudioProcessor::setWaveformStatus(BYTE Voice, BYTE Waveform, bool State)
	{
		Uint8 Waveformnibble = 0;

		switch (Voice)
		{
		case 1:
			switch (Waveform)
			{
			case 1: //Tria
				TRIA1 = State;
				break;
			case 2: //Saw
				SAW1 = State;
				break;
			case 3: //Pulse
				PULSE1 = State;
				break;
			case 4: //Noise
				NOISE1 = State;
				break;
			default:
				break;
			}
			//Hier nibble berechnen
			Waveformnibble = 0;
			if (NOISE1) Waveformnibble = 1;
			Waveformnibble = Waveformnibble << 1;
			if (PULSE1) Waveformnibble = Waveformnibble | 0b00000001;
			Waveformnibble = Waveformnibble << 1;
			if (SAW1) Waveformnibble = Waveformnibble | 0b00000001;
			Waveformnibble = Waveformnibble << 1;
			if (TRIA1) Waveformnibble = Waveformnibble | 0b00000001;
			break;
		case 2:
			switch (Waveform)
			{
			case 1: //Tria
				TRIA2 = State;
				break;
			case 2: //Saw
				SAW2 = State;
				break;
			case 3: //Pulse
				PULSE2 = State;
				break;
			case 4: //Noise
				NOISE2 = State;
				break;
			default:
				break;
			}
			//Hier nibble berechnen
			Waveformnibble = 0;
			if (NOISE2) Waveformnibble = 1;
			Waveformnibble = Waveformnibble << 1;
			if (PULSE2) Waveformnibble = Waveformnibble | 0b00000001;
			Waveformnibble = Waveformnibble << 1;
			if (SAW2) Waveformnibble = Waveformnibble | 0b00000001;
			Waveformnibble = Waveformnibble << 1;
			if (TRIA2) Waveformnibble = Waveformnibble | 0b00000001;
			break;
		case 3:
			switch (Waveform)
			{
			case 1: //Tria
				TRIA3 = State;
				break;
			case 2: //Saw
				SAW3 = State;
				break;
			case 3: //Pulse
				PULSE3 = State;
				break;
			case 4: //Noise
				NOISE3 = State;
				break;
			default:
				break;
			}
			//Hier nibble berechnen
			Waveformnibble = 0;
			if (NOISE3) Waveformnibble = 1;
			Waveformnibble = Waveformnibble << 1;
			if (PULSE3) Waveformnibble = Waveformnibble | 0b00000001;
			Waveformnibble = Waveformnibble << 1;
			if (SAW3) Waveformnibble = Waveformnibble | 0b00000001;
			Waveformnibble = Waveformnibble << 1;
			if (TRIA3) Waveformnibble = Waveformnibble | 0b00000001;
			break;
		default:
			break;
		}
		
		m_sid->set_waveform(Voice, Waveformnibble);
	}

	void AiassAudioProcessor::setFilterStatus(BYTE FilterStatusBit, bool State)
	{
		Uint8 Statusnibble = 0;
		
		switch (FilterStatusBit)
		{
		case 1: 
			FILTER1 = State;
			break;
		case 2: 
			FILTER2 = State;
			break;
		case 3: 
			FILTER3 = State;
			break;
		case 4: 
			FILTERIN = State;
			break;
		default:
			break;
		}
		//Hier nibble berechnen
		Statusnibble = 0;
		if (FILTERIN) Statusnibble = 1;
		Statusnibble = Statusnibble << 1;
		if (FILTER3) Statusnibble = Statusnibble | 0b00000001;
		Statusnibble = Statusnibble << 1;
		if (FILTER2) Statusnibble = Statusnibble | 0b00000001;
		Statusnibble = Statusnibble << 1;
		if (FILTER1) Statusnibble = Statusnibble | 0b00000001;
		
		m_sid->set_filterfilt(Statusnibble);
	}

	void AiassAudioProcessor::setFilterMode(BYTE FilterModeBit, bool State)
	{
		Uint8 Modenibble = 0;

			switch (FilterModeBit)
			{
			case 1: 
				LOWPASS = State;
				break;
			case 2:
				BANDPASS = State;
				break;
			case 3:
				HIGHPASS = State;
				break;
			case 4:
				F3OFF = State;
				break;
			default:
				break;
			}
			//Hier nibble berechnen
			Modenibble = 0;
			if (F3OFF) Modenibble = 1;
			Modenibble = Modenibble << 1;
			if (HIGHPASS) Modenibble = Modenibble | 0b00000001;
			Modenibble = Modenibble << 1;
			if (BANDPASS) Modenibble = Modenibble | 0b00000001;
			Modenibble = Modenibble << 1;
			if (LOWPASS) Modenibble = Modenibble | 0b00000001;

			m_sid->set_filtermode(Modenibble);
	}

	void AiassAudioProcessor::noteOn(MidiMessage m, bool triggernote)
	{

		LED = true;
		Value SIDVolume = parameters.getParameterAsValue("SidVol");

		int MyNote = m.getNoteNumber();
		int MyVel = m.getVelocity();

		if (VELVOL) {
			SIDVolume = (float)(MyVel * (15.0f / 127.0f));
		}
		int MyNote1 = (MyNote + (OCTAVE1 * 12)) + SEMI1;
		double MyFreq1 = m.getMidiNoteInHertz(MyNote1, 440.0);
		MyFreq1 = MyFreq1 * pow(2, (CENT1 / 1200.0));

		int MyNote2 = (MyNote + (OCTAVE2 * 12)) + SEMI2;
		double MyFreq2 = m.getMidiNoteInHertz(MyNote2, 440.0);
		MyFreq2 = MyFreq2 * pow(2, (CENT2 / 1200.0));

		int MyNote3 = (MyNote + (OCTAVE3 * 12)) + SEMI3;
		double MyFreq3 = m.getMidiNoteInHertz(MyNote3, 440.0);
		MyFreq3 = MyFreq3 * pow(2, (CENT3 / 1200.0));

		if (VOICE1)
		{
			m_sid->set_freq(1, (float)MyFreq1);
			if (triggernote)
			{
				if (V1isPlaying) m_sid->stop(1);
				m_sid->play(1);
			}
			V1isPlaying = true;
		}

		if (VOICE2)
		{
			m_sid->set_freq(2, (float)MyFreq2);
			if (triggernote)
			{
				if (V2isPlaying) m_sid->stop(2);
				m_sid->play(2);
			}
			V2isPlaying = true;
		}
		if (VOICE3)
		{
			m_sid->set_freq(3, (float)MyFreq3);
			if (triggernote)
			{
				if (V3isPlaying) m_sid->stop(3);
				m_sid->play(3);
			}
			V3isPlaying = true;
		}
	}

	void AiassAudioProcessor::noteOff(MidiMessage m)
	{
		LED = false;
		if (VOICE1)
		{
			m_sid->stop(1);
			V1isPlaying = false;
		}
		else
		{
			if (V1isPlaying)
			{
				m_sid->stop(1);
				V1isPlaying = false;
			}
		}
		if (VOICE2)
		{
			m_sid->stop(2);
			V2isPlaying = false;
		}
		else
		{
			if (V2isPlaying)
			{
				m_sid->stop(2);
				V2isPlaying = false;
			}
		}
		if (VOICE3)
		{
			m_sid->stop(3);
			V3isPlaying = false;
		}
		else
		{
			if (V3isPlaying)
			{
				m_sid->stop(3);
				V3isPlaying = false;
			}
		}
	}

	//==============================================================================
	// This creates new instances of the plugin..
	AudioProcessor* JUCE_CALLTYPE createPluginFilter()
	{

		
		

		return new AiassAudioProcessor();
	}
