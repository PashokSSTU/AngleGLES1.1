#ifndef __LOADGL_H__
#define __LOADGL_H__

#if USE_ANGLE_GLES

#define APIENTRY __stdcall
#include "GLES/gl.h"
#include "GLES/glext.h"
#include "stdio.h"
#include "stdlib.h"
#include <SDL.h>
#undef main

// OpenGL ES:

extern void (APIENTRY* bglAlphaFunc)(GLenum func, GLfloat ref);
extern void (APIENTRY* bglClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void (APIENTRY* bglClearDepthf)(GLfloat d);
extern void (APIENTRY* bglClipPlanef)(GLenum p, const GLfloat* eqn);
extern void (APIENTRY* bglColor4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void (APIENTRY* bglDepthRangef)(GLfloat n, GLfloat f);
extern void (APIENTRY* bglFogf)(GLenum pname, GLfloat param);
extern void (APIENTRY* bglFogfv)(GLenum pname, const GLfloat* params);
extern void (APIENTRY* bglFrustumf)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
extern void (APIENTRY* bglGetClipPlanef)(GLenum plane, GLfloat* equation);
extern void (APIENTRY* bglGetFloatv)(GLenum pname, GLfloat* data);
extern void (APIENTRY* bglGetLightfv)(GLenum light, GLenum pname, GLfloat* params);
extern void (APIENTRY* bglGetMaterialfv)(GLenum face, GLenum pname, GLfloat* params);
extern void (APIENTRY* bglGetTexEnvfv)(GLenum target, GLenum pname, GLfloat* params);
extern void (APIENTRY* bglGetTexParameterfv)(GLenum target, GLenum pname, GLfloat* params);
extern void (APIENTRY* bglLightModelf)(GLenum pname, GLfloat param);
extern void (APIENTRY* bglLightModelfv)(GLenum pname, const GLfloat* params);
extern void (APIENTRY* bglLightf)(GLenum light, GLenum pname, GLfloat param);
extern void (APIENTRY* bglLightfv)(GLenum light, GLenum pname, const GLfloat* params);
extern void (APIENTRY* bglLineWidth)(GLfloat width);
extern void (APIENTRY* bglLoadMatrixf)(const GLfloat* m);
extern void (APIENTRY* bglMaterialf)(GLenum face, GLenum pname, GLfloat param);
extern void (APIENTRY* bglMaterialfv)(GLenum face, GLenum pname, const GLfloat* params);
extern void (APIENTRY* bglMultMatrixf)(const GLfloat* m);
extern void (APIENTRY* bglMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void (APIENTRY* bglNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz);
extern void (APIENTRY* bglOrthof)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
extern void (APIENTRY* bglPointParameterf)(GLenum pname, GLfloat param);
extern void (APIENTRY* bglPointParameterfv)(GLenum pname, const GLfloat* params);
extern void (APIENTRY* bglPointSize)(GLfloat size);
extern void (APIENTRY* bglPolygonOffset)(GLfloat factor, GLfloat units);
extern void (APIENTRY* bglRotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
extern void (APIENTRY* bglScalef)(GLfloat x, GLfloat y, GLfloat z);
extern void (APIENTRY* bglTexEnvf)(GLenum target, GLenum pname, GLfloat param);
extern void (APIENTRY* bglTexEnvfv)(GLenum target, GLenum pname, const GLfloat* params);
extern void (APIENTRY* bglTexParameterf)(GLenum target, GLenum pname, GLfloat param);
extern void (APIENTRY* bglTexParameterfv)(GLenum target, GLenum pname, const GLfloat* params);
extern void (APIENTRY* bglTranslatef)(GLfloat x, GLfloat y, GLfloat z);
extern void (APIENTRY* bglActiveTexture)(GLenum texture);
extern void (APIENTRY* bglAlphaFuncx)(GLenum func, GLfixed ref);
extern void (APIENTRY* bglBindBuffer)(GLenum target, GLuint buffer);
extern void (APIENTRY* bglBindTexture)(GLenum target, GLuint texture);
extern void (APIENTRY* bglBlendFunc)(GLenum sfactor, GLenum dfactor);
extern void (APIENTRY* bglBufferData)(GLenum target, GLsizeiptr size, const void* data, GLenum usage);
extern void (APIENTRY* bglBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
extern void (APIENTRY* bglClear)(GLbitfield mask);
extern void (APIENTRY* bglClearColorx)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
extern void (APIENTRY* bglClearDepthx)(GLfixed depth);
extern void (APIENTRY* bglClearStencil)(GLint s);
extern void (APIENTRY* bglClientActiveTexture)(GLenum texture);
extern void (APIENTRY* bglClipPlanex)(GLenum plane, const GLfixed* equation);
extern void (APIENTRY* bglColor4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
extern void (APIENTRY* bglColor4x)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
extern void (APIENTRY* bglColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern void (APIENTRY* bglColorPointer)(GLint size, GLenum type, GLsizei stride, const void* pointer);
extern void (APIENTRY* bglCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
extern void (APIENTRY* bglCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
extern void (APIENTRY* bglCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void (APIENTRY* bglCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void (APIENTRY* bglCullFace)(GLenum mode);
extern void (APIENTRY* bglDeleteBuffers)(GLsizei n, const GLuint* buffers);
extern void (APIENTRY* bglDeleteTextures)(GLsizei n, const GLuint* textures);
extern void (APIENTRY* bglDepthFunc)(GLenum func);
extern void (APIENTRY* bglDepthMask)(GLboolean flag);
extern void (APIENTRY* bglDepthRangex)(GLfixed n, GLfixed f);
extern void (APIENTRY* bglDisable)(GLenum cap);
extern void (APIENTRY* bglDisableClientState)(GLenum array);
extern void (APIENTRY* bglDrawArrays)(GLenum mode, GLint first, GLsizei count);
extern void (APIENTRY* bglDrawElements)(GLenum mode, GLsizei count, GLenum type, const void* indices);
extern void (APIENTRY* bglEnable)(GLenum cap);
extern void (APIENTRY* bglEnableClientState)(GLenum array);
extern void (APIENTRY* bglFinish)(void);
extern void (APIENTRY* bglFlush)(void);
extern void (APIENTRY* bglFogx)(GLenum pname, GLfixed param);
extern void (APIENTRY* bglFogxv)(GLenum pname, const GLfixed* param);
extern void (APIENTRY* bglFrontFace)(GLenum mode);
extern void (APIENTRY* bglFrustumx)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
extern void (APIENTRY* bglGetBooleanv)(GLenum pname, GLboolean* data);
extern void (APIENTRY* bglGetBufferParameteriv)(GLenum target, GLenum pname, GLint* params);
extern void (APIENTRY* bglGetClipPlanex)(GLenum plane, GLfixed* equation);
extern void (APIENTRY* bglGenBuffers)(GLsizei n, GLuint* buffers);
extern void (APIENTRY* bglGenTextures)(GLsizei n, GLuint* textures);
extern GLenum(APIENTRY* bglGetError)(void);
extern void (APIENTRY* bglGetFixedv)(GLenum pname, GLfixed* params);
extern void (APIENTRY* bglGetIntegerv)(GLenum pname, GLint* data);
extern void (APIENTRY* bglGetLightxv)(GLenum light, GLenum pname, GLfixed* params);
extern void (APIENTRY* bglGetMaterialxv)(GLenum face, GLenum pname, GLfixed* params);
extern void (APIENTRY* bglGetPointerv)(GLenum pname, void** params);
extern const GLubyte* (APIENTRY* bglGetString)(GLenum name);
extern void (APIENTRY* bglGetTexEnviv)(GLenum target, GLenum pname, GLint* params);
extern void (APIENTRY* bglGetTexEnvxv)(GLenum target, GLenum pname, GLfixed* params);
extern void (APIENTRY* bglGetTexParameteriv)(GLenum target, GLenum pname, GLint* params);
extern void (APIENTRY* bglGetTexParameterxv)(GLenum target, GLenum pname, GLfixed* params);
extern void (APIENTRY* bglHint)(GLenum target, GLenum mode);
extern GLboolean(APIENTRY* bglIsBuffer)(GLuint buffer);
extern GLboolean(APIENTRY* bglIsEnabled)(GLenum cap);
extern GLboolean(APIENTRY* bglIsTexture)(GLuint texture);
extern void (APIENTRY* bglLightModelx)(GLenum pname, GLfixed param);
extern void (APIENTRY* bglLightModelxv)(GLenum pname, const GLfixed* param);
extern void (APIENTRY* bglLightx)(GLenum light, GLenum pname, GLfixed param);
extern void (APIENTRY* bglLightxv)(GLenum light, GLenum pname, const GLfixed* params);
extern void (APIENTRY* bglLineWidthx)(GLfixed width);
extern void (APIENTRY* bglLoadIdentity)(void);
extern void (APIENTRY* bglLoadMatrixx)(const GLfixed* m);
extern void (APIENTRY* bglLogicOp)(GLenum opcode);
extern void (APIENTRY* bglMaterialx)(GLenum face, GLenum pname, GLfixed param);
extern void (APIENTRY* bglMaterialxv)(GLenum face, GLenum pname, const GLfixed* param);
extern void (APIENTRY* bglMatrixMode)(GLenum mode);
extern void (APIENTRY* bglMultMatrixx)(const GLfixed* m);
extern void (APIENTRY* bglMultiTexCoord4x)(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
extern void (APIENTRY* bglNormal3x)(GLfixed nx, GLfixed ny, GLfixed nz);
extern void (APIENTRY* bglNormalPointer)(GLenum type, GLsizei stride, const void* pointer);
extern void (APIENTRY* bglOrthox)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
extern void (APIENTRY* bglPixelStorei)(GLenum pname, GLint param);
extern void (APIENTRY* bglPointParameterx)(GLenum pname, GLfixed param);
extern void (APIENTRY* bglPointParameterxv)(GLenum pname, const GLfixed* params);
extern void (APIENTRY* bglPointSizex)(GLfixed size);
extern void (APIENTRY* bglPolygonOffsetx)(GLfixed factor, GLfixed units);
extern void (APIENTRY* bglPopMatrix)(void);
extern void (APIENTRY* bglPushMatrix)(void);
extern void (APIENTRY* bglReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);
extern void (APIENTRY* bglRotatex)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
extern void (APIENTRY* bglSampleCoverage)(GLfloat value, GLboolean invert);
extern void (APIENTRY* bglSampleCoveragex)(GLclampx value, GLboolean invert);
extern void (APIENTRY* bglScalex)(GLfixed x, GLfixed y, GLfixed z);
extern void (APIENTRY* bglScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
extern void (APIENTRY* bglShadeModel)(GLenum mode);
extern void (APIENTRY* bglStencilFunc)(GLenum func, GLint ref, GLuint mask);
extern void (APIENTRY* bglStencilMask)(GLuint mask);
extern void (APIENTRY* bglStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
extern void (APIENTRY* bglTexCoordPointer)(GLint size, GLenum type, GLsizei stride, const void* pointer);
extern void (APIENTRY* bglTexEnvi)(GLenum target, GLenum pname, GLint param);
extern void (APIENTRY* bglTexEnvx)(GLenum target, GLenum pname, GLfixed param);
extern void (APIENTRY* bglTexEnviv)(GLenum target, GLenum pname, const GLint* params);
extern void (APIENTRY* bglTexEnvxv)(GLenum target, GLenum pname, const GLfixed* params);
extern void (APIENTRY* bglTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);
extern void (APIENTRY* bglTexParameteri)(GLenum target, GLenum pname, GLint param);
extern void (APIENTRY* bglTexParameterx)(GLenum target, GLenum pname, GLfixed param);
extern void (APIENTRY* bglTexParameteriv)(GLenum target, GLenum pname, const GLint* params);
extern void (APIENTRY* bglTexParameterxv)(GLenum target, GLenum pname, const GLfixed* params);
extern void (APIENTRY* bglTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
extern void (APIENTRY* bglTranslatex)(GLfixed x, GLfixed y, GLfixed z);
extern void (APIENTRY* bglVertexPointer)(GLint size, GLenum type, GLsizei stride, const void* pointer);
extern void (APIENTRY* bglViewport)(GLint x, GLint y, GLsizei width, GLsizei height);

void GLESInit();
void GLESDeInit();

#endif // USE_ANGLE_GLES

#endif