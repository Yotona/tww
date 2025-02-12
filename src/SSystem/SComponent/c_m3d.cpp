//
// Generated by dtk
// Translation Unit: c_m3d.cpp
//

#include "SSystem/SComponent/c_m3d.h"
#include "SSystem/SComponent/c_m3d_g_aab.h"
#include "SSystem/SComponent/c_m3d_g_cir.h"
#include "SSystem/SComponent/c_m3d_g_cps.h"
#include "SSystem/SComponent/c_m3d_g_cyl.h"
#include "SSystem/SComponent/c_m3d_g_lin.h"
#include "SSystem/SComponent/c_m3d_g_pla.h"
#include "SSystem/SComponent/c_m3d_g_sph.h"
#include "SSystem/SComponent/c_m3d_g_tri.h"

/* 8024A400-8024A450       .text cM3d_InDivPos1__FPC3VecPC3VecfP3Vec */
void cM3d_InDivPos1(const Vec* v0, const Vec* v1, f32 scale, Vec* pDst) {
    Vec tmp;
    VECScale(v1, &tmp, scale);
    VECAdd(&tmp, v0, pDst);
}

/* 8024A450-8024A4B4       .text cM3d_InDivPos2__FPC3VecPC3VecfP3Vec */
void cM3d_InDivPos2(const Vec* v0, const Vec* v1, f32 scale, Vec* pDst) {
    Vec tmp;
    VECSubtract(v1, v0, &tmp);
    cM3d_InDivPos1(v0, &tmp, scale, pDst);
}

/* 8024A4B4-8024A56C       .text cM3d_Len2dSqPntAndSegLine__FffffffPfPfPf */
bool cM3d_Len2dSqPntAndSegLine(f32, f32, f32, f32, f32, f32, f32*, f32*, f32*) {
    /* Nonmatching */
}

/* 8024A56C-8024A670       .text cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf */
bool cM3d_Len3dSqPntAndSegLine(const cM3dGLin*, const Vec*, Vec*, f32*) {
    /* Nonmatching */
}

/* 8024A670-8024A6F0       .text cM3d_SignedLenPlaAndPos__FPC8cM3dGPlaPC3Vec */
f32 cM3d_SignedLenPlaAndPos(const cM3dGPla* plane, const Vec* pos) {
    f32 len = VECMag(plane->GetNP());
    if (cM3d_IsZero(len))
        return 0.0f;
    else
        return plane->getPlaneFunc(pos) / len;
}

/* 8024A6F0-8024A7BC       .text cM3d_CalcPla__FPC3VecPC3VecPC3VecP3VecPf */
void cM3d_CalcPla(const Vec* p0, const Vec* p1, const Vec* p2, Vec* pDst, f32* pT) {
    cM3d_VectorProduct(p0, p1, p2, pDst);
    f32 t = VECMag(pDst);
    if (fabsf(t) >= 0.02f) {
        VECScale(pDst, pDst, 1.0f / t);
        *pT = -VECDotProduct(pDst, p0);
    } else {
        pDst->x = 0.0f;
        pDst->y = 0.0f;
        pDst->z = 0.0f;
        *pT = 0.0f;
    }
}

/* 8024A7BC-8024A8E0       .text cM3d_Cross_AabAab__FPC8cM3dGAabPC8cM3dGAab */
bool cM3d_Cross_AabAab(const cM3dGAab*, const cM3dGAab*) {
    /* Nonmatching */
}

/* 8024A8E0-8024A988       .text cM3d_Cross_AabCyl__FPC8cM3dGAabPC8cM3dGCyl */
bool cM3d_Cross_AabCyl(const cM3dGAab*, const cM3dGCyl*) {
    /* Nonmatching */
}

/* 8024A988-8024AA30       .text cM3d_Cross_AabSph__FPC8cM3dGAabPC8cM3dGSph */
bool cM3d_Cross_AabSph(const cM3dGAab*, const cM3dGSph*) {
    /* Nonmatching */
}

/* 8024AA30-8024ACA8       .text cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf */
int cM3d_Check_LinLin(const cM3dGLin*, const cM3dGLin*, f32*, f32*) {
    /* Nonmatching */
}

/* 8024ACA8-8024AE3C       .text cM3d_Cross_LinPla__FPC8cM3dGLinPC8cM3dGPlaP3Vecbb */
bool cM3d_Cross_LinPla(const cM3dGLin*, const cM3dGPla*, Vec*, bool, bool) {
    /* Nonmatching */
}

/* 8024AE3C-8024BA18       .text cM3d_Cross_MinMaxBoxLine__FPC3VecPC3VecPC3VecPC3Vec */
bool cM3d_Cross_MinMaxBoxLine(const Vec*, const Vec*, const Vec*, const Vec*) {
    /* Nonmatching */
}

/* 8024BA18-8024BB50       .text cM3d_InclusionCheckPosIn3PosBox3d__FPC3VecPC3VecPC3VecPC3Vecf */
bool cM3d_InclusionCheckPosIn3PosBox3d(const Vec*, const Vec*, const Vec*, const Vec*, f32) {
    /* Nonmatching */
}

/* 8024BB50-8024BD34       .text cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vecf */
bool cM3d_CrossX_Tri(const cM3dGTri*, const Vec*, f32) {
    /* Nonmatching */
}

/* 8024BD34-8024BF1C       .text cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vec */
bool cM3d_CrossX_Tri(const cM3dGTri*, const Vec*) {
    /* Nonmatching */
}

/* 8024BF1C-8024BFA0       .text cM3d_CrossX_Tri__FPC8cM3dGTriPC3VecPf */
void cM3d_CrossX_Tri(const cM3dGTri*, const Vec*, f32*) {
    /* Nonmatching */
}

/* 8024BFA0-8024C188       .text cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vec */
bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*) {
    /* Nonmatching */
}

/* 8024C188-8024C370       .text cM3d_CrossY_Tri__FRC3VecRC3VecRC3VecRC8cM3dGPlaPC3Vec */
bool cM3d_CrossY_Tri(const Vec&, const Vec&, const Vec&, const cM3dGPla&, const Vec*) {
    /* Nonmatching */
}

/* 8024C370-8024C4D0       .text cM3d_CrossY_Tri_Front__FRC3VecRC3VecRC3VecPC3Vec */
bool cM3d_CrossY_Tri_Front(const Vec&, const Vec&, const Vec&, const Vec*) {
    /* Nonmatching */
}

/* 8024C4D0-8024C554       .text cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPf */
bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, f32*) {
    /* Nonmatching */
}

/* 8024C554-8024C738       .text cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vecf */
bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, f32) {
    /* Nonmatching */
}

/* 8024C738-8024C828       .text cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPC10cM3d_RangePf */
bool cM3d_CrossY_Tri(const cM3dGTri*, const Vec*, const cM3d_Range*, f32*) {
    /* Nonmatching */
}

/* 8024C828-8024CA0C       .text cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vecf */
bool cM3d_CrossZ_Tri(const cM3dGTri*, const Vec*, f32) {
    /* Nonmatching */
}

/* 8024CA0C-8024CBF4       .text cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vec */
bool cM3d_CrossZ_Tri(const cM3dGTri*, const Vec*) {
    /* Nonmatching */
}

/* 8024CBF4-8024CC78       .text cM3d_CrossZ_Tri__FPC8cM3dGTriPC3VecPf */
void cM3d_CrossZ_Tri(const cM3dGTri*, const Vec*, f32*) {
    /* Nonmatching */
}

/* 8024CC78-8024CD50       .text cM3d_Cross_LinTri__FPC8cM3dGLinPC8cM3dGTriP3Vecbb */
bool cM3d_Cross_LinTri(const cM3dGLin*, const cM3dGTri*, Vec*, bool, bool) {
    /* Nonmatching */
}

/* 8024CD50-8024CE0C       .text cM3d_Cross_LinTri_Easy__FPC8cM3dGTriPC3Vec */
bool cM3d_Cross_LinTri_Easy(const cM3dGTri*, const Vec*) {
    /* Nonmatching */
}

/* 8024CE0C-8024CE54       .text cM3d_Cross_SphPnt__FPC8cM3dGSphPC3Vec */
bool cM3d_Cross_SphPnt(const cM3dGSph*, const Vec*) {
    /* Nonmatching */
}

/* 8024CE54-8024D0BC       .text cM3d_Cross_LinSph__FPC8cM3dGLinPC8cM3dGSphP3Vec */
bool cM3d_Cross_LinSph(const cM3dGLin*, const cM3dGSph*, Vec*) {
    /* Nonmatching */
}

/* 8024D0BC-8024D378       .text cM3d_Cross_LinSph_CrossPos__FRC8cM3dGSphRC8cM3dGLinP3VecP3Vec */
int cM3d_Cross_LinSph_CrossPos(const cM3dGSph&, const cM3dGLin&, Vec*, Vec*) {
    /* Nonmatching */
}

/* 8024D378-8024DB34       .text cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphP3VecPf */
bool cM3d_Cross_CylSph(const cM3dGCyl*, const cM3dGSph*, Vec*, f32*) {
    /* Nonmatching */
}

/* 8024DB34-8024E1B4       .text cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPfPf */
bool cM3d_Cross_SphSph(const cM3dGSph*, const cM3dGSph*, f32*, f32*) {
    /* Nonmatching */
}

/* 8024E1B4-8024E288       .text cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphP3Vec */
bool cM3d_Cross_SphSph(const cM3dGSph*, const cM3dGSph*, Vec*) {
    /* Nonmatching */
}

/* 8024E288-8024E330       .text cM3d_CalcSphVsTriCrossPoint__FPC8cM3dGSphPC8cM3dGTriP3Vec */
void cM3d_CalcSphVsTriCrossPoint(const cM3dGSph*, const cM3dGTri*, Vec*) {
    /* Nonmatching */
}

/* 8024E330-8024E694       .text cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec */
bool cM3d_Cross_SphTri(const cM3dGSph*, const cM3dGTri*, Vec*) {
    /* Nonmatching */
}

/* 8024E694-8024EF80       .text cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylPf */
bool cM3d_Cross_CylCyl(const cM3dGCyl*, const cM3dGCyl*, f32*) {
    /* Nonmatching */
}

/* 8024EF80-8024F11C       .text cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylP3Vec */
bool cM3d_Cross_CylCyl(const cM3dGCyl*, const cM3dGCyl*, Vec*) {
    /* Nonmatching */
}

/* 8024F11C-8024F410       .text cM3d_Cross_CylTri__FPC8cM3dGCylPC8cM3dGTriP3Vec */
bool cM3d_Cross_CylTri(const cM3dGCyl*, const cM3dGTri*, Vec*) {
    /* Nonmatching */
}

/* 8024F410-8024FA90       .text cM3d_Cross_CylLin__FPC8cM3dGCylPC8cM3dGLinP3VecP3Vec */
int cM3d_Cross_CylLin(const cM3dGCyl*, const cM3dGLin*, Vec*, Vec*) {
    /* Nonmatching */
}

/* 8024FA90-8024FB04       .text cM3d_Cross_CylPntPnt__FPC8cM3dGCylPC3VecPC3VecP3VecP3Vec */
int cM3d_Cross_CylPntPnt(const cM3dGCyl*, const Vec*, const Vec*, Vec*, Vec*) {
    /* Nonmatching */
}

/* 8024FB04-8024FB68       .text cM3d_Cross_CylPnt__FPC8cM3dGCylPC3Vec */
bool cM3d_Cross_CylPnt(const cM3dGCyl*, const Vec*) {
    /* Nonmatching */
}

/* 8024FB68-8024FF10       .text cM3d_Cross_CpsCps__FRC8cM3dGCpsRC8cM3dGCpsP3Vec */
bool cM3d_Cross_CpsCps(const cM3dGCps&, const cM3dGCps&, Vec*) {
    /* Nonmatching */
}

/* 8024FF10-802506D4       .text cM3d_Cross_CpsCyl__FRC8cM3dGCpsRC8cM3dGCylP3Vec */
bool cM3d_Cross_CpsCyl(const cM3dGCps&, const cM3dGCyl&, Vec*) {
    /* Nonmatching */
}

/* 802506D4-80250840       .text cM3d_Cross_CpsSph_CrossPos__FRC8cM3dGCpsRC8cM3dGSphRC3VecP3Vec */
bool cM3d_Cross_CpsSph_CrossPos(const cM3dGCps&, const cM3dGSph&, const Vec&, Vec*) {
    /* Nonmatching */
}

/* 80250840-802509B0       .text cM3d_Cross_CpsSph__FRC8cM3dGCpsRC8cM3dGSphP3Vec */
bool cM3d_Cross_CpsSph(const cM3dGCps&, const cM3dGSph&, Vec*) {
    /* Nonmatching */
}

/* 802509B0-80250D70       .text cM3d_Cross_TriTri__FRC8cM3dGTriRC8cM3dGTriP3Vec */
bool cM3d_Cross_TriTri(const cM3dGTri&, const cM3dGTri&, Vec*) {
    /* Nonmatching */
}

/* 80250D70-80251280       .text cM3d_Cross_CpsTri__FRC8cM3dGCps8cM3dGTriP3Vec */
bool cM3d_Cross_CpsTri(const cM3dGCps&, cM3dGTri, Vec*) {
    /* Nonmatching */
}

/* 80251280-802514EC       .text cM3d_NearPos_Cps__FRC8cM3dGCpsRC3VecP3Vec */
void cM3d_NearPos_Cps(const cM3dGCps&, const Vec&, Vec*) {
    /* Nonmatching */
}

/* 802514EC-80251560       .text cM3d_CalcVecAngle__FRC3VecPsPs */
void cM3d_CalcVecAngle(const Vec&, short*, short*) {
    /* Nonmatching */
}

/* 80251560-80251634       .text cM3d_CalcVecZAngle__FRC3VecP5csXyz */
void cM3d_CalcVecZAngle(const Vec&, csXyz*) {
    /* Nonmatching */
}

/* 80251634-8025172C       .text cM3d_UpMtx_Base__FRC3VecRC3VecPA4_f */
void cM3d_UpMtx_Base(const Vec&, const Vec&, f32(*)[4]) {
    /* Nonmatching */
}

/* 8025172C-80251758       .text cM3d_PlaneCrossLineProcWork__FfffffffPfPf */
void cM3d_PlaneCrossLineProcWork(f32 v0, f32 v1, f32 v2, f32 v3, f32 v4, f32 v5, f32 v6, f32* p0, f32* p1) {
    *p0 = (v1 * v6 - v3 * v5) / v4;
    *p1 = (v2 * v5 - v0 * v6) / v4;
}

/* 80251758-802518F0       .text cM3d_2PlaneCrossLine__FRC8cM3dGPlaRC8cM3dGPlaP8cM3dGLin */
int cM3d_2PlaneCrossLine(const cM3dGPla&, const cM3dGPla&, cM3dGLin*) {
    /* Nonmatching */
}

/* 802518F0-80251A10       .text cM3d_3PlaneCrossPos__FRC8cM3dGPlaRC8cM3dGPlaRC8cM3dGPlaP3Vec */
bool cM3d_3PlaneCrossPos(const cM3dGPla& p0, const cM3dGPla& p1, const cM3dGPla& p2, Vec* pDst) {
    cM3dGLin lin;
    if (!cM3d_2PlaneCrossLine(p0, p1, &lin))
        return false;

    Vec& start = lin.GetStart();
    Vec& end = lin.GetEnd();
    if (!cM3d_CrossInfLineVsInfPlane_proc(p2.getPlaneFunc(&start), p2.getPlaneFunc(&end), &start, &end, pDst))
        return false;

    return true;
}

/* 80251A10-80251AE4       .text cM3d_lineVsPosSuisenCross__FPC8cM3dGLinPC3VecP3Vec */
f32 cM3d_lineVsPosSuisenCross(const cM3dGLin*, const Vec*, Vec*) {
    /* Nonmatching */
}

/* 80251AE4-80251BC0       .text cM3d_lineVsPosSuisenCross__FRC3VecRC3VecRC3VecP3Vec */
f32 cM3d_lineVsPosSuisenCross(const Vec&, const Vec&, const Vec&, Vec*) {
    /* Nonmatching */
}

/* 80251BC0-80251C44       .text cM3d_2PlaneLinePosNearPos__FRC8cM3dGPlaRC8cM3dGPlaPC3VecP3Vec */
int cM3d_2PlaneLinePosNearPos(const cM3dGPla& p0, const cM3dGPla& p1, const Vec* line, Vec* pDst) {
    cM3dGLin lin;
    s32 ret = cM3d_2PlaneCrossLine(p0, p1, &lin);
    if (ret != 0)
        cM3d_lineVsPosSuisenCross(&lin, line, pDst);
    return ret != 0;
}

/* 80251C44-80251CC4       .text cM3d_CrawVec__FRC3VecRC3VecP3Vec */
void cM3d_CrawVec(const Vec& v0, const Vec& v1, Vec* pDst) {
    Vec tmp;
    f32 sq = fabsf(v1.x * v0.x + v1.y * v0.y + v1.z * v0.z);
    VECScale(&v0, &tmp, sq);
    VECAdd(&tmp, &v1, pDst);
}
