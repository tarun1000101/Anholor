namespace data_structure_primitives{
    typedef struct node
    {
        long long int value;
        node *next;
        node *prev;
        node *loopback;
    };
}