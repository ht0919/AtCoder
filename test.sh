#!/bin/bash
try() {
  ans=`./a.out < $1.txt`
  if [ "$ans" = "$2" ]; then
    echo "$1 => $ans"
  else
    echo "$1 => $2 expected, but got $ans"
    exit
  fi
}

if [ -e a.out ]; then
  try test1 b
  try test2 aa
  try test3 jjddja
  echo OK
else
  echo "a.out not found."
fi
