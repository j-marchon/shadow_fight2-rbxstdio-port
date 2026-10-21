// TypeDefIndex 810
// Namespace: 
// public static class PELHIDJOBAB
// Fields:

// ===== internal static string DIGELBKLBCG()  [RVA 0x3073C20]
// PELHIDJOBAB$$DIGELBKLBCG @ RVA 0x3073C20

/* WARNING: Type propagation algorithm not settling */

System_String_o * PELHIDJOBAB__DIGELBKLBCG(MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_RuntimeFieldHandle_Fields *pSVar3;
  System_RuntimeFieldHandle_Fields *pSVar4;
  
  if ((DAT_04565f93 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6517);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6518);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6519);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6520);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6521);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6522);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565f93 = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 == 8) {
    pSVar4 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6518;
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6517;
  }
  else if (iVar1 == 0xb) {
    pSVar4 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6520;
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6519;
  }
  else {
    pSVar4 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6522;
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6521;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,(System_RuntimeFieldHandle_o)pSVar3->value,
             (MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,(System_RuntimeFieldHandle_o)pSVar4->value,
             (MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== public static void EECHNLMEMEF(object OHKEKFCKBED, string LPKODEJMJBB, Exception BPKHJMDEHED)  [RVA 0x3073D5C]
// PELHIDJOBAB$$EECHNLMEMEF @ RVA 0x3073D5C

void PELHIDJOBAB__EECHNLMEMEF
               (Il2CppObject *OHKEKFCKBED,System_String_o *LPKODEJMJBB,
               System_Exception_o *BPKHJMDEHED,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04565f94 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6523);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6524);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565f94 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6523,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6524,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (pSVar1,(Il2CppObject *)LPKODEJMJBB,(Il2CppObject *)BPKHJMDEHED,
                      (MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM(OHKEKFCKBED,pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public static void ANCLEFFAEIB(object OHKEKFCKBED, string LPKODEJMJBB, Action CPECAEHDDDB)  [RVA 0x3073E40]
// PELHIDJOBAB$$ANCLEFFAEIB @ RVA 0x3073E40

void PELHIDJOBAB__ANCLEFFAEIB
               (Il2CppObject *OHKEKFCKBED,System_String_o *LPKODEJMJBB,System_Action_o *CPECAEHDDDB,
               MethodInfo *method)

{
  if (CPECAEHDDDB != (System_Action_o *)0x0) {
    (*(code *)(CPECAEHDDDB->fields).super.super.invoke_impl)
              ((CPECAEHDDDB->fields).super.super.method_code,
               (CPECAEHDDDB->fields).super.super.method);
  }
  return;
}


// ===== public static string HOJPMDODABO()  [RVA 0x3073F8C]
// PELHIDJOBAB$$HOJPMDODABO @ RVA 0x3073F8C

System_String_o * PELHIDJOBAB__HOJPMDODABO(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = EGEPDNEAJLA__IMNGFDNOPPL((MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string JGDMBJFKGBO()  [RVA 0x3073F94]
// PELHIDJOBAB$$JGDMBJFKGBO @ RVA 0x3073F94

System_String_o * PELHIDJOBAB__JGDMBJFKGBO(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str1;
  
  pSVar1 = PELHIDJOBAB__DIGELBKLBCG(method);
  str1 = HLIDLFKDMHG__CJGIKJBCAII((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}

