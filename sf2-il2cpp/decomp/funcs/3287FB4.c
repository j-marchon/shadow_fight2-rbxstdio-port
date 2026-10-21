// Nekki.SF2.GUI.Dialogs.LotteryDialog$$FIODMEOCNHA @ RVA 0x3287FB4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__FIODMEOCNHA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  System_Action_o *pSVar2;
  
  if ((DAT_045672cd & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EGMHFFODCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EPEKIKOFDNH__);
    DAT_045672cd = 1;
  }
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__PILMCAFCLMN(pKVar1,pSVar2,(MethodInfo *)0x0);
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__JGNHEIICALL(pKVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

