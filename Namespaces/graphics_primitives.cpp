namespace graphics_primitives{
    
    typedef struct cube{
        long long int length;
        uint1024_t object [length][length][lenght];
    };

    typedef struct cuboid{
        long long int length;
        long long int breadth;
        long long int height;
        uint1024_t object [length][breadth][height];
    };

    typedef struct sphere{
        long long int radius; //For the 2D radius
        long long int height; // For specifying the 3D radius
    };

    typedef struct trapezoid{
        long long int height; // For 2D right angle triangle
        long long int base; // For 2D right angle triangle
        long long int slope; // For 3D trapezoid
    };

    typedef struct pyramid{
        long long int base;
        long long int height;
        long long int z_height;
    };
}