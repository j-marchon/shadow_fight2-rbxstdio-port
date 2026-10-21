// Nekki.SF2.GUI.Profile.UserPerksPanel$$KOFEHBPNEPA @ RVA 0x34A8464

bool Nekki_SF2_GUI_Profile_UserPerksPanel__KOFEHBPNEPA
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  EANNACPOJFA_o *pEVar2;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568506 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    DAT_04568506 = 1;
  }
  pEVar2 = (__this->fields).FKDJMGJDOAG;
  if (pEVar2 == (EANNACPOJFA_o *)0x0) {
    bVar1 = true;
  }
  else {
    pSVar3 = (pEVar2->fields).GJBLBEALOBO;
    if (pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
    }
    bVar1 = 1 < (pSVar3->fields)._size;
  }
  return bVar1;
}

