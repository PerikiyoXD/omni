#!/bin/bash
xmake project -k cmake -y
xmake project -k compile_commands -y
xmake -vDr