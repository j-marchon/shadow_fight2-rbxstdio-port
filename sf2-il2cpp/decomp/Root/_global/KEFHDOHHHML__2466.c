// TypeDefIndex 2466
// Namespace: 
// public class KEFHDOHHHML
// Fields:
//   private string <GOBNFBDNIHO>k__BackingField; // 0x10
//   private int <JOCIAOOICNM>k__BackingField; // 0x18
//   private string <IDFLEFCOAJP>k__BackingField; // 0x20
//   private int <CNAECKJLKEA>k__BackingField; // 0x28
//   private object <GOFDPKCMIJO>k__BackingField; // 0x30
//   private List<string> <DAOJDNDBECB>k__BackingField; // 0x38
//   private IMessage <KJKKPKOGOHD>k__BackingField; // 0x40
//   private bool NILBOLKCPMB; // 0x48

// ===== public bool JMHHBGKJLFE()  [RVA 0x3370154]
// KEFHDOHHHML$$JMHHBGKJLFE @ RVA 0x3370154

bool KEFHDOHHHML__JMHHBGKJLFE(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  bVar1 = KEFHDOHHHML__POGOAAIANMM(__this,method);
  if ((!bVar1) && (bVar1 = KEFHDOHHHML__GCCCNCDNDFM(__this,method_00), !bVar1)) {
    bVar1 = KEFHDOHHHML__EFPFBFMBCBO(__this,method_01);
    return bVar1;
  }
  return true;
}


// ===== public bool JKJADOKFMAA(Enum MFDCCBAJNIO)  [RVA 0x33702E4]
// KEFHDOHHHML$$JKJADOKFMAA @ RVA 0x33702E4

bool KEFHDOHHHML__JKJADOKFMAA(KEFHDOHHHML_o *__this,System_Enum_o *MFDCCBAJNIO,MethodInfo *method)

{
  int iVar1;
  int32_t MFDCCBAJNIO_00;
  System_String_o *item;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04567b13 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__);
    DAT_04567b13 = 1;
  }
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MFDCCBAJNIO_00 = System_Convert__ToInt32((Il2CppObject *)MFDCCBAJNIO,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._DAOJDNDBECB_k__BackingField;
  item = KEFHDOHHHML__MMKHHPBIDDN(MFDCCBAJNIO_00,method_00);
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
               Method_System_Collections_Generic_List<string>_Remove__);
    iVar1 = (__this->fields)._JOCIAOOICNM_k__BackingField;
    if (iVar1 == MFDCCBAJNIO_00) {
      (__this->fields).NILBOLKCPMB = true;
    }
    return iVar1 == MFDCCBAJNIO_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string MMKHHPBIDDN(int MFDCCBAJNIO)  [RVA 0x33703A0]
// KEFHDOHHHML$$MMKHHPBIDDN @ RVA 0x33703A0

System_String_o * KEFHDOHHHML__MMKHHPBIDDN(int32_t MFDCCBAJNIO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  int32_t local_24;
  
  local_24 = MFDCCBAJNIO;
  if ((DAT_04567b14 & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_OKJAFHHHPFC<ADPIHKFDKPI>__);
    FUN_01bab630(&Method_KEFHDOHHHML_OKJAFHHHPFC<CADMAOBOPOC>__);
    FUN_01bab630(&Method_KEFHDOHHHML_OKJAFHHHPFC<GIJADLLNPBG>__);
    DAT_04567b14 = 1;
  }
  value = KEFHDOHHHML__OKJAFHHHPFC<Int32Enum>
                    (MFDCCBAJNIO,Method_KEFHDOHHHML_OKJAFHHHPFC<ADPIHKFDKPI>__);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    value = KEFHDOHHHML__OKJAFHHHPFC<Int32Enum>
                      (MFDCCBAJNIO,Method_KEFHDOHHHML_OKJAFHHHPFC<GIJADLLNPBG>__);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      value = KEFHDOHHHML__OKJAFHHHPFC<Int32Enum>
                        (MFDCCBAJNIO,Method_KEFHDOHHHML_OKJAFHHHPFC<CADMAOBOPOC>__);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar1) {
        value = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      }
    }
  }
  return value;
}


// ===== private IMessage DHCGFCMGHIN()  [RVA 0x337047C]
// KEFHDOHHHML$$DHCGFCMGHIN @ RVA 0x337047C

Google_Protobuf_IMessage_o * KEFHDOHHHML__DHCGFCMGHIN(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return (__this->fields)._KJKKPKOGOHD_k__BackingField;
}


// ===== private void IPNMMELEIJE(string CJNHFNHJHPE)  [RVA 0x3370484]
// KEFHDOHHHML$$IPNMMELEIJE @ RVA 0x3370484

void KEFHDOHHHML__IPNMMELEIJE(KEFHDOHHHML_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IDFLEFCOAJP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool BOJJBGPIKDP()  [RVA 0x3364384]
// KEFHDOHHHML$$BOJJBGPIKDP @ RVA 0x3364384

bool KEFHDOHHHML__BOJJBGPIKDP(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  int32_t HDIEJGBHAML;
  bool bVar1;
  System_Enum_o *JPLEIGKMFDA;
  undefined4 local_24;
  
  if ((DAT_04567b15 & 1) == 0) {
    FUN_01bab630(&GIJADLLNPBG_TypeInfo);
    DAT_04567b15 = 1;
  }
  HDIEJGBHAML = (__this->fields)._JOCIAOOICNM_k__BackingField;
  local_24 = 0;
  JPLEIGKMFDA = (System_Enum_o *)thunk_FUN_01bda448(GIJADLLNPBG_TypeInfo,&local_24);
  bVar1 = AEEKBFGFKGH__EPBENPDCBFE(HDIEJGBHAML,JPLEIGKMFDA,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void .ctor(string KGLJICLJHEL, IMessage HJEKJFLBKDB, int CEOLOKFCKIG, string NONPLOOOOAG, int BMBCPGEOCCJ, object IMMNELPBGIF)  [RVA 0x337048C]
// KEFHDOHHHML$$.ctor @ RVA 0x337048C

void KEFHDOHHHML___ctor(KEFHDOHHHML_o *__this,System_String_o *KGLJICLJHEL,
                       Google_Protobuf_IMessage_o *HJEKJFLBKDB,int32_t CEOLOKFCKIG,
                       System_String_o *NONPLOOOOAG,int32_t BMBCPGEOCCJ,Il2CppObject *IMMNELPBGIF,
                       MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_IMessage_o **ppGVar2;
  System_String_o **ppSVar3;
  Il2CppObject **ppIVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_o *pSVar6;
  System_Object_array *args;
  long lVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04567b16 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_2094/*": cmd={0} error=<b>{1}</b> message={2}"*/);
    DAT_04567b16 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._GOBNFBDNIHO_k__BackingField = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  ppGVar2 = &(__this->fields)._KJKKPKOGOHD_k__BackingField;
  *ppGVar2 = HJEKJFLBKDB;
  thunk_FUN_01c20e04(ppGVar2,HJEKJFLBKDB);
  (__this->fields)._JOCIAOOICNM_k__BackingField = CEOLOKFCKIG;
  ppSVar3 = &(__this->fields)._IDFLEFCOAJP_k__BackingField;
  *ppSVar3 = NONPLOOOOAG;
  thunk_FUN_01c20e04(ppSVar3,NONPLOOOOAG);
  ppIVar4 = &(__this->fields)._GOFDPKCMIJO_k__BackingField;
  *ppIVar4 = IMMNELPBGIF;
  (__this->fields)._CNAECKJLKEA_k__BackingField = BMBCPGEOCCJ;
  thunk_FUN_01c20e04(ppIVar4,IMMNELPBGIF);
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = ICOEHFKOMGO__BKHDOCFLEPE(KGLJICLJHEL,(MethodInfo *)0x0);
  (__this->fields)._DAOJDNDBECB_k__BackingField = pSVar5;
  thunk_FUN_01c20e04();
  if ((CEOLOKFCKIG == 0) || (bVar1 = KEFHDOHHHML__GCCCNCDNDFM(__this,method_00), bVar1)) {
    return;
  }
  pSVar6 = KEFHDOHHHML__KGHBPJNEKMA(__this,method_01);
  pSVar6 = System_String__Concat(pSVar6,StringLiteral_2094/*": cmd={0} error=<b>{1}</b> message={2}"*/,(MethodInfo *)0x0);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((KGLJICLJHEL != (System_String_o *)0x0) &&
     (lVar7 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class), lVar7 == 0))
  {
LAB_034706d4:
    uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar9,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
    thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
    pSVar8 = KEFHDOHHHML__MMKHHPBIDDN((__this->fields)._JOCIAOOICNM_k__BackingField,method_02);
    if ((pSVar8 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar7 == 0))
    goto LAB_034706d4;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar8);
      if ((NONPLOOOOAG != (System_String_o *)0x0) &&
         (lVar7 = thunk_FUN_01bda71c(NONPLOOOOAG,(((args->obj).klass)->_1).element_class),
         lVar7 == 0)) goto LAB_034706d4;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)NONPLOOOOAG;
        thunk_FUN_01c20e04(args->m_Items + 2,NONPLOOOOAG);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(pSVar6,args,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static KEFHDOHHHML DLLJANMABCA(string CELOLGNMKCG, object IMMNELPBGIF, string IILEPKAGDGC)  [RVA 0x337079C]
// KEFHDOHHHML$$DLLJANMABCA @ RVA 0x337079C

KEFHDOHHHML_o *
KEFHDOHHHML__DLLJANMABCA
          (System_String_o *CELOLGNMKCG,Il2CppObject *IMMNELPBGIF,System_String_o *IILEPKAGDGC,
          MethodInfo *method)

{
  KEFHDOHHHML_o *__this;
  MethodInfo *in_x7;
  
  if ((DAT_04567b17 & 1) == 0) {
    FUN_01bab630(&KEFHDOHHHML_TypeInfo);
    DAT_04567b17 = 1;
  }
  __this = (KEFHDOHHHML_o *)thunk_FUN_01bda818(KEFHDOHHHML_TypeInfo);
  KEFHDOHHHML___ctor(__this,CELOLGNMKCG,(Google_Protobuf_IMessage_o *)0x0,-0x65,IILEPKAGDGC,-1,
                     IMMNELPBGIF,in_x7);
  return __this;
}


// ===== public void IIKPNGJAJIH(object CJNHFNHJHPE)  [RVA 0x3370818]
// KEFHDOHHHML$$IIKPNGJAJIH @ RVA 0x3370818

void KEFHDOHHHML__IIKPNGJAJIH(KEFHDOHHHML_o *__this,Il2CppObject *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GOFDPKCMIJO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static string BGNLBFEHDFA(Enum MFDCCBAJNIO)  [RVA 0x3370820]
// KEFHDOHHHML$$BGNLBFEHDFA @ RVA 0x3370820

System_String_o * KEFHDOHHHML__BGNLBFEHDFA(System_Enum_o *MFDCCBAJNIO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  pSVar1 = KEFHDOHHHML__MMKHHPBIDDN(MFDCCBAJNIO,method);
  pSVar1 = KEFHDOHHHML__BGNLBFEHDFA(pSVar1,method_00);
  return pSVar1;
}


// ===== public bool POGOAAIANMM()  [RVA 0x3370188]
// KEFHDOHHHML$$POGOAAIANMM @ RVA 0x3370188

bool KEFHDOHHHML__POGOAAIANMM(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  int32_t HDIEJGBHAML;
  bool bVar1;
  System_Enum_o *JPLEIGKMFDA;
  undefined4 local_24;
  
  if ((DAT_04567b18 & 1) == 0) {
    FUN_01bab630(&ADPIHKFDKPI_TypeInfo);
    DAT_04567b18 = 1;
  }
  HDIEJGBHAML = (__this->fields)._JOCIAOOICNM_k__BackingField;
  local_24 = 0xffffff9b;
  JPLEIGKMFDA = (System_Enum_o *)thunk_FUN_01bda448(ADPIHKFDKPI_TypeInfo,&local_24);
  bVar1 = AEEKBFGFKGH__EPBENPDCBFE(HDIEJGBHAML,JPLEIGKMFDA,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public bool GCCCNCDNDFM()  [RVA 0x33701FC]
// KEFHDOHHHML$$GCCCNCDNDFM @ RVA 0x33701FC

bool KEFHDOHHHML__GCCCNCDNDFM(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  int32_t HDIEJGBHAML;
  bool bVar1;
  System_Enum_o *JPLEIGKMFDA;
  undefined4 local_24;
  
  if ((DAT_04567b19 & 1) == 0) {
    FUN_01bab630(&ADPIHKFDKPI_TypeInfo);
    DAT_04567b19 = 1;
  }
  HDIEJGBHAML = (__this->fields)._JOCIAOOICNM_k__BackingField;
  local_24 = 0xffffff9c;
  JPLEIGKMFDA = (System_Enum_o *)thunk_FUN_01bda448(ADPIHKFDKPI_TypeInfo,&local_24);
  bVar1 = AEEKBFGFKGH__EPBENPDCBFE(HDIEJGBHAML,JPLEIGKMFDA,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public string CNNCHPPECHP()  [RVA 0x33708D8]
// KEFHDOHHHML$$CNNCHPPECHP @ RVA 0x33708D8

System_String_o * KEFHDOHHHML__CNNCHPPECHP(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return (__this->fields)._IDFLEFCOAJP_k__BackingField;
}


// ===== public static string MMKHHPBIDDN(Enum MFDCCBAJNIO)  [RVA 0x3370830]
// KEFHDOHHHML$$MMKHHPBIDDN @ RVA 0x3370830

System_String_o * KEFHDOHHHML__MMKHHPBIDDN(System_Enum_o *MFDCCBAJNIO,MethodInfo *method)

{
  int32_t MFDCCBAJNIO_00;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567b1a & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    DAT_04567b1a = 1;
    method = extraout_x1;
  }
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo,method);
  }
  MFDCCBAJNIO_00 = System_Convert__ToInt32((Il2CppObject *)MFDCCBAJNIO,(MethodInfo *)0x0);
  pSVar1 = KEFHDOHHHML__MMKHHPBIDDN(MFDCCBAJNIO_00,method_00);
  return pSVar1;
}


// ===== public string KGHBPJNEKMA()  [RVA 0x33706E4]
// KEFHDOHHHML$$KGHBPJNEKMA @ RVA 0x33706E4

System_String_o * KEFHDOHHHML__KGHBPJNEKMA(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  
  if ((DAT_04567b1b & 1) == 0) {
    FUN_01bab630(&StringLiteral_4429/*"Client Request Error"*/);
    FUN_01bab630(&StringLiteral_9439/*"No Error"*/);
    FUN_01bab630(&StringLiteral_11851/*"Server Request Error"*/);
    FUN_01bab630(&StringLiteral_14464/*"Unknown Error Type"*/);
    DAT_04567b1b = 1;
    method = extraout_x1;
  }
  bVar1 = KEFHDOHHHML__JMHHBGKJLFE(__this,method);
  if (bVar1) {
    puVar2 = &StringLiteral_4429/*"Client Request Error"*/;
  }
  else if ((__this->fields)._JOCIAOOICNM_k__BackingField < 1) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(__this,method_00);
    puVar2 = &StringLiteral_9439/*"No Error"*/;
    if (!bVar1) {
      puVar2 = &StringLiteral_14464/*"Unknown Error Type"*/;
    }
  }
  else {
    puVar2 = &StringLiteral_11851/*"Server Request Error"*/;
  }
  return (System_String_o *)*puVar2;
}


// ===== public int CKDKKPICMKH()  [RVA 0x33708F0]
// KEFHDOHHHML$$CKDKKPICMKH @ RVA 0x33708F0

int32_t KEFHDOHHHML__CKDKKPICMKH(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return (__this->fields)._JOCIAOOICNM_k__BackingField;
}


// ===== private void GINHADEPBLL(int CJNHFNHJHPE)  [RVA 0x33708F8]
// KEFHDOHHHML$$GINHADEPBLL @ RVA 0x33708F8

void KEFHDOHHHML__GINHADEPBLL(KEFHDOHHHML_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JOCIAOOICNM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool EFPFBFMBCBO()  [RVA 0x3370270]
// KEFHDOHHHML$$EFPFBFMBCBO @ RVA 0x3370270

bool KEFHDOHHHML__EFPFBFMBCBO(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  int32_t HDIEJGBHAML;
  bool bVar1;
  System_Enum_o *JPLEIGKMFDA;
  undefined4 local_24;
  
  if ((DAT_04567b1c & 1) == 0) {
    FUN_01bab630(&ADPIHKFDKPI_TypeInfo);
    DAT_04567b1c = 1;
  }
  HDIEJGBHAML = (__this->fields)._JOCIAOOICNM_k__BackingField;
  local_24 = 0xffffff9a;
  JPLEIGKMFDA = (System_Enum_o *)thunk_FUN_01bda448(ADPIHKFDKPI_TypeInfo,&local_24);
  bVar1 = AEEKBFGFKGH__EPBENPDCBFE(HDIEJGBHAML,JPLEIGKMFDA,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public object LFCBPBFLNDA()  [RVA 0x3370900]
// KEFHDOHHHML$$LFCBPBFLNDA @ RVA 0x3370900

Il2CppObject * KEFHDOHHHML__LFCBPBFLNDA(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return (__this->fields)._GOFDPKCMIJO_k__BackingField;
}


// ===== public static KEFHDOHHHML IEIOMCBGLNK(string CELOLGNMKCG, object IMMNELPBGIF, string DNNECLGIFIG = "request canceled")  [RVA 0x3370908]
// KEFHDOHHHML$$IEIOMCBGLNK @ RVA 0x3370908

KEFHDOHHHML_o *
KEFHDOHHHML__IEIOMCBGLNK
          (System_String_o *CELOLGNMKCG,Il2CppObject *IMMNELPBGIF,System_String_o *DNNECLGIFIG,
          MethodInfo *method)

{
  KEFHDOHHHML_o *__this;
  MethodInfo *in_x7;
  
  if ((DAT_04567b1d & 1) == 0) {
    FUN_01bab630(&KEFHDOHHHML_TypeInfo);
    DAT_04567b1d = 1;
  }
  __this = (KEFHDOHHHML_o *)thunk_FUN_01bda818(KEFHDOHHHML_TypeInfo);
  KEFHDOHHHML___ctor(__this,CELOLGNMKCG,(Google_Protobuf_IMessage_o *)0x0,-0x66,DNNECLGIFIG,-1,
                     IMMNELPBGIF,in_x7);
  return __this;
}


// ===== private void HLKPJIBHHKB(int CJNHFNHJHPE)  [RVA 0x3370984]
// KEFHDOHHHML$$HLKPJIBHHKB @ RVA 0x3370984

void KEFHDOHHHML__HLKPJIBHHKB(KEFHDOHHHML_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CNAECKJLKEA_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static KEFHDOHHHML LDKCIHHCHCE(string CELOLGNMKCG, int BMBCPGEOCCJ, object IMMNELPBGIF, string JANAKDBJACC)  [RVA 0x337098C]
// KEFHDOHHHML$$LDKCIHHCHCE @ RVA 0x337098C

KEFHDOHHHML_o *
KEFHDOHHHML__LDKCIHHCHCE
          (System_String_o *CELOLGNMKCG,int32_t BMBCPGEOCCJ,Il2CppObject *IMMNELPBGIF,
          System_String_o *JANAKDBJACC,MethodInfo *method)

{
  System_String_o *NONPLOOOOAG;
  KEFHDOHHHML_o *__this;
  MethodInfo *in_x7;
  
  if ((DAT_04567b1e & 1) == 0) {
    FUN_01bab630(&KEFHDOHHHML_TypeInfo);
    FUN_01bab630(&StringLiteral_20532/*"request timeout. source:"*/);
    DAT_04567b1e = 1;
  }
  NONPLOOOOAG = System_String__Concat(StringLiteral_20532/*"request timeout. source:"*/,JANAKDBJACC,(MethodInfo *)0x0);
  __this = (KEFHDOHHHML_o *)thunk_FUN_01bda818(KEFHDOHHHML_TypeInfo);
  KEFHDOHHHML___ctor(__this,CELOLGNMKCG,(Google_Protobuf_IMessage_o *)0x0,-100,NONPLOOOOAG,
                     BMBCPGEOCCJ,IMMNELPBGIF,in_x7);
  return __this;
}


// ===== private void OFFDALALOLH(List<string> CJNHFNHJHPE)  [RVA 0x3370A40]
// KEFHDOHHHML$$OFFDALALOLH @ RVA 0x3370A40

void KEFHDOHHHML__OFFDALALOLH
               (KEFHDOHHHML_o *__this,System_Collections_Generic_List_string__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._DAOJDNDBECB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void AMMPCCNGHCB(IMessage CJNHFNHJHPE)  [RVA 0x3370A48]
// KEFHDOHHHML$$AMMPCCNGHCB @ RVA 0x3370A48

void KEFHDOHHHML__AMMPCCNGHCB
               (KEFHDOHHHML_o *__this,Google_Protobuf_IMessage_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KJKKPKOGOHD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<string> EEDEOJAFNAA()  [RVA 0x3370A50]
// KEFHDOHHHML$$EEDEOJAFNAA @ RVA 0x3370A50

System_Collections_Generic_List_string__o *
KEFHDOHHHML__EEDEOJAFNAA(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return (__this->fields)._DAOJDNDBECB_k__BackingField;
}


// ===== public int LLDAMCCJIKG()  [RVA 0x3370A58]
// KEFHDOHHHML$$LLDAMCCJIKG @ RVA 0x3370A58

int32_t KEFHDOHHHML__LLDAMCCJIKG(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return (__this->fields)._CNAECKJLKEA_k__BackingField;
}


// ===== public bool AIGAPMOFFEL()  [RVA 0x33708E0]
// KEFHDOHHHML$$AIGAPMOFFEL @ RVA 0x33708E0

bool KEFHDOHHHML__AIGAPMOFFEL(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields)._JOCIAOOICNM_k__BackingField;
}


// ===== public bool JKJADOKFMAA(Enum[] ALMDLFIEFLF)  [RVA 0x3370A60]
// KEFHDOHHHML$$JKJADOKFMAA @ RVA 0x3370A60

bool KEFHDOHHHML__JKJADOKFMAA
               (KEFHDOHHHML_o *__this,System_Enum_array *ALMDLFIEFLF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  
  if (ALMDLFIEFLF == (System_Enum_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)ALMDLFIEFLF->max_length < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    uVar5 = 0;
    uVar3 = ALMDLFIEFLF->max_length & 0xffffffff;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      bVar2 = KEFHDOHHHML__JKJADOKFMAA(__this,ALMDLFIEFLF->m_Items[uVar5],method);
      uVar1 = (uint)ALMDLFIEFLF->max_length;
      uVar3 = (ulong)uVar1;
      uVar5 = uVar5 + 1;
      bVar4 = (bool)(bVar4 | bVar2);
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  return bVar4;
}


// ===== public string JEFGHMCLOKN()  [RVA 0x3370AE0]
// KEFHDOHHHML$$JEFGHMCLOKN @ RVA 0x3370AE0

System_String_o * KEFHDOHHHML__JEFGHMCLOKN(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  return (__this->fields)._GOBNFBDNIHO_k__BackingField;
}


// ===== public string MMKHHPBIDDN()  [RVA 0x3370794]
// KEFHDOHHHML$$MMKHHPBIDDN @ RVA 0x3370794

System_String_o * KEFHDOHHHML__MMKHHPBIDDN(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = KEFHDOHHHML__MMKHHPBIDDN((__this->fields)._JOCIAOOICNM_k__BackingField,method);
  return pSVar1;
}


// ===== public bool LLJAPEFCDLD()  [RVA 0x3370AE8]
// KEFHDOHHHML$$LLJAPEFCDLD @ RVA 0x3370AE8

bool KEFHDOHHHML__LLJAPEFCDLD(KEFHDOHHHML_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(__this,method);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    bVar1 = (__this->fields).NILBOLKCPMB != false;
  }
  return bVar1;
}


// ===== public static string BGNLBFEHDFA(string JDCAKEIOAKD)  [RVA 0x337088C]
// KEFHDOHHHML$$BGNLBFEHDFA @ RVA 0x337088C

System_String_o * KEFHDOHHHML__BGNLBFEHDFA(System_String_o *JDCAKEIOAKD,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567b1f & 1) == 0) {
    FUN_01bab630(&StringLiteral_18077/*"error_"*/);
    DAT_04567b1f = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_18077/*"error_"*/,JDCAKEIOAKD,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private void HOCBANDDBDK(string CJNHFNHJHPE)  [RVA 0x3370B14]
// KEFHDOHHHML$$HOCBANDDBDK @ RVA 0x3370B14

void KEFHDOHHHML__HOCBANDDBDK(KEFHDOHHHML_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GOBNFBDNIHO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

