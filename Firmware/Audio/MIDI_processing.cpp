class MIDI{
    
    memory_block store_midi_audio_signal(uint64_t address_of_audio_data, uint64_t address_of_amplification, uint64_t )
    {
        memory_block MIDI_block = new memory_block();
        MIDI_block.
    }

    memory_block recieve_and_return_audio_signal(uint64_t port, long long int length_of_audio_block)//Audio ports are attached to certain memory addresses in RAM.
    {
        /** Recieve and return audio signal
        * @param port - port address in RAM.
        * @param length_of_audio_block - number of memory addresses to be allocated for processing the audio.
        */

        memory_block audio_block = new memory_block();
        memory_block.length_of_block = length_of_audio_block;
    
        for (int i = 0; i < length_of_audio_block; i++)
            audio_block.memory_block[i] = &port;

        return audio_block;
    }

};