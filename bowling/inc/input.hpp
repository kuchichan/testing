#pragma once

#include <experimental/filesystem>
#include <memory>
#include <string>

#include "lane.hpp"

class Input {
public:
    Input(const std::string& directory);

    bool isValid() const { return isValid_; }
    size_t getLanesNum() const { return lanesNum_; }
    std::shared_ptr<Lane> getLane(size_t index);

private:
    std::experimental::filesystem::path directoryPath_;
    bool isValid_;
    std::vector<std::shared_ptr<Lane>> lanes_;
    size_t lanesNum_;

    std::vector<std::experimental::filesystem::path> getFiles();
    void readLanes(const std::vector<std::experimental::filesystem::path>& files);
    void readPlayers(const std::experimental::filesystem::path& file, Lane& lane);
};
