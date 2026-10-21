// PNLFHHJGDLI$$GEIPHOGLKAG @ RVA 0x3325EAC

UnityEngine_AudioClip_o * PNLFHHJGDLI__GEIPHOGLKAG(System_String_o *BNCJPLDMJMH,MethodInfo *method)

{
  System_String_o *str0;
  UnityEngine_AudioClip_o *pUVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04567877 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567877 = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045678df == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045678df = '\x01';
    method = extraout_x1_01;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  str0 = System_String__Concat
                   (PNLFHHJGDLI_TypeInfo->static_fields->NOGIEJFCDNM,BNCJPLDMJMH,(MethodInfo *)0x0);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
  }
  if (MGENAMAJALB_TypeInfo->static_fields->ACGDPPPMKBM == false) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045678e0 == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_045678e0 = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_String__Concat(str0,PNLFHHJGDLI_TypeInfo->static_fields->JBHIKFIKHHG,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_AudioClip_o *)
           FUN_03f93a18((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished);
  return pUVar1;
}

