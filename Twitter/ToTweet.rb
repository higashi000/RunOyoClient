require './GetAPI.rb'
require './inputText.rb'

TweetEnding = ["ルン", "ルン！", "オヨ〜", ""]

def toTweet()
  nextEnding = rand(0 .. 4)

  case nextEnding
  when 2 then
    @client.update("#{ARGV[1]}\n#{TweetEnding[nextEnding]}")
  else
    @client.update("#{ARGV[1]}#{TweetEnding[nextEnding]}")
  end
end
