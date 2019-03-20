#include "TweetBox.hpp"

namespace RunOyoClient {
  TweetBox::TweetBox() {
    box = Rect(0, 0, 1200, 90);
    font = Font(20);
    tweetText = U"";
    userID = U"";
    userName = U"";
    tweetTextPos = Vec2(0, 0);
    userIDPos = Vec2(0, 0);
    userNamePos = Vec2(0, 0);
  }

  void TweetBox::setPos(int32 x, int32 y) {
    box.setPos(x, y);
    userNamePos = Vec2(x, y);
    userIDPos = Vec2(x, y + 25);
    tweetTextPos = Vec2(x, y + 50);
  }

  void TweetBox::setBoxStr(String tweet, String ID, String Name) {
    tweetText = tweet;
    userID = ID;
    userName = Name;
  }

  void TweetBox::draw() {
    box.draw(Palette::White);
    font(userName).draw(userNamePos, Palette::Black);
    font(userID).draw(userIDPos, Palette::Black);
    font(tweetText).draw(tweetTextPos, Palette::Black);
  }
}
