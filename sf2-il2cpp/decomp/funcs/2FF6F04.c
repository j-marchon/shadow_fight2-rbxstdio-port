// KMAKOOHEKNB$$HGJGLBLDDHF @ RVA 0x2FF6F04

float KMAKOOHEKNB__HGJGLBLDDHF(KMAKOOHEKNB_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  System_Single_array *pSVar1;
  float fVar2;
  
  if (JDEFJPHCNMM < 0) {
                    /* try { // try from 030f6f2c to 031f6f37 has its CatchHandler @ 030f6f4c */
    fVar2 = 0.0;
  }
  else {
                    /* try { // try from 030f6f0c to 031f6f0f has its CatchHandler @ 030f6f20 */
    pSVar1 = (__this->fields).PKGBBMMLPKM;
    if (pSVar1 == (System_Single_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f6f38 to 031f6f43 has its CatchHandler @ 030f6cf8 */
      FUN_01bab8c8();
    }
    if ((uint)pSVar1->max_length <= (uint)JDEFJPHCNMM) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* catch() { ... } // from try @ 030f6f0c with catch @ 030f6f20 */
    fVar2 = pSVar1->m_Items[(uint)JDEFJPHCNMM];
  }
  return fVar2;
}

