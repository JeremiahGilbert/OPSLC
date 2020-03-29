#version 450

layout(location = 0) in vec2 fragST;

layout(location = 0) out vec4 outColor;

layout(binding = 0) uniform sampler2D spriteSampler; 

layout(push_constant) uniform Animation {
	layout(offset = 64) vec4 dimensions;
	layout(offset = 80) vec4 offset;
} sprite;

void main() {
	outColor = texture(spriteSampler, fragST * sprite.dimensions.xy + sprite.offset.xy);
}