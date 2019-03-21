require './GetAPI.rb'
require './inputText.rb'

def WordSearch()
  File.open("WordSearch.csv", "w") do |file|
    @client.search(ARGV[1], :count => 50).map do |tweet|
      file.puts(tweet.user.name)
      file.puts(tweet.user.screen_name)
      file.puts(tweet.text)
      file.puts("('・ω・')")
    end
  end
end
