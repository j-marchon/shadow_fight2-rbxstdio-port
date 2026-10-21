// IOIKBGAJIGO$$EHJMIBMHCMD @ RVA 0x3377158

void IOIKBGAJIGO__EHJMIBMHCMD
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,int32_t LKLBFFJPPOO,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar3;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_38;
  
  if ((DAT_04567b4d & 1) == 0) {
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567b4d = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IIDPDAKKFFN,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_1;
  if (!bVar1) {
    pSVar2 = IIDPDAKKFFN;
  }
  if (DDGBMJNBFPF == (System_String_o *)0x0) {
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0;
    pMVar3 = Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_38,LKLBFFJPPOO,
               (MethodInfo_27F8328 *)Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__);
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = IOIKBGAJIGO__PIPGAPGKBLM
                       (pSVar2,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38,pMVar3);
    pMVar3 = extraout_x1_00;
  }
  else {
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_38,LKLBFFJPPOO,
               (MethodInfo_27F8328 *)Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>__ctor__);
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = IOIKBGAJIGO__PIPGAPGKBLM
                       (pSVar2,DDGBMJNBFPF,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)local_38,
                        method);
    pMVar3 = extraout_x1;
  }
  IOIKBGAJIGO__JHFDCPKENHD(pSVar2,pMVar3);
  return;
}

