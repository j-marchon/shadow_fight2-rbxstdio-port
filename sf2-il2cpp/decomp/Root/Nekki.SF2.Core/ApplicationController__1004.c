// TypeDefIndex 1004
// Namespace: Nekki.SF2.Core
// public class ApplicationController : MonoBehaviour, EJIGANJGBCA
// Fields:
//   private Nullable<float> LNLNEPIGAEG; // 0x20
//   private Action<bool> IBOHNFCIIJH; // 0x28
//   private Action JFLLFHGJIFN; // 0x30
//   private Action OGPGPGLOOPG; // 0x38
//   private Action DPJDFFKNGOH; // 0x40
//   private static Action<bool> PDDBOJJODKK; // 0x0
//   private static Action PJEOKMGNMNF; // 0x8
//   private static Action FODFHMAHOPA; // 0x10
//   private static bool <NMINHOHPEAD>k__BackingField; // 0x18
//   private static bool <NHDGMLJJAOA>k__BackingField; // 0x19
//   private static int <PGODJKMFNOJ>k__BackingField; // 0x1C
//   private static float <OCOFJPFONAH>k__BackingField; // 0x20
//   private static float <IOBAFBHOHHC>k__BackingField; // 0x24
//   private static float <KEDJGPDGOLI>k__BackingField; // 0x28
//   private static float <DBKGHANCIKN>k__BackingField; // 0x2C
//   private static ApplicationController KNOHKIKFEBL; // 0x30

// ===== public Nullable<float> TimeSinceResume()  [RVA 0x30BEEAC]
// Nekki.SF2.Core.ApplicationController$$TimeSinceResume @ RVA 0x30BEEAC

System_Nullable_float__o
Nekki_SF2_Core_ApplicationController__TimeSinceResume
          (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  float fVar1;
  System_Nullable_float__Fields local_18;
  
  if ((DAT_04566265 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    DAT_04566265 = 1;
  }
  if (((__this->fields).LNLNEPIGAEG.fields.hasValue == false) ||
     (fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0),
     (__this->fields).LNLNEPIGAEG.fields.hasValue == false)) {
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value = 0.0;
  }
  else {
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_18,fVar1 - (__this->fields).LNLNEPIGAEG.fields.value
               ,Method_System_Nullable<float>__ctor__);
  }
  return (System_Nullable_float__o)local_18;
}


// ===== public static float get_MaxTotalMemory()  [RVA 0x30BEF40]
// Nekki.SF2.Core.ApplicationController$$get_MaxTotalMemory @ RVA 0x30BEF40

float Nekki_SF2_Core_ApplicationController__get_MaxTotalMemory(MethodInfo *method)

{
  if ((DAT_04566266 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566266 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_OCOFJPFONAH_k__BackingField;
}


// ===== public static float get_MaxMonoMemory()  [RVA 0x30BEF88]
// Nekki.SF2.Core.ApplicationController$$get_MaxMonoMemory @ RVA 0x30BEF88

float Nekki_SF2_Core_ApplicationController__get_MaxMonoMemory(MethodInfo *method)

{
  if ((DAT_04566267 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566267 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_IOBAFBHOHHC_k__BackingField;
}


// ===== private void OnApplicationQuit()  [RVA 0x30BEFD0]
// Nekki.SF2.Core.ApplicationController$$OnApplicationQuit @ RVA 0x30BEFD0

void Nekki_SF2_Core_ApplicationController__OnApplicationQuit
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar1;
  
  if ((DAT_04566268 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566268 = 1;
    method = extraout_x1;
  }
  pSVar1 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    method = extraout_x1_00;
  }
  if (DAT_045662da == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo,method);
    DAT_045662da = '\x01';
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NMINHOHPEAD_k__BackingField = true;
  pSVar1 = (__this->fields).DPJDFFKNGOH;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031bf070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== public static ApplicationController get_Instance()  [RVA 0x30BF080]
// Nekki.SF2.Core.ApplicationController$$get_Instance @ RVA 0x30BF080

Nekki_SF2_Core_ApplicationController_o *
Nekki_SF2_Core_ApplicationController__get_Instance(MethodInfo *method)

{
  if ((DAT_04566269 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566269 = 1;
  }
  Nekki_SF2_Core_ApplicationController__Init(method);
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->KNOHKIKFEBL;
}


// ===== private void OnApplicationPause(bool FHBJKENCMHP)  [RVA 0x30BF2D0]
// Nekki.SF2.Core.ApplicationController$$OnApplicationPause @ RVA 0x30BF2D0

void Nekki_SF2_Core_ApplicationController__OnApplicationPause
               (Nekki_SF2_Core_ApplicationController_o *__this,bool FHBJKENCMHP,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 extraout_x0;
  KKEKKPIDGBK_o *pKVar4;
  VirtualInvokeData *pVVar5;
  undefined8 extraout_x1;
  System_Action_bool__o *pSVar6;
  System_Action_o *pSVar7;
  KKEKKPIDGBK_c *pKVar8;
  ulong uVar9;
  int32_t *piVar10;
  Il2CppObject *message;
  float value;
  undefined1 auVar11 [16];
  System_Nullable_float__Fields local_38;
  
                    /* try { // try from 031bf308 to 032bf32f has its CatchHandler @ 031bf3e8 */
  if ((DAT_0456626a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
                    /* try { // try from 031bf334 to 032bf347 has its CatchHandler @ 031bf3e4 */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
                    /* try { // try from 031bf348 to 032bf3d3 has its CatchHandler @ 031bf128 */
    FUN_01bab630(&StringLiteral_3017/*"ApplicationController.Pause"*/);
    FUN_01bab630(&StringLiteral_3018/*"ApplicationController.Resume"*/);
    DAT_0456626a = 1;
  }
  puVar1 = &StringLiteral_3017/*"ApplicationController.Pause"*/;
  if (!FHBJKENCMHP) {
    puVar1 = &StringLiteral_3018/*"ApplicationController.Resume"*/;
  }
  message = (Il2CppObject *)*puVar1;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  if (DAT_045662db == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_045662db = '\x01';
  }
  pSVar6 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PDDBOJJODKK;
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NHDGMLJJAOA_k__BackingField =
       FHBJKENCMHP;
  if (pSVar6 != (System_Action_bool__o *)0x0) {
                    /* try { // try from 031bf3d4 to 032bf3d7 has its CatchHandler @ 031bf3e0 */
                    /* try { // try from 031bf3d8 to 032bf403 has its CatchHandler @ 031bf128 */
    (*(code *)(pSVar6->fields).super.super.invoke_impl)
              ((pSVar6->fields).super.super.method_code,FHBJKENCMHP,
               (pSVar6->fields).super.super.method);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bf3d4 with catch @ 031bf3e0
                        */
  if (FHBJKENCMHP) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bf334 with catch @ 031bf3e4
                        */
    pSVar7 = (__this->fields).JFLLFHGJIFN;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bf308 with catch @ 031bf3e8
                        */
    if (pSVar7 != (System_Action_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bf2ac with catch @ 031bf3ec
                        */
                    /* try { // try from 031bf404 to 032bf407 has its CatchHandler @ 031bf414 */
                    /* WARNING: Could not recover jumptable at 0x031bf408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar7->fields).super.super.invoke_impl)
                ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
      return;
    }
  }
  else {
    value = UnityEngine_Time__get_time((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031bf404 with catch @ 031bf414 */
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_38,value,Method_System_Nullable<float>__ctor__);
    auVar11._8_8_ = extraout_x1;
    auVar11._0_8_ = extraout_x0;
    pSVar7 = (__this->fields).OGPGPGLOOPG;
    (__this->fields).LNLNEPIGAEG.fields = local_38;
    if (pSVar7 != (System_Action_o *)0x0) {
      auVar11 = (*(code *)(pSVar7->fields).super.super.invoke_impl)
                          ((pSVar7->fields).super.super.method_code,
                           (pSVar7->fields).super.super.method);
    }
                    /* try { // try from 031bf44c to 032bf473 has its CatchHandler @ 031bf488 */
    Nekki_SF2_Core_ApplicationController__RandomizeObscuredVars(auVar11._0_8_,auVar11._8_8_);
    if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
    if (bVar3) {
                    /* try { // try from 031bf474 to 032bf47f has its CatchHandler @ 031bf128 */
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031bf480 to 032bf487 has its CatchHandler @ 031bf488 */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031bf44c with catch @ 031bf488
                       catch(type#2 @ 00000000) { ... } // from try @ 031bf480 with catch @ 031bf488
                        */
      pKVar4 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pKVar4 == (KKEKKPIDGBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pKVar8 = pKVar4->klass;
      uVar2._0_1_ = (pKVar8->_2).rank;
      uVar2._1_1_ = (pKVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pKVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
            pVVar5 = pKVar8->vtable + (*piVar10 + 4);
            goto LAB_031bf4ec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KKEKKPIDGBK_TypeInfo,4);
LAB_031bf4ec:
      (*pVVar5->methodPtr)(pKVar4,6,0,1,pVVar5->method);
    }
  }
  return;
}


// ===== private static void NCKDEMAOKFK(bool CJNHFNHJHPE)  [RVA 0x30BF82C]
// Nekki.SF2.Core.ApplicationController$$NCKDEMAOKFK @ RVA 0x30BF82C

void Nekki_SF2_Core_ApplicationController__NCKDEMAOKFK(bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456626b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456626b = 1;
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NMINHOHPEAD_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public static void UnityCrash(ForcedCrashCategory GKLKEKDMALD)  [RVA 0x30BF87C]
// Nekki.SF2.Core.ApplicationController$$UnityCrash @ RVA 0x30BF87C

void Nekki_SF2_Core_ApplicationController__UnityCrash(int32_t GKLKEKDMALD,MethodInfo *method)

{
  UnityEngine_Diagnostics_Utils__ForceCrash(GKLKEKDMALD,(MethodInfo *)0x0);
  return;
}


// ===== private void Update()  [RVA 0x30BF884]
// Nekki.SF2.Core.ApplicationController$$Update @ RVA 0x30BF884

void Nekki_SF2_Core_ApplicationController__Update
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((DAT_0456626c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456626c = 1;
  }
  pSVar1 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031bf8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== public void add_OnApplicationFocusEvent(Action<bool> CJNHFNHJHPE)  [RVA 0x30BF8E8]
// Nekki.SF2.Core.ApplicationController$$add_OnApplicationFocusEvent @ RVA 0x30BF8E8

void Nekki_SF2_Core_ApplicationController__add_OnApplicationFocusEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_bool__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o **ppSVar6;
  System_Action_bool__o *a;
  
  if ((DAT_0456626d & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_0456626d = 1;
  }
  ppSVar6 = &(__this->fields).IBOHNFCIIJH;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void add_OnApplicationPauseEvent(Action CJNHFNHJHPE)  [RVA 0x30BF998]
// Nekki.SF2.Core.ApplicationController$$add_OnApplicationPauseEvent @ RVA 0x30BF998

void Nekki_SF2_Core_ApplicationController__add_OnApplicationPauseEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456626e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456626e = 1;
  }
  ppSVar4 = &(__this->fields).JFLLFHGJIFN;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public static void ClearTextureCache()  [RVA 0x30BFA34]
// Nekki.SF2.Core.ApplicationController$$ClearTextureCache @ RVA 0x30BFA34

void Nekki_SF2_Core_ApplicationController__ClearTextureCache(MethodInfo *method)

{
  BCAEBMNHBAN_o *__this;
  
  if ((DAT_0456626f & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_0456626f = 1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AMHFFFODDOC__NDNPGAKJLHM((MethodInfo *)0x0);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NGCBNMBJMOE__NDNPGAKJLHM((MethodInfo *)0x0);
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EEMAEBIOIKM__NDNPGAKJLHM((MethodInfo *)0x0);
  __this = BCAEBMNHBAN__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (BCAEBMNHBAN_o *)0x0) {
    BCAEBMNHBAN__NDNPGAKJLHM(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static IEnumerator GLICNAGNCEN(float NJIGMDDFANO)  [RVA 0x30BFAF4]
// Nekki.SF2.Core.ApplicationController$$GLICNAGNCEN @ RVA 0x30BFAF4

System_Collections_IEnumerator_o *
Nekki_SF2_Core_ApplicationController__GLICNAGNCEN(float NJIGMDDFANO,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566270 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_TypeInfo);
    DAT_04566270 = 1;
  }
  __this = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  *(float *)&__this[2].klass = NJIGMDDFANO;
  return (System_Collections_IEnumerator_o *)__this;
}


// ===== private void JBHLBNEBFAM()  [RVA 0x30BFB84]
// Nekki.SF2.Core.ApplicationController$$JBHLBNEBFAM @ RVA 0x30BFB84

void Nekki_SF2_Core_ApplicationController__JBHLBNEBFAM
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *NONPLOOOOAG;
  
  if ((DAT_04566271 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2798);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2799);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04566271 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2798,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2799,(MethodInfo *)0x0);
  NONPLOOOOAG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo);
  }
  Nekki_Utils_RaidBetaLogger__LoggedQuit(NONPLOOOOAG,(System_Exception_o *)0x0,(MethodInfo *)0x0);
  return;
}


// ===== public void remove_OnApplicationPauseEvent(Action CJNHFNHJHPE)  [RVA 0x30BFC70]
// Nekki.SF2.Core.ApplicationController$$remove_OnApplicationPauseEvent @ RVA 0x30BFC70

void Nekki_SF2_Core_ApplicationController__remove_OnApplicationPauseEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566272 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566272 = 1;
  }
  ppSVar4 = &(__this->fields).JFLLFHGJIFN;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static void HLFCNJBPHAB(float CJNHFNHJHPE)  [RVA 0x30BFD0C]
// Nekki.SF2.Core.ApplicationController$$HLFCNJBPHAB @ RVA 0x30BFD0C

void Nekki_SF2_Core_ApplicationController__HLFCNJBPHAB(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566273 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566273 = 1;
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_DBKGHANCIKN_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public static void remove_OnUpdate(Action CJNHFNHJHPE)  [RVA 0x30BFD60]
// Nekki.SF2.Core.ApplicationController$$remove_OnUpdate @ RVA 0x30BFD60

void Nekki_SF2_Core_ApplicationController__remove_OnUpdate
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04566274 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566274 = 1;
  }
  source = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF
                          ,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public static void Init()  [RVA 0x30BF0CC]
// Nekki.SF2.Core.ApplicationController$$Init @ RVA 0x30BF0CC

void Nekki_SF2_Core_ApplicationController__Init(MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  UnityEngine_Object_o *target;
  System_Action_o *BLMFLPJJMPF;
  Nekki_SF2_Core_ApplicationController_o **ppNVar2;
  Nekki_SF2_Core_ApplicationController_o *pNVar3;
  
  if ((DAT_04566275 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_ApplicationController_JBHLBNEBFAM__);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2800);
                    /* try { // try from 031bf128 to 032bf2ab has its CatchHandler @ 031bf128
                       catch() { ... } // from try @ 031bf128 with catch @ 031bf128
                       catch() { ... } // from try @ 031bf348 with catch @ 031bf128
                       catch() { ... } // from try @ 031bf3d8 with catch @ 031bf128
                       catch() { ... } // from try @ 031bf474 with catch @ 031bf128 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2801);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ApplicationController>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566275 = 1;
  }
  pNVar3 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->KNOHKIKFEBL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2800,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2801,(MethodInfo *)0x0)
    ;
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)target,name,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar3 = (Nekki_SF2_Core_ApplicationController_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<ApplicationController>__);
      ppNVar2 = &Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->KNOHKIKFEBL;
      *ppNVar2 = pNVar3;
      thunk_FUN_01c20e04(ppNVar2,pNVar3);
      BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      CodeStage_AntiCheat_Detectors_ObscuredCheatingDetector__StartDetection
                (BLMFLPJJMPF,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 031bf2ac to 032bf2d3 has its CatchHandler @ 031bf3ec */
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static float get_LastTotalMemory()  [RVA 0x30BFE1C]
// Nekki.SF2.Core.ApplicationController$$get_LastTotalMemory @ RVA 0x30BFE1C

float Nekki_SF2_Core_ApplicationController__get_LastTotalMemory(MethodInfo *method)

{
  if ((DAT_04566276 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566276 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_KEDJGPDGOLI_k__BackingField;
}


// ===== private static void JPJJELDAJGK(float CJNHFNHJHPE)  [RVA 0x30BFE64]
// Nekki.SF2.Core.ApplicationController$$JPJJELDAJGK @ RVA 0x30BFE64

void Nekki_SF2_Core_ApplicationController__JPJJELDAJGK(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566277 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566277 = 1;
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_IOBAFBHOHHC_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public static void remove_OnQuit(Action CJNHFNHJHPE)  [RVA 0x30BFEB8]
// Nekki.SF2.Core.ApplicationController$$remove_OnQuit @ RVA 0x30BFEB8

void Nekki_SF2_Core_ApplicationController__remove_OnQuit
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_04566278 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566278 = 1;
  }
  source = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA
                          ,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static void FHPJJAOICHM(int CJNHFNHJHPE)  [RVA 0x30BFF74]
// Nekki.SF2.Core.ApplicationController$$FHPJJAOICHM @ RVA 0x30BFF74

void Nekki_SF2_Core_ApplicationController__FHPJJAOICHM(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566279 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566279 = 1;
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_PGODJKMFNOJ_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== private void OnApplicationFocus(bool GFCLNCOALIK)  [RVA 0x30BFFC0]
// Nekki.SF2.Core.ApplicationController$$OnApplicationFocus @ RVA 0x30BFFC0

void Nekki_SF2_Core_ApplicationController__OnApplicationFocus
               (Nekki_SF2_Core_ApplicationController_o *__this,bool GFCLNCOALIK,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  
  pSVar1 = (__this->fields).IBOHNFCIIJH;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031bffd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,GFCLNCOALIK,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== private static void JJDKKLNONDB(float CJNHFNHJHPE)  [RVA 0x30BFFE0]
// Nekki.SF2.Core.ApplicationController$$JJDKKLNONDB @ RVA 0x30BFFE0

void Nekki_SF2_Core_ApplicationController__JJDKKLNONDB(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456627a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456627a = 1;
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_KEDJGPDGOLI_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public static void Crash(ApplicationController.FPGMJMNICBB OEABPLMGMJI)  [RVA 0x30C0034]
// Nekki.SF2.Core.ApplicationController$$Crash @ RVA 0x30C0034

void Nekki_SF2_Core_ApplicationController__Crash(int32_t OEABPLMGMJI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_AndroidJavaObject_o *pUVar3;
  UnityEngine_AndroidJavaObject_o *pUVar4;
  UnityEngine_AndroidJavaObject_o *__this;
  undefined8 uVar5;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_x1;
  long lVar7;
  System_Object_array *pSVar8;
  
  if ((DAT_0456627b & 1) == 0) {
    FUN_01bab630(&UnityEngine_AndroidJavaClass_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_AndroidJavaObject_CallStatic<AndroidJavaObject>__);
    FUN_01bab630(&Method_UnityEngine_AndroidJavaObject_Call<AndroidJavaObject>__);
    FUN_01bab630(&UnityEngine_AndroidJavaObject_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<byte[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<byte[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<byte[]>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_18620/*"getUncaughtExceptionHandler"*/);
    FUN_01bab630(&StringLiteral_19245/*"java.lang.String"*/);
    FUN_01bab630(&StringLiteral_19240/*"java.lang.Exception"*/);
    FUN_01bab630(&StringLiteral_13704/*"This is a test crash, ignore."*/);
    FUN_01bab630(&StringLiteral_16424/*"android.os.Looper"*/);
    FUN_01bab630(&StringLiteral_21674/*"uncaughtException"*/);
    FUN_01bab630(&StringLiteral_18613/*"getThread"*/);
    FUN_01bab630(&StringLiteral_18515/*"getMainLooper"*/);
    DAT_0456627b = 1;
    method = extraout_x1;
  }
  if (OEABPLMGMJI == 1) {
    pSVar8 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_031c0550;
    if (StringLiteral_13704/*"This is a test crash, ignore."*/ == (Il2CppObject *)0x0) {
      pIVar6 = (Il2CppObject *)0x0;
    }
    else {
      lVar2 = thunk_FUN_01bda71c(StringLiteral_13704/*"This is a test crash, ignore."*/,(((pSVar8->obj).klass)->_1).element_class);
      pIVar6 = StringLiteral_13704/*"This is a test crash, ignore."*/;
      if (lVar2 == 0) goto LAB_031c0480;
    }
    if ((int)pSVar8->max_length == 0) goto LAB_031c047c;
    pSVar8->m_Items[0] = pIVar6;
    thunk_FUN_01c20e04();
    pUVar3 = (UnityEngine_AndroidJavaObject_o *)
             thunk_FUN_01bda818(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor(pUVar3,StringLiteral_19245/*"java.lang.String"*/,pSVar8,(MethodInfo *)0x0);
    pSVar8 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (pSVar8 != (System_Object_array *)0x0) {
      if ((pUVar3 != (UnityEngine_AndroidJavaObject_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pUVar3,(((pSVar8->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_031c0480;
      if ((int)pSVar8->max_length == 0) goto LAB_031c047c;
      pSVar8->m_Items[0] = (Il2CppObject *)pUVar3;
      thunk_FUN_01c20e04(pSVar8->m_Items,pUVar3);
      pUVar3 = (UnityEngine_AndroidJavaObject_o *)
               thunk_FUN_01bda818(UnityEngine_AndroidJavaObject_TypeInfo);
      UnityEngine_AndroidJavaObject___ctor(pUVar3,StringLiteral_19240/*"java.lang.Exception"*/,pSVar8,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_AndroidJavaObject_o *)
               thunk_FUN_01bda818(UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor
                ((UnityEngine_AndroidJavaClass_o *)pUVar4,StringLiteral_16424/*"android.os.Looper"*/,(MethodInfo *)0x0);
      lVar2 = Method_System_Array_Empty<object>__;
      lVar7 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
      if (lVar7 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<object>__);
        lVar7 = *(long *)(lVar2 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if (pUVar4 != (UnityEngine_AndroidJavaObject_o *)0x0) {
        pUVar4 = (UnityEngine_AndroidJavaObject_o *)
                 UnityEngine_AndroidJavaObject__CallStatic<object>
                           (pUVar4,StringLiteral_18515/*"getMainLooper"*/,
                            (System_Object_array *)**(undefined8 **)(lVar2 + 0xb8),
                            Method_UnityEngine_AndroidJavaObject_CallStatic<AndroidJavaObject>__);
        lVar2 = Method_System_Array_Empty<object>__;
        lVar7 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
        if (lVar7 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<object>__);
          lVar7 = *(long *)(lVar2 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if (pUVar4 != (UnityEngine_AndroidJavaObject_o *)0x0) {
          pUVar4 = (UnityEngine_AndroidJavaObject_o *)
                   UnityEngine_AndroidJavaObject__Call<object>
                             (pUVar4,StringLiteral_18613/*"getThread"*/,
                              (System_Object_array *)**(undefined8 **)(lVar2 + 0xb8),
                              Method_UnityEngine_AndroidJavaObject_Call<AndroidJavaObject>__);
          lVar2 = Method_System_Array_Empty<object>__;
          lVar7 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
          if (lVar7 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<object>__);
            lVar7 = *(long *)(lVar2 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01b81620();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          if (pUVar4 != (UnityEngine_AndroidJavaObject_o *)0x0) {
            __this = (UnityEngine_AndroidJavaObject_o *)
                     UnityEngine_AndroidJavaObject__Call<object>
                               (pUVar4,StringLiteral_18620/*"getUncaughtExceptionHandler"*/,
                                (System_Object_array *)**(undefined8 **)(lVar2 + 0xb8),
                                Method_UnityEngine_AndroidJavaObject_Call<AndroidJavaObject>__);
            pSVar8 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
            if (pSVar8 != (System_Object_array *)0x0) {
              lVar2 = thunk_FUN_01bda71c(pUVar4,(((pSVar8->obj).klass)->_1).element_class);
              if (lVar2 != 0) {
                if ((int)pSVar8->max_length != 0) {
                  pSVar8->m_Items[0] = (Il2CppObject *)pUVar4;
                  thunk_FUN_01c20e04(pSVar8->m_Items,pUVar4);
                  if ((pUVar3 != (UnityEngine_AndroidJavaObject_o *)0x0) &&
                     (lVar2 = thunk_FUN_01bda71c(pUVar3,(((pSVar8->obj).klass)->_1).element_class),
                     lVar2 == 0)) goto LAB_031c0480;
                  if (1 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[1] = (Il2CppObject *)pUVar3;
                    thunk_FUN_01c20e04(pSVar8->m_Items + 1,pUVar3);
                    if (__this != (UnityEngine_AndroidJavaObject_o *)0x0) {
                      UnityEngine_AndroidJavaObject__Call
                                (__this,StringLiteral_21674/*"uncaughtException"*/,pSVar8,(MethodInfo *)0x0);
                      return;
                    }
                    goto LAB_031c0550;
                  }
                }
LAB_031c047c:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
LAB_031c0480:
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
          }
        }
      }
    }
  }
  else {
    if (OEABPLMGMJI != 0) {
      return;
    }
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<byte[]>_TypeInfo,method);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<byte[]>__ctor__);
    pIVar6 = (Il2CppObject *)FUN_01bab718(byte___TypeInfo,0x20000000);
    lVar2 = Method_System_Collections_Generic_List<byte[]>_Add__;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      while (pSVar8 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar8->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar8->m_Items[(int)uVar1] = pIVar6;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,pIVar6,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 031c0530 to 032c06a3 has its CatchHandler @ 031c0530
                       catch() { ... } // from try @ 031c0530 with catch @ 031c0530
                       catch() { ... } // from try @ 031c0744 with catch @ 031c0530
                       catch() { ... } // from try @ 031c0800 with catch @ 031c0530
                       catch() { ... } // from try @ 031c08b4 with catch @ 031c0530 */
        pIVar6 = (Il2CppObject *)FUN_01bab718(byte___TypeInfo,0x20000000);
        lVar2 = Method_System_Collections_Generic_List<byte[]>_Add__;
        pSVar8 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
      }
    }
  }
LAB_031c0550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void RandomizeObscuredVars()  [RVA 0x30BF51C]
// Nekki.SF2.Core.ApplicationController$$RandomizeObscuredVars @ RVA 0x30BF51C

void Nekki_SF2_Core_ApplicationController__RandomizeObscuredVars
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  DEKKGJNMFEB_o *__this_02;
  long lVar2;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_03;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *__this_04;
  
  if ((DAT_0456627c & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_0456627c = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__RandomizeObscuredVars((MethodInfo *)0x0);
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LDHBHPILNMA__RandomizeObscuredVars((MethodInfo *)0x0);
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCMLPCKBHPN__RandomizeObscuredVars((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_04 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__RandomizeObscuredVars(__this_04,(MethodInfo *)0x0);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
    DOPEEDABNEK__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__RandomizeObscuredVars(__this_01,(MethodInfo *)0x0);
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 != (DEKKGJNMFEB_o *)0x0) {
        DEKKGJNMFEB__RandomizeObscuredVars(__this_02,(MethodInfo *)0x0);
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Fight_FightScene_o *)0x0) {
          Nekki_SF2_GUI_Fight_FightScene__RandomizeObscuredVars
                    ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__RandomizeObscuredVars
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
          Nekki_SF2_GUI_Profile_ProfileScene__RandomizeObscuredVars
                    ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
        }
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IKMOIKFPPBF__RandomizeObscuredVars((MethodInfo *)0x0);
        bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
        if ((pNVar3 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
           (__this_03 = (pNVar3->fields)._screen,
           __this_03 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0)) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__RandomizeObscuredVars
                    (__this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void NGPGKHCKBFM(float CJNHFNHJHPE)  [RVA 0x30C0554]
// Nekki.SF2.Core.ApplicationController$$NGPGKHCKBFM @ RVA 0x30C0554

void Nekki_SF2_Core_ApplicationController__NGPGKHCKBFM(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456627d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456627d = 1;
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_OCOFJPFONAH_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public static void remove_OnPause(Action<bool> CJNHFNHJHPE)  [RVA 0x30C05A8]
// Nekki.SF2.Core.ApplicationController$$remove_OnPause @ RVA 0x30C05A8

void Nekki_SF2_Core_ApplicationController__remove_OnPause
               (System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o *source;
  
  if ((DAT_0456627e & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456627e = 1;
  }
  source = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PDDBOJJODKK;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)
             FUN_01c07368(Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields,lVar4,source)
    ;
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void LogBuildStats()  [RVA 0x30C0674]
// Nekki.SF2.Core.ApplicationController$$LogBuildStats @ RVA 0x30C0674

void Nekki_SF2_Core_ApplicationController__LogBuildStats(MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  CFGLKHFFEKA_o *pCVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  int32_t local_6c;
  int32_t local_68;
  int32_t local_64;
  
                    /* try { // try from 031c06a4 to 032c06cb has its CatchHandler @ 031c0814 */
  if ((DAT_0456627f & 1) == 0) {
    FUN_01bab630(&UnityEngine_ApplicationInstallMode_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2802);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2803);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2804);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2805);
                    /* try { // try from 031c0700 to 032c072b has its CatchHandler @ 031c0810 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2806);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2807);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2808);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2809);
                    /* try { // try from 031c0730 to 032c0743 has its CatchHandler @ 031c080c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2810);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2811);
                    /* try { // try from 031c0744 to 032c07fb has its CatchHandler @ 031c0530 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2812);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2813);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2814);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2815);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2816);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2817);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2818);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2819);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2820);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2821);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2822);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2823);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2824);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2825);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2826);
                    /* try { // try from 031c07fc to 032c07ff has its CatchHandler @ 031c0808 */
                    /* try { // try from 031c0800 to 032c082b has its CatchHandler @ 031c0530 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2827);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c07fc with catch @ 031c0808
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c0730 with catch @ 031c080c
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2828);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c0700 with catch @ 031c0810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c06a4 with catch @ 031c0814
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2829);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2830);
                    /* try { // try from 031c082c to 032c082f has its CatchHandler @ 031c083c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2831);
                    /* catch() { ... } // from try @ 031c082c with catch @ 031c083c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2832);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2833);
                    /* try { // try from 031c084c to 032c08b3 has its CatchHandler @ 031c08c8 */
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FBEOLJNHGNE_TypeInfo);
    FUN_01bab630(&HMCJKEJGGCB_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_0456627f = 1;
  }
                    /* try { // try from 031c08b4 to 032c08bf has its CatchHandler @ 031c0530 */
                    /* try { // try from 031c08c0 to 032c08c7 has its CatchHandler @ 031c08c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c084c with catch @ 031c08c8
                       catch(type#2 @ 00000000) { ... } // from try @ 031c08c0 with catch @ 031c08c8
                        */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2802,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2803,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo);
  }
  pSVar5 = UnityEngine_Application__get_identifier((MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_00);
                    /* catch() { ... } // from try @ 031c09a8 with catch @ 031c0974
                       catch() { ... } // from try @ 031c09cc with catch @ 031c0974 */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2804,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031c09a0 to 032c09a7 has its CatchHandler @ 031c09b8 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2805,(MethodInfo *)0x0);
                    /* try { // try from 031c09a8 to 032c09c7 has its CatchHandler @ 031c0974 */
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c09a0 with catch @ 031c09b8
                        */
  local_64 = UnityEngine_Application__get_installMode((MethodInfo *)0x0);
                    /* try { // try from 031c09c8 to 032c09cb has its CatchHandler @ 031c09e4 */
                    /* try { // try from 031c09cc to 032c09ef has its CatchHandler @ 031c0974 */
  pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(UnityEngine_ApplicationInstallMode_TypeInfo,&local_64)
  ;
  pSVar4 = System_String__Format(pSVar4,pIVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031c09c8 with catch @ 031c09e4 */
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_01);
                    /* try { // try from 031c09f0 to 032c09f7 has its CatchHandler @ 031c09f8 */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c09f0 with catch @ 031c09f8
                        */
                    /* catch() { ... } // from try @ 031c0a30 with catch @ 031c09fc
                       catch() { ... } // from try @ 031c0a54 with catch @ 031c09fc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2806,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2807,(MethodInfo *)0x0);
                    /* try { // try from 031c0a28 to 032c0a2f has its CatchHandler @ 031c0a40 */
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 031c0a30 to 032c0a4f has its CatchHandler @ 031c09fc */
  pSVar5 = UnityEngine_Application__get_installerName((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c0a28 with catch @ 031c0a40
                        */
  pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_02);
                    /* try { // try from 031c0a50 to 032c0a53 has its CatchHandler @ 031c0a6c */
                    /* try { // try from 031c0a54 to 032c0a77 has its CatchHandler @ 031c09fc */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2808,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031c0a50 with catch @ 031c0a6c */
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 031c0a78 to 032c0a7f has its CatchHandler @ 031c0a80 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c0a78 with catch @ 031c0a80
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2809,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  pCVar7 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  pSVar4 = System_String__Format(pSVar4,(Il2CppObject *)pCVar7,(MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_03);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2810,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2811,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pCVar7 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
  pSVar4 = System_String__Format(pSVar4,(Il2CppObject *)pCVar7,(MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_04);
  bVar1 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2812,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2813,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    local_68 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(HMCJKEJGGCB_TypeInfo,&local_68);
    pSVar4 = System_String__Format(pSVar4,pIVar6,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_05);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2814,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2815,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    local_6c = GBCDMPDHIDJ__GLOCKHPEPMA((MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    pSVar4 = System_String__Format(pSVar4,pIVar6,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_06);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2816,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2817,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar5 = GBCDMPDHIDJ__NPPOFAFBKLO((MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_07);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2818,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2819,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar5 = GBCDMPDHIDJ__FCPGCOCNLMK((MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_08);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2820,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2821,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    local_70[0] = 1;
    pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_70);
    pSVar4 = System_String__Format(pSVar4,pIVar6,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_09);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2822,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2823,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if ((FBEOLJNHGNE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FBEOLJNHGNE_TypeInfo);
    }
    pSVar5 = FBEOLJNHGNE__ILPOBELFLKP((MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_10);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2824,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2825,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar5 = FBEOLJNHGNE__GCDIIEICOCG((MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_11);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2826,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2827,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar5 = FBEOLJNHGNE__CFMHIHDJEDJ((MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_12);
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2828,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2829,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  pSVar5 = EOAOCPLIKOI__MHLLAKBCAHD((MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_13);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2830,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2831,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  local_74[0] = UnityEngine_Debug__get_isDebugBuild((MethodInfo *)0x0);
  pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_74);
  pSVar4 = System_String__Format(pSVar4,pIVar6,(MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_14);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2832,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2833,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__Log(pSVar4,method_15);
  return;
}


// ===== public static void add_OnQuit(Action CJNHFNHJHPE)  [RVA 0x30C11CC]
// Nekki.SF2.Core.ApplicationController$$add_OnQuit @ RVA 0x30C11CC

void Nekki_SF2_Core_ApplicationController__add_OnQuit
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04566280 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566280 = 1;
  }
  a = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->FODFHMAHOPA
                          ,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnApplicationResumeEvent(Action CJNHFNHJHPE)  [RVA 0x30C1288]
// Nekki.SF2.Core.ApplicationController$$remove_OnApplicationResumeEvent @ RVA 0x30C1288

void Nekki_SF2_Core_ApplicationController__remove_OnApplicationResumeEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566281 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566281 = 1;
  }
  ppSVar4 = &(__this->fields).OGPGPGLOOPG;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public static void add_OnPause(Action<bool> CJNHFNHJHPE)  [RVA 0x30C1324]
// Nekki.SF2.Core.ApplicationController$$add_OnPause @ RVA 0x30C1324

void Nekki_SF2_Core_ApplicationController__add_OnPause
               (System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o *a;
  
  if ((DAT_04566282 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566282 = 1;
  }
  a = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PDDBOJJODKK;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)
             FUN_01c07368(Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void .ctor()  [RVA 0x30C13F0]
// Nekki.SF2.Core.ApplicationController$$.ctor @ RVA 0x30C13F0

void Nekki_SF2_Core_ApplicationController___ctor
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool IsInEditor()  [RVA 0x30C13F8]
// Nekki.SF2.Core.ApplicationController$$IsInEditor @ RVA 0x30C13F8

bool Nekki_SF2_Core_ApplicationController__IsInEditor(MethodInfo *method)

{
  return false;
}


// ===== public static void Quit()  [RVA 0x30C1400]
// Nekki.SF2.Core.ApplicationController$$Quit @ RVA 0x30C1400

void Nekki_SF2_Core_ApplicationController__Quit(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  
  if ((DAT_04566283 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_10);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2834);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2835);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2836);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566283 = 1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = Nekki_Utils_RaidBetaLogger__UserId((MethodInfo *)0x0);
  pSVar5 = StringLiteral_1/*""*/;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar5 = pSVar2;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar5,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2834,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2835,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(pSVar2,pSVar5,(MethodInfo *)0x0);
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2836,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_10,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat(pSVar2,pSVar5,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__Quit((MethodInfo *)0x0);
  return;
}


// ===== public static int get_LowMemoryCount()  [RVA 0x30C160C]
// Nekki.SF2.Core.ApplicationController$$get_LowMemoryCount @ RVA 0x30C160C

int32_t Nekki_SF2_Core_ApplicationController__get_LowMemoryCount(MethodInfo *method)

{
  if ((DAT_04566284 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566284 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_PGODJKMFNOJ_k__BackingField;
}


// ===== public void add_OnApplicationQuitEvent(Action CJNHFNHJHPE)  [RVA 0x30C1654]
// Nekki.SF2.Core.ApplicationController$$add_OnApplicationQuitEvent @ RVA 0x30C1654

void Nekki_SF2_Core_ApplicationController__add_OnApplicationQuitEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566285 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566285 = 1;
  }
  ppSVar4 = &(__this->fields).DPJDFFKNGOH;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void LogFromJava(string NONPLOOOOAG)  [RVA 0x30C16F0]
// Nekki.SF2.Core.ApplicationController$$LogFromJava @ RVA 0x30C16F0

void Nekki_SF2_Core_ApplicationController__LogFromJava
               (Nekki_SF2_Core_ApplicationController_o *__this,System_String_o *NONPLOOOOAG,
               MethodInfo *method)

{
  Nekki_SF2_Core_ApplicationController__Log(NONPLOOOOAG,(MethodInfo *)NONPLOOOOAG);
  return;
}


// ===== public void add_OnApplicationResumeEvent(Action CJNHFNHJHPE)  [RVA 0x30C16F8]
// Nekki.SF2.Core.ApplicationController$$add_OnApplicationResumeEvent @ RVA 0x30C16F8

void Nekki_SF2_Core_ApplicationController__add_OnApplicationResumeEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566286 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566286 = 1;
  }
  ppSVar4 = &(__this->fields).OGPGPGLOOPG;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public static float get_LastMonoMemory()  [RVA 0x30C1794]
// Nekki.SF2.Core.ApplicationController$$get_LastMonoMemory @ RVA 0x30C1794

float Nekki_SF2_Core_ApplicationController__get_LastMonoMemory(MethodInfo *method)

{
  if ((DAT_04566287 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_04566287 = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_DBKGHANCIKN_k__BackingField;
}


// ===== private void Awake()  [RVA 0x30C17DC]
// Nekki.SF2.Core.ApplicationController$$Awake @ RVA 0x30C17DC

void Nekki_SF2_Core_ApplicationController__Awake
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566288 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04566288 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  UnityEngine_Application__set_targetFrameRate(0x3c,(MethodInfo *)0x0);
  return;
}


// ===== public static void WaitAndQuit(float NJIGMDDFANO)  [RVA 0x30C1830]
// Nekki.SF2.Core.ApplicationController$$WaitAndQuit @ RVA 0x30C1830

void Nekki_SF2_Core_ApplicationController__WaitAndQuit(float NJIGMDDFANO,MethodInfo *method)

{
  MethodInfo *method_00;
  System_Collections_IEnumerator_o *pSVar1;
  Il2CppMethodPointer pIVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((DAT_04566289 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566289 = 1;
  }
  method_00 = (MethodInfo *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar1 = Nekki_SF2_Core_ApplicationController__GLICNAGNCEN(NJIGMDDFANO,method_00);
  if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = method_00->methodPointer;
  uVar3 = (ulong)*(ushort *)(pIVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(pIVar2 + 0xb0) + 8);
    do {
      if (*(PBAKFOBIHEG_c **)(piVar4 + -2) == PBAKFOBIHEG_TypeInfo) {
        pIVar2 = pIVar2 + (long)*piVar4 * 0x10 + 0x138;
        goto LAB_031c18d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  pIVar2 = (Il2CppMethodPointer)FUN_01b81914(method_00,PBAKFOBIHEG_TypeInfo,0);
LAB_031c18d0:
                    /* WARNING: Could not recover jumptable at 0x031c18ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)pIVar2)(method_00,pSVar1,1,*(undefined8 *)(pIVar2 + 8));
  return;
}


// ===== public static bool get_IsPaused()  [RVA 0x30C18F4]
// Nekki.SF2.Core.ApplicationController$$get_IsPaused @ RVA 0x30C18F4

bool Nekki_SF2_Core_ApplicationController__get_IsPaused(MethodInfo *method)

{
  if ((DAT_0456628a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456628a = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NHDGMLJJAOA_k__BackingField;
}


// ===== public void remove_OnApplicationQuitEvent(Action CJNHFNHJHPE)  [RVA 0x30C193C]
// Nekki.SF2.Core.ApplicationController$$remove_OnApplicationQuitEvent @ RVA 0x30C193C

void Nekki_SF2_Core_ApplicationController__remove_OnApplicationQuitEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_0456628b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456628b = 1;
  }
  ppSVar4 = &(__this->fields).DPJDFFKNGOH;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnApplicationFocusEvent(Action<bool> CJNHFNHJHPE)  [RVA 0x30C19D8]
// Nekki.SF2.Core.ApplicationController$$remove_OnApplicationFocusEvent @ RVA 0x30C19D8

void Nekki_SF2_Core_ApplicationController__remove_OnApplicationFocusEvent
               (Nekki_SF2_Core_ApplicationController_o *__this,System_Action_bool__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o **ppSVar6;
  System_Action_bool__o *source;
  
  if ((DAT_0456628c & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_0456628c = 1;
  }
  ppSVar6 = &(__this->fields).IBOHNFCIIJH;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void add_OnUpdate(Action CJNHFNHJHPE)  [RVA 0x30C1A88]
// Nekki.SF2.Core.ApplicationController$$add_OnUpdate @ RVA 0x30C1A88

void Nekki_SF2_Core_ApplicationController__add_OnUpdate
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_0456628d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456628d = 1;
  }
  a = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->PJEOKMGNMNF
                          ,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private static void ANBAOGCJNFB(bool CJNHFNHJHPE)  [RVA 0x30C1B44]
// Nekki.SF2.Core.ApplicationController$$ANBAOGCJNFB @ RVA 0x30C1B44

void Nekki_SF2_Core_ApplicationController__ANBAOGCJNFB(bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456628e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456628e = 1;
  }
  Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NHDGMLJJAOA_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public static bool get_IsOnQuit()  [RVA 0x30C1B94]
// Nekki.SF2.Core.ApplicationController$$get_IsOnQuit @ RVA 0x30C1B94

bool Nekki_SF2_Core_ApplicationController__get_IsOnQuit(MethodInfo *method)

{
  if ((DAT_0456628f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    DAT_0456628f = 1;
  }
  return Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->_NMINHOHPEAD_k__BackingField;
}


// ===== public static void Log(string JLNPKGGFFDD)  [RVA 0x30C1144]
// Nekki.SF2.Core.ApplicationController$$Log @ RVA 0x30C1144

void Nekki_SF2_Core_ApplicationController__Log(System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566290 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04566290 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log((Il2CppObject *)JLNPKGGFFDD,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}

