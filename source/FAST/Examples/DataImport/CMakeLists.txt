fast_add_example(importImageFromFile importImageFromFile.cpp)
fast_add_example(streamImagesFromDisk streamImagesFromDisk.cpp)
fast_add_example(importMeshFromFile importMeshFromFile.cpp)
fast_add_example(importLineSetFromFile importLineSetFromFile.cpp)
fast_add_example(importPointSetFromFile importPointSetFromFile.cpp)
if(FAST_MODULE_Kinect)
    fast_add_example(kinectStreaming kinectStreaming.cpp)
    fast_add_example(multiKinectStreaming multiKinectStreaming.cpp)
endif()
if(FAST_MODULE_RealSense)
    fast_add_example(realSenseStreaming realSenseStreaming.cpp)
endif()
if(FAST_MODULE_Clarius)
    fast_add_example(clariusStreaming clariusStreaming.cpp)
endif()
if(FAST_MODULE_WholeSlideImaging)
    fast_add_example(importWholeSlideImage importWholeSlideImage.cpp)
endif()