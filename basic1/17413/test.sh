#!bin/sh
echo "test start"
node ./reverseWord.js < input > out && diff -w out answer
isGood=$?

if [ $isGood -eq 1 ]
then
    echo "wrong check the out file to debug."
else
    echo "correct!"
    rm -rf out
fi
