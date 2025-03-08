using namespace graphics_primitive;

class renderer{
    public:
        bool send_to_display(uint64_t display_port_address, long long int length_of_display, long long int breadth_of_display)
        {
            /*width of display - number of pixels when you measure the display lengthwise.
            * height of display - number of pixels when you measure the display from breadthhwise.
            */
            char display[length_of_display*breadth_of_display];
            
            for (int i = 0; i < length_of_display*breadth_of_display; i++)
                display_port_address = display[i];

            return true;
        }
};