require 'socket'

def ReceptionText(text)
  port = TCPSocket.open("localhost", 8080)

  port.puts "#{text}"

  port.close
end
