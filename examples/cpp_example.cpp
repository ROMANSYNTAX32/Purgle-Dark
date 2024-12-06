#pragma once

#include <memory.h>
#include <malloc.h>

#include <cstring>


namespace RMCore
{
    namespace memory
    {
        enum MEMORY_STATUS
        {
            MEMORY_SUCCESS = 0,
            MEMORY_FAILURE = 1,
            MEMORY_INVALID_POINTER = 3,
            MEMORY_INVALID_SIZE = 4
        };
        
        static bool is_success(MEMORY_STATUS status) {

        }
        using namespace RMCore::Types::ints;
        void *allocate_memory(uint64 size)
        {
            return malloc(size);
        }

        bool free_memory(void *ptr)
        {
            if (ptr == nullptr)
                return false;

            free(ptr);
            return true;
        }

    }
}