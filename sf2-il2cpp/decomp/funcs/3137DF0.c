// OFFIONDOEPM$$CDGICMOFKHE @ RVA 0x3137DF0

System_String_o * OFFIONDOEPM__CDGICMOFKHE(System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566709 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566709 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar1 = JMDPBFOCHHP__BHJOLIJDBLO(__this,BJEEDJEKAMF,(MethodInfo *)0x0),
     pJVar1 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0)) {
    return (pJVar1->fields).super.APBICPEOMOM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

