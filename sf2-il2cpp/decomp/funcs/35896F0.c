// Nekki.SF2.GUI.Map.MapScene.HODBNGIFLEJ$$HLLNKJKFIEB @ RVA 0x35896F0

MEJIKMPNBNL_o *
Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__HLLNKJKFIEB
          (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *__this,MethodInfo *method)

{
  MEJIKMPNBNL_o *pMVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *KGLJICLJHEL;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568d28 & 1) == 0) {
    auVar3 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d28 = 1;
  }
  pDVar2 = (__this->fields).BBELCDHPJIP;
  if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
    KGLJICLJHEL = (pDVar2->fields).GDPFBDIJNHA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = NLPJLHOEAOE__KHHBHBLIANB(KGLJICLJHEL,(MethodInfo *)0x0);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

