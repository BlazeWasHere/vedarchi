#!/usr/bin/env bash

g++ -o tests -L cpr/lib archi/api.cpp  tests.cpp -lcpr -lcurl
./tests