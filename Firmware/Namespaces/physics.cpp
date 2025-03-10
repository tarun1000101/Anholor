namespace physics{

    typedef struct object_properties{
        uint1024_t image [7680][4320];
        uint1024_t x_coordinate;
        uint1024_t y_coordinate;
        uint1024_t z_coordinate;
        uint1024_t electric_field;
        uint1024_t magnetic_field;
        uint1024_t radius_of_EM_field;
        uint1024_t frequency_of_vibration;
        uint1024_t radiation_of_object;
        uint1024_t weight_of_object;
        uint1024_t number_of_vertices;
        uint1024_t graph_of_object [number_of_vertices];
        uint1024_t mass_of_object;
        uint1024_t energy_radiation_of_object;
        uint1024_t height_of_object;
        uint1024_t frequency_emitted_by_object;
        uint1024_t reverberation_of_object;
    };

    typedef struct quark{
        long long int energy;
    };

    typedef struct lepton{
        long long int energy;
    };

    typedef struct neutrino{
        long long int mass;
    };

    typedef struct gluon{
        long long int adhesiveness;
    };

    typedef struct object_free_body_motion{
        uint1024_t gyration;
        uint1024_t gravitational_pull;
        uint1024_t accleration;
    };

    typedef struct accelrometer{
        uint1024_t macroscopic_change_in_x_coordinate;
        uint1024_t macroscopic_change_in_y_coordinate;
        uint1024_t macroscopic_change_in_z_coordinate;
        uint1024_t microscopic_change_in_x_coordinate;
        uint1024_t microscopic_change_in_y_coordinate;
        uint1024_t microscopic_change_in_z_coordinate;
    };

    typedef struct gyroscope{
        uint1024_t change_in_x_degree;
        uint1024_t change_in_y_degree;
        uint1024_t change_in_z_degree;
    };

    typedef struct energy_in_an_object{
        uint1024_t height_of_an_object;
        uint1024_t pressure_exerted_by_an_object;
        uint1024_t gravitation;
        uint1024_t speed_of_light;
        uint1024_t energy_in_an_object = ((height_of_an_object * pressure_exerted_by_an_object * speed_of_light)/ gravitation);
    };

    typedef struct gravitational_field_of_an_object{
        const double universal_gravitational_constant = 9.8;
        uint1024_t mass_of_object1;
        uint1024_t mass_of_object2;
        uint1024_t distance_between_objects;
        uint1024_t gravitiational_constant_of_an_object = (universal_gravitational_constant * mass_of_object1 * mass_of_object2)/distance_between_objects;
    };

    typedef struct free_body_motion_of_an_object{
        uint1024_t gyration;
        uint1024_t gravitational_pull;
        uint1024_t accleration;
    };

    typedef struct accelrometer{
        uint1024_t macroscopic_change_in_x_coordinate;
        uint1024_t macroscopic_change_in_y_coordinate;
        uint1024_t macroscopic_change_in_z_coordinate;
        uint1024_t microscopic_change_in_x_coordinate;
        uint1024_t microscopic_change_in_y_coordinate;
        uint1024_t microscopic_change_in_z_coordinate;
    };

    typedef struct gyroscope{
        uint1024_t change_in_x_degree;
        uint1024_t change_in_y_degree;
        uint1024_t change_in_z_degree;
    };

    typedef struct energy_in_an_object{
        uint1024_t height_of_an_object;
        uint1024_t pressure_exerted_by_an_object;
        uint1024_t gravitation;
        uint1024_t speed_of_light;
        uint1024_t energy_in_an_object = ((height_of_an_object * pressure_exerted_by_an_object * speed_of_light)/ gravitation);
    };

    typedef struct gravitational_field_of_an_object{
        const double universal_gravitational_constant = 9.8;
        uint1024_t mass_of_object1;
        uint1024_t mass_of_object2;
        uint1024_t distance_between_objects;
        uint1024_t gravitiational_constant_of_an_object = (universal_gravitational_constant * mass_of_object1 * mass_of_object2)/distance_between_objects;
    };

    typedef struct planet{
        uint1024_t number_of_layers;
        uint1024_t distance_betwen_layers[number_of_layers];
        uint1024_t wind_speed_on_planet;
        uint1024_t mass_of_planet;
        uint1024_t mass_of_core;
        uint1024_t electric_field_of_core;
        uint1024_t magnetic_field_of_core;
    };

    typedef struct star{
        uint1024_t mass_of_star;
        uint1024_t radius_of_star_from_core;
        uint1024_t gravitational_field_of_star;
        uint1024_t fuel_in_star;
    };

}