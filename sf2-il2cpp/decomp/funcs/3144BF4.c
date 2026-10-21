// KKLJIDJBFEI$$JCLPLBEJHGM @ RVA 0x3144BF4

void KKLJIDJBFEI__JCLPLBEJHGM(KKLJIDJBFEI_o *__this,CFEFALDOEMD_o *PODMLLJBEKK,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MethodInfo *method_00;
  
                    /* try { // try from 03244c10 to 03344e8b has its CatchHandler @ 03244c10
                       catch() { ... } // from try @ 03244c10 with catch @ 03244c10
                       catch() { ... } // from try @ 032450c0 with catch @ 03244c10
                       catch() { ... } // from try @ 03245178 with catch @ 03244c10
                       catch() { ... } // from try @ 03245180 with catch @ 03244c10
                       catch() { ... } // from try @ 03245274 with catch @ 03244c10 */
  if ((DAT_04566773 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11546);
    DAT_04566773 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 6;
      Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11546,BBBLOLJAMJP,(MethodInfo *)0x0);
      KKLJIDJBFEI__FJOMLDLFJPI(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

