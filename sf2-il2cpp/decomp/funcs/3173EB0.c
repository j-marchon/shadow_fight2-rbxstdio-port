// HEGNACFOHEB$$EPBENPDCBFE @ RVA 0x3173EB0

bool HEGNACFOHEB__EPBENPDCBFE(HEGNACFOHEB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  
  if ((DAT_04566948 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_12438);
    DAT_04566948 = 1;
  }
  iVar1 = (__this->fields).JBNGADJBDHB;
  if (iVar1 == 1) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_03273f80:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03273f80 to 03373f8b has its CatchHandler @ 03273e40 */
      FUN_01bab8c8();
    }
    iVar3 = (AHEFOIOKDOK->fields).DJCGMAELDCG;
  }
  else if (iVar1 == 0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03273f80;
    iVar3 = (AHEFOIOKDOK->fields).EOAEIECDCLC;
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12438,(MethodInfo *)0x0);
    iVar3 = 0;
  }
  if (iVar3 < (__this->fields).GNBCPIBKFPA) {
    bVar2 = false;
  }
  else {
    bVar2 = iVar3 <= (__this->fields).IIIKGINABJD;
  }
                    /* try { // try from 03273f68 to 03373f77 has its CatchHandler @ 03273f78 */
                    /* catch() { ... } // from try @ 03273e90 with catch @ 03273f78
                       catch() { ... } // from try @ 03273f68 with catch @ 03273f78 */
                    /* try { // try from 03273f7c to 03373f7f has its CatchHandler @ 03273f88 */
  return (bool)(bVar2 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

