// MatchingDialog$$Close @ RVA 0x342C2AC

void MatchingDialog__Close(MatchingDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568141 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19657);
    FUN_01bab630(&StringLiteral_20428);
    DAT_04568141 = 1;
    method = extraout_x1;
  }
  MatchingDialog__DAKEBOMPALG(__this,method);
  MatchingDialog__DILGDEAECBG(__this,method_00);
  MatchingDialog__OJCPMPCFPJM(__this,method_01);
  MatchingDialog__JCAAAJGAFIH(__this,method_02);
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
  if (bVar1) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_0456647a == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_0456647a = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_String__op_Equality
                      (PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField,
                       StringLiteral_20428,(MethodInfo *)0x0);
    if (bVar1) {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
                    /* try { // try from 0352c3d4 to 0362c3db has its CatchHandler @ 0352c674 */
      PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_19657,true,(MethodInfo *)0x0);
    }
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 0352c408 to 0362c40f has its CatchHandler @ 0352c65c */
                    /* try { // try from 0352c414 to 0362c41b has its CatchHandler @ 0352c654 */
    CHDGOFBHAFI__GMHKJNAIEAG(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

