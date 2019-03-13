#!/bin/sh

cd ./Twitter
konsole -e ruby ./main.rb &
cd ../
cd GUI/projectConfig
konsole -e ./RunOyoClient &

