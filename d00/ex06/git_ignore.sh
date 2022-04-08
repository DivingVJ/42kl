#!/bin/sh

# Comment section - returns ignored files in current directory and all subdirectories
# Must be run in git directory

git ls-files --others --ignored --exclude-standard

