// TypeDefIndex 2668
// Namespace: CUDLR
// public class Server : MonoBehaviour, OJPIGIGLPNC
// Fields:
//   private string OJJELBNHHKF; // 0x20
//   private HttpListener PDALMPAOAFM; // 0x28
//   private List<DOJKMMDFBCJ> CFGNLMNHGFL; // 0x30
//   private readonly SerialDisposable NBCJIGKEOGO; // 0x38
//   private bool CIBJEFICNOC; // 0x40
//   private bool JHCFODPKGCK; // 0x41
//   private readonly Dictionary<string, string> ANOJBOHBEJJ; // 0x48
//   private int <KJNKDIDJFLF>k__BackingField; // 0x50
//   private static OJPIGIGLPNC CBDMFFMCJBK; // 0x0

// ===== private void OHDFFFNDEFC(string IMCONGDFJME)  [RVA 0x33BDD70]
// CUDLR.Server$$OHDFFFNDEFC @ RVA 0x33BDD70

void CUDLR_Server__OHDFFFNDEFC
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o **ppSVar1;
  
  CUDLR_Server__CEOHKHGKEKL(__this,(MethodInfo *)IMCONGDFJME);
  ppSVar1 = &(__this->fields).PDALMPAOAFM;
  if (*ppSVar1 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Abort(*ppSVar1,(MethodInfo *)0x0);
    *ppSVar1 = (System_Net_HttpListener_o *)0x0;
    thunk_FUN_01c20e04(ppSVar1,0);
    return;
  }
  return;
}


// ===== public void StopServer()  [RVA 0x33BDE18]
// CUDLR.Server$$StopServer @ RVA 0x33BDE18

void CUDLR_Server__StopServer(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *IMCONGDFJME;
  MethodInfo *method_00;
  
  if ((DAT_04567db5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_145);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_146);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567db5 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_145,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_146,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  CUDLR_Server__OHDFFFNDEFC(__this,IMCONGDFJME,method_00);
  return;
}


// ===== private void GBEKBBBALIE(JOCIOCLPIHI OHKEKFCKBED)  [RVA 0x33BDED4]
// CUDLR.Server$$GBEKBBBALIE @ RVA 0x33BDED4

void CUDLR_Server__GBEKBBBALIE(CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  System_Text_RegularExpressions_Match_o **ppSVar1;
  bool bVar2;
  System_Collections_Generic_List_DOJKMMDFBCJ__o *__this_00;
  Il2CppObject *pIVar3;
  System_Text_RegularExpressions_Match_o *__this_01;
  System_Net_HttpListenerRequest_o *pSVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar5;
  System_Net_HttpListenerResponse_o *pSVar6;
  int index;
  void *pvVar7;
  System_String_o **ppSVar8;
  System_Text_RegularExpressions_Regex_o *__this_02;
  
  if ((DAT_04567db6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_147);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_148);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>_get_Item__);
    DAT_04567db6 = 1;
  }
  if ((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
     (__this_00 = (__this->fields).CFGNLMNHGFL,
     __this_00 != (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0)) {
    index = (OHKEKFCKBED->fields).FFEODAAHJLG;
    ppSVar1 = &(OHKEKFCKBED->fields).IAFNJPBIPAJ;
    while (index < (__this_00->fields)._size) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<DOJKMMDFBCJ>_get_Item__);
      if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[1].klass == (Il2CppClass *)0x0)) ||
         (__this_01 = System_Text_RegularExpressions_Regex__Match
                                ((System_Text_RegularExpressions_Regex_o *)pIVar3[1].klass,
                                 (OHKEKFCKBED->fields).AAIHDEKMIJG,(MethodInfo *)0x0),
         __this_01 == (System_Text_RegularExpressions_Match_o *)0x0)) goto LAB_034be100;
      bVar2 = System_Text_RegularExpressions_Group__get_Success
                        ((System_Text_RegularExpressions_Group_o *)__this_01,(MethodInfo *)0x0);
      if (bVar2) {
        __this_02 = pIVar3[1].monitor;
        pSVar4 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0);
        if ((pSVar4 == (System_Net_HttpListenerRequest_o *)0x0) ||
           (__this_02 == (System_Text_RegularExpressions_Regex_o *)0x0)) goto LAB_034be100;
        bVar2 = System_Text_RegularExpressions_Regex__IsMatch
                          (__this_02,(pSVar4->fields).method,(MethodInfo *)0x0);
        if (bVar2) {
          *ppSVar1 = __this_01;
          thunk_FUN_01c20e04(ppSVar1,__this_01);
          pvVar7 = pIVar3[2].monitor;
          if (pvVar7 != (void *)0x0) {
            if (pvVar7 == (void *)0x0) goto LAB_034be100;
            (**(code **)((long)pvVar7 + 0x18))
                      (*(undefined8 *)((long)pvVar7 + 0x40),OHKEKFCKBED,
                       *(undefined8 *)((long)pvVar7 + 0x28));
          }
          if ((OHKEKFCKBED->fields).IPOHACONDOB == false) goto LAB_034be0d0;
        }
      }
      index = (OHKEKFCKBED->fields).FFEODAAHJLG + 1;
      (OHKEKFCKBED->fields).FFEODAAHJLG = index;
      __this_00 = (__this->fields).CFGNLMNHGFL;
      if (__this_00 == (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0) goto LAB_034be100;
    }
    pSVar6 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    if (pSVar6 != (System_Net_HttpListenerResponse_o *)0x0) {
      System_Net_HttpListenerResponse__set_StatusCode(pSVar6,0x194,(MethodInfo *)0x0);
      pSVar6 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_147,(MethodInfo *)0x0
                );
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_148,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if (pSVar6 != (System_Net_HttpListenerResponse_o *)0x0) {
        ppSVar8 = &(pSVar6->fields).status_description;
        *ppSVar8 = pSVar5;
        thunk_FUN_01c20e04(ppSVar8,pSVar5);
LAB_034be0d0:
        pSVar6 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
        if (pSVar6 != (System_Net_HttpListenerResponse_o *)0x0) {
          System_Net_HttpListenerResponse__Close(pSVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034be100:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool get_IsInited()  [RVA 0x33BE104]
// CUDLR.Server$$get_IsInited @ RVA 0x33BE104

bool CUDLR_Server__get_IsInited(MethodInfo *method)

{
  if ((DAT_04567db7 & 1) == 0) {
    FUN_01bab630(&CUDLR_Server_TypeInfo);
    DAT_04567db7 = 1;
  }
  return CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK != (OJPIGIGLPNC_o *)0x0;
}


// ===== private void LJCILLMKCPE(string IMCONGDFJME)  [RVA 0x33BE154]
// CUDLR.Server$$LJCILLMKCPE @ RVA 0x33BE154

void CUDLR_Server__LJCILLMKCPE
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o *__this_00;
  System_Net_HttpListenerPrefixCollection_o *__this_01;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  System_String_o *str2;
  System_String_o *extraout_x1;
  MethodInfo *method_00;
  System_Net_HttpListener_o **ppSVar4;
  int32_t local_44;
  
  if ((DAT_04567db8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_149);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_150);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_151);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_152);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Net_HttpListener_TypeInfo);
    DAT_04567db8 = 1;
    IMCONGDFJME = extraout_x1;
  }
  local_44 = 0;
  CUDLR_Server__OHDFFFNDEFC(__this,IMCONGDFJME,method);
  __this_00 = (System_Net_HttpListener_o *)thunk_FUN_01bda818(System_Net_HttpListener_TypeInfo);
  System_Net_HttpListener___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).PDALMPAOAFM;
  *ppSVar4 = __this_00;
  thunk_FUN_01c20e04(ppSVar4,__this_00);
  if (*ppSVar4 == (System_Net_HttpListener_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = System_Net_HttpListener__get_Prefixes(*ppSVar4,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_149,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_150,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  local_44 = (__this->fields)._KJNKDIDJFLF_k__BackingField;
  str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_151,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_152,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,str1,str2,(MethodInfo *)0x0);
  if (__this_01 == (System_Net_HttpListenerPrefixCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Net_HttpListenerPrefixCollection__Add(__this_01,pSVar3,(MethodInfo *)0x0);
  if (*ppSVar4 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Start(*ppSVar4,(MethodInfo *)0x0);
    CUDLR_Server__LOPJACDNMJF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PHGLPIDPNLG(string IMCONGDFJME)  [RVA 0x33BE6A8]
// CUDLR.Server$$PHGLPIDPNLG @ RVA 0x33BE6A8

void CUDLR_Server__PHGLPIDPNLG
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_o *extraout_x1;
  MethodInfo *method_00;
  
  pSVar1 = IMCONGDFJME;
  if ((DAT_04567db9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_155);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_156);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567db9 = 1;
    pSVar1 = extraout_x1;
  }
  if ((__this->fields).PDALMPAOAFM != (System_Net_HttpListener_o *)0x0) {
    CUDLR_Server__FKKLAHANDLH(__this,pSVar1,method);
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_155,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_156,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = System_String__Concat(IMCONGDFJME,pSVar1,(MethodInfo *)0x0);
  CUDLR_Server__LJCILLMKCPE(__this,pSVar1,method_00);
  return;
}


// ===== private void BOENGJINKNH(string IMCONGDFJME)  [RVA 0x33BE8CC]
// CUDLR.Server$$BOENGJINKNH @ RVA 0x33BE8CC

void CUDLR_Server__BOENGJINKNH
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  CUDLR_Server__COFOOGIFODL(__this,IMCONGDFJME,method);
  return;
}


// ===== public static void Init()  [RVA 0x33BEA58]
// CUDLR.Server$$Init @ RVA 0x33BEA58

void CUDLR_Server__Init(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  UnityEngine_Object_o *target;
  Il2CppObject *pIVar1;
  
  if ((DAT_04567dba & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_161);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_162);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Server>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&CUDLR_Server_TypeInfo);
    DAT_04567dba = 1;
  }
  if (CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK != (OJPIGIGLPNC_o *)0x0) {
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_161,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_162,(MethodInfo *)0x0);
  name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)target,name,(MethodInfo *)0x0);
  if (target != (UnityEngine_Object_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent<object>
                       ((UnityEngine_GameObject_o *)target,
                        Method_UnityEngine_GameObject_AddComponent<Server>__);
    CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK = (OJPIGIGLPNC_o *)pIVar1;
    thunk_FUN_01c20e04(CUDLR_Server_TypeInfo->static_fields,pIVar1);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EIIFMOANHHA()  [RVA 0x33BEBD8]
// CUDLR.Server$$EIIFMOANHHA @ RVA 0x33BEBD8

void CUDLR_Server__EIIFMOANHHA(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DOJKMMDFBCJ__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_DOJKMMDFBCJ__o **ppSVar1;
  
  if ((DAT_04567dbb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DOJKMMDFBCJ>_TypeInfo);
    DAT_04567dbb = 1;
    method = extraout_x1;
  }
  ppSVar1 = &(__this->fields).CFGNLMNHGFL;
  if (*ppSVar1 != (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_DOJKMMDFBCJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DOJKMMDFBCJ>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DOJKMMDFBCJ>__ctor__);
  (__this->fields).CFGNLMNHGFL = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  CUDLR_Server__LKACCCCGIAP(__this,method_00);
  CUDLR_Server__PNJOGAAGOJJ(__this,method_01);
  return;
}


// ===== public Color32 get_ColorWarning()  [RVA 0x33BF904]
// CUDLR.Server$$get_ColorWarning @ RVA 0x33BF904

UnityEngine_Color32_o CUDLR_Server__get_ColorWarning(CUDLR_Server_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  UnityEngine_Color32_o UVar5;
  MethodInfo *extraout_x1;
  CFEANGJDHEE_StaticFields *pCVar6;
  
  if ((DAT_04567dbc & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dbc = 1;
    method = extraout_x1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  pCVar6 = CFEANGJDHEE_TypeInfo->static_fields;
  uVar1 = (pCVar6->OCPJOMGAAKD).fields.r;
  uVar2 = (pCVar6->OCPJOMGAAKD).fields.g;
  uVar3 = (pCVar6->OCPJOMGAAKD).fields.b;
  uVar4 = (pCVar6->OCPJOMGAAKD).fields.a;
  UVar5.fields.rgba._3_1_ = uVar4;
  UVar5.fields.rgba._2_1_ = uVar3;
  UVar5.fields.rgba._1_1_ = uVar2;
  UVar5.fields.rgba._0_1_ = uVar1;
  UVar5.fields.r = 0;
  UVar5.fields.g = 0;
  UVar5.fields.b = 0;
  UVar5.fields.a = 0;
  return (UnityEngine_Color32_o)UVar5.fields;
}


// ===== public void set_ColorError(Color32 CJNHFNHJHPE)  [RVA 0x33BF95C]
// CUDLR.Server$$set_ColorError @ RVA 0x33BF95C

void CUDLR_Server__set_ColorError
               (CUDLR_Server_o *__this,UnityEngine_Color32_o CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04567dbd & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dbd = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (CFEANGJDHEE_TypeInfo->static_fields->KFNIDCAJPEM).fields.rgba = CJNHFNHJHPE.fields.rgba;
  return;
}


// ===== private void PNJOGAAGOJJ()  [RVA 0x33BF120]
// CUDLR.Server$$PNJOGAAGOJJ @ RVA 0x33BF120

void CUDLR_Server__PNJOGAAGOJJ(CUDLR_Server_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Func_KeyValuePair_string__string___string__o **ppSVar8;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *value;
  System_String_o *NKAGMFPKADL;
  DOJKMMDFBCJ_o *__this_01;
  DOJKMMDFBCJ_o *__this_02;
  Il2CppClass *pIVar9;
  DOJKMMDFBCJ_EAMEJLKAHFI_o *pDVar10;
  DOJKMMDFBCJ_EAMEJLKAHFI_o **ppDVar11;
  System_Collections_Generic_List_DOJKMMDFBCJ__o *pSVar12;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DOJKMMDFBCJ_array *pDVar13;
  System_Collections_Generic_Dictionary_string__string__o *source_00;
  Il2CppObject *pIVar14;
  System_Func_KeyValuePair_string__string___string__o *selector;
  
  if ((DAT_04567dbe & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_163);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_164);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_165);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_166);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_167);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_168);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_169);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_170);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_171);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_172);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_173);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_174);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_175);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_176);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ_TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ_EAMEJLKAHFI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
    FUN_01bab630(&System_Func<KeyValuePair<string,_string>,_string>_TypeInfo);
    FUN_01bab630(&Method_CUDLR_Server_LECJFHCOHPH_FMAPNPJHDKO__);
    FUN_01bab630(&Method_CUDLR_Server_LECJFHCOHPH_GALCAHPJENJ__);
    FUN_01bab630(&CUDLR_Server_LECJFHCOHPH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>_Add__);
    FUN_01bab630(&CUDLR_Server_NFEBIKDKJPN_TypeInfo);
    FUN_01bab630(&Method_CUDLR_Server_BHIAOHEOEDL__);
    FUN_01bab630(&Method_CUDLR_Server_JAFNGKOEHGH__);
    FUN_01bab630(&Method_CUDLR_Server_<>c_ABPNKDIOAHE__);
    FUN_01bab630(&CUDLR_Server_<>c_TypeInfo);
    DAT_04567dbe = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CUDLR_Server_LECJFHCOHPH_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_163,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_164,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_165,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_166,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  source_00 = (__this->fields).ANOJBOHBEJJ;
  if ((CUDLR_Server_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CUDLR_Server_<>c_TypeInfo);
  }
                    /* try { // try from 034bf3fc to 035bf523 has its CatchHandler @ 034bf3fc
                       catch() { ... } // from try @ 034bf3fc with catch @ 034bf3fc
                       catch() { ... } // from try @ 034bf5d0 with catch @ 034bf3fc
                       catch() { ... } // from try @ 034bf738 with catch @ 034bf3fc
                       catch() { ... } // from try @ 034bf784 with catch @ 034bf3fc
                       catch() { ... } // from try @ 034bf7b8 with catch @ 034bf3fc */
  selector = CUDLR_Server_<>c_TypeInfo->static_fields->__9__42_0;
  if (selector == (System_Func_KeyValuePair_string__string___string__o *)0x0) {
    if ((CUDLR_Server_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CUDLR_Server_<>c_TypeInfo);
    }
    selector = (System_Func_KeyValuePair_string__string___string__o *)
               thunk_FUN_01bda818(System_Func<KeyValuePair<string,_string>,_string>_TypeInfo);
    System_Func<KeyValuePair<object,_object>,_object>___ctor();
    ppSVar8 = &CUDLR_Server_<>c_TypeInfo->static_fields->__9__42_0;
    *ppSVar8 = selector;
    thunk_FUN_01c20e04(ppSVar8,selector);
  }
  source = System_Linq_Enumerable__Select<KeyValuePair<object,_object>,_object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__);
  value = (System_String_array *)
          System_Linq_Enumerable__ToArray<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     Method_System_Linq_Enumerable_ToArray<string>__);
  pSVar7 = System_String__Join(pSVar7,value,(MethodInfo *)0x0);
  pSVar6 = System_String__Format(pSVar6,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_167,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_168,(MethodInfo *)0x0);
                    /* try { // try from 034bf524 to 035bf52b has its CatchHandler @ 034bf770 */
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar7 = System_String__Format(pSVar7,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034bf548 to 035bf54b has its CatchHandler @ 034bf76c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_169,(MethodInfo *)0x0);
                    /* try { // try from 034bf558 to 035bf563 has its CatchHandler @ 034bf74c */
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_170,(MethodInfo *)0x0);
                    /* try { // try from 034bf57c to 035bf583 has its CatchHandler @ 034bf75c */
  NKAGMFPKADL = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 034bf590 to 035bf597 has its CatchHandler @ 034bf760 */
  __this_01 = (DOJKMMDFBCJ_o *)thunk_FUN_01bda818(DOJKMMDFBCJ_TypeInfo);
                    /* try { // try from 034bf59c to 035bf5a3 has its CatchHandler @ 034bf748 */
  DOJKMMDFBCJ___ctor(__this_01,pSVar7,NKAGMFPKADL,true,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034bf5c4 to 035bf5cf has its CatchHandler @ 034bf758 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_171,(MethodInfo *)0x0);
                    /* try { // try from 034bf5d0 to 035bf71b has its CatchHandler @ 034bf3fc */
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_172,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  pSVar6 = System_String__Format(pSVar7,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_173,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_174,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  __this_02 = (DOJKMMDFBCJ_o *)thunk_FUN_01bda818(DOJKMMDFBCJ_TypeInfo);
  method_00 = (MethodInfo *)0x1;
  DOJKMMDFBCJ___ctor(__this_02,pSVar6,pSVar7,true,(MethodInfo *)0x0);
  pSVar7 = (__this->fields).OJJELBNHHKF;
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_175,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_176,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    bVar3 = System_String__Contains(pSVar7,pSVar6,(MethodInfo *)0x0);
    if (__this_01 != (DOJKMMDFBCJ_o *)0x0) {
      (__this_01->fields).IOFAJLKACBI = bVar3;
      if (__this_02 != (DOJKMMDFBCJ_o *)0x0) {
                    /* try { // try from 034bf71c to 035bf71f has its CatchHandler @ 034bf768 */
        (__this_02->fields).IOFAJLKACBI = bVar3;
                    /* try { // try from 034bf720 to 035bf723 has its CatchHandler @ 034bf764 */
                    /* try { // try from 034bf724 to 035bf727 has its CatchHandler @ 034bf754 */
                    /* try { // try from 034bf728 to 035bf72b has its CatchHandler @ 034bf750 */
                    /* try { // try from 034bf72c to 035bf72f has its CatchHandler @ 034bf744 */
        pIVar9 = (Il2CppClass *)thunk_FUN_01bda818(CUDLR_Server_NFEBIKDKJPN_TypeInfo);
                    /* try { // try from 034bf730 to 035bf733 has its CatchHandler @ 034bf740 */
                    /* try { // try from 034bf734 to 035bf737 has its CatchHandler @ 034bf73c */
                    /* try { // try from 034bf738 to 035bf77f has its CatchHandler @ 034bf3fc */
                    /* catch() { ... } // from try @ 034bf734 with catch @ 034bf73c */
        CUDLR_Server_NFEBIKDKJPN___ctor
                  ((CUDLR_Server_NFEBIKDKJPN_o *)pIVar9,(Il2CppObject *)__this,
                   Method_CUDLR_Server_BHIAOHEOEDL__,method_00);
                    /* catch() { ... } // from try @ 034bf730 with catch @ 034bf740 */
        if (__this_00 != (Il2CppObject *)0x0) {
          pIVar14 = __this_00 + 1;
                    /* catch() { ... } // from try @ 034bf72c with catch @ 034bf744 */
                    /* catch() { ... } // from try @ 034bf59c with catch @ 034bf748 */
                    /* catch() { ... } // from try @ 034bf558 with catch @ 034bf74c */
                    /* catch() { ... } // from try @ 034bf728 with catch @ 034bf750 */
                    /* catch() { ... } // from try @ 034bf724 with catch @ 034bf754 */
                    /* catch() { ... } // from try @ 034bf5c4 with catch @ 034bf758 */
                    /* catch() { ... } // from try @ 034bf57c with catch @ 034bf75c */
                    /* catch() { ... } // from try @ 034bf590 with catch @ 034bf760 */
          pIVar14->klass = pIVar9;
                    /* catch() { ... } // from try @ 034bf720 with catch @ 034bf764 */
                    /* catch() { ... } // from try @ 034bf71c with catch @ 034bf768 */
                    /* catch() { ... } // from try @ 034bf548 with catch @ 034bf76c */
          thunk_FUN_01c20e04(pIVar14,pIVar9);
                    /* catch() { ... } // from try @ 034bf524 with catch @ 034bf770 */
          if (bVar3) {
            pIVar9 = (Il2CppClass *)thunk_FUN_01bda818(CUDLR_Server_NFEBIKDKJPN_TypeInfo);
                    /* try { // try from 034bf780 to 035bf783 has its CatchHandler @ 034bf7a8 */
                    /* try { // try from 034bf784 to 035bf7af has its CatchHandler @ 034bf3fc */
            CUDLR_Server_NFEBIKDKJPN___ctor
                      ((CUDLR_Server_NFEBIKDKJPN_o *)pIVar9,(Il2CppObject *)__this,
                       Method_CUDLR_Server_JAFNGKOEHGH__,method_00);
            pIVar14->klass = pIVar9;
            thunk_FUN_01c20e04(pIVar14,pIVar9);
          }
                    /* catch() { ... } // from try @ 034bf780 with catch @ 034bf7a8 */
          pDVar10 = (DOJKMMDFBCJ_EAMEJLKAHFI_o *)
                    thunk_FUN_01bda818(DOJKMMDFBCJ_EAMEJLKAHFI_TypeInfo);
                    /* try { // try from 034bf7b0 to 035bf7b7 has its CatchHandler @ 034bf7cc */
                    /* try { // try from 034bf7b8 to 035bf7c3 has its CatchHandler @ 034bf3fc */
          DOJKMMDFBCJ_EAMEJLKAHFI___ctor
                    (pDVar10,__this_00,Method_CUDLR_Server_LECJFHCOHPH_GALCAHPJENJ__,
                     (MethodInfo *)0x0);
          ppDVar11 = &(__this_01->fields).NAPDMLAGBJC;
                    /* try { // try from 034bf7c4 to 035bf7cb has its CatchHandler @ 034bf7cc */
          *ppDVar11 = pDVar10;
                    /* catch() { ... } // from try @ 034bf7b0 with catch @ 034bf7cc
                       catch() { ... } // from try @ 034bf7c4 with catch @ 034bf7cc */
          thunk_FUN_01c20e04(ppDVar11,pDVar10);
          pDVar10 = (DOJKMMDFBCJ_EAMEJLKAHFI_o *)
                    thunk_FUN_01bda818(DOJKMMDFBCJ_EAMEJLKAHFI_TypeInfo);
          DOJKMMDFBCJ_EAMEJLKAHFI___ctor
                    (pDVar10,__this_00,Method_CUDLR_Server_LECJFHCOHPH_FMAPNPJHDKO__,
                     (MethodInfo *)0x0);
          ppDVar11 = &(__this_02->fields).NAPDMLAGBJC;
          *ppDVar11 = pDVar10;
          thunk_FUN_01c20e04(ppDVar11,pDVar10);
          lVar2 = Method_System_Collections_Generic_List<DOJKMMDFBCJ>_Add__;
          pSVar12 = (__this->fields).CFGNLMNHGFL;
          if (pSVar12 != (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0) {
            pDVar13 = (pSVar12->fields)._items;
            (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
            if (pDVar13 != (DOJKMMDFBCJ_array *)0x0) {
              uVar1 = (pSVar12->fields)._size;
              if (uVar1 < (uint)pDVar13->max_length) {
                (pSVar12->fields)._size = uVar1 + 1;
                pDVar13->m_Items[(int)uVar1] = __this_01;
                thunk_FUN_01c20e04(pDVar13->m_Items + (int)uVar1,__this_01);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar12,
                           (Il2CppObject *)__this_01,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              lVar2 = Method_System_Collections_Generic_List<DOJKMMDFBCJ>_Add__;
              pSVar12 = (__this->fields).CFGNLMNHGFL;
              if (pSVar12 != (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0) {
                pDVar13 = (pSVar12->fields)._items;
                (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
                if (pDVar13 != (DOJKMMDFBCJ_array *)0x0) {
                  uVar1 = (pSVar12->fields)._size;
                  if (uVar1 < (uint)pDVar13->max_length) {
                    (pSVar12->fields)._size = uVar1 + 1;
                    pDVar13->m_Items[(int)uVar1] = __this_02;
                    thunk_FUN_01c20e04(pDVar13->m_Items + (int)uVar1,__this_02);
                    return;
                  }
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar12,
                             (Il2CppObject *)__this_02,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  return;
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


// ===== private void OnApplicationPause(bool LEOPHGIIHJH)  [RVA 0x33BFACC]
// CUDLR.Server$$OnApplicationPause @ RVA 0x33BFACC

void CUDLR_Server__OnApplicationPause(CUDLR_Server_o *__this,bool LEOPHGIIHJH,MethodInfo *method)

{
  CUDLR_Server__GDEPBDACFJL(__this,LEOPHGIIHJH,method);
  return;
}


// ===== private void GDEPBDACFJL(bool KDNHFKPLJIC)  [RVA 0x33BFAD4]
// CUDLR.Server$$GDEPBDACFJL @ RVA 0x33BFAD4

void CUDLR_Server__GDEPBDACFJL(CUDLR_Server_o *__this,bool KDNHFKPLJIC,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  
  if ((DAT_04567dbf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_177);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_178);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_179);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_180);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dbf = 1;
  }
  if ((__this->fields).CIBJEFICNOC == KDNHFKPLJIC) {
    return;
  }
  (__this->fields).CIBJEFICNOC = KDNHFKPLJIC;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  if (KDNHFKPLJIC) {
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_177,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_178,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)0x0;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar1,(MethodInfo *)0x0);
    CUDLR_Server__BOENGJINKNH(__this,pSVar2,pMVar3);
    return;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_179,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_180,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)0x0;
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar1,(MethodInfo *)0x0);
  CUDLR_Server__PHGLPIDPNLG(__this,pSVar2,pMVar3);
  return;
}


// ===== private IEnumerator MAHADHJPLBL()  [RVA 0x33BFC40]
// CUDLR.Server$$MAHADHJPLBL @ RVA 0x33BFC40

System_Collections_IEnumerator_o *
CUDLR_Server__MAHADHJPLBL(CUDLR_Server_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dc0 & 1) == 0) {
    FUN_01bab630(&CUDLR_Server_ECOKHFLDMJF_TypeInfo);
    DAT_04567dc0 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(CUDLR_Server_ECOKHFLDMJF_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void Awake()  [RVA 0x33BFCD4]
// CUDLR.Server$$Awake @ RVA 0x33BFCD4

void CUDLR_Server__Awake(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *path2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567dc1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_181);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_182);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04567dc1 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_181,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_182,(MethodInfo *)0x0);
  path2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,path2,(MethodInfo *)0x0);
  (__this->fields).OJJELBNHHKF = pSVar1;
  thunk_FUN_01c20e04();
  CUDLR_Server__EIIFMOANHHA(__this,method_00);
  return;
}


// ===== private void OnApplicationQuit()  [RVA 0x33BFE18]
// CUDLR.Server$$OnApplicationQuit @ RVA 0x33BFE18

void CUDLR_Server__OnApplicationQuit(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *IMCONGDFJME;
  MethodInfo *method_00;
  
  if ((DAT_04567dc2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_183);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_184);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dc2 = 1;
  }
  (__this->fields).JHCFODPKGCK = true;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_183,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_184,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  CUDLR_Server__OHDFFFNDEFC(__this,IMCONGDFJME,method_00);
  return;
}


// ===== private void OnEnable()  [RVA 0x33BFEDC]
// CUDLR.Server$$OnEnable @ RVA 0x33BFEDC

void CUDLR_Server__OnEnable(CUDLR_Server_o *__this,MethodInfo *method)

{
  UnityEngine_Application_LogCallback_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dc3 & 1) == 0) {
    FUN_01bab630(&Method_CFEANGJDHEE_OLCAINJPFNH__);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04567dc3 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (UnityEngine_Application_LogCallback_o *)
                thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo,method);
  UnityEngine_Application_LogCallback___ctor();
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KOKJOMBFNCD__HBLDNIKHJAB(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void CFCJGDIMHBA(JOCIOCLPIHI OHKEKFCKBED, bool INADPMLBJHN, out string AAIHDEKMIJG, out string ACCIHBHMFPN)  [RVA 0x33BFF7C]
// CUDLR.Server$$CFCJGDIMHBA @ RVA 0x33BFF7C

void CUDLR_Server__CFCJGDIMHBA
               (CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
               System_String_o **AAIHDEKMIJG,System_String_o **ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Text_RegularExpressions_Match_o *pSVar2;
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Group_o *__this_01;
  System_String_o *path2;
  System_Char_array *trimChars;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  
  if ((DAT_04567dc4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_185);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_186);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04567dc4 = 1;
  }
  if ((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
     (pSVar2 = (OHKEKFCKBED->fields).IAFNJPBIPAJ,
     pSVar2 != (System_Text_RegularExpressions_Match_o *)0x0)) {
    pSVar3 = (__this->fields).OJJELBNHHKF;
    __this_00 = (System_Text_RegularExpressions_GroupCollection_o *)
                (*(pSVar2->klass->vtable)._5_get_Groups.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._5_get_Groups.method);
    if ((__this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
       (__this_01 = System_Text_RegularExpressions_GroupCollection__get_Item
                              (__this_00,1,(MethodInfo *)0x0),
       __this_01 != (System_Text_RegularExpressions_Group_o *)0x0)) {
      path2 = System_Text_RegularExpressions_Capture__get_Value
                        ((System_Text_RegularExpressions_Capture_o *)__this_01,(MethodInfo *)0x0);
      if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
      }
      pSVar3 = System_IO_Path__Combine(pSVar3,path2,(MethodInfo *)0x0);
      *AAIHDEKMIJG = pSVar3;
      thunk_FUN_01c20e04(AAIHDEKMIJG,pSVar3);
      pSVar3 = System_IO_Path__GetExtension(*AAIHDEKMIJG,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__ToLower(pSVar3,(MethodInfo *)0x0);
        trimChars = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
        if (trimChars != (System_Char_array *)0x0) {
          if ((int)trimChars->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          trimChars->m_Items[0] = 0x2e;
          if (pSVar3 != (System_String_o *)0x0) {
            pSVar3 = System_String__TrimStart(pSVar3,trimChars,(MethodInfo *)0x0);
            if (!INADPMLBJHN) {
              __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields).ANOJBOHBEJJ;
              if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_034c018c;
              bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                                (__this_02,(Il2CppObject *)pSVar3,(Il2CppObject **)ACCIHBHMFPN,
                                 Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                                );
              if (bVar1) {
                return;
              }
            }
            MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)MOPNMEHIMFJ,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_185,
                       (MethodInfo *)0x0);
            LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)LFINFBNOLFG,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_186,
                       (MethodInfo *)0x0);
            pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
            *ACCIHBHMFPN = pSVar3;
            thunk_FUN_01c20e04(ACCIHBHMFPN,pSVar3);
            return;
          }
        }
      }
    }
  }
LAB_034c018c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDisable()  [RVA 0x33C0194]
// CUDLR.Server$$OnDisable @ RVA 0x33C0194

void CUDLR_Server__OnDisable(CUDLR_Server_o *__this,MethodInfo *method)

{
  UnityEngine_Application_LogCallback_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dc5 & 1) == 0) {
    FUN_01bab630(&Method_CFEANGJDHEE_OLCAINJPFNH__);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04567dc5 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (UnityEngine_Application_LogCallback_o *)
                thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo,method);
  UnityEngine_Application_LogCallback___ctor();
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KOKJOMBFNCD__BIGBBPBIECF(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void LKACCCCGIAP()  [RVA 0x33BEC74]
// CUDLR.Server$$LKACCCCGIAP @ RVA 0x33BEC74

void CUDLR_Server__LKACCCCGIAP(CUDLR_Server_o *__this,MethodInfo *method)

{
  uint uVar1;
  Il2CppType *pIVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  System_Type_o *pSVar7;
  undefined8 uVar8;
  long lVar9;
  DOJKMMDFBCJ_EAMEJLKAHFI_o *pDVar10;
  System_Byte_array *pSVar11;
  System_Byte_array *pSVar12;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  DOJKMMDFBCJ_EAMEJLKAHFI_o **ppDVar15;
  System_Collections_Generic_List_DOJKMMDFBCJ__o *__this_00;
  MethodInfo *extraout_x1;
  DOJKMMDFBCJ_array *pDVar16;
  uint uVar17;
  uint uVar18;
  Il2CppObject *arg0;
  DOJKMMDFBCJ_o *item;
  long lVar19;
  
  if ((DAT_04567dc6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_187);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_188);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_189);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_190);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ___TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ_var);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ_EAMEJLKAHFI_var);
    FUN_01bab630(&DOJKMMDFBCJ_EAMEJLKAHFI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>_Add__);
    FUN_01bab630(&Method_CUDLR_Server_LKACCCCGIAP__);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567dc6 = 1;
    method = extraout_x1;
  }
  plVar4 = (long *)FUN_01bab61c(Method_CUDLR_Server_LKACCCCGIAP__,method);
  if ((plVar4 != (long *)0x0) &&
     (lVar5 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250)), lVar5 != 0))
  {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar17 = 0;
      do {
        if (uVar1 <= uVar17) {
LAB_034bf11c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        arg0 = *(Il2CppObject **)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
        if ((arg0 == (Il2CppObject *)0x0) ||
           (lVar6 = (*arg0->klass->vtable[0x65].methodPtr)
                              (arg0,0x18,arg0->klass->vtable[0x65].method), lVar6 == 0))
        goto LAB_034bf118;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar1) {
          uVar18 = 0;
          do {
            pIVar2 = DOJKMMDFBCJ_var;
            if (uVar1 <= uVar18) goto LAB_034bf11c;
            plVar4 = *(long **)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
            if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar7 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
            if (plVar4 == (long *)0x0) goto LAB_034bf118;
            uVar8 = (**(code **)(*plVar4 + 0x218))(plVar4,pSVar7,1,*(undefined8 *)(*plVar4 + 0x220))
            ;
            lVar9 = thunk_FUN_01bda71c(uVar8,DOJKMMDFBCJ___TypeInfo);
            pIVar2 = DOJKMMDFBCJ_EAMEJLKAHFI_var;
            if (lVar9 == 0) goto LAB_034bf118;
            if (*(long *)(lVar9 + 0x18) != 0) {
              if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
              pDVar10 = (DOJKMMDFBCJ_EAMEJLKAHFI_o *)System_Delegate__CreateDelegate();
              if ((pDVar10 == (DOJKMMDFBCJ_EAMEJLKAHFI_o *)0x0) ||
                 (pDVar10->klass != DOJKMMDFBCJ_EAMEJLKAHFI_TypeInfo)) {
                pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar11,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_187,
                           (MethodInfo *)0x0);
                pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar12,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_188,
                           (MethodInfo *)0x0);
                pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
                pIVar14 = (Il2CppObject *)
                          (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                pSVar13 = System_String__Format(pSVar13,arg0,pIVar14,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
              }
              else {
                uVar8 = *(undefined8 *)(lVar9 + 0x18);
                if (0 < (int)uVar8) {
                  lVar19 = 0;
                  do {
                    if ((uint)uVar8 <= (uint)lVar19) goto LAB_034bf11c;
                    item = *(DOJKMMDFBCJ_o **)(lVar9 + 0x20 + lVar19 * 8);
                    if (item == (DOJKMMDFBCJ_o *)0x0) goto LAB_034bf118;
                    if ((item->fields).NEIONLMBMDE == (System_Text_RegularExpressions_Regex_o *)0x0)
                    {
                      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar11,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_189,
                                 (MethodInfo *)0x0);
                      pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar12,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_190,
                                 (MethodInfo *)0x0);
                      pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
                      pIVar14 = (Il2CppObject *)
                                (**(code **)(*plVar4 + 0x1b8))
                                          (plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                      pSVar13 = System_String__Format(pSVar13,arg0,pIVar14,(MethodInfo *)0x0);
                      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                      }
                      UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
                    }
                    else {
                      ppDVar15 = &(item->fields).NAPDMLAGBJC;
                      *ppDVar15 = pDVar10;
                      thunk_FUN_01c20e04(ppDVar15,pDVar10);
                      lVar3 = Method_System_Collections_Generic_List<DOJKMMDFBCJ>_Add__;
                      __this_00 = (__this->fields).CFGNLMNHGFL;
                      if (__this_00 == (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0)
                      goto LAB_034bf118;
                      pDVar16 = (__this_00->fields)._items;
                      (__this_00->fields)._version = (__this_00->fields)._version + 1;
                      if (pDVar16 == (DOJKMMDFBCJ_array *)0x0) goto LAB_034bf118;
                      uVar1 = (__this_00->fields)._size;
                      if (uVar1 < (uint)pDVar16->max_length) {
                        (__this_00->fields)._size = uVar1 + 1;
                        pDVar16->m_Items[(int)uVar1] = item;
                        thunk_FUN_01c20e04(pDVar16->m_Items + (int)uVar1,item);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_00,
                                   (Il2CppObject *)item,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    uVar8 = *(undefined8 *)(lVar9 + 0x18);
                    lVar19 = lVar19 + 1;
                  } while ((int)lVar19 < (int)uVar8);
                }
              }
            }
            uVar1 = *(uint *)(lVar6 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar1);
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar1);
    }
    return;
  }
LAB_034bf118:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static OJPIGIGLPNC get_Instance()  [RVA 0x33C0234]
// CUDLR.Server$$get_Instance @ RVA 0x33C0234

OJPIGIGLPNC_o * CUDLR_Server__get_Instance(MethodInfo *method)

{
  if ((DAT_04567dc7 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&CUDLR_Server_TypeInfo);
    DAT_04567dc7 = 1;
  }
  CUDLR_Server__Init(method);
  return CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== private void OnApplicationFocus(bool KIIDAIMDIII)  [RVA 0x33C0280]
// CUDLR.Server$$OnApplicationFocus @ RVA 0x33C0280

void CUDLR_Server__OnApplicationFocus(CUDLR_Server_o *__this,bool KIIDAIMDIII,MethodInfo *method)

{
  CUDLR_Server__GDEPBDACFJL(__this,(bool)(~KIIDAIMDIII & 1),method);
  return;
}


// ===== private void BHIAOHEOEDL(JOCIOCLPIHI OHKEKFCKBED, bool INADPMLBJHN)  [RVA 0x33C028C]
// CUDLR.Server$$BHIAOHEOEDL @ RVA 0x33C028C

void CUDLR_Server__BHIAOHEOEDL
               (CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
               MethodInfo *method)

{
  bool bVar1;
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  MethodInfo *in_x5;
  System_String_o *local_28;
  System_String_o *local_18;
  
  local_18 = (System_String_o *)0x0;
  local_28 = (System_String_o *)0x0;
  CUDLR_Server__CFCJGDIMHBA(__this,OHKEKFCKBED,INADPMLBJHN,&local_18,&local_28,in_x5);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(local_18,(MethodInfo *)0x0);
  if (OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) {
    if (bVar1) {
      IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
      KEBDCIFDLPB__LNBHCPLMPAA(IDCGLBOIAFJ,local_18,local_28,INADPMLBJHN,(MethodInfo *)0x0);
    }
    else {
      (OHKEKFCKBED->fields).IPOHACONDOB = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JAFNGKOEHGH(JOCIOCLPIHI OHKEKFCKBED, bool INADPMLBJHN)  [RVA 0x33C0308]
// CUDLR.Server$$JAFNGKOEHGH @ RVA 0x33C0308

void CUDLR_Server__JAFNGKOEHGH
               (CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Networking_UnityWebRequest_o *__this_00;
  System_String_o *pSVar2;
  System_Net_HttpListenerResponse_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *format;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  MethodInfo *in_x5;
  System_String_o **ppSVar7;
  System_String_o *local_48;
  System_String_o *local_38;
  
  if ((DAT_04567dc8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_191);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_192);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_193);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_194);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_195);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_196);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_197);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_198);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04567dc8 = 1;
  }
  local_38 = (System_String_o *)0x0;
  local_48 = (System_String_o *)0x0;
  CUDLR_Server__CFCJGDIMHBA(__this,OHKEKFCKBED,INADPMLBJHN,&local_38,&local_48,in_x5);
  __this_00 = UnityEngine_Networking_UnityWebRequest__Get(local_38,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    UnityEngine_Networking_UnityWebRequest__SendWebRequest(__this_00,(MethodInfo *)0x0);
    while (bVar1 = UnityEngine_Networking_UnityWebRequest__get_isDone(__this_00,(MethodInfo *)0x0),
          !bVar1) {
      System_Threading_Thread__Sleep(0,(MethodInfo *)0x0);
    }
    pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if ((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
         (pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0),
         pSVar3 != (System_Net_HttpListenerResponse_o *)0x0)) {
        System_Net_HttpListenerResponse__set_ContentType(pSVar3,local_48,(MethodInfo *)0x0);
        if (INADPMLBJHN) {
          pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_191,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_192,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_193,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_194,
                     (MethodInfo *)0x0);
          format = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar2 = local_38;
          if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
          }
          pSVar2 = System_IO_Path__GetFileName(pSVar2,(MethodInfo *)0x0);
          pSVar2 = System_String__Format(format,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
          if (pSVar3 == (System_Net_HttpListenerResponse_o *)0x0) goto LAB_034c0724;
          System_Net_HttpListenerResponse__AddHeader(pSVar3,pSVar6,pSVar2,(MethodInfo *)0x0);
        }
        pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
        __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                              (__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
          pSVar4 = UnityEngine_Networking_DownloadHandler__get_data(__this_01,(MethodInfo *)0x0);
          KEBDCIFDLPB__NLNJOGEGAPH(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 034c0718 to 035c071b has its CatchHandler @ 034c0724 */
                    /* try { // try from 034c071c to 035c073f has its CatchHandler @ 034c0614 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c06dc with catch @ 034c0720
                        */
          return;
        }
      }
    }
    else {
      pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this_00,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_195,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034c0614 to 035c06ab has its CatchHandler @ 034c0614
                       catch() { ... } // from try @ 034c0614 with catch @ 034c0614
                       catch() { ... } // from try @ 034c06fc with catch @ 034c0614
                       catch() { ... } // from try @ 034c071c with catch @ 034c0614
                       catch() { ... } // from try @ 034c0744 with catch @ 034c0614
                       catch() { ... } // from try @ 034c0784 with catch @ 034c0614 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_196,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((pSVar2 != (System_String_o *)0x0) &&
         (bVar1 = System_String__StartsWith(pSVar2,pSVar6,(MethodInfo *)0x0),
         OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0)) {
        if (bVar1) {
          (OHKEKFCKBED->fields).IPOHACONDOB = true;
          return;
        }
        pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
        if (pSVar3 != (System_Net_HttpListenerResponse_o *)0x0) {
          System_Net_HttpListenerResponse__set_StatusCode(pSVar3,500,(MethodInfo *)0x0);
          pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_197,
                     (MethodInfo *)0x0);
                    /* try { // try from 034c06ac to 035c06b3 has its CatchHandler @ 034c0728 */
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_198,
                     (MethodInfo *)0x0);
          pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 034c06dc to 035c06fb has its CatchHandler @ 034c0720 */
          pSVar6 = UnityEngine_Networking_UnityWebRequest__get_error(__this_00,(MethodInfo *)0x0);
          pSVar2 = System_String__Format(pSVar2,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          if (pSVar3 != (System_Net_HttpListenerResponse_o *)0x0) {
            ppSVar7 = &(pSVar3->fields).status_description;
                    /* try { // try from 034c06fc to 035c0717 has its CatchHandler @ 034c0614 */
            *ppSVar7 = pSVar2;
            thunk_FUN_01c20e04(ppSVar7,pSVar2);
            return;
          }
        }
      }
    }
  }
LAB_034c0724:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c0718 with catch @ 034c0724
                        */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33C0728]
// CUDLR.Server$$.ctor @ RVA 0x33C0728

void CUDLR_Server___ctor(CUDLR_Server_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_SerialDisposable_o **ppUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar6;
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c06ac with catch @ 034c0728
                        */
                    /* try { // try from 034c0740 to 035c0743 has its CatchHandler @ 034c076c */
                    /* try { // try from 034c0744 to 035c077b has its CatchHandler @ 034c0614 */
                    /* catch() { ... } // from try @ 034c0740 with catch @ 034c076c */
                    /* try { // try from 034c077c to 035c0783 has its CatchHandler @ 034c0798 */
                    /* try { // try from 034c0784 to 035c078f has its CatchHandler @ 034c0614 */
                    /* try { // try from 034c0790 to 035c0797 has its CatchHandler @ 034c0798 */
  if ((DAT_04567dc9 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034c077c with catch @ 034c0798
                       catch(type#2 @ 00000000) { ... } // from try @ 034c0790 with catch @ 034c0798
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_199);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_200);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_201);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_202);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_203);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_204);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_205);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_206);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_207);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_208);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_209);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_210);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_211);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_212);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_213);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_214);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_215);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_216);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_217);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_218);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_219);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_220);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_221);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_222);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_223);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_224);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_225);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_226);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_227);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_228);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_229);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_230);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_231);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_232);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_233);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_234);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_235);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_236);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_237);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_238);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_04567dc9 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).NBCJIGKEOGO;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_199,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_200,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_201,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_202,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_203,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_204,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_205,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_206,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_207,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_208,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_209,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_210,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_211,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_212,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_213,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_214,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_215,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_216,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034c0d7c to 035c102b has its CatchHandler @ 034c0d7c
                       catch() { ... } // from try @ 034c0d7c with catch @ 034c0d7c
                       catch() { ... } // from try @ 034c1120 with catch @ 034c0d7c
                       catch() { ... } // from try @ 034c12bc with catch @ 034c0d7c
                       catch() { ... } // from try @ 034c12c4 with catch @ 034c0d7c
                       catch() { ... } // from try @ 034c1384 with catch @ 034c0d7c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_217,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_218,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_219,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_220,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_221,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_222,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_223,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_224,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_225,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_226,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_227,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_228,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_229,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_230,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 034c102c to 035c1053 has its CatchHandler @ 034c12e8 */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_231,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_232,(MethodInfo *)0x0);
                    /* try { // try from 034c108c to 035c10b7 has its CatchHandler @ 034c12e4 */
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_233,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_234,(MethodInfo *)0x0);
                    /* try { // try from 034c10e8 to 035c10ef has its CatchHandler @ 034c12d4 */
                    /* try { // try from 034c10f4 to 035c10fb has its CatchHandler @ 034c12d8 */
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 034c1104 to 035c1113 has its CatchHandler @ 034c12dc */
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
                    /* try { // try from 034c1114 to 035c111f has its CatchHandler @ 034c12e0 */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034c1120 to 035c12af has its CatchHandler @ 034c0d7c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_235,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_236,(MethodInfo *)0x0);
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_237,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_238,(MethodInfo *)0x0);
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    ppSVar6 = &(__this->fields).ANOJBOHBEJJ;
    *ppSVar6 = (System_Collections_Generic_Dictionary_string__string__o *)__this_01;
    thunk_FUN_01c20e04(ppSVar6,__this_01);
    (__this->fields)._KJNKDIDJFLF_k__BackingField = 0xd70f;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ColorLogs(Color32 CJNHFNHJHPE)  [RVA 0x33C1220]
// CUDLR.Server$$set_ColorLogs @ RVA 0x33C1220

void CUDLR_Server__set_ColorLogs
               (CUDLR_Server_o *__this,UnityEngine_Color32_o CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04567dca & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dca = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.rgba = CJNHFNHJHPE.fields.rgba;
  return;
}


// ===== public void set_Port(int CJNHFNHJHPE)  [RVA 0x33C127C]
// CUDLR.Server$$set_Port @ RVA 0x33C127C

void CUDLR_Server__set_Port(CUDLR_Server_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KJNKDIDJFLF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void COFOOGIFODL(string IMCONGDFJME)  [RVA 0x33BEA24]
// CUDLR.Server$$COFOOGIFODL @ RVA 0x33BEA24

void CUDLR_Server__COFOOGIFODL
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o *__this_00;
  
  if ((__this->fields).PDALMPAOAFM == (System_Net_HttpListener_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CUDLR_Server__CEOHKHGKEKL(__this,(MethodInfo *)IMCONGDFJME);
  __this_00 = (__this->fields).PDALMPAOAFM;
  if (__this_00 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Stop(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void CEOHKHGKEKL()  [RVA 0x33BDDA8]
// CUDLR.Server$$CEOHKHGKEKL @ RVA 0x33BDDA8

void CUDLR_Server__CEOHKHGKEKL(CUDLR_Server_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04567dcb & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_04567dcb = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NBCJIGKEOGO;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Disposable_TypeInfo,method);
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x33C1284]
// CUDLR.Server$$Update @ RVA 0x33C1284

void CUDLR_Server__Update(CUDLR_Server_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dcc & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
                    /* try { // try from 034c12b0 to 035c12b7 has its CatchHandler @ 034c12ec */
    DAT_04567dcc = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034c12b8 to 035c12bb has its CatchHandler @ 034c12d0 */
                    /* try { // try from 034c12bc to 035c12bf has its CatchHandler @ 034c0d7c */
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034c12c0 to 035c12c3 has its CatchHandler @ 034c12cc */
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
                    /* try { // try from 034c12c4 to 035c1303 has its CatchHandler @ 034c0d7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c12c0 with catch @ 034c12cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c12b8 with catch @ 034c12d0
                        */
  CFEANGJDHEE__LLCONNGHGKD((MethodInfo *)0x0);
  return;
}


// ===== private void DHAAGKPHJLA(string IMCONGDFJME)  [RVA 0x33C12D4]
// CUDLR.Server$$DHAAGKPHJLA @ RVA 0x33C12D4

void CUDLR_Server__DHAAGKPHJLA
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  bool bVar1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c10e8 with catch @ 034c12d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c10f4 with catch @ 034c12d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c1104 with catch @ 034c12dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c1114 with catch @ 034c12e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c108c with catch @ 034c12e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c102c with catch @ 034c12e8
                        */
  if ((DAT_04567dcd & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c12b0 with catch @ 034c12ec
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04567dcd = 1;
  }
                    /* try { // try from 034c1304 to 035c1307 has its CatchHandler @ 034c1314 */
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(IMCONGDFJME,(MethodInfo *)0x0);
  if (bVar1) {
                    /* catch() { ... } // from try @ 034c1304 with catch @ 034c1314 */
    return;
  }
                    /* try { // try from 034c131c to 035c1383 has its CatchHandler @ 034c1398 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log((Il2CppObject *)IMCONGDFJME,(MethodInfo *)0x0);
  return;
}


// ===== public void StartServer()  [RVA 0x33C1348]
// CUDLR.Server$$StartServer @ RVA 0x33C1348

void CUDLR_Server__StartServer(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *IMCONGDFJME;
  MethodInfo *method_00;
  
  if ((DAT_04567dce & 1) == 0) {
                    /* try { // try from 034c1384 to 035c138f has its CatchHandler @ 034c0d7c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_239);
                    /* try { // try from 034c1390 to 035c1397 has its CatchHandler @ 034c1398 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_240);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034c131c with catch @ 034c1398
                       catch(type#2 @ 00000000) { ... } // from try @ 034c1390 with catch @ 034c1398
                        */
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dce = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_239,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_240,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  IMCONGDFJME = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  CUDLR_Server__LJCILLMKCPE(__this,IMCONGDFJME,method_00);
  return;
}


// ===== private void FKKLAHANDLH(string IMCONGDFJME)  [RVA 0x33BE8A4]
// CUDLR.Server$$FKKLAHANDLH @ RVA 0x33BE8A4

void CUDLR_Server__FKKLAHANDLH
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Net_HttpListener_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).PDALMPAOAFM;
  if (__this_00 != (System_Net_HttpListener_o *)0x0) {
    System_Net_HttpListener__Start(__this_00,(MethodInfo *)0x0);
    CUDLR_Server__LOPJACDNMJF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OLNLDLIKIKO(Exception BPKHJMDEHED)  [RVA 0x33C1408]
// CUDLR.Server$$OLNLDLIKIKO @ RVA 0x33C1408

void CUDLR_Server__OLNLDLIKIKO
               (CUDLR_Server_o *__this,System_Exception_o *BPKHJMDEHED,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if ((DAT_04567dcf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_241);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_242);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_243);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_244);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04567dcf = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_241,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_242,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)BPKHJMDEHED,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_243,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_244,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  CUDLR_Server__LJCILLMKCPE(__this,pSVar3,method_00);
  return;
}


// ===== private void OnDestroy()  [RVA 0x33C1590]
// CUDLR.Server$$OnDestroy @ RVA 0x33C1590

void CUDLR_Server__OnDestroy(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *IMCONGDFJME;
  MethodInfo *method_00;
  
  if ((DAT_04567dd0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_245);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_246);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dd0 = 1;
  }
  if ((__this->fields).JHCFODPKGCK != false) {
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_245,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_246,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  CUDLR_Server__OHDFFFNDEFC(__this,IMCONGDFJME,method_00);
  return;
}


// ===== public Color32 get_ColorError()  [RVA 0x33C1658]
// CUDLR.Server$$get_ColorError @ RVA 0x33C1658

UnityEngine_Color32_o CUDLR_Server__get_ColorError(CUDLR_Server_o *__this,MethodInfo *method)

{
  UnityEngine_Color32_o UVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dd1 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dd1 = 1;
    method = extraout_x1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  UVar1.fields.r = 0;
  UVar1.fields.g = 0;
  UVar1.fields.b = 0;
  UVar1.fields.a = 0;
  UVar1.fields.rgba = (CFEANGJDHEE_TypeInfo->static_fields->KFNIDCAJPEM).fields.rgba;
  return (UnityEngine_Color32_o)UVar1.fields;
}


// ===== public void set_ColorWarning(Color32 CJNHFNHJHPE)  [RVA 0x33C16B0]
// CUDLR.Server$$set_ColorWarning @ RVA 0x33C16B0

void CUDLR_Server__set_ColorWarning
               (CUDLR_Server_o *__this,UnityEngine_Color32_o CJNHFNHJHPE,MethodInfo *method)

{
  CFEANGJDHEE_StaticFields *pCVar1;
  int32_t iVar2;
  
  if ((DAT_04567dd2 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dd2 = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = CFEANGJDHEE_TypeInfo->static_fields;
  iVar2 = CJNHFNHJHPE.fields.rgba;
  (pCVar1->OCPJOMGAAKD).fields.r = (char)iVar2;
  (pCVar1->OCPJOMGAAKD).fields.g = (char)((uint)iVar2 >> 8);
  (pCVar1->OCPJOMGAAKD).fields.b = (char)((uint)iVar2 >> 0x10);
  (pCVar1->OCPJOMGAAKD).fields.a = (char)((uint)iVar2 >> 0x18);
  return;
}


// ===== public Color32 get_ColorLogs()  [RVA 0x33C170C]
// CUDLR.Server$$get_ColorLogs @ RVA 0x33C170C

UnityEngine_Color32_o CUDLR_Server__get_ColorLogs(CUDLR_Server_o *__this,MethodInfo *method)

{
  UnityEngine_Color32_o UVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dd3 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dd3 = 1;
    method = extraout_x1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  UVar1.fields.r = 0;
  UVar1.fields.g = 0;
  UVar1.fields.b = 0;
  UVar1.fields.a = 0;
  UVar1.fields.rgba = (CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.rgba;
  return (UnityEngine_Color32_o)UVar1.fields;
}


// ===== private void LOPJACDNMJF()  [RVA 0x33BE4B8]
// CUDLR.Server$$LOPJACDNMJF @ RVA 0x33BE4B8

void CUDLR_Server__LOPJACDNMJF(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Func_IEnumerator__o *coroutine;
  System_IObservable_Unit__o *source;
  System_Action_Unit__o **ppSVar1;
  System_Action_Exception__o *onError;
  System_IDisposable_o *value;
  MethodInfo *extraout_x1;
  UniRx_SerialDisposable_o *__this_00;
  System_Action_Unit__o *onNext;
  
  if ((DAT_04567dd4 & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Exception>_TypeInfo);
    FUN_01bab630(&System_Func<IEnumerator>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_CUDLR_Server_MAHADHJPLBL__);
    FUN_01bab630(&Method_CUDLR_Server_OLNLDLIKIKO__);
    FUN_01bab630(&Method_CUDLR_Server_<>c_MJMOMEBJKCM__);
    FUN_01bab630(&CUDLR_Server_<>c_TypeInfo);
    DAT_04567dd4 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NBCJIGKEOGO;
  coroutine = (System_Func_IEnumerator__o *)
              thunk_FUN_01bda818(System_Func<IEnumerator>_TypeInfo,method);
  System_Func<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromCoroutine(coroutine,false,(MethodInfo *)0x0);
  if ((CUDLR_Server_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CUDLR_Server_<>c_TypeInfo);
  }
  onNext = CUDLR_Server_<>c_TypeInfo->static_fields->__9__45_0;
  if (onNext == (System_Action_Unit__o *)0x0) {
    if ((CUDLR_Server_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CUDLR_Server_<>c_TypeInfo);
    }
    onNext = (System_Action_Unit__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    ppSVar1 = &CUDLR_Server_<>c_TypeInfo->static_fields->__9__45_0;
    *ppSVar1 = onNext;
    thunk_FUN_01c20e04(ppSVar1,onNext);
  }
  onError = (System_Action_Exception__o *)thunk_FUN_01bda818(System_Action<Exception>_TypeInfo);
  System_Action<object>___ctor();
  value = UniRx_ObservableExtensions__Subscribe<Unit>
                    ((System_IObservable_T__o *)source,(System_Action_T__o *)onNext,onError,
                     Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_Port()  [RVA 0x33C1764]
// CUDLR.Server$$get_Port @ RVA 0x33C1764

int32_t CUDLR_Server__get_Port(CUDLR_Server_o *__this,MethodInfo *method)

{
  return (__this->fields)._KJNKDIDJFLF_k__BackingField;
}

