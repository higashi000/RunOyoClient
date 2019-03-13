#include "inputText.hpp"

namespace RunOyoClient {

  InputText::InputText() {
    button = Button(60, 38, 25, U"送信");
    font = Font(25);
    textBox = TextBox(font, pos, 400);
    pos = Vec2(0, 0);
  }

  void InputText::draw() {
    textBox.update();
    textBox.setActive(true);
    textBox.draw();
    textBox.drawOverlay();
    button.draw();
    if (button.isClick()){
      char str[255];
      std::string tweetText = textBox.getText().narrow();
      sprintf(str, "bash ../source/sendToTweet.sh 1 %s", tweetText.c_str());
      system(str);
    }
  }

  void InputText::setPos(uint32 x, uint32 y) {
    pos = Vec2(x, y);
    textBox.setPos(pos);
    button.setPos(x + 400, y);
  }
}
