#version 450

layout(location = 0) in vec2 position;
layout(location = 1) in vec2 st;

layout(location = 0) out vec2 fragST;

layout(push_constant) uniform UBO {
	mat4 transform;
} uni;

void main() {
	gl_Position = /*transform.projection * transform.view * transform.model*/ uni.transform * vec4(position, 0.0f, 1.0f);
	fragST = st;
}
