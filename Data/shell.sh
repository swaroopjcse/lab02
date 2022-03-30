#!/bin/bash -v
cd /tmp
curl -O https://swaroopjoshi.in/courses/csf111-sp22/cp-0.1.0-Linux.zip
unzip cp-0.1.0-Linux.zip 
cp -r cp-0.1.0-Linux/include/cp/ /usr/local/include/
cp cp-0.1.0-Linux/lib/libcp.a /usr/local/lib/
cd -