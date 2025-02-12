//
// Generated by dtk
// Translation Unit: d_particle.cpp
//

#include "d/d_particle.h"
#include "dolphin/types.h"

/* 8007A4D8-8007A514       .text __ct__18dPa_modelEmitter_cFv */
dPa_modelEmitter_c::dPa_modelEmitter_c() {
    /* Nonmatching */
}

/* 8007A514-8007A804       .text __ct__21dPa_J3DmodelEmitter_cFP14JPABaseEmitterP12J3DModelDataR12dKy_tevstr_cP16J3DAnmTexPatternUsi */
dPa_J3DmodelEmitter_c::dPa_J3DmodelEmitter_c(JPABaseEmitter*, J3DModelData*, dKy_tevstr_c&, J3DAnmTexPattern*, unsigned short, int) {
    /* Nonmatching */
}

/* 8007A84C-8007A8C8       .text __dt__21dPa_J3DmodelEmitter_cFv */
dPa_J3DmodelEmitter_c::~dPa_J3DmodelEmitter_c()  {
    if (mpHeap) {
        mDoExt_destroySolidHeap(mpHeap);
    }
}

/* 8007A8C8-8007ADC4       .text draw__21dPa_J3DmodelEmitter_cFv */
void dPa_J3DmodelEmitter_c::draw() {
    /* Nonmatching */
}

/* 8007ADC4-8007AECC       .text __ct__18dPa_modelControl_cFP12J3DModelData */
dPa_modelControl_c::dPa_modelControl_c(J3DModelData*) {
    /* Nonmatching */
}

/* 8007AECC-8007AED8       .text __ct__14dPa_J3Dmodel_cFv */
dPa_J3Dmodel_c::dPa_J3Dmodel_c() {
    /* Nonmatching */
}

/* 8007AED8-8007AF64       .text __dt__18dPa_modelControl_cFv */
dPa_modelControl_c::~dPa_modelControl_c() {
    /* Nonmatching (node_class has no virtual destructor) */
    node_class* node = parent.mpHead;
    while (node) {
        node_class* nextNode = node->mpNextNode;
        cLs_SingleCut(node);
        // delete node;
        node = nextNode;
    }
}

/* 8007AF64-8007B074       .text newModel__18dPa_modelControl_cFP12J3DModelData */
void dPa_modelControl_c::newModel(J3DModelData*) {
    /* Nonmatching */
}

/* 8007B074-8007B158       .text draw__18dPa_modelControl_cFv */
void dPa_modelControl_c::draw() {
    /* Nonmatching */
}

/* 8007B158-8007B194       .text __ct__19dPa_followEcallBackFUcUc */
dPa_followEcallBack::dPa_followEcallBack(unsigned char, unsigned char) {
    /* Nonmatching */
}

/* 8007B194-8007B288       .text execute__19dPa_followEcallBackFP14JPABaseEmitter */
void dPa_followEcallBack::execute(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007B288-8007B2C8       .text draw__19dPa_followEcallBackFP14JPABaseEmitter */
void dPa_followEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007B2C8-8007B360       .text setup__19dPa_followEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_followEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007B360-8007B3B0       .text end__19dPa_followEcallBackFv */
void dPa_followEcallBack::end() {
    /* Nonmatching */
}

/* 8007B3B0-8007B444       .text __ct__18dPa_smokeEcallBackFUc */
dPa_smokeEcallBack::dPa_smokeEcallBack(unsigned char) {
    /* Nonmatching */
}

/* 8007B4B0-8007B558       .text __ct__18dPa_smokeEcallBackFUcUcUcUc */
dPa_smokeEcallBack::dPa_smokeEcallBack(unsigned char, unsigned char, unsigned char, unsigned char) {
    /* Nonmatching */
}

/* 8007B558-8007B5E8       .text __ct__18dPa_smokeEcallBackFRC8_GXColorP12dKy_tevstr_cUc */
dPa_smokeEcallBack::dPa_smokeEcallBack(const _GXColor&, dKy_tevstr_c*, unsigned char) {
    /* Nonmatching */
}

/* 8007B5E8-8007B698       .text setup__18dPa_smokeEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_smokeEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007B73C-8007B804       .text initiateLighting__FR11_GXColorS10R8_GXColorR8_GXColor */
void initiateLighting(_GXColorS10&, _GXColor&, _GXColor&) {
    /* Nonmatching */
}

/* 8007B804-8007BB44       .text smokeEcallBack__FP14JPABaseEmitterP12dKy_tevstr_cSc8_GXColor */
void smokeEcallBack(JPABaseEmitter*, dKy_tevstr_c*, signed char, _GXColor) {
    /* Nonmatching */
}

/* 8007BB44-8007BB80       .text draw__18dPa_smokeEcallBackFP14JPABaseEmitter */
void dPa_smokeEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007BB80-8007BBD8       .text end__18dPa_smokeEcallBackFv */
void dPa_smokeEcallBack::end() {
    /* Nonmatching */
}

/* 8007BBD8-8007BC84       .text dPa_setWindPower__FP15JPABaseParticle */
void dPa_setWindPower(JPABaseParticle*) {
    /* Nonmatching */
}

/* 8007BC84-8007BCB4       .text execute__18dPa_smokePcallBackFP14JPABaseEmitterP15JPABaseParticle */
void dPa_smokePcallBack::execute(JPABaseEmitter*, JPABaseParticle*) {
    /* Nonmatching */
}

/* 8007BCB4-8007C380       .text draw__18dPa_smokePcallBackFP14JPABaseEmitterP15JPABaseParticle */
void dPa_smokePcallBack::draw(JPABaseEmitter*, JPABaseParticle*) {
    /* Nonmatching */
}

/* 8007C380-8007C3B0       .text draw__22dPa_selectTexEcallBackFP14JPABaseEmitter */
void dPa_selectTexEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007C3B0-8007C420       .text __ct__19dPa_simpleEcallBackFv */
dPa_simpleEcallBack::dPa_simpleEcallBack() {
    mpBaseEmitter = NULL;
    mCount = 0;
}

/* 8007C45C-8007C460       .text __ct__16dPa_simpleData_cFv */
dPa_simpleData_c::dPa_simpleData_c() {
    /* Nonmatching */
}

/* 8007C460-8007C618       .text executeAfter__19dPa_simpleEcallBackFP14JPABaseEmitter */
void dPa_simpleEcallBack::executeAfter(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007C674-8007C6EC       .text draw__19dPa_simpleEcallBackFP14JPABaseEmitter */
void dPa_simpleEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007C6EC-8007C774       .text create__19dPa_simpleEcallBackFP17JPAEmitterManagerUsUc */
void dPa_simpleEcallBack::create(JPAEmitterManager*, unsigned short, unsigned char) {
    /* Nonmatching */
}

/* 8007C774-8007C840       .text createEmitter__19dPa_simpleEcallBackFP17JPAEmitterManager */
void dPa_simpleEcallBack::createEmitter(JPAEmitterManager*) {
    /* Nonmatching */
}

/* 8007C840-8007C8C4       .text set__19dPa_simpleEcallBackFPC4cXyzUcRC8_GXColorRC8_GXColori */
void dPa_simpleEcallBack::set(const cXyz*, unsigned char, const _GXColor&, const _GXColor&, int) {
    /* Nonmatching */
}

/* 8007C8C4-8007C8E8       .text execute__17dPa_windPcallBackFP14JPABaseEmitterP15JPABaseParticle */
void dPa_windPcallBack::execute(JPABaseEmitter*, JPABaseParticle*) {
    /* Nonmatching */
}

/* 8007C8E8-8007C9A4       .text __ct__13dPa_control_cFv */
dPa_control_c::dPa_control_c() {
    /* Nonmatching */
}

/* 8007CA28-8007CA30       .text getRM_ID__13dPa_control_cFUs */
void dPa_control_c::getRM_ID(unsigned short) {
    /* Nonmatching */
}

/* 8007CA30-8007CA98       .text swapFrameBufferTexture__13dPa_control_cFv */
void dPa_control_c::swapFrameBufferTexture() {
    /* Nonmatching */
}

/* 8007CA98-8007CCC8       .text createCommon__13dPa_control_cFPCv */
void dPa_control_c::createCommon(const void*) {
    /* Nonmatching */
}

/* 8007CCC8-8007CE50       .text createRoomScene__13dPa_control_cFPCv */
void dPa_control_c::createRoomScene(const void*) {
    /* Nonmatching */
}

/* 8007CE50-8007CF20       .text readScene__13dPa_control_cFUcPP21mDoDvdThd_toMainRam_c */
void dPa_control_c::readScene(unsigned char, mDoDvdThd_toMainRam_c**) {
    /* Nonmatching */
}

/* 8007CF20-8007CF98       .text createScene__13dPa_control_cFPCv */
void dPa_control_c::createScene(const void*) {
    /* Nonmatching */
}

/* 8007CF98-8007D028       .text removeRoomScene__13dPa_control_cFv */
void dPa_control_c::removeRoomScene() {
    /* Nonmatching */
}

/* 8007D028-8007D094       .text removeScene__13dPa_control_cFv */
void dPa_control_c::removeScene() {
    /* Nonmatching */
}

/* 8007D094-8007D0DC       .text calc3D__13dPa_control_cFv */
void dPa_control_c::calc3D() {
    /* Nonmatching */
}

/* 8007D0DC-8007D124       .text calc2D__13dPa_control_cFv */
void dPa_control_c::calc2D() {
    /* Nonmatching */
}

/* 8007D124-8007D16C       .text calcMenu__13dPa_control_cFv */
void dPa_control_c::calcMenu() {
    /* Nonmatching */
}

/* 8007D16C-8007D1DC       .text draw__13dPa_control_cFP11JPADrawInfoUc */
void dPa_control_c::draw(JPADrawInfo*, unsigned char) {
    /* Nonmatching */
}

/* 8007D1DC-8007D378       .text set__13dPa_control_cFUcUsPC4cXyzPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyz */
JPABaseEmitter* dPa_control_c::set(unsigned char, unsigned short, const cXyz*, const csXyz*, const cXyz*, unsigned char, dPa_levelEcallBack*, signed char, const _GXColor*, const _GXColor*, const cXyz*) {
    /* Nonmatching */
}

/* 8007D378-8007D414       .text setBombSmoke__13dPa_control_cFUsPC4cXyzPC5csXyzPC4cXyzUc */
JPABaseEmitter* dPa_control_c::setBombSmoke(unsigned short, const cXyz*, const csXyz*, const cXyz*, unsigned char) {
    /* Nonmatching */
}

/* 8007D414-8007D998       .text setSimpleLand__13dPa_control_cFiPC4cXyzPC5csXyzfffP12dKy_tevstr_cPii */
void dPa_control_c::setSimpleLand(int, const cXyz*, const csXyz*, float, float, float, dKy_tevstr_c*, int*, int) {
    /* Nonmatching */
}

/* 8007D998-8007DA58       .text setSimpleLand__13dPa_control_cFR13cBgS_PolyInfoPC4cXyzPC5csXyzfffP12dKy_tevstr_cPii */
void dPa_control_c::setSimpleLand(cBgS_PolyInfo&, const cXyz*, const csXyz*, float, float, float, dKy_tevstr_c*, int*, int) {
    /* Nonmatching */
}

/* 8007DA58-8007DAA8       .text checkAtrCodeEffect__13dPa_control_cFi */
void dPa_control_c::checkAtrCodeEffect(int) {
    /* Nonmatching */
}

/* 8007DAA8-8007DB34       .text setNormalStripes__13dPa_control_cFUsPC4cXyzPC5csXyzPC4cXyzUcUs */
void dPa_control_c::setNormalStripes(unsigned short, const cXyz*, const csXyz*, const cXyz*, unsigned char, unsigned short) {
    /* Nonmatching */
}

/* 8007DB34-8007DBC4       .text newSimple__13dPa_control_cFUsUc */
void dPa_control_c::newSimple(unsigned short, unsigned char) {
    /* Nonmatching */
}

/* 8007DBC4-8007DC30       .text setSimple__13dPa_control_cFUsPC4cXyzUcRC8_GXColorRC8_GXColori */
void dPa_control_c::setSimple(unsigned short, const cXyz*, unsigned char, const _GXColor&, const _GXColor&, int) {
    /* Nonmatching */
}

/* 8007DC30-8007DC6C       .text getSimple__13dPa_control_cFUs */
void dPa_control_c::getSimple(unsigned short) {
    /* Nonmatching */
}

/* 8007DC6C-8007DC94       .text setup__19dPa_rippleEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_rippleEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007DC94-8007DCE4       .text end__19dPa_rippleEcallBackFv */
void dPa_rippleEcallBack::end() {
    /* Nonmatching */
}

/* 8007DCE4-8007DD70       .text execute__19dPa_rippleEcallBackFP14JPABaseEmitter */
void dPa_rippleEcallBack::execute(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007DD70-8007DDA8       .text draw__19dPa_rippleEcallBackFP14JPABaseEmitter */
void dPa_rippleEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007DDA8-8007DDB4       .text setup__25dPa_singleRippleEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_singleRippleEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007DDB4-8007DE00       .text execute__25dPa_singleRippleEcallBackFP14JPABaseEmitter */
void dPa_singleRippleEcallBack::execute(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007DE00-8007DE38       .text draw__25dPa_singleRippleEcallBackFP14JPABaseEmitter */
void dPa_singleRippleEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007DE38-8007DE94       .text execute__19dPa_ripplePcallBackFP14JPABaseEmitterP15JPABaseParticle */
void dPa_ripplePcallBack::execute(JPABaseEmitter*, JPABaseParticle*) {
    /* Nonmatching */
}

/* 8007DE94-8007E254       .text draw__19dPa_ripplePcallBackFP14JPABaseEmitterP15JPABaseParticle */
void dPa_ripplePcallBack::draw(JPABaseEmitter*, JPABaseParticle*) {
    /* Nonmatching */
}

/* 8007E254-8007E288       .text setup__17dPa_waveEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_waveEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007E288-8007E2BC       .text remove__17dPa_waveEcallBackFv */
void dPa_waveEcallBack::remove() {
    /* Nonmatching */
}

/* 8007E2BC-8007E484       .text executeAfter__17dPa_waveEcallBackFP14JPABaseEmitter */
void dPa_waveEcallBack::executeAfter(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007E484-8007E804       .text draw__17dPa_waveEcallBackFP14JPABaseEmitter */
void dPa_waveEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007E804-8007E81C       .text setup__19dPa_splashEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_splashEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007E81C-8007E850       .text remove__19dPa_splashEcallBackFv */
void dPa_splashEcallBack::remove() {
    /* Nonmatching */
}

/* 8007E850-8007E9B8       .text execute__19dPa_splashEcallBackFP14JPABaseEmitter */
void dPa_splashEcallBack::execute(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007E9B8-8007E9D4       .text setup__22dPa_cutTurnEcallBack_cFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_cutTurnEcallBack_c::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007E9D4-8007EAC4       .text executeAfter__22dPa_cutTurnEcallBack_cFP14JPABaseEmitter */
void dPa_cutTurnEcallBack_c::executeAfter(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007EAC4-8007EB00       .text end__22dPa_cutTurnEcallBack_cFv */
void dPa_cutTurnEcallBack_c::end() {
    /* Nonmatching */
}

/* 8007EB00-8007F028       .text draw__20dPa_stripesEcallBackFP14JPABaseEmitter */
void dPa_stripesEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007F028-8007F05C       .text draw__19dPa_kageroEcallBackFP14JPABaseEmitter */
void dPa_kageroEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007F05C-8007F108       .text execute__22dPa_bombSmokeEcallBackFP14JPABaseEmitter */
void dPa_bombSmokeEcallBack::execute(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007F108-8007F1A8       .text getMaxWaterY__18dPa_trackEcallBackFPQ29JGeometry8TVec3<f> */
void dPa_trackEcallBack::getMaxWaterY(JGeometry::TVec3<float>*) {
    /* Nonmatching */
}

/* 8007F1A8-8007F1C0       .text setup__18dPa_trackEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_trackEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007F1C0-8007F1F4       .text remove__18dPa_trackEcallBackFv */
void dPa_trackEcallBack::remove() {
    /* Nonmatching */
}

/* 8007F1F4-8007F3BC       .text execute__18dPa_trackEcallBackFP14JPABaseEmitter */
void dPa_trackEcallBack::execute(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007F3BC-8007F62C       .text draw__18dPa_trackEcallBackFP14JPABaseEmitter */
void dPa_trackEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007F704-8007F708       .text setup__22dPa_bombSmokeEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_bombSmokeEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007F7D0-8007F7D4       .text setup__20dPa_stripesEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_stripesEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007FAE8-8007FAEC       .text setup__22dPa_selectTexEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_selectTexEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}

/* 8007FF78-8007FFA8       .text draw__21dPa_setColorEcallBackFP14JPABaseEmitter */
void dPa_setColorEcallBack::draw(JPABaseEmitter*) {
    /* Nonmatching */
}

/* 8007FFA8-8007FFAC       .text setup__21dPa_setColorEcallBackFP14JPABaseEmitterPC4cXyzPC5csXyzSc */
void dPa_setColorEcallBack::setup(JPABaseEmitter*, const cXyz*, const csXyz*, signed char) {
    /* Nonmatching */
}
