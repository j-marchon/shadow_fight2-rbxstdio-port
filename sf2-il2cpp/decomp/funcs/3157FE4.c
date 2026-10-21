// HPEENDCCJND$$PFHOGFBJGDE @ RVA 0x3157FE4

System_String_o *
HPEENDCCJND__PFHOGFBJGDE(HPEENDCCJND_o *__this,System_String_array *FBFHONMMDMM,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  System_Random_o *pSVar5;
  
                    /* catch() { ... } // from try @ 03257e10 with catch @ 03257fe4 */
                    /* catch() { ... } // from try @ 03257e00 with catch @ 03257fe8 */
                    /* catch() { ... } // from try @ 03257ddc with catch @ 03257fec */
                    /* catch() { ... } // from try @ 03257dcc with catch @ 03257ff0 */
                    /* catch() { ... } // from try @ 03257dac with catch @ 03257ff4 */
  if ((FBFHONMMDMM == (System_String_array *)0x0) ||
     (pSVar5 = (__this->fields).NBAAKDGJIEI, pSVar5 == (System_Random_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03257c58 with catch @ 03258038 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03257fd8 with catch @ 03257ff8 */
                    /* catch() { ... } // from try @ 03257d7c with catch @ 03257ffc */
                    /* catch() { ... } // from try @ 03257d9c with catch @ 03258000 */
                    /* catch() { ... } // from try @ 03257d4c with catch @ 03258004 */
                    /* catch() { ... } // from try @ 03257d6c with catch @ 03258008 */
  iVar3 = (int)FBFHONMMDMM->max_length + -1;
                    /* catch() { ... } // from try @ 03257d3c with catch @ 0325800c */
  iVar4 = (*(pSVar5->klass->vtable)._5_Next.methodPtr)
                    (pSVar5,(pSVar5->klass->vtable)._5_Next.method);
                    /* catch() { ... } // from try @ 03257d1c with catch @ 03258010 */
                    /* catch() { ... } // from try @ 03257c1c with catch @ 03258014 */
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar4 / iVar3;
  }
                    /* catch() { ... } // from try @ 03257c6c with catch @ 03258018 */
  uVar1 = iVar4 - iVar2 * iVar3;
                    /* catch() { ... } // from try @ 03257c38 with catch @ 0325801c */
                    /* catch() { ... } // from try @ 03257fd0 with catch @ 03258020 */
  if (uVar1 < (uint)FBFHONMMDMM->max_length) {
                    /* catch() { ... } // from try @ 03257fcc with catch @ 03258024 */
                    /* catch() { ... } // from try @ 03257fc8 with catch @ 03258028 */
                    /* catch() { ... } // from try @ 03257c90 with catch @ 0325802c */
                    /* catch() { ... } // from try @ 03257cdc with catch @ 03258030 */
                    /* catch() { ... } // from try @ 03257c50 with catch @ 03258034 */
    return FBFHONMMDMM->m_Items[(int)uVar1];
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03257fc4 with catch @ 0325803c */
  FUN_01bab8d0();
}

