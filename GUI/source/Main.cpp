#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Button.hpp"
#include "GetTweetText.hpp"

void Main() {

  Window::Resize(1280, 780);
  Graphics::SetBackground(Color(0, 169, 104));

  RunOyoClient::GetTweetText textbox;
  textbox.setPos(100, 100);


  while (System::Update()) {
    textbox.draw();
  }
}
