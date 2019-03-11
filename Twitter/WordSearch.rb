require './GetAPI.rb'
require './inputText.rb'

def WordSearch()
  print("Please input keyword\n >> ")
  keyword = inputText()
  @client.search(keyword, :count => 50).map do |tweet|
    p tweet.user.name
    puts("")
    p tweet.user.screen_name
    puts("")
    p tweet.text
    p "------------------------------"
  end
end
