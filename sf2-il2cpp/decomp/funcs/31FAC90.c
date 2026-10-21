// NLPJLHOEAOE$$KLFGNLODBBK @ RVA 0x31FAC90

void NLPJLHOEAOE__KLFGNLODBBK(NLPJLHOEAOE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  int64_t iVar2;
  int64_t iVar3;
  
  if ((DAT_04566ddf & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo);
    FUN_01bab630(&StringLiteral_8494);
    DAT_04566ddf = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8494,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo->_2).naturalAligment;
  if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)LBMOOFGGPEB_OPLNJMEEOLB_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar2 = AGILEPNENOH__IMAKPJNJIJF((MethodInfo *)0x0);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032fad50 to 033fafc3 has its CatchHandler @ 032fad50
                       catch() { ... } // from try @ 032fad50 with catch @ 032fad50
                       catch() { ... } // from try @ 032fafec with catch @ 032fad50
                       catch() { ... } // from try @ 032fb04c with catch @ 032fad50
                       catch() { ... } // from try @ 032fb12c with catch @ 032fad50
                       catch() { ... } // from try @ 032fb174 with catch @ 032fad50
                       catch() { ... } // from try @ 032fb1ac with catch @ 032fad50
                       catch() { ... } // from try @ 032fb1c8 with catch @ 032fad50
                       catch() { ... } // from try @ 032fb208 with catch @ 032fad50 */
    iVar2 = AGILEPNENOH__HCIGNMBPBOP((MethodInfo *)0x0);
    iVar3 = AGILEPNENOH__IMAKPJNJIJF((MethodInfo *)0x0);
    iVar2 = iVar2 - iVar3;
  }
  LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP
            ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,iVar2,(MethodInfo *)0x0);
  iVar2 = LBMOOFGGPEB_OPLNJMEEOLB__IMAKPJNJIJF
                    ((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,(MethodInfo *)0x0);
  if (0 < iVar2) {
    return;
  }
  LBMOOFGGPEB_OPLNJMEEOLB__EFDNABIEPAP((LBMOOFGGPEB_OPLNJMEEOLB_o *)IMMNELPBGIF,0,(MethodInfo *)0x0)
  ;
  return;
}

