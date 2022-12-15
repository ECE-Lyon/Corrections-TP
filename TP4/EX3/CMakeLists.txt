cmake_minimum_required(VERSION 3.22)
project(TP4 C)

set(CMAKE_C_STANDARD 99)

# Exo 3
# Nous utilisons les fonctions définies dans Ex 2,
# donc on inclut aussi les sources dans l'exécutable TP4_exo3
add_executable(TP4_exo3 main.c exo2.c exo2.h)
