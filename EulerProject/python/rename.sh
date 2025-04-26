#!/bin/bash


for file in prob*.py; do
	num=$(echo "$file" | grep -oP '\d+')
	newnum=$(printf "%03d" "$num")
	mv "$file" "${newnum}.py"

done

