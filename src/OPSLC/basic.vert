#version 450

struct Skeleton {
	mat4 bones;
	mat4 bones2;
};

struct Body {
	Skeleton skele[8];
};

layout(location = 0) in vec2 position;
layout(location = 1) in vec3 color;
layout(location = 2) in vec2 texCoord;

layout(location = 0) out vec3 fragColor;
layout(location = 1) out vec2 fragTexCoord;

layout(binding = 0) uniform UBO {
	mat4 model;
	mat4 view;
	mat4 projection;
} transform;

void main() {
	gl_Position = transform.projection * transform.model * vec4(position, 0.0, 1.0);
    fragColor = color;
	fragTexCoord = texCoord;
}
