#!/bin/bash

pwd >> log.txt
ls >> log.txt
mkdir MyDirectory >> log.txt
cd MyDirectory >> log.txt
echo -e "Hello\v\World" >> a.txt
cp a.txt ..\b.txt
cd ..
rmdir MyDirectory >> log.txt
rm -r MyDirectory >> log.txt
