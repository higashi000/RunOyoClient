require './GetAPI.rb'
require './inputText.rb'

def GetTL
  i = 0
  tlInform = Array.new(25, Array.new(3))
  @client.home_timeline.each do |tweet|
    tlInform[i][0] = tweet.user.name
    tlInform[i][1] = tweet.user.screen_name
    tlInform[i][2] = tweet.text
    i += 1
  end
  return tlInform
end
