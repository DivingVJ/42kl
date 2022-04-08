#!/bin/sh

# Lists /etc/passwd file. Removes comment lines. Removes ':' delimiter fo each line.
# Suppresses all odd files. 

cat /etc/passwd | grep -v '#' | cut -d ':' -f 1 | sed -n 'n;p' 
