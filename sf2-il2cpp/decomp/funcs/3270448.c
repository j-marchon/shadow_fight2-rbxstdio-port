// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$IPNNEIAMPOA @ RVA 0x3270448

Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__IPNNEIAMPOA
          (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,
          System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *pNVar3;
  
  if ((DAT_04567219 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_get_Item__)
    ;
    DAT_04567219 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEBICCAKJMD;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_ContainsKey__
                      );
    if (!bVar1) {
      return (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEBICCAKJMD
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)PMACBPAMPJA,
                          Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_get_Item__
                         );
      return pNVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

