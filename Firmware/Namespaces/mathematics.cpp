namespace mathematical{

    struct pointer{
        pointer *end_node;
        pointer *start_node;
        pointer *next_node;
        pointer *prev_node;
    };

    struct data_container{
        uint1024_t data_length;
        char data_array[data_length];
    };
}