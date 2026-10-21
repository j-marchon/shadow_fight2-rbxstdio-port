// KMAKOOHEKNB$$FIPNKCMHCLE @ RVA 0x2FF6FFC

void KMAKOOHEKNB__FIPNKCMHCLE
               (KMAKOOHEKNB_o *__this,float PGFAIJMMOHJ,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  uint uVar1;
  System_Single_array *pSVar2;
  
                    /* try { // try from 030f7004 to 031f7007 has its CatchHandler @ 030f7010 */
  if (0.0 < PGFAIJMMOHJ) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6fa0 with catch @ 030f7008
                       try { // try from 030f7008 to 031f7027 has its CatchHandler @ 030f6f50 */
    pSVar2 = (__this->fields).PKGBBMMLPKM;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6f90 with catch @ 030f700c
                        */
    if (pSVar2 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6fc0 with catch @ 030f7010
                       catch(type#1 @ 03f99f68) { ... } // from try @ 030f7004 with catch @ 030f7010
                        */
    uVar1 = (uint)pSVar2->max_length;
    if (JDEFJPHCNMM < (int)uVar1) {
      if (uVar1 <= (uint)JDEFJPHCNMM) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar2->m_Items[JDEFJPHCNMM] = PGFAIJMMOHJ;
    }
  }
                    /* try { // try from 030f7028 to 031f702b has its CatchHandler @ 030f703c */
  return;
}

