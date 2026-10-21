// CJFBGEEIPBA$$DBLCCGALPLM @ RVA 0x33659F0

void CJFBGEEIPBA__DBLCCGALPLM(CJFBGEEIPBA_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  ulong uVar3;
  
  if ((DAT_04567ab6 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ab6 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if (*piVar2 != 0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RequestToStayOpened
                    (__this_00,(MethodInfo *)0x0);
          uVar3 = (*(__this_00->klass->vtable)._15_IsOpened.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._15_IsOpened.method);
          if (((uVar3 & 1) == 0) ||
             (bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IsTweening
                                (__this_00,(MethodInfo *)0x0), bVar1)) {
            (*(__this_00->klass->vtable)._16_Open.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._16_Open.method);
          }
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__SelectTabWithChannel
                    (__this_00,3,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}

