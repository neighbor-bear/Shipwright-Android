#pragma once

#include "soh/resource/importer/scenecommand/SceneCommandFactory.h"

namespace LUS {
class EndMarkerFactory : public SceneCommandFactory {
  public:
    std::shared_ptr<IResource>
    ReadResource(std::shared_ptr<ResourceInitData> initData, std::shared_ptr<BinaryReader> reader) override;
};

class EndMarkerFactoryV0 : public SceneCommandVersionFactory {
  public:
    void ParseFileBinary(std::shared_ptr<BinaryReader> reader, std::shared_ptr<IResource> resource) override;
};
}; // namespace LUS
