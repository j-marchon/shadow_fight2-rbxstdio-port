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
    FUN_01bab630(&StringLiteral_3017);
    FUN_01bab630(&StringLiteral_3018);
    DAT_0456626a = 1;
  }
  puVar1 = &StringLiteral_3017;
  if (!FHBJKENCMHP) {
    puVar1 = &StringLiteral_3018;
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

