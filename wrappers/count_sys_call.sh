#!/bin/sh
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <filename>" >&2
  exit 1
fi

count=0
filename="$1"
while IFS='' read -r line || [[ -n "$line" ]]; do
	if [[ "$line" != \#* ]] ;
        then
		((count++))
	fi
done < "$filename"

echo "Total no of system calls: $count"
