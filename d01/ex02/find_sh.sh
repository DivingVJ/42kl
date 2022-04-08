#!/bin/sh

# Finds *.sh files in current and sub-directories.
# Uses this to list all *.sh files without the extensions

find . -type f  -name "*.sh" -exec basename {} \; | cut -d '.' -f 1
