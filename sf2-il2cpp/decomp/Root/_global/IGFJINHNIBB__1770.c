// TypeDefIndex 1770
// Namespace: 
// public class IGFJINHNIBB
// Fields:
//   private const float DJPMFAIOOEK = 1;
//   private const float EGHOKIABEHI = 30;
//   private LabelButton <OBENPAJAMCP>k__BackingField; // 0x10
//   private List<CELDGLHBCAM> CHAJPCCNGAI; // 0x18
//   private int COMINNDAGMN; // 0x20
//   private float NHKGELJJNEJ; // 0x24
//   private bool <DGMNNLJEMIB>k__BackingField; // 0x28

// ===== public void LLCONNGHGKD()  [RVA 0x31EA748]
// IGFJINHNIBB$$LLCONNGHGKD @ RVA 0x31EA748

void IGFJINHNIBB__LLCONNGHGKD(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  int32_t index;
  bool bVar1;
  System_Collections_Generic_List_CELDGLHBCAM__o *__this_00;
  CELDGLHBCAM_o *LPMKBIKGPIM;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566d8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__);
    DAT_04566d8f = 1;
    method = extraout_x1;
  }
  bVar1 = IGFJINHNIBB__KGGGJNCEPLF(__this,method);
  if ((!bVar1) && ((__this->fields)._DGMNNLJEMIB_k__BackingField == false)) {
    __this_00 = (__this->fields).CHAJPCCNGAI;
    if (__this_00 == (System_Collections_Generic_List_CELDGLHBCAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    index = (__this->fields).COMINNDAGMN;
    if (index < (__this_00->fields)._size) {
      method_00 = Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__;
      LPMKBIKGPIM = (CELDGLHBCAM_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__);
      IGFJINHNIBB__LLCONNGHGKD(__this,LPMKBIKGPIM,method_00);
      return;
    }
    (__this->fields)._DGMNNLJEMIB_k__BackingField = true;
  }
  return;
}


// ===== private void NLFEEBKDJKF()  [RVA 0x31EA8B4]
// IGFJINHNIBB$$NLFEEBKDJKF @ RVA 0x31EA8B4

void IGFJINHNIBB__NLFEEBKDJKF(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 032ea8c8 to 033ea8cf has its CatchHandler @ 032ea9ec */
  if ((DAT_04566d90 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d90 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032ea8e8 to 033ea8ef has its CatchHandler @ 032eaa00 */
  bVar1 = IGFJINHNIBB__CAINGGNGNFO(__this,method);
  if (bVar1) {
    (__this->fields).NHKGELJJNEJ = 0.0;
  }
  else {
    fVar5 = (__this->fields).NHKGELJJNEJ;
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
                    /* try { // try from 032ea908 to 033ea90f has its CatchHandler @ 032ea9f4 */
    fVar4 = (float)NEON_fminnm(fVar4,0x3f800000);
    fVar5 = fVar5 + fVar4;
                    /* try { // try from 032ea910 to 033ea9c3 has its CatchHandler @ 032ea6e0 */
    (__this->fields).NHKGELJJNEJ = fVar5;
    if (30.0 <= fVar5) {
      pLVar3 = (__this->fields)._OBENPAJAMCP_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        pLVar3 = (__this->fields)._OBENPAJAMCP_k__BackingField;
        if ((pLVar3 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          pLVar3 = (__this->fields)._OBENPAJAMCP_k__BackingField;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== public bool FLMJCIFPFCN()  [RVA 0x31EABB8]
// IGFJINHNIBB$$FLMJCIFPFCN @ RVA 0x31EABB8

bool IGFJINHNIBB__FLMJCIFPFCN(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  return (__this->fields)._DGMNNLJEMIB_k__BackingField;
}


// ===== public bool KGGGJNCEPLF()  [RVA 0x31EA7E8]
// IGFJINHNIBB$$KGGGJNCEPLF @ RVA 0x31EA7E8

bool IGFJINHNIBB__KGGGJNCEPLF(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CELDGLHBCAM__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566d91 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Count__);
    DAT_04566d91 = 1;
  }
  pSVar1 = (__this->fields).CHAJPCCNGAI;
  if (pSVar1 != (System_Collections_Generic_List_CELDGLHBCAM__o *)0x0) {
                    /* try { // try from 032ea824 to 033ea82b has its CatchHandler @ 032eaa24 */
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void NAJGLKNGBLM(LabelButton CJNHFNHJHPE)  [RVA 0x31EABC0]
// IGFJINHNIBB$$NAJGLKNGBLM @ RVA 0x31EABC0

void IGFJINHNIBB__NAJGLKNGBLM(IGFJINHNIBB_o *__this,LabelButton_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OBENPAJAMCP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x31EABC8]
// IGFJINHNIBB$$.ctor @ RVA 0x31EABC8

void IGFJINHNIBB___ctor(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CELDGLHBCAM__o *__this_00;
  System_Collections_Generic_List_CELDGLHBCAM__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CELDGLHBCAM>_TypeInfo);
    DAT_04566d92 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_CELDGLHBCAM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CELDGLHBCAM>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<CELDGLHBCAM>__ctor__);
  ppSVar1 = &(__this->fields).CHAJPCCNGAI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void BKMHHDEDLJC(bool CJNHFNHJHPE)  [RVA 0x31EAC50]
// IGFJINHNIBB$$BKMHHDEDLJC @ RVA 0x31EAC50

void IGFJINHNIBB__BKMHHDEDLJC(IGFJINHNIBB_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DGMNNLJEMIB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void LLCONNGHGKD(CELDGLHBCAM LPMKBIKGPIM)  [RVA 0x31EA838]
// IGFJINHNIBB$$LLCONNGHGKD @ RVA 0x31EA838

void IGFJINHNIBB__LLCONNGHGKD(IGFJINHNIBB_o *__this,CELDGLHBCAM_o *LPMKBIKGPIM,MethodInfo *method)

{
  MethodInfo *method_00;
  CELDGLHBCAM_c *pCVar1;
  
  if (LPMKBIKGPIM == (CELDGLHBCAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032ea844 to 033ea84b has its CatchHandler @ 032eaa18 */
  if ((LPMKBIKGPIM->fields)._NKCCFJEBFAN_k__BackingField == false) {
    (*(LPMKBIKGPIM->klass->vtable)._4_IELLEFEFFJD.methodPtr)
              (LPMKBIKGPIM,(LPMKBIKGPIM->klass->vtable)._4_IELLEFEFFJD.method);
  }
                    /* try { // try from 032ea864 to 033ea86b has its CatchHandler @ 032eaa20 */
  pCVar1 = LPMKBIKGPIM->klass;
  if ((LPMKBIKGPIM->fields)._DGMNNLJEMIB_k__BackingField != false) {
    (*(pCVar1->vtable)._6_EABJNHKPJOM.methodPtr)(LPMKBIKGPIM,(pCVar1->vtable)._6_EABJNHKPJOM.method)
    ;
    (__this->fields).COMINNDAGMN = (__this->fields).COMINNDAGMN + 1;
    (__this->fields).NHKGELJJNEJ = 0.0;
                    /* try { // try from 032ea888 to 033ea88f has its CatchHandler @ 032eaa08 */
    return;
  }
  (*(pCVar1->vtable)._5_LLCONNGHGKD.methodPtr)(LPMKBIKGPIM,(pCVar1->vtable)._5_LLCONNGHGKD.method);
                    /* try { // try from 032ea8a4 to 033ea8ab has its CatchHandler @ 032ea9fc */
  IGFJINHNIBB__NLFEEBKDJKF(__this,method_00);
  return;
}


// ===== public void DABBOPGIBBB(CELDGLHBCAM LPMKBIKGPIM)  [RVA 0x31EAC5C]
// IGFJINHNIBB$$DABBOPGIBBB @ RVA 0x31EAC5C

void IGFJINHNIBB__DABBOPGIBBB(IGFJINHNIBB_o *__this,CELDGLHBCAM_o *LPMKBIKGPIM,MethodInfo *method)

{
  if ((DAT_04566d93 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<CELDGLHBCAM>__);
    DAT_04566d93 = 1;
  }
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).CHAJPCCNGAI,
             (Il2CppObject *)LPMKBIKGPIM,Method_DJNBJHPDKDP_OFNFOGHFDML<CELDGLHBCAM>__);
  return;
}


// ===== public LabelButton DEJAOKJOKPE()  [RVA 0x31EACB4]
// IGFJINHNIBB$$DEJAOKJOKPE @ RVA 0x31EACB4

LabelButton_o * IGFJINHNIBB__DEJAOKJOKPE(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  return (__this->fields)._OBENPAJAMCP_k__BackingField;
}


// ===== private bool CAINGGNGNFO()  [RVA 0x31EA9B0]
// IGFJINHNIBB$$CAINGGNGNFO @ RVA 0x31EA9B0

bool IGFJINHNIBB__CAINGGNGNFO(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  undefined1 uVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  System_Collections_Generic_List_CELDGLHBCAM__o *pSVar4;
  Il2CppObject *pIVar5;
  System_Type_o *pSVar6;
  System_Type_o *pSVar7;
  MethodInfo *extraout_x1;
  VideoPlayerController_o *pVVar8;
  
                    /* try { // try from 032ea9c4 to 033ea9c7 has its CatchHandler @ 032eaa1c */
                    /* try { // try from 032ea9c8 to 033ea9cb has its CatchHandler @ 032eaa14 */
  if ((DAT_04566d94 & 1) == 0) {
                    /* try { // try from 032ea9cc to 033ea9cf has its CatchHandler @ 032eaa10 */
                    /* try { // try from 032ea9d0 to 033ea9d3 has its CatchHandler @ 032ea6e0 */
                    /* try { // try from 032ea9d4 to 033ea9d7 has its CatchHandler @ 032eaa0c */
    FUN_01bab630(&AGKAPHHMGKD_var);
                    /* try { // try from 032ea9d8 to 033ea9db has its CatchHandler @ 032eaa04 */
                    /* try { // try from 032ea9dc to 033ea9df has its CatchHandler @ 032ea9f8 */
                    /* try { // try from 032ea9e0 to 033ea9e3 has its CatchHandler @ 032ea9f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__);
                    /* try { // try from 032ea9e4 to 033ea9e7 has its CatchHandler @ 032ea9e8 */
                    /* catch() { ... } // from try @ 032ea9e4 with catch @ 032ea9e8
                       try { // try from 032ea9e8 to 033eaa3b has its CatchHandler @ 032ea6e0 */
                    /* catch() { ... } // from try @ 032ea8c8 with catch @ 032ea9ec */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 032ea9e0 with catch @ 032ea9f0 */
                    /* catch() { ... } // from try @ 032ea908 with catch @ 032ea9f4 */
                    /* catch() { ... } // from try @ 032ea9dc with catch @ 032ea9f8 */
    FUN_01bab630(&System_Type_TypeInfo);
                    /* catch() { ... } // from try @ 032ea8a4 with catch @ 032ea9fc */
                    /* catch() { ... } // from try @ 032ea8e8 with catch @ 032eaa00 */
                    /* catch() { ... } // from try @ 032ea9d8 with catch @ 032eaa04 */
    FUN_01bab630(&StringLiteral_3020/*"ApplicationStartAccountLoginNotify"*/);
                    /* catch() { ... } // from try @ 032ea888 with catch @ 032eaa08 */
                    /* catch() { ... } // from try @ 032ea9d4 with catch @ 032eaa0c */
                    /* catch() { ... } // from try @ 032ea9cc with catch @ 032eaa10 */
    FUN_01bab630(&StringLiteral_12095/*"ShowGDPR"*/);
                    /* catch() { ... } // from try @ 032ea9c8 with catch @ 032eaa14 */
                    /* catch() { ... } // from try @ 032ea844 with catch @ 032eaa18 */
    DAT_04566d94 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 032ea9c4 with catch @ 032eaa1c */
                    /* catch() { ... } // from try @ 032ea864 with catch @ 032eaa20 */
                    /* catch() { ... } // from try @ 032ea824 with catch @ 032eaa24 */
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo,method);
                    /* try { // try from 032eaa3c to 033eaa3f has its CatchHandler @ 032eaa68 */
                    /* try { // try from 032eaa40 to 033eaa77 has its CatchHandler @ 032ea6e0 */
    DAT_04566bb5 = '\x01';
  }
  pVVar8 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 032eaa3c with catch @ 032eaa68 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pVVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 032eaa78 to 033eaa7f has its CatchHandler @ 032eaa94 */
  if (bVar1) {
                    /* try { // try from 032eaa80 to 033eaa8b has its CatchHandler @ 032ea6e0 */
    if (DAT_04566bb5 == '\0') {
                    /* try { // try from 032eaa8c to 033eaa93 has its CatchHandler @ 032eaa94 */
      FUN_01bab630(&VideoPlayerController_TypeInfo);
                    /* catch() { ... } // from try @ 032eaa78 with catch @ 032eaa94
                       catch() { ... } // from try @ 032eaa8c with catch @ 032eaa94 */
      DAT_04566bb5 = '\x01';
    }
    pVVar8 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    if (pVVar8 == (VideoPlayerController_o *)0x0) goto LAB_032eabb4;
    if ((pVVar8->fields)._LFALNJINAPO_k__BackingField != false) {
      return true;
    }
  }
  pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 032eaab8 to 033ec5af has its CatchHandler @ 032eaab8
                       catch() { ... } // from try @ 032eaab8 with catch @ 032eaab8
                       catch() { ... } // from try @ 032ec62c with catch @ 032eaab8
                       catch() { ... } // from try @ 032eca3c with catch @ 032eaab8
                       catch() { ... } // from try @ 032eca78 with catch @ 032eaab8
                       catch() { ... } // from try @ 032ecaa8 with catch @ 032eaab8 */
  if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((pNVar3->fields).CurrentQuestName,StringLiteral_12095/*"ShowGDPR"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = System_String__op_Equality
                        ((pNVar3->fields).CurrentQuestName,StringLiteral_3020/*"ApplicationStartAccountLoginNotify"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      pSVar4 = (__this->fields).CHAJPCCNGAI;
      if (pSVar4 != (System_Collections_Generic_List_CELDGLHBCAM__o *)0x0) {
        pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,
                            (__this->fields).COMINNDAGMN,
                            Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__);
        if (pIVar5 == (Il2CppObject *)0x0) {
          return false;
        }
        pSVar4 = (__this->fields).CHAJPCCNGAI;
        if ((pSVar4 != (System_Collections_Generic_List_CELDGLHBCAM__o *)0x0) &&
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,
                                (__this->fields).COMINNDAGMN,
                                Method_System_Collections_Generic_List<CELDGLHBCAM>_get_Item__),
           pIVar5 != (Il2CppObject *)0x0)) {
          pSVar6 = System_Object__GetType(pIVar5,(MethodInfo *)0x0);
          handle = AGKAPHHMGKD_var;
          if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Type_TypeInfo);
          }
          pSVar7 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
          if (pSVar6 != (System_Type_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032eabb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (*(pSVar6->klass->vtable)._21_IsSubclassOf.methodPtr)
                              (pSVar6,pSVar7,(pSVar6->klass->vtable)._21_IsSubclassOf.method);
            return (bool)uVar2;
          }
        }
      }
    }
  }
LAB_032eabb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x31EACBC]
// IGFJINHNIBB$$DGLJCGNHLIG @ RVA 0x31EACBC

void IGFJINHNIBB__DGLJCGNHLIG(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_CELDGLHBCAM__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566d95 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>_Clear__);
    DAT_04566d95 = 1;
  }
  pSVar1 = (__this->fields).CHAJPCCNGAI;
  (__this->fields)._DGMNNLJEMIB_k__BackingField = false;
  (__this->fields).COMINNDAGMN = 0;
  (__this->fields).NHKGELJJNEJ = 0.0;
  if (pSVar1 != (System_Collections_Generic_List_CELDGLHBCAM__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

