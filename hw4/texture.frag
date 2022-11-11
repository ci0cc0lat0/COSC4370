
#version 330 core
out vec4 color;

in vec2 UV;
uniform sampler2D myTextureSampler;

void main()
{
    // TODO: pub with your code...
    //color = vec4(0.2,0.6,0.2,1.0f);
    color = texture(myTextureSampler,UV);
}
