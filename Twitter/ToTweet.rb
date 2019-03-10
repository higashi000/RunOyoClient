require './GetAPI.rb'
require './inputText.rb'

TweetEnding = ["ルン", "ルン！", "オヨ〜", ""]

def toTweet()
  print("Please input Tweet Text\n >> ")

  tweetText = inputText()

  nextEnding = rand(0 .. 4)

  case nextEnding
  when 2 then
    @client.update("#{TweetEnding[nextEnding]}")
    p "Tweeted `#{TweetEnding[nextEnding]}`"
  else
    @client.update("#{tweetText}#{TweetEnding[nextEnding]}")
    p "Tweeted `#{tweetText}#{TweetEnding[nextEnding]}`"
  end
end
