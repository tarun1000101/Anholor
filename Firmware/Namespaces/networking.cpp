namespace networking{

    typedef struct device_information{
        int *socket;
        char *socket_name;
        uint1024_t starting_memory_address;
        uint1024_t ending_memory_address;
        char message_block[ending_memory_address - starting_memory_address];
        int ACK;
        char *ipvfour_address;
        char *ipvsix_address;
        char *packet;
        char *socket_pcie_address;
        char *socket_pcie_id;
    };

    typedef struct protocol {
        char *start_preamble;
        char *control_header;
        char *data_header;
        char *payload;
        char *end_preamble;
    };
}