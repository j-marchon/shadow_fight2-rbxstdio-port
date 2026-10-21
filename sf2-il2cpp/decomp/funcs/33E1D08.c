// VideoPlayerController$$NPDADBCINPL @ RVA 0x33E1D08

void VideoPlayerController__NPDADBCINPL(bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *x;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  
  if ((DAT_04567eb3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eb3 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034e1d48 to 035e1d53 has its CatchHandler @ 034e2468 */
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat != false)
  {
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
    }
    x = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 034e1d84 to 035e1d8f has its CatchHandler @ 034e2494 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (CJNHFNHJHPE) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034e1dd4 to 035e1ddf has its CatchHandler @ 034e246c */
        if (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields->HasEverShownChat ==
            false) {
          return;
        }
        if (x == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
LAB_034e1e14:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UNRECOVERED_JUMPTABLE = (x->klass->vtable)._20_Show.methodPtr;
        pMVar2 = (x->klass->vtable)._20_Show.method;
      }
      else {
        if (x == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_034e1e14;
        UNRECOVERED_JUMPTABLE = (x->klass->vtable)._17_Hide.methodPtr;
        pMVar2 = (x->klass->vtable)._17_Hide.method;
      }
                    /* WARNING: Could not recover jumptable at 0x034e1e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(x,pMVar2);
      return;
    }
  }
  return;
}

