// NFGLEDADCGL$$BJPAKLCFKPK @ RVA 0x316B108

void NFGLEDADCGL__BJPAKLCFKPK(NFGLEDADCGL_o *__this,HEFOANCOHDC_o *CJNHFNHJHPE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  PJKHAJKEHEL_o *pPVar3;
  HEFOANCOHDC_array *pHVar4;
  
  if ((DAT_045668f3 & 1) == 0) {
                    /* try { // try from 0326b124 to 0336b14b has its CatchHandler @ 0326b510 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    DAT_045668f3 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
  pPVar3 = (__this->fields).MFLNIMCFPDK;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    __this_00 = (pPVar3->fields).EHDILMGPDDN;
    if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      pHVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pHVar4 != (HEFOANCOHDC_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pHVar4->max_length) {
                    /* try { // try from 0326b180 to 0336b1a7 has its CatchHandler @ 0326b50c */
          (__this_00->fields)._size = uVar1 + 1;
          pHVar4->m_Items[(int)uVar1] = CJNHFNHJHPE;
          thunk_FUN_01c20e04(pHVar4->m_Items + (int)uVar1,CJNHFNHJHPE);
          return;
        }
                    /* try { // try from 0326b1a8 to 0336b4eb has its CatchHandler @ 0326adb8 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)CJNHFNHJHPE,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

