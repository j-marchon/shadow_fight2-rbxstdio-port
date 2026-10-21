// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$OnDestroy @ RVA 0x34CE9A8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,MethodInfo *method)

{
  PLIIGOCLJDL_o *pPVar1;
  System_Action_JCFJFJCKLKG__o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456869a & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_KLOCOMEOKIO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_LJLEHMBBENH__);
    DAT_0456869a = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pPVar1 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  pSVar2 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
  System_Action<object>___ctor();
  if (pPVar1 != (PLIIGOCLJDL_o *)0x0) {
    PLIIGOCLJDL__IJMELLFDCDD(pPVar1,pSVar2,(MethodInfo *)0x0);
    pPVar1 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    pSVar2 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pPVar1 != (PLIIGOCLJDL_o *)0x0) {
      PLIIGOCLJDL__BNNGOJGLDOC(pPVar1,pSVar2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
                ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

