#!/bin/sh

# Displays ifconfig. Extracts lines with string 'ether ' 
# Cuts off empty space in front and returns the 2nd field

ifconfig | grep 'ether ' | cut -d ' ' -f 2
