namespace blockchain{
    
    typedef struct block{
        uint1024_t number_of_bits;
        char ciphertext [number_of_bits];
        char public_key [number_of_bits];

    };
}