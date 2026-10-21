// FDJKKAFIEFB$$NLEKIDMGLIF @ RVA 0x35B3EAC

/* WARNING: Removing unreachable block (ram,0x036b4244) */

void FDJKKAFIEFB__NLEKIDMGLIF
               (FDJKKAFIEFB_o *__this,System_Xml_XmlNode_o *BKLLAGBLCDB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  DBNEEHGBCJD_o *__this_01;
  System_Collections_Generic_List_DBNEEHGBCJD__o *pSVar6;
  long lVar7;
  DBNEEHGBCJD_array *pDVar8;
  ulong uVar9;
  int *piVar10;
  int JJMCKHDALCF;
  System_String_o **ppSVar11;
  JBEHJGDKPHL_o *HPBCDOJPOAL;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036b3e40 with catch @ 036b3eac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036b3ea4 with catch @ 036b3eb0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036b3e24 with catch @ 036b3eb4
                        */
                    /* try { // try from 036b3ecc to 037b3ecf has its CatchHandler @ 036b3ef0 */
                    /* try { // try from 036b3ed0 to 037b3ef7 has its CatchHandler @ 036b3d90 */
  if ((DAT_04568eba & 1) == 0) {
    FUN_01bab630(&DBNEEHGBCJD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* catch() { ... } // from try @ 036b3ecc with catch @ 036b3ef0 */
                    /* try { // try from 036b3ef8 to 037b3eff has its CatchHandler @ 036b3f14 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 036b3f00 to 037b3f0b has its CatchHandler @ 036b3d90 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Add__);
                    /* try { // try from 036b3f0c to 037b3f13 has its CatchHandler @ 036b3f14 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Clear__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036b3ef8 with catch @ 036b3f14
                       catch(type#2 @ 00000000) { ... } // from try @ 036b3f0c with catch @ 036b3f14
                        */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5245);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568eba = 1;
  }
  if ((BKLLAGBLCDB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(BKLLAGBLCDB->klass->vtable)._16_get_Attributes.methodPtr)
                            (BKLLAGBLCDB,(BKLLAGBLCDB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_5245,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    ppSVar11 = &(__this->fields)._PDKPBHDALBH_k__BackingField;
    *ppSVar11 = pSVar3;
    thunk_FUN_01c20e04(ppSVar11,pSVar3);
    pSVar6 = (__this->fields).DIKCNPKCGJP;
    if (pSVar6 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
      length = (pSVar6->fields)._size;
      (pSVar6->fields)._size = 0;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
      }
      plVar4 = (long *)(*(BKLLAGBLCDB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (BKLLAGBLCDB,(BKLLAGBLCDB->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        JJMCKHDALCF = 0;
        do {
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_036b4068;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b4068:
          uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar9 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
            if (plVar4 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_036b41e4;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_036b41cc;
          }
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_036b40c8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_036b40c8:
          JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          HPBCDOJPOAL = (__this->fields).DEPJPOIKLFL;
          __this_01 = (DBNEEHGBCJD_o *)thunk_FUN_01bda818(DBNEEHGBCJD_TypeInfo);
          if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
               ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(JHMENEKPIBO);
            }
          }
          DBNEEHGBCJD___ctor(__this_01,JHMENEKPIBO,JJMCKHDALCF,HPBCDOJPOAL,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<DBNEEHGBCJD>_Add__;
          pSVar6 = (__this->fields).DIKCNPKCGJP;
          if (pSVar6 == (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pDVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pDVar8 == (DBNEEHGBCJD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pDVar8->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pDVar8->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04(pDVar8->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_01
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          JJMCKHDALCF = JJMCKHDALCF + 1;
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
LAB_036b41cc:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036b4200;
    }
  }
LAB_036b41e4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036b4200:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

