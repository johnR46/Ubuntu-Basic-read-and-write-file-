#!/bin/bash

gcc -DDEBUG -c  sample.c

gcc -DDEBUG -c  samplenet.c

gcc -DDEBUG -c  sampleprocess.c

gcc -DDEBUG -c  samplesys.c

gcc -DDEBUG -o ksamp  main.c sample.o samplenet.o sampleprocess.o samplesys.o
