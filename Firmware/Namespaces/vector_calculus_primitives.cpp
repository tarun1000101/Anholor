namespace vector_calculus_primitives{
    typedef struct subspace{
        uint1024_t subspace_size;
        uiint1024_t subspace[array_size];
    };

    typedef struct span{
        uint1024_t span_size;
        uint1024_t span[span_size];
    };
}