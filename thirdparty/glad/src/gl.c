#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/gl.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif








static void glad_gl_load_GL_VERSION_1_0(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_0) return;
    context->Accum = (PFNGLACCUMPROC) load(userptr, "glAccum");
    context->AlphaFunc = (PFNGLALPHAFUNCPROC) load(userptr, "glAlphaFunc");
    context->Begin = (PFNGLBEGINPROC) load(userptr, "glBegin");
    context->Bitmap = (PFNGLBITMAPPROC) load(userptr, "glBitmap");
    context->BlendFunc = (PFNGLBLENDFUNCPROC) load(userptr, "glBlendFunc");
    context->CallList = (PFNGLCALLLISTPROC) load(userptr, "glCallList");
    context->CallLists = (PFNGLCALLLISTSPROC) load(userptr, "glCallLists");
    context->Clear = (PFNGLCLEARPROC) load(userptr, "glClear");
    context->ClearAccum = (PFNGLCLEARACCUMPROC) load(userptr, "glClearAccum");
    context->ClearColor = (PFNGLCLEARCOLORPROC) load(userptr, "glClearColor");
    context->ClearDepth = (PFNGLCLEARDEPTHPROC) load(userptr, "glClearDepth");
    context->ClearIndex = (PFNGLCLEARINDEXPROC) load(userptr, "glClearIndex");
    context->ClearStencil = (PFNGLCLEARSTENCILPROC) load(userptr, "glClearStencil");
    context->ClipPlane = (PFNGLCLIPPLANEPROC) load(userptr, "glClipPlane");
    context->Color3b = (PFNGLCOLOR3BPROC) load(userptr, "glColor3b");
    context->Color3bv = (PFNGLCOLOR3BVPROC) load(userptr, "glColor3bv");
    context->Color3d = (PFNGLCOLOR3DPROC) load(userptr, "glColor3d");
    context->Color3dv = (PFNGLCOLOR3DVPROC) load(userptr, "glColor3dv");
    context->Color3f = (PFNGLCOLOR3FPROC) load(userptr, "glColor3f");
    context->Color3fv = (PFNGLCOLOR3FVPROC) load(userptr, "glColor3fv");
    context->Color3i = (PFNGLCOLOR3IPROC) load(userptr, "glColor3i");
    context->Color3iv = (PFNGLCOLOR3IVPROC) load(userptr, "glColor3iv");
    context->Color3s = (PFNGLCOLOR3SPROC) load(userptr, "glColor3s");
    context->Color3sv = (PFNGLCOLOR3SVPROC) load(userptr, "glColor3sv");
    context->Color3ub = (PFNGLCOLOR3UBPROC) load(userptr, "glColor3ub");
    context->Color3ubv = (PFNGLCOLOR3UBVPROC) load(userptr, "glColor3ubv");
    context->Color3ui = (PFNGLCOLOR3UIPROC) load(userptr, "glColor3ui");
    context->Color3uiv = (PFNGLCOLOR3UIVPROC) load(userptr, "glColor3uiv");
    context->Color3us = (PFNGLCOLOR3USPROC) load(userptr, "glColor3us");
    context->Color3usv = (PFNGLCOLOR3USVPROC) load(userptr, "glColor3usv");
    context->Color4b = (PFNGLCOLOR4BPROC) load(userptr, "glColor4b");
    context->Color4bv = (PFNGLCOLOR4BVPROC) load(userptr, "glColor4bv");
    context->Color4d = (PFNGLCOLOR4DPROC) load(userptr, "glColor4d");
    context->Color4dv = (PFNGLCOLOR4DVPROC) load(userptr, "glColor4dv");
    context->Color4f = (PFNGLCOLOR4FPROC) load(userptr, "glColor4f");
    context->Color4fv = (PFNGLCOLOR4FVPROC) load(userptr, "glColor4fv");
    context->Color4i = (PFNGLCOLOR4IPROC) load(userptr, "glColor4i");
    context->Color4iv = (PFNGLCOLOR4IVPROC) load(userptr, "glColor4iv");
    context->Color4s = (PFNGLCOLOR4SPROC) load(userptr, "glColor4s");
    context->Color4sv = (PFNGLCOLOR4SVPROC) load(userptr, "glColor4sv");
    context->Color4ub = (PFNGLCOLOR4UBPROC) load(userptr, "glColor4ub");
    context->Color4ubv = (PFNGLCOLOR4UBVPROC) load(userptr, "glColor4ubv");
    context->Color4ui = (PFNGLCOLOR4UIPROC) load(userptr, "glColor4ui");
    context->Color4uiv = (PFNGLCOLOR4UIVPROC) load(userptr, "glColor4uiv");
    context->Color4us = (PFNGLCOLOR4USPROC) load(userptr, "glColor4us");
    context->Color4usv = (PFNGLCOLOR4USVPROC) load(userptr, "glColor4usv");
    context->ColorMask = (PFNGLCOLORMASKPROC) load(userptr, "glColorMask");
    context->ColorMaterial = (PFNGLCOLORMATERIALPROC) load(userptr, "glColorMaterial");
    context->CopyPixels = (PFNGLCOPYPIXELSPROC) load(userptr, "glCopyPixels");
    context->CullFace = (PFNGLCULLFACEPROC) load(userptr, "glCullFace");
    context->DeleteLists = (PFNGLDELETELISTSPROC) load(userptr, "glDeleteLists");
    context->DepthFunc = (PFNGLDEPTHFUNCPROC) load(userptr, "glDepthFunc");
    context->DepthMask = (PFNGLDEPTHMASKPROC) load(userptr, "glDepthMask");
    context->DepthRange = (PFNGLDEPTHRANGEPROC) load(userptr, "glDepthRange");
    context->Disable = (PFNGLDISABLEPROC) load(userptr, "glDisable");
    context->DrawBuffer = (PFNGLDRAWBUFFERPROC) load(userptr, "glDrawBuffer");
    context->DrawPixels = (PFNGLDRAWPIXELSPROC) load(userptr, "glDrawPixels");
    context->EdgeFlag = (PFNGLEDGEFLAGPROC) load(userptr, "glEdgeFlag");
    context->EdgeFlagv = (PFNGLEDGEFLAGVPROC) load(userptr, "glEdgeFlagv");
    context->Enable = (PFNGLENABLEPROC) load(userptr, "glEnable");
    context->End = (PFNGLENDPROC) load(userptr, "glEnd");
    context->EndList = (PFNGLENDLISTPROC) load(userptr, "glEndList");
    context->EvalCoord1d = (PFNGLEVALCOORD1DPROC) load(userptr, "glEvalCoord1d");
    context->EvalCoord1dv = (PFNGLEVALCOORD1DVPROC) load(userptr, "glEvalCoord1dv");
    context->EvalCoord1f = (PFNGLEVALCOORD1FPROC) load(userptr, "glEvalCoord1f");
    context->EvalCoord1fv = (PFNGLEVALCOORD1FVPROC) load(userptr, "glEvalCoord1fv");
    context->EvalCoord2d = (PFNGLEVALCOORD2DPROC) load(userptr, "glEvalCoord2d");
    context->EvalCoord2dv = (PFNGLEVALCOORD2DVPROC) load(userptr, "glEvalCoord2dv");
    context->EvalCoord2f = (PFNGLEVALCOORD2FPROC) load(userptr, "glEvalCoord2f");
    context->EvalCoord2fv = (PFNGLEVALCOORD2FVPROC) load(userptr, "glEvalCoord2fv");
    context->EvalMesh1 = (PFNGLEVALMESH1PROC) load(userptr, "glEvalMesh1");
    context->EvalMesh2 = (PFNGLEVALMESH2PROC) load(userptr, "glEvalMesh2");
    context->EvalPoint1 = (PFNGLEVALPOINT1PROC) load(userptr, "glEvalPoint1");
    context->EvalPoint2 = (PFNGLEVALPOINT2PROC) load(userptr, "glEvalPoint2");
    context->FeedbackBuffer = (PFNGLFEEDBACKBUFFERPROC) load(userptr, "glFeedbackBuffer");
    context->Finish = (PFNGLFINISHPROC) load(userptr, "glFinish");
    context->Flush = (PFNGLFLUSHPROC) load(userptr, "glFlush");
    context->Fogf = (PFNGLFOGFPROC) load(userptr, "glFogf");
    context->Fogfv = (PFNGLFOGFVPROC) load(userptr, "glFogfv");
    context->Fogi = (PFNGLFOGIPROC) load(userptr, "glFogi");
    context->Fogiv = (PFNGLFOGIVPROC) load(userptr, "glFogiv");
    context->FrontFace = (PFNGLFRONTFACEPROC) load(userptr, "glFrontFace");
    context->Frustum = (PFNGLFRUSTUMPROC) load(userptr, "glFrustum");
    context->GenLists = (PFNGLGENLISTSPROC) load(userptr, "glGenLists");
    context->GetBooleanv = (PFNGLGETBOOLEANVPROC) load(userptr, "glGetBooleanv");
    context->GetClipPlane = (PFNGLGETCLIPPLANEPROC) load(userptr, "glGetClipPlane");
    context->GetDoublev = (PFNGLGETDOUBLEVPROC) load(userptr, "glGetDoublev");
    context->GetError = (PFNGLGETERRORPROC) load(userptr, "glGetError");
    context->GetFloatv = (PFNGLGETFLOATVPROC) load(userptr, "glGetFloatv");
    context->GetIntegerv = (PFNGLGETINTEGERVPROC) load(userptr, "glGetIntegerv");
    context->GetLightfv = (PFNGLGETLIGHTFVPROC) load(userptr, "glGetLightfv");
    context->GetLightiv = (PFNGLGETLIGHTIVPROC) load(userptr, "glGetLightiv");
    context->GetMapdv = (PFNGLGETMAPDVPROC) load(userptr, "glGetMapdv");
    context->GetMapfv = (PFNGLGETMAPFVPROC) load(userptr, "glGetMapfv");
    context->GetMapiv = (PFNGLGETMAPIVPROC) load(userptr, "glGetMapiv");
    context->GetMaterialfv = (PFNGLGETMATERIALFVPROC) load(userptr, "glGetMaterialfv");
    context->GetMaterialiv = (PFNGLGETMATERIALIVPROC) load(userptr, "glGetMaterialiv");
    context->GetPixelMapfv = (PFNGLGETPIXELMAPFVPROC) load(userptr, "glGetPixelMapfv");
    context->GetPixelMapuiv = (PFNGLGETPIXELMAPUIVPROC) load(userptr, "glGetPixelMapuiv");
    context->GetPixelMapusv = (PFNGLGETPIXELMAPUSVPROC) load(userptr, "glGetPixelMapusv");
    context->GetPolygonStipple = (PFNGLGETPOLYGONSTIPPLEPROC) load(userptr, "glGetPolygonStipple");
    context->GetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    context->GetTexEnvfv = (PFNGLGETTEXENVFVPROC) load(userptr, "glGetTexEnvfv");
    context->GetTexEnviv = (PFNGLGETTEXENVIVPROC) load(userptr, "glGetTexEnviv");
    context->GetTexGendv = (PFNGLGETTEXGENDVPROC) load(userptr, "glGetTexGendv");
    context->GetTexGenfv = (PFNGLGETTEXGENFVPROC) load(userptr, "glGetTexGenfv");
    context->GetTexGeniv = (PFNGLGETTEXGENIVPROC) load(userptr, "glGetTexGeniv");
    context->GetTexImage = (PFNGLGETTEXIMAGEPROC) load(userptr, "glGetTexImage");
    context->GetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC) load(userptr, "glGetTexLevelParameterfv");
    context->GetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC) load(userptr, "glGetTexLevelParameteriv");
    context->GetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) load(userptr, "glGetTexParameterfv");
    context->GetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) load(userptr, "glGetTexParameteriv");
    context->Hint = (PFNGLHINTPROC) load(userptr, "glHint");
    context->IndexMask = (PFNGLINDEXMASKPROC) load(userptr, "glIndexMask");
    context->Indexd = (PFNGLINDEXDPROC) load(userptr, "glIndexd");
    context->Indexdv = (PFNGLINDEXDVPROC) load(userptr, "glIndexdv");
    context->Indexf = (PFNGLINDEXFPROC) load(userptr, "glIndexf");
    context->Indexfv = (PFNGLINDEXFVPROC) load(userptr, "glIndexfv");
    context->Indexi = (PFNGLINDEXIPROC) load(userptr, "glIndexi");
    context->Indexiv = (PFNGLINDEXIVPROC) load(userptr, "glIndexiv");
    context->Indexs = (PFNGLINDEXSPROC) load(userptr, "glIndexs");
    context->Indexsv = (PFNGLINDEXSVPROC) load(userptr, "glIndexsv");
    context->InitNames = (PFNGLINITNAMESPROC) load(userptr, "glInitNames");
    context->IsEnabled = (PFNGLISENABLEDPROC) load(userptr, "glIsEnabled");
    context->IsList = (PFNGLISLISTPROC) load(userptr, "glIsList");
    context->LightModelf = (PFNGLLIGHTMODELFPROC) load(userptr, "glLightModelf");
    context->LightModelfv = (PFNGLLIGHTMODELFVPROC) load(userptr, "glLightModelfv");
    context->LightModeli = (PFNGLLIGHTMODELIPROC) load(userptr, "glLightModeli");
    context->LightModeliv = (PFNGLLIGHTMODELIVPROC) load(userptr, "glLightModeliv");
    context->Lightf = (PFNGLLIGHTFPROC) load(userptr, "glLightf");
    context->Lightfv = (PFNGLLIGHTFVPROC) load(userptr, "glLightfv");
    context->Lighti = (PFNGLLIGHTIPROC) load(userptr, "glLighti");
    context->Lightiv = (PFNGLLIGHTIVPROC) load(userptr, "glLightiv");
    context->LineStipple = (PFNGLLINESTIPPLEPROC) load(userptr, "glLineStipple");
    context->LineWidth = (PFNGLLINEWIDTHPROC) load(userptr, "glLineWidth");
    context->ListBase = (PFNGLLISTBASEPROC) load(userptr, "glListBase");
    context->LoadIdentity = (PFNGLLOADIDENTITYPROC) load(userptr, "glLoadIdentity");
    context->LoadMatrixd = (PFNGLLOADMATRIXDPROC) load(userptr, "glLoadMatrixd");
    context->LoadMatrixf = (PFNGLLOADMATRIXFPROC) load(userptr, "glLoadMatrixf");
    context->LoadName = (PFNGLLOADNAMEPROC) load(userptr, "glLoadName");
    context->LogicOp = (PFNGLLOGICOPPROC) load(userptr, "glLogicOp");
    context->Map1d = (PFNGLMAP1DPROC) load(userptr, "glMap1d");
    context->Map1f = (PFNGLMAP1FPROC) load(userptr, "glMap1f");
    context->Map2d = (PFNGLMAP2DPROC) load(userptr, "glMap2d");
    context->Map2f = (PFNGLMAP2FPROC) load(userptr, "glMap2f");
    context->MapGrid1d = (PFNGLMAPGRID1DPROC) load(userptr, "glMapGrid1d");
    context->MapGrid1f = (PFNGLMAPGRID1FPROC) load(userptr, "glMapGrid1f");
    context->MapGrid2d = (PFNGLMAPGRID2DPROC) load(userptr, "glMapGrid2d");
    context->MapGrid2f = (PFNGLMAPGRID2FPROC) load(userptr, "glMapGrid2f");
    context->Materialf = (PFNGLMATERIALFPROC) load(userptr, "glMaterialf");
    context->Materialfv = (PFNGLMATERIALFVPROC) load(userptr, "glMaterialfv");
    context->Materiali = (PFNGLMATERIALIPROC) load(userptr, "glMateriali");
    context->Materialiv = (PFNGLMATERIALIVPROC) load(userptr, "glMaterialiv");
    context->MatrixMode = (PFNGLMATRIXMODEPROC) load(userptr, "glMatrixMode");
    context->MultMatrixd = (PFNGLMULTMATRIXDPROC) load(userptr, "glMultMatrixd");
    context->MultMatrixf = (PFNGLMULTMATRIXFPROC) load(userptr, "glMultMatrixf");
    context->NewList = (PFNGLNEWLISTPROC) load(userptr, "glNewList");
    context->Normal3b = (PFNGLNORMAL3BPROC) load(userptr, "glNormal3b");
    context->Normal3bv = (PFNGLNORMAL3BVPROC) load(userptr, "glNormal3bv");
    context->Normal3d = (PFNGLNORMAL3DPROC) load(userptr, "glNormal3d");
    context->Normal3dv = (PFNGLNORMAL3DVPROC) load(userptr, "glNormal3dv");
    context->Normal3f = (PFNGLNORMAL3FPROC) load(userptr, "glNormal3f");
    context->Normal3fv = (PFNGLNORMAL3FVPROC) load(userptr, "glNormal3fv");
    context->Normal3i = (PFNGLNORMAL3IPROC) load(userptr, "glNormal3i");
    context->Normal3iv = (PFNGLNORMAL3IVPROC) load(userptr, "glNormal3iv");
    context->Normal3s = (PFNGLNORMAL3SPROC) load(userptr, "glNormal3s");
    context->Normal3sv = (PFNGLNORMAL3SVPROC) load(userptr, "glNormal3sv");
    context->Ortho = (PFNGLORTHOPROC) load(userptr, "glOrtho");
    context->PassThrough = (PFNGLPASSTHROUGHPROC) load(userptr, "glPassThrough");
    context->PixelMapfv = (PFNGLPIXELMAPFVPROC) load(userptr, "glPixelMapfv");
    context->PixelMapuiv = (PFNGLPIXELMAPUIVPROC) load(userptr, "glPixelMapuiv");
    context->PixelMapusv = (PFNGLPIXELMAPUSVPROC) load(userptr, "glPixelMapusv");
    context->PixelStoref = (PFNGLPIXELSTOREFPROC) load(userptr, "glPixelStoref");
    context->PixelStorei = (PFNGLPIXELSTOREIPROC) load(userptr, "glPixelStorei");
    context->PixelTransferf = (PFNGLPIXELTRANSFERFPROC) load(userptr, "glPixelTransferf");
    context->PixelTransferi = (PFNGLPIXELTRANSFERIPROC) load(userptr, "glPixelTransferi");
    context->PixelZoom = (PFNGLPIXELZOOMPROC) load(userptr, "glPixelZoom");
    context->PointSize = (PFNGLPOINTSIZEPROC) load(userptr, "glPointSize");
    context->PolygonMode = (PFNGLPOLYGONMODEPROC) load(userptr, "glPolygonMode");
    context->PolygonStipple = (PFNGLPOLYGONSTIPPLEPROC) load(userptr, "glPolygonStipple");
    context->PopAttrib = (PFNGLPOPATTRIBPROC) load(userptr, "glPopAttrib");
    context->PopMatrix = (PFNGLPOPMATRIXPROC) load(userptr, "glPopMatrix");
    context->PopName = (PFNGLPOPNAMEPROC) load(userptr, "glPopName");
    context->PushAttrib = (PFNGLPUSHATTRIBPROC) load(userptr, "glPushAttrib");
    context->PushMatrix = (PFNGLPUSHMATRIXPROC) load(userptr, "glPushMatrix");
    context->PushName = (PFNGLPUSHNAMEPROC) load(userptr, "glPushName");
    context->RasterPos2d = (PFNGLRASTERPOS2DPROC) load(userptr, "glRasterPos2d");
    context->RasterPos2dv = (PFNGLRASTERPOS2DVPROC) load(userptr, "glRasterPos2dv");
    context->RasterPos2f = (PFNGLRASTERPOS2FPROC) load(userptr, "glRasterPos2f");
    context->RasterPos2fv = (PFNGLRASTERPOS2FVPROC) load(userptr, "glRasterPos2fv");
    context->RasterPos2i = (PFNGLRASTERPOS2IPROC) load(userptr, "glRasterPos2i");
    context->RasterPos2iv = (PFNGLRASTERPOS2IVPROC) load(userptr, "glRasterPos2iv");
    context->RasterPos2s = (PFNGLRASTERPOS2SPROC) load(userptr, "glRasterPos2s");
    context->RasterPos2sv = (PFNGLRASTERPOS2SVPROC) load(userptr, "glRasterPos2sv");
    context->RasterPos3d = (PFNGLRASTERPOS3DPROC) load(userptr, "glRasterPos3d");
    context->RasterPos3dv = (PFNGLRASTERPOS3DVPROC) load(userptr, "glRasterPos3dv");
    context->RasterPos3f = (PFNGLRASTERPOS3FPROC) load(userptr, "glRasterPos3f");
    context->RasterPos3fv = (PFNGLRASTERPOS3FVPROC) load(userptr, "glRasterPos3fv");
    context->RasterPos3i = (PFNGLRASTERPOS3IPROC) load(userptr, "glRasterPos3i");
    context->RasterPos3iv = (PFNGLRASTERPOS3IVPROC) load(userptr, "glRasterPos3iv");
    context->RasterPos3s = (PFNGLRASTERPOS3SPROC) load(userptr, "glRasterPos3s");
    context->RasterPos3sv = (PFNGLRASTERPOS3SVPROC) load(userptr, "glRasterPos3sv");
    context->RasterPos4d = (PFNGLRASTERPOS4DPROC) load(userptr, "glRasterPos4d");
    context->RasterPos4dv = (PFNGLRASTERPOS4DVPROC) load(userptr, "glRasterPos4dv");
    context->RasterPos4f = (PFNGLRASTERPOS4FPROC) load(userptr, "glRasterPos4f");
    context->RasterPos4fv = (PFNGLRASTERPOS4FVPROC) load(userptr, "glRasterPos4fv");
    context->RasterPos4i = (PFNGLRASTERPOS4IPROC) load(userptr, "glRasterPos4i");
    context->RasterPos4iv = (PFNGLRASTERPOS4IVPROC) load(userptr, "glRasterPos4iv");
    context->RasterPos4s = (PFNGLRASTERPOS4SPROC) load(userptr, "glRasterPos4s");
    context->RasterPos4sv = (PFNGLRASTERPOS4SVPROC) load(userptr, "glRasterPos4sv");
    context->ReadBuffer = (PFNGLREADBUFFERPROC) load(userptr, "glReadBuffer");
    context->ReadPixels = (PFNGLREADPIXELSPROC) load(userptr, "glReadPixels");
    context->Rectd = (PFNGLRECTDPROC) load(userptr, "glRectd");
    context->Rectdv = (PFNGLRECTDVPROC) load(userptr, "glRectdv");
    context->Rectf = (PFNGLRECTFPROC) load(userptr, "glRectf");
    context->Rectfv = (PFNGLRECTFVPROC) load(userptr, "glRectfv");
    context->Recti = (PFNGLRECTIPROC) load(userptr, "glRecti");
    context->Rectiv = (PFNGLRECTIVPROC) load(userptr, "glRectiv");
    context->Rects = (PFNGLRECTSPROC) load(userptr, "glRects");
    context->Rectsv = (PFNGLRECTSVPROC) load(userptr, "glRectsv");
    context->RenderMode = (PFNGLRENDERMODEPROC) load(userptr, "glRenderMode");
    context->Rotated = (PFNGLROTATEDPROC) load(userptr, "glRotated");
    context->Rotatef = (PFNGLROTATEFPROC) load(userptr, "glRotatef");
    context->Scaled = (PFNGLSCALEDPROC) load(userptr, "glScaled");
    context->Scalef = (PFNGLSCALEFPROC) load(userptr, "glScalef");
    context->Scissor = (PFNGLSCISSORPROC) load(userptr, "glScissor");
    context->SelectBuffer = (PFNGLSELECTBUFFERPROC) load(userptr, "glSelectBuffer");
    context->ShadeModel = (PFNGLSHADEMODELPROC) load(userptr, "glShadeModel");
    context->StencilFunc = (PFNGLSTENCILFUNCPROC) load(userptr, "glStencilFunc");
    context->StencilMask = (PFNGLSTENCILMASKPROC) load(userptr, "glStencilMask");
    context->StencilOp = (PFNGLSTENCILOPPROC) load(userptr, "glStencilOp");
    context->TexCoord1d = (PFNGLTEXCOORD1DPROC) load(userptr, "glTexCoord1d");
    context->TexCoord1dv = (PFNGLTEXCOORD1DVPROC) load(userptr, "glTexCoord1dv");
    context->TexCoord1f = (PFNGLTEXCOORD1FPROC) load(userptr, "glTexCoord1f");
    context->TexCoord1fv = (PFNGLTEXCOORD1FVPROC) load(userptr, "glTexCoord1fv");
    context->TexCoord1i = (PFNGLTEXCOORD1IPROC) load(userptr, "glTexCoord1i");
    context->TexCoord1iv = (PFNGLTEXCOORD1IVPROC) load(userptr, "glTexCoord1iv");
    context->TexCoord1s = (PFNGLTEXCOORD1SPROC) load(userptr, "glTexCoord1s");
    context->TexCoord1sv = (PFNGLTEXCOORD1SVPROC) load(userptr, "glTexCoord1sv");
    context->TexCoord2d = (PFNGLTEXCOORD2DPROC) load(userptr, "glTexCoord2d");
    context->TexCoord2dv = (PFNGLTEXCOORD2DVPROC) load(userptr, "glTexCoord2dv");
    context->TexCoord2f = (PFNGLTEXCOORD2FPROC) load(userptr, "glTexCoord2f");
    context->TexCoord2fv = (PFNGLTEXCOORD2FVPROC) load(userptr, "glTexCoord2fv");
    context->TexCoord2i = (PFNGLTEXCOORD2IPROC) load(userptr, "glTexCoord2i");
    context->TexCoord2iv = (PFNGLTEXCOORD2IVPROC) load(userptr, "glTexCoord2iv");
    context->TexCoord2s = (PFNGLTEXCOORD2SPROC) load(userptr, "glTexCoord2s");
    context->TexCoord2sv = (PFNGLTEXCOORD2SVPROC) load(userptr, "glTexCoord2sv");
    context->TexCoord3d = (PFNGLTEXCOORD3DPROC) load(userptr, "glTexCoord3d");
    context->TexCoord3dv = (PFNGLTEXCOORD3DVPROC) load(userptr, "glTexCoord3dv");
    context->TexCoord3f = (PFNGLTEXCOORD3FPROC) load(userptr, "glTexCoord3f");
    context->TexCoord3fv = (PFNGLTEXCOORD3FVPROC) load(userptr, "glTexCoord3fv");
    context->TexCoord3i = (PFNGLTEXCOORD3IPROC) load(userptr, "glTexCoord3i");
    context->TexCoord3iv = (PFNGLTEXCOORD3IVPROC) load(userptr, "glTexCoord3iv");
    context->TexCoord3s = (PFNGLTEXCOORD3SPROC) load(userptr, "glTexCoord3s");
    context->TexCoord3sv = (PFNGLTEXCOORD3SVPROC) load(userptr, "glTexCoord3sv");
    context->TexCoord4d = (PFNGLTEXCOORD4DPROC) load(userptr, "glTexCoord4d");
    context->TexCoord4dv = (PFNGLTEXCOORD4DVPROC) load(userptr, "glTexCoord4dv");
    context->TexCoord4f = (PFNGLTEXCOORD4FPROC) load(userptr, "glTexCoord4f");
    context->TexCoord4fv = (PFNGLTEXCOORD4FVPROC) load(userptr, "glTexCoord4fv");
    context->TexCoord4i = (PFNGLTEXCOORD4IPROC) load(userptr, "glTexCoord4i");
    context->TexCoord4iv = (PFNGLTEXCOORD4IVPROC) load(userptr, "glTexCoord4iv");
    context->TexCoord4s = (PFNGLTEXCOORD4SPROC) load(userptr, "glTexCoord4s");
    context->TexCoord4sv = (PFNGLTEXCOORD4SVPROC) load(userptr, "glTexCoord4sv");
    context->TexEnvf = (PFNGLTEXENVFPROC) load(userptr, "glTexEnvf");
    context->TexEnvfv = (PFNGLTEXENVFVPROC) load(userptr, "glTexEnvfv");
    context->TexEnvi = (PFNGLTEXENVIPROC) load(userptr, "glTexEnvi");
    context->TexEnviv = (PFNGLTEXENVIVPROC) load(userptr, "glTexEnviv");
    context->TexGend = (PFNGLTEXGENDPROC) load(userptr, "glTexGend");
    context->TexGendv = (PFNGLTEXGENDVPROC) load(userptr, "glTexGendv");
    context->TexGenf = (PFNGLTEXGENFPROC) load(userptr, "glTexGenf");
    context->TexGenfv = (PFNGLTEXGENFVPROC) load(userptr, "glTexGenfv");
    context->TexGeni = (PFNGLTEXGENIPROC) load(userptr, "glTexGeni");
    context->TexGeniv = (PFNGLTEXGENIVPROC) load(userptr, "glTexGeniv");
    context->TexImage1D = (PFNGLTEXIMAGE1DPROC) load(userptr, "glTexImage1D");
    context->TexImage2D = (PFNGLTEXIMAGE2DPROC) load(userptr, "glTexImage2D");
    context->TexParameterf = (PFNGLTEXPARAMETERFPROC) load(userptr, "glTexParameterf");
    context->TexParameterfv = (PFNGLTEXPARAMETERFVPROC) load(userptr, "glTexParameterfv");
    context->TexParameteri = (PFNGLTEXPARAMETERIPROC) load(userptr, "glTexParameteri");
    context->TexParameteriv = (PFNGLTEXPARAMETERIVPROC) load(userptr, "glTexParameteriv");
    context->Translated = (PFNGLTRANSLATEDPROC) load(userptr, "glTranslated");
    context->Translatef = (PFNGLTRANSLATEFPROC) load(userptr, "glTranslatef");
    context->Vertex2d = (PFNGLVERTEX2DPROC) load(userptr, "glVertex2d");
    context->Vertex2dv = (PFNGLVERTEX2DVPROC) load(userptr, "glVertex2dv");
    context->Vertex2f = (PFNGLVERTEX2FPROC) load(userptr, "glVertex2f");
    context->Vertex2fv = (PFNGLVERTEX2FVPROC) load(userptr, "glVertex2fv");
    context->Vertex2i = (PFNGLVERTEX2IPROC) load(userptr, "glVertex2i");
    context->Vertex2iv = (PFNGLVERTEX2IVPROC) load(userptr, "glVertex2iv");
    context->Vertex2s = (PFNGLVERTEX2SPROC) load(userptr, "glVertex2s");
    context->Vertex2sv = (PFNGLVERTEX2SVPROC) load(userptr, "glVertex2sv");
    context->Vertex3d = (PFNGLVERTEX3DPROC) load(userptr, "glVertex3d");
    context->Vertex3dv = (PFNGLVERTEX3DVPROC) load(userptr, "glVertex3dv");
    context->Vertex3f = (PFNGLVERTEX3FPROC) load(userptr, "glVertex3f");
    context->Vertex3fv = (PFNGLVERTEX3FVPROC) load(userptr, "glVertex3fv");
    context->Vertex3i = (PFNGLVERTEX3IPROC) load(userptr, "glVertex3i");
    context->Vertex3iv = (PFNGLVERTEX3IVPROC) load(userptr, "glVertex3iv");
    context->Vertex3s = (PFNGLVERTEX3SPROC) load(userptr, "glVertex3s");
    context->Vertex3sv = (PFNGLVERTEX3SVPROC) load(userptr, "glVertex3sv");
    context->Vertex4d = (PFNGLVERTEX4DPROC) load(userptr, "glVertex4d");
    context->Vertex4dv = (PFNGLVERTEX4DVPROC) load(userptr, "glVertex4dv");
    context->Vertex4f = (PFNGLVERTEX4FPROC) load(userptr, "glVertex4f");
    context->Vertex4fv = (PFNGLVERTEX4FVPROC) load(userptr, "glVertex4fv");
    context->Vertex4i = (PFNGLVERTEX4IPROC) load(userptr, "glVertex4i");
    context->Vertex4iv = (PFNGLVERTEX4IVPROC) load(userptr, "glVertex4iv");
    context->Vertex4s = (PFNGLVERTEX4SPROC) load(userptr, "glVertex4s");
    context->Vertex4sv = (PFNGLVERTEX4SVPROC) load(userptr, "glVertex4sv");
    context->Viewport = (PFNGLVIEWPORTPROC) load(userptr, "glViewport");
}
static void glad_gl_load_GL_VERSION_1_1(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_1) return;
    context->AreTexturesResident = (PFNGLARETEXTURESRESIDENTPROC) load(userptr, "glAreTexturesResident");
    context->ArrayElement = (PFNGLARRAYELEMENTPROC) load(userptr, "glArrayElement");
    context->BindTexture = (PFNGLBINDTEXTUREPROC) load(userptr, "glBindTexture");
    context->ColorPointer = (PFNGLCOLORPOINTERPROC) load(userptr, "glColorPointer");
    context->CopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC) load(userptr, "glCopyTexImage1D");
    context->CopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) load(userptr, "glCopyTexImage2D");
    context->CopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC) load(userptr, "glCopyTexSubImage1D");
    context->CopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) load(userptr, "glCopyTexSubImage2D");
    context->DeleteTextures = (PFNGLDELETETEXTURESPROC) load(userptr, "glDeleteTextures");
    context->DisableClientState = (PFNGLDISABLECLIENTSTATEPROC) load(userptr, "glDisableClientState");
    context->DrawArrays = (PFNGLDRAWARRAYSPROC) load(userptr, "glDrawArrays");
    context->DrawElements = (PFNGLDRAWELEMENTSPROC) load(userptr, "glDrawElements");
    context->EdgeFlagPointer = (PFNGLEDGEFLAGPOINTERPROC) load(userptr, "glEdgeFlagPointer");
    context->EnableClientState = (PFNGLENABLECLIENTSTATEPROC) load(userptr, "glEnableClientState");
    context->GenTextures = (PFNGLGENTEXTURESPROC) load(userptr, "glGenTextures");
    context->GetPointerv = (PFNGLGETPOINTERVPROC) load(userptr, "glGetPointerv");
    context->IndexPointer = (PFNGLINDEXPOINTERPROC) load(userptr, "glIndexPointer");
    context->Indexub = (PFNGLINDEXUBPROC) load(userptr, "glIndexub");
    context->Indexubv = (PFNGLINDEXUBVPROC) load(userptr, "glIndexubv");
    context->InterleavedArrays = (PFNGLINTERLEAVEDARRAYSPROC) load(userptr, "glInterleavedArrays");
    context->IsTexture = (PFNGLISTEXTUREPROC) load(userptr, "glIsTexture");
    context->NormalPointer = (PFNGLNORMALPOINTERPROC) load(userptr, "glNormalPointer");
    context->PolygonOffset = (PFNGLPOLYGONOFFSETPROC) load(userptr, "glPolygonOffset");
    context->PopClientAttrib = (PFNGLPOPCLIENTATTRIBPROC) load(userptr, "glPopClientAttrib");
    context->PrioritizeTextures = (PFNGLPRIORITIZETEXTURESPROC) load(userptr, "glPrioritizeTextures");
    context->PushClientAttrib = (PFNGLPUSHCLIENTATTRIBPROC) load(userptr, "glPushClientAttrib");
    context->TexCoordPointer = (PFNGLTEXCOORDPOINTERPROC) load(userptr, "glTexCoordPointer");
    context->TexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC) load(userptr, "glTexSubImage1D");
    context->TexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) load(userptr, "glTexSubImage2D");
    context->VertexPointer = (PFNGLVERTEXPOINTERPROC) load(userptr, "glVertexPointer");
}
static void glad_gl_load_GL_VERSION_1_2(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_2) return;
    context->CopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) load(userptr, "glCopyTexSubImage3D");
    context->DrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) load(userptr, "glDrawRangeElements");
    context->TexImage3D = (PFNGLTEXIMAGE3DPROC) load(userptr, "glTexImage3D");
    context->TexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) load(userptr, "glTexSubImage3D");
}
static void glad_gl_load_GL_VERSION_1_3(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_3) return;
    context->ActiveTexture = (PFNGLACTIVETEXTUREPROC) load(userptr, "glActiveTexture");
    context->ClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC) load(userptr, "glClientActiveTexture");
    context->CompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) load(userptr, "glCompressedTexImage1D");
    context->CompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) load(userptr, "glCompressedTexImage2D");
    context->CompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) load(userptr, "glCompressedTexImage3D");
    context->CompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) load(userptr, "glCompressedTexSubImage1D");
    context->CompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) load(userptr, "glCompressedTexSubImage2D");
    context->CompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) load(userptr, "glCompressedTexSubImage3D");
    context->GetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) load(userptr, "glGetCompressedTexImage");
    context->LoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC) load(userptr, "glLoadTransposeMatrixd");
    context->LoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC) load(userptr, "glLoadTransposeMatrixf");
    context->MultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC) load(userptr, "glMultTransposeMatrixd");
    context->MultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC) load(userptr, "glMultTransposeMatrixf");
    context->MultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC) load(userptr, "glMultiTexCoord1d");
    context->MultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC) load(userptr, "glMultiTexCoord1dv");
    context->MultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC) load(userptr, "glMultiTexCoord1f");
    context->MultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC) load(userptr, "glMultiTexCoord1fv");
    context->MultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC) load(userptr, "glMultiTexCoord1i");
    context->MultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC) load(userptr, "glMultiTexCoord1iv");
    context->MultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC) load(userptr, "glMultiTexCoord1s");
    context->MultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC) load(userptr, "glMultiTexCoord1sv");
    context->MultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC) load(userptr, "glMultiTexCoord2d");
    context->MultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC) load(userptr, "glMultiTexCoord2dv");
    context->MultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC) load(userptr, "glMultiTexCoord2f");
    context->MultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC) load(userptr, "glMultiTexCoord2fv");
    context->MultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC) load(userptr, "glMultiTexCoord2i");
    context->MultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC) load(userptr, "glMultiTexCoord2iv");
    context->MultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC) load(userptr, "glMultiTexCoord2s");
    context->MultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC) load(userptr, "glMultiTexCoord2sv");
    context->MultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC) load(userptr, "glMultiTexCoord3d");
    context->MultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC) load(userptr, "glMultiTexCoord3dv");
    context->MultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC) load(userptr, "glMultiTexCoord3f");
    context->MultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC) load(userptr, "glMultiTexCoord3fv");
    context->MultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC) load(userptr, "glMultiTexCoord3i");
    context->MultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC) load(userptr, "glMultiTexCoord3iv");
    context->MultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC) load(userptr, "glMultiTexCoord3s");
    context->MultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC) load(userptr, "glMultiTexCoord3sv");
    context->MultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC) load(userptr, "glMultiTexCoord4d");
    context->MultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC) load(userptr, "glMultiTexCoord4dv");
    context->MultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC) load(userptr, "glMultiTexCoord4f");
    context->MultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC) load(userptr, "glMultiTexCoord4fv");
    context->MultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC) load(userptr, "glMultiTexCoord4i");
    context->MultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC) load(userptr, "glMultiTexCoord4iv");
    context->MultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC) load(userptr, "glMultiTexCoord4s");
    context->MultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC) load(userptr, "glMultiTexCoord4sv");
    context->SampleCoverage = (PFNGLSAMPLECOVERAGEPROC) load(userptr, "glSampleCoverage");
}
static void glad_gl_load_GL_VERSION_1_4(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_4) return;
    context->BlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    context->BlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
    context->BlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) load(userptr, "glBlendFuncSeparate");
    context->FogCoordPointer = (PFNGLFOGCOORDPOINTERPROC) load(userptr, "glFogCoordPointer");
    context->FogCoordd = (PFNGLFOGCOORDDPROC) load(userptr, "glFogCoordd");
    context->FogCoorddv = (PFNGLFOGCOORDDVPROC) load(userptr, "glFogCoorddv");
    context->FogCoordf = (PFNGLFOGCOORDFPROC) load(userptr, "glFogCoordf");
    context->FogCoordfv = (PFNGLFOGCOORDFVPROC) load(userptr, "glFogCoordfv");
    context->MultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC) load(userptr, "glMultiDrawArrays");
    context->MultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC) load(userptr, "glMultiDrawElements");
    context->PointParameterf = (PFNGLPOINTPARAMETERFPROC) load(userptr, "glPointParameterf");
    context->PointParameterfv = (PFNGLPOINTPARAMETERFVPROC) load(userptr, "glPointParameterfv");
    context->PointParameteri = (PFNGLPOINTPARAMETERIPROC) load(userptr, "glPointParameteri");
    context->PointParameteriv = (PFNGLPOINTPARAMETERIVPROC) load(userptr, "glPointParameteriv");
    context->SecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC) load(userptr, "glSecondaryColor3b");
    context->SecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC) load(userptr, "glSecondaryColor3bv");
    context->SecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC) load(userptr, "glSecondaryColor3d");
    context->SecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC) load(userptr, "glSecondaryColor3dv");
    context->SecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC) load(userptr, "glSecondaryColor3f");
    context->SecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC) load(userptr, "glSecondaryColor3fv");
    context->SecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC) load(userptr, "glSecondaryColor3i");
    context->SecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC) load(userptr, "glSecondaryColor3iv");
    context->SecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC) load(userptr, "glSecondaryColor3s");
    context->SecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC) load(userptr, "glSecondaryColor3sv");
    context->SecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC) load(userptr, "glSecondaryColor3ub");
    context->SecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC) load(userptr, "glSecondaryColor3ubv");
    context->SecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC) load(userptr, "glSecondaryColor3ui");
    context->SecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC) load(userptr, "glSecondaryColor3uiv");
    context->SecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC) load(userptr, "glSecondaryColor3us");
    context->SecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC) load(userptr, "glSecondaryColor3usv");
    context->SecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC) load(userptr, "glSecondaryColorPointer");
    context->WindowPos2d = (PFNGLWINDOWPOS2DPROC) load(userptr, "glWindowPos2d");
    context->WindowPos2dv = (PFNGLWINDOWPOS2DVPROC) load(userptr, "glWindowPos2dv");
    context->WindowPos2f = (PFNGLWINDOWPOS2FPROC) load(userptr, "glWindowPos2f");
    context->WindowPos2fv = (PFNGLWINDOWPOS2FVPROC) load(userptr, "glWindowPos2fv");
    context->WindowPos2i = (PFNGLWINDOWPOS2IPROC) load(userptr, "glWindowPos2i");
    context->WindowPos2iv = (PFNGLWINDOWPOS2IVPROC) load(userptr, "glWindowPos2iv");
    context->WindowPos2s = (PFNGLWINDOWPOS2SPROC) load(userptr, "glWindowPos2s");
    context->WindowPos2sv = (PFNGLWINDOWPOS2SVPROC) load(userptr, "glWindowPos2sv");
    context->WindowPos3d = (PFNGLWINDOWPOS3DPROC) load(userptr, "glWindowPos3d");
    context->WindowPos3dv = (PFNGLWINDOWPOS3DVPROC) load(userptr, "glWindowPos3dv");
    context->WindowPos3f = (PFNGLWINDOWPOS3FPROC) load(userptr, "glWindowPos3f");
    context->WindowPos3fv = (PFNGLWINDOWPOS3FVPROC) load(userptr, "glWindowPos3fv");
    context->WindowPos3i = (PFNGLWINDOWPOS3IPROC) load(userptr, "glWindowPos3i");
    context->WindowPos3iv = (PFNGLWINDOWPOS3IVPROC) load(userptr, "glWindowPos3iv");
    context->WindowPos3s = (PFNGLWINDOWPOS3SPROC) load(userptr, "glWindowPos3s");
    context->WindowPos3sv = (PFNGLWINDOWPOS3SVPROC) load(userptr, "glWindowPos3sv");
}
static void glad_gl_load_GL_VERSION_1_5(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_5) return;
    context->BeginQuery = (PFNGLBEGINQUERYPROC) load(userptr, "glBeginQuery");
    context->BindBuffer = (PFNGLBINDBUFFERPROC) load(userptr, "glBindBuffer");
    context->BufferData = (PFNGLBUFFERDATAPROC) load(userptr, "glBufferData");
    context->BufferSubData = (PFNGLBUFFERSUBDATAPROC) load(userptr, "glBufferSubData");
    context->DeleteBuffers = (PFNGLDELETEBUFFERSPROC) load(userptr, "glDeleteBuffers");
    context->DeleteQueries = (PFNGLDELETEQUERIESPROC) load(userptr, "glDeleteQueries");
    context->EndQuery = (PFNGLENDQUERYPROC) load(userptr, "glEndQuery");
    context->GenBuffers = (PFNGLGENBUFFERSPROC) load(userptr, "glGenBuffers");
    context->GenQueries = (PFNGLGENQUERIESPROC) load(userptr, "glGenQueries");
    context->GetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) load(userptr, "glGetBufferParameteriv");
    context->GetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) load(userptr, "glGetBufferPointerv");
    context->GetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC) load(userptr, "glGetBufferSubData");
    context->GetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC) load(userptr, "glGetQueryObjectiv");
    context->GetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) load(userptr, "glGetQueryObjectuiv");
    context->GetQueryiv = (PFNGLGETQUERYIVPROC) load(userptr, "glGetQueryiv");
    context->IsBuffer = (PFNGLISBUFFERPROC) load(userptr, "glIsBuffer");
    context->IsQuery = (PFNGLISQUERYPROC) load(userptr, "glIsQuery");
    context->MapBuffer = (PFNGLMAPBUFFERPROC) load(userptr, "glMapBuffer");
    context->UnmapBuffer = (PFNGLUNMAPBUFFERPROC) load(userptr, "glUnmapBuffer");
}
static void glad_gl_load_GL_VERSION_2_0(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_2_0) return;
    context->AttachShader = (PFNGLATTACHSHADERPROC) load(userptr, "glAttachShader");
    context->BindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) load(userptr, "glBindAttribLocation");
    context->BlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) load(userptr, "glBlendEquationSeparate");
    context->CompileShader = (PFNGLCOMPILESHADERPROC) load(userptr, "glCompileShader");
    context->CreateProgram = (PFNGLCREATEPROGRAMPROC) load(userptr, "glCreateProgram");
    context->CreateShader = (PFNGLCREATESHADERPROC) load(userptr, "glCreateShader");
    context->DeleteProgram = (PFNGLDELETEPROGRAMPROC) load(userptr, "glDeleteProgram");
    context->DeleteShader = (PFNGLDELETESHADERPROC) load(userptr, "glDeleteShader");
    context->DetachShader = (PFNGLDETACHSHADERPROC) load(userptr, "glDetachShader");
    context->DisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) load(userptr, "glDisableVertexAttribArray");
    context->DrawBuffers = (PFNGLDRAWBUFFERSPROC) load(userptr, "glDrawBuffers");
    context->EnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) load(userptr, "glEnableVertexAttribArray");
    context->GetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) load(userptr, "glGetActiveAttrib");
    context->GetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) load(userptr, "glGetActiveUniform");
    context->GetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) load(userptr, "glGetAttachedShaders");
    context->GetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) load(userptr, "glGetAttribLocation");
    context->GetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) load(userptr, "glGetProgramInfoLog");
    context->GetProgramiv = (PFNGLGETPROGRAMIVPROC) load(userptr, "glGetProgramiv");
    context->GetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) load(userptr, "glGetShaderInfoLog");
    context->GetShaderSource = (PFNGLGETSHADERSOURCEPROC) load(userptr, "glGetShaderSource");
    context->GetShaderiv = (PFNGLGETSHADERIVPROC) load(userptr, "glGetShaderiv");
    context->GetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) load(userptr, "glGetUniformLocation");
    context->GetUniformfv = (PFNGLGETUNIFORMFVPROC) load(userptr, "glGetUniformfv");
    context->GetUniformiv = (PFNGLGETUNIFORMIVPROC) load(userptr, "glGetUniformiv");
    context->GetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) load(userptr, "glGetVertexAttribPointerv");
    context->GetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC) load(userptr, "glGetVertexAttribdv");
    context->GetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) load(userptr, "glGetVertexAttribfv");
    context->GetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) load(userptr, "glGetVertexAttribiv");
    context->IsProgram = (PFNGLISPROGRAMPROC) load(userptr, "glIsProgram");
    context->IsShader = (PFNGLISSHADERPROC) load(userptr, "glIsShader");
    context->LinkProgram = (PFNGLLINKPROGRAMPROC) load(userptr, "glLinkProgram");
    context->ShaderSource = (PFNGLSHADERSOURCEPROC) load(userptr, "glShaderSource");
    context->StencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) load(userptr, "glStencilFuncSeparate");
    context->StencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) load(userptr, "glStencilMaskSeparate");
    context->StencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) load(userptr, "glStencilOpSeparate");
    context->Uniform1f = (PFNGLUNIFORM1FPROC) load(userptr, "glUniform1f");
    context->Uniform1fv = (PFNGLUNIFORM1FVPROC) load(userptr, "glUniform1fv");
    context->Uniform1i = (PFNGLUNIFORM1IPROC) load(userptr, "glUniform1i");
    context->Uniform1iv = (PFNGLUNIFORM1IVPROC) load(userptr, "glUniform1iv");
    context->Uniform2f = (PFNGLUNIFORM2FPROC) load(userptr, "glUniform2f");
    context->Uniform2fv = (PFNGLUNIFORM2FVPROC) load(userptr, "glUniform2fv");
    context->Uniform2i = (PFNGLUNIFORM2IPROC) load(userptr, "glUniform2i");
    context->Uniform2iv = (PFNGLUNIFORM2IVPROC) load(userptr, "glUniform2iv");
    context->Uniform3f = (PFNGLUNIFORM3FPROC) load(userptr, "glUniform3f");
    context->Uniform3fv = (PFNGLUNIFORM3FVPROC) load(userptr, "glUniform3fv");
    context->Uniform3i = (PFNGLUNIFORM3IPROC) load(userptr, "glUniform3i");
    context->Uniform3iv = (PFNGLUNIFORM3IVPROC) load(userptr, "glUniform3iv");
    context->Uniform4f = (PFNGLUNIFORM4FPROC) load(userptr, "glUniform4f");
    context->Uniform4fv = (PFNGLUNIFORM4FVPROC) load(userptr, "glUniform4fv");
    context->Uniform4i = (PFNGLUNIFORM4IPROC) load(userptr, "glUniform4i");
    context->Uniform4iv = (PFNGLUNIFORM4IVPROC) load(userptr, "glUniform4iv");
    context->UniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) load(userptr, "glUniformMatrix2fv");
    context->UniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) load(userptr, "glUniformMatrix3fv");
    context->UniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) load(userptr, "glUniformMatrix4fv");
    context->UseProgram = (PFNGLUSEPROGRAMPROC) load(userptr, "glUseProgram");
    context->ValidateProgram = (PFNGLVALIDATEPROGRAMPROC) load(userptr, "glValidateProgram");
    context->VertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC) load(userptr, "glVertexAttrib1d");
    context->VertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC) load(userptr, "glVertexAttrib1dv");
    context->VertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) load(userptr, "glVertexAttrib1f");
    context->VertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) load(userptr, "glVertexAttrib1fv");
    context->VertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC) load(userptr, "glVertexAttrib1s");
    context->VertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC) load(userptr, "glVertexAttrib1sv");
    context->VertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC) load(userptr, "glVertexAttrib2d");
    context->VertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC) load(userptr, "glVertexAttrib2dv");
    context->VertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) load(userptr, "glVertexAttrib2f");
    context->VertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) load(userptr, "glVertexAttrib2fv");
    context->VertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC) load(userptr, "glVertexAttrib2s");
    context->VertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC) load(userptr, "glVertexAttrib2sv");
    context->VertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC) load(userptr, "glVertexAttrib3d");
    context->VertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC) load(userptr, "glVertexAttrib3dv");
    context->VertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) load(userptr, "glVertexAttrib3f");
    context->VertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) load(userptr, "glVertexAttrib3fv");
    context->VertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC) load(userptr, "glVertexAttrib3s");
    context->VertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC) load(userptr, "glVertexAttrib3sv");
    context->VertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC) load(userptr, "glVertexAttrib4Nbv");
    context->VertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC) load(userptr, "glVertexAttrib4Niv");
    context->VertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC) load(userptr, "glVertexAttrib4Nsv");
    context->VertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC) load(userptr, "glVertexAttrib4Nub");
    context->VertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC) load(userptr, "glVertexAttrib4Nubv");
    context->VertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC) load(userptr, "glVertexAttrib4Nuiv");
    context->VertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC) load(userptr, "glVertexAttrib4Nusv");
    context->VertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC) load(userptr, "glVertexAttrib4bv");
    context->VertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC) load(userptr, "glVertexAttrib4d");
    context->VertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC) load(userptr, "glVertexAttrib4dv");
    context->VertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) load(userptr, "glVertexAttrib4f");
    context->VertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) load(userptr, "glVertexAttrib4fv");
    context->VertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC) load(userptr, "glVertexAttrib4iv");
    context->VertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC) load(userptr, "glVertexAttrib4s");
    context->VertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC) load(userptr, "glVertexAttrib4sv");
    context->VertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC) load(userptr, "glVertexAttrib4ubv");
    context->VertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC) load(userptr, "glVertexAttrib4uiv");
    context->VertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC) load(userptr, "glVertexAttrib4usv");
    context->VertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) load(userptr, "glVertexAttribPointer");
}
static void glad_gl_load_GL_VERSION_2_1(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_2_1) return;
    context->UniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) load(userptr, "glUniformMatrix2x3fv");
    context->UniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) load(userptr, "glUniformMatrix2x4fv");
    context->UniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) load(userptr, "glUniformMatrix3x2fv");
    context->UniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) load(userptr, "glUniformMatrix3x4fv");
    context->UniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) load(userptr, "glUniformMatrix4x2fv");
    context->UniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) load(userptr, "glUniformMatrix4x3fv");
}
static void glad_gl_load_GL_VERSION_3_0(GladGLContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_3_0) return;
    context->BeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC) load(userptr, "glBeginConditionalRender");
    context->BeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) load(userptr, "glBeginTransformFeedback");
    context->BindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    context->BindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    context->BindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC) load(userptr, "glBindFragDataLocation");
    context->BindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    context->BindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    context->BindVertexArray = (PFNGLBINDVERTEXARRAYPROC) load(userptr, "glBindVertexArray");
    context->BlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) load(userptr, "glBlitFramebuffer");
    context->CheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    context->ClampColor = (PFNGLCLAMPCOLORPROC) load(userptr, "glClampColor");
    context->ClearBufferfi = (PFNGLCLEARBUFFERFIPROC) load(userptr, "glClearBufferfi");
    context->ClearBufferfv = (PFNGLCLEARBUFFERFVPROC) load(userptr, "glClearBufferfv");
    context->ClearBufferiv = (PFNGLCLEARBUFFERIVPROC) load(userptr, "glClearBufferiv");
    context->ClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) load(userptr, "glClearBufferuiv");
    context->ColorMaski = (PFNGLCOLORMASKIPROC) load(userptr, "glColorMaski");
    context->DeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    context->DeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    context->DeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) load(userptr, "glDeleteVertexArrays");
    context->Disablei = (PFNGLDISABLEIPROC) load(userptr, "glDisablei");
    context->Enablei = (PFNGLENABLEIPROC) load(userptr, "glEnablei");
    context->EndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC) load(userptr, "glEndConditionalRender");
    context->EndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) load(userptr, "glEndTransformFeedback");
    context->FlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) load(userptr, "glFlushMappedBufferRange");
    context->FramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    context->FramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) load(userptr, "glFramebufferTexture1D");
    context->FramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    context->FramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) load(userptr, "glFramebufferTexture3D");
    context->FramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glFramebufferTextureLayer");
    context->GenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    context->GenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    context->GenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) load(userptr, "glGenVertexArrays");
    context->GenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    context->GetBooleani_v = (PFNGLGETBOOLEANI_VPROC) load(userptr, "glGetBooleani_v");
    context->GetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) load(userptr, "glGetFragDataLocation");
    context->GetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    context->GetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    context->GetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    context->GetStringi = (PFNGLGETSTRINGIPROC) load(userptr, "glGetStringi");
    context->GetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) load(userptr, "glGetTexParameterIiv");
    context->GetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) load(userptr, "glGetTexParameterIuiv");
    context->GetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) load(userptr, "glGetTransformFeedbackVarying");
    context->GetUniformuiv = (PFNGLGETUNIFORMUIVPROC) load(userptr, "glGetUniformuiv");
    context->GetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) load(userptr, "glGetVertexAttribIiv");
    context->GetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) load(userptr, "glGetVertexAttribIuiv");
    context->IsEnabledi = (PFNGLISENABLEDIPROC) load(userptr, "glIsEnabledi");
    context->IsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    context->IsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    context->IsVertexArray = (PFNGLISVERTEXARRAYPROC) load(userptr, "glIsVertexArray");
    context->MapBufferRange = (PFNGLMAPBUFFERRANGEPROC) load(userptr, "glMapBufferRange");
    context->RenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    context->RenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glRenderbufferStorageMultisample");
    context->TexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) load(userptr, "glTexParameterIiv");
    context->TexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) load(userptr, "glTexParameterIuiv");
    context->TransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) load(userptr, "glTransformFeedbackVaryings");
    context->Uniform1ui = (PFNGLUNIFORM1UIPROC) load(userptr, "glUniform1ui");
    context->Uniform1uiv = (PFNGLUNIFORM1UIVPROC) load(userptr, "glUniform1uiv");
    context->Uniform2ui = (PFNGLUNIFORM2UIPROC) load(userptr, "glUniform2ui");
    context->Uniform2uiv = (PFNGLUNIFORM2UIVPROC) load(userptr, "glUniform2uiv");
    context->Uniform3ui = (PFNGLUNIFORM3UIPROC) load(userptr, "glUniform3ui");
    context->Uniform3uiv = (PFNGLUNIFORM3UIVPROC) load(userptr, "glUniform3uiv");
    context->Uniform4ui = (PFNGLUNIFORM4UIPROC) load(userptr, "glUniform4ui");
    context->Uniform4uiv = (PFNGLUNIFORM4UIVPROC) load(userptr, "glUniform4uiv");
    context->VertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC) load(userptr, "glVertexAttribI1i");
    context->VertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC) load(userptr, "glVertexAttribI1iv");
    context->VertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC) load(userptr, "glVertexAttribI1ui");
    context->VertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC) load(userptr, "glVertexAttribI1uiv");
    context->VertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC) load(userptr, "glVertexAttribI2i");
    context->VertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC) load(userptr, "glVertexAttribI2iv");
    context->VertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC) load(userptr, "glVertexAttribI2ui");
    context->VertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC) load(userptr, "glVertexAttribI2uiv");
    context->VertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC) load(userptr, "glVertexAttribI3i");
    context->VertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC) load(userptr, "glVertexAttribI3iv");
    context->VertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC) load(userptr, "glVertexAttribI3ui");
    context->VertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC) load(userptr, "glVertexAttribI3uiv");
    context->VertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC) load(userptr, "glVertexAttribI4bv");
    context->VertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) load(userptr, "glVertexAttribI4i");
    context->VertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) load(userptr, "glVertexAttribI4iv");
    context->VertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC) load(userptr, "glVertexAttribI4sv");
    context->VertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC) load(userptr, "glVertexAttribI4ubv");
    context->VertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) load(userptr, "glVertexAttribI4ui");
    context->VertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) load(userptr, "glVertexAttribI4uiv");
    context->VertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC) load(userptr, "glVertexAttribI4usv");
    context->VertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) load(userptr, "glVertexAttribIPointer");
}



#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
#define GLAD_GL_IS_SOME_NEW_VERSION 1
#else
#define GLAD_GL_IS_SOME_NEW_VERSION 0
#endif

static int glad_gl_get_extensions(GladGLContext *context, int version, const char **out_exts, unsigned int *out_num_exts_i, char ***out_exts_i) {
#if GLAD_GL_IS_SOME_NEW_VERSION
    if(GLAD_VERSION_MAJOR(version) < 3) {
#else
    (void) version;
    (void) out_num_exts_i;
    (void) out_exts_i;
#endif
        if (context->GetString == NULL) {
            return 0;
        }
        *out_exts = (const char *)context->GetString(GL_EXTENSIONS);
#if GLAD_GL_IS_SOME_NEW_VERSION
    } else {
        unsigned int index = 0;
        unsigned int num_exts_i = 0;
        char **exts_i = NULL;
        if (context->GetStringi == NULL || context->GetIntegerv == NULL) {
            return 0;
        }
        context->GetIntegerv(GL_NUM_EXTENSIONS, (int*) &num_exts_i);
        if (num_exts_i > 0) {
            exts_i = (char **) malloc(num_exts_i * (sizeof *exts_i));
        }
        if (exts_i == NULL) {
            return 0;
        }
        for(index = 0; index < num_exts_i; index++) {
            const char *gl_str_tmp = (const char*) context->GetStringi(GL_EXTENSIONS, index);
            size_t len = strlen(gl_str_tmp) + 1;

            char *local_str = (char*) malloc(len * sizeof(char));
            if(local_str != NULL) {
                memcpy(local_str, gl_str_tmp, len * sizeof(char));
            }

            exts_i[index] = local_str;
        }

        *out_num_exts_i = num_exts_i;
        *out_exts_i = exts_i;
    }
#endif
    return 1;
}
static void glad_gl_free_extensions(char **exts_i, unsigned int num_exts_i) {
    if (exts_i != NULL) {
        unsigned int index;
        for(index = 0; index < num_exts_i; index++) {
            free((void *) (exts_i[index]));
        }
        free((void *)exts_i);
        exts_i = NULL;
    }
}
static int glad_gl_has_extension(int version, const char *exts, unsigned int num_exts_i, char **exts_i, const char *ext) {
    if(GLAD_VERSION_MAJOR(version) < 3 || !GLAD_GL_IS_SOME_NEW_VERSION) {
        const char *extensions;
        const char *loc;
        const char *terminator;
        extensions = exts;
        if(extensions == NULL || ext == NULL) {
            return 0;
        }
        while(1) {
            loc = strstr(extensions, ext);
            if(loc == NULL) {
                return 0;
            }
            terminator = loc + strlen(ext);
            if((loc == extensions || *(loc - 1) == ' ') &&
                (*terminator == ' ' || *terminator == '\0')) {
                return 1;
            }
            extensions = terminator;
        }
    } else {
        unsigned int index;
        for(index = 0; index < num_exts_i; index++) {
            const char *e = exts_i[index];
            if(strcmp(e, ext) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

static GLADapiproc glad_gl_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_gl_find_extensions_gl(GladGLContext *context, int version) {
    const char *exts = NULL;
    unsigned int num_exts_i = 0;
    char **exts_i = NULL;
    if (!glad_gl_get_extensions(context, version, &exts, &num_exts_i, &exts_i)) return 0;

    (void) glad_gl_has_extension;

    glad_gl_free_extensions(exts_i, num_exts_i);

    return 1;
}

static int glad_gl_find_core_gl(GladGLContext *context) {
    int i, major, minor;
    const char* version;
    const char* prefixes[] = {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        NULL
    };
    version = (const char*) context->GetString(GL_VERSION);
    if (!version) return 0;
    for (i = 0;  prefixes[i];  i++) {
        const size_t length = strlen(prefixes[i]);
        if (strncmp(version, prefixes[i], length) == 0) {
            version += length;
            break;
        }
    }

    GLAD_IMPL_UTIL_SSCANF(version, "%d.%d", &major, &minor);

    context->VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    context->VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    context->VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    context->VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    context->VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
    context->VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;
    context->VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
    context->VERSION_2_1 = (major == 2 && minor >= 1) || major > 2;
    context->VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadGLContextUserPtr(GladGLContext *context, GLADuserptrloadfunc load, void *userptr) {
    int version;

    context->GetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    if(context->GetString == NULL) return 0;
    if(context->GetString(GL_VERSION) == NULL) return 0;
    version = glad_gl_find_core_gl(context);

    glad_gl_load_GL_VERSION_1_0(context, load, userptr);
    glad_gl_load_GL_VERSION_1_1(context, load, userptr);
    glad_gl_load_GL_VERSION_1_2(context, load, userptr);
    glad_gl_load_GL_VERSION_1_3(context, load, userptr);
    glad_gl_load_GL_VERSION_1_4(context, load, userptr);
    glad_gl_load_GL_VERSION_1_5(context, load, userptr);
    glad_gl_load_GL_VERSION_2_0(context, load, userptr);
    glad_gl_load_GL_VERSION_2_1(context, load, userptr);
    glad_gl_load_GL_VERSION_3_0(context, load, userptr);

    if (!glad_gl_find_extensions_gl(context, version)) return 0;



    return version;
}


int gladLoadGLContext(GladGLContext *context, GLADloadfunc load) {
    return gladLoadGLContextUserPtr(context, glad_gl_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 


#ifdef __cplusplus
}
#endif
