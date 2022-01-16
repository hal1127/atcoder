#!/bin/sh
if [ ! -e $1 ]; then
  mkdir $1
fi
if [ "$(ls $1)" ]; then
  echo "ディレクトリ内が空ではありません"
elif [ -z $2 ]; then
  echo "テンプレートを指定してください"
else
  cp Template.$2 $1/A.$2
  cp Template.$2 $1/B.$2
  cp Template.$2 $1/C.$2
  cp Template.$2 $1/D.$2
  echo "$(ls $1)"
fi
