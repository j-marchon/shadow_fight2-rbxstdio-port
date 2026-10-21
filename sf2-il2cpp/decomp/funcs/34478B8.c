// CGALNIOABHK$$KMMFOCJLFIF @ RVA 0x34478B8

/* WARNING: Removing unreachable block (ram,0x03547c9c) */

void CGALNIOABHK__KMMFOCJLFIF
               (System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_ABNLGBHKOCE__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *PJHODHEOHFN;
  ABNLGBHKOCE_o *__this;
  ABNLGBHKOCE_JBMHDDKONHC_o *__this_00;
  System_Collections_Generic_List_KJFPGDFNFCL__o *pSVar5;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar6;
  System_Collections_Generic_List_IIMNGGHGKOD__o *pSVar7;
  MethodInfo *pMVar8;
  MethodInfo *in_x3;
  long lVar9;
  ABNLGBHKOCE_array *pAVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04568241 & 1) == 0) {
    FUN_01bab630(&ABNLGBHKOCE_TypeInfo);
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_8605);
    DAT_04568241 = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03547a04;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03547a04:
    uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 03547bc0 with catch @ 03547bec */
                    /* try { // try from 03547bf4 to 03647bfb has its CatchHandler @ 03547c10 */
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
                    /* try { // try from 03547bfc to 03647c07 has its CatchHandler @ 03547abc */
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
                    /* try { // try from 03547c08 to 03647c0f has its CatchHandler @ 03547c10 */
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03547bf4 with catch @ 03547c10
                       catch(type#2 @ 00000000) { ... } // from try @ 03547c08 with catch @ 03547c10
                        */
      if (uVar11 == 0) goto LAB_03547c34;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03547a64;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03547a64:
    PJHODHEOHFN = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (PJHODHEOHFN != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((PJHODHEOHFN->klass->_2).naturalAligment < bVar1) ||
         ((PJHODHEOHFN->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(PJHODHEOHFN);
      }
    }
    __this = (ABNLGBHKOCE_o *)thunk_FUN_01bda818(ABNLGBHKOCE_TypeInfo);
                    /* try { // try from 03547abc to 03647b4f has its CatchHandler @ 03547abc
                       catch() { ... } // from try @ 03547abc with catch @ 03547abc
                       catch() { ... } // from try @ 03547b58 with catch @ 03547abc
                       catch() { ... } // from try @ 03547ba0 with catch @ 03547abc
                       catch() { ... } // from try @ 03547bc4 with catch @ 03547abc
                       catch() { ... } // from try @ 03547bfc with catch @ 03547abc */
    pMVar8 = (MethodInfo *)0x0;
    ABNLGBHKOCE___ctor(__this,PJHODHEOHFN,(MethodInfo *)0x0);
    __this_00 = (ABNLGBHKOCE_JBMHDDKONHC_o *)thunk_FUN_01bda818(ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
    ABNLGBHKOCE_JBMHDDKONHC___ctor(__this_00,(MethodInfo *)0x0);
    if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = CGALNIOABHK__GHPJIHEBELJ
                       (PJHODHEOHFN,(System_Collections_Generic_List_XmlNode__o *)0x0,pMVar8);
    if (__this_00 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_00->fields).AFFIHBMACFF = pSVar5;
    thunk_FUN_01c20e04();
    pSVar6 = CGALNIOABHK__MLJDPILPJDE
                       (StringLiteral_4577,PJHODHEOHFN,
                        (System_Collections_Generic_List_XmlNode__o *)0x0,in_x3);
    (__this_00->fields).KPFGHBEKJIM = pSVar6;
    thunk_FUN_01c20e04();
    pMVar8 = (MethodInfo *)0x0;
    pSVar6 = CGALNIOABHK__MLJDPILPJDE
                       (StringLiteral_8605,PJHODHEOHFN,
                        (System_Collections_Generic_List_XmlNode__o *)0x0,in_x3);
    (__this_00->fields).KFLHLLDPBIC = pSVar6;
    thunk_FUN_01c20e04();
                    /* try { // try from 03547b50 to 03647b57 has its CatchHandler @ 03547ba8 */
                    /* try { // try from 03547b58 to 03647b9b has its CatchHandler @ 03547abc */
    pSVar7 = CGALNIOABHK__OPECGOMJLLP
                       (PJHODHEOHFN,(System_Collections_Generic_List_XmlNode__o *)0x0,pMVar8);
    (__this_00->fields).NEIJJHEFLHP = pSVar7;
    thunk_FUN_01c20e04();
    if (__this == (ABNLGBHKOCE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ABNLGBHKOCE__LLKAJAOEELF(__this,__this_00,(MethodInfo *)0x0);
    lVar9 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
    if (KENFFDHLNDA == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar10 = (KENFFDHLNDA->fields)._items;
    (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
    if (pAVar10 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03547b9c to 03647b9f has its CatchHandler @ 03547ba4 */
    uVar2 = (KENFFDHLNDA->fields)._size;
                    /* try { // try from 03547ba0 to 03647bbf has its CatchHandler @ 03547abc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547b9c with catch @ 03547ba4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547b50 with catch @ 03547ba8
                        */
    if (uVar2 < (uint)pAVar10->max_length) {
      (KENFFDHLNDA->fields)._size = uVar2 + 1;
      pAVar10->m_Items[(int)uVar2] = __this;
                    /* try { // try from 03547bc0 to 03647bc3 has its CatchHandler @ 03547bec */
      thunk_FUN_01c20e04(pAVar10->m_Items + (int)uVar2,__this);
                    /* try { // try from 03547bc4 to 03647bf3 has its CatchHandler @ 03547abc */
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03547c50;
    }
  }
LAB_03547c34:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03547c50:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

