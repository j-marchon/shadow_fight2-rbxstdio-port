// GBKCLIFGIFN$$.ctor @ RVA 0x32FE14C

/* WARNING: Removing unreachable block (ram,0x033fe5f0) */
/* WARNING: Removing unreachable block (ram,0x033fe668) */
/* WARNING: Removing unreachable block (ram,0x033fe6c8) */

void GBKCLIFGIFN___ctor(GBKCLIFGIFN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t item;
  NKOIBKNPICN_o *pNVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_int__o *__this_00;
  long lVar11;
  System_Int32_array *pSVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  NKOIBKNPICN_o **ppNVar16;
  NKOIBKNPICN_o *JOHFLOEABJL;
  
                    /* catch() { ... } // from try @ 033fdff4 with catch @ 033fe14c */
                    /* catch() { ... } // from try @ 033fdfe8 with catch @ 033fe150 */
                    /* catch() { ... } // from try @ 033fdfd0 with catch @ 033fe154 */
                    /* catch() { ... } // from try @ 033fde48 with catch @ 033fe158 */
                    /* catch() { ... } // from try @ 033fe0f4 with catch @ 033fe15c */
                    /* catch() { ... } // from try @ 033fe0ac with catch @ 033fe160 */
                    /* catch() { ... } // from try @ 033fe070 with catch @ 033fe164 */
                    /* catch() { ... } // from try @ 033fde78 with catch @ 033fe168
                       catch() { ... } // from try @ 033fe128 with catch @ 033fe168 */
                    /* catch() { ... } // from try @ 033fdea4 with catch @ 033fe16c
                       catch() { ... } // from try @ 033fe12c with catch @ 033fe16c */
                    /* catch() { ... } // from try @ 033fdf4c with catch @ 033fe170
                       catch() { ... } // from try @ 033fe130 with catch @ 033fe170 */
  if ((DAT_04567707 & 1) == 0) {
                    /* try { // try from 033fe188 to 034fe19f has its CatchHandler @ 033fe27c */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033fe1a0 to 034fe26b has its CatchHandler @ 033fdd94 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&NKOIBKNPICN_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_7129);
    FUN_01bab630(&StringLiteral_12833);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_11185);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10439);
    DAT_04567707 = 1;
  }
  pNVar4 = (NKOIBKNPICN_o *)thunk_FUN_01bda818(NKOIBKNPICN_TypeInfo);
  NKOIBKNPICN___ctor(pNVar4,(MethodInfo *)0x0);
  ppNVar16 = &(__this->fields).LCDJLCMFMEO;
  *ppNVar16 = pNVar4;
  thunk_FUN_01c20e04(ppNVar16,pNVar4);
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,4,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 != (long *)0x0)) {
                    /* try { // try from 033fe26c to 034fe27b has its CatchHandler @ 033fe27c */
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
LAB_033fe2b4:
    do {
      lVar11 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033fe300;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033fe300:
      uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar13 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
        if (plVar5 == (long *)0x0) goto LAB_033fe5e4;
        lVar11 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_033fe5bc;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_033fe5a4;
      }
      lVar11 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_033fe360;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033fe360:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar7);
      }
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_13991,(MethodInfo *)0x0);
      pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
      item = CMCJGLAABFO__ENNCOIHDFKP(0,pSVar10,(MethodInfo *)0x0);
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_10439,(MethodInfo *)0x0);
      pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar10,StringLiteral_7129,(MethodInfo *)0x0);
      lVar11 = Method_System_Collections_Generic_List<int>_Add__;
      if (bVar3) {
        if (*ppNVar16 == (NKOIBKNPICN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = ((*ppNVar16)->fields).KJNPENJKBKD;
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar12 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_00->fields)._size;
        lVar14 = (long)(int)uVar2;
        if (uVar2 < (uint)pSVar12->max_length) goto LAB_033fe538;
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      else {
        bVar3 = System_String__op_Equality(pSVar10,StringLiteral_12833,(MethodInfo *)0x0);
        lVar11 = Method_System_Collections_Generic_List<int>_Add__;
        if (!bVar3) goto LAB_033fe4e4;
        if (*ppNVar16 == (NKOIBKNPICN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = ((*ppNVar16)->fields).OOIGOEAHPMA;
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar12 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_00->fields)._size;
        lVar14 = (long)(int)uVar2;
        if (uVar2 < (uint)pSVar12->max_length) goto LAB_033fe538;
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_033fe6c0;
LAB_033fe4e4:
  bVar3 = System_String__op_Equality(pSVar10,StringLiteral_11185,(MethodInfo *)0x0);
  lVar11 = Method_System_Collections_Generic_List<int>_Add__;
  if (bVar3) {
    if (*ppNVar16 == (NKOIBKNPICN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = ((*ppNVar16)->fields).JCJPICMGIHE;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar12 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar12 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_00->fields)._size;
    lVar14 = (long)(int)uVar2;
    if (uVar2 < (uint)pSVar12->max_length) {
LAB_033fe538:
      (__this_00->fields)._size = (int)lVar14 + 1;
      pSVar12->m_Items[lVar14] = item;
    }
    else {
      System_Collections_Generic_List<int>__AddWithResize
                (__this_00,item,
                 *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_033fe2b4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_033fe5a4:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033fe5d8;
    }
  }
LAB_033fe5bc:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033fe5d8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_033fe5e4:
  if (*ppNVar16 != (NKOIBKNPICN_o *)0x0) {
    NKOIBKNPICN__JGMKBFKGGIL(*ppNVar16,(MethodInfo *)0x0);
    JOHFLOEABJL = (__this->fields).LCDJLCMFMEO;
    pNVar4 = (NKOIBKNPICN_o *)thunk_FUN_01bda818(NKOIBKNPICN_TypeInfo);
    NKOIBKNPICN___ctor(pNVar4,JOHFLOEABJL,(MethodInfo *)0x0);
    ppNVar16 = &(__this->fields).NNGNDJLJJBE;
    *ppNVar16 = pNVar4;
    thunk_FUN_01c20e04(ppNVar16,pNVar4);
    if (*ppNVar16 != (NKOIBKNPICN_o *)0x0) {
      NKOIBKNPICN__FOMNLFHELHO(*ppNVar16,-1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033fe6c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

