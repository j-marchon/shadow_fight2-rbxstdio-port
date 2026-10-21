// Original name: Nekki.SF2.Core.AD.AdvertisingViewsManager  (obfuscated PCKJEMMFMKL)
// TypeDefIndex 180
// Namespace: 
// public class AdvertisingViewsManager
// Fields:
//   private static AdvertisingViewsManager CBDMFFMCJBK; // 0x0
//   private readonly Dictionary<MPAKDCNMLEG, AdvertisingViewsManager.OMJBBKMFKIJ> CDMELACPLKK; // 0x10

// ===== public static void GIENGNEGHPJ()  [RVA 0x3112264]
// AdvertisingViewsManager$$GIENGNEGHPJ @ RVA 0x3112264

void AdvertisingViewsManager__GIENGNEGHPJ(MethodInfo *method)

{
  AdvertisingViewsManager_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_0456658e & 1) == 0) {
    FUN_01bab630(&AdvertisingViewsManager_TypeInfo);
    DAT_0456658e = 1;
  }
  if (AdvertisingViewsManager_TypeInfo->static_fields->CBDMFFMCJBK != (AdvertisingViewsManager_o *)0x0) {
    return;
  }
  auVar1 = thunk_FUN_01bda818();
  __this = auVar1._0_8_;
  AdvertisingViewsManager___ctor(__this,auVar1._8_8_);
  AdvertisingViewsManager_TypeInfo->static_fields->CBDMFFMCJBK = __this;
  thunk_FUN_01c20e04(AdvertisingViewsManager_TypeInfo->static_fields,__this);
  return;
}


// ===== public int OMLNCFNPAMJ(MPAKDCNMLEG PNPNABNPLHC, int GGGCLHJFMBC = 0)  [RVA 0x3112708]
// AdvertisingViewsManager$$OMLNCFNPAMJ @ RVA 0x3112708

int32_t AdvertisingViewsManager__OMLNCFNPAMJ
                  (AdvertisingViewsManager_o *__this,int32_t PNPNABNPLHC,int32_t GGGCLHJFMBC,MethodInfo *method)

{
  int32_t iVar1;
  AdvertisingViewsManager_OMJBBKMFKIJ_o *pPVar2;
  
  pPVar2 = AdvertisingViewsManager__NNAIMOIPHEE(__this,PNPNABNPLHC,(MethodInfo *)(ulong)(uint)GGGCLHJFMBC);
  if (pPVar2 != (AdvertisingViewsManager_OMJBBKMFKIJ_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar2->fields).NAPLAGMJMDM.fields,(MethodInfo *)0x0);
    return iVar1;
  }
  return GGGCLHJFMBC;
}


// ===== public static AdvertisingViewsManager AIHNLLGNBLC()  [RVA 0x31127A8]
// AdvertisingViewsManager$$AIHNLLGNBLC @ RVA 0x31127A8

AdvertisingViewsManager_o * AdvertisingViewsManager__AIHNLLGNBLC(MethodInfo *method)

{
  if ((DAT_0456658f & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&AdvertisingViewsManager_TypeInfo);
    DAT_0456658f = 1;
  }
  AdvertisingViewsManager__GIENGNEGHPJ(method);
  return AdvertisingViewsManager_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public bool EIKKAJGLONF(MPAKDCNMLEG PNPNABNPLHC, ref bool FFMNJACCDJE)  [RVA 0x31127F4]
// AdvertisingViewsManager$$EIKKAJGLONF @ RVA 0x31127F4

bool AdvertisingViewsManager__EIKKAJGLONF
               (AdvertisingViewsManager_o *__this,int32_t PNPNABNPLHC,bool *FFMNJACCDJE,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  AdvertisingViewsManager_OMJBBKMFKIJ_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  AdvertisingViewsManager_OMJBBKMFKIJ_Fields *pPVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  method_00 = (MethodInfo *)FFMNJACCDJE;
  if ((DAT_04566590 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_15421/*"[AdvertisingViewsManager] IncViewCount: can't find ViewsData for advertising '{0}'!"*/);
    FUN_01bab630(&StringLiteral_15422/*"[AdvertisingViewsManager] IncViewCount: {0}/{1}"*/);
    DAT_04566590 = 1;
  }
  pPVar3 = AdvertisingViewsManager__NNAIMOIPHEE(__this,PNPNABNPLHC,method_00);
  if (pPVar3 == (AdvertisingViewsManager_OMJBBKMFKIJ_o *)0x0) {
    pSVar4 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_50 = CONCAT44(local_50._4_4_,PNPNABNPLHC);
    pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_50);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 == (Il2CppObject *)0x0) ||
         (lVar6 = thunk_FUN_01bda71c(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 != 0))
      {
        if ((int)pSVar4->max_length != 0) {
          pSVar4->m_Items[0] = pIVar5;
          thunk_FUN_01c20e04(pSVar4->m_Items,pIVar5);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_15421/*"[AdvertisingViewsManager] IncViewCount: can't find ViewsData for advertising '{0}'!"*/,pSVar4,(MethodInfo *)0x0);
          return false;
        }
        goto LAB_03212a74;
      }
      goto LAB_03212a7c;
    }
  }
  else {
    CVar9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__CIJLADMHKHJ
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar3->fields).NAPLAGMJMDM.fields,(MethodInfo *)0x0);
    (pPVar3->fields).NAPLAGMJMDM.fields = CVar9;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar9,(MethodInfo *)0x0);
    pPVar8 = &pPVar3->fields;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)(pPVar8->HFBHMJBLLOI).fields
                       ,(MethodInfo *)0x0);
    *FFMNJACCDJE = iVar2 <= iVar1;
    pSVar4 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    uStack_48._0_4_ = (pPVar3->fields).NAPLAGMJMDM.fields.fakeValue;
    uStack_48._4_1_ = (pPVar3->fields).NAPLAGMJMDM.fields.fakeValueActive;
    uStack_48._5_1_ = (pPVar3->fields).NAPLAGMJMDM.fields.inited;
    uStack_48._6_2_ = *(undefined2 *)&(pPVar3->fields).NAPLAGMJMDM.fields.field_0xe;
    local_50._0_4_ = (pPVar3->fields).NAPLAGMJMDM.fields.currentCryptoKey;
    local_50._4_4_ = (pPVar3->fields).NAPLAGMJMDM.fields.hiddenValue;
    pIVar5 = (Il2CppObject *)
             thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_50);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      {
LAB_03212a7c:
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar7,0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar5;
        thunk_FUN_01c20e04(pSVar4->m_Items,pIVar5);
        uStack_58._0_4_ = (pPVar3->fields).HFBHMJBLLOI.fields.fakeValue;
        uStack_58._4_1_ = (pPVar3->fields).HFBHMJBLLOI.fields.fakeValueActive;
        uStack_58._5_1_ = (pPVar3->fields).HFBHMJBLLOI.fields.inited;
        uStack_58._6_2_ = *(undefined2 *)&(pPVar3->fields).HFBHMJBLLOI.fields.field_0xe;
        local_60._0_4_ = (pPVar8->HFBHMJBLLOI).fields.currentCryptoKey;
        local_60._4_4_ = (pPVar8->HFBHMJBLLOI).fields.hiddenValue;
        pIVar5 = (Il2CppObject *)
                 thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_60
                                   );
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (lVar6 = thunk_FUN_01bda71c(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0
           )) goto LAB_03212a7c;
        if (1 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[1] = pIVar5;
          thunk_FUN_01c20e04(pSVar4->m_Items + 1,pIVar5);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(StringLiteral_15422/*"[AdvertisingViewsManager] IncViewCount: {0}/{1}"*/,pSVar4,(MethodInfo *)0x0);
          if (*FFMNJACCDJE != false) {
            CVar9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
            (pPVar3->fields).NAPLAGMJMDM.fields = CVar9;
          }
          return true;
        }
      }
LAB_03212a74:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LAPHEMPOHMP(MPAKDCNMLEG PNPNABNPLHC, int GGGCLHJFMBC = 1)  [RVA 0x3112A88]
// AdvertisingViewsManager$$LAPHEMPOHMP @ RVA 0x3112A88

int32_t AdvertisingViewsManager__LAPHEMPOHMP
                  (AdvertisingViewsManager_o *__this,int32_t PNPNABNPLHC,int32_t GGGCLHJFMBC,MethodInfo *method)

{
  int32_t iVar1;
  AdvertisingViewsManager_OMJBBKMFKIJ_o *pPVar2;
  
  pPVar2 = AdvertisingViewsManager__NNAIMOIPHEE(__this,PNPNABNPLHC,(MethodInfo *)(ulong)(uint)GGGCLHJFMBC);
  if (pPVar2 != (AdvertisingViewsManager_OMJBBKMFKIJ_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar2->fields).HFBHMJBLLOI.fields,(MethodInfo *)0x0);
    return iVar1;
  }
  return GGGCLHJFMBC;
}


// ===== public void LIHIHHFHAGM(IEnumerable<XmlNode> OBDMHHJBLKL)  [RVA 0x3112AB8]
// AdvertisingViewsManager$$LIHIHHFHAGM @ RVA 0x3112AB8

/* WARNING: Removing unreachable block (ram,0x03212dac) */

void AdvertisingViewsManager__LIHIHHFHAGM
               (AdvertisingViewsManager_o *__this,System_Collections_Generic_IEnumerable_XmlNode__o *OBDMHHJBLKL
               ,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *AFKICLAFDKC;
  AdvertisingViewsManager_OMJBBKMFKIJ_o *pPVar10;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar16;
  
  if ((DAT_04566591 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_04566591 = 1;
  }
  if (OBDMHHJBLKL == (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar11 = OBDMHHJBLKL->klass;
  uVar1._0_1_ = (pSVar11->_2).rank;
  uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar13 = (ulong)uVar1;
  if (uVar13 != 0) {
    piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
        pVVar4 = pSVar11->vtable + *piVar14;
        goto LAB_03212b88;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(OBDMHHJBLKL,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_03212b88:
  plVar5 = (long *)(*pVVar4->methodPtr)(OBDMHHJBLKL,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03212c10;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03212c10:
    uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_03212d54;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar15 + -2) ==
            System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03212c6c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_03212c6c:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar8,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    AFKICLAFDKC = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
    iVar3 = OMMDIMHOHLK__POBLIPFPGPD(AFKICLAFDKC,(MethodInfo *)0x0);
    bVar2 = OMMDIMHOHLK__JKOMBMIBMBL(iVar3,(MethodInfo *)0x0);
    if ((bVar2) &&
       (pPVar10 = AdvertisingViewsManager__NNAIMOIPHEE(__this,iVar3,method_00),
       pPVar10 != (AdvertisingViewsManager_OMJBBKMFKIJ_o *)0x0)) {
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
      iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,1,(MethodInfo *)0x0);
      CVar16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar3,(MethodInfo *)0x0);
      (pPVar10->fields).HFBHMJBLLOI.fields = CVar16;
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03212d70;
    }
  }
LAB_03212d54:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03212d70:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== private void OPLEDDDGDPE()  [RVA 0x3112E90]
// AdvertisingViewsManager$$OPLEDDDGDPE @ RVA 0x3112E90

void AdvertisingViewsManager__OPLEDDDGDPE(AdvertisingViewsManager_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *__this_00;
  MethodInfo *extraout_x1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04566592 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_get_Value__
                );
    DAT_04566592 = 1;
    method = extraout_x1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).CDMELACPLKK;
  if (__this_00 !=
      (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_GetEnumerator__
              );
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_MoveNext__
                        );
      pIVar1 = local_50.fields._current.fields.value;
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Dispose__
                  );
        return;
      }
      CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 2) = CVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private JSONNode JEODHPCHCKE(string IMMNELPBGIF)  [RVA 0x3112FF4]
// AdvertisingViewsManager$$JEODHPCHCKE @ RVA 0x3112FF4

SimpleJSON_JSONNode_o *
AdvertisingViewsManager__JEODHPCHCKE(AdvertisingViewsManager_o *__this,System_String_o *IMMNELPBGIF,MethodInfo *method)

{
  System_String_o *aJSON;
  SimpleJSON_JSONNode_o *pSVar1;
  
  if ((DAT_04566593 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566593 = 1;
  }
  aJSON = PCOEHCPGBBG__HIPDPNHLHAC(IMMNELPBGIF,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SimpleJSON_JSONNode__Parse(aJSON,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public AdvertisingViewsManager.OMJBBKMFKIJ NNAIMOIPHEE(MPAKDCNMLEG PNPNABNPLHC)  [RVA 0x3112738]
// AdvertisingViewsManager$$NNAIMOIPHEE @ RVA 0x3112738

AdvertisingViewsManager_OMJBBKMFKIJ_o *
AdvertisingViewsManager__NNAIMOIPHEE(AdvertisingViewsManager_o *__this,int32_t PNPNABNPLHC,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *__this_00;
  AdvertisingViewsManager_OMJBBKMFKIJ_o *local_28;
  
  if ((DAT_04566594 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TryGetValue__
                );
    DAT_04566594 = 1;
  }
  local_28 = (AdvertisingViewsManager_OMJBBKMFKIJ_o *)0x0;
  __this_00 = (__this->fields).CDMELACPLKK;
  if (__this_00 !=
      (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,PNPNABNPLHC,
               (Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TryGetValue__
              );
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void .ctor()  [RVA 0x31122E0]
// AdvertisingViewsManager$$.ctor @ RVA 0x31122E0

/* WARNING: Removing unreachable block (ram,0x0321263c) */

void AdvertisingViewsManager___ctor(AdvertisingViewsManager_o *__this,MethodInfo *method)

{
  int32_t BKFOLMBMFNP;
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  bool bVar3;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *pSVar4;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  int32_t *piVar8;
  Il2CppObject *__this_01;
  undefined8 *puVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  AdvertisingViewsManager_Fields *pPVar14;
  Il2CppObject IVar15;
  
  if ((DAT_04566595 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TypeInfo
                );
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_var);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&AdvertisingViewsManager_OMJBBKMFKIJ_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566595 = 1;
    method = extraout_x1;
  }
  pSVar4 = (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_TypeInfo
                              ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
             Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>__ctor__
            );
  pPVar14 = &__this->fields;
  pPVar14->CDMELACPLKK = pSVar4;
  thunk_FUN_01c20e04(pPVar14,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle = MPAKDCNMLEG_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
                    /* try { // try from 0321240c to 03312457 has its CatchHandler @ 0321240c
                       catch() { ... } // from try @ 0321240c with catch @ 0321240c
                       catch() { ... } // from try @ 03212490 with catch @ 0321240c
                       catch() { ... } // from try @ 032124cc with catch @ 0321240c
                       catch() { ... } // from try @ 032125bc with catch @ 0321240c */
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 == (System_Array_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar5 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar10 = pSVar5->klass;
    uVar1._0_1_ = (pSVar10->_2).rank;
    uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
                    /* try { // try from 03212468 to 0331246f has its CatchHandler @ 03212498 */
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar8 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03212480 to 03312487 has its CatchHandler @ 03212490 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar10->vtable + *piVar8;
          goto LAB_032124b0;
        }
        uVar12 = uVar12 - 1;
                    /* try { // try from 0321248c to 0331248f has its CatchHandler @ 03212494 */
        piVar8 = piVar8 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03212480 with catch @ 03212490
                       try { // try from 03212490 to 033124b3 has its CatchHandler @ 0321240c */
      } while (uVar12 != 0);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321248c with catch @ 03212494
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03212468 with catch @ 03212498
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03212458 with catch @ 0321249c
                        */
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032124b0:
                    /* try { // try from 032124b4 to 033124cb has its CatchHandler @ 032125b4 */
    uVar12 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if ((uVar12 & 1) == 0) {
                    /* try { // try from 032125a4 to 033125b3 has its CatchHandler @ 032125b4 */
      plVar7 = (long *)thunk_FUN_01bda71c(pSVar5,System_IDisposable_TypeInfo);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar7;
                    /* catch() { ... } // from try @ 032124b4 with catch @ 032125b4
                       catch() { ... } // from try @ 032125a4 with catch @ 032125b4 */
                    /* try { // try from 032125b8 to 033125bb has its CatchHandler @ 032125c4 */
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* try { // try from 032125bc to 033125c7 has its CatchHandler @ 0321240c */
      if (uVar12 == 0) goto LAB_032125e0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032125b8 with catch @ 032125c4
                        */
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    pSVar10 = pSVar5->klass;
    uVar2._0_1_ = (pSVar10->_2).rank;
    uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar2;
                    /* try { // try from 032124cc to 033125a3 has its CatchHandler @ 0321240c */
    if (uVar12 != 0) {
      piVar8 = &((pSVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar6 = pSVar10->vtable + (*piVar8 + 1);
          goto LAB_03212510;
        }
        uVar12 = uVar12 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar12 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_03212510:
    plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (*(Il2CppClass **)(*plVar7 + 0x40) != (MPAKDCNMLEG_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    piVar8 = (int32_t *)thunk_FUN_01bda96c();
    BKFOLMBMFNP = *piVar8;
    bVar3 = OMMDIMHOHLK__JKOMBMIBMBL(BKFOLMBMFNP,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar4 = pPVar14->CDMELACPLKK;
      __this_01 = (Il2CppObject *)thunk_FUN_01bda818(AdvertisingViewsManager_OMJBBKMFKIJ_TypeInfo);
      IVar15 = (Il2CppObject)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
      __this_01[1] = IVar15;
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      if (pSVar4 == (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *
                    )0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,BKFOLMBMFNP,
                 __this_01,
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Add__
                );
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_032125fc;
    }
  }
LAB_032125e0:
  puVar9 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_032125fc:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return;
}

