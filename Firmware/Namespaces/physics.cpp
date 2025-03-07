namespace physics{
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
}