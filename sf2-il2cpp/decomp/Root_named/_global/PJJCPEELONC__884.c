// TypeDefIndex 884
// Namespace: 
// public class PJJCPEELONC : IEJKLPPLHMO
// Fields:

// ===== public bool ECKDICODLME()  [RVA 0x3091CF4]
// PJJCPEELONC$$ECKDICODLME @ RVA 0x3091CF4

bool PJJCPEELONC__ECKDICODLME(PJJCPEELONC_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3091CFC]
// PJJCPEELONC$$KCBILPIAPHN @ RVA 0x3091CFC

int32_t PJJCPEELONC__KCBILPIAPHN(PJJCPEELONC_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3091D04]
// PJJCPEELONC$$AJJLBBCJAAL @ RVA 0x3091D04

System_String_o *
PJJCPEELONC__AJJLBBCJAAL(PJJCPEELONC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_String_o *__this_00;
  float fVar13;
  undefined4 extraout_var;
  System_Nullable_int__Fields local_50;
  System_Nullable_float__Fields local_48;
  
  if ((DAT_045660ab & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4936);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4937);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4938);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4939);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_045660ab = 1;
  }
  local_50.hasValue = false;
  local_50._1_3_ = 0;
  local_50.value = 0;
  local_48 = (System_Nullable_float__Fields)
             AJAMDCEKAFE__FOKFAIPDIMB(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_48 & 0xff) == 0) {
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_48,1.0,Method_System_Nullable<float>__ctor__);
  }
  local_50 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_50 & 0xff) == 0) {
    if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_03192028;
    if ((int)OPAEPDIIOEB->max_length < 2) {
LAB_03191ed4:
      iVar3 = 1;
    }
    else {
      __this_00 = OPAEPDIIOEB->m_Items[1];
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4936,
                 (MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4937,
                 (MethodInfo *)0x0);
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if (__this_00 == (System_String_o *)0x0) goto LAB_03192028;
      bVar2 = System_String__Equals(__this_00,pSVar7,(MethodInfo *)0x0);
      iVar3 = 1000000;
      if (!bVar2) goto LAB_03191ed4;
    }
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_50,iVar3,Method_System_Nullable<int>__ctor__);
  }
  iVar3 = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_50,Method_System_Nullable<int>_get_Value__);
  if (999999 < iVar3) {
    iVar3 = 1000000;
  }
  System_Nullable<int>___ctor
            ((System_Nullable_int__o)&local_50,iVar3,Method_System_Nullable<int>__ctor__);
  pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  fVar13 = System_Nullable<float>__get_Value
                     ((System_Nullable_float__o)&local_48,Method_System_Nullable<float>_get_Value__)
  ;
  uVar4 = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_50,Method_System_Nullable<int>_get_Value__);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar8->klass;
    uVar1._0_1_ = (pIVar10->_2).rank;
    uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar10->vtable + *piVar12;
          goto LAB_03191fb0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0);
LAB_03191fb0:
    (*pVVar9->methodPtr)(CONCAT44(extraout_var,fVar13),pIVar8,(ulong)uVar4,pVVar9->method);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4938,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4939,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    return pSVar7;
  }
LAB_03192028:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x309202C]
// PJJCPEELONC$$.ctor @ RVA 0x309202C

void PJJCPEELONC___ctor(PJJCPEELONC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3092034]
// PJJCPEELONC$$DLKKPFHKIPB @ RVA 0x3092034

System_Collections_Generic_IEnumerable_string__o *
PJJCPEELONC__DLKKPFHKIPB(PJJCPEELONC_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045660ac & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4940);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4941);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045660ac = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4940,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4941,(MethodInfo *)0x0);
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


// ===== public string IGMDDJFPIJL()  [RVA 0x30921A4]
// PJJCPEELONC$$IGMDDJFPIJL @ RVA 0x30921A4

System_String_o * PJJCPEELONC__IGMDDJFPIJL(PJJCPEELONC_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045660ad & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_56);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4942);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045660ad = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4942,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_56,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

