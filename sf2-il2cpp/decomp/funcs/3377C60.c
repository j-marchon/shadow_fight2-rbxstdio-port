// IOIKBGAJIGO$$NJEMOPJFJAF @ RVA 0x3377C60

void IOIKBGAJIGO__NJEMOPJFJAF
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *AAIHDEKMIJG;
  System_Byte_array *MMEEMFOLKPP;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Byte_array *local_28;
  
  if ((DAT_04567b55 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    DAT_04567b55 = 1;
  }
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = IOIKBGAJIGO__JJDDMIBJDKG(IIDPDAKKFFN,DDGBMJNBFPF,method);
  if (bVar1) {
    local_28 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0);
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
    }
    IOIKBGAJIGO__MPENCGPEPEE(IIDPDAKKFFN,DDGBMJNBFPF,&local_28,in_x3);
    bVar1 = System_String__op_Inequality(IIDPDAKKFFN,DDGBMJNBFPF,(MethodInfo *)0x0);
    if (bVar1) {
      if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IOIKBGAJIGO__MPENCGPEPEE(DDGBMJNBFPF,IIDPDAKKFFN,&local_28,in_x3);
    }
    if (local_28 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_28->max_length != 0) {
      if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = (MethodInfo *)0x0;
      AAIHDEKMIJG = IOIKBGAJIGO__PIPGAPGKBLM
                              (IIDPDAKKFFN,DDGBMJNBFPF,
                               (System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x3);
      MMEEMFOLKPP = IOIKBGAJIGO__GPDMJPBHCJF
                              (local_28,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,method_00);
      NEHNBJKKABI__IGOPCLNJIGA(AAIHDEKMIJG,MMEEMFOLKPP,(MethodInfo *)0x0);
    }
  }
  return;
}

