#!/bin/bash

GREEN='\033[0;32m'
RED='\033[0;31m'
BLUE='\033[0;34m'
BOLD='\033[0;1m'
END='\033[0m'

make

testExpr() {

	result=$(./RPN "$1")

	if [ "$result" == "$2" ]; then
		echo -e "$GREEN$1, result: $2 $END"
	else
		echo -e "$RED$1, result: $result (should be $2) $END"
	fi
}

testExpr "8 9 * 9 - 9 - 9 - 4 - 1 +" "42"
testExpr "7 7 * 7 -" "42"
testExpr "1 2 * 2 / 2 * 2 4 - +" "0"
testExpr "(1 + 1)" "Error"
