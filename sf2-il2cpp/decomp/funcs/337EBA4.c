// IDDIABHBDEE$$KIODJNHIINM @ RVA 0x337EBA4

/* WARNING: Removing unreachable block (ram,0x0347ee90) */
/* WARNING: Removing unreachable block (ram,0x0347eee4) */

void IDDIABHBDEE__KIODJNHIINM
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_Collections_Generic_List_XmlNode__o *EBLEDKMJMJN;
  System_Collections_Generic_IEnumerable_XmlNode__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar7;
  long lVar8;
  System_Xml_XmlNode_array *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  
  if ((DAT_04567b9a & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<XmlNode>_TypeInfo);
    DAT_04567b9a = 1;
  }
  if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 0347eec8 to 0357eecb has its CatchHandler @ 0347eed8 */
    return;
  }
  EBLEDKMJMJN = (System_Collections_Generic_List_XmlNode__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<XmlNode>_TypeInfo);
                    /* try { // try from 0347ec60 to 0357ec87 has its CatchHandler @ 0347eeac */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)EBLEDKMJMJN,
             Method_System_Collections_Generic_List<XmlNode>__ctor__);
  method_00 = extraout_x1;
  if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pSVar3 = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,method_00);
  if (pSVar3 == (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = pSVar3->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar11;
        goto LAB_0347ecd8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
                    /* try { // try from 0347ecbc to 0357ece7 has its CatchHandler @ 0347eea8 */
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pSVar3,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_0347ecd8:
  plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0347eee0 to 0357ef47 has its CatchHandler @ 0347ef5c */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 0347ed24 to 0357ed2b has its CatchHandler @ 0347ee9c */
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0347ed48 to 0357ed4f has its CatchHandler @ 0347ee90 */
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0347ed50;
        }
        uVar10 = uVar10 - 1;
                    /* try { // try from 0347ed2c to 0357ed37 has its CatchHandler @ 0347eea0 */
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0347ed50:
                    /* try { // try from 0347ed58 to 0357ed5f has its CatchHandler @ 0347ee94 */
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_0347ee84;
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0347ee5c;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 0347ed60 to 0357ed6f has its CatchHandler @ 0347ee88 */
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0347edac;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_0347edac:
                    /* try { // try from 0347edac to 0357edc7 has its CatchHandler @ 0347ee8c */
    item = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar8 = Method_System_Collections_Generic_List<XmlNode>_Add__;
    if (EBLEDKMJMJN == (System_Collections_Generic_List_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = (EBLEDKMJMJN->fields)._items;
                    /* try { // try from 0347edc8 to 0357ee57 has its CatchHandler @ 0347eb68 */
    (EBLEDKMJMJN->fields)._version = (EBLEDKMJMJN->fields)._version + 1;
    if (pSVar9 == (System_Xml_XmlNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0347eec8 with catch @ 0347eed8 */
      FUN_01bab8c8();
    }
    uVar2 = (EBLEDKMJMJN->fields)._size;
    if (uVar2 < (uint)pSVar9->max_length) {
      (EBLEDKMJMJN->fields)._size = uVar2 + 1;
      pSVar9->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)EBLEDKMJMJN,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
                    /* try { // try from 0347ee58 to 0357ee5f has its CatchHandler @ 0347eeb0 */
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0347ee6c to 0357ee6f has its CatchHandler @ 0347ee98 */
                    /* try { // try from 0347ee70 to 0357ee73 has its CatchHandler @ 0347eb68 */
                    /* try { // try from 0347ee74 to 0357ee77 has its CatchHandler @ 0347ee80 */
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0347ee78;
    }
  }
LAB_0347ee5c:
                    /* try { // try from 0347ee60 to 0357ee63 has its CatchHandler @ 0347eea4 */
                    /* try { // try from 0347ee64 to 0357ee67 has its CatchHandler @ 0347ee98 */
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
                    /* try { // try from 0347ee68 to 0357ee6b has its CatchHandler @ 0347ee84 */
LAB_0347ee78:
                    /* try { // try from 0347ee78 to 0357eec7 has its CatchHandler @ 0347eb68 */
                    /* catch() { ... } // from try @ 0347ee74 with catch @ 0347ee80 */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0347ee84:
                    /* catch() { ... } // from try @ 0347ee68 with catch @ 0347ee84 */
                    /* catch() { ... } // from try @ 0347ed60 with catch @ 0347ee88 */
                    /* catch() { ... } // from try @ 0347edac with catch @ 0347ee8c */
                    /* catch() { ... } // from try @ 0347ed58 with catch @ 0347ee94 */
                    /* catch() { ... } // from try @ 0347ee64 with catch @ 0347ee98
                       catch() { ... } // from try @ 0347ee6c with catch @ 0347ee98 */
                    /* catch() { ... } // from try @ 0347ed24 with catch @ 0347ee9c */
                    /* catch() { ... } // from try @ 0347ed2c with catch @ 0347eea0 */
                    /* catch() { ... } // from try @ 0347ee60 with catch @ 0347eea4 */
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0347ecbc with catch @ 0347eea8 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0347ec60 with catch @ 0347eeac */
                    /* catch() { ... } // from try @ 0347ee58 with catch @ 0347eeb0 */
  BBBBKBBFNOG__HNIHOIAMDPC(EBLEDKMJMJN,(MethodInfo *)0x0);
  return;
}

