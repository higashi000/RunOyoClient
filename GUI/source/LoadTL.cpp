#include "LoadTL.hpp"

namespace RunOyoClient {
  LoadTL::LoadTL() {
    TL = std::vector<TweetBox>(25);
    tweet = std::vector<String>(25);
    ID = std::vector<String>(25);
    Name = std::vector<String>(25);
  }

  void LoadTL::setPos(int32 x, int32 y) {
    for (int i = 0; i < 25; ++i) {
      TL[i].setPos(x, y + (i * 100));
    }
  }

  void LoadTL::setStr(std::vector<String> tweet, std::vector<String> ID, std::vector<String> Name) {
    for (int i = 0; i < 25; ++i) {
      TL[i].setBoxStr(tweet[i], ID[i], Name[i]);
    }
  }

  void LoadTL::draw() {
    for (int i = 0; i < 25; ++i) {
      TL[i].draw();
    }
  }

  void LoadTL::loadTLCSV() {
    std::ifstream ifs("../../Twitter/TL.csv");
    std::string str;

    if (ifs.fail()) {
      std::cerr << "Failed to open file." << std::endl;
      exit(EXIT_FAILURE);
    }

    int i = 0;
    int whichStr = 0;
    while (getline(ifs, str)) {
      if (str == "('・ω・')") {
        i++;
        whichStr = (whichStr + 1) % 3;
        continue;
      }


      if (whichStr == 0) {
        Name[i] = s3d::Unicode::Widen(str);
        whichStr++;
      } else if (whichStr == 1) {
        ID[i] = s3d::Unicode::Widen(str);
        whichStr++;
      } else if (whichStr == 2) {
        tweet[i] += s3d::Unicode::Widen(str);
      }
    }

    setStr(tweet, ID, Name);
  }
}
