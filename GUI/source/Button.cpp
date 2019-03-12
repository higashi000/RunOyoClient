#include "Button.hpp"
#include <Siv3D.hpp>

namespace RunOyoClient {
  Button::Button() : buttonBase(0, 0, 60, 60), pos(60, 60), font(20) {}
  Button::Button(uint32 h, uint32 w, uint32 fontSize, String str) {
    buttonBase = Rect(0, 0, h, w);
    font = Font(fontSize);
    rectStr = str;
  }

  Button &Button::setPos(uint32 x, uint32 y) {
    pos = Vec2(x, y);
    buttonBase.setPos(x, y);
    return *this;
  }

  Button &Button::draw(const String &str) {
    buttonBase.draw(Palette::White);
    font(str).draw(pos, Palette::Black);

    return *this;
  }
  Button &Button::draw() {
    buttonBase.draw(Palette::White);
    font(rectStr).draw(pos, Palette::Black);

    return *this;
  }

  bool Button::isClick() {
    if (buttonBase.leftClicked()) {
      buttonBase.draw(Color(90, 68, 152));
      return true;
    } else {
      return false;
    }
  }
}
