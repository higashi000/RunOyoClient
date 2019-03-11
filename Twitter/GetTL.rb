require './GetAPI.rb'
require './inputText.rb'


def GetTL
  number = 1
  @client.home_timeline.reverse_each do |tweet|
    p number
    puts("")
    p tweet.user.name
    puts("")
    p tweet.user.screen_name
    puts("")
    p tweet.text
    p "------------------------------"
    number += 1
  end
end
