#ifndef D_A_ITEMBASE_H
#define D_A_ITEMBASE_H

#include "f_op/f_op_actor.h"
#include "SSystem/SComponent/c_phase.h"
#include "d/d_bg_s.h"
#include "d/d_bg_s_acch.h"
#include "d/d_cc_d.h"

class mDoExt_btkAnm;
class mDoExt_brkAnm;
class mDoExt_bckAnm;

struct daItemBase_c_m_data {
    /* 0x00 */ f32 mFieldItemGravity;
    /* 0x04 */ f32 field_0x04;
    /* 0x08 */ f32 field_0x08;
    /* 0x0C */ f32 mScaleAnimSpeed;
    /* 0x10 */ f32 field_0x10;
    /* 0x14 */ s16 field_0x14;
    /* 0x16 */ s16 mDuration;
    /* 0x18 */ s16 field_0x18;
    /* 0x1A */ u8 field_0x1A[0x1C - 0x1A];
    /* 0x1C */ s16 mNumFramesPerFullSpin;
    /* 0x1E */ u8 field_0x1E[0x2A - 0x1E];
    /* 0x2A */ s16 mHeartMaxRandomZRot;
    /* 0x2C */ u8 field_0x2C[0x38 - 0x2C];
    /* 0x38 */ f32 mPickedUpInitialSpeedY;
    /* 0x3C */ f32 mPickedUpGravity;
    /* 0x40 */ s16 field_0x40;
    /* 0x42 */ s16 field_0x42;
    /* 0x44 */ void* field_0x44;
    /* 0x48 */ f32 mVelocityScale;
};

STATIC_ASSERT(sizeof(daItemBase_c_m_data) == 0x4C);

struct daItemBase_c : public fopAc_ac_c {
public:
    BOOL DeleteBase(const char*);
    BOOL CreateItemHeap(const char*, short, short, short, short, short, short, short);
    virtual BOOL DrawBase();
    virtual void setListStart();
    void setListEnd();
    virtual void settingBeforeDraw();
    virtual void setTevStr();
    virtual void setShadow();
    virtual void animEntry();
    void animPlay(float, float, float, float, float);
    virtual BOOL clothCreate();

    void getItemNo();
    void getHeight();
    void getR();
    void hide();
    void show();
    void changeDraw();
    bool chkDraw();
    void dead();
    void chkDead();
    void setLoadError();

    daItemBase_c_m_data* getData();

    static daItemBase_c_m_data m_data;

public:
    /* 0x294 */ request_of_phase_process_class mPhs;
    /* 0x29C */ J3DModel* mpModel;
    /* 0x2A0 */ J3DModel* mpModelArrow[2]; // Extra models for arrow bundles
    /* 0x2A8 */ mDoExt_btkAnm* mpBtkAnm1;
    /* 0x2AC */ mDoExt_btkAnm* mpBtkAnm2;
    /* 0x2B0 */ mDoExt_brkAnm* mpBrkAnm1;
    /* 0x2B4 */ mDoExt_brkAnm* mpBrkAnm2;
    /* 0x2B8 */ mDoExt_bckAnm* mpBckAnm;
    /* 0x2BC */ dBgS_ObjAcch mAcch;
    /* 0x480 */ dBgS_AcchCir mAcchCir;
    /* 0x4C0 */ dCcD_Stts mStts;
    /* 0x4FC */ dCcD_Cyl mCyl;
    /* 0x62C */ s32 mShadowId;
    /* 0x630 */ s32 mPickupFlag;
    /* 0x634 */ s32 field_0x634;
    /* 0x638 */ s16 field_0x638;
    /* 0x63A */ u8 m_itemNo;
    /* 0x63B */ u8 mDrawFlags;
};

STATIC_ASSERT(sizeof(daItemBase_c) == 0x63C);

#endif /* D_A_ITEMBASE_H */