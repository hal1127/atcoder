#!/bin/sh

if [ "$(ls "$1")" ]
then
  echo "ディレクトリ内が空ではありません"
elif [ -z "$2" ]
then
  echo "テンプレートを指定してください"
else
  cp Template.$2 $1/A.$2
  cp Template.$2 $1/B.$2
  cp Template.$2 $1/C.$2
  cp Template.$2 $1/D.$2
  echo "成功"
fi