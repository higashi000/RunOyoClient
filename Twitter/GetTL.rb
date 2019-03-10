require './GetAPI.rb'
require './inputText.rb'

def GetTL
  @client.home_timeline.each do |tweet|
    p tweet.user.name
    p tweet.user.screen_name
    p tweet.text
    p "------------------------------"
  end
end
