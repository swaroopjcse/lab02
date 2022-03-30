#!/bin/bash
RUN cd /tmp
RUN curl -O https://swaroopjoshi.in/courses/csf111-sp22/cp-0.1.0-Linux.zip
RUN unzip cp-0.1.0-Linux.zip 
RUN cp -r cp-0.1.0-Linux/include/cp/ /usr/local/include/
RUN cp cp-0.1.0-Linux/lib/libcp.a /usr/local/lib/