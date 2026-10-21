// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$NLBPEFENJIK @ RVA 0x3355244

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__NLBPEFENJIK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  PLIIGOCLJDL_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  IDGOGBNEGAM_o *pIVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  
  if ((DAT_04567a3e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04567a3e = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  pIVar1 = (__this->fields).PAAIEEFEBKK;
  if (((pIVar1 != (IDGOGBNEGAM_o *)0x0) && (__this_00 != (PLIIGOCLJDL_o *)0x0)) &&
     (__this_01 = PLIIGOCLJDL__INONDJFCPHI(__this_00,(pIVar1->fields).HLFBMBHOPMI,(MethodInfo *)0x0)
     , __this_01 != (System_Collections_Generic_List_string__o *)0x0)) {
    __this_02 = (__this->fields)._danIcon;
    CJNHFNHJHPE = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,0,
                             Method_System_Collections_Generic_List<string>_get_Item__);
    if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

