// MatchingDialog$$GKPJMHOFIOO @ RVA 0x342CABC

void MatchingDialog__GKPJMHOFIOO(MatchingDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  undefined8 uVar10;
  UnityEngine_Events_UnityAction_o *call;
  PBAKFOBIHEG_o *pPVar11;
  System_Collections_IEnumerator_o *pSVar12;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_array *pSVar13;
  BHEDGAKGKPO_StaticFields *pBVar14;
  Il2CppClass *pIVar15;
  CocosAnimation_o *pCVar16;
  PBAKFOBIHEG_c *pPVar17;
  ulong uVar18;
  int32_t *piVar19;
  Nekki_SF2_GUI_LabelAlias_o *pNVar20;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
                    /* try { // try from 0352cabc to 0362cac3 has its CatchHandler @ 0352cbf4 */
                    /* try { // try from 0352cacc to 0362cad7 has its CatchHandler @ 0352cbe4 */
  if ((DAT_0456814b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0352caec to 0362caf7 has its CatchHandler @ 0352cbc8 */
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* try { // try from 0352cafc to 0362cb07 has its CatchHandler @ 0352cbc4 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 0352cb14 to 0362cb27 has its CatchHandler @ 0352cbd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 0352cb28 to 0362cb33 has its CatchHandler @ 0352cbdc */
    FUN_01bab630(&Method_MatchingDialog_BCINOFNDIAB__);
    FUN_01bab630(&Method_MatchingDialog_LKKDMNODHEJ__);
                    /* try { // try from 0352cb38 to 0362cb43 has its CatchHandler @ 0352cbe0 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0352cb48 to 0362cb53 has its CatchHandler @ 0352cbd0 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0352cb58 to 0362cb63 has its CatchHandler @ 0352cbd4 */
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 0352cb68 to 0362cb73 has its CatchHandler @ 0352cbcc */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0352cb74 to 0362cbb3 has its CatchHandler @ 0352c9ec */
    FUN_01bab630(&StringLiteral_20428);
    FUN_01bab630(&StringLiteral_10917);
    FUN_01bab630(&StringLiteral_8167);
    DAT_0456814b = 1;
  }
  pSVar6 = StringLiteral_8167;
  lVar8 = Method_System_Collections_Generic_List<string>_Add__;
  pSVar5 = (__this->fields).NFJLMMIKCFN;
  if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
                    /* try { // try from 0352cbb4 to 0362cbb7 has its CatchHandler @ 0352cbf0 */
                    /* try { // try from 0352cbb8 to 0362cbbb has its CatchHandler @ 0352cbec */
                    /* try { // try from 0352cbbc to 0362cbbf has its CatchHandler @ 0352cbe8 */
                    /* try { // try from 0352cbc0 to 0362cc0f has its CatchHandler @ 0352c9ec */
    pSVar13 = (pSVar5->fields)._items;
                    /* catch() { ... } // from try @ 0352cafc with catch @ 0352cbc4 */
                    /* catch() { ... } // from try @ 0352caec with catch @ 0352cbc8 */
                    /* catch() { ... } // from try @ 0352cb68 with catch @ 0352cbcc */
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                    /* catch() { ... } // from try @ 0352cb48 with catch @ 0352cbd0 */
    if (pSVar13 != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 0352cb58 with catch @ 0352cbd4 */
      uVar3 = (pSVar5->fields)._size;
                    /* catch() { ... } // from try @ 0352cb14 with catch @ 0352cbd8 */
                    /* catch() { ... } // from try @ 0352cb28 with catch @ 0352cbdc */
                    /* catch() { ... } // from try @ 0352cb38 with catch @ 0352cbe0 */
                    /* catch() { ... } // from try @ 0352cacc with catch @ 0352cbe4 */
                    /* catch() { ... } // from try @ 0352cbbc with catch @ 0352cbe8 */
      if (uVar3 < (uint)pSVar13->max_length) {
                    /* catch() { ... } // from try @ 0352cbb8 with catch @ 0352cbec */
                    /* catch() { ... } // from try @ 0352cbb4 with catch @ 0352cbf0 */
                    /* catch() { ... } // from try @ 0352cabc with catch @ 0352cbf4 */
        (pSVar5->fields)._size = uVar3 + 1;
                    /* catch() { ... } // from try @ 0352caa0 with catch @ 0352cbf8 */
        pSVar13->m_Items[(int)uVar3] = pSVar6;
        thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar3);
      }
      else {
                    /* try { // try from 0352cc10 to 0362cc13 has its CatchHandler @ 0352cc34 */
                    /* try { // try from 0352cc14 to 0362cc3b has its CatchHandler @ 0352c9ec */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      pNVar20 = (__this->fields).super.super._header;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 0352cc10 with catch @ 0352cc34 */
                    /* try { // try from 0352cc3c to 0362cc43 has its CatchHandler @ 0352cc58 */
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar20,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
                    /* try { // try from 0352cc44 to 0362cc4f has its CatchHandler @ 0352c9ec */
      if (bVar4) {
        pNVar20 = (__this->fields).super.super._header;
                    /* try { // try from 0352cc50 to 0362cc57 has its CatchHandler @ 0352cc58 */
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0352cc3c with catch @ 0352cc58
                       catch() { ... } // from try @ 0352cc50 with catch @ 0352cc58 */
          thunk_FUN_01ba7564();
        }
        if (pNVar20 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0352cfd4;
        pBVar14 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar20->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar14->FHIAKPJBBCB).fields.r,(pBVar14->FHIAKPJBBCB).fields.g,
                   (pBVar14->FHIAKPJBBCB).fields.b,(pBVar14->FHIAKPJBBCB).fields.a,pNVar20,
                   (pNVar20->klass->vtable)._23_set_color.method);
        pSVar5 = (__this->fields).NFJLMMIKCFN;
        if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0352cfd4;
        pNVar20 = (__this->fields).super.super._header;
        pSVar6 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar5,0,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        if (pNVar20 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0352cfd4;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar20,pSVar6,(MethodInfo *)0x0);
      }
      pNVar20 = (__this->fields)._matchingLabel;
      if (pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar20,0x73,(MethodInfo *)0x0);
        pNVar20 = (__this->fields)._matchingLabel;
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar14 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar20->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar14->FHIAKPJBBCB).fields.r,(pBVar14->FHIAKPJBBCB).fields.g,
                     (pBVar14->FHIAKPJBBCB).fields.b,(pBVar14->FHIAKPJBBCB).fields.a,pNVar20,
                     (pNVar20->klass->vtable)._23_set_color.method);
          pNVar20 = (__this->fields)._matchingLabel;
          pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar8 = FUN_01bab718(string___TypeInfo,2);
          pSVar6 = System_UInt32__ToString((int)__this + 0x110,(MethodInfo *)0x0);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(undefined8 *)(lVar8 + 0x20) = pSVar6;
              thunk_FUN_01c20e04((undefined8 *)(lVar8 + 0x20),pSVar6);
              pSVar6 = System_UInt32__ToString((int)__this + 0x114,(MethodInfo *)0x0);
              if (1 < *(uint *)(lVar8 + 0x18)) {
                *(System_String_o **)(lVar8 + 0x28) = pSVar6;
                thunk_FUN_01c20e04();
                uVar10 = StringLiteral_10917;
                if (pIVar7 != (Il2CppObject *)0x0) {
                  pIVar15 = pIVar7->klass;
                  uVar1._0_1_ = (pIVar15->_2).rank;
                  uVar1._1_1_ = (pIVar15->_2).minimumAlignment;
                  uVar18 = (ulong)uVar1;
                  if (uVar18 != 0) {
                    piVar19 = &((pIVar15->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                        pVVar9 = pIVar15->vtable + (*piVar19 + 0xc);
                        goto LAB_0352cdf8;
                      }
                      uVar18 = uVar18 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar18 != 0);
                  }
                  pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0352cdf8:
                  uVar10 = (*pVVar9->methodPtr)(pIVar7,uVar10,lVar8,pVVar9->method);
                  if (pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar20->klass->vtable)._75_set_text.methodPtr)
                              (pNVar20,uVar10,(pNVar20->klass->vtable)._75_set_text.method);
                    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar4 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
                    if (bVar4) {
                      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
                    }
                    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_20428,true,(MethodInfo *)0x0);
                    pCVar16 = (__this->fields)._hourGlassEffect;
                    if (pCVar16 != (CocosAnimation_o *)0x0) {
                      __this_01 = (pCVar16->fields).OnAnimationComplete;
                      call = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0)
                        ;
                        MatchingDialog__EGDHNJGMPLM(__this,method_00);
                        MatchingDialog__DILGDEAECBG(__this,method_01);
                        pPVar11 = CoroutineManager__get_Current((MethodInfo *)0x0);
                        uVar10 = thunk_FUN_01bda818(System_Action_TypeInfo);
                        System_Action___ctor();
                        if (pPVar11 != (PBAKFOBIHEG_o *)0x0) {
                          pPVar17 = pPVar11->klass;
                          uVar2._0_1_ = (pPVar17->_2).rank;
                          uVar2._1_1_ = (pPVar17->_2).minimumAlignment;
                          uVar18 = (ulong)uVar2;
                          if (uVar18 != 0) {
                            piVar19 = &((pPVar17->_1).interfaceOffsets)->offset;
                            do {
                              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->
                                  interfaceType == (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                                pVVar9 = pPVar17->vtable + (*piVar19 + 3);
                                goto LAB_0352cf80;
                              }
                              uVar18 = uVar18 - 1;
                              piVar19 = piVar19 + 4;
                            } while (uVar18 != 0);
                          }
                          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar11,PBAKFOBIHEG_TypeInfo,3)
                          ;
LAB_0352cf80:
                          pSVar12 = (System_Collections_IEnumerator_o *)
                                    (*pVVar9->methodPtr)(0x40000000,pPVar11,uVar10,0,pVVar9->method)
                          ;
                          (__this->fields).MMODCAPKNDF = pSVar12;
                          thunk_FUN_01c20e04(&(__this->fields).MMODCAPKNDF);
                          pNVar20 = (__this->fields)._matchingLabel;
                          if ((pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                             (__this_00 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pNVar20,
                                                     (MethodInfo *)0x0),
                             __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_0352cfd4;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_0352cfd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

