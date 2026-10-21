// CGALNIOABHK$$GHPJIHEBELJ @ RVA 0x34474CC

/* WARNING: Removing unreachable block (ram,0x035477e8) */

void CGALNIOABHK__GHPJIHEBELJ
               (System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_KJFPGDFNFCL__o *JGHPAFEFEFB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  KJFPGDFNFCL_o *__this;
  long lVar7;
  KJFPGDFNFCL_array *pKVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04568243 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_set_Capacity__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568243 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
                    /* try { // try from 03547550 to 03647607 has its CatchHandler @ 03547550
                       catch() { ... } // from try @ 03547550 with catch @ 03547550
                       catch() { ... } // from try @ 03547610 with catch @ 03547550
                       catch() { ... } // from try @ 03547698 with catch @ 03547550
                       catch() { ... } // from try @ 035476bc with catch @ 03547550
                       catch() { ... } // from try @ 035476fc with catch @ 03547550 */
    iVar1 = (JGHPAFEFEFB->fields)._size;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,iVar4 + iVar1,
                 Method_System_Collections_Generic_List<KJFPGDFNFCL>_set_Capacity__);
      plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method
                                 );
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
                goto LAB_03547624;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
                    /* try { // try from 03547608 to 0364760f has its CatchHandler @ 035476a0 */
                    /* try { // try from 03547610 to 03647693 has its CatchHandler @ 03547550 */
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03547624:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_03547790;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_03547778;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_03547684;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03547684:
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 03547694 to 03647697 has its CatchHandler @ 0354769c */
          if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03547698 to 036476b7 has its CatchHandler @ 03547550 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547694 with catch @ 0354769c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03547608 with catch @ 035476a0
                        */
            bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035476b8 to 036476bb has its CatchHandler @ 035476e4 */
                    /* try { // try from 035476bc to 036476f3 has its CatchHandler @ 03547550 */
            if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar2) ||
               ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(AHDGNOJPPIB);
            }
          }
          __this = NEKMLJBFJFG__EOHMFJFFFIN(AHDGNOJPPIB,(MethodInfo *)0x0);
          if (__this != (KJFPGDFNFCL_o *)0x0) {
                    /* catch() { ... } // from try @ 035476b8 with catch @ 035476e4 */
            KJFPGDFNFCL__GIENGNEGHPJ(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
            lVar7 = Method_System_Collections_Generic_List<KJFPGDFNFCL>_Add__;
            pKVar8 = (JGHPAFEFEFB->fields)._items;
                    /* try { // try from 035476f4 to 036476fb has its CatchHandler @ 03547710 */
            (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
                    /* try { // try from 035476fc to 03647707 has its CatchHandler @ 03547550 */
            if (pKVar8 == (KJFPGDFNFCL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar3 = (JGHPAFEFEFB->fields)._size;
                    /* try { // try from 03547708 to 0364770f has its CatchHandler @ 03547710 */
            if (uVar3 < (uint)pKVar8->max_length) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035476f4 with catch @ 03547710
                       catch(type#2 @ 00000000) { ... } // from try @ 03547708 with catch @ 03547710
                        */
              (JGHPAFEFEFB->fields)._size = uVar3 + 1;
              pKVar8->m_Items[(int)uVar3] = __this;
              thunk_FUN_01c20e04(pKVar8->m_Items + (int)uVar3,__this);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                         (Il2CppObject *)__this,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03547778:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_035477ac;
    }
  }
LAB_03547790:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_035477ac:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

