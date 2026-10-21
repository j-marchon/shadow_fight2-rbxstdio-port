// TypeDefIndex 352
// Namespace: 
// public static class PFDCJGIIPLB
// Fields:
//   private static readonly CompositeDisposable BNAIPPCOGPE; // 0x0
//   private static HelpshiftSdk FBANHLJJPDK; // 0x8

// ===== private static Dictionary<string, object> IGPLEOEHKKG()  [RVA 0x3355648]
// PFDCJGIIPLB$$IGPLEOEHKKG @ RVA 0x3355648

System_Collections_Generic_Dictionary_string__object__o *
PFDCJGIIPLB__IGPLEOEHKKG(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04567a42 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    DAT_04567a42 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  return (System_Collections_Generic_Dictionary_string__object__o *)__this;
}


// ===== private static Dictionary<string, object> BIOIDDEPGPC(ICollection<string> NDIDKEDHJBE)  [RVA 0x33556B0]
// PFDCJGIIPLB$$BIOIDDEPGPC @ RVA 0x33556B0

System_Collections_Generic_Dictionary_string__object__o *
PFDCJGIIPLB__BIOIDDEPGPC
          (System_Collections_Generic_ICollection_string__o *NDIDKEDHJBE,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_string__object__o *value;
  VirtualInvokeData *pVVar6;
  System_Object_array *value_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_ICollection_string__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_04567a43 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_35);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_36);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_37);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_38);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_UnionWith__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<string>_TypeInfo);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a43 = 1;
    method = extraout_x1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo,method)
  ;
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_35,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_36,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo);
    method_00 = extraout_x1_01;
  }
  value = PFDCJGIIPLB__BIJMPDJOPHN
                    ((System_Collections_Generic_HashSet_string__o *)__this_00,method_00);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,(Il2CppObject *)pSVar5,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    if (NDIDKEDHJBE != (System_Collections_Generic_ICollection_string__o *)0x0) {
      pSVar7 = NDIDKEDHJBE->klass;
      uVar1._0_1_ = (pSVar7->_2).rank;
      uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<string>_TypeInfo) {
            pVVar6 = pSVar7->vtable + *piVar9;
            goto LAB_034558dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(NDIDKEDHJBE,System_Collections_Generic_ICollection<string>_TypeInfo,0);
LAB_034558dc:
      iVar2 = (*pVVar6->methodPtr)(NDIDKEDHJBE,pVVar6->method);
      if (0 < iVar2) {
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_034559c4;
        System_Collections_Generic_HashSet<object>__UnionWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)NDIDKEDHJBE,
                   Method_System_Collections_Generic_HashSet<string>_UnionWith__);
        goto LAB_03455914;
      }
    }
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_03455914:
      if (0 < (__this_00->fields)._count) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_37,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_38,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        value_00 = System_Linq_Enumerable__ToArray<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                              Method_System_Linq_Enumerable_ToArray<string>__);
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this,(Il2CppObject *)pSVar5,&value_00->obj,
                   Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
      }
      return (System_Collections_Generic_Dictionary_string__object__o *)__this;
    }
  }
LAB_034559c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x33581D4]
// PFDCJGIIPLB$$.cctor @ RVA 0x33581D4

void PFDCJGIIPLB___cctor(MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this;
  
  if ((DAT_04567a44 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a44 = 1;
  }
  __this = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this,(MethodInfo *)0x0);
  PFDCJGIIPLB_TypeInfo->static_fields->BNAIPPCOGPE = __this;
  thunk_FUN_01c20e04(PFDCJGIIPLB_TypeInfo->static_fields,__this);
  return;
}


// ===== public static void JGKMBCAPIIH(ICollection<string> NDIDKEDHJBE)  [RVA 0x3358250]
// PFDCJGIIPLB$$JGKMBCAPIIH @ RVA 0x3358250

void PFDCJGIIPLB__JGKMBCAPIIH
               (System_Collections_Generic_ICollection_string__o *NDIDKEDHJBE,MethodInfo *method)

{
  PFDCJGIIPLB_c *method_00;
  Helpshift_HelpshiftSdk_o *__this;
  System_Collections_Generic_Dictionary_string__object__o *configMap;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  if ((DAT_04567a45 & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a45 = 1;
    method = extraout_x1;
  }
  method_00 = PFDCJGIIPLB_TypeInfo;
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PFDCJGIIPLB_c *)thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo,method);
  }
  __this = PFDCJGIIPLB__LPAFHHGAJAH((MethodInfo *)method_00);
  configMap = PFDCJGIIPLB__BIOIDDEPGPC(NDIDKEDHJBE,method_01);
  if (__this != (Helpshift_HelpshiftSdk_o *)0x0) {
    Helpshift_HelpshiftSdk__ShowConversation(__this,configMap,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static Dictionary<string, object> BIJMPDJOPHN(HashSet<string> MMGMBAEEGGM)  [RVA 0x33559C8]
// PFDCJGIIPLB$$BIJMPDJOPHN @ RVA 0x33559C8

System_Collections_Generic_Dictionary_string__object__o *
PFDCJGIIPLB__BIJMPDJOPHN
          (System_Collections_Generic_HashSet_string__o *MMGMBAEEGGM,MethodInfo *method)

{
  bool bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  CFGLKHFFEKA_o *pCVar12;
  Il2CppObject *pIVar13;
  Roster_o *pAVar14;
  int64_t iVar15;
  GCPFDLNAFDF_o *pGVar16;
  VirtualInvokeData *pVVar17;
  PlayerData_o *pEVar18;
  Nekki_Utils_RaidBetaLogger_o *__this_00;
  MethodInfo *extraout_x1;
  KMBNFNCDDBP_o *pKVar19;
  GCPFDLNAFDF_c *pGVar20;
  ulong uVar21;
  int32_t *piVar22;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE;
  System_Enum_o local_a0;
  int32_t local_90;
  undefined1 local_84 [4];
  int64_t local_80;
  int64_t local_78;
  uint32_t local_6c;
  int32_t local_68 [2];
  
  if ((DAT_04567a46 & 1) == 0) {
    FUN_01bab630(&UnityEngine_ApplicationInstallMode_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_100);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_101);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_102);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_103);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_104);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_105);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_106);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_107);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_108);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_109);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_110);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_111);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_112);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_113);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_114);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_115);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_116);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_117);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_118);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_119);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_120);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_121);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_122);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_123);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_124);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_125);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_126);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_39);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_40);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_41);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_42);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_43);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_44);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_45);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_46);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_47);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_48);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_49);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_50);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_51);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_52);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_53);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_54);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_55);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_56);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_57);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_58);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_59);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_60);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_61);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_62);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_63);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_64);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_65);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_66);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_67);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_68);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_69);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_70);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_71);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_72);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_73);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_74);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_75);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_76);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_77);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_78);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_79);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_80);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_81);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_82);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_83);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_84);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_85);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_86);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_87);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_88);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_89);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_90);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_91);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_92);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_93);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_94);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_95);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_96);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_97);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_98);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_99);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    FUN_01bab630(&KCFAKHLDKJM_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_NetworkReachability_TypeInfo);
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04567a46 = 1;
    method = extraout_x1;
  }
  local_6c = 0;
  local_68[0] = 0;
  local_78 = 0;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo,method)
  ;
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,0x40,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  local_68[1] = 0;
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_39,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_40,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar11 = Nekki_Utils_RaidBetaLogger__UserId((MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_41,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_42,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar11 = EOAOCPLIKOI__HBOAEIBACIE((MethodInfo *)0x0);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_43,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_44,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  pCVar12 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if (pCVar12 == (CFGLKHFFEKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar13 = (Il2CppObject *)
            (*(pCVar12->klass->vtable)._3_ToString.methodPtr)
                      (pCVar12,(pCVar12->klass->vtable)._3_ToString.method);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,pIVar13,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  local_68[1] = 1;
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_45,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_46,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar19 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar19 == (KMBNFNCDDBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)(pKVar19->fields).IGLHCNLNIPK,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_47,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_48,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  pSVar11 = EOAOCPLIKOI__IEBPOGDJCFL((MethodInfo *)0x0);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_49,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_50,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar19 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar19 == (KMBNFNCDDBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)(pKVar19->fields).PDAOKOMFJEA,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_51,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_52,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar19 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar19 == (KMBNFNCDDBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  local_80 = (pKVar19->fields).OPDGKICDOKN;
  pIVar13 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_80);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,pIVar13,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  local_68[1] = 2;
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_53,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034563f4 to 0355648f has its CatchHandler @ 034563f4
                       catch() { ... } // from try @ 034563f4 with catch @ 034563f4
                       catch() { ... } // from try @ 034564a4 with catch @ 034563f4
                       catch() { ... } // from try @ 03456510 with catch @ 034563f4
                       catch() { ... } // from try @ 03456550 with catch @ 034563f4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_54,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar19 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar19 == (KMBNFNCDDBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)(pKVar19->fields).AHAKHHLCPAB,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03456490 to 03556497 has its CatchHandler @ 034564f4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_55,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034564a0 to 035564a3 has its CatchHandler @ 034564f0 */
                    /* try { // try from 034564a4 to 0355650b has its CatchHandler @ 034563f4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_56,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034564a0 with catch @ 034564f0
                        */
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03456490 with catch @ 034564f4
                        */
    thunk_FUN_01ba7564();
  }
  pKVar19 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar19 == (KMBNFNCDDBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0345650c to 0355650f has its CatchHandler @ 03456538 */
                    /* try { // try from 03456510 to 03556547 has its CatchHandler @ 034563f4 */
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)(pKVar19->fields).FKCAHAMGGHM,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0345650c with catch @ 03456538 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_57,(MethodInfo *)0x0);
                    /* try { // try from 03456548 to 0355654f has its CatchHandler @ 03456564 */
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03456550 to 0355655b has its CatchHandler @ 034563f4 */
                    /* try { // try from 0345655c to 03556563 has its CatchHandler @ 03456564 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_58,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03456548 with catch @ 03456564
                       catch(type#2 @ 00000000) { ... } // from try @ 0345655c with catch @ 03456564
                        */
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  local_84[0] = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0);
  pIVar13 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_84);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,pIVar13,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_59,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_60,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_90 = UnityEngine_Application__get_internetReachability((MethodInfo *)0x0);
  local_a0.klass = (System_Enum_c *)UnityEngine_NetworkReachability_TypeInfo;
  local_a0.monitor = (void *)0xffffffffffffffff;
  pSVar11 = System_Enum__ToString(&local_a0,(MethodInfo *)0x0);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  local_68[1] = 3;
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_71,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_72,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_73,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_74,(MethodInfo *)0x0);
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    bVar1 = false;
  }
  else {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_61,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_62,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
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
    pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar14 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_68[0] = Roster__EOEAKGGDBFH(pAVar14,(MethodInfo *)0x0);
    pSVar11 = System_Int32__ToString((int32_t)local_68,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_63,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_64,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar14 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_6c = Roster__LFOIBFFCBCL(pAVar14,(MethodInfo *)0x0);
    pSVar11 = System_UInt32__ToString((uint32_t)&local_6c,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_65,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_66,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar14 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar11 = Roster__KCKPAFCFAMP(pAVar14,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_67,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_68,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar14 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_78 = Roster__HEHFNBKGJLP(pAVar14,(MethodInfo *)0x0);
    pSVar11 = System_Int64__ToString((int64_t)&local_78,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_69,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_70,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar14 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_78 = Roster__IMLCNMCBEEN(pAVar14,(MethodInfo *)0x0);
    pSVar11 = System_Int64__ToString((int64_t)&local_78,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar14 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar15 = Roster__HEHFNBKGJLP(pAVar14,(MethodInfo *)0x0);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar16 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar16 == (GCPFDLNAFDF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar20 = pGVar16->klass;
    uVar2._0_1_ = (pGVar20->_2).rank;
    uVar2._1_1_ = (pGVar20->_2).minimumAlignment;
    uVar21 = (ulong)uVar2;
    if (uVar21 != 0) {
      piVar22 = &((pGVar20->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
            (Il2CppClass *)KADDELABILH_TypeInfo) {
          pVVar17 = pGVar20->vtable + (*piVar22 + 2);
          goto LAB_03456c30;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    pVVar17 = (VirtualInvokeData *)FUN_01b81914(pGVar16,KADDELABILH_TypeInfo,2);
LAB_03456c30:
    CJNHFNHJHPE.fields =
         (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
         (*pVVar17->methodPtr)(pGVar16,pVVar17->method);
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
    bVar1 = iVar6 < iVar15;
  }
  local_68[1] = 4;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar15 = PlayerData__APCMGOCHMGC(pEVar18,(MethodInfo *)0x0);
  if (iVar15 < 1) {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_93,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_94,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_95,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_96,(MethodInfo *)0x0);
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  }
  else {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_75,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_76,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pSVar11 = HLIDLFKDMHG__CJGIKJBCAII((MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    local_68[1] = 5;
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_77,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_78,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_68[0] = PlayerData__GNIBFOOLMHK(pEVar18,(MethodInfo *)0x0);
    pSVar11 = System_Int32__ToString((int32_t)local_68,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_79,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_80,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar11 = PlayerData__GKMAFGODLLG(pEVar18,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_81,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_82,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar11 = PlayerData__GGHGAIBPPJO(pEVar18,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_83,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_84,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_78 = PlayerData__APCMGOCHMGC(pEVar18,(MethodInfo *)0x0);
    pSVar11 = System_Int64__ToString((int64_t)&local_78,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_85,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_86,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_68[0] = PlayerData__IGIHHCEONEM(pEVar18,(MethodInfo *)0x0);
    pSVar11 = System_Int32__ToString((int32_t)local_68,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_87,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_88,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar11 = System_Int32__ToString((int)pEVar18 + 0x28,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    local_68[1] = 6;
    pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((pEVar18->fields).HONOOAELMFJ,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_89,(MethodInfo *)0x0)
      ;
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_90,(MethodInfo *)0x0)
      ;
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)(pEVar18->fields).HONOOAELMFJ,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_91,(MethodInfo *)0x0)
      ;
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_92,(MethodInfo *)0x0)
      ;
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      pEVar18 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar18 == (PlayerData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_90 = (pEVar18->fields).LPMFKCDDEIA;
      local_a0.klass = (System_Enum_c *)KCFAKHLDKJM_TypeInfo;
      local_a0.monitor = (void *)0xffffffffffffffff;
      pSVar11 = System_Enum__ToString(&local_a0,(MethodInfo *)0x0);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    }
  }
  local_68[1] = 7;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar3) {
    if (__this_00 == (Nekki_Utils_RaidBetaLogger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = Nekki_Utils_RaidBetaLogger__HasExceptions(__this_00,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_97,(MethodInfo *)0x0)
      ;
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_98,(MethodInfo *)0x0)
      ;
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      bVar3 = Nekki_Utils_RaidBetaLogger__HasExceptions(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_101,
                   (MethodInfo *)0x0);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_102,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      }
      else {
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_99,
                   (MethodInfo *)0x0);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_100,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      }
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      bVar3 = Nekki_Utils_RaidBetaLogger__HasHackExceptions(__this_00,(MethodInfo *)0x0);
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_103,(MethodInfo *)0x0
                );
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_104,(MethodInfo *)0x0
                );
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_107,
                   (MethodInfo *)0x0);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_108,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      }
      else {
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_105,
                   (MethodInfo *)0x0);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_106,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      }
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    }
    else {
      bVar3 = false;
    }
    local_68[1] = 8;
    bVar4 = PCOEHCPGBBG__BDLEIEHBFAD((__this_00->fields).LastSendDumpFileName,(MethodInfo *)0x0);
    bVar3 = bVar3 != false;
    if (!bVar4) {
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_109,(MethodInfo *)0x0
                );
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_110,(MethodInfo *)0x0
                );
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this,(Il2CppObject *)pSVar10,
                 (Il2CppObject *)(__this_00->fields).LastSendDumpFileName,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    }
  }
  else {
    bVar3 = false;
  }
  local_68[1] = 0x14;
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_111,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_112,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  local_90 = SecurityManager__EDIGBEDHJED((MethodInfo *)0x0);
  local_a0.klass = (System_Enum_c *)UnityEngine_ApplicationInstallMode_TypeInfo;
  local_a0.monitor = (void *)0xffffffffffffffff;
  pSVar11 = System_Enum__ToString(&local_a0,(MethodInfo *)0x0);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  local_68[1] = 0x1e;
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_113,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_114,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  pSVar11 = SecurityManager__NPJHCEDIIBA((MethodInfo *)0x0);
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  local_68[1] = 0x1f;
  pSVar10 = SecurityManager__CGFLLLNEFOE((MethodInfo *)0x0);
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar11 = BHEDGAKGKPO__BPHEBPIMCIL((MethodInfo *)0x0);
  bVar4 = System_String__op_Equality(pSVar10,pSVar11,(MethodInfo *)0x0);
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_115,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_116,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_119,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_120,(MethodInfo *)0x0);
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  }
  else {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_117,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_118,(MethodInfo *)0x0);
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  }
  System_Collections_Generic_Dictionary<object,_object>__Add
            (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar11,
             Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567a78 == '\0') {
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    DAT_04567a78 = '\x01';
  }
  if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = PCOEHCPGBBG__BDLEIEHBFAD
                    (OGHIOMKFPLH_TypeInfo->static_fields->_ADLDJLCDIMD_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar5) {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_121,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_122,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    local_a0.klass = (System_Enum_c *)CONCAT44(local_a0.klass._4_4_,1);
    pIVar13 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_a0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this,(Il2CppObject *)pSVar10,pIVar13,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_123,(MethodInfo *)0x0);
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_124,(MethodInfo *)0x0);
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    if (MMGMBAEEGGM == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_HashSet<object>__Add
              ((System_Collections_Generic_HashSet_object__o *)MMGMBAEEGGM,(Il2CppObject *)pSVar10,
               Method_System_Collections_Generic_HashSet<string>_Add__);
  }
  local_68[1] = 0x20;
  if ((!bVar1 && !bVar3) && (bVar4)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
      return (System_Collections_Generic_Dictionary_string__object__o *)__this;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar14 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar6 = Roster__EOEAKGGDBFH(pAVar14,(MethodInfo *)0x0);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar7 = GameUtils__DGJACOJNPBB((MethodInfo *)0x0);
    if (iVar6 <= iVar7) {
      return (System_Collections_Generic_Dictionary_string__object__o *)__this;
    }
  }
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_125,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_126,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  if (MMGMBAEEGGM != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              ((System_Collections_Generic_HashSet_object__o *)MMGMBAEEGGM,(Il2CppObject *)pSVar10,
               Method_System_Collections_Generic_HashSet<string>_Add__);
    return (System_Collections_Generic_Dictionary_string__object__o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static HelpshiftSdk LPAFHHGAJAH()  [RVA 0x33582C4]
// PFDCJGIIPLB$$LPAFHHGAJAH @ RVA 0x33582C4

Helpshift_HelpshiftSdk_o * PFDCJGIIPLB__LPAFHHGAJAH(MethodInfo *method)

{
  Helpshift_HelpshiftSdk_o *pHVar1;
  Helpshift_HelpshiftSdk_o **ppHVar2;
  System_String_o *appId;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_string__object__o *config;
  Il2CppObject *pIVar3;
  System_Action_Action_string___o **ppSVar4;
  System_IObservable_T__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_Action_PCJHNLGCCOB___o **ppSVar7;
  System_Action_PCJHNLGCCOB__o **ppSVar8;
  System_Action_Action_string___o *addHandler;
  System_Action_Action_PCJHNLGCCOB___o *addHandler_00;
  System_Action_Action_string___o *removeHandler;
  System_Action_string__o *onNext;
  System_Action_Action_PCJHNLGCCOB___o *removeHandler_00;
  System_Action_PCJHNLGCCOB__o *onNext_00;
  
  if ((DAT_04567a47 & 1) == 0) {
                    /* try { // try from 034582e8 to 0355837b has its CatchHandler @ 034582e8
                       catch() { ... } // from try @ 034582e8 with catch @ 034582e8
                       catch() { ... } // from try @ 034583bc with catch @ 034582e8
                       catch() { ... } // from try @ 034583f0 with catch @ 034582e8
                       catch() { ... } // from try @ 0345841c with catch @ 034582e8
                       catch() { ... } // from try @ 0345845c with catch @ 034582e8 */
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&PFDCJGIIPLB_HDIIAOLIPHF_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<PCJHNLGCCOB>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<PCJHNLGCCOB>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
                    /* try { // try from 0345837c to 03558383 has its CatchHandler @ 03458400 */
    FUN_01bab630(&Method_PFDCJGIIPLB_<>c_BAEDFPFIKBA__);
    FUN_01bab630(&Method_PFDCJGIIPLB_<>c_GJHDPFEFPMJ__);
    FUN_01bab630(&Method_PFDCJGIIPLB_<>c_GMIFIOCJBMJ__);
                    /* try { // try from 034583a0 to 035583ab has its CatchHandler @ 034583f4 */
    FUN_01bab630(&Method_PFDCJGIIPLB_<>c_IJMMGCKBGMK__);
                    /* try { // try from 034583b0 to 035583bb has its CatchHandler @ 034583f8 */
    FUN_01bab630(&Method_PFDCJGIIPLB_<>c_NMOPOCPOLGO__);
                    /* try { // try from 034583bc to 035583eb has its CatchHandler @ 034582e8 */
    FUN_01bab630(&Method_PFDCJGIIPLB_<>c_PJCKNPMGMCB__);
    FUN_01bab630(&PFDCJGIIPLB_<>c_TypeInfo);
    DAT_04567a47 = 1;
  }
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034583ec to 035583ef has its CatchHandler @ 034583fc */
                    /* try { // try from 034583f0 to 03558417 has its CatchHandler @ 034582e8 */
  if (PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK == (Helpshift_HelpshiftSdk_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034583a0 with catch @ 034583f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034583b0 with catch @ 034583f8
                        */
    pHVar1 = Helpshift_HelpshiftSdk__GetInstance((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034583ec with catch @ 034583fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345837c with catch @ 03458400
                        */
    if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo);
    }
                    /* try { // try from 03458418 to 0355841b has its CatchHandler @ 03458444 */
    ppHVar2 = &PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK;
                    /* try { // try from 0345841c to 03558453 has its CatchHandler @ 034582e8 */
    *ppHVar2 = pHVar1;
    thunk_FUN_01c20e04(ppHVar2,pHVar1);
    pHVar1 = PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK;
    appId = BHEDGAKGKPO_IKCDDEFHICC__NFNJKDNLING((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03458418 with catch @ 03458444 */
    method_00 = (MethodInfo *)BHEDGAKGKPO_IKCDDEFHICC__JNEEINLNNKK((MethodInfo *)0x0);
    config = PFDCJGIIPLB__IGPLEOEHKKG(method_00);
    if (pHVar1 != (Helpshift_HelpshiftSdk_o *)0x0) {
                    /* try { // try from 03458454 to 0355845b has its CatchHandler @ 03458470 */
                    /* try { // try from 0345845c to 03558467 has its CatchHandler @ 034582e8 */
                    /* try { // try from 03458468 to 0355846f has its CatchHandler @ 03458470 */
      Helpshift_HelpshiftSdk__Install
                (pHVar1,appId,(System_String_o *)method_00,config,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03458454 with catch @ 03458470
                       catch(type#2 @ 00000000) { ... } // from try @ 03458468 with catch @ 03458470
                        */
                    /* try { // try from 03458474 to 03558553 has its CatchHandler @ 03458474
                       catch() { ... } // from try @ 03458474 with catch @ 03458474
                       catch() { ... } // from try @ 034585d4 with catch @ 03458474
                       catch() { ... } // from try @ 03458790 with catch @ 03458474
                       catch() { ... } // from try @ 03458798 with catch @ 03458474
                       catch() { ... } // from try @ 034587c8 with catch @ 03458474
                       catch() { ... } // from try @ 034587fc with catch @ 03458474 */
      pHVar1 = PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(PFDCJGIIPLB_HDIIAOLIPHF_TypeInfo);
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      if (pHVar1 != (Helpshift_HelpshiftSdk_o *)0x0) {
        Helpshift_HelpshiftSdk__SetHelpshiftEventsListener
                  (pHVar1,(Helpshift_IHelpshiftEventsListener_o *)pIVar3,(MethodInfo *)0x0);
        if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_0;
        if (addHandler == (System_Action_Action_string___o *)0x0) {
          if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Action_string___o *)
                       thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_0;
          *ppSVar4 = addHandler;
          thunk_FUN_01c20e04(ppSVar4,addHandler);
        }
        if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_1;
        if (removeHandler == (System_Action_Action_string___o *)0x0) {
          if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
                    /* try { // try from 03458554 to 0355855b has its CatchHandler @ 034587b4 */
          }
          removeHandler =
               (System_Action_Action_string___o *)
               thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
                    /* try { // try from 03458570 to 03558577 has its CatchHandler @ 034587ac */
                    /* try { // try from 03458578 to 03558583 has its CatchHandler @ 034587b0 */
          System_Action<object>___ctor();
          ppSVar4 = &PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_1;
          *ppSVar4 = removeHandler;
          thunk_FUN_01c20e04(ppSVar4,removeHandler);
        }
                    /* try { // try from 034585ac to 035585af has its CatchHandler @ 034587a0 */
                    /* try { // try from 034585b0 to 035585bf has its CatchHandler @ 034587a8 */
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034585c8 to 035585d3 has its CatchHandler @ 0345879c */
        pSVar5 = UniRx_Observable__FromEvent<object>
                           ((System_Action_Action_T___o *)addHandler,
                            (System_Action_Action_T___o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<string>__);
                    /* try { // try from 034585d4 to 0355878b has its CatchHandler @ 03458474 */
        if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(PFDCJGIIPLB_<>c_TypeInfo);
        }
        onNext = PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_2;
        if (onNext == (System_Action_string__o *)0x0) {
          if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(PFDCJGIIPLB_<>c_TypeInfo);
          }
          onNext = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar6 = &PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_2;
          *ppSVar6 = onNext;
          thunk_FUN_01c20e04(ppSVar6,onNext);
        }
        pIVar3 = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<object>
                           (pSVar5,(System_Action_T__o *)onNext,
                            Method_UniRx_ObservableExtensions_Subscribe<string>__);
        if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo);
        }
        UniRx_DisposableExtensions__AddTo<object>
                  (pIVar3,(System_Collections_Generic_ICollection_IDisposable__o *)
                          PFDCJGIIPLB_TypeInfo->static_fields->BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler_00 = PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_3;
        if (addHandler_00 == (System_Action_Action_PCJHNLGCCOB___o *)0x0) {
          if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler_00 =
               (System_Action_Action_PCJHNLGCCOB___o *)
               thunk_FUN_01bda818(System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar7 = &PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_3;
          *ppSVar7 = addHandler_00;
          thunk_FUN_01c20e04(ppSVar7,addHandler_00);
        }
        if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler_00 = PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_4;
        if (removeHandler_00 == (System_Action_Action_PCJHNLGCCOB___o *)0x0) {
          if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler_00 =
               (System_Action_Action_PCJHNLGCCOB___o *)
               thunk_FUN_01bda818(System_Action<Action<PCJHNLGCCOB>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar7 = &PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_4;
                    /* try { // try from 0345878c to 0355878f has its CatchHandler @ 034587a4 */
          *ppSVar7 = removeHandler_00;
                    /* try { // try from 03458790 to 03558793 has its CatchHandler @ 03458474 */
          thunk_FUN_01c20e04(ppSVar7,removeHandler_00);
        }
                    /* try { // try from 03458794 to 03558797 has its CatchHandler @ 03458798 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03458794 with catch @ 03458798
                       try { // try from 03458798 to 035587c3 has its CatchHandler @ 03458474 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034585c8 with catch @ 0345879c
                        */
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034585ac with catch @ 034587a0
                        */
          thunk_FUN_01ba7564();
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345878c with catch @ 034587a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034585b0 with catch @ 034587a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03458570 with catch @ 034587ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03458578 with catch @ 034587b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03458554 with catch @ 034587b4
                        */
        pSVar5 = UniRx_Observable__FromEvent<PCJHNLGCCOB>
                           ((System_Action_Action_T___o *)addHandler_00,
                            (System_Action_Action_T___o *)removeHandler_00,
                            Method_UniRx_Observable_FromEvent<PCJHNLGCCOB>__);
                    /* try { // try from 034587c4 to 035587c7 has its CatchHandler @ 034587ec */
                    /* try { // try from 034587c8 to 035587f3 has its CatchHandler @ 03458474 */
        if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(PFDCJGIIPLB_<>c_TypeInfo);
        }
        onNext_00 = PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_5;
        if (onNext_00 == (System_Action_PCJHNLGCCOB__o *)0x0) {
          if ((PFDCJGIIPLB_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034587c4 with catch @ 034587ec */
            thunk_FUN_01ba7564(PFDCJGIIPLB_<>c_TypeInfo);
                    /* try { // try from 034587f4 to 035587fb has its CatchHandler @ 03458810 */
          }
                    /* try { // try from 034587fc to 03558807 has its CatchHandler @ 03458474 */
                    /* try { // try from 03458808 to 0355880f has its CatchHandler @ 03458810 */
          onNext_00 = (System_Action_PCJHNLGCCOB__o *)
                      thunk_FUN_01bda818(System_Action<PCJHNLGCCOB>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034587f4 with catch @ 03458810
                       catch(type#2 @ 00000000) { ... } // from try @ 03458808 with catch @ 03458810
                        */
          System_Action<PCJHNLGCCOB>___ctor();
          ppSVar8 = &PFDCJGIIPLB_<>c_TypeInfo->static_fields->__9__6_5;
          *ppSVar8 = onNext_00;
          thunk_FUN_01c20e04(ppSVar8,onNext_00);
        }
        pIVar3 = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<PCJHNLGCCOB>
                           (pSVar5,(System_Action_T__o *)onNext_00,
                            Method_UniRx_ObservableExtensions_Subscribe<PCJHNLGCCOB>__);
        if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo);
        }
        UniRx_DisposableExtensions__AddTo<object>
                  (pIVar3,(System_Collections_Generic_ICollection_IDisposable__o *)
                          PFDCJGIIPLB_TypeInfo->static_fields->BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        goto LAB_0345888c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0345888c:
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK;
}


// ===== public static void BKGENOHNNKM(ICollection<string> NDIDKEDHJBE)  [RVA 0x33588C4]
// PFDCJGIIPLB$$BKGENOHNNKM @ RVA 0x33588C4

void PFDCJGIIPLB__BKGENOHNNKM
               (System_Collections_Generic_ICollection_string__o *NDIDKEDHJBE,MethodInfo *method)

{
  PFDCJGIIPLB_c *method_00;
  Helpshift_HelpshiftSdk_o *__this;
  System_Collections_Generic_Dictionary_string__object__o *configMap;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  if ((DAT_04567a48 & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a48 = 1;
    method = extraout_x1;
  }
  method_00 = PFDCJGIIPLB_TypeInfo;
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PFDCJGIIPLB_c *)thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo,method);
  }
  __this = PFDCJGIIPLB__LPAFHHGAJAH((MethodInfo *)method_00);
  configMap = PFDCJGIIPLB__BIOIDDEPGPC(NDIDKEDHJBE,method_01);
  if (__this != (Helpshift_HelpshiftSdk_o *)0x0) {
    Helpshift_HelpshiftSdk__ShowFAQs(__this,configMap,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

