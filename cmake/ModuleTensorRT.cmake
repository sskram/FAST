if(FAST_MODULE_TensorRT)
    message("-- Enabling TensorRT inference engine module")
    find_package(TensorRT 5 REQUIRED)
    find_package(CUDA REQUIRED)
endif()