#!/bin/sh

# Display a list of groups, comma delimited, newline character removed

groups $FT_USER | tr ' ' ',' | tr -d '\n'
