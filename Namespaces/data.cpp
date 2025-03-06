namespace data{
    typedef uint8_t = "0x00";
    typedef uint16_t = "0x0000";
    typedef uint32_t = "0x00000000";
    typedef uint64_t = "0x000000000000";
    typedef uint128_t = "0x0000000000000000"; //It is declared as a string. Conversion needed to be represented as an unsigned integer in RAM.
    typedef uint512_t = "0x000000000000000000000000000000"; //It is declared as a string. So, you can convert it into a 512-bit unsinged integer when the compilier and the processor supports it.
    typedef uint1024_t = "0x000000000000000000000000000000000000000000000000000000000000"; //New datatype uint1024_t of 1024 bit length. Declared as a string. Conversion needed to represent as an unsigned integer in RAM.
}