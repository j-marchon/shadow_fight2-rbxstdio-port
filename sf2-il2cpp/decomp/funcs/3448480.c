// CGALNIOABHK$$LJDOIGBJCMN @ RVA 0x3448480

/* WARNING: Removing unreachable block (ram,0x03548868) */

void CGALNIOABHK__LJDOIGBJCMN
               (System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_JADGCGOJLJB__o *JGHPAFEFEFB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int32_t OABGEBHHMBB;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *ACCIHBHMFPN;
  MDAPDLLMOMF_o *__this_00;
  long lVar8;
  JADGCGOJLJB_array *pJVar9;
  ulong uVar10;
  int *piVar11;
  
                    /* try { // try from 03548484 to 0364848f has its CatchHandler @ 035481b0 */
                    /* try { // try from 03548490 to 03648497 has its CatchHandler @ 03548498 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354847c with catch @ 03548498
                       catch(type#2 @ 00000000) { ... } // from try @ 03548490 with catch @ 03548498
                        */
  if ((DAT_04568247 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JADGCGOJLJB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_set_Capacity__);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568247 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    iVar1 = (JGHPAFEFEFB->fields)._size;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,iVar4 + iVar1,
                 Method_System_Collections_Generic_List<JADGCGOJLJB>_set_Capacity__);
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
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0354861c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0354861c:
          uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar10 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 == 0) goto LAB_03548800;
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_035487e8;
          }
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_0354867c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0354867c:
          plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar7);
          }
          __this = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this,StringLiteral_13991,(MethodInfo *)0x0);
          ACCIHBHMFPN = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
          OABGEBHHMBB = JADGCGOJLJB__PKKPCLFNEDC(ACCIHBHMFPN,(MethodInfo *)0x0);
          if (OABGEBHHMBB == 4) {
            __this_00 = (MDAPDLLMOMF_o *)thunk_FUN_01bda818(MDAPDLLMOMF_TypeInfo);
            MDAPDLLMOMF___ctor(__this_00,(MethodInfo *)0x0);
          }
          else {
            __this_00 = (MDAPDLLMOMF_o *)thunk_FUN_01bda818(JADGCGOJLJB_TypeInfo);
            JADGCGOJLJB___ctor((JADGCGOJLJB_o *)__this_00,OABGEBHHMBB,(MethodInfo *)0x0);
          }
          if (__this_00 == (MDAPDLLMOMF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(__this_00->klass->vtable)._7_HNIHOIAMDPC.methodPtr)
                    (__this_00,plVar7,(__this_00->klass->vtable)._7_HNIHOIAMDPC.method);
          lVar8 = Method_System_Collections_Generic_List<JADGCGOJLJB>_Add__;
          pJVar9 = (JGHPAFEFEFB->fields)._items;
          (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
          if (pJVar9 == (JADGCGOJLJB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar3 = (JGHPAFEFEFB->fields)._size;
          if (uVar3 < (uint)pJVar9->max_length) {
            (JGHPAFEFEFB->fields)._size = uVar3 + 1;
            pJVar9->m_Items[(int)uVar3] = (JADGCGOJLJB_o *)__this_00;
            thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar3,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_035487e8:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0354881c;
    }
  }
LAB_03548800:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0354881c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

