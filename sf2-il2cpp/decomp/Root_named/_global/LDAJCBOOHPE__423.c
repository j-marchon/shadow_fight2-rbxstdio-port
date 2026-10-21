// TypeDefIndex 423
// Namespace: 
// public class LDAJCBOOHPE : HONDOIKDLOD, HMKGDNALGCC
// Fields:
//   private static readonly byte[] EDCHCICLDBD; // 0x0
//   private static readonly byte[] PDMLGKMLOKP; // 0x8
//   private string[] IDPIHPBEHFC; // 0x10
//   private Nullable<DateTime> OKFHHFMFACN; // 0x18

// ===== private static string BIJFFJILEBE()  [RVA 0x3489870]
// LDAJCBOOHPE$$BIJFFJILEBE @ RVA 0x3489870

System_String_o * LDAJCBOOHPE__BIJFFJILEBE(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045683cc & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1248);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1249);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045683cc = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1248,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1249,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x3489920]
// LDAJCBOOHPE$$.cctor @ RVA 0x3489920

void LDAJCBOOHPE___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *method_00;
  System_Byte_array **ppSVar3;
  
  if ((DAT_045683cd & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&LDAJCBOOHPE_TypeInfo);
    DAT_045683cd = 1;
  }
  pSVar1 = LDAJCBOOHPE__NJLEHCMENAJ(method);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  LDAJCBOOHPE_TypeInfo->static_fields->EDCHCICLDBD = pSVar2;
  method_00 = (MethodInfo *)thunk_FUN_01c20e04(LDAJCBOOHPE_TypeInfo->static_fields,pSVar2);
  pSVar1 = LDAJCBOOHPE__BIJFFJILEBE(method_00);
  pSVar2 = System_Convert__FromBase64String(pSVar1,(MethodInfo *)0x0);
  ppSVar3 = &LDAJCBOOHPE_TypeInfo->static_fields->PDMLGKMLOKP;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  return;
}


// ===== public string[] MEOEALLHHLC()  [RVA 0x3489A84]
// LDAJCBOOHPE$$MEOEALLHHLC @ RVA 0x3489A84

System_String_array * LDAJCBOOHPE__MEOEALLHHLC(LDAJCBOOHPE_o *__this,MethodInfo *method)

{
  return (__this->fields).IDPIHPBEHFC;
}


// ===== public void .ctor()  [RVA 0x3489A8C]
// LDAJCBOOHPE$$.ctor @ RVA 0x3489A8C

void LDAJCBOOHPE___ctor(LDAJCBOOHPE_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_x1;
  long lVar2;
  
  if ((DAT_045683ce & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    DAT_045683ce = 1;
    method = extraout_x1;
  }
  lVar1 = Method_System_Array_Empty<string>__;
  lVar2 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar2 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__,method);
    lVar2 = *(long *)(lVar1 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  (__this->fields).IDPIHPBEHFC = (System_String_array *)**(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static string NJLEHCMENAJ()  [RVA 0x34899D4]
// LDAJCBOOHPE$$NJLEHCMENAJ @ RVA 0x34899D4

System_String_o * LDAJCBOOHPE__NJLEHCMENAJ(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045683cf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1250);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1251);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045683cf = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1250,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1251,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x3489B30]
// LDAJCBOOHPE$$GIMAJOGGBHM @ RVA 0x3489B30

void LDAJCBOOHPE__GIMAJOGGBHM(LDAJCBOOHPE_o *__this,MethodInfo *method)

{
  InitSettings_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_ValueTuple_string____Nullable_DateTime___o local_48;
  System_Nullable_DateTime__Fields local_30;
  
  if ((DAT_045683d0 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045683d0 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
  if (__this_00 != (InitSettings_o *)0x0) {
    LDAJCBOOHPE__OCDGHBHPBAK
              (&local_48,(LDAJCBOOHPE_o *)__this_00,(__this_00->fields).MEMLDPNJDBK,in_x2);
    local_30.value.fields._dateData = local_48.fields.Item2.fields.value.fields._dateData;
    local_30.hasValue = local_48.fields.Item2.fields.hasValue;
    local_30._1_7_ = local_48.fields.Item2.fields._1_7_;
    (__this->fields).IDPIHPBEHFC = local_48.fields.Item1;
    thunk_FUN_01c20e04(&__this->fields);
    (__this->fields).OKFHHFMFACN.fields.value.fields._dateData =
         (uint64_t)local_30.value.fields._dateData;
    (__this->fields).OKFHHFMFACN.fields.hasValue = local_30.hasValue;
    *(undefined7 *)&(__this->fields).OKFHHFMFACN.fields.field_0x1 = local_30._1_7_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Nullable<DateTime> HCEOBMMAPAB()  [RVA 0x3489F58]
// LDAJCBOOHPE$$HCEOBMMAPAB @ RVA 0x3489F58

System_Nullable_DateTime__o LDAJCBOOHPE__HCEOBMMAPAB(LDAJCBOOHPE_o *__this,MethodInfo *method)

{
  return (System_Nullable_DateTime__o)(__this->fields).OKFHHFMFACN.fields;
}


// ===== public void OEGDOHBOICF(string[] CJNHFNHJHPE)  [RVA 0x3489F64]
// LDAJCBOOHPE$$OEGDOHBOICF @ RVA 0x3489F64

void LDAJCBOOHPE__OEGDOHBOICF
               (LDAJCBOOHPE_o *__this,System_String_array *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  System_DateTime_o SVar3;
  InitSettings_o *pDVar4;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo_27F61A0 *in_x3;
  MethodInfo *in_x4;
  long lVar5;
  LDAJCBOOHPE_Fields *pLVar6;
  System_Nullable_DateTime__o __this_00;
  undefined8 local_30;
  uint64_t uStack_28;
  
  if ((DAT_045683d1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_SequenceEqual<string>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    DAT_045683d1 = 1;
  }
  lVar2 = Method_System_Array_Empty<string>__;
  if (CJNHFNHJHPE == (System_String_array *)0x0) {
    lVar5 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar5 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar5 = *(long *)(lVar2 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    CJNHFNHJHPE = (System_String_array *)**(undefined8 **)(lVar2 + 0xb8);
  }
  pLVar6 = &__this->fields;
  if ((pLVar6->IDPIHPBEHFC != CJNHFNHJHPE) &&
     (bVar1 = System_Linq_Enumerable__SequenceEqual<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pLVar6->IDPIHPBEHFC,
                         (System_Collections_Generic_IEnumerable_TSource__o *)CJNHFNHJHPE,
                         Method_System_Linq_Enumerable_SequenceEqual<string>__), !bVar1)) {
    pLVar6->IDPIHPBEHFC = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pLVar6,CJNHFNHJHPE);
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SVar3 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    local_30 = 0;
    uStack_28 = 0;
    __this_00.fields.value.fields._dateData = SVar3.fields._dateData;
    __this_00.fields._0_8_ = &local_30;
    System_Nullable<DateTime>___ctor
              (__this_00,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,in_x3
              );
    (__this->fields).OKFHHFMFACN.fields.value.fields._dateData = uStack_28;
    *(undefined8 *)&(__this->fields).OKFHHFMFACN.fields = local_30;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar4 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         LDAJCBOOHPE__KCOBAEGKKDI
                   (__this,(__this->fields).IDPIHPBEHFC,
                    (System_Nullable_DateTime__o)(__this->fields).OKFHHFMFACN.fields,in_x4);
    if (pDVar4 != (InitSettings_o *)0x0) {
      InitSettings__FHDNKIFDNPD(pDVar4,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      pDVar4 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
      if (pDVar4 != (InitSettings_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pDVar4,true,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private ValueTuple<string[], Nullable<DateTime>> OCDGHBHPBAK(string PAIMAJLHILL)  [RVA 0x3489BC4]
// LDAJCBOOHPE$$OCDGHBHPBAK @ RVA 0x3489BC4

void LDAJCBOOHPE__OCDGHBHPBAK
               (System_ValueTuple_string____Nullable_DateTime___o *__return_storage_ptr__,
               LDAJCBOOHPE_o *__this,System_String_o *PAIMAJLHILL,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  long lVar3;
  System_String_o *value;
  Il2CppObject *pIVar4;
  System_DateTime_o SVar5;
  MethodInfo_27F61A0 *method_00;
  MethodInfo_2BCCEF8 *in_x5;
  long lVar6;
  void *dateData;
  Il2CppClass *pIVar7;
  System_ValueTuple_T1__T2__o __this_00;
  System_Nullable_DateTime__o __this_01;
  System_ValueTuple_T1__T2__o __this_02;
  System_Nullable_DateTime__o item2;
  Il2CppObject *local_68;
  undefined8 uStack_60;
  Il2CppObject local_58;
  uint64_t local_48;
  
  if ((DAT_045683d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject<LDAJCBOOHPE_MirrorCacheDto>__
                );
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&LDAJCBOOHPE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    FUN_01bab630(&Method_System_ValueTuple<string[],_Nullable<DateTime>>__ctor__);
    DAT_045683d2 = 1;
  }
  bVar2 = System_String__IsNullOrWhiteSpace(PAIMAJLHILL,(MethodInfo *)0x0);
  lVar3 = Method_System_Array_Empty<string>__;
  if (bVar2) {
    lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar6 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar6 = *(long *)(lVar3 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    __this_00.fields.Item2 = (Il2CppObject *)**(undefined8 **)(lVar3 + 0xb8);
    local_58.klass = (Il2CppClass *)0x0;
    local_58.monitor = (void *)0x0;
    local_48 = 0;
    __this_00.fields.Item1 = &local_58;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = Method_System_ValueTuple<string[],_Nullable<DateTime>>__ctor__._dateData;
    System_ValueTuple<object,_Nullable<DateTime>>___ctor
              (__this_00,(Il2CppObject *)0x0,(System_Nullable_DateTime__o)(auVar1 << 0x40),in_x5);
  }
  else {
    if ((LDAJCBOOHPE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo_27F61A0 *)0x0;
    value = IBMPAMLCCHF__EOJPLECOGAD
                      (PAIMAJLHILL,LDAJCBOOHPE_TypeInfo->static_fields->EDCHCICLDBD,
                       LDAJCBOOHPE_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
    if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar4 = Newtonsoft_Json_JsonConvert__DeserializeObject<object>
                       (value,
                        Method_Newtonsoft_Json_JsonConvert_DeserializeObject<LDAJCBOOHPE_MirrorCacheDto>__
                       );
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    dateData = pIVar4[1].monitor;
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SVar5 = System_DateTime__FromBinary((int64_t)dateData,(MethodInfo *)0x0);
    lVar3 = Method_System_Array_Empty<string>__;
    pIVar7 = pIVar4[1].klass;
    if (pIVar7 == (Il2CppClass *)0x0) {
      lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar6 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar6 = *(long *)(lVar3 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      pIVar7 = (Il2CppClass *)**(undefined8 **)(lVar3 + 0xb8);
    }
    local_68 = (Il2CppObject *)0x0;
    uStack_60 = 0;
    __this_01.fields.value.fields._dateData = SVar5.fields._dateData;
    __this_01.fields._0_8_ = &local_68;
    System_Nullable<DateTime>___ctor
              (__this_01,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,
               method_00);
    local_58.klass = (Il2CppClass *)0x0;
    local_58.monitor = (void *)0x0;
    local_48 = 0;
    __this_02.fields.Item2 = (Il2CppObject *)pIVar7;
    __this_02.fields.Item1 = &local_58;
    item2.fields.value.fields._dateData =
         (System_DateTime_Fields)
         (System_DateTime_Fields)
         Method_System_ValueTuple<string[],_Nullable<DateTime>>__ctor__._dateData;
    item2.fields._0_8_ = uStack_60;
    System_ValueTuple<object,_Nullable<DateTime>>___ctor(__this_02,local_68,item2,in_x5);
  }
  (__return_storage_ptr__->fields).Item2.fields.value.fields._dateData = local_48;
  *(void **)&(__return_storage_ptr__->fields).Item2.fields = local_58.monitor;
  (__return_storage_ptr__->fields).Item1 = (System_String_array *)local_58.klass;
  return;
}


// ===== private string KCOBAEGKKDI(string[] JLFFJLLAEEB, Nullable<DateTime> PLPINLMDGKE)  [RVA 0x348A114]
// LDAJCBOOHPE$$KCOBAEGKKDI @ RVA 0x348A114

System_String_o *
LDAJCBOOHPE__KCOBAEGKKDI
          (LDAJCBOOHPE_o *__this,System_String_array *JLFFJLLAEEB,
          System_Nullable_DateTime__o PLPINLMDGKE,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *__this_00;
  void *pvVar2;
  MethodInfo_27F61B8 *pMVar3;
  MethodInfo_27F61B8 *method_00;
  System_Nullable_DateTime__o __this_01;
  MethodInfo_27F61B8 *local_40;
  System_DateTime_Fields local_38;
  System_DateTime_Fields local_28;
  
  local_38._dateData = (uint64_t)PLPINLMDGKE.fields.value.fields._dateData;
  pMVar3 = PLPINLMDGKE.fields._0_8_;
  method_00 = pMVar3;
  local_40 = pMVar3;
  if ((DAT_045683d3 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&LDAJCBOOHPE_TypeInfo);
    FUN_01bab630(&LDAJCBOOHPE_MirrorCacheDto_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_Value__);
    DAT_045683d3 = 1;
  }
  local_28._dateData = 0;
  if (JLFFJLLAEEB == (System_String_array *)0x0) {
    pSVar1 = (System_String_o *)0x0;
  }
  else {
    pSVar1 = (System_String_o *)0x0;
    if ((JLFFJLLAEEB->max_length != 0) && (((ulong)pMVar3 & 0xff) != 0)) {
      __this_00 = (Il2CppObject *)thunk_FUN_01bda818(LDAJCBOOHPE_MirrorCacheDto_TypeInfo);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00[1].klass = (Il2CppClass *)(__this->fields).IDPIHPBEHFC;
      thunk_FUN_01c20e04();
      __this_01.fields.value.fields._dateData =
           (System_DateTime_Fields)
           (System_DateTime_Fields)Method_System_Nullable<DateTime>_get_Value__._dateData;
      __this_01.fields._0_8_ = &local_40;
      local_28._dateData = (uint64_t)System_Nullable<DateTime>__get_Value(__this_01,method_00);
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pvVar2 = (void *)System_DateTime__ToBinary((System_DateTime_o)&local_28,(MethodInfo *)0x0);
      __this_00[1].monitor = pvVar2;
      if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = Newtonsoft_Json_JsonConvert__SerializeObject(__this_00,(MethodInfo *)0x0);
      if ((LDAJCBOOHPE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = IBMPAMLCCHF__JILEJCOCHIB
                         (pSVar1,LDAJCBOOHPE_TypeInfo->static_fields->EDCHCICLDBD,
                          LDAJCBOOHPE_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
    }
  }
  return pSVar1;
}

