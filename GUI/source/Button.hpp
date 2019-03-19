#ifndef RUN_OYO_CLIENT_BUTTON_HPP_
#define RUN_OYO_CLIENT_BUTTON_HPP_

#include <Siv3D.hpp>

namespace RunOyoClient {
  class Button {
    public:
      Rect buttonBase;
      Font font;
      Vec2 pos;
      uint32 clickNum;
      String rectStr;

      Button();
      Button(uint32 h, uint32 w, uint32 fontSize, String str);

      Button &setPos(uint32 x, uint32 y);
      Button &draw(const String &str);
      Button &draw();


      bool isClick();
  };
}

#endif
