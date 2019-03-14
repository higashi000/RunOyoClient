#!/bin/sh

cd ./Twitter
gnome-terminal -- ruby ./main.rb &
cd ../
cd GUI/projectConfig
gnome-terminal -- ./RunOyoClient &
