// TypeDefIndex 830
// Namespace: 
// public class IKLJMCMIMJF : IEJKLPPLHMO
// Fields:

// ===== public void .ctor()  [RVA 0x307D7A8]
// IKLJMCMIMJF$$.ctor @ RVA 0x307D7A8

void IKLJMCMIMJF___ctor(IKLJMCMIMJF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x307D7B0]
// IKLJMCMIMJF$$ECKDICODLME @ RVA 0x307D7B0

bool IKLJMCMIMJF__ECKDICODLME(IKLJMCMIMJF_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x307D7B8]
// IKLJMCMIMJF$$DLKKPFHKIPB @ RVA 0x307D7B8

System_Collections_Generic_IEnumerable_string__o *
IKLJMCMIMJF__DLKKPFHKIPB(IKLJMCMIMJF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04565fea & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5244);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5245);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565fea = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5244,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5245,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x307D928]
// IKLJMCMIMJF$$KCBILPIAPHN @ RVA 0x307D928

int32_t IKLJMCMIMJF__KCBILPIAPHN(IKLJMCMIMJF_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x307D930]
// IKLJMCMIMJF$$IGMDDJFPIJL @ RVA 0x307D930

System_String_o * IKLJMCMIMJF__IGMDDJFPIJL(IKLJMCMIMJF_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_IKDJCPOJFNM__bool__o **ppSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *str2;
  System_Func_IKDJCPOJFNM__bool__o *predicate;
  
  if ((DAT_04565feb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy1600___field_0);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5246);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5247);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5248);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5249);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5250);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<IKDJCPOJFNM>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<IKDJCPOJFNM>__);
    FUN_01bab630(&System_Func<IKDJCPOJFNM,_bool>_TypeInfo);
    FUN_01bab630(&IKDJCPOJFNM_var);
    FUN_01bab630(&Method_System_String_Join<IKDJCPOJFNM>__);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&Method_IKLJMCMIMJF_<>c_HKKHFCHCMGL__);
    FUN_01bab630(&IKLJMCMIMJF_<>c_TypeInfo);
    DAT_04565feb = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5246,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x640);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy1600___field_0,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5247,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5248,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  handle = IKDJCPOJFNM_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast<Int32Enum>
                        (source,Method_System_Linq_Enumerable_Cast<IKDJCPOJFNM>__);
  if ((IKLJMCMIMJF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IKLJMCMIMJF_<>c_TypeInfo);
  }
  predicate = IKLJMCMIMJF_<>c_TypeInfo->static_fields->__9__3_0;
  if (predicate == (System_Func_IKDJCPOJFNM__bool__o *)0x0) {
    if ((IKLJMCMIMJF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IKLJMCMIMJF_<>c_TypeInfo);
    }
    predicate = (System_Func_IKDJCPOJFNM__bool__o *)
                thunk_FUN_01bda818(System_Func<IKDJCPOJFNM,_bool>_TypeInfo);
    System_Func<Int32Enum,_bool>___ctor();
    ppSVar5 = &IKLJMCMIMJF_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar5 = predicate;
    thunk_FUN_01c20e04(ppSVar5,predicate);
  }
  values = System_Linq_Enumerable__Where<Int32Enum>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_Where<IKDJCPOJFNM>__);
  pSVar4 = System_String__Join<Int32Enum>
                     (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)values,
                      Method_System_String_Join<IKDJCPOJFNM>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5249,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5250,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,pSVar4,str2,(MethodInfo *)0x0);
  return pSVar3;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x307DC98]
// IKLJMCMIMJF$$AJJLBBCJAAL @ RVA 0x307DC98

/* WARNING: Removing unreachable block (ram,0x03180220) */
/* WARNING: Removing unreachable block (ram,0x0317ffcc) */
/* WARNING: Removing unreachable block (ram,0x031802a8) */
/* WARNING: Removing unreachable block (ram,0x03180338) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Exceeded maximum restarts with more pending */

System_String_o *
IKLJMCMIMJF__AJJLBBCJAAL(IKLJMCMIMJF_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  uint32_t uVar7;
  CFEJGBOOCOG_o *pCVar8;
  Il2CppMethodPointer *ppIVar9;
  DGGBFKNKEAH_o *__this_00;
  System_Byte_array *pSVar10;
  System_Byte_array *pSVar11;
  System_String_o *pSVar12;
  System_Text_StringBuilder_o *__this_01;
  Item_o *__this_02;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  NDPMLPGANCI_o *__this_03;
  FFHKCJAOPLI_o *__this_04;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  UnityEngine_Purchasing_ProductDefinition_o *IPIHMPBGACB;
  CFEJGBOOCOG_c *pCVar16;
  System_RuntimeFieldHandle_Fields *pSVar17;
  HEEEDKBOAKM_o *pHVar18;
  System_Collections_Generic_List_CFEFALDOEMD__c *pSVar19;
  long lVar20;
  ulong uVar21;
  int32_t *piVar22;
  int *piVar23;
  UnityEngine_Object_o *x;
  Roster_o *pAVar24;
  System_Collections_Generic_List_CFEFALDOEMD__o *pSVar25;
  System_String_o *pSVar26;
  long lVar27;
  long lVar28;
  byte local_48 [4];
  uint local_44;
  
  if ((DAT_04565fec & 1) == 0) {
    FUN_01bab630(&Roster_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5251);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5252);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5253);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5254);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5255);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5256);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5257);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5258);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5259);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5260);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5261);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5262);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5263);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5264);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5265);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5266);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5267);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5268);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5269);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5270);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5271);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5272);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5273);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5274);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5275);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5276);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5277);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5278);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5279);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5280);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5281);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5282);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5283);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5284);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5285);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5286);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5287);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5288);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5289);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5290);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5291);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5292);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5293);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5294);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5295);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5296);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5297);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5298);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5299);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5300);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5301);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5302);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5303);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5304);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5305);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5306);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5307);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5308);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5309);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5310);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5311);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5312);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5313);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5314);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5315);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5316);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5317);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5318);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5319);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5320);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5321);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5322);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5323);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5324);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5325);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5326);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5327);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5328);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5329);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5330);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5331);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5332);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5333);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5334);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5335);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5336);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5337);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5338);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5339);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5340);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5341);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5342);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5343);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5344);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5345);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5346);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<ProductDefinition>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ProductDefinition>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&PAEBDCANBPE_MKEGCFCOFEL_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&NGOCJKKMHGC_PGGDNGHGGLL_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565fec = 1;
  }
  local_44 = 0;
  local_48[0] = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_03180280;
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar26 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar26;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar8 = IFAMAAGNCBJ__OBKGLDJEIDN((MethodInfo *)0x0);
  if (pCVar8 == (CFEJGBOOCOG_o *)0x0) goto LAB_03180280;
  pCVar16 = pCVar8->klass;
  uVar2._0_1_ = (pCVar16->_2).rank;
  uVar2._1_1_ = (pCVar16->_2).minimumAlignment;
  uVar21 = (ulong)uVar2;
  if (uVar21 != 0) {
    piVar22 = &((pCVar16->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
          (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
        ppIVar9 = &pCVar16->vtable[*piVar22 + 1].methodPtr;
        goto LAB_0317e2dc;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  ppIVar9 = (Il2CppMethodPointer *)FUN_01b81914(pCVar8,CFEJGBOOCOG_TypeInfo,1);
LAB_0317e2dc:
  __this_00 = (DGGBFKNKEAH_o *)(**ppIVar9)(pCVar8,(MethodInfo *)ppIVar9[1]);
  if ((int)OPAEPDIIOEB->max_length == 0) goto LAB_03180328;
  pSVar26 = OPAEPDIIOEB->m_Items[0];
  uVar7 = <PrivateImplementationDetails>__ComputeStringHash(pSVar26,(MethodInfo *)0x0);
  if (0x63560e68 < uVar7) {
    if (0xc3faf2ef < uVar7) {
      if (uVar7 < 0xdcd3a7d2) {
        if (uVar7 == 0xd102bbac) {
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5273,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar11,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5274,
                     (MethodInfo *)0x0);
          pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
          bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
          if (bVar6) {
            __this_01 = (System_Text_StringBuilder_o *)
                        thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
            System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
            if ((Roster_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pHVar18 = Roster_TypeInfo->static_fields->HAEGJFPKIAD;
            if (pHVar18 != (HEEEDKBOAKM_o *)0x0) {
              pSVar25 = (pHVar18->fields).super.GPEBKHNMFIB;
              pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar10,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5331,
                         (MethodInfo *)0x0);
              pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar11,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5332,
                         (MethodInfo *)0x0);
              pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
              if ((__this_01 != (System_Text_StringBuilder_o *)0x0) &&
                 (System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0),
                 pSVar25 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0)) {
                pSVar19 = pSVar25->klass;
                uVar4._0_1_ = (pSVar19->_2).rank;
                uVar4._1_1_ = (pSVar19->_2).minimumAlignment;
                uVar21 = (ulong)uVar4;
                if (uVar21 != 0) {
                  piVar22 = &((pSVar19->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                        (Il2CppClass *)System_Collections_Generic_IEnumerable<CFEFALDOEMD>_TypeInfo)
                    {
                      ppIVar9 = &(&(pSVar19->vtable)._0_Equals)[*piVar22].methodPtr;
                      goto LAB_0317f984;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                ppIVar9 = (Il2CppMethodPointer *)
                          FUN_01b81914(pSVar25,
                                       System_Collections_Generic_IEnumerable<CFEFALDOEMD>_TypeInfo,
                                       0);
LAB_0317f984:
                plVar14 = (long *)(**ppIVar9)(pSVar25,(MethodInfo *)ppIVar9[1]);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                do {
                  lVar20 = *plVar14;
                  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar21 != 0) {
                    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar23 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_0317f9f4;
                      }
                      uVar21 = uVar21 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar15 = (undefined8 *)
                            FUN_01b81914(plVar14,System_Collections_IEnumerator_TypeInfo,0);
LAB_0317f9f4:
                  uVar21 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                  if ((uVar21 & 1) == 0) {
                    if (plVar14 == (long *)0x0) goto LAB_0317ffc0;
                    lVar20 = *plVar14;
                    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
                    if (uVar21 == 0) goto LAB_0317fac4;
                    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    goto LAB_0317faac;
                  }
                  lVar20 = *plVar14;
                  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar21 != 0) {
                    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_Generic_IEnumerator_CFEFALDOEMD__c **)(piVar23 + -2)
                          == System_Collections_Generic_IEnumerator<CFEFALDOEMD>_TypeInfo) {
                        puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_0317fa50;
                      }
                      uVar21 = uVar21 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar21 != 0);
                  }
                  puVar15 = (undefined8 *)
                            FUN_01b81914(plVar14,
                                         System_Collections_Generic_IEnumerator<CFEFALDOEMD>_TypeInfo
                                         ,0);
LAB_0317fa50:
                  plVar13 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar26 = (System_String_o *)
                            (**(code **)(*plVar13 + 0x168))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                  System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
                } while( true );
              }
            }
            goto LAB_03180280;
          }
        }
        else if (uVar7 == 0xdcd3a7d1) {
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5253,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar11,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5254,
                     (MethodInfo *)0x0);
          pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
          bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
          if (bVar6) {
            if (__this_00 != (DGGBFKNKEAH_o *)0x0) {
              (*(__this_00->klass->vtable)._23_unknown.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._23_unknown.method);
              pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar10,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5289,
                         (MethodInfo *)0x0);
              pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              pSVar17 = (System_RuntimeFieldHandle_Fields *)
                        &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5290;
              goto LAB_0317fdac;
            }
            goto LAB_03180280;
          }
        }
      }
      else if (uVar7 == 0xe4ce2924) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5265,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5266,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
        if (bVar6) {
          if ((int)OPAEPDIIOEB->max_length < 2) {
            bVar6 = false;
          }
          else {
            pSVar12 = OPAEPDIIOEB->m_Items[1];
            pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar10,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5301,
                       (MethodInfo *)0x0);
            pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar11,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5302,
                       (MethodInfo *)0x0);
            pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
            bVar6 = System_String__op_Equality(pSVar12,pSVar26,(MethodInfo *)0x0);
            if (bVar6) {
              bVar6 = true;
            }
            else {
              if ((uint)OPAEPDIIOEB->max_length < 2) goto LAB_03180328;
              pSVar12 = OPAEPDIIOEB->m_Items[1];
              pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar10,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5303,
                         (MethodInfo *)0x0);
              pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar11,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5304,
                         (MethodInfo *)0x0);
              pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
              bVar6 = System_String__op_Equality(pSVar12,pSVar26,(MethodInfo *)0x0);
            }
          }
          if ((PAEBDCANBPE_MKEGCFCOFEL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565ff2 == '\0') {
            FUN_01bab630(&PAEBDCANBPE_MKEGCFCOFEL_TypeInfo);
            DAT_04565ff2 = '\x01';
          }
          if ((PAEBDCANBPE_MKEGCFCOFEL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          PAEBDCANBPE_MKEGCFCOFEL_TypeInfo->static_fields->_ILHGDFFOGHP_k__BackingField = bVar6;
          if (bVar6 != false) {
            KMFFBHPKMLE__AMBIODJLALE((MethodInfo *)0x0);
          }
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5305,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar17 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5306;
          goto LAB_0317fdac;
        }
      }
      else if (uVar7 == 0xeae6b243) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5257,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5258,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
        if (bVar6) {
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5293,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar17 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5294;
          goto LAB_0317fdac;
        }
      }
      goto LAB_0317f414;
    }
    if (uVar7 < 0x95d58f63) {
      if (uVar7 == 0x8f673ba2) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5263,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5264,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
        if (bVar6) {
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5299,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar17 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5300;
          goto LAB_0317fdac;
        }
      }
      else if (uVar7 == 0x95d58f62) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5275,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5276,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
        if (bVar6) {
          if ((int)OPAEPDIIOEB->max_length < 2) {
            pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar10,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5337,
                       (MethodInfo *)0x0);
            pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar17 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5338;
            goto LAB_0317fdac;
          }
          local_44 = 0;
          System_Int32__TryParse(OPAEPDIIOEB->m_Items[1],(int32_t *)&local_44,(MethodInfo *)0x0);
          if (__this_00 == (DGGBFKNKEAH_o *)0x0) goto LAB_03180280;
          lVar20 = (*(__this_00->klass->vtable)._10_NMGFAJBFPNI.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._10_NMGFAJBFPNI.method);
          if (-1 < (int)local_44) {
            if (lVar20 == 0) goto LAB_03180280;
            if ((int)local_44 < (int)*(uint *)(lVar20 + 0x18)) {
              if (*(uint *)(lVar20 + 0x18) <= local_44) {
LAB_03180328:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              lVar28 = *(long *)(lVar20 + (ulong)local_44 * 8 + 0x20);
              if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x10), lVar28 != 0)) {
                (*(__this_00->klass->vtable)._13_GCEEJCFAMBP.methodPtr)
                          (__this_00,*(undefined8 *)(lVar28 + 0x10),
                           (__this_00->klass->vtable)._13_GCEEJCFAMBP.method);
                pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar10,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5341,
                           (MethodInfo *)0x0);
                pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar11,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5342,
                           (MethodInfo *)0x0);
                pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
                if (*(uint *)(lVar20 + 0x18) <= local_44) goto LAB_03180328;
                lVar20 = *(long *)(lVar20 + (long)(int)local_44 * 8 + 0x20);
                if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x10), lVar20 != 0)) {
                  pSVar26 = System_String__Concat
                                      (pSVar26,*(System_String_o **)(lVar20 + 0x10),
                                       (MethodInfo *)0x0);
                  return pSVar26;
                }
              }
              goto LAB_03180280;
            }
          }
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5339,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar17 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5340;
          goto LAB_0317fdac;
        }
      }
    }
    else if (uVar7 == 0xa847e0a9) {
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5279,
                 (MethodInfo *)0x0);
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5280,
                 (MethodInfo *)0x0);
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
      if (bVar6) {
        lVar20 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_01b81620();
        }
        lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x10);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_01b81620();
        }
        x = (UnityEngine_Object_o *)**(undefined8 **)(lVar20 + 0xb8);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          lVar20 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_01b81620();
          }
          lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar20 + 0xb8) ==
              (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_03180280;
          Nekki_SF2_GUI_Shop_ShopScene__GoToSlider
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar20 + 0xb8),6,true,
                     (MethodInfo *)0x0);
        }
        else {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04563eaa = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (__this_02 == (Item_o *)0x0) goto LAB_03180280;
          IKKAMAMLIKA = Item__GOLEKCCFDAH(__this_02,(MethodInfo *)0x0);
          __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          __this_04 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
          FFHKCJAOPLI___ctor(__this_04,6,IKKAMAMLIKA,(System_String_o *)0x0,(System_String_o *)0x0,
                             (MethodInfo *)0x0);
          if (__this_03 == (NDPMLPGANCI_o *)0x0) goto LAB_03180280;
          NDPMLPGANCI__EKPAFDJIAGI
                    (__this_03,4,(Il2CppObject *)__this_04,(System_Action_object__o *)0x0,true,
                     (MethodInfo *)0x0);
        }
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5345,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar17 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5346;
        goto LAB_0317fdac;
      }
    }
    else if (uVar7 == 0xc3faf2ef) {
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5259,
                 (MethodInfo *)0x0);
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5260,
                 (MethodInfo *)0x0);
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
      if (bVar6) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5295,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar17 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5296;
        goto LAB_0317fdac;
      }
    }
LAB_0317f414:
    pSVar26 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar26;
  }
  if (0x4b3c918e < uVar7) {
    if (uVar7 < 0x504e588b) {
      if (uVar7 == 0x4fbee88d) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5255,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5256,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
        lVar20 = Method_System_Array_Empty<string>__;
        if (bVar6) {
          lVar28 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar28 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar28 = *(long *)(lVar20 + 0x38);
          }
          lVar28 = *(long *)(lVar28 + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            lVar28 = FUN_01b81620();
          }
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
          if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
            lVar20 = FUN_01b81620();
          }
          if (__this_00 == (DGGBFKNKEAH_o *)0x0) goto LAB_03180280;
          (*(__this_00->klass->vtable)._24_PKKPKMLIOLO.methodPtr)
                    (__this_00,**(undefined8 **)(lVar20 + 0xb8),
                     (__this_00->klass->vtable)._24_PKKPKMLIOLO.method);
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5291,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar17 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5292;
LAB_0317fdac:
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar11,(System_RuntimeFieldHandle_o)pSVar17->value,
                     (MethodInfo *)0x0);
          pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
          return pSVar26;
        }
      }
      else if (uVar7 == 0x504e588a) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5267,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5268,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
        if (bVar6) {
          if ((int)OPAEPDIIOEB->max_length < 2) {
            bVar6 = false;
          }
          else {
            pSVar12 = OPAEPDIIOEB->m_Items[1];
            pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar10,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5307,
                       (MethodInfo *)0x0);
            pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar11,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5308,
                       (MethodInfo *)0x0);
            pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
            bVar6 = System_String__op_Equality(pSVar12,pSVar26,(MethodInfo *)0x0);
            if (bVar6) {
              bVar6 = true;
            }
            else {
              if ((uint)OPAEPDIIOEB->max_length < 2) goto LAB_03180328;
              pSVar12 = OPAEPDIIOEB->m_Items[1];
              pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar10,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5309,
                         (MethodInfo *)0x0);
              pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar11,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5310,
                         (MethodInfo *)0x0);
              pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
              bVar6 = System_String__op_Equality(pSVar12,pSVar26,(MethodInfo *)0x0);
            }
          }
          if ((NGOCJKKMHGC_PGGDNGHGGLL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565ff3 == '\0') {
            FUN_01bab630(&NGOCJKKMHGC_PGGDNGHGGLL_TypeInfo);
            DAT_04565ff3 = '\x01';
          }
          if ((NGOCJKKMHGC_PGGDNGHGGLL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          NGOCJKKMHGC_PGGDNGHGGLL_TypeInfo->static_fields->_ILHGDFFOGHP_k__BackingField = bVar6;
          if (bVar6 != false) {
            KMFFBHPKMLE__OICGFNNLCOF((MethodInfo *)0x0);
          }
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5311,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar17 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5312;
          goto LAB_0317fdac;
        }
      }
    }
    else if (uVar7 == 0x56661f55) {
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5251,
                 (MethodInfo *)0x0);
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5252,
                 (MethodInfo *)0x0);
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
      if (bVar6) {
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
        pAVar24 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5281,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5282,
                   (MethodInfo *)0x0);
        pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        if (pAVar24 != (Roster_o *)0x0) {
          Roster__GCBKEAIBFLO(pAVar24,pSVar26,true,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar24 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar10,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5283,
                     (MethodInfo *)0x0);
          pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar11,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5284,
                     (MethodInfo *)0x0);
          pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
          if (pAVar24 != (Roster_o *)0x0) {
            Roster__GCBKEAIBFLO(pAVar24,pSVar26,true,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar24 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar10,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5285,
                       (MethodInfo *)0x0);
            pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar11,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5286,
                       (MethodInfo *)0x0);
            pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
            if (pAVar24 != (Roster_o *)0x0) {
              Roster__GCBKEAIBFLO(pAVar24,pSVar26,true,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar24 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar24 != (Roster_o *)0x0) {
                CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar24,false,(MethodInfo *)0x0);
                pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar10,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5287,
                           (MethodInfo *)0x0);
                pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                pSVar17 = (System_RuntimeFieldHandle_Fields *)
                          &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5288;
                goto LAB_0317fdac;
              }
            }
          }
        }
        goto LAB_03180280;
      }
    }
    else if (uVar7 == 0x63560e68) {
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5269,
                 (MethodInfo *)0x0);
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5270,
                 (MethodInfo *)0x0);
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
      if (bVar6) {
        KMFFBHPKMLE__JGCCNBBJAHG((MethodInfo *)0x0);
        KMFFBHPKMLE__OICGFNNLCOF((MethodInfo *)0x0);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5313,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar17 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5314;
        goto LAB_0317fdac;
      }
    }
    goto LAB_0317f414;
  }
  if (uVar7 == 0x109731b2) {
    pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar10,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5277,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5278,(MethodInfo *)0x0)
    ;
    pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
    bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5343,
                 (MethodInfo *)0x0);
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar17 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5344;
      goto LAB_0317fdac;
    }
    goto LAB_0317f414;
  }
  if (uVar7 != 0x3f515151) {
    if (uVar7 == 0x4b3c918e) {
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5261,
                 (MethodInfo *)0x0);
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5262,
                 (MethodInfo *)0x0);
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
      bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
      if (bVar6) {
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5297,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar17 = (System_RuntimeFieldHandle_Fields *)
                  &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5298;
        goto LAB_0317fdac;
      }
    }
    goto LAB_0317f414;
  }
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5271,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar11,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5272,(MethodInfo *)0x0);
  pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
  bVar6 = System_String__op_Equality(pSVar26,pSVar12,(MethodInfo *)0x0);
  if (!bVar6) goto LAB_0317f414;
  if (__this_00 == (DGGBFKNKEAH_o *)0x0) goto LAB_03180280;
  uVar21 = (*(__this_00->klass->vtable)._21_HKLIPCEAINH.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._21_HKLIPCEAINH.method);
  if ((uVar21 & 1) != 0) {
    pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar10,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5315,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5316,(MethodInfo *)0x0)
    ;
    pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
    __this_01 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_01,pSVar26,(MethodInfo *)0x0);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar8 = IFAMAAGNCBJ__OBKGLDJEIDN((MethodInfo *)0x0);
    if (pCVar8 != (CFEJGBOOCOG_o *)0x0) {
      pCVar16 = pCVar8->klass;
      uVar3._0_1_ = (pCVar16->_2).rank;
      uVar3._1_1_ = (pCVar16->_2).minimumAlignment;
      uVar21 = (ulong)uVar3;
      if (uVar21 != 0) {
        piVar22 = &((pCVar16->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
            ppIVar9 = &pCVar16->vtable[*piVar22 + 2].methodPtr;
            goto LAB_0317fdf4;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      ppIVar9 = (Il2CppMethodPointer *)FUN_01b81914(pCVar8,CFEJGBOOCOG_TypeInfo,2);
LAB_0317fdf4:
      plVar14 = (long *)(**ppIVar9)(pCVar8,(MethodInfo *)ppIVar9[1]);
      if (plVar14 != (long *)0x0) {
        lVar20 = *plVar14;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerable_ProductDefinition__c **)(piVar23 + -2) ==
                System_Collections_Generic_IEnumerable<ProductDefinition>_TypeInfo) {
              puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_0317fe5c;
            }
            uVar21 = uVar21 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_01b81914(plVar14,
                               System_Collections_Generic_IEnumerable<ProductDefinition>_TypeInfo,0)
        ;
LAB_0317fe5c:
        plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar20 = *plVar14;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar23 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_0317fecc;
              }
              uVar21 = uVar21 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar21 != 0);
          }
          puVar15 = (undefined8 *)FUN_01b81914(plVar14,System_Collections_IEnumerator_TypeInfo,0);
LAB_0317fecc:
          uVar21 = (*(code *)*puVar15)(plVar14,puVar15[1]);
          if ((uVar21 & 1) == 0) {
            if (plVar14 == (long *)0x0) goto LAB_03180214;
            lVar20 = *plVar14;
            uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar21 == 0) goto LAB_0317ff98;
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            goto LAB_0317ff80;
          }
          lVar20 = *plVar14;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_ProductDefinition__c **)(piVar23 + -2) ==
                  System_Collections_Generic_IEnumerator<ProductDefinition>_TypeInfo) {
                puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_0317ff28;
              }
              uVar21 = uVar21 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar21 != 0);
          }
          puVar15 = (undefined8 *)
                    FUN_01b81914(plVar14,
                                 System_Collections_Generic_IEnumerator<ProductDefinition>_TypeInfo,
                                 0);
LAB_0317ff28:
          IPIHMPBGACB = (UnityEngine_Purchasing_ProductDefinition_o *)
                        (*(code *)*puVar15)(plVar14,puVar15[1]);
          pSVar26 = LCOKFEEPBKG__DHAAGKPHJLA(IPIHMPBGACB,(MethodInfo *)0x0);
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
        } while( true );
      }
    }
    goto LAB_03180280;
  }
  __this_01 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5319,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar11,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5320,(MethodInfo *)0x0);
  pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
  if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_03180280;
  System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5321,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar11,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5322,(MethodInfo *)0x0);
  pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
  local_48[0] = (*(__this_00->klass->vtable)._22_DCGFJIGIDKH.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._22_DCGFJIGIDKH.method);
  local_48[0] = local_48[0] & 1;
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(bool_TypeInfo);
  }
  pSVar12 = System_Boolean__ToString(SUB81(local_48,0),(MethodInfo *)0x0);
  pSVar26 = System_String__Concat(pSVar26,pSVar12,(MethodInfo *)0x0);
  System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5323,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar11,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5324,(MethodInfo *)0x0);
  pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
  local_48[0] = DGGBFKNKEAH__JMECPHKNEEG(__this_00,(MethodInfo *)0x0);
  pSVar12 = System_Boolean__ToString(SUB81(local_48,0),(MethodInfo *)0x0);
  pSVar26 = System_String__Concat(pSVar26,pSVar12,(MethodInfo *)0x0);
  System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5325,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar11,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5326,(MethodInfo *)0x0);
  pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
  System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
  lVar20 = (*(__this_00->klass->vtable)._10_NMGFAJBFPNI.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._10_NMGFAJBFPNI.method);
  if (lVar20 == 0) {
    pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar10,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5327,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5328,(MethodInfo *)0x0)
    ;
    pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
    System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
  }
  else {
    uVar1 = *(uint *)(lVar20 + 0x18);
    if (0 < (int)uVar1) {
      lVar28 = 0;
      do {
        if (uVar1 <= (uint)lVar28) goto LAB_03180328;
        lVar27 = *(long *)(lVar20 + 0x20 + lVar28 * 8);
        if (lVar27 == 0) goto LAB_03180280;
        pSVar12 = LCOKFEEPBKG__DHAAGKPHJLA
                            (*(UnityEngine_Purchasing_ProductDefinition_o **)(lVar27 + 0x10),
                             (MethodInfo *)0x0);
        pSVar26 = StringLiteral_1/*""*/;
        if (*(UnityEngine_Purchasing_ProductMetadata_o **)(lVar27 + 0x18) !=
            (UnityEngine_Purchasing_ProductMetadata_o *)0x0) {
          pSVar26 = LCOKFEEPBKG__DHAAGKPHJLA
                              (*(UnityEngine_Purchasing_ProductMetadata_o **)(lVar27 + 0x18),
                               (MethodInfo *)0x0);
        }
        pSVar26 = System_String__Concat(pSVar12,pSVar26,(MethodInfo *)0x0);
        System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
        uVar1 = *(uint *)(lVar20 + 0x18);
        lVar28 = lVar28 + 1;
      } while ((int)lVar28 < (int)uVar1);
    }
  }
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5329,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar17 = (System_RuntimeFieldHandle_Fields *)
            &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5330;
  goto LAB_031802e4;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar23 = piVar23 + 4;
    if (uVar21 == 0) break;
LAB_0317ff80:
    if (*(System_IDisposable_c **)(piVar23 + -2) == System_IDisposable_TypeInfo) {
      puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_03180208;
    }
  }
LAB_0317ff98:
  puVar15 = (undefined8 *)FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_03180208:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_03180214:
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5317,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar11,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5318,(MethodInfo *)0x0);
  pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
  if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_03180280;
  goto LAB_03180304;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar23 = piVar23 + 4;
    if (uVar21 == 0) break;
LAB_0317faac:
    if (*(System_IDisposable_c **)(piVar23 + -2) == System_IDisposable_TypeInfo) {
      puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0317ffb4;
    }
  }
LAB_0317fac4:
  puVar15 = (undefined8 *)FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_0317ffb4:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_0317ffc0:
  if ((Roster_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pHVar18 = Roster_TypeInfo->static_fields->HAEGJFPKIAD;
  if (pHVar18 != (HEEEDKBOAKM_o *)0x0) {
    pSVar25 = (pHVar18->fields).super.GMDPKFHCOGL;
    pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar10,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5333,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5334,(MethodInfo *)0x0)
    ;
    pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
    System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
    if (pSVar25 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
      pSVar19 = pSVar25->klass;
      uVar5._0_1_ = (pSVar19->_2).rank;
      uVar5._1_1_ = (pSVar19->_2).minimumAlignment;
      uVar21 = (ulong)uVar5;
      if (uVar21 != 0) {
        piVar22 = &((pSVar19->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<CFEFALDOEMD>_TypeInfo) {
            ppIVar9 = &(&(pSVar19->vtable)._0_Equals)[*piVar22].methodPtr;
            goto LAB_031800ac;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      ppIVar9 = (Il2CppMethodPointer *)
                FUN_01b81914(pSVar25,System_Collections_Generic_IEnumerable<CFEFALDOEMD>_TypeInfo,0)
      ;
LAB_031800ac:
      plVar14 = (long *)(**ppIVar9)(pSVar25,(MethodInfo *)ppIVar9[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar20 = *plVar14;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar23 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_0318011c;
            }
            uVar21 = uVar21 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)FUN_01b81914(plVar14,System_Collections_IEnumerator_TypeInfo,0);
LAB_0318011c:
        uVar21 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if ((uVar21 & 1) == 0) {
          if (plVar14 == (long *)0x0) goto LAB_0318029c;
          lVar20 = *plVar14;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 == 0) goto LAB_031801ec;
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          goto LAB_031801d4;
        }
        lVar20 = *plVar14;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_CFEFALDOEMD__c **)(piVar23 + -2) ==
                System_Collections_Generic_IEnumerator<CFEFALDOEMD>_TypeInfo) {
              puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_03180178;
            }
            uVar21 = uVar21 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_01b81914(plVar14,System_Collections_Generic_IEnumerator<CFEFALDOEMD>_TypeInfo,
                               0);
LAB_03180178:
        plVar13 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar26 = (System_String_o *)
                  (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
      } while( true );
    }
  }
LAB_03180280:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar23 = piVar23 + 4;
    if (uVar21 == 0) break;
LAB_031801d4:
    if (*(System_IDisposable_c **)(piVar23 + -2) == System_IDisposable_TypeInfo) {
      puVar15 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_03180290;
    }
  }
LAB_031801ec:
  puVar15 = (undefined8 *)FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_03180290:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_0318029c:
  pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar10,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5335,(MethodInfo *)0x0);
  pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  pSVar17 = (System_RuntimeFieldHandle_Fields *)
            &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5336;
LAB_031802e4:
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar11,(System_RuntimeFieldHandle_o)pSVar17->value,(MethodInfo *)0x0
            );
  pSVar26 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
LAB_03180304:
  System_Text_StringBuilder__AppendLine(__this_01,pSVar26,(MethodInfo *)0x0);
  pSVar26 = (System_String_o *)
            (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                      (__this_01,(__this_01->klass->vtable)._3_ToString.method);
  return pSVar26;
}

