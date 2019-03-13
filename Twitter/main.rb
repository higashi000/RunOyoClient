require './ToTweet.rb'
require './GetTL.rb'
require './WordSearch.rb'
require './inputText.rb'

if ARGV[0] == "1" then
  toTweet()
elsif ARGV[0] == "2" then
  GetTL()
elsif ARGV[0] == "3" then
  WordSearch()
end
