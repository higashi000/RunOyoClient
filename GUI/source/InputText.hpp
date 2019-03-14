#ifndef RUN_OYO_CLIENT_INPUT_TEXT_HPP_
#define RUN_OYO_CLIENT_INPUT_TEXT_HPP_

#include <Siv3D.hpp>
#include <cstdlib>
#include "Button.hpp"

namespace RunOyoClient {
  class InputText {
    protected:
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
