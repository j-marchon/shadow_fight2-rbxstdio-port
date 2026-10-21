// MainMenuRaidRatingPanel$$NLBPEFENJIK @ RVA 0x32BD390

void MainMenuRaidRatingPanel__NLBPEFENJIK
               (MainMenuRaidRatingPanel_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  PLIIGOCLJDL_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  int64_t BIIMFIDNPJP;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *CJNHFNHJHPE;
  System_String_o *HCAAAAMDCNO;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_03;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  
  if ((DAT_045674a7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14092);
    DAT_045674a7 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar2 = (__this->fields)._btnDan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (((__this_01 != (EEGDOGKBLNG_o *)0x0) &&
      (BIIMFIDNPJP = EEGDOGKBLNG__APCMGOCHMGC(__this_01,(MethodInfo *)0x0),
      __this_00 != (PLIIGOCLJDL_o *)0x0)) &&
     (__this_02 = PLIIGOCLJDL__INONDJFCPHI(__this_00,BIIMFIDNPJP,(MethodInfo *)0x0),
     __this_02 != (System_Collections_Generic_List_string__o *)0x0)) {
    CJNHFNHJHPE = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,0,
                             Method_System_Collections_Generic_List<string>_get_Item__);
    HCAAAAMDCNO = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,1,
                             Method_System_Collections_Generic_List<string>_get_Item__);
    __this_03 = (__this->fields)._imageDan;
    if (__this_03 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._btnDan;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                  (pNVar2,StringLiteral_14092,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._btnDan;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                    (pNVar2,StringLiteral_14092,HCAAAAMDCNO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

