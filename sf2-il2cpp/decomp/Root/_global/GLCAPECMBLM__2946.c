// TypeDefIndex 2946
// Namespace: 
// public class GLCAPECMBLM
// Fields:
//   public HDBPKHNKOGI AHCMAIOOIKM; // 0x10
//   public GameObject PBDIPLHDHHD; // 0x18
//   public OLKKAIFGGAK BCKBBGCOMJD; // 0x20
//   public CocosAnimation OLLOKPHMOBP; // 0x28
//   public bool DHHAIGLEBHH; // 0x30

// ===== public void JEFMDBBCIOB()  [RVA 0x3491794]
// GLCAPECMBLM$$JEFMDBBCIOB @ RVA 0x3491794

void GLCAPECMBLM__JEFMDBBCIOB(GLCAPECMBLM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OLKKAIFGGAK_o *pOVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  PNGKLCHKPEO_o *pPVar5;
  HDBPKHNKOGI_o *pHVar6;
  NJPBHDMCLIN_o *pNVar7;
  CPAJCJHOLEJ_o *pCVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04568422 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04568422 = 1;
  }
  pOVar2 = (__this->fields).BCKBBGCOMJD;
  if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
    iVar1 = OLKKAIFGGAK__MALPGCALHNK(pOVar2,(MethodInfo *)0x0);
    pOVar2 = (__this->fields).BCKBBGCOMJD;
    if (((pOVar2 != (OLKKAIFGGAK_o *)0x0) &&
        (pHVar6 = (__this->fields).AHCMAIOOIKM, pHVar6 != (HDBPKHNKOGI_o *)0x0)) &&
       (pUVar3 = (__this->fields).PBDIPLHDHHD, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      pNVar7 = (pOVar2->fields).FNEAAHOOHAA;
      pCVar8 = (pHVar6->fields).PKNGDBGLNEO;
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      fVar9 = EOAOCPLIKOI__BJIALNCIMAL((MethodInfo *)0x0);
      pHVar6 = (__this->fields).AHCMAIOOIKM;
      if (pHVar6 != (HDBPKHNKOGI_o *)0x0) {
        fVar10 = (pHVar6->fields).AHODAMCBIHA.fields.x;
        value.fields.y = EOAOCPLIKOI__BJIALNCIMAL((MethodInfo *)0x0);
        pHVar6 = (__this->fields).AHCMAIOOIKM;
        if ((pHVar6 != (HDBPKHNKOGI_o *)0x0) &&
           (pUVar3 = (__this->fields).PBDIPLHDHHD, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          fVar11 = (pHVar6->fields).AHODAMCBIHA.fields.y;
          __this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UVar12 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
            if (pCVar8 == (CPAJCJHOLEJ_o *)0x0) {
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                value.fields.y = value.fields.y * -fVar11;
                value.fields.x = fVar9 * (float)iVar1 * fVar10;
                value.fields.z = UVar12.fields.z;
                UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
                pUVar3 = (__this->fields).PBDIPLHDHHD;
                if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                  pHVar6 = (__this->fields).AHCMAIOOIKM;
                  if ((pHVar6 != (HDBPKHNKOGI_o *)0x0) &&
                     (pPVar5 = (pHVar6->fields).NDOAINJDMIH, pPVar5 != (PNGKLCHKPEO_o *)0x0)) {
                    value_00.fields.x =
                         (*(pPVar5->klass->vtable)._7_KILOIOEILFL.methodPtr)
                                   (pPVar5,pNVar7,(pPVar5->klass->vtable)._7_KILOIOEILFL.method);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      value_00.fields.y = value.fields.y;
                      value_00.fields.z = UVar12.fields.z;
                      UnityEngine_Transform__set_localPosition(pUVar4,value_00,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
            else if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              UVar12.fields.y = value.fields.y * (float)-iVar1 * fVar11;
              UVar12.fields.x = fVar9 * fVar10;
              UnityEngine_Transform__set_localScale(pUVar4,UVar12,(MethodInfo *)0x0);
              pHVar6 = (__this->fields).AHCMAIOOIKM;
              if ((pHVar6 != (HDBPKHNKOGI_o *)0x0) &&
                 (pCVar8 = (pHVar6->fields).PKNGDBGLNEO, pCVar8 != (CPAJCJHOLEJ_o *)0x0)) {
                    /* try { // try from 035918b0 to 036919cb has its CatchHandler @ 035918b0
                       catch() { ... } // from try @ 035918b0 with catch @ 035918b0
                       catch() { ... } // from try @ 03591a2c with catch @ 035918b0
                       catch() { ... } // from try @ 03591a48 with catch @ 035918b0
                       catch() { ... } // from try @ 03591aa8 with catch @ 035918b0
                       catch() { ... } // from try @ 03591ad8 with catch @ 035918b0
                       catch() { ... } // from try @ 03591b0c with catch @ 035918b0 */
                CPAJCJHOLEJ__LLCONNGHGKD
                          (pCVar8,(__this->fields).BCKBBGCOMJD,(__this->fields).PBDIPLHDHHD,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(OLKKAIFGGAK INNMCFJNEAE, HDBPKHNKOGI GBCNCHFKMCD, GameObject EDGBEPNPCDB, CocosAnimation CFNFIOONALH)  [RVA 0x349194C]
// GLCAPECMBLM$$.ctor @ RVA 0x349194C

void GLCAPECMBLM___ctor(GLCAPECMBLM_o *__this,OLKKAIFGGAK_o *INNMCFJNEAE,HDBPKHNKOGI_o *GBCNCHFKMCD,
                       UnityEngine_GameObject_o *EDGBEPNPCDB,CocosAnimation_o *CFNFIOONALH,
                       MethodInfo *method)

{
  OLKKAIFGGAK_o **ppOVar1;
  UnityEngine_GameObject_o **ppUVar2;
  CocosAnimation_o **ppCVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).BCKBBGCOMJD;
  *ppOVar1 = INNMCFJNEAE;
  thunk_FUN_01c20e04(ppOVar1,INNMCFJNEAE);
  (__this->fields).AHCMAIOOIKM = GBCNCHFKMCD;
  thunk_FUN_01c20e04(&__this->fields,GBCNCHFKMCD);
  ppUVar2 = &(__this->fields).PBDIPLHDHHD;
  *ppUVar2 = EDGBEPNPCDB;
  thunk_FUN_01c20e04(ppUVar2,EDGBEPNPCDB);
  ppCVar3 = &(__this->fields).OLLOKPHMOBP;
  *ppCVar3 = CFNFIOONALH;
  thunk_FUN_01c20e04(ppCVar3,CFNFIOONALH);
  (__this->fields).DHHAIGLEBHH = false;
  return;
}


// ===== public void MHENCNPBING()  [RVA 0x34919C8]
// GLCAPECMBLM$$MHENCNPBING @ RVA 0x34919C8

void GLCAPECMBLM__MHENCNPBING(GLCAPECMBLM_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  OLKKAIFGGAK_o *__this_02;
  HDBPKHNKOGI_o *pHVar3;
  float fVar4;
  
                    /* try { // try from 035919cc to 036919d3 has its CatchHandler @ 03591ac4 */
  __this_00 = (__this->fields).PBDIPLHDHHD;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 035919e4 to 036919eb has its CatchHandler @ 03591ac0 */
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pHVar3 = (__this->fields).AHCMAIOOIKM;
    if ((pHVar3 != (HDBPKHNKOGI_o *)0x0) &&
       (__this_02 = (__this->fields).BCKBBGCOMJD, __this_02 != (OLKKAIFGGAK_o *)0x0)) {
      fVar4 = (pHVar3->fields).NDGEJKPCAPM;
                    /* try { // try from 03591a04 to 03691a0b has its CatchHandler @ 03591a34 */
      iVar2 = OLKKAIFGGAK__MALPGCALHNK(__this_02,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        auVar1._4_8_ = 0;
        auVar1._0_4_ = fVar4 * (float)iVar2;
                    /* try { // try from 03591a24 to 03691a2b has its CatchHandler @ 03591abc */
                    /* try { // try from 03591a2c to 03691a43 has its CatchHandler @ 035918b0 */
        UnityEngine_Transform__set_localEulerAngles
                  (__this_01,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a04 with catch @ 03591a34
                        */
  FUN_01bab8c8();
}

