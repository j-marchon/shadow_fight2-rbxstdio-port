// NGJHCIGFLFD$$NDDOJNBEGNE @ RVA 0x31172B0

/* WARNING: Removing unreachable block (ram,0x03217588) */

void NGJHCIGFLFD__NDDOJNBEGNE
               (NGJHCIGFLFD_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  OANBNKOOJFH_o *item;
  System_Collections_Generic_List_OANBNKOOJFH__o *pSVar5;
  long lVar6;
  OANBNKOOJFH_array *pOVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045665c1 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 032172e4 to 033172f3 has its CatchHandler @ 03217430 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__);
                    /* try { // try from 032172f8 to 03317303 has its CatchHandler @ 0321741c */
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045665c1 = 1;
  }
  pSVar5 = (__this->fields).KDIMDBHMBEM;
  if (pSVar5 != (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
                    /* try { // try from 0321734c to 03317363 has its CatchHandler @ 03217430 */
    if ((MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (MNPCOGBCAED,
                                    (MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
                    /* try { // try from 03217368 to 03317387 has its CatchHandler @ 03217418 */
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* try { // try from 032173b4 to 033173cf has its CatchHandler @ 03217410 */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_032173e0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 032173d0 to 03317407 has its CatchHandler @ 03217104 */
LAB_032173e0:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_03217534;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0321751c;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* try { // try from 03217408 to 0331740b has its CatchHandler @ 03217424 */
                    /* try { // try from 0321740c to 03317447 has its CatchHandler @ 03217104 */
                    /* catch() { ... } // from try @ 032173b4 with catch @ 03217410 */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 03217288 with catch @ 03217430
                       catch() { ... } // from try @ 032172e4 with catch @ 03217430
                       catch() { ... } // from try @ 0321734c with catch @ 03217430 */
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03217440;
            }
                    /* catch() { ... } // from try @ 0321738c with catch @ 03217414 */
            uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 03217368 with catch @ 03217418 */
            piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 032172f8 with catch @ 0321741c */
          } while (uVar8 != 0);
        }
                    /* catch() { ... } // from try @ 03217298 with catch @ 03217420 */
                    /* catch() { ... } // from try @ 03217408 with catch @ 03217424 */
                    /* catch() { ... } // from try @ 0321723c with catch @ 03217428 */
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
                    /* catch() { ... } // from try @ 03217228 with catch @ 0321742c */
LAB_03217440:
                    /* try { // try from 03217448 to 0331744b has its CatchHandler @ 03217474 */
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 0321744c to 03317483 has its CatchHandler @ 03217104 */
        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 03217448 with catch @ 03217474 */
          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        item = CKMOFDBAEKH__PLANLODIOHG(AHDGNOJPPIB,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__;
                    /* try { // try from 03217484 to 0331748b has its CatchHandler @ 032174a0 */
        if (item != (OANBNKOOJFH_o *)0x0) {
                    /* try { // try from 0321748c to 03317497 has its CatchHandler @ 03217104 */
          pSVar5 = (__this->fields).KDIMDBHMBEM;
          if (pSVar5 == (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03217498 to 0331749f has its CatchHandler @ 032174a0 */
          pOVar7 = (pSVar5->fields)._items;
                    /* catch() { ... } // from try @ 03217484 with catch @ 032174a0
                       catch() { ... } // from try @ 03217498 with catch @ 032174a0 */
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pOVar7 == (OANBNKOOJFH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pOVar7->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pOVar7->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pOVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0321751c:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03217550;
    }
  }
LAB_03217534:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03217550:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

