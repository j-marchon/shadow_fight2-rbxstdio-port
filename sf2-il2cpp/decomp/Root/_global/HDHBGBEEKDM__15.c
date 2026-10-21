// TypeDefIndex 15
// Namespace: 
// public class HDHBGBEEKDM : IIMNGGHGKOD
// Fields:
//   private string NPFMOEOIEKM; // 0x48
//   private string OOAOCLGPGJJ; // 0x50
//   private string GGJCDBAMNOC; // 0x58
//   private List<NJPIKDFEOCN> HEHMAPDMHIG; // 0x60
//   private static int HIMMBMJHKPI; // 0x0

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x2FF2E70]
// HDHBGBEEKDM$$.ctor @ RVA 0x2FF2E70

void HDHBGBEEKDM___ctor(HDHBGBEEKDM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_NJPIKDFEOCN__o *__this_00;
  System_Collections_Generic_List_NJPIKDFEOCN__o **ppSVar1;
  
  if ((DAT_04565a7d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPIKDFEOCN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NJPIKDFEOCN>_TypeInfo);
    DAT_04565a7d = 1;
  }
  __this_00 = (System_Collections_Generic_List_NJPIKDFEOCN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NJPIKDFEOCN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NJPIKDFEOCN>__ctor__);
  ppSVar1 = &(__this->fields).HEHMAPDMHIG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,0,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x030f2f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public string IJIGCLHMKOO()  [RVA 0x2FF2F14]
// HDHBGBEEKDM$$IJIGCLHMKOO @ RVA 0x2FF2F14

System_String_o * HDHBGBEEKDM__IJIGCLHMKOO(HDHBGBEEKDM_o *__this,MethodInfo *method)

{
  return (__this->fields).GGJCDBAMNOC;
}


// ===== public string NINFOAACOAE()  [RVA 0x2FF2F1C]
// HDHBGBEEKDM$$NINFOAACOAE @ RVA 0x2FF2F1C

System_String_o * HDHBGBEEKDM__NINFOAACOAE(HDHBGBEEKDM_o *__this,MethodInfo *method)

{
  return (__this->fields).OOAOCLGPGJJ;
}


// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x2FF2F24]
// HDHBGBEEKDM$$DPGIIHOJJDE @ RVA 0x2FF2F24

void HDHBGBEEKDM__DPGIIHOJJDE(HDHBGBEEKDM_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string LAAEHJDODKI()  [RVA 0x2FF2F44]
// HDHBGBEEKDM$$LAAEHJDODKI @ RVA 0x2FF2F44

System_String_o * HDHBGBEEKDM__LAAEHJDODKI(HDHBGBEEKDM_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== public List<NJPIKDFEOCN> FAABNBIPNPN()  [RVA 0x2FF2F4C]
// HDHBGBEEKDM$$FAABNBIPNPN @ RVA 0x2FF2F4C

System_Collections_Generic_List_NJPIKDFEOCN__o *
HDHBGBEEKDM__FAABNBIPNPN(HDHBGBEEKDM_o *__this,MethodInfo *method)

{
  return (__this->fields).HEHMAPDMHIG;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x2FF2F54]
// HDHBGBEEKDM$$HNIHOIAMDPC @ RVA 0x2FF2F54

/* WARNING: Removing unreachable block (ram,0x030f3410) */

void HDHBGBEEKDM__HNIHOIAMDPC
               (HDHBGBEEKDM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_String_o *FPEEDLKEDFA;
  NJPIKDFEOCN_o *__this_00;
  System_Collections_Generic_List_NJPIKDFEOCN__o *__this_01;
  long lVar8;
  NJPIKDFEOCN_array *pNVar9;
  ulong uVar10;
  int *piVar11;
  int local_64;
  
  if ((DAT_04565a7e & 1) == 0) {
    FUN_01bab630(&HDHBGBEEKDM_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPIKDFEOCN>_Add__);
    FUN_01bab630(&NJPIKDFEOCN_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4722/*"CopyParentType"*/);
    FUN_01bab630(&StringLiteral_12353/*"StartAnimation"*/);
    FUN_01bab630(&StringLiteral_4721/*"CopyParentSubtype"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565a7e = 1;
  }
  local_64 = 0;
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  local_64 = HDHBGBEEKDM_TypeInfo->static_fields->HIMMBMJHKPI + 1;
  HDHBGBEEKDM_TypeInfo->static_fields->HIMMBMJHKPI = local_64;
  pSVar3 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
  (__this->fields).GGJCDBAMNOC = pSVar3;
  thunk_FUN_01c20e04();
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields).NPFMOEOIEKM = pSVar3;
    thunk_FUN_01c20e04();
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_12353/*"StartAnimation"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar5,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).OOAOCLGPGJJ = pSVar3;
      thunk_FUN_01c20e04();
      plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar8 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_030f31b0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_030f31b0:
          uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar10 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
            if (plVar6 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 == 0) goto LAB_030f33a0;
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_030f3388;
          }
          lVar8 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_030f3210;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_030f3210:
          AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB_00,
                              (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_4722/*"CopyParentType"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB_00,
                              (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_4721/*"CopyParentSubtype"*/,(MethodInfo *)0x0);
          FPEEDLKEDFA = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          __this_00 = (NJPIKDFEOCN_o *)thunk_FUN_01bda818(NJPIKDFEOCN_TypeInfo);
          NJPIKDFEOCN___ctor(__this_00,AHDGNOJPPIB_00,pSVar3,FPEEDLKEDFA,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<NJPIKDFEOCN>_Add__;
          __this_01 = (__this->fields).HEHMAPDMHIG;
          if (__this_01 == (System_Collections_Generic_List_NJPIKDFEOCN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pNVar9 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pNVar9 == (NJPIKDFEOCN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pNVar9->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pNVar9->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
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
LAB_030f3388:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_030f33bc;
    }
  }
LAB_030f33a0:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_030f33bc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

