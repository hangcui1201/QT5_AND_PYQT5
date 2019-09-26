cmake_minimum_required (VERSION 2.6)

cmake_policy(SET CMP0012 NEW)

PROJECT(OpenCV_Basic)
MESSAGE("Project name: ${PROJECT_NAME}")

# Requires OpenCV
FIND_PACKAGE( OpenCV 3.4.3 REQUIRED )
MESSAGE("OpenCV version : ${OpenCV_VERSION}")

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIB_DIR})

ADD_EXECUTABLE( read_image read_image.cpp )
TARGET_LINK_LIBRARIES( read_image ${OpenCV_LIBS} )

ADD_EXECUTABLE( read_video read_video.cpp )
TARGET_LINK_LIBRARIES( read_video ${OpenCV_LIBS} )

ADD_EXECUTABLE( read_save_params read_save_params.cpp )
TARGET_LINK_LIBRARIES( read_save_params ${OpenCV_LIBS} )

ADD_EXECUTABLE( matrix_operation matrix_operation.cpp )
TARGET_LINK_LIBRARIES( matrix_operation ${OpenCV_LIBS} )
