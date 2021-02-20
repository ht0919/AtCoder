#!/bin/bash
S1="ABC"
S2="192"
S3=$S1$S2
S4=${S3}A.cpp
if [[ -e $S4 ]]; then
    mkdir -p $S1/$S2
    mv $S3?.cpp ./$S1/$S2
    rm a.out
    git add -A
    git commit -m "Add ${S3}"
    git push origin master
else
    echo "file not found."
fi