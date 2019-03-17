#include "GetTweetText.hpp"

namespace RunOyoClient {
  void GetTweetText::sendTweetText() {
    std::string tweetText = textBox.getText().narrow();
    char sendStr[255];
    sprintf(sendStr, "bash ../source/sendToTweet.sh 1 %s", tweetText.c_str());
    system(sendStr);
  }

  void GetTweetText::draw() {
    textBox.update();
    textBox.setActive(true);
    textBox.draw();
    textBox.drawOverlay();
    button.draw();

    if (button.isClick()) {
      sendTweetText();
    }
  }
}
