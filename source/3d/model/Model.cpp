#include <Ess3D/3d/model/Model.h>
#include <iostream>

namespace Ess3D {

  void Model::initialize() {
    auto it = _meshes.begin();

    while(it != _meshes.end()) {
      (*it)->getMeshRenderer()->initialize();

      it++;
    }
  }

  void Model::render(Shader* shader) {
    auto it = _meshes.begin();

    while(it != _meshes.end()) {
      (*it)->getMeshRenderer()->render(shader);

      it++;
    }
  }

  void Model::addMesh(Mesh* mesh) {
    _meshes.push_back(mesh);
  }

};