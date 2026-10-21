// BBJEEHDMNGJ.MHEHCBIJHGA$$MoveNext @ RVA 0x31B79AC

bool BBJEEHDMNGJ_MHEHCBIJHGA__MoveNext(BBJEEHDMNGJ_MHEHCBIJHGA_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  BBJEEHDMNGJ_o *__this_02;
  Il2CppObject **ppIVar3;
  
  if (1 < (uint)(__this->fields).__1__state) {
                    /* try { // try from 032b7a30 to 033b7ac7 has its CatchHandler @ 032b7a30
                       catch() { ... } // from try @ 032b7a30 with catch @ 032b7a30
                       catch() { ... } // from try @ 032b7ae0 with catch @ 032b7a30
                       catch() { ... } // from try @ 032b7bb4 with catch @ 032b7a30
                       catch() { ... } // from try @ 032b7bf4 with catch @ 032b7a30 */
    return false;
  }
  __this_02 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((__this_02 != (BBJEEHDMNGJ_o *)0x0) &&
      (pNVar2 = (__this_02->fields).PMMMEDPGNFO,
      pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) &&
     (__this_00 = (pNVar2->fields)._TableView, __this_00 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
    bVar1 = Nekki_SF2_GUI_TableView__get_IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar3,0);
      (__this->fields).__1__state = 1;
      return true;
    }
    __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,false,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this_02,(MethodInfo *)0x0);
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

