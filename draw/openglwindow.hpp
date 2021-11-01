#ifndef OPENGLWINDOW_HPP_
#define OPENGLWINDOW_HPP_

#include <array>
#include <glm/vec2.hpp>
#include <random>
#include "gamedata.hpp"

#include "abcg.hpp"

class OpenGLWindow : public abcg::OpenGLWindow {
 protected:
  void initializeGL() override;
  void paintGL() override;
  void paintUI() override;
  void resizeGL(int width, int height) override;
  void terminateGL() override;
  void handleEvent(SDL_Event& event) override;

 private:
  GLuint m_vao{};
  GLuint m_vboVertices{};
  GLuint m_program{};

  int m_viewportWidth{};
  int m_viewportHeight{};
  GameData m_gameData;


  const std::array<glm::vec2, 1> m_points{glm::vec2( 1,  1)};
  glm::vec2 m_P{};

  void setupModel();
};
#endif