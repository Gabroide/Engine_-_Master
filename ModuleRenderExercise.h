#ifndef __ModuleRenderExercise_h__
#define __ModuleRenderExercise_h__

#include "Module.h"
#include "Math/float4x4.h"

class SceneObject;

class ModuleRenderExercise : public Module
{
public:
    ModuleRenderExercise();
    ~ModuleRenderExercise();

	bool            Init    ();
	update_status   Update  ();
	bool            CleanUp ();

	static math::float4x4 LookAt(const SceneObject &target, const SceneObject &eye);

private:
	void LoadShaderProgram();
	char* LoadShaderData(const char* filename);
	math::float4x4 ProjectionMatrix();

    unsigned vbo        = 0;
	unsigned program = 0;
	unsigned vao = 0;

	SceneObject* triangle;
	SceneObject* camera;
};

#endif /* __ModuleRenderExercise_h__ */
