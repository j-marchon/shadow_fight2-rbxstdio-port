// PNLFHHJGDLI$$PPMOLPPCNFC @ RVA 0x3325014

bool PNLFHHJGDLI__PPMOLPPCNFC(System_String_o *BNCJPLDMJMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_AudioClip_o *NCALFHMFKLE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_0456789f & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789f = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  NCALFHMFKLE = PNLFHHJGDLI__GEIPHOGLKAG(BNCJPLDMJMH,method);
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
  }
  Nekki_Audio_AudioManager__AddAudio(NCALFHMFKLE,BNCJPLDMJMH,1.0,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)NCALFHMFKLE,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  return bVar1;
}

