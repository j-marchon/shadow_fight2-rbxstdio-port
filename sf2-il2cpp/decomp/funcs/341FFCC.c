// HEFOANCOHDC$$OOPHKKNELPB @ RVA 0x341FFCC

/* WARNING: Removing unreachable block (ram,0x03520368) */

void HEFOANCOHDC__OOPHKKNELPB
               (HEFOANCOHDC_o *__this,System_Xml_XmlNode_o *CCIAONEIAII,
               System_Collections_Generic_Dictionary_string__ObscuredString__o *KGJIMFMKHCD,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *__this_00;
  ACCKJOAAEKB_o *__this_01;
  System_Collections_Generic_List_ACCKJOAAEKB__o *pSVar7;
  long lVar8;
  ACCKJOAAEKB_array *pAVar9;
  ulong uVar10;
  int *piVar11;
  
                    /* try { // try from 0351ffd0 to 0361ffdf has its CatchHandler @ 03520074 */
                    /* try { // try from 0351ffe0 to 0362006b has its CatchHandler @ 0351ff10 */
  if ((DAT_045680dd & 1) == 0) {
    FUN_01bab630(&ACCKJOAAEKB_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ACCKJOAAEKB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ACCKJOAAEKB>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11028);
    DAT_045680dd = 1;
  }
                    /* try { // try from 0352006c to 0362006f has its CatchHandler @ 03520078 */
                    /* try { // try from 03520070 to 03620093 has its CatchHandler @ 0351ff10 */
  if ((CCIAONEIAII != (System_Xml_XmlNode_o *)0x0) &&
     (plVar5 = (long *)(*(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (CCIAONEIAII,(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 != (long *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351ffd0 with catch @ 03520074
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352006c with catch @ 03520078
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351ffb4 with catch @ 0352007c
                        */
    iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if (0 < iVar4) {
      pSVar7 = (__this->fields).NLHLDLBGAKK;
      if (pSVar7 == (System_Collections_Generic_List_ACCKJOAAEKB__o *)0x0) goto LAB_03520360;
      length = (pSVar7->fields)._size;
                    /* try { // try from 03520094 to 03620097 has its CatchHandler @ 035200c0 */
                    /* try { // try from 03520098 to 036200cf has its CatchHandler @ 0351ff10 */
      (pSVar7->fields)._size = 0;
      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
                    /* catch() { ... } // from try @ 03520094 with catch @ 035200c0 */
    plVar5 = (long *)(*(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (CCIAONEIAII,(CCIAONEIAII->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 035200d0 to 036200d7 has its CatchHandler @ 035200ec */
                    /* try { // try from 035200d8 to 036200e3 has its CatchHandler @ 0351ff10 */
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
                    /* try { // try from 035200e4 to 036200eb has its CatchHandler @ 035200ec */
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0352015c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0352015c:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_035202fc;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_035202e4;
        }
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_035201bc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_035201bc:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        __this_00 = (System_String_o *)
                    (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                              (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__Equals(__this_00,StringLiteral_11028,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = (ACCKJOAAEKB_o *)thunk_FUN_01bda818(ACCKJOAAEKB_TypeInfo);
          ACCKJOAAEKB___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 == (ACCKJOAAEKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ACCKJOAAEKB__HNIHOIAMDPC(__this_01,AHDGNOJPPIB,KGJIMFMKHCD,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<ACCKJOAAEKB>_Add__;
          pSVar7 = (__this->fields).NLHLDLBGAKK;
          if (pSVar7 == (System_Collections_Generic_List_ACCKJOAAEKB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pAVar9 = (pSVar7->fields)._items;
          (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
          if (pAVar9 == (ACCKJOAAEKB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pAVar9->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pAVar9->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04(pAVar9->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)__this_01
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
LAB_03520360:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_035202e4:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03520318;
    }
  }
LAB_035202fc:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03520318:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

