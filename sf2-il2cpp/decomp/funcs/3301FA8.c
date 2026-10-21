// IOCCJDEBNHF$$LJMPHCIKIIJ @ RVA 0x3301FA8

void IOCCJDEBNHF__LJMPHCIKIIJ
               (IOCCJDEBNHF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  long lVar1;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  OLKKAIFGGAK_EAOIGPODIAI_o *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04567727 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&Method_IOCCJDEBNHF_LJMPHCIKIIJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04567727 = 1;
    PGPLLGEIFPI = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar2._8_8_ = PGPLLGEIFPI;
  auVar2._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar2 = FUN_01b81620(lVar1,PGPLLGEIFPI);
  }
  lVar1 = *(long *)(*(long *)(auVar2._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar2._8_8_);
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    __this_00 = *(Nekki_SF2_Core_Fights_ModelContainer_o **)(**(long **)(lVar1 + 0xb8) + 0x90);
    CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                  thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      Nekki_SF2_Core_Fights_ModelContainer__remove_OnAnimationEnd
                (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      IOCCJDEBNHF__EAOKHLJCOHH(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

