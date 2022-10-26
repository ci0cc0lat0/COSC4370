
#version 330 core
out vec4 color;

in vec3 FragPos;
in vec3 Normal;

// Ant testing
in vec4 vColor;

uniform vec3 lightPos;
uniform vec3 viewPos;
uniform vec3 lightColor;
uniform vec3 objectColor;

void main() {
	// TODO: Replace with your code...
	// If gl_Position was set correctly, this gives a totally red cube
  //color  = vColor;
  
  // ambient lighting
  float ambientStr = 0.1f;
  vec3 ambient = ambientStr * lightColor;

  //diffuse lighting
  vec3 norm = normalize(Normal);
  vec3 lightDir = normalize(lightPos - FragPos);
  float diff = max(dot(norm, lightDir),0.0);
  vec3 diffuse = diff * lightColor;
  

  //spec lighting
  float specStr = 0.7;
  vec3 viewDir = normalize(viewPos - FragPos);
  vec3 reflectDir = reflect(-lightDir, norm);
  float spec = pow(max(dot(viewDir, reflectDir), 0.0), 42);
  vec3 specular = specStr * spec * lightColor;

  // The sum of the lighting multipled byt he object's Color
  vec3 result = (ambient+diffuse+specular) * objectColor;
  color = vec4(result, 1.0);
}
