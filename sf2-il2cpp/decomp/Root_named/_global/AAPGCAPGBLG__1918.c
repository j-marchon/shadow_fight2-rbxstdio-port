// TypeDefIndex 1918
// Namespace: 
// public class AAPGCAPGBLG
// Fields:
//   private static AAPGCAPGBLG KNOHKIKFEBL; // 0x0
//   private readonly List<CCLKPGBIBOP> AOCCHDFNLMC; // 0x10
//   private XmlDocument JLBELGKGBBI; // 0x18
//   private bool <KDBLLEPMIPL>k__BackingField; // 0x20

// ===== public bool NMOGLADIPFB()  [RVA 0x325D444]
// AAPGCAPGBLG$$NMOGLADIPFB @ RVA 0x325D444

bool AAPGCAPGBLG__NMOGLADIPFB(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  return (__this->fields)._KDBLLEPMIPL_k__BackingField;
}


// ===== public IReadOnlyList<CCLKPGBIBOP> EOKMDENKPDP()  [RVA 0x325D44C]
// AAPGCAPGBLG$$EOKMDENKPDP @ RVA 0x325D44C

System_Collections_Generic_IReadOnlyList_CCLKPGBIBOP__o *
AAPGCAPGBLG__EOKMDENKPDP(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_CCLKPGBIBOP__o *)(__this->fields).AOCCHDFNLMC;
}


// ===== private void APMNHOBHBDM(HashSet<string> LBFMLHOIELK)  [RVA 0x325D454]
// AAPGCAPGBLG$$APMNHOBHBDM @ RVA 0x325D454

void AAPGCAPGBLG__APMNHOBHBDM
               (AAPGCAPGBLG_o *__this,System_Collections_Generic_HashSet_string__o *LBFMLHOIELK,
               MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  System_Action_T__o *action;
  long lVar2;
  KAKGABBLHGP_o *__this_01;
  undefined8 *puVar3;
  MethodInfo *method_00;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_02;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  void **ppvVar7;
  
  if ((DAT_04567199 & 1) == 0) {
    FUN_01bab630(&System_Action<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_573);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_574);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
    FUN_01bab630(&Method_AAPGCAPGBLG_MLNELIONAIB_MBKNFNONDOG__);
    FUN_01bab630(&AAPGCAPGBLG_MLNELIONAIB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567199 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_MLNELIONAIB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar7 = &__this_00[1].monitor;
    *ppvVar7 = LBFMLHOIELK;
    thunk_FUN_01c20e04(ppvVar7,LBFMLHOIELK);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_573,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_574,(MethodInfo *)0x0);
    message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    if (*ppvVar7 != (void *)0x0) {
      if (*(int *)((long)*ppvVar7 + 0x20) != 0) {
        __this_02 = (__this->fields).AOCCHDFNLMC;
        action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CCLKPGBIBOP>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_02 == (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) goto LAB_0335d804;
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_02,action,
                   Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
        AAPGCAPGBLG__JPHDMGDNDHH(__this,method_00);
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
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
            (Roster_o *)0x0) {
          lVar2 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar1 = Method_System_Array_Empty<PackType>__;
          plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
          if (plVar6 != (long *)0x0) {
            lVar2 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
            if (lVar2 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<PackType>__);
              lVar2 = *(long *)(lVar1 + 0x38);
            }
            lVar2 = *(long *)(lVar2 + 0x10);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar2 + 0xb8);
            __this_01 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
            KAKGABBLHGP___ctor(__this_01,true,LFADLKGPBHC,(MethodInfo *)0x0);
            lVar2 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(JNDFOKIMHPB_c **)(piVar5 + -2) == JNDFOKIMHPB_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_0335d7dc;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined8 *)FUN_01b81914(plVar6,JNDFOKIMHPB_TypeInfo,0);
LAB_0335d7dc:
                    /* WARNING: Could not recover jumptable at 0x0335d800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(plVar6,__this_01,0,puVar3[1]);
            return;
          }
        }
      }
      return;
    }
  }
LAB_0335d804:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x325DC4C]
// AAPGCAPGBLG$$DGLJCGNHLIG @ RVA 0x325DC4C

void AAPGCAPGBLG__DGLJCGNHLIG(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_CCLKPGBIBOP__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456719a & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Clear__);
    DAT_0456719a = 1;
  }
  pSVar1 = (__this->fields).AOCCHDFNLMC;
  if (pSVar1 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    (__this->fields)._KDBLLEPMIPL_k__BackingField = false;
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CLFCKIFNGHA__DGLJCGNHLIG((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private CCLKPGBIBOP EKLJCBLAGBO(XmlNode AHDGNOJPPIB)  [RVA 0x325DCE0]
// AAPGCAPGBLG$$EKLJCBLAGBO @ RVA 0x325DCE0

CCLKPGBIBOP_o *
AAPGCAPGBLG__EKLJCBLAGBO(AAPGCAPGBLG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  CCLKPGBIBOP_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  
  if ((DAT_0456719b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_575);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_576);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_577);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_578);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_579);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_580);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_581);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_582);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_583);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_584);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_585);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_586);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_587);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_588);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_589);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_590);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CCLKPGBIBOP_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456719b = 1;
  }
  __this_00 = (CCLKPGBIBOP_o *)thunk_FUN_01bda818(CCLKPGBIBOP_TypeInfo);
  CCLKPGBIBOP___ctor(__this_00,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_575,(MethodInfo *)0x0);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_576,(MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,pSVar6,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (__this_00 != (CCLKPGBIBOP_o *)0x0) {
        (__this_00->fields)._COIPKAKHDFP_k__BackingField = pSVar6;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_577,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_578,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,pSVar6,(MethodInfo *)0x0);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
          (__this_00->fields)._HOHLBKMCIDD_k__BackingField = pSVar6;
          thunk_FUN_01c20e04();
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_579,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_580,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,pSVar6,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_00->fields)._LLHBHHNOFBC_k__BackingField = pSVar6;
            thunk_FUN_01c20e04();
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_581,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_582,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,pSVar6,(MethodInfo *)0x0);
              pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
              (__this_00->fields)._DIKELNECAJD_k__BackingField = pSVar6;
              thunk_FUN_01c20e04();
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_583,
                         (MethodInfo *)0x0);
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_584,
                         (MethodInfo *)0x0);
              pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,pSVar6,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
                (__this_00->fields)._CELECOKJPDJ_k__BackingField = bVar1;
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_585,
                           (MethodInfo *)0x0);
                pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar5,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_586,
                           (MethodInfo *)0x0);
                pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,pSVar6,(MethodInfo *)0x0);
                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
                  (__this_00->fields)._BNIHGHLPOHB_k__BackingField = bVar1;
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_587,
                             (MethodInfo *)0x0);
                  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar5,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_588,
                             (MethodInfo *)0x0);
                  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,pSVar6,(MethodInfo *)0x0);
                    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    (__this_00->fields)._JKGLJFGKPNN_k__BackingField = pSVar6;
                    thunk_FUN_01c20e04();
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar4,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_589,
                               (MethodInfo *)0x0);
                    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar5,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_590,
                               (MethodInfo *)0x0);
                    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,pSVar6,(MethodInfo *)0x0);
                      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
                      (__this_00->fields)._NHDNPAAJKBN_k__BackingField = iVar2;
                      return __this_00;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KPOPGHNAGAE(CCLKPGBIBOP NPOAPJKIIOF)  [RVA 0x325E340]
// AAPGCAPGBLG$$KPOPGHNAGAE @ RVA 0x325E340

void AAPGCAPGBLG__KPOPGHNAGAE(AAPGCAPGBLG_o *__this,CCLKPGBIBOP_o *NPOAPJKIIOF,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456719c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_591);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_592);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    __this = (AAPGCAPGBLG_o *)FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_0456719c = 1;
  }
  if (NPOAPJKIIOF != (CCLKPGBIBOP_o *)0x0) {
    if ((NPOAPJKIIOF->fields)._BNIHGHLPOHB_k__BackingField == false) {
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = SF2Paths__JKLFLNNFEMP((MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_591,(MethodInfo *)0x0
                );
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_592,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat
                         (pSVar2,pSVar3,(NPOAPJKIIOF->fields)._COIPKAKHDFP_k__BackingField,
                          (MethodInfo *)0x0);
      bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = (NPOAPJKIIOF->fields)._COIPKAKHDFP_k__BackingField;
      pSVar3 = (NPOAPJKIIOF->fields)._JKGLJFGKPNN_k__BackingField;
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = CLFCKIFNGHA__KPOPGHNAGAE(pSVar2,pSVar3,(MethodInfo *)0x0);
    }
    (NPOAPJKIIOF->fields)._PCFJKILMDCE_k__BackingField = bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void FNFKIIMBFJO()  [RVA 0x325E544]
// AAPGCAPGBLG$$FNFKIIMBFJO @ RVA 0x325E544

void AAPGCAPGBLG__FNFKIIMBFJO(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_CCLKPGBIBOP__o *collection;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456719d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CCLKPGBIBOP>_TypeInfo);
    DAT_0456719d = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  collection = (__this->fields).AOCCHDFNLMC;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CCLKPGBIBOP>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
             Method_System_Collections_Generic_List<CCLKPGBIBOP>__ctor__);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this_00,
               Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      AAPGCAPGBLG__JIIBNJFDICI
                (__this,(System_String_o *)local_48.fields._current[1].klass,true,in_x3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BAFDBLCFCPO(string KGLJICLJHEL)  [RVA 0x325F010]
// AAPGCAPGBLG$$BAFDBLCFCPO @ RVA 0x325F010

bool AAPGCAPGBLG__BAFDBLCFCPO(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = AAPGCAPGBLG__CNBENAHGBAL(__this,KGLJICLJHEL,method);
  if (bVar1) {
    bVar1 = AAPGCAPGBLG__LAAKLBPOMGP(__this,KGLJICLJHEL,method);
    return bVar1;
  }
  return true;
}


// ===== public static string OKJPFHIIJAD()  [RVA 0x325F328]
// AAPGCAPGBLG$$OKJPFHIIJAD @ RVA 0x325F328

System_String_o * AAPGCAPGBLG__OKJPFHIIJAD(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456719e & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456719e = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
    pSVar2 = NEHNBJKKABI__EPMKDIAJEOI(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return StringLiteral_1/*""*/;
}


// ===== private bool IOBPPPEABHG(CCLKPGBIBOP NPOAPJKIIOF)  [RVA 0x325F3C8]
// AAPGCAPGBLG$$IOBPPPEABHG @ RVA 0x325F3C8

bool AAPGCAPGBLG__IOBPPPEABHG(AAPGCAPGBLG_o *__this,CCLKPGBIBOP_o *NPOAPJKIIOF,MethodInfo *method)

{
  bool bVar1;
  
  if (NPOAPJKIIOF != (CCLKPGBIBOP_o *)0x0) {
    bVar1 = AAPGCAPGBLG__CNBENAHGBAL
                      (__this,(NPOAPJKIIOF->fields)._COIPKAKHDFP_k__BackingField,method);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FGKGMPHGOGN(bool CJNHFNHJHPE)  [RVA 0x325F3EC]
// AAPGCAPGBLG$$FGKGMPHGOGN @ RVA 0x325F3EC

void AAPGCAPGBLG__FGKGMPHGOGN(AAPGCAPGBLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KDBLLEPMIPL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void OPHDBLMDKJD(string KGLJICLJHEL, string CJFAPGEEPLM, string CEHOJOFLMFF, long DCHHCDJGPCJ, bool OCFNMPJFDGA, string IJCFIDBCOIN, int MABGFLNNGKH = 0)  [RVA 0x325F3F8]
// AAPGCAPGBLG$$OPHDBLMDKJD @ RVA 0x325F3F8

/* WARNING: Type propagation algorithm not settling */

void AAPGCAPGBLG__OPHDBLMDKJD
               (AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJFAPGEEPLM,
               System_String_o *CEHOJOFLMFF,int64_t DCHHCDJGPCJ,bool OCFNMPJFDGA,
               System_String_o *IJCFIDBCOIN,int32_t MABGFLNNGKH,MethodInfo *method)

{
  System_RuntimeFieldHandle_Fields *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  uint uVar3;
  long lVar4;
  CCLKPGBIBOP_o *pCVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  System_String_o *pSVar9;
  AAPGCAPGBLG_o *__this_00;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  AAPGCAPGBLG_o *__this_02;
  AAPGCAPGBLG_o *extraout_x0;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  CCLKPGBIBOP_array *pCVar12;
  System_Xml_XmlDocument_o *pSVar13;
  int32_t local_6c;
  int64_t local_68;
  
  pMVar11 = (MethodInfo *)CJFAPGEEPLM;
  pMVar10 = (MethodInfo *)CEHOJOFLMFF;
  local_6c = MABGFLNNGKH;
  local_68 = DCHHCDJGPCJ;
  if ((DAT_0456719f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_593);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_594);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_595);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_596);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_597);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_598);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_599);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_600);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_601);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_602);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_603);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_604);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_605);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_606);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_607);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_608);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_609);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_610);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_611);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_612);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_613);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_614);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_615);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_616);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Add__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_0456719f = 1;
  }
  if ((__this->fields).JLBELGKGBBI == (System_Xml_XmlDocument_o *)0x0) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_593,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_594,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    return;
  }
  pCVar5 = AAPGCAPGBLG__DNBPEJFJHEP(__this,KGLJICLJHEL,pMVar11);
  if (pCVar5 != (CCLKPGBIBOP_o *)0x0) {
    AAPGCAPGBLG__JIIBNJFDICI(__this,KGLJICLJHEL,false,pMVar10);
  }
  pSVar13 = (__this->fields).JLBELGKGBBI;
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_595,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_596,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  if (pSVar13 != (System_Xml_XmlDocument_o *)0x0) {
    JHMENEKPIBO = (System_Xml_XmlNode_o *)
                  (*(pSVar13->klass->vtable)._51_get_Item.methodPtr)
                            (pSVar13,pSVar8,(pSVar13->klass->vtable)._51_get_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_597,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_598,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,pSVar8,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_599,(MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_600,(MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    if (AHDGNOJPPIB != (System_Xml_XmlElement_o *)0x0) {
      (*(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.methodPtr)
                (AHDGNOJPPIB,pSVar8,KGLJICLJHEL,(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.method
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_601,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_602,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      (*(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.methodPtr)
                (AHDGNOJPPIB,pSVar8,CJFAPGEEPLM,(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.method
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_603,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_604,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      (*(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.methodPtr)
                (AHDGNOJPPIB,pSVar8,CEHOJOFLMFF,(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.method
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_605,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_606,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar1 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_609;
      if (!OCFNMPJFDGA) {
        pSVar1 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_607;
      }
      pSVar2 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_610;
      if (!OCFNMPJFDGA) {
        pSVar2 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_608;
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar1->value,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar2->value,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      (*(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.methodPtr)
                (AHDGNOJPPIB,pSVar8,pSVar9,(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.method);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_611,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_612,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      (*(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.methodPtr)
                (AHDGNOJPPIB,pSVar8,IJCFIDBCOIN,(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.method
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_613,(MethodInfo *)0x0
                );
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_614,(MethodInfo *)0x0
                );
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar9 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
      pMVar11 = (AHDGNOJPPIB->klass->vtable)._66_SetAttribute.method;
      (*(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.methodPtr)(AHDGNOJPPIB,pSVar8,pSVar9);
      if (-1 < DCHHCDJGPCJ) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_615,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_616,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = System_Int64__ToString((int64_t)&local_68,(MethodInfo *)0x0);
        pMVar11 = (AHDGNOJPPIB->klass->vtable)._66_SetAttribute.method;
        (*(AHDGNOJPPIB->klass->vtable)._66_SetAttribute.methodPtr)(AHDGNOJPPIB,pSVar8,pSVar9);
      }
      pSVar13 = (__this->fields).JLBELGKGBBI;
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
      pMVar10 = (MethodInfo *)0x0;
      GIAMPEGMNHE__DGLLHFNFGNO(pSVar13,pSVar8,(MethodInfo *)0x0);
      pCVar5 = AAPGCAPGBLG__EKLJCBLAGBO(__this_00,(System_Xml_XmlNode_o *)AHDGNOJPPIB,pMVar10);
      lVar4 = Method_System_Collections_Generic_List<CCLKPGBIBOP>_Add__;
      if (pCVar5 == (CCLKPGBIBOP_o *)0x0) {
        return;
      }
      __this_01 = (__this->fields).AOCCHDFNLMC;
      if (__this_01 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
        pCVar12 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pCVar12 != (CCLKPGBIBOP_array *)0x0) {
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pCVar12->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            pCVar12->m_Items[(int)uVar3] = pCVar5;
            __this_02 = (AAPGCAPGBLG_o *)thunk_FUN_01c20e04(pCVar12->m_Items + (int)uVar3,pCVar5);
          }
          else {
            pMVar10 = *(MethodInfo **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pCVar5
                       ,(MethodInfo_26E4DAC *)pMVar10);
            __this_02 = extraout_x0;
          }
          AAPGCAPGBLG__KPOPGHNAGAE(__this_02,pCVar5,pMVar10);
          if ((pCVar5->fields)._PCFJKILMDCE_k__BackingField != false) {
            return;
          }
          AAPGCAPGBLG__JIIBNJFDICI
                    (__this,(pCVar5->fields)._COIPKAKHDFP_k__BackingField,true,pMVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0335fc34 to 0345fcf3 has its CatchHandler @ 0335fc34
                       catch() { ... } // from try @ 0335fc34 with catch @ 0335fc34
                       catch() { ... } // from try @ 0335fd1c with catch @ 0335fc34
                       catch() { ... } // from try @ 0335fd84 with catch @ 0335fc34
                       catch() { ... } // from try @ 0335fdac with catch @ 0335fc34
                       catch() { ... } // from try @ 0335fdec with catch @ 0335fc34 */
  FUN_01bab8c8();
}


// ===== public static void KEKJKEKNLHL()  [RVA 0x325FC50]
// AAPGCAPGBLG$$KEKJKEKNLHL @ RVA 0x325FC50

void AAPGCAPGBLG__KEKJKEKNLHL(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_045671a0 & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_045671a0 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
    NEHNBJKKABI__MGLIGNDGBCN(pSVar2,(MethodInfo *)0x0);
    pSVar2 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
    if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0335fcf4 to 0345fcfb has its CatchHandler @ 0335fd8c */
      thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
    }
    CFJANHACGMG__LNGABBPIBAL(pSVar2,(MethodInfo *)0x0);
  }
                    /* try { // try from 0335fd08 to 0345fd1b has its CatchHandler @ 0335fd90 */
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0335fd1c to 0345fd7f has its CatchHandler @ 0335fc34 */
  SF2Paths__OAFGPIANJPJ((MethodInfo *)0x0);
  return;
}


// ===== public bool MCFHOHANNDH()  [RVA 0x325FD24]
// AAPGCAPGBLG$$MCFHOHANNDH @ RVA 0x325FD24

bool AAPGCAPGBLG__MCFHOHANNDH(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_array *values;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  GCPFDLNAFDF_c *pGVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045671a1 & 1) == 0) {
    FUN_01bab630(&Method_AAPGCAPGBLG_IOBPPPEABHG__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_617);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_618);
                    /* try { // try from 0335fd80 to 0345fd83 has its CatchHandler @ 0335fd88 */
                    /* try { // try from 0335fd84 to 0345fda7 has its CatchHandler @ 0335fc34 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_619);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335fd80 with catch @ 0335fd88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335fcf4 with catch @ 0335fd8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335fd08 with catch @ 0335fd90
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_620);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_621);
                    /* try { // try from 0335fda8 to 0345fdab has its CatchHandler @ 0335fdd4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_622);
                    /* try { // try from 0335fdac to 0345fde3 has its CatchHandler @ 0335fc34 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_623);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_624);
    FUN_01bab630(&byte___TypeInfo);
                    /* catch() { ... } // from try @ 0335fda8 with catch @ 0335fdd4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__);
                    /* try { // try from 0335fde4 to 0345fdeb has its CatchHandler @ 0335fe00 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
                    /* try { // try from 0335fdec to 0345fdf7 has its CatchHandler @ 0335fc34 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_get_Current__);
                    /* try { // try from 0335fdf8 to 0345fdff has its CatchHandler @ 0335fe00 */
    FUN_01bab630(&GCPFDLNAFDF_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0335fde4 with catch @ 0335fe00
                       catch(type#2 @ 00000000) { ... } // from try @ 0335fdf8 with catch @ 0335fe00
                        */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_get_Count__);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_045671a1 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
    pGVar9 = pGVar4->klass;
    uVar1._0_1_ = (pGVar9->_2).rank;
    uVar1._1_1_ = (pGVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pGVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)GCPFDLNAFDF_TypeInfo) {
          pVVar5 = pGVar9->vtable + (*piVar11 + 1);
          goto LAB_0335fed0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,GCPFDLNAFDF_TypeInfo,1);
LAB_0335fed0:
    uVar10 = (*pVVar5->methodPtr)(pGVar4,pVVar5->method);
    if ((uVar10 & 1) == 0) {
      bVar3 = false;
    }
    else {
      __this_01 = (__this->fields).AOCCHDFNLMC;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      System_Predicate<object>___ctor();
      if ((__this_01 == (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) ||
         (__this_00 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_List<object>__FindAll
                                ((System_Collections_Generic_List_object__o *)__this_01,match,
                                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_FindAll__),
         __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0336025c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,
                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__
                               ), pIVar2 = local_80.fields._current, bVar3) {
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_617,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_618,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[0] = pSVar8;
        thunk_FUN_01c20e04();
        if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[1] = (System_String_o *)pIVar2[1].klass;
        thunk_FUN_01c20e04();
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_619,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_620,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[2] = pSVar8;
        thunk_FUN_01c20e04();
        if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[3] = (System_String_o *)pIVar2[3].klass;
        thunk_FUN_01c20e04();
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_621,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_622,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[4] = pSVar8;
        thunk_FUN_01c20e04();
        if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[5] = (System_String_o *)pIVar2[4].klass;
        thunk_FUN_01c20e04();
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_623,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_624,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        if ((uint)values->max_length < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[6] = pSVar8;
        thunk_FUN_01c20e04();
        pSVar8 = System_String__Concat(values,(MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar8,(MethodInfo *)0x0);
        AAPGCAPGBLG__JIIBNJFDICI(__this,(System_String_o *)pIVar2[1].klass,true,method_00);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__)
      ;
      bVar3 = 0 < (__this_00->fields)._size;
    }
    return bVar3;
  }
LAB_0336025c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private CCLKPGBIBOP DNBPEJFJHEP(string KGLJICLJHEL)  [RVA 0x326035C]
// AAPGCAPGBLG$$DNBPEJFJHEP @ RVA 0x326035C

CCLKPGBIBOP_o *
AAPGCAPGBLG__DNBPEJFJHEP(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  CCLKPGBIBOP_o *pCVar1;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  
  if ((DAT_045671a2 & 1) == 0) {
    FUN_01bab630(&Method_AAPGCAPGBLG_FLPEMFEKLLA_DBBIGOBKPOM__);
    FUN_01bab630(&AAPGCAPGBLG_FLPEMFEKLLA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    DAT_045671a2 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_FLPEMFEKLLA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    __this_01 = (__this->fields).AOCCHDFNLMC;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
      pCVar1 = (CCLKPGBIBOP_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
      return pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3260448]
// AAPGCAPGBLG$$.ctor @ RVA 0x3260448

void AAPGCAPGBLG___ctor(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045671a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CCLKPGBIBOP>_TypeInfo);
    DAT_045671a3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_CCLKPGBIBOP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CCLKPGBIBOP>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<CCLKPGBIBOP>__ctor__);
  (__this->fields).AOCCHDFNLMC = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool CNBENAHGBAL(string KGLJICLJHEL)  [RVA 0x325F04C]
// AAPGCAPGBLG$$CNBENAHGBAL @ RVA 0x325F04C

bool AAPGCAPGBLG__CNBENAHGBAL(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  ushort uVar1;
  GCPFDLNAFDF_o *pGVar2;
  VirtualInvokeData *pVVar3;
  DADDKDFBPIJ_T__o *__this_00;
  Il2CppObject *pIVar4;
  GCPFDLNAFDF_c *pGVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045671a4 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_045671a4 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar2 != (GCPFDLNAFDF_o *)0x0) {
    pGVar5 = pGVar2->klass;
    uVar1._0_1_ = (pGVar5->_2).rank;
    uVar1._1_1_ = (pGVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pGVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
          pVVar3 = pGVar5->vtable + *piVar7;
          goto LAB_0335f10c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar2,HHMDFAMGHPB_TypeInfo,0);
LAB_0335f10c:
    __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar3->methodPtr)(pGVar2,pVVar3->method);
    if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
      pIVar4 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,KGLJICLJHEL,Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      return pIVar4 != (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static AAPGCAPGBLG AIHNLLGNBLC()  [RVA 0x32604D0]
// AAPGCAPGBLG$$AIHNLLGNBLC @ RVA 0x32604D0

AAPGCAPGBLG_o * AAPGCAPGBLG__AIHNLLGNBLC(MethodInfo *method)

{
  AAPGCAPGBLG_o *pAVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_045671a5 & 1) == 0) {
    FUN_01bab630(&AAPGCAPGBLG_TypeInfo);
    DAT_045671a5 = 1;
  }
  pAVar1 = AAPGCAPGBLG_TypeInfo->static_fields->KNOHKIKFEBL;
  if (pAVar1 == (AAPGCAPGBLG_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pAVar1 = auVar2._0_8_;
    AAPGCAPGBLG___ctor(pAVar1,auVar2._8_8_);
    AAPGCAPGBLG_TypeInfo->static_fields->KNOHKIKFEBL = pAVar1;
    thunk_FUN_01c20e04(AAPGCAPGBLG_TypeInfo->static_fields,pAVar1);
    pAVar1 = AAPGCAPGBLG_TypeInfo->static_fields->KNOHKIKFEBL;
  }
  return pAVar1;
}


// ===== private void EEKPOHKAFCO(CCLKPGBIBOP KEFILECBPMF)  [RVA 0x3260554]
// AAPGCAPGBLG$$EEKPOHKAFCO @ RVA 0x3260554

void AAPGCAPGBLG__EEKPOHKAFCO(AAPGCAPGBLG_o *__this,CCLKPGBIBOP_o *KEFILECBPMF,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456719c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_591);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_592);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    __this = (AAPGCAPGBLG_o *)FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_0456719c = 1;
  }
  if (KEFILECBPMF != (CCLKPGBIBOP_o *)0x0) {
    if ((KEFILECBPMF->fields)._BNIHGHLPOHB_k__BackingField == false) {
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = SF2Paths__JKLFLNNFEMP((MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_591,(MethodInfo *)0x0
                );
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_592,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat
                         (pSVar2,pSVar3,(KEFILECBPMF->fields)._COIPKAKHDFP_k__BackingField,
                          (MethodInfo *)0x0);
      bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = (KEFILECBPMF->fields)._COIPKAKHDFP_k__BackingField;
      pSVar3 = (KEFILECBPMF->fields)._JKGLJFGKPNN_k__BackingField;
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = CLFCKIFNGHA__KPOPGHNAGAE(pSVar2,pSVar3,(MethodInfo *)0x0);
    }
    (KEFILECBPMF->fields)._PCFJKILMDCE_k__BackingField = bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void JPHDMGDNDHH()  [RVA 0x325D810]
// AAPGCAPGBLG$$JPHDMGDNDHH @ RVA 0x325D810

void AAPGCAPGBLG__JPHDMGDNDHH(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Predicate_CCLKPGBIBOP__o **ppSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *format;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  System_Predicate_CCLKPGBIBOP__o *match;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045671a6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_1);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_625);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Method_AAPGCAPGBLG_<>c_HCDOMBEIBBD__);
    FUN_01bab630(&AAPGCAPGBLG_<>c_TypeInfo);
    DAT_045671a6 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).AOCCHDFNLMC;
  if ((AAPGCAPGBLG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AAPGCAPGBLG_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = AAPGCAPGBLG_<>c_TypeInfo->static_fields->__9__16_0;
  if (match == (System_Predicate_CCLKPGBIBOP__o *)0x0) {
    if ((AAPGCAPGBLG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AAPGCAPGBLG_<>c_TypeInfo,method);
    }
    match = (System_Predicate_CCLKPGBIBOP__o *)
            thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
    in_x3 = (MethodInfo *)0x0;
    System_Predicate<object>___ctor();
    ppSVar3 = &AAPGCAPGBLG_<>c_TypeInfo->static_fields->__9__16_0;
    *ppSVar3 = match;
    thunk_FUN_01c20e04(ppSVar3,match);
  }
  if ((__this_01 == (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List<object>__FindAll
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (System_Predicate_T__o *)match,
                             Method_System_Collections_Generic_List<CCLKPGBIBOP>_FindAll__),
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,__this_00,Method_System_Collections_Generic_List<CCLKPGBIBOP>_GetEnumerator__
            );
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_MoveNext__);
    pIVar1 = local_80.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<CCLKPGBIBOP>_Dispose__)
      ;
      return;
    }
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_625,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_1,(MethodInfo *)0x0);
    format = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar6 = pIVar1[1].klass;
    if ((pIVar6 != (Il2CppClass *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pIVar6;
    thunk_FUN_01c20e04(args->m_Items,pIVar6);
    pIVar6 = pIVar1[3].klass;
    if ((pIVar6 != (Il2CppClass *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[1] = (Il2CppObject *)pIVar6;
    thunk_FUN_01c20e04(args->m_Items + 1,pIVar6);
    pIVar6 = pIVar1[4].klass;
    if ((pIVar6 != (Il2CppClass *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0))
    break;
    if ((uint)args->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[2] = (Il2CppObject *)pIVar6;
    thunk_FUN_01c20e04(args->m_Items + 2,pIVar6);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogFormat(format,args,(MethodInfo *)0x0);
    AAPGCAPGBLG__JIIBNJFDICI(__this,(System_String_o *)pIVar1[1].klass,true,in_x3);
  }
  uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(uVar5,0);
}


// ===== public bool JPLEKDCHPDL(string KGLJICLJHEL)  [RVA 0x325FC38]
// AAPGCAPGBLG$$JPLEKDCHPDL @ RVA 0x325FC38

bool AAPGCAPGBLG__JPLEKDCHPDL(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  CCLKPGBIBOP_o *pCVar1;
  
  pCVar1 = AAPGCAPGBLG__DNBPEJFJHEP(__this,KGLJICLJHEL,method);
  return pCVar1 != (CCLKPGBIBOP_o *)0x0;
}


// ===== public void CKDJOILBJPC()  [RVA 0x3260558]
// AAPGCAPGBLG$$CKDJOILBJPC @ RVA 0x3260558

void AAPGCAPGBLG__CKDJOILBJPC(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  Il2CppClass *pIVar2;
  System_Action_T__o *action;
  System_Action_HashSet_string___o *NOOAHEHCMEL;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_00;
  
  if ((DAT_045671a7 & 1) == 0) {
    FUN_01bab630(&Method_AAPGCAPGBLG_APMNHOBHBDM__);
    FUN_01bab630(&System_Action<HashSet<string>>_TypeInfo);
    FUN_01bab630(&System_Action<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_626);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_627);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_AAPGCAPGBLG_MHBKKIEKLLE_OONMMIIICEP__);
    FUN_01bab630(&AAPGCAPGBLG_MHBKKIEKLLE_TypeInfo);
    DAT_045671a7 = 1;
    method = extraout_x1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_MHBKKIEKLLE_TypeInfo,method);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_626,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_627,(MethodInfo *)0x0);
  message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  pIVar2 = (Il2CppClass *)thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pIVar2,
             Method_System_Collections_Generic_List<string>__ctor__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = pIVar2;
    thunk_FUN_01c20e04(pIVar1,pIVar2);
    __this_00 = (__this->fields).AOCCHDFNLMC;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CCLKPGBIBOP>_TypeInfo);
                    /* try { // try from 0336072c to 03460b57 has its CatchHandler @ 0336072c
                       catch() { ... } // from try @ 0336072c with catch @ 0336072c
                       catch() { ... } // from try @ 03361714 with catch @ 0336072c
                       catch() { ... } // from try @ 033617c8 with catch @ 0336072c
                       catch() { ... } // from try @ 033617d0 with catch @ 0336072c
                       catch() { ... } // from try @ 033619b4 with catch @ 0336072c */
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,action,
                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
      pIVar2 = pIVar1->klass;
      NOOAHEHCMEL = (System_Action_HashSet_string___o *)
                    thunk_FUN_01bda818(System_Action<HashSet<string>>_TypeInfo);
      System_Action<object>___ctor();
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CLFCKIFNGHA__CIEHCLDCJOB
                ((System_Collections_Generic_List_string__o *)pIVar2,NOOAHEHCMEL,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKFEMOENIBH(CCLKPGBIBOP NPOAPJKIIOF, HashSet<string> LJEGELEEPCP)  [RVA 0x32607C8]
// AAPGCAPGBLG$$GKFEMOENIBH @ RVA 0x32607C8

void AAPGCAPGBLG__GKFEMOENIBH
               (AAPGCAPGBLG_o *__this,CCLKPGBIBOP_o *NPOAPJKIIOF,
               System_Collections_Generic_HashSet_string__o *LJEGELEEPCP,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045671a8 & 1) == 0) {
    __this = (AAPGCAPGBLG_o *)
             FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_045671a8 = 1;
  }
  if (NPOAPJKIIOF != (CCLKPGBIBOP_o *)0x0) {
    if ((NPOAPJKIIOF->fields)._BNIHGHLPOHB_k__BackingField != false) {
      if (LJEGELEEPCP == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(__this);
      }
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        ((System_Collections_Generic_HashSet_object__o *)LJEGELEEPCP,
                         (Il2CppObject *)(NPOAPJKIIOF->fields)._COIPKAKHDFP_k__BackingField,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      (NPOAPJKIIOF->fields)._PCFJKILMDCE_k__BackingField = (bool_conflict)(~bVar1 & 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public bool LAAKLBPOMGP(string KGLJICLJHEL)  [RVA 0x325F148]
// AAPGCAPGBLG$$LAAKLBPOMGP @ RVA 0x325F148

bool AAPGCAPGBLG__LAAKLBPOMGP(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  DADDKDFBPIJ_T__o *__this_00;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar6;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  
  if ((DAT_045671a9 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&Method_AAPGCAPGBLG_EBDLEIJAPLB_FCKEKAMINPH__);
    FUN_01bab630(&AAPGCAPGBLG_EBDLEIJAPLB_TypeInfo);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    DAT_045671a9 = 1;
  }
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_EBDLEIJAPLB_TypeInfo);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar3 + 1,KGLJICLJHEL);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
      pGVar7 = pGVar4->klass;
      uVar1._0_1_ = (pGVar7->_2).rank;
      uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
            pVVar5 = pGVar7->vtable + *piVar9;
            goto LAB_0335f270;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HHMDFAMGHPB_TypeInfo,0);
LAB_0335f270:
      __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar5->methodPtr)(pGVar4,pVVar5->method);
      if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
        pIVar3 = DADDKDFBPIJ<object>__COMOKILJDGJ
                           (__this_00,(System_String_o *)pIVar3[1].klass,
                            Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
        __this_01 = (__this->fields).AOCCHDFNLMC;
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_01 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
          pIVar6 = System_Collections_Generic_List<object>__Find
                             ((System_Collections_Generic_List_object__o *)__this_01,match,
                              Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
          bVar2 = false;
          if (pIVar6 != (Il2CppObject *)0x0) {
            if (pIVar3 != (Il2CppObject *)0x0) {
              bVar2 = System_String__op_Equality
                                (pIVar3[1].monitor,pIVar6[1].monitor,(MethodInfo *)0x0);
              return bVar2;
            }
            bVar2 = true;
          }
          return bVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OBNDAKKCCKB()  [RVA 0x32608E8]
// AAPGCAPGBLG$$OBNDAKKCCKB @ RVA 0x32608E8

/* WARNING: Removing unreachable block (ram,0x03360d70) */
/* WARNING: Removing unreachable block (ram,0x03360df0) */
/* WARNING: Removing unreachable block (ram,0x03360e18) */

void AAPGCAPGBLG__OBNDAKKCCKB(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Xml_XmlDocument_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  AAPGCAPGBLG_o *__this_00;
  CCLKPGBIBOP_o *item;
  System_Collections_Generic_List_CCLKPGBIBOP__o *pSVar9;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar10;
  CCLKPGBIBOP_array *pCVar11;
  ulong uVar12;
  int *piVar13;
  System_Xml_XmlDocument_o **ppSVar14;
  
  if ((DAT_045671aa & 1) == 0) {
    FUN_01bab630(&Method_AAPGCAPGBLG_EEKPOHKAFCO__);
    FUN_01bab630(&System_Action<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_629);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_631);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Sort__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045671aa = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  pSVar3 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
  pSVar4 = GIAMPEGMNHE__GMNIIJJFIJK(pSVar3,StringLiteral_1/*""*/,2,true,(MethodInfo *)0x0);
  ppSVar14 = &(__this->fields).JLBELGKGBBI;
  *ppSVar14 = pSVar4;
  thunk_FUN_01c20e04(ppSVar14,pSVar4);
  pSVar4 = *ppSVar14;
  if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
    pSVar4 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
    System_Xml_XmlDocument___ctor(pSVar4,(MethodInfo *)0x0);
    *ppSVar14 = pSVar4;
    thunk_FUN_01c20e04(ppSVar14,pSVar4);
    pSVar4 = *ppSVar14;
  }
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_628,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_629,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  if (pSVar4 != (System_Xml_XmlDocument_o *)0x0) {
    method_01 = (pSVar4->klass->vtable)._51_get_Item.method;
    plVar7 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)(pSVar4,pSVar3);
    if (plVar7 == (long *)0x0) {
      pSVar4 = *ppSVar14;
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_630,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03360d10 to 03460d1b has its CatchHandler @ 033617ec */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_631,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 03360d2c to 03460d3b has its CatchHandler @ 03361874 */
      EIABCPKDEBD__KPODFFHOHGK(pSVar4,pSVar3,(MethodInfo *)0x0);
      return;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03360b6c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_01 = (MethodInfo *)0x0;
                    /* try { // try from 03360b58 to 03460b7f has its CatchHandler @ 03361900 */
        puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_03360b6c:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_03360d64;
                    /* try { // try from 03360c8c to 03460c97 has its CatchHandler @ 03361884 */
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_03360cc0;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03360ca8;
        }
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03360bcc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_01 = (MethodInfo *)0x1;
                    /* try { // try from 03360bb4 to 03460bdf has its CatchHandler @ 033618fc */
        puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_03360bcc:
        __this_00 = (AAPGCAPGBLG_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        item = AAPGCAPGBLG__EKLJCBLAGBO(__this_00,(System_Xml_XmlNode_o *)__this_00,method_01);
        lVar10 = Method_System_Collections_Generic_List<CCLKPGBIBOP>_Add__;
        pSVar9 = (__this->fields).AOCCHDFNLMC;
        if (pSVar9 == (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03360e08 to 03460e13 has its CatchHandler @ 033617e0 */
          FUN_01bab8c8();
        }
                    /* try { // try from 03360c1c to 03460c23 has its CatchHandler @ 033618f0 */
        pCVar11 = (pSVar9->fields)._items;
                    /* try { // try from 03360c28 to 03460c2f has its CatchHandler @ 033618f4 */
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pCVar11 == (CCLKPGBIBOP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pCVar11->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pCVar11->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pCVar11->m_Items + (int)uVar2);
        }
        else {
          method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                     (MethodInfo_26E4DAC *)method_01);
        }
      } while( true );
    }
  }
  goto LAB_03360e10;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03360ca8:
                    /* try { // try from 03360ca8 to 03460cb7 has its CatchHandler @ 03361808 */
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03360d58;
    }
  }
LAB_03360cc0:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03360d58:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03360d64:
  pSVar9 = (__this->fields).AOCCHDFNLMC;
  if (pSVar9 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar9,
               Method_System_Collections_Generic_List<CCLKPGBIBOP>_Sort__);
                    /* try { // try from 03360d8c to 03460d97 has its CatchHandler @ 03361858 */
    pSVar9 = (__this->fields).AOCCHDFNLMC;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CCLKPGBIBOP>_TypeInfo);
                    /* try { // try from 03360da8 to 03460db7 has its CatchHandler @ 033618b0 */
    System_Action<object>___ctor();
    if (pSVar9 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)pSVar9,action,
                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
      AAPGCAPGBLG__JPHDMGDNDHH(__this,method_00);
      return;
    }
  }
LAB_03360e10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JIIBNJFDICI(string KGLJICLJHEL, bool CNADELPLGPE = True)  [RVA 0x325E6D4]
// AAPGCAPGBLG$$JIIBNJFDICI @ RVA 0x325E6D4

/* WARNING: Removing unreachable block (ram,0x0335ee88) */
/* WARNING: Removing unreachable block (ram,0x0335ecb8) */

void AAPGCAPGBLG__JIIBNJFDICI
               (AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,bool CNADELPLGPE,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  long *plVar8;
  System_Collections_Generic_List_object__o *__this_00;
  long *plVar9;
  undefined8 *puVar10;
  Il2CppObject *item;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Predicate_T__o *match;
  long lVar11;
  Il2CppClass *pIVar12;
  System_Object_array *pSVar13;
  ulong uVar14;
  int *piVar15;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_02;
  System_Xml_XmlDocument_o *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045671ab & 1) == 0) {
    FUN_01bab630(&GameSettings_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_635);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_636);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_637);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_AAPGCAPGBLG_JDHOBHDIPHO_MPCECPHDEJD__);
    FUN_01bab630(&AAPGCAPGBLG_JDHOBHDIPHO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045671ab = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_JDHOBHDIPHO_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar4,KGLJICLJHEL);
    pSVar16 = (__this->fields).JLBELGKGBBI;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (pSVar16 == (System_Xml_XmlDocument_o *)0x0) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_632,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0335ec14 to 0345ec23 has its CatchHandler @ 0335ed6c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_633,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* try { // try from 0335ec64 to 0345ec87 has its CatchHandler @ 0335ed58 */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      pIVar12 = pIVar4->klass;
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      goto LAB_0335ee3c;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_634,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_635,(MethodInfo *)0x0);
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    plVar8 = (long *)(*(pSVar16->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar16,pSVar7,(pSVar16->klass->vtable)._51_get_Item.method);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<XmlNode>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<XmlNode>__ctor__);
    if ((plVar8 != (long *)0x0) &&
       (plVar9 = (long *)(**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210)),
       plVar9 != (long *)0x0)) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0335e9ec;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_0335e9ec:
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar14 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
          if (plVar9 == (long *)0x0) goto LAB_0335eca8;
          lVar11 = *plVar9;
                    /* try { // try from 0335ebb0 to 0345ebdb has its CatchHandler @ 0335ed60 */
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_0335ebe0;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0335ebc8;
        }
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0335ea4c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
                    /* try { // try from 0335ea28 to 0345eb53 has its CatchHandler @ 0335ea28
                       catch() { ... } // from try @ 0335ea28 with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ec98 with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ed3c with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ed44 with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ee00 with catch @ 0335ea28 */
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_0335ea4c:
        item = (Il2CppObject *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (item == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar12 = item->klass;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pIVar12->_2).naturalAligment < bVar1) ||
           ((pIVar12->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(item);
        }
        __this_01 = (System_Xml_XmlAttributeCollection_o *)
                    (*pIVar12->vtable[0x10].methodPtr)(item,pIVar12->vtable[0x10].method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_636,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_637,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_01,pSVar7,(MethodInfo *)0x0);
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality
                          (pSVar7,(System_String_o *)pIVar4->klass,(MethodInfo *)0x0);
        lVar11 = Method_System_Collections_Generic_List<XmlNode>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar13 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar13->max_length) {
                    /* try { // try from 0335eb54 to 0345eb7b has its CatchHandler @ 0335ed64 */
            (__this_00->fields)._size = uVar2 + 1;
            pSVar13->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
  goto LAB_0335ee80;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0335ebc8:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0335ec98 to 0345ed27 has its CatchHandler @ 0335ea28 */
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0335ec9c;
    }
  }
LAB_0335ebe0:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_0335ec9c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0335eca8:
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__
                );
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__
                               ), bVar3) {
        (**(code **)(*plVar8 + 0x2c8))
                  (plVar8,local_80.fields._current,*(undefined8 *)(*plVar8 + 0x2d0));
                    /* try { // try from 0335ed28 to 0345ed2f has its CatchHandler @ 0335ed5c */
      }
                    /* try { // try from 0335ed30 to 0345ed33 has its CatchHandler @ 0335ed50 */
                    /* try { // try from 0335ed34 to 0345ed3b has its CatchHandler @ 0335ed68 */
                    /* try { // try from 0335ed3c to 0345ed3f has its CatchHandler @ 0335ea28 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
                    /* try { // try from 0335ed40 to 0345ed43 has its CatchHandler @ 0335ed4c */
      length = (__this_00->fields)._size;
                    /* try { // try from 0335ed44 to 0345ed7b has its CatchHandler @ 0335ea28 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed40 with catch @ 0335ed4c
                        */
      (__this_00->fields)._size = 0;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed30 with catch @ 0335ed50
                        */
      if (0 < length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ec8c with catch @ 0335ed54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ec64 with catch @ 0335ed58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed28 with catch @ 0335ed5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ebb0 with catch @ 0335ed60
                        */
        System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0)
        ;
      }
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335eb54 with catch @ 0335ed64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed34 with catch @ 0335ed68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ec14 with catch @ 0335ed6c
                        */
    if ((GameSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0335ed7c to 0345ed7f has its CatchHandler @ 0335ed90 */
    bVar3 = GameSettings__DMEJHHPGDFA((MethodInfo *)0x0);
    pSVar16 = (__this->fields).JLBELGKGBBI;
                    /* catch() { ... } // from try @ 0335ed7c with catch @ 0335ed90 */
                    /* try { // try from 0335ed98 to 0345edff has its CatchHandler @ 0335ee14 */
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SF2Paths_TypeInfo);
    }
    pSVar7 = SF2Paths__GACHMMDHOJE((MethodInfo *)0x0);
    if (bVar3) {
      GIAMPEGMNHE__DGLLHFNFGNO(pSVar16,pSVar7,(MethodInfo *)0x0);
    }
    else {
      GIAMPEGMNHE__LFKDDMKHGEA(pSVar16,pSVar7,(MethodInfo *)0x0);
    }
    __this_02 = (__this->fields).AOCCHDFNLMC;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_02 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
                    /* try { // try from 0335ee00 to 0345ee0b has its CatchHandler @ 0335ea28 */
                    /* try { // try from 0335ee0c to 0345ee13 has its CatchHandler @ 0335ee14 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0335ed98 with catch @ 0335ee14
                       catch(type#2 @ 00000000) { ... } // from try @ 0335ee0c with catch @ 0335ee14
                        */
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)__this_02,match,
                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_RemoveAll__);
      pIVar12 = pIVar4->klass;
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
LAB_0335ee3c:
      CLFCKIFNGHA__GMENDOGOHMH((System_String_o *)pIVar12,CNADELPLGPE,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0335ee80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

