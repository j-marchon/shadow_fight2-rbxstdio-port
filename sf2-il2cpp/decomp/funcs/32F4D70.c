// NCNJEIBHGBH$$CANNODKGOME @ RVA 0x32F4D70

Nekki_SF2_GUI_Map_MapButton_o *
NCNJEIBHGBH__CANNODKGOME
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  FKNCNNOOOIO_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Map_MapButton_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  KKEKKPIDGBK_o *pKVar3;
  VirtualInvokeData *pVVar4;
  KKEKKPIDGBK_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_String_o **ppSVar8;
  
  if ((DAT_04567695 & 1) == 0) {
                    /* try { // try from 033f4d9c to 034f4dc3 has its CatchHandler @ 033f4f88 */
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_NCNJEIBHGBH_JOCHGEBKLMM__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 033f4df8 to 034f4e23 has its CatchHandler @ 033f4f84 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_21974);
    FUN_01bab630(&StringLiteral_12934);
    DAT_04567695 = 1;
  }
  __this_00 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
  FKNCNNOOOIO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (FKNCNNOOOIO_o *)0x0) {
                    /* try { // try from 033f4e58 to 034f4e63 has its CatchHandler @ 033f4f7c */
    (__this_00->fields).JIJLBFGKNJK = StringLiteral_21974;
    thunk_FUN_01c20e04();
                    /* try { // try from 033f4e64 to 034f4f5f has its CatchHandler @ 033f4b64 */
    (__this_00->fields).AIDMEFDEOLJ = 1;
    ppSVar8 = &(__this_00->fields).KPDPJONADPJ;
    *ppSVar8 = StringLiteral_12934;
    thunk_FUN_01c20e04(ppSVar8);
    (__this_00->fields).OEFBIKEMBOF = true;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)KCAHJMFOIAG,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_02 = (Nekki_SF2_GUI_Map_MapButton_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_GetComponent<MapButton>__),
       __this_02 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(__this_02,__this_00,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
        if (bVar2) {
          if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pKVar3 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pKVar3 == (KKEKKPIDGBK_o *)0x0) goto LAB_033f4fe0;
          pKVar5 = pKVar3->klass;
          uVar1._0_1_ = (pKVar5->_2).rank;
          uVar1._1_1_ = (pKVar5->_2).minimumAlignment;
          uVar6 = (ulong)uVar1;
                    /* try { // try from 033f4f60 to 034f4f67 has its CatchHandler @ 033f4f80 */
          if (uVar6 != 0) {
                    /* try { // try from 033f4f68 to 034f4f6b has its CatchHandler @ 033f4b64 */
                    /* try { // try from 033f4f6c to 034f4f6f has its CatchHandler @ 033f4f78 */
            piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
            do {
                    /* try { // try from 033f4f70 to 034f4f97 has its CatchHandler @ 033f4b64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4f6c with catch @ 033f4f78
                        */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                    /* try { // try from 033f4f98 to 034f4f9b has its CatchHandler @ 033f4fb0 */
                pVVar4 = pKVar5->vtable + (*piVar7 + 6);
                goto LAB_033f4fa8;
              }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4e58 with catch @ 033f4f7c
                        */
              uVar6 = uVar6 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4f60 with catch @ 033f4f80
                        */
              piVar7 = piVar7 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4df8 with catch @ 033f4f84
                        */
            } while (uVar6 != 0);
          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4d9c with catch @ 033f4f88
                        */
          pVVar4 = (VirtualInvokeData *)FUN_01b81914(pKVar3,KKEKKPIDGBK_TypeInfo,6);
LAB_033f4fa8:
                    /* catch() { ... } // from try @ 033f4f98 with catch @ 033f4fb0 */
          uVar6 = (*pVVar4->methodPtr)(pKVar3,pVVar4->method);
          if ((uVar6 & 1) != 0) {
                    /* try { // try from 033f4fb8 to 034f501f has its CatchHandler @ 033f5034 */
            Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(__this_02,true,(MethodInfo *)0x0);
          }
        }
        return __this_02;
      }
    }
  }
LAB_033f4fe0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

