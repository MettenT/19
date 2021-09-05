#!/bin/bash
FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | grep -v '#' | sed -n 2~2p | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p"| sed 's/.*://' | tr '\n' ',' | sed 's/\(.*\),/\1./'