// Nekki.SF2.GUI.Dialogs.EventDialog$$OnDestroy @ RVA 0x35809FC

void Nekki_SF2_GUI_Dialogs_EventDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  NCNJEIBHGBH_o *pNVar1;
  System_Action_FKNCNNOOOIO__o *pSVar2;
  
  if ((DAT_04568ccd & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_AIIOJJEPJMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_GBODNEDLIDF__);
    DAT_04568ccd = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__ILJKHKMFKAJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar2 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
      NCNJEIBHGBH__BDNPBMBKLKE(pNVar1,pSVar2,(MethodInfo *)0x0);
      pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
      pSVar2 = (System_Action_FKNCNNOOOIO__o *)
               thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
        NCNJEIBHGBH__CFPDPJKHALN(pNVar1,pSVar2,(MethodInfo *)0x0);
        pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
        pSVar2 = (System_Action_FKNCNNOOOIO__o *)
                 thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
                    /* try { // try from 03680b64 to 03780c23 has its CatchHandler @ 03680b64
                       catch() { ... } // from try @ 03680b64 with catch @ 03680b64
                       catch() { ... } // from try @ 03680c2c with catch @ 03680b64
                       catch() { ... } // from try @ 03680cc4 with catch @ 03680b64
                       catch() { ... } // from try @ 03680cf4 with catch @ 03680b64
                       catch() { ... } // from try @ 03680d24 with catch @ 03680b64 */
          NCNJEIBHGBH__DPBCMGAOJOP(pNVar1,pSVar2,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

