#!/bin/sh

echo -n "Please input your ACCESS_TOKEN >> "
read _AccessToken
echo -n "Please input your ACCESS_TOKEN_SECRET >> "
read _AccessTokenSecret
echo -n "Please input your CONSUMER_KEY >> "
read _ConsumerKey
echo -n "Please input your CONSUMER_SECRET >> "
read _ConsumerKeySecret

echo "ACCESS_TOKEN = "$_AccessToken"" >> ./Twitter/TwitterAPI.rb
echo "ACCESS_TOKEN_SECRET = "$_AccessTokenSecret"" >> ./Twitter/TwitterAPI.rb
echo "CONSUMER_SECRET = "$_ConsumerKeySecret"" >> ./Twitter/TwitterAPI.rb
echo "CONSUMER_KEY = "$_ConsumerKey"" >> ./Twitter/TwitterAPI.rb
