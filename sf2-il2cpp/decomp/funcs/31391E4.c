// NJNCPNBIPCD$$EDDJCMBCEDA @ RVA 0x31391E4

KKEKJDLEJIL_o *
NJNCPNBIPCD__EDDJCMBCEDA(NJNCPNBIPCD_o *__this,KKEKJDLEJIL_o *CGLPGJBDIDL,MethodInfo *method)

{
  bool bVar1;
  KKEKJDLEJIL_o *JGHIJMJNJLE;
  System_String_o *DIHAKADKIKM;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  HOOAAGABMBL_o *pHVar2;
  int iVar3;
  
  if ((DAT_04566716 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11045);
    FUN_01bab630(&StringLiteral_13839);
    FUN_01bab630(&StringLiteral_601);
    DAT_04566716 = 1;
  }
  JGHIJMJNJLE = NJNCPNBIPCD__JKEODODFIOD(__this,CGLPGJBDIDL,method);
  iVar3 = 0x1e;
  do {
    bVar1 = FIKENOMMMBH__OLAIMOFPEIL(false,(MethodInfo *)0x0);
    if (bVar1) {
      return JGHIJMJNJLE;
    }
    pHVar2 = (__this->fields).PJKFHNAHDEK;
                    /* try { // try from 0323928c to 0333939b has its CatchHandler @ 0323928c
                       catch() { ... } // from try @ 0323928c with catch @ 0323928c
                       catch() { ... } // from try @ 032393c0 with catch @ 0323928c
                       catch() { ... } // from try @ 032393fc with catch @ 0323928c
                       catch() { ... } // from try @ 03239428 with catch @ 0323928c
                       catch() { ... } // from try @ 03239468 with catch @ 0323928c */
    (__this->fields).FDCEMGNCPCI = (__this->fields).FDCEMGNCPCI + 1;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      DIHAKADKIKM = System_String__Concat
                              (StringLiteral_11045,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,
                               StringLiteral_601,(MethodInfo *)0x0);
      BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                    FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      method = (MethodInfo *)0x0;
      BBBLOLJAMJP->m_Items[0] = 8;
      Nekki_Utils_DetailedLog__Warning(DIHAKADKIKM,BBBLOLJAMJP,(MethodInfo *)0x0);
    }
    JGHIJMJNJLE = NJNCPNBIPCD__JKEODODFIOD(__this,JGHIJMJNJLE,method);
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      NJNCPNBIPCD__HJNOLAEOPJF((NJNCPNBIPCD_o *)JGHIJMJNJLE,StringLiteral_13839,method);
      return CGLPGJBDIDL;
    }
  } while( true );
}

