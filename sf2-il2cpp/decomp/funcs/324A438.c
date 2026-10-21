// JJBMNHGADNC$$MAHFCKJGBPP @ RVA 0x324A438

void JJBMNHGADNC__MAHFCKJGBPP(JJBMNHGADNC_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_045670e9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&StringLiteral_15565);
    FUN_01bab630(&StringLiteral_495);
    DAT_045670e9 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).DEKCPPOJFEH;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__HAKLDDOPIAF(MNBMHEAHIIA,pSVar2,(MethodInfo *)0x0);
  if (MNBMHEAHIIA != (PKHMIGFEJCL_o *)0x0) {
    bVar1 = PKHMIGFEJCL__BDIFEJCKEGH
                      (MNBMHEAHIIA,
                       (System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *)
                       (__this->fields).KDAEMPOJNJJ,pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat(StringLiteral_15565,pSVar2,StringLiteral_495,(MethodInfo *)0x0)
      ;
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

