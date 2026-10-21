// KLPJOKOFLJD.EDDJLFOOBCI$$Equals @ RVA 0x34B7CA8

bool KLPJOKOFLJD_EDDJLFOOBCI__Equals
               (KLPJOKOFLJD_EDDJLFOOBCI_o *__this,System_Byte_array *IMJHEANBDDA,
               System_Byte_array *DFEGBKMFBMM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((IMJHEANBDDA == (System_Byte_array *)0x0) || (DFEGBKMFBMM == (System_Byte_array *)0x0)) {
    bVar2 = IMJHEANBDDA == DFEGBKMFBMM;
  }
  else {
    iVar1 = (int)IMJHEANBDDA->max_length;
                    /* try { // try from 035b7cc0 to 036b7cc7 has its CatchHandler @ 035b7de0 */
    if (iVar1 == (int)DFEGBKMFBMM->max_length) {
      if (iVar1 < 1) {
        bVar2 = true;
      }
      else {
        iVar3 = 0;
        do {
          if (iVar3 == iVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0(__this);
          }
          lVar4 = (long)iVar3;
                    /* try { // try from 035b7ce0 to 036b7ceb has its CatchHandler @ 035b7dd8 */
          lVar5 = (long)iVar3;
          bVar2 = IMJHEANBDDA->m_Items[lVar4] == DFEGBKMFBMM->m_Items[lVar5];
          __this = (KLPJOKOFLJD_EDDJLFOOBCI_o *)(ulong)bVar2;
        } while ((iVar3 - iVar1 != -1) &&
                (iVar3 = iVar3 + 1, IMJHEANBDDA->m_Items[lVar4] == DFEGBKMFBMM->m_Items[lVar5]));
      }
    }
    else {
      bVar2 = false;
    }
  }
                    /* try { // try from 035b7d2c to 036b7d4f has its CatchHandler @ 035b7dd0 */
  return bVar2;
}

