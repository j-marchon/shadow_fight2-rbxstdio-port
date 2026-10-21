// MGNPHCAAEIO$$FDEPCEJJGLO @ RVA 0x340C870

void MGNPHCAAEIO__FDEPCEJJGLO
               (System_String_o *CJBJLOPIGFH,float *CKHKLAGDNPA,System_String_o **LFGKEPCBPKF,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_array *pSVar4;
  System_String_o *__this;
  long lVar5;
  
                    /* try { // try from 0350c890 to 0360c897 has its CatchHandler @ 0350c924 */
  if ((DAT_04568040 & 1) == 0) {
                    /* try { // try from 0350c898 to 0360c93b has its CatchHandler @ 0350c7e0 */
    FUN_01bab630(&StringLiteral_18292);
    DAT_04568040 = 1;
  }
  if ((CJBJLOPIGFH != (System_String_o *)0x0) &&
     (pSVar4 = System_String__Split(CJBJLOPIGFH,0x7c,0,(MethodInfo *)0x0),
     pSVar4 != (System_String_array *)0x0)) {
    if ((int)pSVar4->max_length != 0) {
      if (pSVar4->m_Items[0] == (System_String_o *)0x0) goto LAB_0350c994;
      iVar3 = System_String__LastIndexOf(pSVar4->m_Items[0],0x2f,(MethodInfo *)0x0);
      if ((int)pSVar4->max_length != 0) {
        __this = pSVar4->m_Items[0];
        if (-1 < iVar3) {
          if (__this == (System_String_o *)0x0) goto LAB_0350c994;
          __this = System_String__Substring(__this,iVar3 + 1,(MethodInfo *)0x0);
        }
        *LFGKEPCBPKF = __this;
        thunk_FUN_01c20e04(LFGKEPCBPKF,__this);
        *CKHKLAGDNPA = 1.0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350c890 with catch @ 0350c924
                        */
        uVar1 = (uint)pSVar4->max_length;
        if (1 < (int)uVar1) {
          lVar5 = 5;
          do {
                    /* try { // try from 0350c93c to 0360c93f has its CatchHandler @ 0350c954 */
            if (uVar1 <= (int)lVar5 - 4U) goto LAB_0350c998;
            if (pSVar4->m_Items[lVar5 + -4] == (System_String_o *)0x0) goto LAB_0350c994;
                    /* catch() { ... } // from try @ 0350c93c with catch @ 0350c954 */
            bVar2 = System_String__Equals
                              (pSVar4->m_Items[lVar5 + -4],StringLiteral_18292,5,(MethodInfo *)0x0);
            if (bVar2) {
              *CKHKLAGDNPA = -1.0;
              return;
            }
            uVar1 = (uint)pSVar4->max_length;
            lVar5 = lVar5 + 1;
          } while ((int)lVar5 + -4 < (int)uVar1);
        }
        return;
      }
    }
LAB_0350c998:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0350c994:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0350c994 to 0360c9bb has its CatchHandler @ 0350c9d0 */
  FUN_01bab8c8();
}

