#!/bin/bash

command=/usr/bin/htop

if [ -f $command ]
then
	echo "$command is available, let's run it."
	$command
else
	echo "$command is not available, you could install it."
	sudo pacman -Ss $command --noconfirm
fi

$command
