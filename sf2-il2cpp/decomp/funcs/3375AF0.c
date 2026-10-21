// IOIKBGAJIGO$$ABNDLGMOFKJ @ RVA 0x3375AF0

System_Byte_array *
IOIKBGAJIGO__ABNDLGMOFKJ
          (System_Byte_array *JGHIJMJNJLE,System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,
          MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_04567b4e & 1) == 0) {
    FUN_01bab630(&GCFMDIJNNBO_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_get_HasValue__);
    DAT_04567b4e = 1;
  }
  if (((ulong)LKLBFFJPPOO.fields & 0xff) == 0) {
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = (ulong)(uint)IOIKBGAJIGO_TypeInfo->static_fields->IPIMOJKDGPN;
  }
  else {
    uVar3 = (ulong)LKLBFFJPPOO.fields >> 0x20;
  }
  switch(uVar3) {
  case 0:
    return JGHIJMJNJLE;
  case 1:
    pSVar1 = DBIJLEGANCE__CNDPKDGCGGO(JGHIJMJNJLE,(MethodInfo *)0x0);
    return pSVar1;
  case 2:
    break;
  case 3:
    pSVar1 = DBIJLEGANCE__AFMECNJHNDI(JGHIJMJNJLE,(MethodInfo *)0x0);
    return pSVar1;
  default:
    thunk_FUN_01bb9178(&System_Exception_TypeInfo);
    __this = (System_Exception_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12813);
    System_Exception___ctor(__this,message,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_ABNDLGMOFKJ__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this,uVar2);
  }
  if ((GCFMDIJNNBO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = GCFMDIJNNBO__LKOIJMPGNDA(JGHIJMJNJLE,(MethodInfo *)0x0);
  return pSVar1;
}

