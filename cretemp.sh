#!/bin/sh
if [ ! -e $1 ]; then
  mkdir $1
fi

if [ "$(ls $1)" ]; then
  echo "ディレクトリ内が空ではありません"
elif [ -z $2 ]; then
  echo "テンプレートを指定してください"
elif [ $2 = "java" ]; then
  echo "java 専用ディレクトリ構造\n"
  mkdir $1/A
  mkdir $1/B
  mkdir $1/C
  mkdir $1/D
  cp Template.$2 $1/A/Main.$2
  cp Template.$2 $1/B/Main.$2
  cp Template.$2 $1/C/Main.$2
  cp Template.$2 $1/D/Main.$2
  echo "$(tree $1)"
elif [ -n $3 ]; then
  cp Template.$2 $1/$3.$2
  echo "$(tree $1)"
else
  cp Template.$2 $1/A.$2
  cp Template.$2 $1/B.$2
  cp Template.$2 $1/C.$2
  cp Template.$2 $1/D.$2
  echo "$(tree $1)"
fi
