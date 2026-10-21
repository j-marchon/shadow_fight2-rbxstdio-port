// TypeDefIndex 2208
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class GeneralPlayerInfoView : RaidPlayerInfoView
// Fields:
//   private const int DEHHADJEODK = 10;
//   private SimpleScroll _simpleScroll; // 0x30
//   private GameObject _cellPrefab; // 0x38
//   private LabelAlias _header; // 0x40

// ===== private void LFENGGKOJDO(GeneralPlayerInfoView.DLEOKEPCMEO ACCIHBHMFPN, string CJNHFNHJHPE, bool BDMNPNHEAEC = False)  [RVA 0x32E89EC]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$LFENGGKOJDO @ RVA 0x32E89EC

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,int32_t ACCIHBHMFPN,
               System_String_o *CJNHFNHJHPE,bool BDMNPNHEAEC,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  
  if ((DAT_04567627 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<GeneralPlayerInfoCell>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567627 = 1;
  }
  pUVar1 = (__this->fields)._cellPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar1,
                             Method_UnityEngine_GameObject_GetComponent<GeneralPlayerInfoCell>__),
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__Init
              (__this_00,ACCIHBHMFPN,CJNHFNHJHPE,BDMNPNHEAEC,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._simpleScroll;
    if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__AddItem
                (__this_01,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x32E8AD0]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$Init @ RVA 0x32E8AD0

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,
               EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  EOLFEKNCPLM_o **ppEVar3;
  
  if ((DAT_04567628 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_20390/*"raidInfoMainStats"*/);
    DAT_04567628 = 1;
  }
  ppEVar3 = &(__this->fields).super.MLAAJICBOAD;
  *ppEVar3 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar3,HEHMPFLAEGE);
  __this_00 = (__this->fields)._simpleScroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._header;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar1 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                ((pBVar1->FHIAKPJBBCB).fields.r,(pBVar1->FHIAKPJBBCB).fields.g,
                 (pBVar1->FHIAKPJBBCB).fields.b,(pBVar1->FHIAKPJBBCB).fields.a,pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      pNVar2 = (__this->fields)._header;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_20390/*"raidInfoMainStats"*/,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x033e8bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._19_UpdateContent.methodPtr)
                  (__this,0,(__this->klass->vtable)._19_UpdateContent.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HIILKMCLKKL(int BCOCGHJNMDJ, int FLBLBILEGCK)  [RVA 0x32E8BB4]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$HIILKMCLKKL @ RVA 0x32E8BB4

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__HIILKMCLKKL
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,int32_t BCOCGHJNMDJ,
               int32_t FLBLBILEGCK,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t ACCIHBHMFPN;
  bool BDMNPNHEAEC;
  MethodInfo *in_x4;
  float __this_00;
  double dVar2;
  float fVar3;
  undefined1 local_40 [8];
  double local_38;
  
  if ((DAT_04567629 & 1) == 0) {
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_756/*"%"*/);
    FUN_01bab630(&StringLiteral_18782/*"hintInfoWinRateLimit{"*/);
    DAT_04567629 = 1;
  }
  local_40 = (undefined1  [8])0x0;
  if (BCOCGHJNMDJ < 10) {
    local_40._4_4_ = 0;
    local_40._0_4_ = 10 - BCOCGHJNMDJ;
    pSVar1 = System_Int32__ToString((int32_t)local_40,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_18782/*"hintInfoWinRateLimit{"*/,pSVar1,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0)
    ;
    ACCIHBHMFPN = 7;
    BDMNPNHEAEC = true;
    goto LAB_033e8d2c;
  }
  fVar3 = ((float)FLBLBILEGCK * 100.0) / (float)BCOCGHJNMDJ;
                    /* try { // try from 033e8c84 to 034e8d17 has its CatchHandler @ 033e8c84
                       catch() { ... } // from try @ 033e8c84 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8d34 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8d60 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8d88 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8dc8 with catch @ 033e8c84 */
  dVar2 = modf((double)fVar3,&local_38);
  if (0.0 <= fVar3) {
    if (dVar2 == 0.5) {
      fVar3 = 1.0;
      goto LAB_033e8cc4;
    }
    __this_00 = (float)(int)(fVar3 + 0.5);
  }
  else if (dVar2 == -0.5) {
    fVar3 = -1.0;
LAB_033e8cc4:
    __this_00 = (float)local_38;
    if (((long)local_38 & 1U) != 0) {
      __this_00 = (float)local_38 + fVar3;
    }
  }
  else {
    __this_00 = (float)(int)(fVar3 + -0.5);
  }
  local_40._4_4_ = __this_00;
  pSVar1 = System_Single__ToString(__this_00,(MethodInfo *)(local_40 + 4));
                    /* try { // try from 033e8d18 to 034e8d1f has its CatchHandler @ 033e8d6c */
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_756/*"%"*/,(MethodInfo *)0x0);
  ACCIHBHMFPN = 8;
  BDMNPNHEAEC = false;
LAB_033e8d2c:
                    /* try { // try from 033e8d2c to 034e8d33 has its CatchHandler @ 033e8d68 */
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO
            (__this,ACCIHBHMFPN,pSVar1,BDMNPNHEAEC,in_x4);
                    /* try { // try from 033e8d34 to 034e8d5b has its CatchHandler @ 033e8c84 */
  return;
}


// ===== private void GGCDBGHJCAF()  [RVA 0x32E8D48]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$GGCDBGHJCAF @ RVA 0x32E8D48

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__GGCDBGHJCAF
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar11;
  PEEIMHCMDND_o *__this_01;
  SimpleJSON_JSONNode_o *a;
  int64_t iVar12;
  Il2CppObject *pIVar13;
  long lVar14;
  VirtualInvokeData *pVVar15;
  System_String_o *pSVar16;
  System_String_o *str1;
  System_String_o *str3;
  MethodInfo *in_x4;
  long lVar17;
  Il2CppClass *pIVar18;
  EOLFEKNCPLM_o *pEVar19;
  GKLPDMLELJF_o *pGVar20;
  ulong uVar21;
  int32_t *piVar22;
  int val2;
  uint val2_00;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int32_t local_64;
  uint local_60;
  undefined4 uStack_5c;
  System_String_o *pSStack_58;
  
                    /* try { // try from 033e8d5c to 034e8d5f has its CatchHandler @ 033e8d64 */
                    /* try { // try from 033e8d60 to 034e8d83 has its CatchHandler @ 033e8c84 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8d5c with catch @ 033e8d64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8d2c with catch @ 033e8d68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8d18 with catch @ 033e8d6c
                        */
  if ((DAT_0456762a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
                    /* try { // try from 033e8d84 to 034e8d87 has its CatchHandler @ 033e8db0 */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* try { // try from 033e8d88 to 034e8dbf has its CatchHandler @ 033e8c84 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* catch() { ... } // from try @ 033e8d84 with catch @ 033e8db0 */
    FUN_01bab630(&System_Math_TypeInfo);
                    /* try { // try from 033e8dc0 to 034e8dc7 has its CatchHandler @ 033e8ddc */
    FUN_01bab630(&StringLiteral_167/*" "*/);
                    /* try { // try from 033e8dc8 to 034e8dd3 has its CatchHandler @ 033e8c84 */
    FUN_01bab630(&StringLiteral_19378/*"lblUnknown"*/);
                    /* try { // try from 033e8dd4 to 034e8ddb has its CatchHandler @ 033e8ddc */
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e8dc0 with catch @ 033e8ddc
                       catch(type#2 @ 00000000) { ... } // from try @ 033e8dd4 with catch @ 033e8ddc
                        */
    FUN_01bab630(&StringLiteral_13794/*"TimeDay"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_19376/*"lblOnline"*/);
    FUN_01bab630(&StringLiteral_13788/*"TimeAgo"*/);
    DAT_0456762a = 1;
  }
  local_60 = 0;
  uStack_5c = 0;
  pSStack_58 = (System_String_o *)0x0;
  local_64 = 0;
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 == (KKLJIDJBFEI_o *)0x0) {
LAB_033e96cc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar11 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_01 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  if (__this_01 == (PEEIMHCMDND_o *)0x0) goto LAB_033e96cc;
  a = PEEIMHCMDND__BHCOOILLMGA
                (__this_01,(__this->fields).super.MLAAJICBOAD,&pSStack_58,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  bVar10 = SimpleJSON_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  iVar12 = PEEIMHCMDND__DKBMICAMHBE(__this_01,a,(MethodInfo *)0x0);
  if (iVar12 < 1) {
    pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar14 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar14 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01b81620();
    }
    uVar25 = StringLiteral_19378/*"lblUnknown"*/;
    if (pIVar13 != (Il2CppObject *)0x0) {
      pIVar18 = pIVar13->klass;
      uVar24 = **(undefined8 **)(lVar14 + 0xb8);
      uVar2._0_1_ = (pIVar18->_2).rank;
      uVar2._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar2;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
            goto LAB_033e921c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e921c:
      pSVar16 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
      goto LAB_033e96a0;
    }
    goto LAB_033e96cc;
  }
  pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar14 = Method_System_Array_Empty<string>__;
  lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar17 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar17 = *(long *)(lVar14 + 0x38);
  }
  lVar17 = *(long *)(lVar17 + 0x10);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_01b81620();
  }
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01b81620();
  }
  uVar25 = StringLiteral_19376/*"lblOnline"*/;
  if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
  pIVar18 = pIVar13->klass;
  uVar24 = **(undefined8 **)(lVar14 + 0xb8);
  uVar1._0_1_ = (pIVar18->_2).rank;
  uVar1._1_1_ = (pIVar18->_2).minimumAlignment;
  uVar21 = (ulong)uVar1;
  uVar23 = iVar11 - iVar12;
  if (uVar21 != 0) {
    piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
        goto LAB_033e9068;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9068:
  pSVar16 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
  if ((long)uVar23 < 0x3c) goto LAB_033e96a0;
  pEVar19 = (__this->fields).super.MLAAJICBOAD;
  if ((pEVar19 == (EOLFEKNCPLM_o *)0x0) ||
     (pGVar20 = (pEVar19->fields).MCOPPCNPAHF, pGVar20 == (GKLPDMLELJF_o *)0x0)) goto LAB_033e96cc;
  if ((pGVar20->fields).PFJPLCAIGJH != 1) goto LAB_033e96a0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar23;
  val2 = SUB164(auVar9 * ZEXT816(0xc22e450672894ab7),10);
  val2_00 = ((int)uVar23 + ((uint)(uVar23 / 0xe10) & 0x1fffffff) * -0xe10 & 0xffff) / 0x3c;
  uStack_5c = (undefined4)((uVar23 % 0x15180) / 0xe10);
  local_60 = val2_00;
  if (val2 < 1) {
    if ((uint)(uVar23 % 0x15180) < 0xe10) {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_60 = System_Math__Max(1,val2_00,(MethodInfo *)0x0);
      pSVar16 = System_Int32__ToString((int32_t)&local_60,(MethodInfo *)0x0);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      uVar25 = StringLiteral_13800/*"TimeMinuteShort"*/;
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar24 = **(undefined8 **)(lVar14 + 0xb8);
      uVar4._0_1_ = (pIVar18->_2).rank;
      uVar4._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar4;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
            goto LAB_033e94c4;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e94c4:
      str1 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar25 = **(undefined8 **)(lVar14 + 0xb8);
      uVar7._0_1_ = (pIVar18->_2).rank;
      uVar7._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar7;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_033e9658;
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
    }
    else {
      pSVar16 = System_Int32__ToString((int32_t)&uStack_5c,(MethodInfo *)0x0);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      uVar25 = StringLiteral_13796/*"TimeHourShort"*/;
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar24 = **(undefined8 **)(lVar14 + 0xb8);
      uVar6._0_1_ = (pIVar18->_2).rank;
      uVar6._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar6;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
            goto LAB_033e9590;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9590:
      str1 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
      pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar14 = Method_System_Array_Empty<string>__;
      lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar17 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar17 = *(long *)(lVar14 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01b81620();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01b81620();
      }
      if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
      pIVar18 = pIVar13->klass;
      uVar25 = **(undefined8 **)(lVar14 + 0xb8);
      uVar8._0_1_ = (pIVar18->_2).rank;
      uVar8._1_1_ = (pIVar18->_2).minimumAlignment;
      uVar21 = (ulong)uVar8;
      if (uVar21 != 0) {
        piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_033e9658;
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
    }
  }
  else {
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_64 = System_Math__Min(0xb4,val2,(MethodInfo *)0x0);
    pSVar16 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar14 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar14 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01b81620();
    }
    uVar25 = StringLiteral_13794/*"TimeDay"*/;
    if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
    pIVar18 = pIVar13->klass;
    uVar24 = **(undefined8 **)(lVar14 + 0xb8);
    uVar3._0_1_ = (pIVar18->_2).rank;
    uVar3._1_1_ = (pIVar18->_2).minimumAlignment;
    uVar21 = (ulong)uVar3;
    if (uVar21 != 0) {
      piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
          goto LAB_033e9338;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9338:
    str1 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar25,uVar24,pVVar15->method);
    pIVar13 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar14 = Method_System_Array_Empty<string>__;
    lVar17 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar17 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar17 = *(long *)(lVar14 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01b81620();
    }
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01b81620();
    }
    if (pIVar13 == (Il2CppObject *)0x0) goto LAB_033e96cc;
    pIVar18 = pIVar13->klass;
    uVar25 = **(undefined8 **)(lVar14 + 0xb8);
    uVar5._0_1_ = (pIVar18->_2).rank;
    uVar5._1_1_ = (pIVar18->_2).minimumAlignment;
    uVar21 = (ulong)uVar5;
    if (uVar21 != 0) {
      piVar22 = &((pIVar18->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_033e9658;
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
  }
  uVar24 = StringLiteral_13788/*"TimeAgo"*/;
  pVVar15 = (VirtualInvokeData *)FUN_01b81914(pIVar13,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033e9668:
  str3 = (System_String_o *)(*pVVar15->methodPtr)(pIVar13,uVar24,uVar25,pVVar15->method);
  in_x4 = (MethodInfo *)0x0;
  pSVar16 = System_String__Concat(pSVar16,str1,StringLiteral_167/*" "*/,str3,(MethodInfo *)0x0);
LAB_033e96a0:
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,6,pSVar16,false,in_x4);
  return;
LAB_033e9658:
  pVVar15 = pIVar18->vtable + (*piVar22 + 0xc);
  uVar24 = StringLiteral_13788/*"TimeAgo"*/;
  goto LAB_033e9668;
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x32E96D0]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$UpdateContent @ RVA 0x32E96D0

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool value;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar3;
  MethodInfo *in_x4;
  EOLFEKNCPLM_o *pEVar4;
  OBCMNBDBNFO_o *pOVar5;
  
  if ((DAT_0456762b & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_0456762b = 1;
  }
  pNVar1 = (__this->fields)._simpleScroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar1,(MethodInfo *)0x0);
    pEVar4 = (__this->fields).super.MLAAJICBOAD;
    if (pEVar4 != (EOLFEKNCPLM_o *)0x0) {
      pOVar5 = (pEVar4->fields).PLJJCOHGICK;
      pMVar3 = extraout_x1;
      if (pOVar5 != (OBCMNBDBNFO_o *)0x0) {
        CJNHFNHJHPE = (pOVar5->fields).OKHEECOKPBF;
        if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,0,pSVar2,false,in_x4);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).JEAFOMDCLHD,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,1,pSVar2,false,in_x4);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).HHNJEEMAEIH,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,2,pSVar2,false,in_x4);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).MGFICIOBKAI,(MethodInfo *)0x0);
        pMVar3 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,3,pSVar2,false,in_x4);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__HIILKMCLKKL
                  (__this,(pOVar5->fields).HHNJEEMAEIH,(pOVar5->fields).MGFICIOBKAI,pMVar3);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).GCELGJPAMAA,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,5,pSVar2,false,in_x4);
        pMVar3 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__GGCDBGHJCAF(__this,pMVar3);
      pNVar1 = (__this->fields)._simpleScroll;
      if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__RebuildLayout(pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._simpleScroll;
        if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
          Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar1,0,0.0,8,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._simpleScroll;
          if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
            value = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(pNVar1,(MethodInfo *)0x0);
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)pNVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32E9848]
// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$.ctor @ RVA 0x32E9848

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView_o *)__this,(MethodInfo *)0x0);
  return;
}

