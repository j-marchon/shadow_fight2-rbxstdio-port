// PNLFHHJGDLI$$CJKCKACIIHK @ RVA 0x332685C

int32_t PNLFHHJGDLI__CJKCKACIIHK
                  (System_String_o *EELDDPEAGGA,bool GLHEIHKMJHG,float EPNNOIDBNDC,float JLBFGCCBGBC
                  ,MethodInfo *method)

{
  bool bVar1;
  uint32_t OGPGLGPMEPD;
  PNLFHHJGDLI_c *method_00;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_02;
  MethodInfo *in_x4;
  
  method_01 = (MethodInfo *)(ulong)GLHEIHKMJHG;
  if ((DAT_0456789d & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_5596);
    DAT_0456789d = 1;
  }
  if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_Audio_AudioManager__CheckAudioLoaded(EELDDPEAGGA,(MethodInfo *)0x0);
  if (!bVar1) {
    method_02 = extraout_x1;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_02 = extraout_x1_00;
    }
    bVar1 = PNLFHHJGDLI__PPMOLPPCNFC(EELDDPEAGGA,method_02);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((EELDDPEAGGA != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(EELDDPEAGGA,(((args->obj).klass)->_1).element_class),
         lVar2 == 0)) {
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)EELDDPEAGGA;
        thunk_FUN_01c20e04(args->m_Items,EELDDPEAGGA);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_5596,args,(MethodInfo *)0x0);
        return -1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  OGPGLGPMEPD = PNLFHHJGDLI__DAKPBFCAKPB((MethodInfo *)method_00);
  PNLFHHJGDLI__MEHGLNCEAAG
            (OGPGLGPMEPD,EELDDPEAGGA,GLHEIHKMJHG,PNLFHHJGDLI_TypeInfo->static_fields->GBBBAEHFPLH,
             EPNNOIDBNDC,JLBFGCCBGBC,in_x4);
  PNLFHHJGDLI__EOHAEHCEKDG(EELDDPEAGGA,OGPGLGPMEPD,method_01);
  if (GLHEIHKMJHG) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__MJMLKEHNHEB(EELDDPEAGGA,OGPGLGPMEPD,method_01);
  }
  return OGPGLGPMEPD;
}

