// MCBGINPGJCD.<>c$$LJBNFGPHFBI @ RVA 0x3290408

bool MCBGINPGJCD_<>c__LJBNFGPHFBI(MCBGINPGJCD___c_o *__this,HOOAAGABMBL_o *i,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567315 & 1) == 0) {
    __this = (MCBGINPGJCD___c_o *)FUN_01bab630(&StringLiteral_10074);
    DAT_04567315 = 1;
  }
  if (i != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((i->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_10074,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

