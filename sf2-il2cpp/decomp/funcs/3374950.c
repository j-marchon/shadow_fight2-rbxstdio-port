// IOIKBGAJIGO$$KELDIALFCDL @ RVA 0x3374950

System_String_o *
IOIKBGAJIGO__KELDIALFCDL(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o LKLBFFJPPOO,MethodInfo *method)

{
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar1;
  MethodInfo *extraout_x1;
  uint uVar2;
  
  if ((DAT_04567b54 & 1) == 0) {
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_get_HasValue__);
    FUN_01bab630(&StringLiteral_21405);
    FUN_01bab630(&StringLiteral_21406);
    FUN_01bab630(&StringLiteral_21404);
    FUN_01bab630(&StringLiteral_21407);
    DAT_04567b54 = 1;
    method = extraout_x1;
  }
  if (((ulong)LKLBFFJPPOO.fields & 0xff) == 0) {
                    /* try { // try from 034749e4 to 03574bbf has its CatchHandler @ 034749e4
                       catch() { ... } // from try @ 034749e4 with catch @ 034749e4
                       catch() { ... } // from try @ 03474c50 with catch @ 034749e4
                       catch() { ... } // from try @ 03474cd4 with catch @ 034749e4
                       catch() { ... } // from try @ 03474d6c with catch @ 034749e4 */
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo,method);
    }
    uVar2 = IOIKBGAJIGO_TypeInfo->static_fields->IPIMOJKDGPN;
  }
  else {
    uVar2 = LKLBFFJPPOO.fields.value;
  }
  if (uVar2 < 4) {
    return *(System_String_o **)(&PTR_StringLiteral_21407_03fc6788)[(int)uVar2];
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_12815);
  System_Exception___ctor(__this,message,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_IOIKBGAJIGO_KELDIALFCDL__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this,uVar1);
}

