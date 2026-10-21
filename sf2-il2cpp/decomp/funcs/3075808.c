// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$OnLoadedScrollItems @ RVA 0x3075808

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OnLoadedScrollItems
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,
               System_String_o *NKIHNHOLJND,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  float LDMFIPMKKBA;
  
  if ((DAT_04565f9e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__);
    DAT_04565f9e = 1;
  }
  ppSVar1 = &(__this->fields).BKLFHONPJGH;
  (__this->fields).BKLFHONPJGH = NKIHNHOLJND;
  thunk_FUN_01c20e04(ppSVar1,NKIHNHOLJND);
  pSVar3 = (__this->fields).OLFKGLNEJAA;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (Il2CppObject *)*ppSVar1,
                       Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    if (!bVar2) {
      return;
    }
    pSVar3 = (__this->fields).OLFKGLNEJAA;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      __this_00 = (__this->fields)._scroll;
      LDMFIPMKKBA = System_Collections_Generic_Dictionary<object,_float>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                               (Il2CppObject *)*ppSVar1,
                               Method_System_Collections_Generic_Dictionary<string,_float>_get_Item__
                              );
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ScrollToOrth(__this_00,LDMFIPMKKBA,0.0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

