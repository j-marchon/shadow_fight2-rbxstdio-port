// NJNCPNBIPCD$$JFHKDNJOIGN @ RVA 0x3138480

void NJNCPNBIPCD__JFHKDNJOIGN(NJNCPNBIPCD_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  GCIFMNHADDF_o *pGVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
  if ((DAT_04566718 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_TypeInfo);
    FUN_01bab630(&MatchingDialog_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo);
    DAT_04566718 = 1;
  }
  pGVar3 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  do {
    if (pGVar3 == (GCIFMNHADDF_o *)0x0) {
LAB_032387f8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    x = (pGVar3->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238588;
LAB_032385a0:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032385a0;
LAB_03238588:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_032385a0;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032385e8;
LAB_03238600:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238600;
LAB_032385e8:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03238600;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
                    /* try { // try from 03238630 to 033388bb has its CatchHandler @ 03238630
                       catch() { ... } // from try @ 03238630 with catch @ 03238630
                       catch() { ... } // from try @ 0323893c with catch @ 03238630
                       catch() { ... } // from try @ 03238994 with catch @ 03238630
                       catch() { ... } // from try @ 032389c0 with catch @ 03238630
                       catch() { ... } // from try @ 032389f0 with catch @ 03238630 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238648;
LAB_03238660:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238660;
LAB_03238648:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03238660;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_InputDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032386a8;
LAB_032386c0:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032386c0;
LAB_032386a8:
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_032386c0;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      if (x != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238708;
LAB_03238720:
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03238720;
LAB_03238708:
      bVar1 = (MatchingDialog_TypeInfo->_2).naturalAligment;
      if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03238720;
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)MatchingDialog_TypeInfo)
      {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      goto LAB_032387f8;
    }
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    else {
      pNVar4 = x;
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    if (x == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_032387f8;
    (*(x->klass->vtable)._20_Close.methodPtr)(x,(x->klass->vtable)._20_Close.method);
    pGVar3 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  } while( true );
}

