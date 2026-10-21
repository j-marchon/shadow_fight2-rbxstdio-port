// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$PCFDKMIEHNG @ RVA 0x32C7CA8

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCFDKMIEHNG
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *root;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *BKJJFPJOCGP;
  MethodInfo *method_00;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  if ((DAT_045674fc & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* try { // try from 033c7cdc to 034c7d27 has its CatchHandler @ 033c85b0 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_9528);
    DAT_045674fc = 1;
  }
  __this_00 = (__this->fields)._clanLogoMount;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    root = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__DeleteAllChildrenObjects(root,(MethodInfo *)0x0);
    pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar4 = Method_System_Array_Empty<string>__;
                    /* try { // try from 033c7d2c to 034c7d33 has its CatchHandler @ 033c85a4 */
    lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                    /* try { // try from 033c7d38 to 034c7d43 has its CatchHandler @ 033c8598 */
    if (lVar6 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar6 = *(long *)(lVar4 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
                    /* try { // try from 033c7d5c to 034c7d67 has its CatchHandler @ 033c82fc */
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033c7d68 to 034c7e8f has its CatchHandler @ 033c79c8 */
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    uVar2 = StringLiteral_9528;
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar3->klass;
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      uVar1._0_1_ = (pIVar7->_2).rank;
      uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar7->vtable + (*piVar9 + 0xc);
            goto LAB_033c7de8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033c7de8:
      method_00 = pVVar5->method;
      BKJJFPJOCGP = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,uVar10);
      Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OCFFFLNEKHD
                (__this,(OJEHKJHEBID_o *)0x0,BKJJFPJOCGP,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

