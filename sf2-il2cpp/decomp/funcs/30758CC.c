// Nekki.SF2.GUI.Dialogs.Raids.RaidTopHundredDialog$$Update @ RVA 0x30758CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this,MethodInfo *method)

{
  System_String_o *key;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  float value;
  
  if ((DAT_04565f9f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    DAT_04565f9f = 1;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(pNVar3->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if ((bVar1) ||
       (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).BKLFHONPJGH,(MethodInfo *)0x0), bVar1)) {
      return;
    }
    pSVar2 = (__this->fields).OLFKGLNEJAA;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_float>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)(__this->fields).BKLFHONPJGH,
                         Method_System_Collections_Generic_Dictionary<string,_float>_ContainsKey__);
      pNVar3 = (__this->fields)._scroll;
      if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        key = (__this->fields).BKLFHONPJGH;
        pSVar2 = (__this->fields).OLFKGLNEJAA;
        value = Nekki_SF2_GUI_SimpleScroll__GetScrollY(pNVar3,(MethodInfo *)0x0);
        if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          if (bVar1) {
            System_Collections_Generic_Dictionary<object,_float>__set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                       (Il2CppObject *)key,value,
                       Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
            return;
          }
          System_Collections_Generic_Dictionary<object,_float>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                     (Il2CppObject *)key,value,
                     Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

