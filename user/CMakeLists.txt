if(NOT TARGET my_library)
    # Find all .c files in src/ automatically
    file(GLOB SRC_FILES "src/*.c")

    # Create the library using all found .c files
    add_library(my_library ${SRC_FILES})

    target_include_directories(my_library PUBLIC lib)
endif()
