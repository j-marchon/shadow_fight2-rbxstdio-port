// TypeDefIndex 813
// Namespace: 
// public class POGBKGFBOLC
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private List<PKKLIJLIKGF> <OADOOFBKPEE>k__BackingField; // 0x18
//   private List<PerkInfoItem> <CGEHDAHDMLB>k__BackingField; // 0x20

// ===== private void CKGHKMGGONN(List<PerkInfoItem> CJNHFNHJHPE)  [RVA 0x30760D0]
// POGBKGFBOLC$$CKGHKMGGONN @ RVA 0x30760D0

void POGBKGFBOLC__CKGHKMGGONN
               (POGBKGFBOLC_o *__this,System_Collections_Generic_List_HEFOANCOHDC__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._CGEHDAHDMLB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x30760D8]
// POGBKGFBOLC$$HCOCAAIGNNL @ RVA 0x30760D8

void POGBKGFBOLC__HCOCAAIGNNL(POGBKGFBOLC_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x30760E0]
// POGBKGFBOLC$$.ctor @ RVA 0x30760E0

void POGBKGFBOLC___ctor(POGBKGFBOLC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_PKKLIJLIKGF__o **ppSVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar2;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MethodInfo *method_00;
  
  if ((DAT_04565fa7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    DAT_04565fa7 = 1;
  }
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  ppSVar1 = &(__this->fields)._OADOOFBKPEE_k__BackingField;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  ppSVar2 = &(__this->fields)._CGEHDAHDMLB_k__BackingField;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_02 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_02 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_02,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      method_00 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
      AHDGNOJPPIB_00 =
           (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)(AHDGNOJPPIB,StringLiteral_5703/*"Enchantments"*/);
      POGBKGFBOLC__KBDGOMHPLBL(__this,AHDGNOJPPIB_00,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x307671C]
// POGBKGFBOLC$$KCHJCGEMCGE @ RVA 0x307671C

System_String_o * POGBKGFBOLC__KCHJCGEMCGE(POGBKGFBOLC_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== private void KBDGOMHPLBL(XmlNode AHDGNOJPPIB)  [RVA 0x3076270]
// POGBKGFBOLC$$KBDGOMHPLBL @ RVA 0x3076270

/* WARNING: Removing unreachable block (ram,0x03176648) */

void POGBKGFBOLC__KBDGOMHPLBL
               (POGBKGFBOLC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PKKLIJLIKGF_o *__this_00;
  PerkInfoItem_o *item;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar7;
  long lVar8;
  PKKLIJLIKGF_array *pPVar9;
  PerkInfoItem_array *pHVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04565fa8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Clear__);
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04565fa8 = 1;
  }
  pSVar6 = (__this->fields)._OADOOFBKPEE_k__BackingField;
  if (pSVar6 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
    iVar1 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar7 = (__this->fields)._CGEHDAHDMLB_k__BackingField;
    if (pSVar7 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      iVar1 = (pSVar7->fields)._size;
      (pSVar7->fields)._size = 0;
      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
        return;
      }
      plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar8 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03176408;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03176408:
          uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar11 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
            if (plVar4 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar11 == 0) goto LAB_031765e0;
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_031765c8;
          }
          lVar8 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_03176468;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03176468:
          AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar2) ||
               ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(AHDGNOJPPIB_00);
            }
          }
          pSVar6 = (__this->fields)._OADOOFBKPEE_k__BackingField;
          __this_00 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
          PKKLIJLIKGF___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
          if (pSVar6 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar9 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pPVar9 == (PKKLIJLIKGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar3 = (pSVar6->fields)._size;
          if (uVar3 < (uint)pPVar9->max_length) {
            (pSVar6->fields)._size = uVar3 + 1;
            pPVar9->m_Items[(int)uVar3] = __this_00;
            thunk_FUN_01c20e04(pPVar9->m_Items + (int)uVar3,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          item = HOOAAGABMBL__PHKPGHEINHB(AHDGNOJPPIB_00,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
          if (item != (PerkInfoItem_o *)0x0) {
            pSVar7 = (__this->fields)._CGEHDAHDMLB_k__BackingField;
            if (pSVar7 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar10 = (pSVar7->fields)._items;
            (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
            if (pHVar10 == (PerkInfoItem_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar3 = (pSVar7->fields)._size;
            if (uVar3 < (uint)pHVar10->max_length) {
              (pSVar7->fields)._size = uVar3 + 1;
              pHVar10->m_Items[(int)uVar3] = item;
              thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
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
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_031765c8:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_031765fc;
    }
  }
LAB_031765e0:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031765fc:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public List<PKKLIJLIKGF> FIAHMKOGKNH()  [RVA 0x3076724]
// POGBKGFBOLC$$FIAHMKOGKNH @ RVA 0x3076724

System_Collections_Generic_List_PKKLIJLIKGF__o *
POGBKGFBOLC__FIAHMKOGKNH(POGBKGFBOLC_o *__this,MethodInfo *method)

{
  return (__this->fields)._OADOOFBKPEE_k__BackingField;
}


// ===== public List<PerkInfoItem> BCNPANONOAL()  [RVA 0x307672C]
// POGBKGFBOLC$$BCNPANONOAL @ RVA 0x307672C

System_Collections_Generic_List_HEFOANCOHDC__o *
POGBKGFBOLC__BCNPANONOAL(POGBKGFBOLC_o *__this,MethodInfo *method)

{
  return (__this->fields)._CGEHDAHDMLB_k__BackingField;
}


// ===== private void JACHIPMOMJE(List<PKKLIJLIKGF> CJNHFNHJHPE)  [RVA 0x3076734]
// POGBKGFBOLC$$JACHIPMOMJE @ RVA 0x3076734

void POGBKGFBOLC__JACHIPMOMJE
               (POGBKGFBOLC_o *__this,System_Collections_Generic_List_PKKLIJLIKGF__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._OADOOFBKPEE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

