// PJKHAJKEHEL$$FFCGJEKIIPE @ RVA 0x3044C10

/* WARNING: Removing unreachable block (ram,0x03145180) */

void PJKHAJKEHEL__FFCGJEKIIPE(System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *DMDFAKNEPGH;
  LDHGBBPECKF_o *__this;
  System_Collections_Generic_List_LDHGBBPECKF__o *pSVar8;
  System_String_o **ppSVar9;
  long lVar10;
  LDHGBBPECKF_array *pLVar11;
  ulong uVar12;
  int *piVar13;
  float fVar14;
  
  if ((DAT_04565dc4 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LDHGBBPECKF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LDHGBBPECKF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LDHGBBPECKF>_Clear__);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_7354);
    FUN_01bab630(&StringLiteral_3862);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_5617);
    FUN_01bab630(&StringLiteral_10217);
    DAT_04565dc4 = 1;
  }
  if ((ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                         (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_7354,(MethodInfo *)0x0);
    fVar14 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar4,0.0,(MethodInfo *)0x0);
    if ((PJKHAJKEHEL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PJKHAJKEHEL_TypeInfo->static_fields->NDMAOLKNKIA = fVar14;
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                       (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_5617,(MethodInfo *)0x0);
      fVar14 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar4,0.0,(MethodInfo *)0x0);
      pSVar8 = PJKHAJKEHEL_TypeInfo->static_fields->KCAOHMFJGIC;
      PJKHAJKEHEL_TypeInfo->static_fields->GCGABMPFACD = fVar14;
      if (pSVar8 != (System_Collections_Generic_List_LDHGBBPECKF__o *)0x0) {
        length = (pSVar8->fields)._size;
        (pSVar8->fields)._size = 0;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
        }
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                           (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_10217,(MethodInfo *)0x0);
          pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
          ppSVar9 = &PJKHAJKEHEL_TypeInfo->static_fields->DFNGFNCEDEG;
          *ppSVar9 = pSVar5;
          thunk_FUN_01c20e04(ppSVar9,pSVar5);
          plVar6 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (ELOCKFLGKNO,
                                      (ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
          if (plVar6 != (long *)0x0) {
                    /* try { // try from 03144e14 to 03244ebf has its CatchHandler @ 03144e14
                       catch() { ... } // from try @ 03144e14 with catch @ 03144e14
                       catch() { ... } // from try @ 03144f08 with catch @ 03144e14
                       catch() { ... } // from try @ 03144f84 with catch @ 03144e14 */
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0))
            ;
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_03144ea8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03144ea8:
              uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
              if ((uVar12 & 1) == 0) {
                plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
                if (plVar6 == (long *)0x0) {
                  return;
                }
                lVar10 = *plVar6;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 == 0) goto LAB_0314510c;
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                goto LAB_031450f4;
              }
              lVar10 = *plVar6;
                    /* try { // try from 03144ec0 to 03244ecf has its CatchHandler @ 03144f44 */
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03144f00 to 03244f07 has its CatchHandler @ 03144f40 */
                    puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_03144f08;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                    /* try { // try from 03144ee4 to 03244ee7 has its CatchHandler @ 03144f3c */
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03144f08:
                    /* try { // try from 03144f08 to 03244f5b has its CatchHandler @ 03144e14 */
              DMDFAKNEPGH = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
              if (DMDFAKNEPGH != (System_Xml_XmlNode_o *)0x0) {
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03144ee4 with catch @ 03144f3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03144f00 with catch @ 03144f40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03144ec0 with catch @ 03144f44
                        */
                if (((DMDFAKNEPGH->klass->_2).naturalAligment < bVar1) ||
                   ((DMDFAKNEPGH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(DMDFAKNEPGH);
                }
              }
              __this = (LDHGBBPECKF_o *)thunk_FUN_01bda818(LDHGBBPECKF_TypeInfo);
              LDHGBBPECKF___ctor(__this,(MethodInfo *)0x0);
                    /* try { // try from 03144f5c to 03244f5f has its CatchHandler @ 03144f6c */
              if ((PJKHAJKEHEL_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03144f5c with catch @ 03144f6c */
              }
              lVar10 = Method_System_Collections_Generic_List<LDHGBBPECKF>_Add__;
              pSVar8 = PJKHAJKEHEL_TypeInfo->static_fields->KCAOHMFJGIC;
                    /* try { // try from 03144f78 to 03244f83 has its CatchHandler @ 03144f98 */
              if (pSVar8 == (System_Collections_Generic_List_LDHGBBPECKF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pLVar11 = (pSVar8->fields)._items;
                    /* try { // try from 03144f84 to 03244f8f has its CatchHandler @ 03144e14 */
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                    /* try { // try from 03144f90 to 03244f97 has its CatchHandler @ 03144f98 */
              if (pLVar11 == (LDHGBBPECKF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar8->fields)._size;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03144f78 with catch @ 03144f98
                       catch(type#2 @ 00000000) { ... } // from try @ 03144f90 with catch @ 03144f98
                        */
              if (uVar2 < (uint)pLVar11->max_length) {
                (pSVar8->fields)._size = uVar2 + 1;
                pLVar11->m_Items[(int)uVar2] = __this;
                thunk_FUN_01c20e04(pLVar11->m_Items + (int)uVar2,__this);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)__this,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              if (DMDFAKNEPGH == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar5 = (System_String_o *)
                       (*(DMDFAKNEPGH->klass->vtable)._8_unknown.methodPtr)
                                 (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._8_unknown.method);
              if (__this == (LDHGBBPECKF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (__this->fields).OAGEOIGKOAE = pSVar5;
              thunk_FUN_01c20e04();
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                                 (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
              pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
              (__this->fields).HEIPEMAFCLG = pSVar5;
              thunk_FUN_01c20e04();
              LPACFIDMJOM__INECGHKFPAL(DMDFAKNEPGH,(__this->fields).ACHJNNOKEDK,(MethodInfo *)0x0);
              LPACFIDMJOM__MFCLMHKBBGH(DMDFAKNEPGH,__this,(MethodInfo *)0x0);
              LPACFIDMJOM__HKIEJPKHBKG(DMDFAKNEPGH,__this,(MethodInfo *)0x0);
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.methodPtr)
                                 (DMDFAKNEPGH,(DMDFAKNEPGH->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_3862,(MethodInfo *)0x0);
              pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
              (__this->fields).CHKJLPPEFDI = pSVar5;
              thunk_FUN_01c20e04();
              CJMPPFAJNBH__HNIHOIAMDPC(DMDFAKNEPGH,(__this->fields).HBKCPJFPNIG,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_031450f4:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03145128;
    }
  }
LAB_0314510c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03145128:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

