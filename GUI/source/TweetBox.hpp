#ifndef RUN_OYO_CLIENT_TWEET_BOX_HPP_
#define RUN_OYO_CLIENT_TWEET_BOX_HPP_

#include <Siv3D.hpp>

namespace RunOyoClient {
  class TweetBox {
    public :
      Rect box;
      Font font;
      String tweetText;
      String userID;
      String userName;
      Vec2 tweetTextPos;
      Vec2 userIDPos;
      Vec2 userNamePos;

      TweetBox();
      void setBoxStr(String tweet, String ID, String Name);
      void draw();
      void setPos(int32 x, int32 y);
  };
}

#endif
