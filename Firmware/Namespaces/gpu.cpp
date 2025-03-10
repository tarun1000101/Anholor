namespace gpu{

    typedef uint1024_t luminosity = "0x000000000000000000000000000000000000000000000000000000000000"; //Light intensity on an object.
    typedef uint1024_t gradients = "0x000000000000000000000000000000000000000000000000000000000000"; //Image gradient.
    typedef uint1024_t shade = "0x000000000000000000000000000000000000000000000000000000000000"; //1024-bit shade of an object.
    typedef uint1024_t pixel = "0x000000000000000000000000000000000000000000000000000000000000"; //Pixel gradient intensity.
    typedef uint1024_t colour = "0x000000000000000000000000000000000000000000000000000000000000"; //Colour value.

    typedef struct vector_element{
        uint1024_t size_of_data;
        char data[size_of_data];
    };

    typedef struct display_depth{
        long long int bit_depth;
        char image_to_send[bit_depth][bit_depth];
    };

    typedef struct string{
        uint1024_t number_of_characters;
        char array[number_of_characters];
    };

    typedef struct gpu_information{
        uint1024_t gpu_start_address_in_RAM;
        uint1024_t gpu_end_address_in_RAM;
        int1024_t number_of_gpus;
        string gpu_names[number_of_gpus];
        int1024_t pcie_ids[number_of_gpus]; //Container for PCIE ids
        uint1024_t pcie_address[number_of_gpus]; //Container for PCIE addresses in RAM.
    };

    typedef struct image_data{
        uint1024_t shader_image[7680][4320];
        uint1024_t red_image[7680][4320];
        uint1024_t blue_image[7680][4320];
        uint1024_t green_image[7680][4320];
        uint1024_t yellow_image[7680][4320];
        uint1024_t pixel_saturation[7680][4320];
    };

    typedef struct gpu_vector
    {
        uint1024_t length_of_vector;
        uint1024_t vector[length_of_vector];
    };

    typedef struct tensor
    {
        uint1024_t length_of_material;
        uint1024_t first_dimension [length_of_material];
        uint1024_t second_dimension [length_of_material];
        uint1024_t third_dimension [length_of_material];
        uint1024_t time_flow;
        uint1024_t number_of_events;
        uint1024_t time_flow_array[number_of_events];
    };

    typedef struct set
    {
        uint1024_t number_of_elements;
        uint1024_t element_array[number_of_elements];
    };

    typedef struct path_data_ten_bit
    {
        string direction;
        float1024_t force_of_object;
    };

    typedef struct matrix //To do linear algebra and vector calculus in the GPU.
    {
        uint1024_t row;
        uint1024_t column;
        uint1024_t matrix[row][column];
    };

    typedef struct vector_sixty_four_byte
    {
        uint512_t number_of_elements;
        uint512_t vector[number_of_elements];
    };

    typedef struct vector_one_hundered_twenty_eight_byte
    {
        uint1024_t number_of_elements;
        uint1024_t vector[number_of_elements];
    };

    typedef struct vector_sixteen_byte
    {
        uint128_t number_of_elements;
        uint128_t vector[number_of_elements];
    };
}