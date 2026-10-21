// NLPJLHOEAOE$$AEPHAFAHAGA @ RVA 0x31F9460

void NLPJLHOEAOE__AEPHAFAHAGA(NLPJLHOEAOE_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  PJKHAJKEHEL_array *pPVar3;
  
  if ((DAT_04566e2c & 1) == 0) {
                    /* try { // try from 032f9480 to 033f9487 has its CatchHandler @ 032f9594 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__);
    DAT_04566e2c = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
  __this_00 = (__this->fields).EKMEMBHMBCE;
  if (__this_00 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    pPVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pPVar3 != (PJKHAJKEHEL_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pPVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 032f94d4 to 033f94e7 has its CatchHandler @ 032f9590 */
        pPVar3->m_Items[(int)uVar1] = OKBIKHHKOEN;
        thunk_FUN_01c20e04(pPVar3->m_Items + (int)uVar1,OKBIKHHKOEN);
        return;
      }
                    /* try { // try from 032f94fc to 033f950f has its CatchHandler @ 032f9584 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)OKBIKHHKOEN,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

