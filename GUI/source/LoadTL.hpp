#ifndef RUN_OYO_CLIENT_LOAD_TL_HPP_
#define RUN_OYO_CLIENT_LOAD_TL_HPP_

#include <Siv3D.hpp>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>
#include "TweetBox.hpp"

namespace RunOyoClient {
  class LoadTL {
    private :
      std::vector<String> tweet;
      std::vector<String> ID;
      std::vector<String> Name;
    public :
      LoadTL();
      std::vector<TweetBox> TL;
      void setPos(int32 x, int32 y);
      void draw();
      void setStr(std::vector<String> tweet, std::vector<String> ID, std::vector<String> Name);
      void loadTLCSV();
  };
}

#endif
