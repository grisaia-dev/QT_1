cmake_minimum_required(VERSION 3.5)
project(MAIN VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# Эта штука нужна лишь для меня, так что лучше это закоментировать
set(CMAKE_PREFIX_PATH "C:/Qt/6.5.2/msvc2019_64")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Network Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Network Sql)

set(PROJECT_SOURCES main.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Network Qt${QT_VERSION_MAJOR}::Sql)