#!/bin/sh

# Displays alterate line when listed using ls -l 
# sed -n suppresses line printout. n;p generates odd lines

ls -l | sed -n 'n;p'
