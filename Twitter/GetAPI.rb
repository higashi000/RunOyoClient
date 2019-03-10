require 'twitter'
require './TwitterAPI.rb'

@client = Twitter::REST::Client.new do |config|
  config.consumer_key        = ACCESS_TOKEN
  config.consumer_secret     = ACCESS_TOKEN_SECRET
  config.access_token        = CONSUMER_KEY
  config.access_token_secret = CONSUMER_SECRET
end
