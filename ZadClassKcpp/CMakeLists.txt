# 1. Wymagana minimalna wersja CMake
cmake_minimum_required(VERSION 3.10)

# 2. Nazwa Twojego projektu
project(ZadaniaKcpp)

# 3. Ustawienie standardu C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. Wskazanie folderu z plikami nagłówkowymi (.h)
include_directories(include)

# 5. Automatyczne znalezienie wszystkich plików źródłowych w src/
file(GLOB SRC_FILES "src/*.cc")

# 6. Definicja programu wynikowego (main.cc + pliki z src)
add_executable(program_ostateczny main.cc ${SRC_FILES})