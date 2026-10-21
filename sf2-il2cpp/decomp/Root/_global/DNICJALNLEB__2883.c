// TypeDefIndex 2883
// Namespace: 
// public class DNICJALNLEB
// Fields:
//   public List<ALJBCELIEHC> HLEDPFGACOE; // 0x10

// ===== public ALJBCELIEHC HNJLNPEEMOK(string KGLJICLJHEL)  [RVA 0x343E94C]
// DNICJALNLEB$$HNJLNPEEMOK @ RVA 0x343E94C

ALJBCELIEHC_o *
DNICJALNLEB__HNJLNPEEMOK(DNICJALNLEB_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  ALJBCELIEHC_o *pAVar1;
  System_Collections_Generic_List_ALJBCELIEHC__o *__this_01;
  
  if ((DAT_04568203 & 1) == 0) {
    FUN_01bab630(&Method_DNICJALNLEB_BDPIPADNFGH_EAMKBFINIFC__);
    FUN_01bab630(&DNICJALNLEB_BDPIPADNFGH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_Find__);
    FUN_01bab630(&System_Predicate<ALJBCELIEHC>_TypeInfo);
    DAT_04568203 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DNICJALNLEB_BDPIPADNFGH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    __this_01 = (__this->fields).HLEDPFGACOE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<ALJBCELIEHC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0) {
      pAVar1 = (ALJBCELIEHC_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<ALJBCELIEHC>_Find__);
      return pAVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x343EA38]
// DNICJALNLEB$$.ctor @ RVA 0x343EA38

void DNICJALNLEB___ctor(DNICJALNLEB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ALJBCELIEHC__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568204 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ALJBCELIEHC>_TypeInfo);
    DAT_04568204 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ALJBCELIEHC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ALJBCELIEHC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ALJBCELIEHC>__ctor__);
  (__this->fields).HLEDPFGACOE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 0353eaa8 to 0363eb57 has its CatchHandler @ 0353eaa8
                       catch() { ... } // from try @ 0353eaa8 with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353eb78 with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353ebcc with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353ebf4 with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353ec34 with catch @ 0353eaa8 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x343EAC0]
// DNICJALNLEB$$HNIHOIAMDPC @ RVA 0x343EAC0

/* WARNING: Removing unreachable block (ram,0x0353efb0) */

void DNICJALNLEB__HNIHOIAMDPC
               (DNICJALNLEB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ALJBCELIEHC_o *__this_00;
  System_Xml_XmlNode_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_ALJBCELIEHC__o *pSVar11;
  long lVar12;
  ALJBCELIEHC_array *pAVar13;
  ulong uVar14;
  int *piVar15;
  float fVar16;
  
  if ((DAT_04568205 & 1) == 0) {
    FUN_01bab630(&ALJBCELIEHC_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<GBNEKHAJILA>__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10384/*"Power"*/);
    FUN_01bab630(&StringLiteral_8109/*"ItemLimits"*/);
                    /* try { // try from 0353eb58 to 0363eb5f has its CatchHandler @ 0353ebd8 */
    FUN_01bab630(&StringLiteral_3205/*"AttributeLimits"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 0353eb74 to 0363eb77 has its CatchHandler @ 0353ebd4 */
                    /* try { // try from 0353eb78 to 0363ebc7 has its CatchHandler @ 0353eaa8 */
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
    DAT_04568205 = 1;
  }
  pSVar11 = (__this->fields).HLEDPFGACOE;
  if (pSVar11 != (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0) {
    iVar3 = (pSVar11->fields)._size;
    (pSVar11->fields)._size = 0;
    (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
                    /* try { // try from 0353ebc8 to 0363ebcb has its CatchHandler @ 0353ebd0 */
                    /* try { // try from 0353ebcc to 0363ebef has its CatchHandler @ 0353eaa8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353ebc8 with catch @ 0353ebd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353eb74 with catch @ 0353ebd4
                        */
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353eb58 with catch @ 0353ebd8
                        */
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar4;
                    /* try { // try from 0353ec2c to 0363ec33 has its CatchHandler @ 0353ec48 */
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
                    /* try { // try from 0353ec34 to 0363ec3f has its CatchHandler @ 0353eaa8 */
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
                    /* try { // try from 0353ec40 to 0363ec47 has its CatchHandler @ 0353ec48 */
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0353ec70;
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353ec2c with catch @ 0353ec48
                       catch(type#2 @ 00000000) { ... } // from try @ 0353ec40 with catch @ 0353ec48
                        */
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0353ec70:
        uVar14 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar14 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar12 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_0353ef38;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0353ef20;
        }
        lVar12 = *plVar4;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0353ecd0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0353ecd0:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 != (long *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar6);
          }
        }
        __this_00 = (ALJBCELIEHC_o *)thunk_FUN_01bda818(ALJBCELIEHC_TypeInfo);
        ALJBCELIEHC___ctor(__this_00,(MethodInfo *)0x0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar6 + 0x468))
                           (plVar6,StringLiteral_3205/*"AttributeLimits"*/,*(undefined8 *)(*plVar6 + 0x470));
        if (__this_00 == (ALJBCELIEHC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ALJBCELIEHC__LLNCBFBJKNA(__this_00,pSVar7,(__this_00->fields).PBGALMEHDBP,(MethodInfo *)0x0)
        ;
        pSVar7 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar6 + 0x468))
                           (plVar6,StringLiteral_8109/*"ItemLimits"*/,*(undefined8 *)(*plVar6 + 0x470));
        ALJBCELIEHC__LLNCBFBJKNA(__this_00,pSVar7,(__this_00->fields).HGIHFEIBHDP,(MethodInfo *)0x0)
        ;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this_00->fields).JIJLBFGKNJK = pSVar10;
        thunk_FUN_01c20e04();
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_10384/*"Power"*/,(MethodInfo *)0x0);
        fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar9,0.0,(MethodInfo *)0x0);
        (__this_00->fields).LDNOMBGGMHF = fVar16;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9058/*"Min"*/,(MethodInfo *)0x0);
        fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar9,0.0,(MethodInfo *)0x0);
        (__this_00->fields).AKPNOPAEKEF = fVar16;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (pSVar9,0,Method_EIABCPKDEBD_CKHGJBKDIID<GBNEKHAJILA>__);
        (__this_00->fields).BGHFADDGPAD = iVar3;
        lVar12 = Method_System_Collections_Generic_List<ALJBCELIEHC>_Add__;
        pSVar11 = (__this->fields).HLEDPFGACOE;
        if (pSVar11 == (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pAVar13 = (pSVar11->fields)._items;
        (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
        if (pAVar13 == (ALJBCELIEHC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar11->fields)._size;
        if (uVar2 < (uint)pAVar13->max_length) {
          (pSVar11->fields)._size = uVar2 + 1;
          pAVar13->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pAVar13->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0353ef20:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0353ef54;
    }
  }
LAB_0353ef38:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0353ef54:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

