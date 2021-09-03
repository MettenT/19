#!/bin/bash
find . -type f | sed 's/.*\///'  | sed 's/\.sh//' 