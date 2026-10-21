// IOIKBGAJIGO$$LGDAPGDDLEI @ RVA 0x3374A64

System_String_o *
IOIKBGAJIGO__LGDAPGDDLEI(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,MethodInfo *method)

{
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar1;
  MethodInfo *extraout_x1;
  uint uVar2;
  
  if ((DAT_04567b4c & 1) == 0) {
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_get_HasValue__);
    FUN_01bab630(&StringLiteral_1341);
    FUN_01bab630(&StringLiteral_1348);
    FUN_01bab630(&StringLiteral_1344);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567b4c = 1;
    method = extraout_x1;
  }
  if (((ulong)LKLBFFJPPOO.fields & 0xff) == 0) {
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo,method);
    }
    uVar2 = IOIKBGAJIGO_TypeInfo->static_fields->IPIMOJKDGPN;
  }
  else {
    uVar2 = LKLBFFJPPOO.fields.value;
  }
  if (uVar2 < 4) {
    return *(System_String_o **)(&PTR_StringLiteral_1341_03fc67a8)[(int)uVar2];
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12814);
  System_Exception___ctor(__this,message,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_LGDAPGDDLEI__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this,uVar1);
}

