// FDJKKAFIEFB$$LKBOKHMGDFE @ RVA 0x35B54B4

int32_t FDJKKAFIEFB__LKBOKHMGDFE
                  (System_String_o *JEGADCHPBOO,int32_t BJODBCJIGHH,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_04568eb8 & 1) == 0) {
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    DAT_04568eb8 = 1;
  }
  if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (JEGADCHPBOO != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOfAny
                      (JEGADCHPBOO,FDJKKAFIEFB_TypeInfo->static_fields->NIFEBLPCLFG,BJODBCJIGHH,
                       (MethodInfo *)0x0);
    if (iVar1 == -1) {
      iVar1 = (JEGADCHPBOO->fields)._stringLength;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

