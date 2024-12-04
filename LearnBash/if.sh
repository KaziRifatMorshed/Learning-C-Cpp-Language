#!/usr/bin/env bash

whoami
pwd
echo "$DIR"
if [[ -n "$DIR" ]]; then
    cd "$DIR" || exit
    mkdir hi
fi
# ki hoitese bujhtesi na
