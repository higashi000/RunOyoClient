#ifndef RUN_OYO_CLIENT_GET_TWEET_TEXT_HPP_
#define RUN_OYO_CLIENT_GET_TWEET_TEXT_HPP_

#include <Siv3D.hpp>
#include <cstdlib>
#include "InputText.hpp"

namespace RunOyoClient {
class GetTweetText : public InputText {
  public:
    void sendTweetText();
    void draw();
};
}

#endif
