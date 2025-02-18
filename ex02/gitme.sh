#!/bin/bash

read -p "Introduce a message for this commit: " message
git status ; sleep 1 ; git add . ; git commit -m "$message" ; git push
