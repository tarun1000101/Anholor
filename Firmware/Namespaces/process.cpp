namespace process{
    typedef struct process{
        char *process_id;// A pointer to the process id stored in RAM.
        char *process_name;
        char *process_block;
        vector<char*> services_offered;
    };
}