#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Button.hpp"
#include "GetTweetText.hpp"
#include "LoadTL.hpp"

void Main() {

  Window::Resize(1280, 780);
  Graphics::SetBackground(Color(0, 169, 104));


  RunOyoClient::GetTweetText tweetTextBox;
  RunOyoClient::LoadTL tl;
  RunOyoClient::Button updateTL;
  updateTL = RunOyoClient::Button(140, 50, 40, U"TL更新");
  tweetTextBox.setPos(0, 0);
  updateTL.setPos(10, 100);
  tl.setPos(10, 165);


  while (System::Update()) {
    tweetTextBox.draw();
    updateTL.draw();
    if (updateTL.isClick()) {
      tl.getTL();
      tl.loadTLCSV();
    }
    tl.draw();
  }
}
