// FCNNPBIIEOK$$NCNIIIGPJEO @ RVA 0x32AFA24

/* WARNING: Removing unreachable block (ram,0x033afd7c) */

JMDPBFOCHHP_EMDEPOFJFEF_o *
FCNNPBIIEOK__NCNIIIGPJEO(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  long *plVar5;
  JMDPBFOCHHP_EMDEPOFJFEF_o *__this;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  JMDPBFOCHHP_FNILDHLJBBJ_o *__this_00;
  long lVar7;
  JMDPBFOCHHP_FNILDHLJBBJ_array *pJVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *__this_01;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = LKILNGEECIJ;
  if ((DAT_04567440 & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_EMDEPOFJFEF_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_FNILDHLJBBJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    auVar11 = FUN_01bab630(&StringLiteral_4623);
    DAT_04567440 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar5 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_4623,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return (JMDPBFOCHHP_EMDEPOFJFEF_o *)0x0;
    }
    __this = (JMDPBFOCHHP_EMDEPOFJFEF_o *)thunk_FUN_01bda818(JMDPBFOCHHP_EMDEPOFJFEF_TypeInfo);
    JMDPBFOCHHP_EMDEPOFJFEF___ctor(__this,(MethodInfo *)0x0);
    auVar11 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
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
              goto LAB_033afb90;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033afb90:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return __this;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_033afd0c;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_033afcf4;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_033afbf0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033afbf0:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO);
          }
        }
        bVar4 = EIABCPKDEBD__LGKNNMNPKGD(JHMENEKPIBO,(MethodInfo *)0x0);
        if (!bVar4) {
          if (__this == (JMDPBFOCHHP_EMDEPOFJFEF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033afd6c to 034afd73 has its CatchHandler @ 033b0014 */
            FUN_01bab8c8();
          }
          __this_01 = (__this->fields).BAPMMGFEIDM;
          __this_00 = (JMDPBFOCHHP_FNILDHLJBBJ_o *)
                      thunk_FUN_01bda818(JMDPBFOCHHP_FNILDHLJBBJ_TypeInfo);
          JMDPBFOCHHP_FNILDHLJBBJ___ctor(__this_00,JHMENEKPIBO,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ>_Add__;
          if (__this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pJVar8 == (JMDPBFOCHHP_FNILDHLJBBJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pJVar8->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pJVar8->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pJVar8->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
LAB_033afcf4:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_033afd30;
    }
  }
LAB_033afd0c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
                    /* try { // try from 033afd18 to 034afd1f has its CatchHandler @ 033b006c */
LAB_033afd30:
                    /* try { // try from 033afd30 to 034afd33 has its CatchHandler @ 033aff40 */
                    /* try { // try from 033afd34 to 034afd6b has its CatchHandler @ 033af8d8 */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return __this;
}

