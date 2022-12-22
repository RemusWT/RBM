#include "opengl_basic_wrapper.h"

void opengl_hints_basic() {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void opengl_glad_load() {
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        printf("Failed to initialize GLAD.\n");
    }
}



VBO::VBO() {
    glGenBuffers(1, &ID);
    glBindBuffer(GL_ARRAY_BUFFER, ID);
}
VBO::VBO(const void *data, GLsizeiptr size) { // @TODO specify the GL Draw method.
    glGenBuffers(1, &ID);
    glBindBuffer(GL_ARRAY_BUFFER, ID);
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}
void VBO::update_vertex_buffer(const void *data, GLsizeiptr size) {
    glBindBuffer(GL_ARRAY_BUFFER, ID);
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}

VAO::VAO() {
    glGenVertexArrays(1, &ID);
    glBindVertexArray(ID);
}
void VAO::attribute(u32 index, s32 size, GLenum type, u32 stride, u32 offset) {
    glBindVertexArray(ID);
    glVertexAttribPointer(index, size, type, GL_FALSE, stride * sizeof(type), (void*)(offset * sizeof(type)));
    glEnableVertexAttribArray(index);
    
}
void VAO::bind() {
    glBindVertexArray(ID);
}
void VAO::unbind() {
    glBindVertexArray(0);
}


EBO::EBO() {
    glGenBuffers(1, &ID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
}
EBO::EBO(const void *data, GLsizeiptr size) {
    glGenBuffers(1, &ID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}
void EBO::update_element_buffer(const void *data, GLsizeiptr size) {
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}
void EBO::bind() {
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
}


