// TypeDefIndex 3356
// Namespace: 
// public class EPFMFHDGMCE
// Fields:
//   private static EPFMFHDGMCE CBDMFFMCJBK; // 0x0
//   private List<EPFMFHDGMCE.JGKNDMCIPBN> IMFGEOBBNNA; // 0x10
//   private List<EANNACPOJFA> JMPJKOKFJMN; // 0x18
//   private List<JLGNBOILFLN> GCHAMOPMNHF; // 0x20

// ===== public List<EPFMFHDGMCE.JGKNDMCIPBN> GEMGKIBODPA()  [RVA 0x3536138]
// EPFMFHDGMCE$$GEMGKIBODPA @ RVA 0x3536138

System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *
EPFMFHDGMCE__GEMGKIBODPA(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  return (__this->fields).IMFGEOBBNNA;
}


// ===== private void PAIAJOFNHDO(XmlNode AHDGNOJPPIB)  [RVA 0x3536140]
// EPFMFHDGMCE$$PAIAJOFNHDO @ RVA 0x3536140

/* WARNING: Removing unreachable block (ram,0x036365c8) */

void EPFMFHDGMCE__PAIAJOFNHDO
               (EPFMFHDGMCE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t GHPHFGBIPCI;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  EPFMFHDGMCE_JGKNDMCIPBN_o *__this_00;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  EPFMFHDGMCE_o *__this_01;
  System_String_o *pSVar9;
  EPFMFHDGMCE_HOEHCNPOOFD_o *__this_02;
  System_String_o **ppSVar10;
  System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *__this_03;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_04;
  MethodInfo *method_00;
  long lVar11;
  EPFMFHDGMCE_HOEHCNPOOFD_array *pEVar12;
  EPFMFHDGMCE_JGKNDMCIPBN_array *pEVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04568a91 & 1) == 0) {
    FUN_01bab630(&EPFMFHDGMCE_HOEHCNPOOFD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&EPFMFHDGMCE_JGKNDMCIPBN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a91 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    GHPHFGBIPCI = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
    __this_00 = (EPFMFHDGMCE_JGKNDMCIPBN_o *)thunk_FUN_01bda818(EPFMFHDGMCE_JGKNDMCIPBN_TypeInfo);
    EPFMFHDGMCE_JGKNDMCIPBN___ctor(__this_00,GHPHFGBIPCI,method_00);
    plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_036362f4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_036362f4:
        uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) goto LAB_03636500;
          lVar11 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_036364d8;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_036364c0;
        }
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_03636354;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        method_00 = (MethodInfo *)0x1;
        puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03636354:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar8);
        }
        __this_01 = (EPFMFHDGMCE_o *)
                    (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        iVar3 = EPFMFHDGMCE__JOEBJJLKEOH(__this_01,(System_String_o *)__this_01,method_00);
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        __this_02 = (EPFMFHDGMCE_HOEHCNPOOFD_o *)
                    thunk_FUN_01bda818(EPFMFHDGMCE_HOEHCNPOOFD_TypeInfo);
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        ppSVar10 = &(__this_02->fields).JIJLBFGKNJK;
        *ppSVar10 = pSVar9;
        (__this_02->fields).BGHFADDGPAD = iVar3;
        thunk_FUN_01c20e04(ppSVar10,pSVar9);
        (__this_02->fields).NOPGBJNLFHM = GHPHFGBIPCI;
        lVar11 = Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_Add__;
        if (__this_00 == (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_03 = (__this_00->fields).GFBNJPMOEKD;
        if (__this_03 == (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pEVar12 = (__this_03->fields)._items;
        (__this_03->fields)._version = (__this_03->fields)._version + 1;
        if (pEVar12 == (EPFMFHDGMCE_HOEHCNPOOFD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pEVar12->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pEVar12->m_Items[(int)uVar2] = __this_02;
          thunk_FUN_01c20e04(pEVar12->m_Items + (int)uVar2,__this_02);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,
                     (Il2CppObject *)__this_02,(MethodInfo_26E4DAC *)method_00);
        }
      } while( true );
    }
  }
  goto LAB_036365c0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_036364c0:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_036364f4;
    }
  }
LAB_036364d8:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_036364f4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03636500:
  lVar11 = Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Add__;
  __this_04 = (__this->fields).IMFGEOBBNNA;
  if (__this_04 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    pEVar13 = (__this_04->fields)._items;
    (__this_04->fields)._version = (__this_04->fields)._version + 1;
    if (pEVar13 != (EPFMFHDGMCE_JGKNDMCIPBN_array *)0x0) {
      uVar2 = (__this_04->fields)._size;
      if (uVar2 < (uint)pEVar13->max_length) {
        (__this_04->fields)._size = uVar2 + 1;
        pEVar13->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pEVar13->m_Items + (int)uVar2,__this_00);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_036365c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool DGCODECJJCC(EPFMFHDGMCE.JGKNDMCIPBN IMJHEANBDDA, EPFMFHDGMCE.JGKNDMCIPBN DFEGBKMFBMM)  [RVA 0x3536840]
// EPFMFHDGMCE$$DGCODECJJCC @ RVA 0x3536840

bool EPFMFHDGMCE__DGCODECJJCC
               (EPFMFHDGMCE_JGKNDMCIPBN_o *IMJHEANBDDA,EPFMFHDGMCE_JGKNDMCIPBN_o *DFEGBKMFBMM,
               MethodInfo *method)

{
  if ((IMJHEANBDDA != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) &&
     (DFEGBKMFBMM != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0)) {
    return (IMJHEANBDDA->fields).NOPGBJNLFHM < (DFEGBKMFBMM->fields).NOPGBJNLFHM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCHEFCBOLBC(int JLAFGLDIFOC)  [RVA 0x3536868]
// EPFMFHDGMCE$$CCHEFCBOLBC @ RVA 0x3536868

void EPFMFHDGMCE__CCHEFCBOLBC(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar1;
  Il2CppObject *pIVar2;
  EANNACPOJFA_o *pEVar3;
  int index;
  
  if ((DAT_04568a92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568a92 = 1;
  }
  pSVar1 = (__this->fields).GCHAMOPMNHF;
  if (pSVar1 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    index = 0;
    do {
      while( true ) {
        if (index == (pSVar1->fields)._size) {
          pEVar3 = EPFMFHDGMCE__FLCAGIJMPKA(__this,JLAFGLDIFOC,method);
          if (pEVar3 != (EANNACPOJFA_o *)0x0) {
            pSVar1 = (pEVar3->fields).GJBLBEALOBO;
            if (pSVar1 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_0363698c;
            length = (pSVar1->fields)._size;
            (pSVar1->fields)._size = 0;
            (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,
                                  (MethodInfo *)0x0);
              return;
            }
          }
          return;
        }
        method = Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__;
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0363698c;
        if (*(int *)((long)&pIVar2[1].monitor + 4) != JLAFGLDIFOC) break;
        pSVar1 = (__this->fields).GCHAMOPMNHF;
        if (pSVar1 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_0363698c;
        method = Method_System_Collections_Generic_List<JLGNBOILFLN>_RemoveAt__;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_26E6580 *)
                   Method_System_Collections_Generic_List<JLGNBOILFLN>_RemoveAt__);
        pSVar1 = (__this->fields).GCHAMOPMNHF;
        if (pSVar1 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_0363698c;
      }
      pSVar1 = (__this->fields).GCHAMOPMNHF;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0);
  }
LAB_0363698c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EPFMFHDGMCE.JGKNDMCIPBN KLFKIMPHFCG(int JLAFGLDIFOC)  [RVA 0x3536A30]
// EPFMFHDGMCE$$KLFKIMPHFCG @ RVA 0x3536A30

EPFMFHDGMCE_JGKNDMCIPBN_o *
EPFMFHDGMCE__KLFKIMPHFCG(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  EPFMFHDGMCE_JGKNDMCIPBN_o *pEVar1;
  int index;
  
  if ((DAT_04568a93 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__);
    DAT_04568a93 = 1;
  }
  __this_00 = (__this->fields).IMFGEOBBNNA;
  if (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0;
      }
      pEVar1 = (EPFMFHDGMCE_JGKNDMCIPBN_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__
                         );
      if (pEVar1 == (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) break;
      if (JLAFGLDIFOC < (pEVar1->fields).NOPGBJNLFHM) {
        return pEVar1;
      }
      __this_00 = (__this->fields).IMFGEOBBNNA;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BFIMMMKACHP(string KGLJICLJHEL)  [RVA 0x3536AD0]
// EPFMFHDGMCE$$BFIMMMKACHP @ RVA 0x3536AD0

void EPFMFHDGMCE__BFIMMMKACHP(EPFMFHDGMCE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  FOKJBDHLIMG_o *pFVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  int index;
  
  if ((DAT_04568a94 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568a94 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar3 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar3 != (FOKJBDHLIMG_o *)0x0) &&
     (__this_00 = (pFVar3->fields).CNLHOAHDHCF,
     __this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
                    /* try { // try from 03636b64 to 03736d23 has its CatchHandler @ 03636b64
                       catch() { ... } // from try @ 03636b64 with catch @ 03636b64
                       catch() { ... } // from try @ 03636dd4 with catch @ 03636b64
                       catch() { ... } // from try @ 03636e10 with catch @ 03636b64
                       catch() { ... } // from try @ 03636e4c with catch @ 03636b64
                       catch() { ... } // from try @ 03636e7c with catch @ 03636b64 */
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03636bd8;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pIVar2[4].klass,KGLJICLJHEL,(MethodInfo *)0x0);
        if (bVar1) {
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                     Method_System_Collections_Generic_List<PerkInfoItem>_RemoveAt__);
          return;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    return;
  }
LAB_03636bd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LLEFFBHJAHK(EPFMFHDGMCE.JGKNDMCIPBN LDJFHDMLJMO)  [RVA 0x3536BDC]
// EPFMFHDGMCE$$LLEFFBHJAHK @ RVA 0x3536BDC

void EPFMFHDGMCE__LLEFFBHJAHK
               (EPFMFHDGMCE_o *__this,EPFMFHDGMCE_JGKNDMCIPBN_o *LDJFHDMLJMO,MethodInfo *method)

{
  int iVar1;
  int32_t JLAFGLDIFOC;
  uint uVar2;
  int32_t ACCIHBHMFPN;
  long lVar3;
  System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *__this_00;
  EANNACPOJFA_o *pEVar4;
  EPFMFHDGMCE_o *__this_01;
  PerkInfoItem_o *EIKFGOCCOIE;
  JLGNBOILFLN_o *__this_02;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar5;
  MethodInfo *method_00;
  JLGNBOILFLN_array *pJVar6;
  int index;
  
  if ((DAT_04568a95 & 1) == 0) {
    FUN_01bab630(&JLGNBOILFLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__);
    DAT_04568a95 = 1;
  }
  if (LDJFHDMLJMO != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) {
    __this_00 = EPFMFHDGMCE_JGKNDMCIPBN__BKHAHFOIGAC(LDJFHDMLJMO,2,method);
    pEVar4 = EPFMFHDGMCE__FLCAGIJMPKA(__this,(LDJFHDMLJMO->fields).NOPGBJNLFHM,method);
    if (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0) {
      if (0 < (__this_00->fields)._size) {
        index = 0;
        do {
          method_00 = Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__;
          __this_01 = (EPFMFHDGMCE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__
                                );
          if (__this_01 == (EPFMFHDGMCE_o *)0x0) goto LAB_03636df4;
          EIKFGOCCOIE = EPFMFHDGMCE__HDEDNKMEFDN
                                  (__this_01,(System_String_o *)(__this_01->fields).JMPJKOKFJMN,
                                   method_00);
          if (EIKFGOCCOIE != (PerkInfoItem_o *)0x0) {
            iVar1 = *(int *)&(__this_01->fields).IMFGEOBBNNA;
            JLAFGLDIFOC = *(int32_t *)&(__this_01->fields).GCHAMOPMNHF;
            ACCIHBHMFPN = (uint)(iVar1 == 2) << 1;
            if (iVar1 == 1) {
              ACCIHBHMFPN = 1;
            }
            __this_02 = (JLGNBOILFLN_o *)thunk_FUN_01bda818(JLGNBOILFLN_TypeInfo);
            JLGNBOILFLN___ctor(__this_02,EIKFGOCCOIE,JLAFGLDIFOC,3,ACCIHBHMFPN,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
            pSVar5 = (__this->fields).GCHAMOPMNHF;
            if (pSVar5 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_03636df4;
            pJVar6 = (pSVar5->fields)._items;
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pJVar6 == (JLGNBOILFLN_array *)0x0) goto LAB_03636df4;
            uVar2 = (pSVar5->fields)._size;
                    /* try { // try from 03636d24 to 03736d2b has its CatchHandler @ 03636e30 */
            if (uVar2 < (uint)pJVar6->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pJVar6->m_Items[(int)uVar2] = __this_02;
                    /* try { // try from 03636d40 to 03736d47 has its CatchHandler @ 03636e28 */
              thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar2,__this_02);
              lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
            }
            else {
                    /* try { // try from 03636d50 to 03736d57 has its CatchHandler @ 03636e20 */
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,
                         (Il2CppObject *)__this_02,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
              lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
            }
            Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__ = lVar3;
            if (pEVar4 != (EANNACPOJFA_o *)0x0) {
                    /* try { // try from 03636d64 to 03736d6f has its CatchHandler @ 03636e18 */
              pSVar5 = (pEVar4->fields).GJBLBEALOBO;
              if (pSVar5 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)
              goto LAB_03636df4;
              pJVar6 = (pSVar5->fields)._items;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (pJVar6 == (JLGNBOILFLN_array *)0x0) goto LAB_03636df4;
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pJVar6->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pJVar6->m_Items[(int)uVar2] = __this_02;
                thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar2,__this_02);
                    /* try { // try from 03636db0 to 03736dd3 has its CatchHandler @ 03636e1c */
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          index = index + 1;
                    /* try { // try from 03636dd4 to 03736dff has its CatchHandler @ 03636b64 */
        } while (index < (__this_00->fields)._size);
      }
      return;
    }
  }
LAB_03636df4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3537150]
// EPFMFHDGMCE$$.ctor @ RVA 0x3537150

void EPFMFHDGMCE___ctor(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_01;
  System_Collections_Generic_List_EANNACPOJFA__o **ppSVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_02;
  System_Collections_Generic_List_JLGNBOILFLN__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a96 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo);
    DAT_04568a96 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>__ctor__);
  (__this->fields).IMFGEOBBNNA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_EANNACPOJFA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
  ppSVar1 = &(__this->fields).JMPJKOKFJMN;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  __this_02 = (System_Collections_Generic_List_JLGNBOILFLN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
  ppSVar2 = &(__this->fields).GCHAMOPMNHF;
  *ppSVar2 = __this_02;
                    /* try { // try from 03637258 to 0373725f has its CatchHandler @ 036373a8 */
  thunk_FUN_01c20e04(ppSVar2,__this_02);
                    /* try { // try from 03637278 to 0373727f has its CatchHandler @ 0363739c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x3537280]
// EPFMFHDGMCE$$NDNPGAKJLHM @ RVA 0x3537280

void EPFMFHDGMCE__NDNPGAKJLHM(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  int32_t length;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *pSVar1;
  
  if ((DAT_04568a97 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Clear__);
    DAT_04568a97 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).IMFGEOBBNNA;
  if (pSVar1 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    length = (pSVar1->fields)._size;
                    /* try { // try from 036372c0 to 037372e3 has its CatchHandler @ 03637390 */
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
                    /* try { // try from 036372e4 to 0373730b has its CatchHandler @ 036370b8 */
    EPFMFHDGMCE__IBJONJJDPNP(__this,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private PerkInfoItem HDEDNKMEFDN(string KGLJICLJHEL)  [RVA 0x3536F64]
// EPFMFHDGMCE$$HDEDNKMEFDN @ RVA 0x3536F64

PerkInfoItem_o *
EPFMFHDGMCE__HDEDNKMEFDN(EPFMFHDGMCE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  PerkInfoItem_o *pHVar2;
  System_String_o *extraout_x1;
  FOKJBDHLIMG_o *pFVar3;
  
  if ((DAT_04568a98 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568a98 = 1;
    KGLJICLJHEL = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,KGLJICLJHEL);
  }
  pFVar3 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar3 != (FOKJBDHLIMG_o *)0x0) &&
     (pSVar1 = (pFVar3->fields).CNLHOAHDHCF,
     pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    pHVar2 = (PerkInfoItem_o *)
             FUN_03f936b8(pSVar1,Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__
                         );
    return pHVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KONIOMKBHIP(EPFMFHDGMCE.JGKNDMCIPBN LDJFHDMLJMO)  [RVA 0x3537394]
// EPFMFHDGMCE$$KONIOMKBHIP @ RVA 0x3537394

void EPFMFHDGMCE__KONIOMKBHIP
               (EPFMFHDGMCE_o *__this,EPFMFHDGMCE_JGKNDMCIPBN_o *LDJFHDMLJMO,MethodInfo *method)

{
  System_Comparison_JLGNBOILFLN__o **ppSVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  System_Comparison_JLGNBOILFLN__o *comparison;
  
                    /* catch() { ... } // from try @ 0363737c with catch @ 03637394 */
                    /* catch() { ... } // from try @ 03637380 with catch @ 03637398 */
                    /* catch() { ... } // from try @ 03637278 with catch @ 0363739c */
                    /* catch() { ... } // from try @ 03637378 with catch @ 036373a0 */
                    /* catch() { ... } // from try @ 03637340 with catch @ 036373a4 */
                    /* catch() { ... } // from try @ 03637258 with catch @ 036373a8 */
  if ((DAT_04568a99 & 1) == 0) {
    FUN_01bab630(&System_Comparison<JLGNBOILFLN>_TypeInfo);
                    /* try { // try from 036373c0 to 037373c3 has its CatchHandler @ 036373e4 */
                    /* try { // try from 036373c4 to 037373eb has its CatchHandler @ 036370b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Sort__);
    FUN_01bab630(&Method_EPFMFHDGMCE_<>c_PEBHFJINOPA__);
    FUN_01bab630(&EPFMFHDGMCE_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 036373c0 with catch @ 036373e4 */
    DAT_04568a99 = 1;
  }
                    /* try { // try from 036373ec to 037373ff has its CatchHandler @ 03637460 */
  if (LDJFHDMLJMO != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) {
                    /* catch() { ... } // from try @ 0363730c with catch @ 03637400
                       try { // try from 03637400 to 03737417 has its CatchHandler @ 036370b8 */
    EPFMFHDGMCE__CCHEFCBOLBC(__this,(LDJFHDMLJMO->fields).NOPGBJNLFHM,method);
    EPFMFHDGMCE__LLEFFBHJAHK(__this,LDJFHDMLJMO,method);
    __this_00 = (__this->fields).GCHAMOPMNHF;
                    /* try { // try from 03637418 to 0373741b has its CatchHandler @ 0363743c */
                    /* try { // try from 0363741c to 03737443 has its CatchHandler @ 036370b8 */
    if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__27_0;
    if (comparison == (System_Comparison_JLGNBOILFLN__o *)0x0) {
      if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03637418 with catch @ 0363743c */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03637444 to 0373744b has its CatchHandler @ 03637460 */
                    /* try { // try from 0363744c to 03737457 has its CatchHandler @ 036370b8 */
                    /* try { // try from 03637458 to 0373745f has its CatchHandler @ 03637460 */
      comparison = (System_Comparison_JLGNBOILFLN__o *)
                   thunk_FUN_01bda818(System_Comparison<JLGNBOILFLN>_TypeInfo);
                    /* catch() { ... } // from try @ 036373ec with catch @ 03637460
                       catch() { ... } // from try @ 03637444 with catch @ 03637460
                       catch() { ... } // from try @ 03637458 with catch @ 03637460 */
      System_Comparison<object>___ctor();
      ppSVar1 = &EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__27_0;
      *ppSVar1 = comparison;
      thunk_FUN_01c20e04(ppSVar1,comparison);
    }
    if (__this_00 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<JLGNBOILFLN>_Sort__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FMCAFEPAFDI()  [RVA 0x35374B8]
// EPFMFHDGMCE$$FMCAFEPAFDI @ RVA 0x35374B8

void EPFMFHDGMCE__FMCAFEPAFDI(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  Il2CppObject *pIVar4;
  JLGNBOILFLN_o *__this_00;
  int index;
  
  if ((DAT_04568a9a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568a9a = 1;
  }
  pSVar3 = (__this->fields).GCHAMOPMNHF;
  if (pSVar3 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    if ((pSVar3->fields)._size < 1) {
      return;
    }
    pIVar4 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,0,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pSVar3 = (__this->fields).GCHAMOPMNHF,
       pSVar3 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) {
      iVar1 = (pSVar3->fields)._size;
      if (iVar1 < 1) {
        return;
      }
      iVar2 = *(int *)((long)&pIVar4[1].monitor + 4);
      index = 0;
      while (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__),
            pIVar4 != (Il2CppObject *)0x0) {
        if (iVar2 != *(int *)((long)&pIVar4[1].monitor + 4)) {
          return;
        }
        pSVar3 = (__this->fields).GCHAMOPMNHF;
        if ((pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) ||
           (__this_00 = (JLGNBOILFLN_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                   Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__),
           __this_00 == (JLGNBOILFLN_o *)0x0)) break;
        JLGNBOILFLN__GPGHFJOGLJJ(__this_00,0,(MethodInfo *)0x0);
        index = index + 1;
        if (iVar1 == index) {
          return;
        }
        pSVar3 = (__this->fields).GCHAMOPMNHF;
        if (pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private EPFMFHDGMCE.OKDNMACPDFA JOEBJJLKEOH(string HCBBECJJIKK)  [RVA 0x3536768]
// EPFMFHDGMCE$$JOEBJJLKEOH @ RVA 0x3536768

int32_t EPFMFHDGMCE__JOEBJJLKEOH
                  (EPFMFHDGMCE_o *__this,System_String_o *HCBBECJJIKK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04568a9b & 1) == 0) {
    FUN_01bab630(&StringLiteral_14587/*"Upgrade"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_04568a9b = 1;
  }
  bVar1 = System_String__op_Equality(HCBBECJJIKK,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(HCBBECJJIKK,StringLiteral_14587/*"Upgrade"*/,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ===== public List<EANNACPOJFA> IOKPBBPCHBC()  [RVA 0x35375A8]
// EPFMFHDGMCE$$IOKPBBPCHBC @ RVA 0x35375A8

System_Collections_Generic_List_EANNACPOJFA__o *
EPFMFHDGMCE__IOKPBBPCHBC(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  return (__this->fields).JMPJKOKFJMN;
}


// ===== public void IIAACPBHHOA()  [RVA 0x35375B0]
// EPFMFHDGMCE$$IIAACPBHHOA @ RVA 0x35375B0

void EPFMFHDGMCE__IIAACPBHHOA(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  EPFMFHDGMCE_o *pEVar2;
  EPFMFHDGMCE_JGKNDMCIPBN_o *LDJFHDMLJMO;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar3;
  MethodInfo *in_x3;
  Roster_o *pAVar4;
  NFGLEDADCGL_o *pNVar5;
  KJBGNIGNECD_o *pKVar6;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *__this_01;
  int32_t DFIBGGDJPLM;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568a9c & 1) == 0) {
    FUN_01bab630(&System_Action<KJBGNIGNECD_AHICALNEICM>_TypeInfo);
    FUN_01bab630(&Method_EPFMFHDGMCE_KONIOMKBHIP__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568a9c = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  EPFMFHDGMCE__IBJONJJDPNP(__this,method);
  pEVar2 = EPFMFHDGMCE__ICEPMHDMFLM(method_00);
  if ((pEVar2 != (EPFMFHDGMCE_o *)0x0) &&
     (__this_00 = (pEVar2->fields).IMFGEOBBNNA,
     __this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_80.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      DFIBGGDJPLM = 1;
      if (*(int *)&((local_80.fields._current[1].klass)->_1).namespaze != 1) {
        DFIBGGDJPLM = 2;
      }
      EPFMFHDGMCE__AIFILIDDBMG
                (__this,*(int32_t *)&local_80.fields._current[1].monitor,DFIBGGDJPLM,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<EPFMFHDGMCE_JGKNDMCIPBN>_Dispose__)
    ;
    pMVar3 = extraout_x1_00;
    if ((__this_00->fields)._size != 0) {
      pMVar3 = Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__;
      LDJFHDMLJMO = (EPFMFHDGMCE_JGKNDMCIPBN_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,0,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__
                              );
      EPFMFHDGMCE__KONIOMKBHIP(__this,LDJFHDMLJMO,pMVar3);
      pMVar3 = extraout_x1_01;
    }
    EPFMFHDGMCE__FMCAFEPAFDI(__this,pMVar3);
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
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar4 != (Roster_o *)0x0) &&
        (pNVar5 = (pAVar4->fields).CKJAGLDEMAE, pNVar5 != (NFGLEDADCGL_o *)0x0)) &&
       (pKVar6 = (pNVar5->fields).GMHDPMNODMF, pKVar6 != (KJBGNIGNECD_o *)0x0)) {
      __this_01 = (pKVar6->fields).GJBLBEALOBO;
      action = (System_Action_T__o *)
               thunk_FUN_01bda818(System_Action<KJBGNIGNECD_AHICALNEICM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_01,action,
                   Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private JLGNBOILFLN.LIHPLIFKLDM NHOIAMJBNKH(EPFMFHDGMCE.OKDNMACPDFA ACCIHBHMFPN)  [RVA 0x3537138]
// EPFMFHDGMCE$$NHOIAMJBNKH @ RVA 0x3537138

int32_t EPFMFHDGMCE__NHOIAMJBNKH(EPFMFHDGMCE_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (uint)(ACCIHBHMFPN == 2) << 1;
  if (ACCIHBHMFPN == 1) {
    iVar1 = 1;
  }
  return iVar1;
}


// ===== private void AIFILIDDBMG(int JLAFGLDIFOC, int DFIBGGDJPLM = 2)  [RVA 0x3537924]
// EPFMFHDGMCE$$AIFILIDDBMG @ RVA 0x3537924

void EPFMFHDGMCE__AIFILIDDBMG
               (EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  EANNACPOJFA_o *__this_00;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_01;
  JLGNBOILFLN_o *__this_02;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  EANNACPOJFA_array *pEVar4;
  JLGNBOILFLN_array *pJVar5;
  
  if ((DAT_04568a9d & 1) == 0) {
    FUN_01bab630(&EANNACPOJFA_TypeInfo);
    FUN_01bab630(&JLGNBOILFLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    DAT_04568a9d = 1;
  }
  __this_00 = (EANNACPOJFA_o *)thunk_FUN_01bda818(EANNACPOJFA_TypeInfo);
  EANNACPOJFA___ctor(__this_00,JLAFGLDIFOC,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<EANNACPOJFA>_Add__;
  __this_01 = (__this->fields).JMPJKOKFJMN;
  if (__this_01 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    pEVar4 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pEVar4 != (EANNACPOJFA_array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pEVar4->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pEVar4->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pEVar4->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if (0 < DFIBGGDJPLM) {
        do {
          __this_02 = (JLGNBOILFLN_o *)thunk_FUN_01bda818(JLGNBOILFLN_TypeInfo);
          JLGNBOILFLN___ctor(__this_02,(PerkInfoItem_o *)0x0,JLAFGLDIFOC,3,0,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
          pSVar3 = (__this->fields).GCHAMOPMNHF;
          if (pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_03637b34;
          pJVar5 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pJVar5 == (JLGNBOILFLN_array *)0x0) goto LAB_03637b34;
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 < (uint)pJVar5->max_length) {
            (pSVar3->fields)._size = uVar1 + 1;
            pJVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
          if ((__this_00 == (EANNACPOJFA_o *)0x0) ||
             (pSVar3 = (__this_00->fields).GJBLBEALOBO,
             pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_03637b34;
          pJVar5 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pJVar5 == (JLGNBOILFLN_array *)0x0) goto LAB_03637b34;
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 < (uint)pJVar5->max_length) {
            (pSVar3->fields)._size = uVar1 + 1;
            pJVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          DFIBGGDJPLM = DFIBGGDJPLM + -1;
        } while (DFIBGGDJPLM != 0);
      }
      return;
    }
  }
LAB_03637b34:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<JLGNBOILFLN> NLEECHEFBOH(int JLAFGLDIFOC)  [RVA 0x3537B38]
// EPFMFHDGMCE$$NLEECHEFBOH @ RVA 0x3537B38

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_JLGNBOILFLN__o *
EPFMFHDGMCE__NLEECHEFBOH(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  JLGNBOILFLN_o *item;
  JLGNBOILFLN_array *pJVar4;
  int index;
  
  if ((DAT_04568a9e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
    DAT_04568a9e = 1;
  }
  __this_00 = (System_Collections_Generic_List_JLGNBOILFLN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
  __this_01 = (__this->fields).GCHAMOPMNHF;
  if (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return __this_00;
      }
      item = (JLGNBOILFLN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,index,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
      lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
      if (item == (JLGNBOILFLN_o *)0x0) break;
      iVar1 = (item->fields).GHPHFGBIPCI;
      if (iVar1 == JLAFGLDIFOC) {
        if (__this_00 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) break;
        pJVar4 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pJVar4 == (JLGNBOILFLN_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pJVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pJVar4->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (JLAFGLDIFOC < iVar1) {
        return __this_00;
      }
      __this_01 = (__this->fields).GCHAMOPMNHF;
      index = index + 1;
    } while (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JLGNBOILFLN OPHCGMGNFFO(string KGLJICLJHEL)  [RVA 0x3537C94]
// EPFMFHDGMCE$$OPHCGMGNFFO @ RVA 0x3537C94

JLGNBOILFLN_o *
EPFMFHDGMCE__OPHCGMGNFFO(EPFMFHDGMCE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  JLGNBOILFLN_o *__this_01;
  System_String_o *a;
  int index;
  
  if ((DAT_04568a9f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568a9f = 1;
  }
  __this_00 = (__this->fields).GCHAMOPMNHF;
  if (__this_00 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (JLGNBOILFLN_o *)0x0;
      }
      __this_01 = (JLGNBOILFLN_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
      if (__this_01 == (JLGNBOILFLN_o *)0x0) break;
      a = JLGNBOILFLN__GKMAFGODLLG(__this_01,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
        return __this_01;
      }
      __this_00 = (__this->fields).GCHAMOPMNHF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<JLGNBOILFLN> IHOPODFBDEO()  [RVA 0x3537D48]
// EPFMFHDGMCE$$IHOPODFBDEO @ RVA 0x3537D48

System_Collections_Generic_List_JLGNBOILFLN__o *
EPFMFHDGMCE__IHOPODFBDEO(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  return (__this->fields).GCHAMOPMNHF;
}


// ===== private void NJNJFBNBFIH(KJBGNIGNECD.AHICALNEICM EIKFGOCCOIE)  [RVA 0x3537D50]
// EPFMFHDGMCE$$NJNJFBNBFIH @ RVA 0x3537D50

void EPFMFHDGMCE__NJNJFBNBFIH
               (EPFMFHDGMCE_o *__this,KJBGNIGNECD_AHICALNEICM_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar2;
  JLGNBOILFLN_o *pJVar3;
  System_String_o *a;
  int iVar4;
  int32_t CJNHFNHJHPE;
  
  if ((DAT_04568aa0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568aa0 = 1;
  }
  if ((EIKFGOCCOIE != (KJBGNIGNECD_AHICALNEICM_o *)0x0) &&
     (pSVar2 = EPFMFHDGMCE__NLEECHEFBOH(__this,(EIKFGOCCOIE->fields).NOPGBJNLFHM,method),
     pSVar2 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) {
    if (0 < (pSVar2->fields)._size) {
      iVar4 = 0;
      do {
        pJVar3 = (JLGNBOILFLN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                            Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
        if (pJVar3 == (JLGNBOILFLN_o *)0x0) goto LAB_03637e80;
        a = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
        CJNHFNHJHPE = 1;
        if (bVar1) {
          CJNHFNHJHPE = 2;
        }
        method = (MethodInfo *)0x0;
        JLGNBOILFLN__GPGHFJOGLJJ(pJVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (pSVar2->fields)._size);
    }
    pSVar2 = EPFMFHDGMCE__JNFEMGHHLAF(__this,(EIKFGOCCOIE->fields).NOPGBJNLFHM,method);
    if (pSVar2 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
      if (0 < (pSVar2->fields)._size) {
        iVar4 = 0;
        do {
          pJVar3 = (JLGNBOILFLN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                              Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
          if (pJVar3 == (JLGNBOILFLN_o *)0x0) goto LAB_03637e80;
          JLGNBOILFLN__GPGHFJOGLJJ(pJVar3,0,(MethodInfo *)0x0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (pSVar2->fields)._size);
      }
      return;
    }
  }
LAB_03637e80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EANNACPOJFA EEANJKONNHD(int JLAFGLDIFOC)  [RVA 0x3537FF8]
// EPFMFHDGMCE$$EEANJKONNHD @ RVA 0x3537FF8

EANNACPOJFA_o *
EPFMFHDGMCE__EEANJKONNHD(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  EANNACPOJFA_o *pEVar1;
  int index;
  
  if ((DAT_04568aa1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    DAT_04568aa1 = 1;
  }
  __this_00 = (__this->fields).JMPJKOKFJMN;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (EANNACPOJFA_o *)0x0;
      }
      pEVar1 = (EANNACPOJFA_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      if (pEVar1 == (EANNACPOJFA_o *)0x0) break;
      if (JLAFGLDIFOC < (pEVar1->fields).NOPGBJNLFHM) {
        return pEVar1;
      }
      __this_00 = (__this->fields).JMPJKOKFJMN;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static EPFMFHDGMCE ICEPMHDMFLM()  [RVA 0x35378A0]
// EPFMFHDGMCE$$ICEPMHDMFLM @ RVA 0x35378A0

EPFMFHDGMCE_o * EPFMFHDGMCE__ICEPMHDMFLM(MethodInfo *method)

{
  EPFMFHDGMCE_o *pEVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04568aa2 & 1) == 0) {
    FUN_01bab630(&EPFMFHDGMCE_TypeInfo);
    DAT_04568aa2 = 1;
  }
  pEVar1 = EPFMFHDGMCE_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pEVar1 == (EPFMFHDGMCE_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pEVar1 = auVar2._0_8_;
    EPFMFHDGMCE___ctor(pEVar1,auVar2._8_8_);
    EPFMFHDGMCE_TypeInfo->static_fields->CBDMFFMCJBK = pEVar1;
    thunk_FUN_01c20e04(EPFMFHDGMCE_TypeInfo->static_fields,pEVar1);
    pEVar1 = EPFMFHDGMCE_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pEVar1;
}


// ===== public void IBJONJJDPNP()  [RVA 0x35372EC]
// EPFMFHDGMCE$$IBJONJJDPNP @ RVA 0x35372EC

void EPFMFHDGMCE__IBJONJJDPNP(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar2;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  
  if ((DAT_04568aa3 & 1) == 0) {
                    /* try { // try from 0363730c to 03737313 has its CatchHandler @ 03637400 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Clear__);
    DAT_04568aa3 = 1;
  }
  pSVar2 = (__this->fields).JMPJKOKFJMN;
                    /* try { // try from 03637328 to 0373732b has its CatchHandler @ 0363738c */
  if (pSVar2 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
                    /* try { // try from 03637340 to 03737347 has its CatchHandler @ 036373a4 */
                    /* try { // try from 03637348 to 03737377 has its CatchHandler @ 036370b8 */
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).GCHAMOPMNHF;
    if (pSVar3 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
                    /* try { // try from 03637378 to 0373737b has its CatchHandler @ 036373a0 */
                    /* try { // try from 0363737c to 0373737f has its CatchHandler @ 03637394 */
                    /* try { // try from 03637380 to 03737387 has its CatchHandler @ 03637398 */
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
                    /* try { // try from 03637388 to 037373bf has its CatchHandler @ 036370b8 */
                    /* catch() { ... } // from try @ 03637328 with catch @ 0363738c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036372c0 with catch @ 03637390 */
  FUN_01bab8c8();
}


// ===== public int KHPKOIMEPBK()  [RVA 0x3538098]
// EPFMFHDGMCE$$KHPKOIMEPBK @ RVA 0x3538098

int32_t EPFMFHDGMCE__KHPKOIMEPBK(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_01;
  int index;
  
  if ((DAT_04568aa4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568aa4 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    iVar1 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).IMFGEOBBNNA;
    if (__this_01 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
      index = 0;
      do {
        if ((__this_01->fields)._size <= index) {
          return index;
        }
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) break;
        if (iVar1 < *(int *)&pIVar2[1].monitor) {
          return index;
        }
        __this_01 = (__this->fields).IMFGEOBBNNA;
        index = index + 1;
      } while (__this_01 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35381A8]
// EPFMFHDGMCE$$HNIHOIAMDPC @ RVA 0x35381A8

/* WARNING: Removing unreachable block (ram,0x036384a8) */

void EPFMFHDGMCE__HNIHOIAMDPC
               (EPFMFHDGMCE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o *comparison;
  
  method_00 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04568aa5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Sort__);
    FUN_01bab630(&Method_EPFMFHDGMCE_<>c_CBPJPIPIHDJ__);
    FUN_01bab630(&EPFMFHDGMCE_<>c_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568aa5 = 1;
    method_00 = extraout_x1;
  }
  EPFMFHDGMCE__NDNPGAKJLHM(__this,method_00);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 != (long *)0x0)) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_036382c0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar3 = (undefined8 *)FUN_01b81914(plVar2);
LAB_036382c0:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
        if (plVar2 == (long *)0x0) goto LAB_036383e0;
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_036383b8;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_036383a0;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_03638320;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      method = (MethodInfo *)0x1;
      puVar3 = (undefined8 *)FUN_01b81914(plVar2);
LAB_03638320:
      AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
      }
      EPFMFHDGMCE__PAIAJOFNHDO(__this,AHDGNOJPPIB_00,method);
    } while( true );
  }
  goto LAB_036384a0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_036383a0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_036383d4;
    }
  }
LAB_036383b8:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036383d4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_036383e0:
  __this_00 = (__this->fields).IMFGEOBBNNA;
  if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EPFMFHDGMCE_<>c_TypeInfo);
  }
  comparison = EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__13_0;
  if (comparison == (System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EPFMFHDGMCE_<>c_TypeInfo);
    }
    comparison = (System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o *)
                 thunk_FUN_01bda818(System_Comparison<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar4 = &EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar4 = comparison;
    thunk_FUN_01c20e04(ppSVar4,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Sort__);
    return;
  }
LAB_036384a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EANNACPOJFA FLCAGIJMPKA(int JLAFGLDIFOC)  [RVA 0x3536990]
// EPFMFHDGMCE$$FLCAGIJMPKA @ RVA 0x3536990

EANNACPOJFA_o *
EPFMFHDGMCE__FLCAGIJMPKA(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  EANNACPOJFA_o *pEVar1;
  int index;
  
  if ((DAT_04568aa6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    DAT_04568aa6 = 1;
  }
  __this_00 = (__this->fields).JMPJKOKFJMN;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (EANNACPOJFA_o *)0x0;
      }
      pEVar1 = (EANNACPOJFA_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      if (pEVar1 == (EANNACPOJFA_o *)0x0) break;
      if ((pEVar1->fields).NOPGBJNLFHM == JLAFGLDIFOC) {
        return pEVar1;
      }
      __this_00 = (__this->fields).JMPJKOKFJMN;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KONIOMKBHIP(KJBGNIGNECD.AHICALNEICM EIKFGOCCOIE)  [RVA 0x353856C]
// EPFMFHDGMCE$$KONIOMKBHIP @ RVA 0x353856C

void EPFMFHDGMCE__KONIOMKBHIP
               (EPFMFHDGMCE_o *__this,KJBGNIGNECD_AHICALNEICM_o *EIKFGOCCOIE,MethodInfo *method)

{
  EPFMFHDGMCE_JGKNDMCIPBN_o *LDJFHDMLJMO;
  
  if (EIKFGOCCOIE != (KJBGNIGNECD_AHICALNEICM_o *)0x0) {
    EPFMFHDGMCE__BFIMMMKACHP(__this,(EIKFGOCCOIE->fields).JIJLBFGKNJK,method);
    LDJFHDMLJMO = EPFMFHDGMCE__KLFKIMPHFCG(__this,(EIKFGOCCOIE->fields).NOPGBJNLFHM,method);
    if (LDJFHDMLJMO != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) {
      EPFMFHDGMCE__KONIOMKBHIP(__this,LDJFHDMLJMO,method);
    }
    EPFMFHDGMCE__NJNJFBNBFIH(__this,EIKFGOCCOIE,method);
    return;
  }
  return;
}


// ===== private List<JLGNBOILFLN> JNFEMGHHLAF(int JLAFGLDIFOC)  [RVA 0x3537E84]
// EPFMFHDGMCE$$JNFEMGHHLAF @ RVA 0x3537E84

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_JLGNBOILFLN__o *
EPFMFHDGMCE__JNFEMGHHLAF(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  JLGNBOILFLN_o *item;
  JLGNBOILFLN_array *pJVar4;
  int index;
  int32_t iVar5;
  
  if ((DAT_04568aa7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
    DAT_04568aa7 = 1;
  }
  __this_00 = (System_Collections_Generic_List_JLGNBOILFLN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
  __this_01 = (__this->fields).GCHAMOPMNHF;
  if (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    index = 0;
    iVar5 = JLAFGLDIFOC;
    do {
      if ((__this_01->fields)._size <= index) {
        return __this_00;
      }
      item = (JLGNBOILFLN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,index,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
      lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
      if (item == (JLGNBOILFLN_o *)0x0) break;
      iVar1 = (item->fields).GHPHFGBIPCI;
      if ((JLAFGLDIFOC < iVar5) && (iVar5 < iVar1)) {
        return __this_00;
      }
      if (JLAFGLDIFOC < iVar1) {
        if (__this_00 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) break;
        pJVar4 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pJVar4 == (JLGNBOILFLN_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        iVar5 = iVar1;
        if (uVar2 < (uint)pJVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pJVar4->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this_01 = (__this->fields).GCHAMOPMNHF;
      index = index + 1;
    } while (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

