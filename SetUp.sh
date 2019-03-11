#!/bin/sh

echo -n "Please input your API_KEY >> "
read _ApiKey
echo -n "Please input your API_SECRET_KEY >> "
read _ApiSecretKey
echo -n "Please input your ACCESS_TOKEN >> "
read _AccessToken
echo -n "Please input your ACCESS_TOKEN_SECRET >> "
read _AccessTokenSecret

echo "CONSUMER_KEY = '$_ApiKey'" > ./Twitter/TwitterAPI.rb
echo "CONSUMER_SECRET = '$_ApiSecretKey'" >> ./Twitter/TwitterAPI.rb
echo "ACCESS_TOKEN = '$_AccessToken'" >> ./Twitter/TwitterAPI.rb
echo "ACCESS_TOKEN_SECRET = '$_AccessTokenSecret'" >> ./Twitter/TwitterAPI.rb
