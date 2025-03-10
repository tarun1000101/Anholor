namespace audio{
    typedef struct audio_memory_block{
        long long int length_of_block;
        uint64_t MIDI_signal_block[length_of_block];
        uint64_t MIDI_amplification_block[length_of_block];
        uint64_t MIDI_device_block [length_of_block];
    };

    typedef struct audio_stream{
        char *stream;
    };
}