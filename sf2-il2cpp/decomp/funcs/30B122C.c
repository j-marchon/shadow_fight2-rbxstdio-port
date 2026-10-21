// FEPPOONJCGI$$HNIHOIAMDPC @ RVA 0x30B122C

/* WARNING: Removing unreachable block (ram,0x031b17c8) */
/* WARNING: Removing unreachable block (ram,0x031b1aa0) */
/* WARNING: Removing unreachable block (ram,0x031b1588) */
/* WARNING: Removing unreachable block (ram,0x031b1ab4) */

void FEPPOONJCGI__HNIHOIAMDPC
               (FEPPOONJCGI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlElement_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  PANJAHAFBMD_o *__this_00;
  EKGDLIKHEMA_o *__this_01;
  KAJIALENBGD_o *__this_02;
  MethodInfo *in_x3;
  long lVar7;
  PANJAHAFBMD_array *pPVar8;
  KAJIALENBGD_array *pKVar9;
  ulong uVar10;
  int *piVar11;
  FEPPOONJCGI_Fields *pFVar12;
  System_Xml_XmlNode_o **ppSVar13;
  System_Collections_Generic_List_KAJIALENBGD__o *__this_03;
  System_Collections_Generic_List_PANJAHAFBMD__o *__this_04;
  
  if ((DAT_045661e1 & 1) == 0) {
    FUN_01bab630(&EKGDLIKHEMA_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KAJIALENBGD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_Add__);
    FUN_01bab630(&PANJAHAFBMD_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4840);
    FUN_01bab630(&StringLiteral_11253);
    FUN_01bab630(&StringLiteral_2720);
    DAT_045661e1 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_4840,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pFVar12 = &__this->fields;
    pFVar12->EJPMDLJLIMB = pSVar3;
    thunk_FUN_01c20e04(pFVar12,pSVar3);
    pSVar3 = pFVar12->EJPMDLJLIMB;
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_4840,(MethodInfo *)0x0);
      pFVar12->EJPMDLJLIMB = (System_Xml_XmlNode_o *)pSVar4;
      thunk_FUN_01c20e04(pFVar12,pSVar4);
      pSVar3 = pFVar12->EJPMDLJLIMB;
      if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_031b1a9c;
    }
    plVar5 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_031b13e8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_031b13e8:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
                    /* try { // try from 031b1508 to 032b151f has its CatchHandler @ 031b28e4 */
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_031b157c;
          lVar7 = *plVar5;
                    /* try { // try from 031b1524 to 032b152f has its CatchHandler @ 031b28c0 */
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 == 0) goto LAB_031b1554;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_031b153c;
        }
        lVar7 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 031b1444 to 032b146b has its CatchHandler @ 031b2aac */
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_031b1448;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_031b1448:
        pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 031b1474 to 032b1483 has its CatchHandler @ 031b2ab0 */
          if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
             ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar3);
          }
        }
        __this_04 = (__this->fields).MCDCFBOBJGI;
        __this_00 = (PANJAHAFBMD_o *)thunk_FUN_01bda818(PANJAHAFBMD_TypeInfo);
        PANJAHAFBMD___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
        lVar7 = Method_System_Collections_Generic_List<PANJAHAFBMD>_Add__;
        if (__this_04 == (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b1a7c to 032b1a8f has its CatchHandler @ 031b2870 */
          FUN_01bab8c8();
        }
        pPVar8 = (__this_04->fields)._items;
                    /* try { // try from 031b14b4 to 032b14f3 has its CatchHandler @ 031b2ab4 */
        (__this_04->fields)._version = (__this_04->fields)._version + 1;
        if (pPVar8 == (PANJAHAFBMD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pPVar8->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pPVar8->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pPVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  goto LAB_031b1a9c;
  while( true ) {
    uVar10 = uVar10 - 1;
                    /* try { // try from 031b154c to 032b156b has its CatchHandler @ 031b28dc */
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_031b153c:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_031b1570;
    }
  }
LAB_031b1554:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_031b1570:
                    /* try { // try from 031b1578 to 032b157b has its CatchHandler @ 031b28a0 */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_031b157c:
                    /* try { // try from 031b158c to 032b1607 has its CatchHandler @ 031b28c4 */
  pSVar3 = (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_2720,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  ppSVar13 = &(__this->fields).KKJEGEBCAKB;
  *ppSVar13 = pSVar3;
  thunk_FUN_01c20e04(ppSVar13,pSVar3);
  pSVar3 = *ppSVar13;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_2720,(MethodInfo *)0x0);
    *ppSVar13 = (System_Xml_XmlNode_o *)pSVar4;
    thunk_FUN_01c20e04(ppSVar13,pSVar4);
    pSVar3 = *ppSVar13;
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_031b1a9c;
  }
  plVar5 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 031b1608 to 032b1713 has its CatchHandler @ 031b0e98 */
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar7 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_031b167c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_031b167c:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
        if (plVar5 == (long *)0x0) goto LAB_031b17bc;
        lVar7 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_031b1794;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_031b177c;
      }
      lVar7 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_031b16dc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_031b16dc:
      pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 031b1714 to 032b171b has its CatchHandler @ 031b2a48 */
        if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar3);
        }
      }
      __this_01 = (EKGDLIKHEMA_o *)thunk_FUN_01bda818(EKGDLIKHEMA_TypeInfo);
      EKGDLIKHEMA___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
      FEPPOONJCGI__BMANEGMLOAA(__this,__this_01,(KMJDCOABCCG_o *)0x0,in_x3);
    } while( true );
  }
  goto LAB_031b1a9c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_031b1a14:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_031b1a48;
    }
  }
LAB_031b1a2c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
                    /* try { // try from 031b1a38 to 032b1a3f has its CatchHandler @ 031b29dc */
LAB_031b1a48:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_031b177c:
                    /* try { // try from 031b177c to 032b177f has its CatchHandler @ 031b2868 */
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_031b17b0;
    }
  }
LAB_031b1794:
                    /* try { // try from 031b1798 to 032b179f has its CatchHandler @ 031b2898 */
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_031b17b0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_031b17bc:
                    /* try { // try from 031b17e4 to 032b17fb has its CatchHandler @ 031b287c */
  pSVar3 = (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_11253,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  ppSVar13 = &(__this->fields).EDIFMNKDBMF;
  *ppSVar13 = pSVar3;
  thunk_FUN_01c20e04(ppSVar13,pSVar3);
  pSVar3 = *ppSVar13;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_11253,(MethodInfo *)0x0);
    *ppSVar13 = (System_Xml_XmlNode_o *)pSVar4;
                    /* try { // try from 031b1820 to 032b1827 has its CatchHandler @ 031b288c */
    thunk_FUN_01c20e04(ppSVar13,pSVar4);
    pSVar3 = *ppSVar13;
                    /* try { // try from 031b182c to 032b184f has its CatchHandler @ 031b2878 */
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_031b1a9c;
  }
  plVar5 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method);
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
                    /* try { // try from 031b1850 to 032b1857 has its CatchHandler @ 031b2874 */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar7 = *plVar5;
                    /* try { // try from 031b187c to 032b1883 has its CatchHandler @ 031b28b0 */
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 031b1894 to 032b189b has its CatchHandler @ 031b28b8 */
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_031b18c4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 031b18b4 to 032b18db has its CatchHandler @ 031b28e0 */
LAB_031b18c4:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar7 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_031b1a2c;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_031b1a14;
      }
      lVar7 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 031b18ec to 032b190b has its CatchHandler @ 031b28c8 */
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_031b1924;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_031b1924:
                    /* try { // try from 031b1924 to 032b192b has its CatchHandler @ 031b2864 */
      pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031b1944 to 032b1963 has its CatchHandler @ 031b28a4 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar3);
        }
      }
      __this_03 = (__this->fields).GNGLHGOGCBO;
      __this_02 = (KAJIALENBGD_o *)thunk_FUN_01bda818(KAJIALENBGD_TypeInfo);
                    /* try { // try from 031b1970 to 032b1977 has its CatchHandler @ 031b2880 */
      KAJIALENBGD___ctor(__this_02,pSVar3,(MethodInfo *)0x0);
      lVar7 = Method_System_Collections_Generic_List<KAJIALENBGD>_Add__;
      if (__this_03 == (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pKVar9 = (__this_03->fields)._items;
                    /* try { // try from 031b1990 to 032b199b has its CatchHandler @ 031b28ac */
      (__this_03->fields)._version = (__this_03->fields)._version + 1;
      if (pKVar9 == (KAJIALENBGD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 031b199c to 032b1a37 has its CatchHandler @ 031b0e98 */
      uVar2 = (__this_03->fields)._size;
      if (uVar2 < (uint)pKVar9->max_length) {
        (__this_03->fields)._size = uVar2 + 1;
        pKVar9->m_Items[(int)uVar2] = __this_02;
        thunk_FUN_01c20e04(pKVar9->m_Items + (int)uVar2,__this_02);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_02,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
LAB_031b1a9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

