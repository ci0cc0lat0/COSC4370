
#version 330 core
layout (location = 0) in vec3 position;
layout (location = 1) in vec3 normal;

out vec3 Normal;
out vec3 FragPos;

// Ant testing
out vec4 vColor;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    // TODO: Your code here
    // Remember to set gl_Position (correctly) or you will get a black screen...
  
  // Old color of my own choosing
  //vColor = vec4(0.3, 0.3, 0.8, 1.0);

  // The position of the fragments and the normals of the vertexs
  FragPos = vec3(model * vec4(position,1.0));
  Normal = normal;

  // the pipeline matrices all being multiplied together
  gl_Position = projection * view * model * vec4(position, 1.0);
 

} 
