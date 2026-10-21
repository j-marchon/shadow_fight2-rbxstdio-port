// Nekki.SF2.GUI.Dialogs.Raids.LinkAccountDialog$$OCJBGCEPJPJ @ RVA 0x317083C

bool Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog__OCJBGCEPJPJ
               (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar7;
  long lVar8;
  Il2CppClass *pIVar9;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *a;
  undefined8 uVar12;
  
  if ((DAT_0456691b & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_8466);
    DAT_0456691b = 1;
  }
  pNVar7 = (__this->fields).super._editBox;
  if (pNVar7 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    a = (pNVar7->fields).super.m_Text;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar5 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    uVar2 = StringLiteral_8466;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar4->klass;
      uVar12 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar9->_2).rank;
      uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
            goto LAB_03270970;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03270970:
      b = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar12,pVVar6->method);
      bVar3 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      __this_01 = (__this->fields).super._error;
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar3 & 1),(MethodInfo *)0x0);
        return bVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

