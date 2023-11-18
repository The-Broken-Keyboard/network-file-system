typedef int errcode;

// General Errors
#define NO_ERROR 0
#define UNEXPECTED_ERROR 1
#define NETWORK_ERROR 2
#define FILE_DESCRIPTOR_ERROR 3

// Naming Server Errors
#define INVALID_PATH 10
#define STORAGE_SERVER_NOT_FOUND 11
#define FILE_NOT_FOUND 12
#define DIRECTORY_NOT_FOUND 13
#define STORAGE_SERVER_UNAVAILABLE 14
#define DUPLICATE_FILE_OR_DIRECTORY 15

// Storage Server Errors
#define STORAGE_SERVER_ERROR 20
#define FILE_ALREADY_EXISTS 21
#define FILE_NOT_WRITABLE 22
#define FILE_NOT_READABLE 23
#define FILE_SIZE_EXCEEDED 24  
#define FILE_UNABLE_TO_CREATE 25
#define DIRECTORY_UNABLE_TO_CREATE 26
#define METADATA_INACESSIBLE 27
#define DELETE_FAILED 28


// Client Request Errors
#define INVALID_OPERATION 30
#define INVALID_FILE_PATH 31
#define PERMISSION_DENIED 32
#define INSUFFICIENT_STORAGE 33
#define CLIENT_ALREADY_WRITING 34

// Concurrency and Access Errors
#define CONCURRENT_ACCESS_TIMEOUT 40
#define FILE_IN_USE 41

// Replication and Redundancy Errors
#define FAILURE_DETECTED 50
#define DATA_REPLICATION_ERROR 51
#define RECOVERY_ERROR 52
#define ASYNC_DUPLICATION_ERROR 53

// Search and Optimization Errors
#define SEARCH_ERROR 60
#define LRU_CACHE_ERROR 61

//Socket errors
#define SOCKET_INIT_ERROR 70
#define SOCKET_CLOSE_ERROR 71

#define RED "\x1b[31m"
#define RESET "\x1b[0m"

