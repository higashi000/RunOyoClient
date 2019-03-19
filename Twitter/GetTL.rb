require './GetAPI.rb'
require './inputText.rb'

def GetTL
  File.open("TL.csv", "w") do |file|
    @client.home_timeline.each do |tweet|
      file.puts(tweet.user.name)
      file.puts(tweet.user.screen_name)
      file.puts(tweet.text)
      file.puts("('・ω・')")
    end
  end
end
GetTL()
