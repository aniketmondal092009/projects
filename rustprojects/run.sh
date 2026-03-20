#!/usr/bin/env bash

rustc armstrongnumber.rs

./armstrongnumber

# delete the binary file
# so the dir looks clean
rm armstrongnumber
