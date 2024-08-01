#!/bin/bash

mynum=200

if [ $mynum -eq 200 ]
then
	echo "The number in the memory is indeed equal to 200"
fi



if [ $mynum -ne 200 ]
then 
	echo "The variable is not equal to 300"
else
	echo "The variable is equal to something else. But not 420."
fi
