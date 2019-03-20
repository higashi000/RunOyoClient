#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Button.hpp"
#include "GetTweetText.hpp"
#include "LoadTL.hpp"

void Main() {

  Window::Resize(1280, 780);
  Graphics::SetBackground(Color(0, 169, 104));

  RunOyoClient::LoadTL tl;

  tl.setPos(10, 10);
    tl.loadTLCSV();


  while (System::Update()) {
    tl.draw();
  }
}
