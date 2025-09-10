#!/bin/bash

command=htop

if command -v $command
then
	echo "$command is avialable, let's run it......"
else
	echo "$command is NOT availabe, installing it....."
	sudo pacman -Ss $command
