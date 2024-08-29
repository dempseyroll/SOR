#!/bin/bash

WORD=$1
NEW_DIR=~/$WORD
NEW_FILE=$NEW_DIR/$WORD.txt

# Create dir
mkdir $NEW_DIR

# Making the list
ls -lR / 2>/dev/null | grep "\.txt$" | awk '{print $1, $NF}' > $NEW_FILE

# Date
date >> $NEW_FILE
date

# Showing file output
cat $NEW_FILE
