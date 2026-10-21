// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OKJDJIGBMLI @ RVA 0x328C774

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OKJDJIGBMLI
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045672ef & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EGMHFFODCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_EPEKIKOFDNH__);
    DAT_045672ef = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__FIODMEOCNHA(__this,method);
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__KGJHOLAEPAI(pKVar1,pSVar2,(MethodInfo *)0x0);
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__HKAALOKPBPG(pKVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

