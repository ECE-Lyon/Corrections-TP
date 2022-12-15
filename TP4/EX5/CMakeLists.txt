cmake_minimum_required(VERSION 3.22)
project(TP4 C)

set(CMAKE_C_STANDARD 99)

# Exo 2
# pas d'exécutable car pas de "main"
# mais vous pouvez compiler la bibliothèque
# sur Clion il faut cliquer sur "Build" et
# non sur "run"
add_library(TP4_lib_exo_2 exo2.c)

# Exo 5
# vous pouvez également utiliser directement
# la bibliothèque compilée
add_executable(TP4_exo5 main.c)
target_link_libraries(TP4_exo5 TP4_lib_exo_2)