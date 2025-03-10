namespace storage{
    typedef struct storage_block{
        char *data_stream;
    }

    typedef struct filesystem_database{
        char *database_name;
        uint2048_t number_of_clusters;
        uint2048_t number_of_entries;
        char cluster_names[number_of_clusters];
        uint2048_t filesystem_matrix[number_of_clusters][number_of_entries];
        vector<uint2048_t> filesystem_forest;
        vector<uint2048_t> data_forest;
    };
}