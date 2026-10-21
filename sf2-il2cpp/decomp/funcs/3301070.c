// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$FPCFNCJADKF @ RVA 0x3301070

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FPCFNCJADKF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               LabelButton_o *BECCOGAMKJL,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  JMDPBFOCHHP_o *pJVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str2;
  ADJEBFOPFFF_o *__this_00;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar9;
  long lVar10;
  Il2CppClass *pIVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  UnityEngine_Color_o CJNHFNHJHPE;
  int32_t local_34;
  
                    /* try { // try from 03401084 to 035010ab has its CatchHandler @ 034013e0 */
  if ((DAT_04567720 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_265);
    FUN_01bab630(&StringLiteral_4853);
                    /* try { // try from 034010e0 to 0350110b has its CatchHandler @ 034013dc */
    DAT_04567720 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar4 != (JMDPBFOCHHP_o *)0x0) {
    if ((pJVar4->fields)._LGFNDLOCGPB_k__BackingField == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
      local_34 = 0x32;
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar4 == (JMDPBFOCHHP_o *)0x0) ||
         (pJVar9 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
         pJVar9 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) goto LAB_034012d0;
      local_34 = (pJVar9->fields).DDBGOGFKEBF;
    }
                    /* try { // try from 03401148 to 0350115b has its CatchHandler @ 034013d0 */
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar6 = Method_System_Array_Empty<string>__;
                    /* try { // try from 03401160 to 03501167 has its CatchHandler @ 034013cc */
    lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar10 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar10 = *(long *)(lVar6 + 0x38);
    }
                    /* try { // try from 03401174 to 0350117b has its CatchHandler @ 034013d4 */
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01b81620();
    }
                    /* try { // try from 03401184 to 0350118b has its CatchHandler @ 034013b8 */
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03401194 to 0350119b has its CatchHandler @ 034013b4 */
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
    uVar2 = StringLiteral_4853;
    if (pIVar5 != (Il2CppObject *)0x0) {
                    /* try { // try from 034011ac to 035011df has its CatchHandler @ 034013e8 */
      pIVar11 = pIVar5->klass;
      uVar14 = **(undefined8 **)(lVar6 + 0xb8);
      uVar1._0_1_ = (pIVar11->_2).rank;
      uVar1._1_1_ = (pIVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 034011e8 to 03501207 has its CatchHandler @ 034013ac */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* try { // try from 03401218 to 03501223 has its CatchHandler @ 034013c4 */
            pVVar7 = pIVar11->vtable + (*piVar13 + 0xc);
            goto LAB_0340121c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0340121c:
      pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar2,uVar14,pVVar7->method);
      str2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat(pSVar8,StringLiteral_265,str2,(MethodInfo *)0x0);
      if (BECCOGAMKJL != (LabelButton_o *)0x0) {
        LabelButton__set_Text(BECCOGAMKJL,pSVar8,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
        if (__this_00 != (ADJEBFOPFFF_o *)0x0) {
          bVar3 = ADJEBFOPFFF__MIBNBHKOIEI(__this_00,local_34,false,(MethodInfo *)0x0);
          if (!bVar3) {
            CJNHFNHJHPE = CFBGPBCDAGA__NFFPCFGDOKG(0x9b,0x1c,7,0xff,(MethodInfo *)0x0);
                    /* try { // try from 034012b4 to 035012d7 has its CatchHandler @ 034013b0 */
            LabelButton__set_Color(BECCOGAMKJL,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
LAB_034012d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

