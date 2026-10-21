// KAHMAJKJMBK$$IEPLAMBNBJN @ RVA 0x34BE8A8

void KAHMAJKJMBK__IEPLAMBNBJN(KAHMAJKJMBK_o *__this,JCHNBADDBGO_o *KDFALPIMMMI,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar4;
  JCHNBADDBGO_array *pJVar5;
  
  if ((DAT_045685fd & 1) == 0) {
                    /* catch() { ... } // from try @ 035be8e4 with catch @ 035be8cc
                       catch() { ... } // from try @ 035be924 with catch @ 035be8cc
                       catch() { ... } // from try @ 035bea18 with catch @ 035be8cc */
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__);
    DAT_045685fd = 1;
  }
  lVar3 = Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__;
  if (KDFALPIMMMI == (JCHNBADDBGO_o *)0x0) goto LAB_035bea44;
  iVar1 = (KDFALPIMMMI->fields).IDNBELKLCEL;
                    /* try { // try from 035be8e0 to 036be8e3 has its CatchHandler @ 035be8f4 */
                    /* try { // try from 035be8e4 to 036be90b has its CatchHandler @ 035be8cc */
  if (iVar1 == 3) {
                    /* try { // try from 035be90c to 036be923 has its CatchHandler @ 035bea10 */
    pSVar4 = (__this->fields).LNHNEEKANMO;
    if (pSVar4 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035bea44;
    pJVar5 = (pSVar4->fields)._items;
                    /* try { // try from 035be924 to 036be9ff has its CatchHandler @ 035be8cc */
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pJVar5 == (JCHNBADDBGO_array *)0x0) goto LAB_035bea44;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pJVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      pJVar5->m_Items[(int)uVar2] = KDFALPIMMMI;
      thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar2,KDFALPIMMMI);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)KDFALPIMMMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
LAB_035be970:
    pSVar4 = (__this->fields).FPKAGJKKCIN;
    lVar3 = Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__;
joined_r0x035be974:
    Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__ = lVar3;
    if (pSVar4 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035bea44;
    pJVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pJVar5 == (JCHNBADDBGO_array *)0x0) goto LAB_035bea44;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pJVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      pJVar5->m_Items[(int)uVar2] = KDFALPIMMMI;
      thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar2,KDFALPIMMMI);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)KDFALPIMMMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035be8e0 with catch @ 035be8f4
                        */
    if (iVar1 == 2) goto LAB_035be970;
    if (iVar1 == 1) {
      pSVar4 = (__this->fields).LNHNEEKANMO;
      goto joined_r0x035be974;
    }
  }
  lVar3 = Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__;
  pSVar4 = (__this->fields).DKGFCNANCMN;
  if (pSVar4 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
    pJVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pJVar5 != (JCHNBADDBGO_array *)0x0) {
      uVar2 = (pSVar4->fields)._size;
                    /* try { // try from 035bea00 to 036bea0f has its CatchHandler @ 035bea10 */
      if (uVar2 < (uint)pJVar5->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
                    /* catch() { ... } // from try @ 035be90c with catch @ 035bea10
                       catch() { ... } // from try @ 035bea00 with catch @ 035bea10 */
        pJVar5->m_Items[(int)uVar2] = KDFALPIMMMI;
                    /* try { // try from 035bea14 to 036bea17 has its CatchHandler @ 035bea20 */
                    /* try { // try from 035bea18 to 036bea23 has its CatchHandler @ 035be8cc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035bea14 with catch @ 035bea20
                        */
        thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar2,KDFALPIMMMI);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)KDFALPIMMMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_035bea44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

