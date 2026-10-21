// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$CMHFHILJHOL @ RVA 0x3151478

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__CMHFHILJHOL
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  undefined8 uVar2;
  MethodInfo *in_x2;
  BFBONKPKBNL_o *pBVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456680e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    DAT_0456680e = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pBVar3 = (__this->fields).MHJAFBPAKEG;
  if ((pBVar3 != (BFBONKPKBNL_o *)0x0) &&
     (__this_00 = (pBVar3->fields).MIOLFPIJMDH, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Shop_Forge_RecipePriceUI__IEMBODIJFHH
                (__this,(BNKBGIIJNLF_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}

