#!/usr/bin/bash
echo "Hi"
AAA=4
BBB='I am a disco dancer'
echo "Hi i am ${AAA} and $BBB"

greeting="Hello        world!"
echo $greeting" now with spaces: $greeting"

# exec date +%d_%m_%Y 
date -d "Aug 16, 2003" +%A