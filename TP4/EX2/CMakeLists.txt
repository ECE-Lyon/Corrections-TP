cmake_minimum_required(VERSION 3.22)
project(TP4 C)

set(CMAKE_C_STANDARD 99)

# Exo 2
# pas d'exécutable car pas de "main" 
# mais vous pouvez compiler la bibliothèque
# sur Clion il faut cliquer sur "Build" et
# non sur "run"
add_library(TP4_lib_exo_2 exo2.c)
