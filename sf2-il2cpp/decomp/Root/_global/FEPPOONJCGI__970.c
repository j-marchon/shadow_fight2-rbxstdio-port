// TypeDefIndex 970
// Namespace: 
// public class FEPPOONJCGI
// Fields:
//   private XmlNode EJPMDLJLIMB; // 0x10
//   private XmlNode KKJEGEBCAKB; // 0x18
//   private XmlNode EDIFMNKDBMF; // 0x20
//   private List<PANJAHAFBMD> MCDCFBOBJGI; // 0x28
//   private List<EKGDLIKHEMA> EBDCADCBPNM; // 0x30
//   private List<KAJIALENBGD> GNGLHGOGCBO; // 0x38

// ===== public void LAENFPIHMDP(List<KAJIALENBGD> JMFIEMFMJAJ)  [RVA 0x30B0AE8]
// FEPPOONJCGI$$LAENFPIHMDP @ RVA 0x30B0AE8

void FEPPOONJCGI__LAENFPIHMDP
               (FEPPOONJCGI_o *__this,System_Collections_Generic_List_KAJIALENBGD__o *JMFIEMFMJAJ,
               MethodInfo *method)

{
  bool bVar1;
  KAJIALENBGD_o *LFOOJOJHDFM;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_045661de & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661de = 1;
  }
  if (JMFIEMFMJAJ == (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
LAB_031b0c00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (JMFIEMFMJAJ->fields)._size) {
    index = 0;
    do {
      method_00 = Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__;
      LFOOJOJHDFM = (KAJIALENBGD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)JMFIEMFMJAJ,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
      bVar1 = FEPPOONJCGI__CGFJFHHCIGF(__this,LFOOJOJHDFM,method_00);
      index = index + 1;
    } while (index < (JMFIEMFMJAJ->fields)._size);
    if (bVar1) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
      goto LAB_031b0c00;
    }
  }
  return;
}


// ===== public bool NDDNOOBENCN(string GDGEELOAELH)  [RVA 0x30B0FFC]
// FEPPOONJCGI$$NDDNOOBENCN @ RVA 0x30B0FFC

bool FEPPOONJCGI__NDDNOOBENCN(FEPPOONJCGI_o *__this,System_String_o *GDGEELOAELH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  KAJIALENBGD_o *__this_00;
  KAJIALENBGD_array *pKVar5;
  System_Collections_Generic_List_KAJIALENBGD__o *__this_01;
  int index;
  System_Xml_XmlNode_o *GGDPPDFOEOH;
  
  if ((DAT_045661df & 1) == 0) {
    FUN_01bab630(&KAJIALENBGD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
    DAT_045661df = 1;
  }
  __this_01 = (__this->fields).GNGLHGOGCBO;
  if (__this_01 != (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        GGDPPDFOEOH = (__this->fields).EDIFMNKDBMF;
        __this_00 = (KAJIALENBGD_o *)thunk_FUN_01bda818(KAJIALENBGD_TypeInfo);
        KAJIALENBGD___ctor(__this_00,GGDPPDFOEOH,GDGEELOAELH,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<KAJIALENBGD>_Add__;
        pKVar5 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pKVar5 != (KAJIALENBGD_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pKVar5->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pKVar5->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          return true;
        }
        break;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<KAJIALENBGD>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) break;
      bVar3 = System_String__op_Equality(pIVar4[1].monitor,GDGEELOAELH,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
      __this_01 = (__this->fields).GNGLHGOGCBO;
      index = index + 1;
    } while (__this_01 != (System_Collections_Generic_List_KAJIALENBGD__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PANJAHAFBMD HALKOOLIBED(string KGLJICLJHEL)  [RVA 0x30B1160]
// FEPPOONJCGI$$HALKOOLIBED @ RVA 0x30B1160

PANJAHAFBMD_o *
FEPPOONJCGI__HALKOOLIBED(FEPPOONJCGI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PANJAHAFBMD__o *pSVar2;
  Il2CppObject *pIVar3;
  PANJAHAFBMD_o *pPVar4;
  int index;
  
  if ((DAT_045661e0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
    DAT_045661e0 = 1;
  }
  pSVar2 = (__this->fields).MCDCFBOBJGI;
  if (pSVar2 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (PANJAHAFBMD_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality(pIVar3[1].monitor,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).MCDCFBOBJGI;
        if (pSVar2 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0) {
          pPVar4 = (PANJAHAFBMD_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
          return pPVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).MCDCFBOBJGI;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30B122C]
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
    FUN_01bab630(&StringLiteral_4840/*"Counters"*/);
    FUN_01bab630(&StringLiteral_11253/*"RepostAchievements"*/);
    FUN_01bab630(&StringLiteral_2720/*"Achievements"*/);
    DAT_045661e1 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_4840/*"Counters"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pFVar12 = &__this->fields;
    pFVar12->EJPMDLJLIMB = pSVar3;
    thunk_FUN_01c20e04(pFVar12,pSVar3);
    pSVar3 = pFVar12->EJPMDLJLIMB;
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_4840/*"Counters"*/,(MethodInfo *)0x0);
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
                     (AHDGNOJPPIB,StringLiteral_2720/*"Achievements"*/,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  ppSVar13 = &(__this->fields).KKJEGEBCAKB;
  *ppSVar13 = pSVar3;
  thunk_FUN_01c20e04(ppSVar13,pSVar3);
  pSVar3 = *ppSVar13;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_2720/*"Achievements"*/,(MethodInfo *)0x0);
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
                     (AHDGNOJPPIB,StringLiteral_11253/*"RepostAchievements"*/,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  ppSVar13 = &(__this->fields).EDIFMNKDBMF;
  *ppSVar13 = pSVar3;
  thunk_FUN_01c20e04(ppSVar13,pSVar3);
  pSVar3 = *ppSVar13;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_11253/*"RepostAchievements"*/,(MethodInfo *)0x0);
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


// ===== public void JLPKMGNPINP(List<string> NOCALFGICHO)  [RVA 0x30B1E28]
// FEPPOONJCGI$$JLPKMGNPINP @ RVA 0x30B1E28

void FEPPOONJCGI__JLPKMGNPINP
               (FEPPOONJCGI_o *__this,System_Collections_Generic_List_string__o *NOCALFGICHO,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *GDGEELOAELH;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_045661e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
                    /* try { // try from 031b1e54 to 032b1e7b has its CatchHandler @ 031b23ac */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661e2 = 1;
  }
  if (NOCALFGICHO == (System_Collections_Generic_List_string__o *)0x0) {
LAB_031b1f40:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (NOCALFGICHO->fields)._size) {
    index = 0;
    do {
      method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
      GDGEELOAELH = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)NOCALFGICHO,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<string>_get_Item__);
      bVar1 = FEPPOONJCGI__NDDNOOBENCN(__this,GDGEELOAELH,method_00);
      index = index + 1;
                    /* try { // try from 031b1eb8 to 032b1ee3 has its CatchHandler @ 031b23a8 */
    } while (index < (NOCALFGICHO->fields)._size);
    if (bVar1) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 031b1f18 to 032b1f47 has its CatchHandler @ 031b23a4 */
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
      goto LAB_031b1f40;
    }
  }
  return;
}


// ===== public void ABFBENBACFN(EKGDLIKHEMA IHEPDIFDBGK, bool COPNBALDNLF, bool BGLBPHDOCGK = True)  [RVA 0x30B1F44]
// FEPPOONJCGI$$ABFBENBACFN @ RVA 0x30B1F44

void FEPPOONJCGI__ABFBENBACFN
               (FEPPOONJCGI_o *__this,EKGDLIKHEMA_o *IHEPDIFDBGK,bool COPNBALDNLF,bool BGLBPHDOCGK,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  
                    /* try { // try from 031b1f60 to 032b1fcf has its CatchHandler @ 031b2820 */
  if ((DAT_045661e3 & 1) == 0) {
    __this = (FEPPOONJCGI_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661e3 = 1;
  }
  if (IHEPDIFDBGK != (EKGDLIKHEMA_o *)0x0) {
    if ((((IHEPDIFDBGK->fields).LDBJGDMBCKM != false) == COPNBALDNLF) ||
       (EKGDLIKHEMA__INOKKGKNDAH(IHEPDIFDBGK,COPNBALDNLF,(MethodInfo *)0x0), !BGLBPHDOCGK)) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (FEPPOONJCGI_o *)0x0;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void DOCPOJKODOE()  [RVA 0x30B202C]
// FEPPOONJCGI$$DOCPOJKODOE @ RVA 0x30B202C

void FEPPOONJCGI__DOCPOJKODOE(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  Il2CppObject *__this_00;
  bool bVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *MDEBDNLAEKA;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  PANJAHAFBMD_o *__this_02;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_03;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *CIADJOAENAM;
  ACHLOMELAJE_o *__this_04;
  MethodInfo *extraout_x1;
  System_String_o *item;
  MethodInfo *in_x2;
  MethodInfo *in_x3;
  System_String_array *pSVar7;
  MGNPHCAAEIO_ONAGKGIEEGI_o *pMVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_045661e4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
                    /* try { // try from 031b2084 to 032b20b3 has its CatchHandler @ 031b283c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 031b20c8 to 032b20cf has its CatchHandler @ 031b27f4 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14951/*"WinBattle"*/);
                    /* try { // try from 031b20e4 to 032b20ef has its CatchHandler @ 031b27e8 */
    DAT_045661e4 = 1;
    method = extraout_x1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
                    /* try { // try from 031b2104 to 032b210b has its CatchHandler @ 031b27f8 */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
                    /* try { // try from 031b2124 to 032b212f has its CatchHandler @ 031b27dc */
  pMVar8 = MGNPHCAAEIO_TypeInfo->static_fields->PHHNGOGNMAG;
  MDEBDNLAEKA = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)MDEBDNLAEKA,
             Method_System_Collections_Generic_List<string>__ctor__);
  if ((pMVar8 != (MGNPHCAAEIO_ONAGKGIEEGI_o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pMVar8->fields).HPJKPNJHGMF,
     __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
                    /* try { // try from 031b2170 to 032b219b has its CatchHandler @ 031b2828 */
    bVar6 = false;
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while( true ) {
      bVar5 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                        );
      __this_00 = local_90.fields._current.fields.value;
      lVar4 = Method_System_Collections_Generic_List<string>_Add__;
      if (!bVar5) break;
      if ((LKPNOBFEAKD_o *)local_90.fields._current.fields.value == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < ((LKPNOBFEAKD_Fields *)((long)local_90.fields._current.fields.value + 0x10))->
              KAFNDKOPMDH) {
        if (MDEBDNLAEKA == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = ((LKPNOBFEAKD_Fields *)((long)local_90.fields._current.fields.value + 0x10))->
               JIJLBFGKNJK;
        pSVar7 = (MDEBDNLAEKA->fields)._items;
        (MDEBDNLAEKA->fields)._version = (MDEBDNLAEKA->fields)._version + 1;
        if (pSVar7 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = (MDEBDNLAEKA->fields)._size;
        if (uVar3 < (uint)pSVar7->max_length) {
                    /* try { // try from 031b21dc to 032b2203 has its CatchHandler @ 031b23e4 */
          (MDEBDNLAEKA->fields)._size = uVar3 + 1;
          pSVar7->m_Items[(int)uVar3] = item;
          thunk_FUN_01c20e04();
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)MDEBDNLAEKA,(Il2CppObject *)item,
                     (MethodInfo_26E4DAC *)in_x2);
        }
        __this_02 = FEPPOONJCGI__HALKOOLIBED
                              (__this,((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->JIJLBFGKNJK,
                               in_x2);
        if (__this_02 == (PANJAHAFBMD_o *)0x0) {
          uVar3 = ((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->KAFNDKOPMDH;
          in_x2 = (MethodInfo *)(ulong)uVar3;
          FEPPOONJCGI__LMEMHLHEKIB
                    (__this,((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->JIJLBFGKNJK,uVar3,
                     in_x3);
        }
        else {
          iVar1 = (__this_02->fields).GAMONLCHOKL;
          iVar2 = ((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->KAFNDKOPMDH;
          bVar6 = System_String__op_Equality
                            (((LKPNOBFEAKD_Fields *)((long)__this_00 + 0x10))->BGHFADDGPAD,
                             StringLiteral_14951/*"WinBattle"*/,(MethodInfo *)0x0);
          iVar2 = iVar2 + iVar1;
                    /* try { // try from 031b2240 to 032b226b has its CatchHandler @ 031b23dc */
          if (1 < iVar2 && bVar6) {
            iVar2 = 1;
          }
          in_x2 = (MethodInfo *)0x0;
          PANJAHAFBMD__ANDPGPBNPBC(__this_02,iVar2,(MethodInfo *)0x0);
        }
        bVar6 = true;
      }
      LKPNOBFEAKD__CJDAFEOKEMC((LKPNOBFEAKD_o *)__this_00,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
              );
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
    if (__this_03 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
                    /* try { // try from 031b22b0 to 032b22e3 has its CatchHandler @ 031b23e0 */
      CIADJOAENAM = MGNPHCAAEIO_FGHBAEIKNBF__EBKMLNCHIEP(__this_03,MDEBDNLAEKA,(MethodInfo *)0x0);
      MGNPHCAAEIO__MDBHECKGNBO(CIADJOAENAM,(MethodInfo *)0x0);
      if (bVar6) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 031b22fc to 032b236b has its CatchHandler @ 031b2830 */
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_04 == (ACHLOMELAJE_o *)0x0) goto LAB_031b2358;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_04,false,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_031b2358:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30B2534]
// FEPPOONJCGI$$.ctor @ RVA 0x30B2534

void FEPPOONJCGI___ctor(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PANJAHAFBMD__o *__this_00;
  System_Collections_Generic_List_PANJAHAFBMD__o **ppSVar1;
  System_Collections_Generic_List_EKGDLIKHEMA__o *__this_01;
  System_Collections_Generic_List_EKGDLIKHEMA__o **ppSVar2;
  System_Collections_Generic_List_KAJIALENBGD__o *__this_02;
  System_Collections_Generic_List_KAJIALENBGD__o **ppSVar3;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031b2544 to 032b2557 has its CatchHandler @ 031b28d8 */
                    /* try { // try from 031b2558 to 032b25c7 has its CatchHandler @ 031b0e98 */
  if ((DAT_045661e5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PANJAHAFBMD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KAJIALENBGD>_TypeInfo);
                    /* try { // try from 031b25c8 to 032b25cb has its CatchHandler @ 031b29d8 */
                    /* try { // try from 031b25cc to 032b25cf has its CatchHandler @ 031b29d4 */
    FUN_01bab630(&System_Collections_Generic_List<EKGDLIKHEMA>_TypeInfo);
                    /* try { // try from 031b25d0 to 032b25d3 has its CatchHandler @ 031b29d0 */
                    /* try { // try from 031b25d4 to 032b25d7 has its CatchHandler @ 031b28f0 */
    DAT_045661e5 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031b25d8 to 032b25db has its CatchHandler @ 031b28ec */
                    /* try { // try from 031b25dc to 032b25df has its CatchHandler @ 031b28e8 */
  __this_00 = (System_Collections_Generic_List_PANJAHAFBMD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PANJAHAFBMD>_TypeInfo,method);
                    /* try { // try from 031b25e0 to 032b25e3 has its CatchHandler @ 031b28d0 */
                    /* try { // try from 031b25e4 to 032b25e7 has its CatchHandler @ 031b28cc */
                    /* try { // try from 031b25e8 to 032b25eb has its CatchHandler @ 031b28b4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PANJAHAFBMD>__ctor__);
  ppSVar1 = &(__this->fields).MCDCFBOBJGI;
                    /* try { // try from 031b25ec to 032b25f3 has its CatchHandler @ 031b29c8 */
  *ppSVar1 = __this_00;
                    /* try { // try from 031b25f4 to 032b25f7 has its CatchHandler @ 031b28a8 */
                    /* try { // try from 031b25f8 to 032b25fb has its CatchHandler @ 031b0e98 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 031b25fc to 032b2607 has its CatchHandler @ 031b29c8 */
  __this_01 = (System_Collections_Generic_List_EKGDLIKHEMA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EKGDLIKHEMA>_TypeInfo);
                    /* try { // try from 031b2608 to 032b260f has its CatchHandler @ 031b28bc */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<EKGDLIKHEMA>__ctor__);
  ppSVar2 = &(__this->fields).EBDCADCBPNM;
                    /* try { // try from 031b2610 to 032b2613 has its CatchHandler @ 031b289c */
                    /* try { // try from 031b2614 to 032b2617 has its CatchHandler @ 031b2890 */
  *ppSVar2 = __this_01;
                    /* try { // try from 031b2618 to 032b261b has its CatchHandler @ 031b2884 */
                    /* try { // try from 031b261c to 032b261f has its CatchHandler @ 031b2860 */
  thunk_FUN_01c20e04(ppSVar2,__this_01);
                    /* try { // try from 031b2620 to 032b2623 has its CatchHandler @ 031b285c */
                    /* try { // try from 031b2624 to 032b2627 has its CatchHandler @ 031b2854 */
  __this_02 = (System_Collections_Generic_List_KAJIALENBGD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KAJIALENBGD>_TypeInfo);
                    /* try { // try from 031b2628 to 032b262f has its CatchHandler @ 031b2850 */
                    /* try { // try from 031b2630 to 032b2633 has its CatchHandler @ 031b284c */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<KAJIALENBGD>__ctor__);
  ppSVar3 = &(__this->fields).GNGLHGOGCBO;
                    /* try { // try from 031b2634 to 032b2637 has its CatchHandler @ 031b2848 */
                    /* try { // try from 031b2638 to 032b263b has its CatchHandler @ 031b2844 */
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
                    /* try { // try from 031b264c to 032b2707 has its CatchHandler @ 031b2b64 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void BMANEGMLOAA(EKGDLIKHEMA EIDPFIENOPH, KMJDCOABCCG LFOOJOJHDFM)  [RVA 0x30B1CE8]
// FEPPOONJCGI$$BMANEGMLOAA @ RVA 0x30B1CE8

void FEPPOONJCGI__BMANEGMLOAA
               (FEPPOONJCGI_o *__this,EKGDLIKHEMA_o *EIDPFIENOPH,KMJDCOABCCG_o *LFOOJOJHDFM,
               MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  long lVar3;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_00;
  System_Collections_Generic_List_EKGDLIKHEMA__o *__this_01;
  EKGDLIKHEMA_array *pEVar4;
  
                    /* try { // try from 031b1cf8 to 032b1d03 has its CatchHandler @ 031b27ec */
  if ((DAT_045661e6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045661e6 = 1;
  }
  if (LFOOJOJHDFM == (KMJDCOABCCG_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if ((EIDPFIENOPH == (EKGDLIKHEMA_o *)0x0) ||
       (__this_00 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ,
       __this_00 == (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0)) goto LAB_031b1e24;
                    /* try { // try from 031b1d74 to 032b1d7f has its CatchHandler @ 031b27d8 */
    LFOOJOJHDFM = MGNPHCAAEIO_FGHBAEIKNBF__MDAFMGBHOGB
                            (__this_00,(EIDPFIENOPH->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (LFOOJOJHDFM != (KMJDCOABCCG_o *)0x0) {
      (LFOOJOJHDFM->fields).DKHMDPIMHIJ = true;
      goto LAB_031b1d88;
    }
  }
  else {
    (LFOOJOJHDFM->fields).DKHMDPIMHIJ = true;
    if (EIDPFIENOPH == (EKGDLIKHEMA_o *)0x0) goto LAB_031b1e24;
LAB_031b1d88:
    bVar1 = (EIDPFIENOPH->fields).LDBJGDMBCKM;
    (LFOOJOJHDFM->fields).AHKHDBIDDIH = bVar1;
                    /* try { // try from 031b1da0 to 032b1dab has its CatchHandler @ 031b27d4 */
    KMJDCOABCCG__GEBIJFANLGH(LFOOJOJHDFM,bVar1 == false,(MethodInfo *)0x0);
  }
  lVar3 = Method_System_Collections_Generic_List<EKGDLIKHEMA>_Add__;
  __this_01 = (__this->fields).EBDCADCBPNM;
  if (__this_01 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    pEVar4 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pEVar4 != (EKGDLIKHEMA_array *)0x0) {
      uVar2 = (__this_01->fields)._size;
      if ((uint)pEVar4->max_length <= uVar2) {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,
                   (Il2CppObject *)EIDPFIENOPH,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_01->fields)._size = uVar2 + 1;
      pEVar4->m_Items[(int)uVar2] = EIDPFIENOPH;
                    /* try { // try from 031b1dec to 032b1e13 has its CatchHandler @ 031b2810 */
      thunk_FUN_01c20e04(pEVar4->m_Items + (int)uVar2,EIDPFIENOPH);
      return;
    }
  }
LAB_031b1e24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EKGDLIKHEMA CMIEOMMDGLC(string KGLJICLJHEL)  [RVA 0x30B2664]
// FEPPOONJCGI$$CMIEOMMDGLC @ RVA 0x30B2664

EKGDLIKHEMA_o *
FEPPOONJCGI__CMIEOMMDGLC(FEPPOONJCGI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EKGDLIKHEMA__o *pSVar2;
  Il2CppObject *pIVar3;
  EKGDLIKHEMA_o *pEVar4;
  int index;
  
  if ((DAT_045661e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
    DAT_045661e7 = 1;
  }
  pSVar2 = (__this->fields).EBDCADCBPNM;
  if (pSVar2 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (EKGDLIKHEMA_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality(pIVar3[1].monitor,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 031b270c to 032b2713 has its CatchHandler @ 031b2838 */
        pSVar2 = (__this->fields).EBDCADCBPNM;
        if (pSVar2 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
                    /* try { // try from 031b2714 to 032b2717 has its CatchHandler @ 031b282c */
                    /* try { // try from 031b2718 to 032b271b has its CatchHandler @ 031b2824 */
                    /* try { // try from 031b271c to 032b271f has its CatchHandler @ 031b2814 */
          pEVar4 = (EKGDLIKHEMA_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
          return pEVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).EBDCADCBPNM;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CGFJFHHCIGF(KAJIALENBGD LFOOJOJHDFM)  [RVA 0x30B0C04]
// FEPPOONJCGI$$CGFJFHHCIGF @ RVA 0x30B0C04

/* WARNING: Removing unreachable block (ram,0x031b0f08) */

bool FEPPOONJCGI__CGFJFHHCIGF(FEPPOONJCGI_o *__this,KAJIALENBGD_o *LFOOJOJHDFM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Collections_Generic_List_KAJIALENBGD__o *__this_01;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int index;
  
  if ((DAT_045661e8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_RemoveAt__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045661e8 = 1;
  }
  pSVar3 = (__this->fields).EDIFMNKDBMF;
  if ((pSVar3 == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  index = 0;
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031b0d28;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031b0d28:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      bVar2 = false;
      goto LAB_031b0e5c;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 031b0d84 to 032b0daf has its CatchHandler @ 031b0db0 */
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_031b0d88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 031b0db0 with catch @ 031b0d64
                       catch() { ... } // from try @ 031b0de0 with catch @ 031b0d64
                       catch() { ... } // from try @ 031b0e78 with catch @ 031b0d64
                       catch() { ... } // from try @ 031b0e8c with catch @ 031b0d64 */
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_031b0d88:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar7 = *plVar6;
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b0d84 with catch @ 031b0db0
                       try { // try from 031b0db0 to 032b0dc7 has its CatchHandler @ 031b0d64 */
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar6);
    }
                    /* try { // try from 031b0dc8 to 032b0ddf has its CatchHandler @ 031b0e84 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(lVar7 + 0x238))(plVar6,*(undefined8 *)(lVar7 + 0x240));
    if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 031b0de0 to 032b0e67 has its CatchHandler @ 031b0d64 */
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (LFOOJOJHDFM == (KAJIALENBGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality(a,(LFOOJOJHDFM->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (bVar2) break;
    index = index + 1;
  } while( true );
  pSVar3 = (__this->fields).EDIFMNKDBMF;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar3->klass->vtable)._25_RemoveChild.methodPtr)
            (pSVar3,plVar6,(pSVar3->klass->vtable)._25_RemoveChild.method);
  __this_01 = (__this->fields).GNGLHGOGCBO;
  if (__this_01 == (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__RemoveAt
            ((System_Collections_Generic_List_object__o *)__this_01,index,
             Method_System_Collections_Generic_List<KAJIALENBGD>_RemoveAt__);
  bVar2 = true;
LAB_031b0e5c:
  plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
                    /* try { // try from 031b0e68 to 032b0e77 has its CatchHandler @ 031b0e84 */
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
                    /* try { // try from 031b0e78 to 032b0e87 has its CatchHandler @ 031b0d64 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 031b0dc8 with catch @ 031b0e84
                       catch() { ... } // from try @ 031b0e68 with catch @ 031b0e84 */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 031b0e88 to 032b0e8b has its CatchHandler @ 031b0e94 */
                    /* try { // try from 031b0e8c to 032b0e97 has its CatchHandler @ 031b0d64 */
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031b0ebc;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b0e88 with catch @ 031b0e94
                        */
        uVar8 = uVar8 - 1;
                    /* try { // try from 031b0e98 to 032b1443 has its CatchHandler @ 031b0e98
                       catch() { ... } // from try @ 031b0e98 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b1608 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b199c with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2394 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b23d0 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2404 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b24ac with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2558 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b25f8 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b27b8 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2910 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2960 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b297c with catch @ 031b0e98
                       catch() { ... } // from try @ 031b29c8 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b29fc with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2a48 with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2a5c with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2aac with catch @ 031b0e98
                       catch() { ... } // from try @ 031b2b50 with catch @ 031b0e98 */
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031b0ebc:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return bVar2;
}


// ===== public void LAENFPIHMDP()  [RVA 0x30B2730]
// FEPPOONJCGI$$LAENFPIHMDP @ RVA 0x30B2730

void FEPPOONJCGI__LAENFPIHMDP(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Xml_XmlNode_o *pSVar1;
  ACHLOMELAJE_o *__this_00;
  System_Collections_Generic_List_KAJIALENBGD__o *pSVar2;
  
                    /* try { // try from 031b2730 to 032b2743 has its CatchHandler @ 031b2b64 */
                    /* try { // try from 031b2744 to 032b274b has its CatchHandler @ 031b2808 */
  if ((DAT_045661e9 & 1) == 0) {
                    /* try { // try from 031b274c to 032b274f has its CatchHandler @ 031b2800 */
                    /* try { // try from 031b2750 to 032b2757 has its CatchHandler @ 031b27fc */
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_Clear__);
                    /* try { // try from 031b2758 to 032b275b has its CatchHandler @ 031b280c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661e9 = 1;
  }
  pSVar1 = (__this->fields).EDIFMNKDBMF;
                    /* try { // try from 031b276c to 032b2783 has its CatchHandler @ 031b2b64 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    (*(pSVar1->klass->vtable)._49_RemoveAll.methodPtr)
              (pSVar1,(pSVar1->klass->vtable)._49_RemoveAll.method);
    pSVar2 = (__this->fields).GNGLHGOGCBO;
                    /* try { // try from 031b2784 to 032b278f has its CatchHandler @ 031b27f0 */
    if (pSVar2 != (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
      length = (pSVar2->fields)._size;
                    /* try { // try from 031b2790 to 032b2793 has its CatchHandler @ 031b280c */
                    /* try { // try from 031b2794 to 032b279f has its CatchHandler @ 031b27e4 */
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    /* try { // try from 031b27a0 to 032b27ab has its CatchHandler @ 031b27e0 */
      if (0 < length) {
                    /* try { // try from 031b27ac to 032b27b7 has its CatchHandler @ 031b27d0 */
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
                    /* catch() { ... } // from try @ 031b23cc with catch @ 031b27b8
                       try { // try from 031b27b8 to 032b290b has its CatchHandler @ 031b0e98 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 031b2400 with catch @ 031b27c4 */
      if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 031b27ac with catch @ 031b27d0 */
                    /* catch() { ... } // from try @ 031b1da0 with catch @ 031b27d4 */
                    /* catch() { ... } // from try @ 031b1d74 with catch @ 031b27d8 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 031b2124 with catch @ 031b27dc */
                    /* catch() { ... } // from try @ 031b27a0 with catch @ 031b27e0 */
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 031b2794 with catch @ 031b27e4 */
                    /* catch() { ... } // from try @ 031b20e4 with catch @ 031b27e8 */
                    /* catch() { ... } // from try @ 031b1cf8 with catch @ 031b27ec */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031b2784 with catch @ 031b27f0 */
        thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 031b20c8 with catch @ 031b27f4 */
      }
                    /* catch() { ... } // from try @ 031b2104 with catch @ 031b27f8 */
                    /* catch() { ... } // from try @ 031b2750 with catch @ 031b27fc */
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 031b274c with catch @ 031b2800 */
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* catch() { ... } // from try @ 031b1cd4 with catch @ 031b2804 */
                    /* catch() { ... } // from try @ 031b2744 with catch @ 031b2808 */
                    /* catch() { ... } // from try @ 031b2758 with catch @ 031b280c
                       catch() { ... } // from try @ 031b2790 with catch @ 031b280c */
                    /* catch() { ... } // from try @ 031b1dec with catch @ 031b2810 */
                    /* catch() { ... } // from try @ 031b271c with catch @ 031b2814 */
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b1c80 with catch @ 031b2818 */
  FUN_01bab8c8();
}


// ===== public int NIKBIHOFOOD()  [RVA 0x30B281C]
// FEPPOONJCGI$$NIKBIHOFOOD @ RVA 0x30B281C

int32_t FEPPOONJCGI__NIKBIHOFOOD(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_FGHBAEIKNBF_o *pMVar2;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_00;
  int iVar3;
  int index;
  System_Collections_Generic_List_object__o *__this_01;
  int index_00;
  
                    /* catch() { ... } // from try @ 031b1c70 with catch @ 031b281c */
                    /* catch() { ... } // from try @ 031b1f60 with catch @ 031b2820 */
                    /* catch() { ... } // from try @ 031b2718 with catch @ 031b2824 */
                    /* catch() { ... } // from try @ 031b2170 with catch @ 031b2828 */
                    /* catch() { ... } // from try @ 031b2714 with catch @ 031b282c */
                    /* catch() { ... } // from try @ 031b22fc with catch @ 031b2830 */
                    /* catch() { ... } // from try @ 031b1d3c with catch @ 031b2834 */
                    /* catch() { ... } // from try @ 031b270c with catch @ 031b2838 */
                    /* catch() { ... } // from try @ 031b2084 with catch @ 031b283c */
  if ((DAT_045661ea & 1) == 0) {
                    /* catch() { ... } // from try @ 031b1c38 with catch @ 031b2840 */
                    /* catch() { ... } // from try @ 031b2638 with catch @ 031b2844 */
                    /* catch() { ... } // from try @ 031b2634 with catch @ 031b2848 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
                    /* catch() { ... } // from try @ 031b2630 with catch @ 031b284c */
                    /* catch() { ... } // from try @ 031b2628 with catch @ 031b2850 */
                    /* catch() { ... } // from try @ 031b2624 with catch @ 031b2854 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Count__);
                    /* catch() { ... } // from try @ 031b1b40 with catch @ 031b2858
                       catch() { ... } // from try @ 031b1b8c with catch @ 031b2858 */
                    /* catch() { ... } // from try @ 031b2620 with catch @ 031b285c */
                    /* catch() { ... } // from try @ 031b261c with catch @ 031b2860 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
                    /* catch() { ... } // from try @ 031b1924 with catch @ 031b2864 */
                    /* catch() { ... } // from try @ 031b177c with catch @ 031b2868 */
                    /* catch() { ... } // from try @ 031b1ad4 with catch @ 031b286c
                       catch() { ... } // from try @ 031b1b60 with catch @ 031b286c */
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
                    /* catch() { ... } // from try @ 031b1a7c with catch @ 031b2870 */
                    /* catch() { ... } // from try @ 031b1850 with catch @ 031b2874 */
                    /* catch() { ... } // from try @ 031b182c with catch @ 031b2878 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch() { ... } // from try @ 031b17e4 with catch @ 031b287c */
                    /* catch() { ... } // from try @ 031b1970 with catch @ 031b2880 */
    DAT_045661ea = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 031b2618 with catch @ 031b2884 */
                    /* catch() { ... } // from try @ 031b185c with catch @ 031b2888 */
                    /* catch() { ... } // from try @ 031b1820 with catch @ 031b288c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031b2614 with catch @ 031b2890 */
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
                    /* catch() { ... } // from try @ 031b24a4 with catch @ 031b2894 */
  }
                    /* catch() { ... } // from try @ 031b1798 with catch @ 031b2898 */
                    /* catch() { ... } // from try @ 031b2610 with catch @ 031b289c */
  pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
                    /* catch() { ... } // from try @ 031b1578 with catch @ 031b28a0 */
                    /* catch() { ... } // from try @ 031b1944 with catch @ 031b28a4 */
                    /* catch() { ... } // from try @ 031b25f4 with catch @ 031b28a8 */
  if ((pMVar2 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) &&
     (__this_00 = (pMVar2->fields).BJGBOCFLEGO,
     __this_00 != (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0)) {
                    /* catch() { ... } // from try @ 031b1990 with catch @ 031b28ac */
                    /* catch() { ... } // from try @ 031b187c with catch @ 031b28b0 */
                    /* catch() { ... } // from try @ 031b25e8 with catch @ 031b28b4 */
    if ((__this_00->fields)._size < 1) {
                    /* catch() { ... } // from try @ 031b290c with catch @ 031b293c */
      iVar3 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 031b1894 with catch @ 031b28b8 */
                    /* catch() { ... } // from try @ 031b2608 with catch @ 031b28bc */
                    /* catch() { ... } // from try @ 031b1524 with catch @ 031b28c0 */
                    /* catch() { ... } // from try @ 031b158c with catch @ 031b28c4 */
                    /* catch() { ... } // from try @ 031b18ec with catch @ 031b28c8 */
      index = 0;
                    /* catch() { ... } // from try @ 031b25e4 with catch @ 031b28cc */
      iVar3 = 0;
      do {
                    /* catch() { ... } // from try @ 031b25e0 with catch @ 031b28d0 */
                    /* catch() { ... } // from try @ 031b2524 with catch @ 031b28d4 */
                    /* catch() { ... } // from try @ 031b2544 with catch @ 031b28d8 */
                    /* catch() { ... } // from try @ 031b154c with catch @ 031b28dc */
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
                    /* catch() { ... } // from try @ 031b18b4 with catch @ 031b28e0 */
                    /* catch() { ... } // from try @ 031b1508 with catch @ 031b28e4 */
                    /* catch() { ... } // from try @ 031b25dc with catch @ 031b28e8 */
        if ((pIVar1 == (Il2CppObject *)0x0) ||
           (__this_01 = pIVar1[1].monitor,
           __this_01 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_031b2958;
                    /* catch() { ... } // from try @ 031b25d8 with catch @ 031b28ec */
                    /* catch() { ... } // from try @ 031b25d4 with catch @ 031b28f0 */
                    /* catch() { ... } // from try @ 031b24fc with catch @ 031b28f4 */
        if (0 < (__this_01->fields)._size) {
          index_00 = 0;
          do {
            pIVar1 = System_Collections_Generic_List<object>__get_Item
                               (__this_01,index_00,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
                    /* try { // try from 031b290c to 032b290f has its CatchHandler @ 031b293c */
            if (pIVar1 == (Il2CppObject *)0x0) goto LAB_031b2958;
                    /* try { // try from 031b2910 to 032b294b has its CatchHandler @ 031b0e98 */
            index_00 = index_00 + 1;
            iVar3 = iVar3 + (uint)*(byte *)((long)&pIVar1[4].klass + 3);
          } while (index_00 < (__this_01->fields)._size);
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
                    /* try { // try from 031b294c to 032b295f has its CatchHandler @ 031b2b64 */
    return iVar3;
  }
LAB_031b2958:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LMEMHLHEKIB(string KGLJICLJHEL, int CJNHFNHJHPE)  [RVA 0x30B23F0]
// FEPPOONJCGI$$LMEMHLHEKIB @ RVA 0x30B23F0

void FEPPOONJCGI__LMEMHLHEKIB
               (FEPPOONJCGI_o *__this,System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  PANJAHAFBMD_o *__this_00;
  System_Collections_Generic_List_PANJAHAFBMD__o *__this_01;
  PANJAHAFBMD_array *pPVar3;
  
                    /* try { // try from 031b2400 to 032b2403 has its CatchHandler @ 031b27c4 */
                    /* try { // try from 031b2404 to 032b2457 has its CatchHandler @ 031b0e98 */
  if ((DAT_045661eb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_Add__);
    FUN_01bab630(&PANJAHAFBMD_TypeInfo);
    FUN_01bab630(&StringLiteral_4830/*"Counter"*/);
    DAT_045661eb = 1;
  }
                    /* try { // try from 031b2458 to 032b245f has its CatchHandler @ 031b2960 */
  AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ
                          ((__this->fields).EJPMDLJLIMB,StringLiteral_4830/*"Counter"*/,(MethodInfo *)0x0);
  __this_00 = (PANJAHAFBMD_o *)thunk_FUN_01bda818(PANJAHAFBMD_TypeInfo);
  PANJAHAFBMD___ctor(__this_00,(System_Xml_XmlNode_o *)AHDGNOJPPIB,(MethodInfo *)0x0);
  if (__this_00 != (PANJAHAFBMD_o *)0x0) {
    PANJAHAFBMD__HCOCAAIGNNL(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
                    /* try { // try from 031b24a4 to 032b24ab has its CatchHandler @ 031b2894 */
    PANJAHAFBMD__ANDPGPBNPBC(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<PANJAHAFBMD>_Add__;
    __this_01 = (__this->fields).MCDCFBOBJGI;
                    /* try { // try from 031b24ac to 032b24fb has its CatchHandler @ 031b0e98 */
    if (__this_01 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0) {
      pPVar3 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pPVar3 != (PANJAHAFBMD_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pPVar3->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pPVar3->m_Items[(int)uVar1] = __this_00;
                    /* try { // try from 031b24fc to 032b2503 has its CatchHandler @ 031b28f4 */
          thunk_FUN_01c20e04(pPVar3->m_Items + (int)uVar1,__this_00);
          return;
        }
                    /* try { // try from 031b2524 to 032b252b has its CatchHandler @ 031b28d4 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<KAJIALENBGD> KNNMHHNENPH()  [RVA 0x30B295C]
// FEPPOONJCGI$$KNNMHHNENPH @ RVA 0x30B295C

System_Collections_Generic_List_KAJIALENBGD__o *
FEPPOONJCGI__KNNMHHNENPH(FEPPOONJCGI_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 031b2458 with catch @ 031b2960
                       try { // try from 031b2960 to 032b2977 has its CatchHandler @ 031b0e98 */
  return (__this->fields).GNGLHGOGCBO;
}


// ===== public List<PANJAHAFBMD> HMPAOGDOJCD()  [RVA 0x30B2964]
// FEPPOONJCGI$$HMPAOGDOJCD @ RVA 0x30B2964

System_Collections_Generic_List_PANJAHAFBMD__o *
FEPPOONJCGI__HMPAOGDOJCD(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  return (__this->fields).MCDCFBOBJGI;
}


// ===== public List<EKGDLIKHEMA> PGAKCCGJLIF()  [RVA 0x30B296C]
// FEPPOONJCGI$$PGAKCCGJLIF @ RVA 0x30B296C

System_Collections_Generic_List_EKGDLIKHEMA__o *
FEPPOONJCGI__PGAKCCGJLIF(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  return (__this->fields).EBDCADCBPNM;
}


// ===== public void IMHHMPMNGKB(KMJDCOABCCG LFOOJOJHDFM, bool COPNBALDNLF = True, bool BGLBPHDOCGK = True)  [RVA 0x30B2974]
// FEPPOONJCGI$$IMHHMPMNGKB @ RVA 0x30B2974

void FEPPOONJCGI__IMHHMPMNGKB
               (FEPPOONJCGI_o *__this,KMJDCOABCCG_o *LFOOJOJHDFM,bool COPNBALDNLF,bool BGLBPHDOCGK,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EKGDLIKHEMA__o *__this_00;
  EKGDLIKHEMA_o *pEVar2;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  ACHLOMELAJE_o *__this_02;
  MethodInfo *method_00;
  System_String_o *CJNHFNHJHPE;
  int index;
  
  method_00 = (MethodInfo *)(ulong)BGLBPHDOCGK;
                    /* try { // try from 031b2978 to 032b297b has its CatchHandler @ 031b29a4 */
                    /* try { // try from 031b297c to 032b29b3 has its CatchHandler @ 031b0e98 */
  if ((DAT_045661ec & 1) == 0) {
                    /* catch() { ... } // from try @ 031b2978 with catch @ 031b29a4 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
                    /* try { // try from 031b29b4 to 032b29c7 has its CatchHandler @ 031b2b64 */
    FUN_01bab630(&EKGDLIKHEMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Count__);
                    /* catch() { ... } // from try @ 031b25ec with catch @ 031b29c8
                       catch() { ... } // from try @ 031b25fc with catch @ 031b29c8
                       try { // try from 031b29c8 to 032b29f7 has its CatchHandler @ 031b0e98 */
                    /* catch() { ... } // from try @ 031b25d0 with catch @ 031b29d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
                    /* catch() { ... } // from try @ 031b25cc with catch @ 031b29d4 */
                    /* catch() { ... } // from try @ 031b25c8 with catch @ 031b29d8 */
                    /* catch() { ... } // from try @ 031b1a38 with catch @ 031b29dc */
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_2714/*"Achievement"*/);
                    /* try { // try from 031b29f8 to 032b29fb has its CatchHandler @ 031b2a24 */
                    /* try { // try from 031b29fc to 032b2a33 has its CatchHandler @ 031b0e98 */
    FUN_01bab630(&StringLiteral_19787/*"name"*/);
    DAT_045661ec = 1;
  }
  if (LFOOJOJHDFM == (KMJDCOABCCG_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).EBDCADCBPNM;
  if (__this_00 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    CJNHFNHJHPE = (LFOOJOJHDFM->fields).JIJLBFGKNJK;
                    /* catch() { ... } // from try @ 031b29f8 with catch @ 031b2a24 */
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ
                                ((__this->fields).KKJEGEBCAKB,StringLiteral_2714/*"Achievement"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b2a58 with catch @ 031b2a88 */
                    /* try { // try from 031b2a98 to 032b2aab has its CatchHandler @ 031b2b64 */
        pEVar2 = (EKGDLIKHEMA_o *)thunk_FUN_01bda818(EKGDLIKHEMA_TypeInfo);
        EKGDLIKHEMA___ctor(pEVar2,(System_Xml_XmlNode_o *)AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b1444 with catch @ 031b2aac
                       try { // try from 031b2aac to 032b2acb has its CatchHandler @ 031b0e98 */
        if (pEVar2 != (EKGDLIKHEMA_o *)0x0) {
                    /* catch() { ... } // from try @ 031b1474 with catch @ 031b2ab0 */
                    /* catch() { ... } // from try @ 031b14b4 with catch @ 031b2ab4 */
          EKGDLIKHEMA__HCOCAAIGNNL(pEVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 031b2acc to 032b2acf has its CatchHandler @ 031b2ae8 */
          EKGDLIKHEMA__INOKKGKNDAH(pEVar2,COPNBALDNLF,(MethodInfo *)0x0);
          FEPPOONJCGI__BMANEGMLOAA(__this,pEVar2,LFOOJOJHDFM,method_00);
                    /* catch() { ... } // from try @ 031b2acc with catch @ 031b2ae8 */
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
          MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_01,(MethodInfo *)0x0);
          if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (__this_01,StringLiteral_19787/*"name"*/,(Il2CppObject *)CJNHFNHJHPE,
                       Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
                    /* try { // try from 031b2b28 to 032b2b4f has its CatchHandler @ 031b2b64 */
            NFNBHPOJFNJ__NOJIAJPLOKB(3,(MDNLIFLBFNO_o *)__this_01,false,(MethodInfo *)0x0);
            if (!BGLBPHDOCGK) {
              return;
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031b2b50 to 032b2b5b has its CatchHandler @ 031b0e98 */
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 031b2b5c to 032b2b63 has its CatchHandler @ 031b2b64 */
            if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 031b264c with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2730 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b276c with catch @ 031b2b64
                       catch() { ... } // from try @ 031b294c with catch @ 031b2b64
                       catch() { ... } // from try @ 031b29b4 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2a34 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2a98 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2b28 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2b5c with catch @ 031b2b64 */
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_02 != (ACHLOMELAJE_o *)0x0) {
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      }
                    /* try { // try from 031b2a34 to 032b2a47 has its CatchHandler @ 031b2b64 */
      pEVar2 = (EKGDLIKHEMA_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
      if (pEVar2 == (EKGDLIKHEMA_o *)0x0) break;
                    /* catch() { ... } // from try @ 031b1714 with catch @ 031b2a48
                       try { // try from 031b2a48 to 032b2a57 has its CatchHandler @ 031b0e98 */
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,(pEVar2->fields).DEKCPPOJFEH,(MethodInfo *)0x0)
      ;
                    /* try { // try from 031b2a58 to 032b2a5b has its CatchHandler @ 031b2a88 */
      if (bVar1) {
        FEPPOONJCGI__ABFBENBACFN((FEPPOONJCGI_o *)0x1,pEVar2,COPNBALDNLF,BGLBPHDOCGK,method);
        return;
      }
                    /* try { // try from 031b2a5c to 032b2a97 has its CatchHandler @ 031b0e98 */
      __this_00 = (__this->fields).EBDCADCBPNM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

