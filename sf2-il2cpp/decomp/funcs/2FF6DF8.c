// KMAKOOHEKNB$$GOFGJILDJLA @ RVA 0x2FF6DF8

float KMAKOOHEKNB__GOFGJILDJLA(KMAKOOHEKNB_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Single_array *pSVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  System_Single_array *pSVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  
  if (JDEFJPHCNMM < 0) {
    fVar10 = 0.0;
                    /* try { // try from 030f6ea8 to 031f6eab has its CatchHandler @ 030f6ef4 */
  }
  else {
    iVar2 = (__this->fields).JDHLILCAAIL;
    lVar6 = (long)iVar2;
    pSVar3 = (__this->fields).OECOHAFDPLH;
    if (iVar2 < JDEFJPHCNMM) {
      pSVar7 = (__this->fields).PKGBBMMLPKM;
      lVar5 = 0;
      pfVar8 = pSVar3->m_Items + lVar6 + 1;
      do {
        iVar4 = (int)lVar5;
        if (pSVar7 == (System_Single_array *)0x0) {
LAB_030f6ee8:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6d50 with catch @ 030f6ee4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6ecc with catch @ 030f6ee8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6eac with catch @ 030f6eec
                        */
          (__this->fields).JDHLILCAAIL = iVar2 + iVar4 + 1;
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6e44 with catch @ 030f6ef0
                        */
          FUN_01bab8c8();
        }
        uVar9 = iVar2 + iVar4 + 1;
                    /* try { // try from 030f6e44 to 031f6e63 has its CatchHandler @ 030f6ef0 */
        if ((uint)pSVar7->max_length <= uVar9) {
LAB_030f6ecc:
                    /* try { // try from 030f6ecc to 031f6ed3 has its CatchHandler @ 030f6ee8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6de0 with catch @ 030f6ed4
                       try { // try from 030f6ed4 to 031f6f0b has its CatchHandler @ 030f6cf8 */
          (__this->fields).JDHLILCAAIL = iVar2 + iVar4 + 1;
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6dcc with catch @ 030f6ed8
                        */
          FUN_01bab8d0();
        }
        if (pSVar3 == (System_Single_array *)0x0) goto LAB_030f6ee8;
        uVar1 = (uint)pSVar3->max_length;
        if (uVar1 <= uVar9) goto LAB_030f6ecc;
        fVar10 = pSVar7->m_Items[lVar6 + lVar5 + 1];
        *pfVar8 = fVar10;
                    /* try { // try from 030f6e64 to 031f6ea7 has its CatchHandler @ 030f6cf8 */
        if (-1 < lVar6 + lVar5) {
          fVar10 = fVar10 + (__this->fields).KPGBDEPEHJD;
          *pfVar8 = fVar10;
          if (uVar1 <= (uint)(iVar2 + iVar4)) goto LAB_030f6ecc;
          *pfVar8 = fVar10 + pfVar8[-1];
        }
        lVar5 = lVar5 + 1;
        pfVar8 = pfVar8 + 1;
      } while ((lVar6 - (ulong)(uint)JDEFJPHCNMM) + lVar5 != 0);
      (__this->fields).JDHLILCAAIL = JDEFJPHCNMM;
    }
    else {
                    /* try { // try from 030f6eac to 031f6ebf has its CatchHandler @ 030f6eec */
      if (pSVar3 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    if ((uint)pSVar3->max_length <= (uint)JDEFJPHCNMM) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6ea8 with catch @ 030f6ef4
                        */
      FUN_01bab8d0();
    }
                    /* try { // try from 030f6ec0 to 031f6ec7 has its CatchHandler @ 030f6cf8 */
    fVar10 = pSVar3->m_Items[JDEFJPHCNMM];
  }
                    /* try { // try from 030f6ec8 to 031f6ecb has its CatchHandler @ 030f6ee0 */
  return fVar10;
}

