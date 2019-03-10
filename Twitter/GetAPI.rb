require 'twitter'
require './TwitterAPI.rb'

@client = Twitter::REST::Client.new do |config|
  config.consumer_key        = HIGASHI136_2_ACCESS_TOKEN
  config.consumer_secret     = HIGASHI136_2_ACCESS_TOKEN_SECRET
  config.access_token        = HIGASHI136_2_CONSUMER_KEY
  config.access_token_secret = HIGASHI136_2_CONSUMER_SECRET
end
