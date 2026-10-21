// TypeDefIndex 2694
// Namespace: 
// public class GHOPMMBKGMB
// Fields:
//   private Dictionary<string, GLDKIFOLMAO> HGCIIJGGNKN; // 0x10

// ===== public void PPJCCOBAIMC(XmlNode JHMENEKPIBO)  [RVA 0x33CD670]
// GHOPMMBKGMB$$PPJCCOBAIMC @ RVA 0x33CD670

void GHOPMMBKGMB__PPJCCOBAIMC
               (GHOPMMBKGMB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlElement_o *JHMENEKPIBO_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  
  if ((DAT_04567e37 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3848);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3849);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3850);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3851);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_GLDKIFOLMAO>_GetEnumerator__
                );
    DAT_04567e37 = 1;
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3848,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3849,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    JHMENEKPIBO_00 =
         (System_Xml_XmlElement_o *)
         (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                   (JHMENEKPIBO,pSVar5,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    if (JHMENEKPIBO_00 == (System_Xml_XmlElement_o *)0x0) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3850,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3851,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      JHMENEKPIBO_00 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,pSVar5,(MethodInfo *)0x0);
      if (JHMENEKPIBO_00 == (System_Xml_XmlElement_o *)0x0) goto LAB_034cd8e4;
    }
    (*(JHMENEKPIBO_00->klass->vtable)._49_RemoveAll.methodPtr)
              (JHMENEKPIBO_00,(JHMENEKPIBO_00->klass->vtable)._49_RemoveAll.method);
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HGCIIJGGNKN
    ;
    if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                        (pSVar6,
                         Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Count__
                        );
      if (0 < iVar2) {
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).HGCIIJGGNKN;
        if ((pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (__this_00 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                                  (pSVar6,
                                   Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_get_Values__
                                  ),
           __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
           )) goto LAB_034cd8e4;
        System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                  (&local_58,__this_00,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<string,_GLDKIFOLMAO>_GetEnumerator__
                  );
        while (bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                                 (&local_58,
                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_MoveNext__
                                 ), bVar1) {
          if ((GLDKIFOLMAO_o *)local_58.fields._currentValue == (GLDKIFOLMAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          GLDKIFOLMAO__BHFGGAKKJKP
                    ((GLDKIFOLMAO_o *)local_58.fields._currentValue,
                     (System_Xml_XmlNode_o *)JHMENEKPIBO_00,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_GLDKIFOLMAO>_Dispose__
                  );
      }
      return;
    }
  }
LAB_034cd8e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IKGFPIFAGHP(XmlNode JHMENEKPIBO)  [RVA 0x33CD954]
// GHOPMMBKGMB$$IKGFPIFAGHP @ RVA 0x33CD954

/* WARNING: Removing unreachable block (ram,0x034cdca4) */

void GHOPMMBKGMB__IKGFPIFAGHP
               (GHOPMMBKGMB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  GLDKIFOLMAO_o *__this_01;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04567e38 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3852);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3853);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<string,_GLDKIFOLMAO>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Clear__);
    FUN_01bab630(&GLDKIFOLMAO_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567e38 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).HGCIIJGGNKN;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Clear__);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3852,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3853,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
      plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                                 (JHMENEKPIBO,pSVar2,
                                  (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
      if (plVar3 == (long *)0x0) {
        return;
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_034cdb28;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cdb28:
          uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar6 & 1) == 0) {
            plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar5 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 == 0) goto LAB_034cdc48;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_034cdc30;
          }
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_034cdb88;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cdb88:
          JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          __this_01 = (GLDKIFOLMAO_o *)thunk_FUN_01bda818(GLDKIFOLMAO_TypeInfo);
          if (JHMENEKPIBO_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((JHMENEKPIBO_00->klass->_2).naturalAligment < bVar1) ||
               ((JHMENEKPIBO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(JHMENEKPIBO_00);
            }
          }
          GLDKIFOLMAO___ctor(__this_01,JHMENEKPIBO_00,(MethodInfo *)0x0);
          if (__this_01 == (GLDKIFOLMAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          CAOJHCDPDBH__GKONJMIPMEH<object,_object>
                    ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).HGCIIJGGNKN,
                     (Il2CppObject *)(__this_01->fields)._CIEBCKIBJHL_k__BackingField,
                     (Il2CppObject *)__this_01,Method_CAOJHCDPDBH_GKONJMIPMEH<string,_GLDKIFOLMAO>__
                    );
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_034cdc30:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034cdc64;
    }
  }
LAB_034cdc48:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034cdc64:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public GLDKIFOLMAO LBBHCIGJNDO(string PIGAGEDBOPC)  [RVA 0x33CDD70]
// GHOPMMBKGMB$$LBBHCIGJNDO @ RVA 0x33CDD70

GLDKIFOLMAO_o *
GHOPMMBKGMB__LBBHCIGJNDO(GHOPMMBKGMB_o *__this,System_String_o *PIGAGEDBOPC,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GLDKIFOLMAO_o *local_28;
  
  if ((DAT_04567e39 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TryGetValue__);
    DAT_04567e39 = 1;
  }
  local_28 = (GLDKIFOLMAO_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).HGCIIJGGNKN;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__TryGetValue
              (__this_00,(Il2CppObject *)PIGAGEDBOPC,(Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TryGetValue__);
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PPLCJLAAALH(Product[] MOJLFMJLBDH)  [RVA 0x33CDDE0]
// GHOPMMBKGMB$$PPLCJLAAALH @ RVA 0x33CDDE0

void GHOPMMBKGMB__PPLCJLAAALH
               (GHOPMMBKGMB_o *__this,UnityEngine_Purchasing_Product_array *MOJLFMJLBDH,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  GLDKIFOLMAO_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  UnityEngine_Purchasing_ProductDefinition_o *pUVar4;
  UnityEngine_Purchasing_Product_o *IPIHMPBGACB;
  System_String_o *key;
  uint uVar5;
  GLDKIFOLMAO_o *local_58;
  
  if ((DAT_04567e3a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TryGetValue__);
    FUN_01bab630(&GLDKIFOLMAO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567e3a = 1;
  }
  local_58 = (GLDKIFOLMAO_o *)0x0;
  if (MOJLFMJLBDH != (UnityEngine_Purchasing_Product_array *)0x0) {
    uVar1 = (uint)MOJLFMJLBDH->max_length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        IPIHMPBGACB = MOJLFMJLBDH->m_Items[(int)uVar5];
        if (((IPIHMPBGACB == (UnityEngine_Purchasing_Product_o *)0x0) ||
            (pUVar4 = (IPIHMPBGACB->fields)._definition_k__BackingField,
            pUVar4 == (UnityEngine_Purchasing_ProductDefinition_o *)0x0)) ||
           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields).HGCIIJGGNKN,
           pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        goto LAB_034cdf94;
        bVar2 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                          (pSVar3,(Il2CppObject *)(pUVar4->fields)._id_k__BackingField,
                           (Il2CppObject **)&local_58,
                           Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TryGetValue__
                          );
        if (bVar2) {
          if (local_58 == (GLDKIFOLMAO_o *)0x0) goto LAB_034cdf94;
          GLDKIFOLMAO__LLCONNGHGKD(local_58,IPIHMPBGACB,(MethodInfo *)0x0);
        }
        else {
          pUVar4 = (IPIHMPBGACB->fields)._definition_k__BackingField;
          if (pUVar4 == (UnityEngine_Purchasing_ProductDefinition_o *)0x0) goto LAB_034cdf94;
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).HGCIIJGGNKN;
          key = (pUVar4->fields)._id_k__BackingField;
          __this_00 = (GLDKIFOLMAO_o *)thunk_FUN_01bda818(GLDKIFOLMAO_TypeInfo);
          GLDKIFOLMAO___ctor(__this_00,IPIHMPBGACB,(MethodInfo *)0x0);
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_034cdf94;
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (pSVar3,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_Add__);
        }
        uVar1 = (uint)MOJLFMJLBDH->max_length;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034cdf94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33CDF9C]
// GHOPMMBKGMB$$.ctor @ RVA 0x33CDF9C

void GHOPMMBKGMB___ctor(GHOPMMBKGMB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e3b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TypeInfo);
    DAT_04567e3b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_GLDKIFOLMAO>__ctor__);
  (__this->fields).HGCIIJGGNKN =
       (System_Collections_Generic_Dictionary_string__GLDKIFOLMAO__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

