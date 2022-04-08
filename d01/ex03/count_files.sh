#!/bin/sh

# Count the number of regular files and directories in current and sub directories.
# Find all  files or directories. Count the numbers by  lines listed. Remove blank space in front of numbers

find . -type d -or -type f | wc -l | tr -d ' '
