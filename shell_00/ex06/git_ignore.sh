#!/bin/bash
git status --ignored -s | grep -n ^! | cut -f2 -d ' '
