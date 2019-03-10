require './ToTweet.rb'
require './inputText.rb'

puts("Thank you for using RunOyoClient!!")

loop do

  print("Choice mode(tweet -> 1, get TL -> 2, finish RunOyoClient -> q!)\n >> ")

  choiceMode = inputText()

  if choiceMode == "1" then
    toTweet()
  elsif choiceMode == "q!" then
    puts("Also, use it.")
    break
  else
    puts("Please correct input")
  end
end
