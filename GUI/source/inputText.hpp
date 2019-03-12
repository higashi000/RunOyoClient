#ifndef RUN_OY_CLIENT_INPUT_TEXT_HPP
#define RUN_OY_CLIENT_INPUT_TEXT_HPP

#include <Siv3D.hpp>
#include "Button.hpp"

namespace RunOyoClient {
  class InputText {
    private:
      RunOyoClient::Button button;
      TextBox textBox;
      Font font;
      Vec2 pos;

    public:
      String text;
      InputText();
      void setPos(uint32 x, uint32 y);
      void draw();
  };
}

#endif
