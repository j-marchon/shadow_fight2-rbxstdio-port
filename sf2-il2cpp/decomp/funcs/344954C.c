// NDPMLPGANCI$$NPDADBCINPL @ RVA 0x344954C

void NDPMLPGANCI__NPDADBCINPL(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *x;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  GLINEGMOOBM_o *pGVar4;
  
  if ((DAT_04568256 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568256 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  x = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pGVar4 = (__this->fields).KLPOKEJLDHG;
  if (pGVar4 == (GLINEGMOOBM_o *)0x0) goto LAB_035496a8;
  iVar1 = (pGVar4->fields).DBMPKPJGIPI;
  if (1 < iVar1 - 10U) {
    if (iVar1 == 4) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanShowChatNowInShopScene
                        ((MethodInfo *)0x0);
      if (bVar2) goto LAB_03549644;
    }
    else if ((iVar1 != 6) ||
            (bVar2 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0), !bVar2
            )) {
LAB_03549644:
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_035496a8;
      bVar2 = EEGDOGKBLNG__NMFKMEFIIMP(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        if (x == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_035496a8;
        UNRECOVERED_JUMPTABLE = (x->klass->vtable)._20_Show.methodPtr;
        pMVar3 = (x->klass->vtable)._20_Show.method;
        goto LAB_03549698;
      }
    }
  }
  if (x != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    UNRECOVERED_JUMPTABLE = (x->klass->vtable)._17_Hide.methodPtr;
    pMVar3 = (x->klass->vtable)._17_Hide.method;
LAB_03549698:
                    /* WARNING: Could not recover jumptable at 0x035496a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(x,pMVar3);
    return;
  }
LAB_035496a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

