// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$FKFPKOGCLFP @ RVA 0x35CF24C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__FKFPKOGCLFP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *ODNJEHJPBGA;
  ClanLogoImage_o **ppCVar2;
  ClanLogoImage_o *pCVar3;
  
  if ((DAT_04568fc9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fc9 = 1;
  }
  ppCVar2 = &(__this->fields).FDOKACGMDHB;
  pCVar3 = *ppCVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._clanLogoMount;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      ODNJEHJPBGA = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pCVar3 = KFCFGKEHPNK__LEIGOOFFFPE(ODNJEHJPBGA,NEJHIEOHMCF,0,2.0,(MethodInfo *)0x0);
      *ppCVar2 = pCVar3;
      thunk_FUN_01c20e04(ppCVar2,pCVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar2,NEJHIEOHMCF,0,2.0,(MethodInfo *)0x0);
  return;
}

