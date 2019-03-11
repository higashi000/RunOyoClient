require './GetAPI.rb'
require './inputText.rb'


def GetTL
  @client.home_timeline.reverse_each do |tweet|
    puts("")
    p tweet.user.name
    puts("")
    p tweet.user.screen_name
    puts("")
    p tweet.text
    p "------------------------------"
  end
end
