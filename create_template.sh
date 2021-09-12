#!/bin/sh

if [ "$(ls $1)" ]
then
  echo "ディレクトリ内が空ではありません"
elif [ -z "$2" ]
then
  echo "テンプレートを指定してください"
else
  cp $2 $1/A.cpp
  cp $2 $1/B.cpp
  cp $2 $1/C.cpp
fi