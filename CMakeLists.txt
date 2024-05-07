cmake_minimum_required(VERSION 3.6)

project(QtWaitingSpinner VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(${PROJECT_NAME}
    waitingspinnerwidget.cpp waitingspinnerwidget.h
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC Qt${QT_VERSION_MAJOR}::Widgets
)

add_executable(${PROJECT_NAME}Test
    main.cpp
    mainwindow.cpp mainwindow.h mainwindow.ui
)

target_link_libraries(${PROJECT_NAME}Test
    PRIVATE ${PROJECT_NAME}
)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
    set_property(TARGET ${PROJECT_NAME} PROPERTY WIN32_EXECUTABLE TRUE)
endif()
