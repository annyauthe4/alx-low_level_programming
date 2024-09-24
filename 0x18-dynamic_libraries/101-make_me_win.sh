#!/bin/bash
# Script to preload the intercept library and run the gm program

LD_PRELOAD=./libintercept.so ./gm 9 8 10 24 75 9
