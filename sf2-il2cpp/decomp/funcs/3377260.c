// IOIKBGAJIGO$$NJEMOPJFJAF @ RVA 0x3377260

void IOIKBGAJIGO__NJEMOPJFJAF(System_String_o *IFDOANCFKJD,MethodInfo *method)

{
  System_String_o *AAIHDEKMIJG;
  System_Byte_array *MMEEMFOLKPP;
  MethodInfo *in_x2;
  System_Byte_array *local_28;
  
  if ((DAT_04567b50 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    DAT_04567b50 = 1;
  }
  local_28 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0);
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
  }
  IOIKBGAJIGO__MPENCGPEPEE(IFDOANCFKJD,&local_28,in_x2);
  if (local_28 != (System_Byte_array *)0x0) {
    if (local_28->max_length != 0) {
      if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AAIHDEKMIJG = IOIKBGAJIGO__PIPGAPGKBLM
                              (IFDOANCFKJD,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
      MMEEMFOLKPP = IOIKBGAJIGO__GPDMJPBHCJF
                              (local_28,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
      NEHNBJKKABI__IGOPCLNJIGA(AAIHDEKMIJG,MMEEMFOLKPP,(MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

