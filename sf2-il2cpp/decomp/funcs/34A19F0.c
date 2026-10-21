// Nekki.SF2.GUI.Map.MapButton$$HEPKJDDDIOC @ RVA 0x34A19F0

System_String_o *
Nekki_SF2_GUI_Map_MapButton__HEPKJDDDIOC
          (Nekki_SF2_GUI_Map_MapButton_o *__this,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456849f & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_0456849f = 1;
  }
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                    (HCAAAAMDCNO,
                     (System_Collections_Generic_IEnumerable_string__o *)
                     BHEDGAKGKPO_TypeInfo->static_fields->GCKGJOPNKFD,(MethodInfo *)0x0);
  if (bVar1) {
    if (HCAAAAMDCNO != (System_String_o *)0x0) {
      iVar2 = System_String__LastIndexOf(HCAAAAMDCNO,0x5f,(MethodInfo *)0x0);
      pSVar3 = System_String__Remove(HCAAAAMDCNO,iVar2 + -2,2,(MethodInfo *)0x0);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return HCAAAAMDCNO;
}

