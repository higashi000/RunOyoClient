require './GetAPI.rb'
require './inputText.rb'

def GetTL
  @client.home_timeline.each do |tweet|
    p tweet.user.name
    puts("")
    p tweet.user.screen_name
    puts("")
    p tweet.text
    p "------------------------------"
  end
end
