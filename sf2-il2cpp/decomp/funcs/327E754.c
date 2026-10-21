// OCMLPCKBHPN$$JFNPMNIJFJP @ RVA 0x327E754

/* WARNING: Removing unreachable block (ram,0x0337ea90) */

void OCMLPCKBHPN__JFNPMNIJFJP(System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *ELOCKFLGKNO_00;
  System_String_o *a;
  CAAJMGKIPIE_o *__this;
  System_Collections_Generic_List_CAAJMGKIPIE__o *__this_00;
  long lVar7;
  CAAJMGKIPIE_array *pCVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = ELOCKFLGKNO;
  if ((DAT_04567278 & 1) == 0) {
    FUN_01bab630(&CAAJMGKIPIE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CAAJMGKIPIE>_Add__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    auVar11 = FUN_01bab630(&StringLiteral_12807);
                    /* try { // try from 0337e7d0 to 0347e7d7 has its CatchHandler @ 0337e8ac */
    DAT_04567278 = 1;
  }
  if (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) {
    auVar11 = (*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                        (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
    plVar5 = auVar11._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar11._8_8_;
    auVar11 = auVar3 << 0x40;
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0337e88c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0337e88c:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0337ea2c;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0337ea14;
        }
        lVar7 = *plVar5;
                    /* try { // try from 0337e8a0 to 0347e8a3 has its CatchHandler @ 0337e8b0 */
                    /* try { // try from 0337e8a4 to 0347e8c3 has its CatchHandler @ 0337e6ec */
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337e834 with catch @ 0337e8a8
                        */
        if (uVar9 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337e7d0 with catch @ 0337e8ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337e8a0 with catch @ 0337e8b0
                        */
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0337e8ec;
            }
            uVar9 = uVar9 - 1;
                    /* try { // try from 0337e8c4 to 0347e8c7 has its CatchHandler @ 0337e8ec */
            piVar10 = piVar10 + 4;
                    /* try { // try from 0337e8c8 to 0347e8f3 has its CatchHandler @ 0337e6ec */
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0337e8ec:
                    /* catch() { ... } // from try @ 0337e8c4 with catch @ 0337e8ec */
                    /* try { // try from 0337e8f4 to 0347e8fb has its CatchHandler @ 0337e914 */
        ELOCKFLGKNO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 0337e8fc to 0347e90b has its CatchHandler @ 0337e6ec */
        if (ELOCKFLGKNO_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 0337e90c to 0347e913 has its CatchHandler @ 0337e914 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0337e8f4 with catch @ 0337e914
                       catch(type#2 @ 00000000) { ... } // from try @ 0337e90c with catch @ 0337e914
                        */
        if (((ELOCKFLGKNO_00->klass->_2).naturalAligment < bVar1) ||
           ((ELOCKFLGKNO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(ELOCKFLGKNO_00);
        }
        a = (System_String_o *)
            (*(ELOCKFLGKNO_00->klass->vtable)._8_unknown.methodPtr)
                      (ELOCKFLGKNO_00,(ELOCKFLGKNO_00->klass->vtable)._8_unknown.method);
        bVar4 = System_String__op_Equality(a,StringLiteral_12807,(MethodInfo *)0x0);
        if (bVar4) {
          __this = (CAAJMGKIPIE_o *)thunk_FUN_01bda818(CAAJMGKIPIE_TypeInfo);
          CAAJMGKIPIE___ctor(__this,ELOCKFLGKNO_00,(MethodInfo *)0x0);
          if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          lVar7 = Method_System_Collections_Generic_List<CAAJMGKIPIE>_Add__;
          __this_00 = OCMLPCKBHPN_TypeInfo->static_fields->EADAGMIKLJN;
          if (__this_00 == (System_Collections_Generic_List_CAAJMGKIPIE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pCVar8 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pCVar8 == (CAAJMGKIPIE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pCVar8->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pCVar8->m_Items[(int)uVar2] = __this;
            thunk_FUN_01c20e04(pCVar8->m_Items + (int)uVar2,__this);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0337ea14:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0337ea48;
    }
  }
LAB_0337ea2c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0337ea48:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

