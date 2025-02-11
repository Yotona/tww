//
// Generated by dtk
// Translation Unit: d_a_bomb2.cpp
//

#include "d/actor/d_a_bomb2.h"
#include "d/d_procname.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "d/d_kankyo_wether.h"
#include "f_op/f_op_camera_mng.h"
#include "f_op/f_op_kankyo_mng.h"
#include "m_Do/m_Do_mtx.h"
#include "d/d_com_inf_game.h"

namespace daBomb2 {
    namespace {
        struct AttrType {
            const char* resName;
            u32 heapSize;
            s16 field_0x8;
            s16 field_0xA;
            f32 gravity;
            f32 maxFallSpeed;
            f32 field_0x14;
            f32 field_0x18;
            f32 field_0x1C;
            f32 field_0x20;
            f32 field_0x24;
            f32 field_0x28;
            f32 field_0x2C;
            f32 field_0x30;
            f32 field_0x34;
            f32 field_0x38;
            f32 field_0x3C;
            f32 field_0x40;
            f32 field_0x44;
            f32 field_0x48;
            f32 field_0x4C;
            f32 field_0x50;
            f32 field_0x54;
            f32 field_0x58;
            f32 field_0x5C;
            f32 field_0x60;
            f32 field_0x64;
            f32 field_0x68;
        };

        const AttrType L_attr = {
            "VbakH", 0x920, 0x96, 0x1E, 2.9f, -100.0f, -0.6f, 19.5f, 13.0f, 0.1f, 0.5f, 20.0f, 25.0f, 0.002f, 0.0005f, 140.0f, 100.0f, 180.0f, 50.0f, 2.0f, 0.3f, 0.03f, 0.1f, 0.4f, 0.5f, -0.005f, 1.5f, 0.6f
        };
    }
    
    void Env_c::set(const cXyz& pos) {
        mPntLight.mPos = pos;
        mPntLight.mPos.y += 100.0f;
        mPntLight.mColor.r = 200;
        mPntLight.mColor.g = 200;
        mPntLight.mColor.b = 160;
        mPntLight.mPower = 600.0f;
        mPntLight.mFluctuation = 100.0f;
        dKy_efplight_set(&mPntLight);

        mPntWind.mPos = pos;
        mPntWind.mDir.x = 0.0f;
        mPntWind.mDir.y = 1.0f;
        mPntWind.mDir.z = 0.0f;
        mPntWind.mRadius = 500.0f;
        mPntWind.field_0x20 = 0.0f;
        mPntWind.mStrength = 0.5f;
        dKyw_pntwind_set(&mPntWind);

        field_0x4C = 0;
        field_0x50 = 0.0f;
    }

    void Env_c::clean() {
        dKy_actor_addcol_set(0, 0, 0, 0.0f);
        dKy_efplight_cut(&mPntLight);
        dKyw_pntwind_cut(&mPntWind);
    }

    bool Env_c::is_end() const {
        return field_0x4C > 1;
    }

    void Env_c::proc(const cXyz& param_1) {
        camera_class* camera = dComIfGp_getCamera(0);
        f32 temp2 = 0.0f;

        mPntLight.mPower = field_0x50 * 1500.0f;
        mPntWind.mStrength = field_0x50;
        f32 temp = param_1.abs(camera->mLookat.mEye);

        if(temp < 1500.0f) {
            temp2 = 1.0f - (temp * (1.0f / 1500.0f));
        }
        temp2 *= field_0x50; // operand swap

        dKy_actor_addcol_amb_set(200, 180, 100, temp2);
        dKy_bg_addcol_amb_set(180, 160, 60, temp2);
        dKy_bg_addcol_dif_set(255, 225, 120, temp2);

        switch(field_0x4C) {
        case 0:
            cLib_addCalc(&field_0x50, 0.0f, 0.05f, 0.04f, 0.001f);
            if(field_0x50 >= 0.01f) {
                field_0x4C += 1;
            }

            break;
        case 1:
            cLib_addCalc(&field_0x50, 0.0f, 0.05f, 0.04f, 0.01f);
            if(field_0x50 <= 0.99f) {
                field_0x4C += 1;
            }

            break;
        }
    }

    void FuseSmokeCB_c::setOldPosP(const cXyz* param_1, const cXyz* param_2) {
        field_0x0C = param_1;
        field_0x10 = param_2;
        field_0x04 = 0x14;
    }

    void FuseSmokeCB_c::deleteCallBack() {
        if(mpEmitter) {
            mpEmitter->mpEmitterCallBack = 0;
            mpEmitter->becomeInvalidEmitter();
        }
        mpEmitter = 0;
    }

    /* 800DD6BC-800DD6C0       .text execute__Q27daBomb213FuseSmokeCB_cFP14JPABaseEmitter */
    void FuseSmokeCB_c::execute(JPABaseEmitter*) {
        /* Nonmatching */
    }

    /* 800DD6C0-800DDAE8       .text executeAfter__Q27daBomb213FuseSmokeCB_cFP14JPABaseEmitter */
    void FuseSmokeCB_c::executeAfter(JPABaseEmitter*) {
        /* Nonmatching */
    }

    /* 800DDAE8-800DDAEC       .text draw__Q27daBomb213FuseSmokeCB_cFP14JPABaseEmitter */
    void FuseSmokeCB_c::draw(JPABaseEmitter*) {
        /* Nonmatching */
    }

    void FuseSmokeCB_c::setup(JPABaseEmitter* param_1, const cXyz* param_2, const csXyz*, signed char) {
        mpPos = param_2;
        mpEmitter = param_1;
    }

    void FuseSparksCB_c::deleteCallBack() {
        if(mpEmitter) {
            mpEmitter->mpEmitterCallBack = 0;
            mpEmitter->becomeInvalidEmitter();
        }
        mpEmitter = 0;
    }

    void FuseSparksCB_c::execute(JPABaseEmitter* emitter) {
        f32 x = mpPos->x;
        f32 y = mpPos->y;
        f32 z = mpPos->z;
        emitter->mGlobalTranslation.set(x, y, z);

        JSUPtrLink* link = emitter->mActiveParticles.getFirstLink();
        while(link != 0) {
            JSUPtrLink* next = link->getNext();

            JPABaseParticle* ptcl = (JPABaseParticle*)link->getObjectPtr();
            ptcl->mGlobalPosition.set(x, y, z);

            link = next;
        }
    }

    void FuseSparksCB_c::draw(JPABaseEmitter*) {
        return;
    }

    void FuseSparksCB_c::setup(JPABaseEmitter* param_1, const cXyz* param_2, const csXyz*, signed char) {
        mpPos = param_2;
        mpEmitter = param_1;
    }

    int Act_c::solidHeapCB(fopAc_ac_c* i_this) {
        return static_cast<Act_c*>(i_this)->create_heap();
    }

    bool Act_c::create_heap_nut() {
        const char* resName = L_attr.resName;

        J3DModelData* mdl_data = (J3DModelData*)dComIfG_getObjectRes(resName, 0xC);
        JUT_ASSERT(0x303, mdl_data != 0);
        mpModel = mDoExt_J3DModel__create(mdl_data, 0x80000, 0x11000022);

        J3DAnmTransform* bck_data = (J3DAnmTransform*)dComIfG_getObjectRes(resName, 0x7);
        JUT_ASSERT(0x30D, bck_data != 0);
        int temp = mBck0.init(mdl_data, bck_data, true, 0, 1.0f, 0, -1, false);

        J3DAnmTevRegKey* brk_data = (J3DAnmTevRegKey*)dComIfG_getObjectRes(resName, 0x10);
        JUT_ASSERT(0x314, brk_data != 0);
        int temp3 = mBrk0.init(mdl_data, brk_data, true, 0, 1.0f, 0, -1, false, 0);

        return mpModel && temp && temp3;
    }

    bool Act_c::create_heap() {
        return create_heap_nut();
    }

    void Act_c::crr_init() {
        mCir.SetWall(30.0f, 30.0f);
        mAcch.Set(&current.pos, &next.pos, this, true, &mCir, &speed, &current.angle, &shape_angle);
        mAcch.ClrWaterNone();
        mAcch.ClrRoofNone();
        mAcch.m_roof_crr_height = 50.0f;
        mAcch.OnLineCheck();
        field_0x51C = -1.0e9f;
        field_0x520 = -1.0e9f;
        field_0x524 = 0;
        mbWaterIn = 0;
        field_0x526 = 0;
        field_0x528 = -1.0e9f;
    }

    dCcD_SrcSph Act_c::M_sph_src = {};

    void Act_c::cc_init() {
        mStts.Init(200, 0xFF, this);
        mSph.Set(M_sph_src);
        mSph.SetStts(&mStts);
    }

    void Act_c::start_explode_instant() {
        if(chk_water_in()) {
            eff_explode_water();
        }
        else {
            eff_explode();
        }

        mode_explode_init();
    }

    void Act_c::start_explode_interval() {
        eff_fuse_start();
        set_nut_exp_interval();
        mode_wait_init();
    }

    void Act_c::start_carry() {
        mode_carry_init();
    }

    /* 800DDF60-800DE024       .text start_proc_call__Q27daBomb25Act_cFv */
    void Act_c::start_proc_call() {
        typedef void(Act_c::*procFunc)();
        static procFunc start_proc[] = {
            &start_explode_instant,
            &start_explode_interval,
            &start_carry
        };

        int proc = daObj::PrmAbstract(this, PRM_2_W, PRM_2_S);
        return (this->*start_proc[proc])();
    }

    /* 800DE024-800DE14C       .text create_init__Q27daBomb25Act_cFv */
    void Act_c::create_init() {
        crr_init();
        cc_init();
        
        fopAcM_SetMtx(this, mpModel->getBaseTRMtx());

        fopAcM_setCullSizeBox(this, -36.0f, 0.0f, -36.0f, 36.0f, 66.0f, 36.0f);
        mCullSizeFar = 10.0f;

        if(daObj::PrmAbstract(this, PRM_1_W, PRM_1_S)) {
            off_carry();
        }
        else {
            on_carry();
        }

        mGravity = L_attr.gravity;
        mMaxFallSpeed = L_attr.maxFallSpeed;
        bgCrrPos();
        speed.y = 0.0f;
        speedF = 0.0f;
        current.pos = orig.pos;
        init_mtx();

        field_0x738 = L_attr.field_0x8;
        field_0x740 = 0;
        field_0x741 = 0;
        field_0x742 = 0;
        field_0x743 = 0;
        field_0x748 = cXyz::Zero;

        start_proc_call();
    }

    int Act_c::_create() {
        fopAcM_SetupActor(this, Act_c);

        int status = dComIfG_resLoad(&mPhs, L_attr.resName);

        if(status == cPhs_COMPLEATE_e) {
            if(fopAcM_entrySolidHeap(this, &solidHeapCB, L_attr.heapSize)) {
                create_init();
            }
            else {
                status = cPhs_ERROR_e;
            }
        }

        return status;
    }

    Act_c::Act_c() {}

    bool Act_c::_delete() {
        eff_fuse_end();
        mEnv.clean();
        dComIfG_resDelete(&mPhs, L_attr.resName);

        return true;
    }

    void Act_c::set_mtx() {
        mpModel->setBaseScale(mScale);
        mDoMtx_stack_c::transS(current.pos);
        mDoMtx_stack_c::concat(field_0x754);
        mDoMtx_stack_c::ZXYrotM(shape_angle);
        MTXCopy(mDoMtx_stack_c::get(), mpModel->mBaseTransformMtx);

        eff_fuse_move();
    }

    /* 800DE574-800DE5B0       .text init_mtx__Q27daBomb25Act_cFv */
    void Act_c::init_mtx() {
        tensor_init();
        eff_fuse_init();
        set_mtx();
    }

    /* 800DE5B0-800DE740       .text cc_set__Q27daBomb25Act_cFv */
    void Act_c::cc_set() {
        /* Nonmatching */
    }

    void Act_c::camera_lockoff() const {
        camera_class* camera = dComIfGp_getCamera(dComIfGp_getPlayerCameraID(0));
        camera->mCamera.ForceLockOff(fopAcM_GetID((Act_c*)this));
    }

    /* 800DE794-800DE854       .text posMoveF__Q27daBomb25Act_cFv */
    void Act_c::posMoveF() {
        /* Nonmatching */
    }

    /* 800DE854-800DE8A8       .text bgCrrPos__Q27daBomb25Act_cFv */
    void Act_c::bgCrrPos() {
        mAcch.CrrPos(*dComIfG_Bgsp());
        bgCrrPos_lava();
        bgCrrPos_water();
        setRoomInfo();
    }

    /* 800DE8A8-800DE914       .text bgCrrPos_lava__Q27daBomb25Act_cFv */
    void Act_c::bgCrrPos_lava() {
        cXyz temp(current.pos.x, next.pos.y + 1.0f, current.pos.z);
        mGndChk.SetPos(&temp);

        field_0x51C = dComIfG_Bgsp()->GroundCross(&mGndChk);
    }

    /* 800DE914-800DEA0C       .text bgCrrPos_water__Q27daBomb25Act_cFv */
    void Act_c::bgCrrPos_water() {
        /* Nonmatching */
    }

    bool Act_c::chk_water_in() const {
        return mbWaterIn;
    }

    bool Act_c::chk_lava_in() const {
        if(field_0x51C == -1.0e9f) {
            return false;
        }

        return current.pos.y < field_0x51C;
    }

    void Act_c::setRoomInfo() {
        s32 roomNo;
        if(mAcch.GetGroundH() != -1.0e9f) {
            roomNo = dComIfG_Bgsp()->GetRoomId(mAcch.m_gnd);
            mTevStr.mEnvrIdxOverride = dComIfG_Bgsp()->GetPolyColor(mAcch.m_gnd);
        }
        else {
            roomNo = dComIfGp_roomControl_getStayNo();
        }

        mTevStr.mRoomNo = roomNo;
        mStts.SetRoomId(roomNo);
        current.roomNo = roomNo;
    }

    void Act_c::bound(f32 param_1) {
        if(mAcch.ChkWallHit()) {
            speedF *= 0.8f;
            current.angle.y = (mCir.GetWallAngleY() * 2) - (current.angle.y - 0x8000); //+ 0x10000 - 0x8000 generates the addis but seems fake
        }

        if(mAcch.ChkGroundLanding()) {
            daObj::make_land_effect(this, &mAcch.m_gnd, L_attr.field_0x68);
            param_1 *= L_attr.field_0x14;
            if(param_1 < L_attr.field_0x18) {
                field_0x741 = 0;
            }
            else {
                speedF *= 0.9f;
                if(param_1 > L_attr.field_0x1C) {
                    speed.y = L_attr.field_0x1C;
                }
                else {
                    speed.y = param_1;
                }
            }
        }
        else {
            if(mAcch.ChkGroundHit()) {
                cLib_addCalc(&speedF, 0.0f, 0.5f, 5.5f, 1.0f);
            }
        }
    }

    void Act_c::set_nut_exp_interval() {
        if(field_0x738 > L_attr.field_0xA) {
            field_0x738 = L_attr.field_0xA;

            f32 frame = 0x87 - L_attr.field_0xA;
            mBck0.getFrameCtrl()->setFrame(frame);
            mBrk0.getFrameCtrl()->setFrame(frame);
        }
    }

    void Act_c::anm_play() {
        if(field_0x738 + 1 <= 0x87) {
            mBck0.play();
            mBrk0.play();
        }
    }

    /* 800DEC70-800DEFAC       .text set_wind_vec__Q27daBomb25Act_cFv */
    void Act_c::set_wind_vec() {
        /* Nonmatching */
    }

    void Act_c::eff_explode() {
        if(!field_0x742) {
            field_0x742 = 1;

            camera_class* cam = dComIfGp_getCamera(dComIfGp_getPlayerCameraID(0));
            csXyz rot;
            rot.x = -cam->mAngle.x;
            rot.y = cam->mAngle.y + 0x8000;
            rot.z = 0;

            eff_explode_normal(&rot);
            se_explode();
            set_sound_env(0xFF, 0xA);
        }
    }

    void Act_c::eff_explode_normal(const csXyz* rotation) {
        dComIfGp_particle_setP1(0xB, &current.pos, rotation, &mScale, 0xFF, 0, -1, 0, 0, 0);
        g_dComIfG_gameInfo.play.getParticle()->setBombSmoke(0x2009, &current.pos, 0, &mScale, 0xFF);
        g_dComIfG_gameInfo.play.getParticle()->setBombSmoke(0x200A, &current.pos, 0, &mScale, 0xFF);
        dComIfGp_particle_setToonP1(0x2008, &current.pos, 0, &mScale, 0xFF, 0, -1, 0, 0, 0);
    }

    void Act_c::eff_explode_water() {
        if(!field_0x743) {
            fopKyM_createWpillar(&current.pos, 1.0f, 1.0f, 1);
            field_0x743 = 1;
            se_explode_water();
            set_sound_env(0xFF, 0xA);
        }
    }

    void Act_c::eff_fuse_init() {
        field_0x6C0 = cXyz::Zero;
        field_0x6CC = cXyz::Zero;
        field_0x6D8 = cXyz::Zero;
        field_0x744 = 0;
    }

    void Act_c::eff_fuse_start() {
        if(!field_0x744) {
            field_0x744 = 1;

            field_0x6C0.x = current.pos.x;
            field_0x6C0.y = current.pos.y + 60.0f;
            field_0x6C0.z = current.pos.z;
            field_0x6CC = field_0x6C0;
            field_0x6D8 = field_0x6C0;

            dComIfGp_particle_setP1(0x11, &field_0x6C0, 0, &mScale, 0xFF, &mSparks, -1, 0, 0, 0);
            dComIfGp_particle_setToonP1(0x2012, &field_0x6C0, 0, &mScale, 0xDC, &mSmoke, -1, 0, 0, 0);
            mSmoke.setOldPosP(&field_0x6CC, &field_0x6D8);
        }
    }

    void Act_c::eff_fuse_move() {
        static cXyz fuse_offset(0.0f, 60.0f, 5.0f);
        
        field_0x6D8 = field_0x6CC;
        field_0x6CC = field_0x6C0;
        mDoMtx_stack_c::multVec(&fuse_offset, &field_0x6C0);

        if(field_0x744) {
            se_ignition();
        }
    }

    /* 800DF3DC-800DF41C       .text eff_fuse_end__Q27daBomb25Act_cFv */
    void Act_c::eff_fuse_end() {
        mSmoke.deleteCallBack();
        mSparks.deleteCallBack();

        field_0x744 = 0;
    }

    void Act_c::eff_water_splash() {
        cXyz pos(current.pos.x, field_0x520, current.pos.z);
        fopKyM_createWpillar(&pos, 0.5f, 0.75f, 0);

        se_fall_water();
        set_sound_env(0x64, 0x5);
    }

    /* 800DF488-800DF578       .text se_fall_water__Q27daBomb25Act_cFv */
    void Act_c::se_fall_water() {
        /* Nonmatching */
    }

    void Act_c::se_explode() {
            fopAcM_seStart(this, JA_SE_OBJ_BOMB_EXPLODE, 0);
    }

    void Act_c::se_explode_water() {
            fopAcM_seStart(this, JA_SE_OBJ_BOMB_WATER, 0);
    }

    void Act_c::se_ignition() {
            fopAcM_seStart(this, JA_SE_OBJ_BOMB_IGNITION, 0);
    }

    void Act_c::set_sound_env(int param_1, int param_2) {
        dKy_Sound_set(current.pos, param_1, fopAcM_GetID(this), param_2);
    }

    bool Act_c::chk_exp_cc_nut() {
        bool fuse = false;
        bool explode = false;

        if(mSph.ChkTgHit()) {
            cCcD_Obj* obj = mSph.GetTgHitObj();
            if(obj) {
                if(obj->ChkAtType(AT_TYPE_BOMB)) {
                    fuse = true;
                }
                else if(!obj->ChkAtType(AT_TYPE_LEAF_WIND)) {
                    explode = true;
                }
            }

            mSph.ClrTgHit();
        }


        if(mSph.ChkCoHit()) {
            if(field_0x741 || speed.abs() > L_attr.field_0x2C) {
                explode = true;
            }

            mSph.ClrCoHit();
        }

        if(explode) {
            eff_fuse_start();
            set_nut_exp_interval();
        }
        if(fuse) {
            eff_explode();
        }

        return fuse;
    }

    bool Act_c::chk_exp_cc() {
        if(field_0x738 > 0) {
            return chk_exp_cc_nut();
        }

        return false;
    }

    bool Act_c::chk_exp_bg_nut() {
        bool water = chk_water_in();
        bool lava = chk_lava_in();
        
        bool temp1 = true;
        bool temp2 = false;
        if(mAcch.ChkWallHit() || mAcch.ChkGroundHit()) {
            temp2 = true;
        }

        if(!temp2 && !mAcch.ChkRoofHit()) {
            temp1 = false;
        }

        bool ret = false;
        if(lava) {
            eff_explode();
            ret = true;
        }
        else {
            if(water && speed.abs() > L_attr.field_0x28) {
                eff_explode_water();
                ret = true;
                
            }
            else if(temp1) {
                if(field_0x741 || speed.abs() > L_attr.field_0x2C) {
                    eff_fuse_start();
                    set_nut_exp_interval();
                }
            }
        }

        return ret;
    }

    bool Act_c::chk_exp_bg() {
        return chk_exp_bg_nut();
    }

    bool Act_c::chk_exp_timer() {
        bool ret = false;
        if(field_0x738 > 0 && --field_0x738 == 0) {
            eff_explode();
            ret = true;
        }

        return ret;
    }

    /* 800DFAC0-800DFB94       .text chk_sink_bg_nut__Q27daBomb25Act_cFv */
    bool Act_c::chk_sink_bg_nut() {
        bool water = chk_water_in();

        bool ret = false;
        if(water && speed.abs() <= L_attr.field_0x28) {
            eff_water_splash();
            ret = true;
            
        }

        return ret;
    }

    bool Act_c::chk_sink_bg() {
        return chk_sink_bg_nut();
    }

    bool Act_c::chk_exp_pre() {
        return chk_exp_cc() || chk_exp_timer();
    }

    bool Act_c::chk_exp_post() {
        return chk_exp_bg();
    }

    bool Act_c::chk_sink_post() {
        return chk_sink_bg();
    }

    /* 800DFC54-800DFD0C       .text set_real_shadow_flag__Q27daBomb25Act_cFv */
    void Act_c::set_real_shadow_flag() {
        /* Nonmatching */
    }

    /* 800DFD0C-800DFDB0       .text carry_fuse_start__Q27daBomb25Act_cFv */
    void Act_c::carry_fuse_start() {
        /* Nonmatching */
    }

    void Act_c::on_carry() {
        mAttentionInfo.setFlag(fopAc_Attn_ACTION_CARRY_e);
    }

    void Act_c::off_carry() {
        mAttentionInfo.mFlags &= ~fopAc_Attn_ACTION_CARRY_e;
    }

    void Act_c::mode_wait_init() {
        field_0x694 = 0;
        mGravity = L_attr.gravity;
        mSph.GetObjCo().OnSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
    }

    void Act_c::mode_wait() {
        if(chk_exp_pre()) {
            mode_explode_init();
            mode_explode();
        }
        else {
            if(fopAcM_checkCarryNow(this)) {
                mode_carry_init();
                mode_carry();
            }
            else {
                bool temp = daObj::PrmAbstract(this, PRM_1_W, PRM_1_S);
                f32 yVel = 0.0f;
                if(!temp) {
                    if(!field_0x745) {
                        posMoveF();
                    }

                    yVel = speed.y;
                    bgCrrPos();
                }

                if(chk_exp_post()) {
                    mode_explode_init();
                }
                else {
                    if(chk_sink_post()) {
                        mode_sink_init();
                    }
                    else {
                        if(!field_0x740) {
                            if(temp) {
                                off_carry();
                            }
                            else {
                                bound(yVel);
                                if(mAcch.ChkGroundHit()) {
                                    on_carry();
                                }
                                else {
                                    off_carry();
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    void Act_c::mode_carry_init() {
        field_0x694 = 1;
        speedF = 0.0f;
        speed = cXyz::Zero;
        off_carry();
        mSph.GetObjCo().OffSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
    }

    void Act_c::mode_carry() {
        carry_fuse_start();
        if(chk_exp_pre()) {
            mode_explode_init();
            mode_explode();
        }
        else {
            if(!fopAcM_checkCarryNow(this)) {
                if(speedF > 0.0f) {
                    field_0x741 = 1;
                    field_0x7A8 = 2;
                }

                mode_wait_init();
                mode_wait();
            }
            else {
                cXyz temp = current.pos;
                bgCrrPos();
                current.pos = temp;
            }
        }
    }

    void Act_c::mode_explode_init() {
        field_0x694 = 2;
        camera_lockoff();
        eff_fuse_end();
        mEnv.set(current.pos);
        speedF = 0.0f;
        speed = cXyz::Zero;
        mGravity = 0.0f;
        off_carry();
        mSph.GetObjTg().OffSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
        mSph.GetObjCo().OffSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
        mSph.GetObjAt().OnSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
        fopAcM_cancelCarryNow(this);
        field_0x738 = 0;
        field_0x73C = 4;
        dComIfGp_getVibration().StartShock(7, -0x21, cXyz(0.0f, 1.0f, 0.0f));
    }

    void Act_c::mode_explode() {
        mEnv.proc(current.pos);
        if(!field_0x73C && mEnv.is_end()) {
            field_0x740 = 1;
        }
    }

    void Act_c::mode_sink_init() {
        field_0x694 = 3;
        speed.y *= 0.8f;
        speedF *= 0.8f;
        mSph.GetObjAt().OffSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
        mSph.GetObjTg().OffSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
        mSph.GetObjCo().OffSPrmBit(cCcD_ObjCommonBase::CO_SPRM_SET);
        off_carry();
        fopAcM_cancelCarryNow(this);
        field_0x698 = 4;
        fopAcM_getWaterY(&current.pos, &field_0x528);
    }

    void Act_c::mode_sink() {
        f32 temp;
        if(fopAcM_getWaterY(&current.pos, &temp) && field_0x528 != -1.0e9f && --field_0x698 > 0) {
            current.pos.y += temp - field_0x528;
            field_0x528 = temp;
            posMoveF();
        }
        else {
            field_0x740 = 1;
        }
    }

    void Act_c::mode_proc_call() {
        typedef void(Act_c::*procFunc)();
        static procFunc mode_proc[] = {
            &mode_wait,
            &mode_carry,
            &mode_explode,
            &mode_sink,
        };

        if(fopAcM_checkCarryNow(this) && field_0x694 != 1) {
            mode_carry_init();
        }

        (this->*mode_proc[field_0x694])();
        set_real_shadow_flag();
    }

    void Act_c::tensor_init() {
        mDoMtx_identity(field_0x754);
        vib_init();
    }

    void Act_c::vib_init() {
        field_0x784 = 0.0f;
        field_0x788 = 0.0f;
        field_0x78C = 0.0f;
        field_0x790 = 0.0f;
        field_0x794 = 0.0f;
        field_0x798 = 0.0f;
        field_0x79C = 0.0f;
        field_0x7A0 = 0.0f;
        field_0x7A4 = 0.0f;
        field_0x7A8 = 0.0f;
    }

    /* 800E0430-800E04FC       .text vib_proc__Q27daBomb25Act_cFv */
    void Act_c::vib_proc() {
        
    }

    void Act_c::set_vib_tensor() {
        cXyz temp(field_0x790, 1.0f, field_0x78C);
        Quaternion quat;
        daObj::quat_rotBaseY2(&quat, temp);
        mDoMtx_quat(&field_0x754[0], &quat);
    }

    /* 800E0554-800E0588       .text tensor_wait__Q27daBomb25Act_cFv */
    void Act_c::tensor_wait() {
        if(mAcch.ChkGroundHit()) {
            tensor_wait_ground();
        }
        else {
            tensor_wait_drop();
        }
    }

    void Act_c::tensor_wait_drop() {
        if(field_0x7A8 > 0) {
            field_0x79C = speed.z * L_attr.field_0x60;
            field_0x7A0 = speed.x * L_attr.field_0x60;
        }

        field_0x784 = 0.0f;
        field_0x788 = 0.0f;
        field_0x7A4 = L_attr.field_0x54;
    }

    void Act_c::tensor_wait_ground() {
        cM3dGPla* pNormal = dComIfG_Bgsp()->GetTriPla(mAcch.m_gnd.GetBgIndex(), mAcch.m_gnd.GetPolyIndex());
        if(pNormal) {
            field_0x784 = pNormal->mNormal.z * L_attr.field_0x64;
            field_0x788 = pNormal->mNormal.x * L_attr.field_0x64;
        }
        else {
            field_0x784 = 0.0f;
            field_0x788 = 0.0f;
        }
        
        field_0x7A4 = L_attr.field_0x58;
    }

    void Act_c::tensor_carry() {
        field_0x784 = 0.0f;
        field_0x788 = 0.0f;
        field_0x7A4 = L_attr.field_0x58;
    }

    void Act_c::tensor_explode() {
        field_0x784 = 0.0f;
        field_0x788 = 0.0f;
        field_0x7A4 = L_attr.field_0x58;
    }

    void Act_c::tensor_sink() {
        field_0x784 = 0.0f;
        field_0x788 = 0.0f;
        field_0x7A4 = L_attr.field_0x58;
    }

    void Act_c::tensor_proc_call() {
        typedef void(Act_c::*procFunc)();
        static procFunc tensor_proc[] = {
            &tensor_wait,
            &tensor_carry,
            &tensor_explode,
            &tensor_sink,
        };

        if(!daObj::PrmAbstract(this, PRM_1_W, PRM_1_S)) {
            (this->*tensor_proc[field_0x694])();
            vib_proc();
            set_vib_tensor();
        }
    }

    bool Act_c::_execute() {
        set_wind_vec();
        mode_proc_call();

        if(field_0x740) {
            fopAcM_delete(this);
        }
        else {
            tensor_proc_call();
            anm_play();

            mAttentionInfo.mPosition.x = current.pos.x;
            mAttentionInfo.mPosition.y = current.pos.y + 50.0f;
            mAttentionInfo.mPosition.z = current.pos.z;
            mEyePos = mAttentionInfo.mPosition;

            set_mtx();
            cc_set();
        }

        return true;
    }

    bool Act_c::is_draw() {
        bool draw = false;
        if(field_0x694 != 2 && !field_0x743 && ! field_0x742) {
            draw = true;
        }

        return draw;
    }

    void Act_c::draw_nut() {
        J3DModelData* mdlData = mpModel->getModelData();
        mBck0.entry(mdlData, mBck0.getFrame());
        mBrk0.entry(mdlData, mBrk0.getFrame());
        dComIfGd_setListP1();
        mDoExt_modelUpdateDL(mpModel);
        dComIfGd_setList();

        mBck0.remove(mdlData);
        mBrk0.remove(mdlData);
    }

    void Act_c::draw_shadow() {
        static const f32 mult[] = {
            2.08f,
            1.8f,
            1.5f,
            1.3f,
            1.15f,
            1.08f,
            1.04f,
            1.02f,
            1.01f,
            1.0f
        };

        if(fopAcM_GetModel(this) == 0) {
            f32 frame = mBck0.getFrame();
            frame = mult[cLib_minMaxLimit<int>(mBck0.getEndFrame() - frame, 0, 9)] * 25.0f;

            dComIfGd_setSimpleShadow2(&current.pos, mAcch.GetGroundH(), frame, mAcch.m_gnd, 0, 1.0f, dDlst_shadowControl_c::getSimpleTex());
        }
    }

    /* 800E0A0C-800E0A80       .text _draw__Q27daBomb25Act_cFv */
    bool Act_c::_draw() {
        if(is_draw()) {
            g_env_light.settingTevStruct(TEV_TYPE_ACTOR, &current.pos, &mTevStr);
            g_env_light.setLightTevColorType(mpModel, &mTevStr);
            draw_nut();
            draw_shadow();
        }

        return true;
    }

    namespace {
        int Mthd_Create(void* i_this) {
            return static_cast<Act_c*>(i_this)->_create();
        }

        BOOL Mthd_Delete(void* i_this) {
            return static_cast<Act_c*>(i_this)->_delete();
        }

        BOOL Mthd_Execute(void* i_this) {
            return static_cast<Act_c*>(i_this)->_execute();
        }

        BOOL Mthd_Draw(void* i_this) {
            return static_cast<Act_c*>(i_this)->_draw();
        }

        bool Mthd_IsDelete(void*) {
            return true;
        }
        
        //global visibility according to objdiff
        actor_method_class Mthd_Table = {
            (process_method_func)Mthd_Create,
            (process_method_func)Mthd_Delete,
            (process_method_func)Mthd_Execute,
            (process_method_func)Mthd_IsDelete,
            (process_method_func)Mthd_Draw,
        };
    }
}

actor_process_profile_definition g_profile_Bomb2 = {
    fpcLy_CURRENT_e,
    7,
    fpcPi_CURRENT_e,
    PROC_Bomb2,
    &g_fpcLf_Method.mBase,
    sizeof(daBomb2::Act_c),
    0,
    0,
    &g_fopAc_Method.base,
    0x0115,
    &daBomb2::Mthd_Table,
    fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    fopAc_ACTOR_e,
    fopAc_CULLBOX_CUSTOM_e,
};
