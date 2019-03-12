#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Button.hpp"
#include "inputText.hpp"

void Main() {

  Window::Resize(1280, 780);
  Graphics::SetBackground(Color(0, 169, 104));

  auto textbox = RunOyoClient::InputText();
  textbox.setPos(100, 100);


  while (System::Update()) {
    textbox.draw();
  }
}
