// Nekki.SF2.GUI.Map.InfoBattle$$IKKGKJLMHOP @ RVA 0x3417E38

void Nekki_SF2_GUI_Map_InfoBattle__IKKGKJLMHOP
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
  if ((DAT_045680aa & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IKKGKJLMHOP__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045680aa = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__LMMJGPKGCDJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO_TypeInfo->static_fields->JOJJNOGLNCD = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

