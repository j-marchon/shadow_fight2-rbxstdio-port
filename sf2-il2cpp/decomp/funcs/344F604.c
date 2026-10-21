// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$BJFDEENANED @ RVA 0x344F604

Nekki_SF2_GUI_Scripts_EditBox_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BJFDEENANED
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t ACCIHBHMFPN,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *pSVar2;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar3;
  
  if ((DAT_04568298 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    DAT_04568298 = 1;
  }
  pSVar2 = (__this->fields).NOLPECJJJPE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,ACCIHBHMFPN,
                       Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_ContainsKey__
                      );
    if (!bVar1) {
      return (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0;
    }
    pSVar2 = (__this->fields).NOLPECJJJPE;
    if (pSVar2 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Scripts_EditBox_o *)
               System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          ACCIHBHMFPN,
                          Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__
                         );
      return pNVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

