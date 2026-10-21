// TypeDefIndex 1865
// Namespace: 
// public class JJBMNHGADNC : BOFEMGGNODC
// Fields:
//   private string DEKCPPOJFEH; // 0x68
//   private readonly List<GEIHBHEDJJM> KDAEMPOJNJJ; // 0x70

// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3249FA4]
// JJBMNHGADNC$$HNIHOIAMDPC @ RVA 0x3249FA4

/* WARNING: Removing unreachable block (ram,0x0334a344) */

void JJBMNHGADNC__HNIHOIAMDPC
               (JJBMNHGADNC_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  GEIHBHEDJJM_o *__this_00;
  long lVar9;
  GEIHBHEDJJM_array *pGVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_GEIHBHEDJJM__o *__this_01;
  
  if ((DAT_045670e8 & 1) == 0) {
    FUN_01bab630(&GEIHBHEDJJM_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEIHBHEDJJM>_Add__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_045670e8 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
    (__this->fields).DEKCPPOJFEH = pSVar5;
    thunk_FUN_01c20e04();
    plVar6 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0334a13c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0334a13c:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_0334a2e0;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0334a2c8;
        }
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0334a19c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0334a19c:
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
          FUN_01babc64();
        }
        __this_01 = (__this->fields).KDAEMPOJNJJ;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar4,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        __this_00 = (GEIHBHEDJJM_o *)thunk_FUN_01bda818(GEIHBHEDJJM_TypeInfo);
        GEIHBHEDJJM___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
        lVar9 = Method_System_Collections_Generic_List<GEIHBHEDJJM>_Add__;
        if (__this_01 == (System_Collections_Generic_List_GEIHBHEDJJM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar10 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pGVar10 == (GEIHBHEDJJM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pGVar10->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pGVar10->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pGVar10->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0334a2c8:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0334a2fc;
    }
  }
LAB_0334a2e0:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0334a2fc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x324A438]
// JJBMNHGADNC$$MAHFCKJGBPP @ RVA 0x324A438

void JJBMNHGADNC__MAHFCKJGBPP(JJBMNHGADNC_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_045670e9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&StringLiteral_15565/*"[QuestActionRunCallback] callback "*/);
    FUN_01bab630(&StringLiteral_495/*" not found in QuestParameters!"*/);
    DAT_045670e9 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).DEKCPPOJFEH;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__HAKLDDOPIAF(MNBMHEAHIIA,pSVar2,(MethodInfo *)0x0);
  if (MNBMHEAHIIA != (PKHMIGFEJCL_o *)0x0) {
    bVar1 = PKHMIGFEJCL__BDIFEJCKEGH
                      (MNBMHEAHIIA,
                       (System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *)
                       (__this->fields).KDAEMPOJNJJ,pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat(StringLiteral_15565/*"[QuestActionRunCallback] callback "*/,pSVar2,StringLiteral_495/*" not found in QuestParameters!"*/,(MethodInfo *)0x0)
      ;
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x324A558]
// JJBMNHGADNC$$OFPHPMGMCAL @ RVA 0x324A558

System_String_o * JJBMNHGADNC__OFPHPMGMCAL(JJBMNHGADNC_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void .ctor()  [RVA 0x324A560]
// JJBMNHGADNC$$.ctor @ RVA 0x324A560

void JJBMNHGADNC___ctor(JJBMNHGADNC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GEIHBHEDJJM__o *__this_00;
  System_Collections_Generic_List_GEIHBHEDJJM__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670ea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GEIHBHEDJJM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GEIHBHEDJJM>_TypeInfo);
    DAT_045670ea = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GEIHBHEDJJM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GEIHBHEDJJM>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GEIHBHEDJJM>__ctor__);
  ppSVar1 = &(__this->fields).KDAEMPOJNJJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

