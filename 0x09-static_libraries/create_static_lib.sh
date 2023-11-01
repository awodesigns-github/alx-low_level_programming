#!/bin/bash
#
#Script name: create_static_libraries
#Description: This script is for creating a static library
#Version: 1.0

gcc -c *.c
ar -rc liball.a *.o
