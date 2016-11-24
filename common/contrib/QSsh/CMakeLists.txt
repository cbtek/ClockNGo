#==============================================================================
# CMakeLists file for QSsh
#==============================================================================
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CURR_TARGET QSsh)
if (WIN32)
    if (MINGW)
        add_definitions(-std=c++11)
    endif()
else()
    if (GCC)
        add_definitions(-std=c++11)
    endif()
endif()
set(CURR_TARGET_SOURCES "${CURR_TARGET}_SOURCES")
set(CURR_TARGET_FORMS "${CURR_TARGET}_FORMS")
set(CURR_TARGET_HEADERS "${CURR_TARGET}_HEADERS")
set(CURR_TARGET_HEADERS_NO_MOC "${CURR_TARGET}_HEADERS_NO_MOC")

include_directories(src)
include_directories(inc)
include_directories(contrib)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Network REQUIRED)

#==============================================================================
# Include Source Files
#==============================================================================
file(GLOB CURR_TARGET_SOURCES "src/*.cpp"
                              "contrib/botan/src/*.cpp")
file(GLOB CURR_TARGET_HEADERS "inc/*.h*"
                              "contrib/botan/inc/*.h*")

#==============================================================================
# Add Executable
#==============================================================================
add_library(${CURR_TARGET}
               ${PLATFORM}
               ${CURR_TARGET_SOURCES}
               ${CURR_TARGET_HEADERS})

#==============================================================================
# Add Dependencies
#==============================================================================

qt5_use_modules(${CURR_TARGET}
                 Widgets
                 Network)

