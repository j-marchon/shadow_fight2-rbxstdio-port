// IOACNDPCIFK$$DBEDJLMLPIF @ RVA 0x33A8FAC

uint8_t IOACNDPCIFK__DBEDJLMLPIF(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  uint8_t uVar1;
  uint uVar2;
  System_Byte_array *pSVar3;
  
  pSVar3 = (__this->fields).LGFOJEKKBEN;
  if (pSVar3 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a8fe4 to 035a9183 has its CatchHandler @ 034a8fe4
                       catch() { ... } // from try @ 034a8fe4 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a9278 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a92c0 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a9308 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a9348 with catch @ 034a8fe4 */
    FUN_01bab8c8();
  }
  uVar2 = (__this->fields)._ABODODGIMOO_k__BackingField;
  if (uVar2 < (uint)pSVar3->max_length) {
    uVar1 = pSVar3->m_Items[(int)uVar2];
    (__this->fields)._ABODODGIMOO_k__BackingField = uVar2 + 1;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

