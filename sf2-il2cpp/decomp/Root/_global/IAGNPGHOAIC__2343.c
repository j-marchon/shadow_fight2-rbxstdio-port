// TypeDefIndex 2343
// Namespace: 
// public class IAGNPGHOAIC
// Fields:
//   private string OMJHOKDPLKI; // 0x10
//   private string KONIAHBKEKO; // 0x18
//   private AssetBundle IMJGDBPFCLJ; // 0x20

// ===== public string[] CIIONFHFKGB()  [RVA 0x332294C]
// IAGNPGHOAIC$$CIIONFHFKGB @ RVA 0x332294C

System_String_array * IAGNPGHOAIC__CIIONFHFKGB(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_AssetBundle_o *__this_00;
  System_String_array *pSVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567857 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04567857 = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).IMJGDBPFCLJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields).IMJGDBPFCLJ;
    if (__this_00 != (UnityEngine_AssetBundle_o *)0x0) {
      pSVar2 = UnityEngine_AssetBundle__GetAllAssetNames(__this_00,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034229e4 to 03522b2b has its CatchHandler @ 034229e4
                       catch() { ... } // from try @ 034229e4 with catch @ 034229e4
                       catch() { ... } // from try @ 03422b7c with catch @ 034229e4
                       catch() { ... } // from try @ 034232b8 with catch @ 034229e4
                       catch() { ... } // from try @ 034232ec with catch @ 034229e4
                       catch() { ... } // from try @ 0342331c with catch @ 034229e4 */
  pSVar2 = (System_String_array *)FUN_01bab718(string___TypeInfo,0);
  return pSVar2;
}


// ===== public string JONLIEENDIA()  [RVA 0x33229EC]
// IAGNPGHOAIC$$JONLIEENDIA @ RVA 0x33229EC

System_String_o * IAGNPGHOAIC__JONLIEENDIA(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  return (__this->fields).KONIAHBKEKO;
}


// ===== public void BKCFPHNEONL()  [RVA 0x33229F4]
// IAGNPGHOAIC$$BKCFPHNEONL @ RVA 0x33229F4

void IAGNPGHOAIC__BKCFPHNEONL(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_AssetBundle_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_AssetBundle_o **ppUVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567858 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567858 = 1;
    method = extraout_x1;
  }
  ppUVar4 = &(__this->fields).IMJGDBPFCLJ;
  x = (UnityEngine_Object_o *)*ppUVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = IAGNPGHOAIC__DCLCMBBOGDD(__this,method_00);
    bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = IAGNPGHOAIC__DCLCMBBOGDD(__this,method_01);
      pUVar3 = UnityEngine_AssetBundle__LoadFromFile(pSVar2,(MethodInfo *)0x0);
      *ppUVar4 = pUVar3;
      thunk_FUN_01c20e04(ppUVar4);
    }
  }
  return;
}


// ===== public string FDHHBJPKODG()  [RVA 0x3322BC0]
// IAGNPGHOAIC$$FDHHBJPKODG @ RVA 0x3322BC0

System_String_o * IAGNPGHOAIC__FDHHBJPKODG(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  return (__this->fields).OMJHOKDPLKI;
}


// ===== public void .ctor(string BDHMGKOBICA, string AMBCAJJIEOE)  [RVA 0x3322BC8]
// IAGNPGHOAIC$$.ctor @ RVA 0x3322BC8

void IAGNPGHOAIC___ctor(IAGNPGHOAIC_o *__this,System_String_o *BDHMGKOBICA,
                       System_String_o *AMBCAJJIEOE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OMJHOKDPLKI = BDHMGKOBICA;
  thunk_FUN_01c20e04(&__this->fields,BDHMGKOBICA);
  ppSVar1 = &(__this->fields).KONIAHBKEKO;
  *ppSVar1 = AMBCAJJIEOE;
  thunk_FUN_01c20e04(ppSVar1,AMBCAJJIEOE);
  return;
}


// ===== public string DCLCMBBOGDD()  [RVA 0x3322B48]
// IAGNPGHOAIC$$DCLCMBBOGDD @ RVA 0x3322B48

System_String_o * IAGNPGHOAIC__DCLCMBBOGDD(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03422b48 to 03522b5f has its CatchHandler @ 034232cc */
                    /* try { // try from 03422b60 to 03522b7b has its CatchHandler @ 034232d0 */
  if ((DAT_04567859 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 03422b7c to 035232a7 has its CatchHandler @ 034229e4 */
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04567859 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (pSVar1,StringLiteral_1492/*"/"*/,(__this->fields).OMJHOKDPLKI,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool BKALFJAFEOE()  [RVA 0x3322C0C]
// IAGNPGHOAIC$$BKALFJAFEOE @ RVA 0x3322C0C

bool IAGNPGHOAIC__BKALFJAFEOE(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456785a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456785a = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).IMJGDBPFCLJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void GMPIHBHDDLJ()  [RVA 0x3322C6C]
// IAGNPGHOAIC$$GMPIHBHDDLJ @ RVA 0x3322C6C

void IAGNPGHOAIC__GMPIHBHDDLJ(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  System_String_o *AAIHDEKMIJG;
  
  AAIHDEKMIJG = IAGNPGHOAIC__DCLCMBBOGDD(__this,method);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  return;
}


// ===== public static string HLLOEIGKDPL(string EIJDDKJONFO)  [RVA 0x3322C80]
// IAGNPGHOAIC$$HLLOEIGKDPL @ RVA 0x3322C80

System_String_o * IAGNPGHOAIC__HLLOEIGKDPL(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  GCFHEEKPCPJ_o *__this;
  
  if ((DAT_0456785b & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_0456785b = 1;
    method = extraout_x1;
  }
  if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGAGKCEDNNN_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo,method);
  }
  pSVar1 = CLFCKIFNGHA__DPHMDPHEIKO((MethodInfo *)0x0);
  if (__this != (GCFHEEKPCPJ_o *)0x0) {
    pSVar1 = GCFHEEKPCPJ__OHJODGBLEIN(__this,EIJDDKJONFO,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BMMOAFKFHNN(bool EEODCFBPGAL = False)  [RVA 0x3322D24]
// IAGNPGHOAIC$$BMMOAFKFHNN @ RVA 0x3322D24

void IAGNPGHOAIC__BMMOAFKFHNN(IAGNPGHOAIC_o *__this,bool EEODCFBPGAL,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_AssetBundle_o **ppUVar2;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456785c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456785c = 1;
  }
  ppUVar2 = &(__this->fields).IMJGDBPFCLJ;
  x = (UnityEngine_Object_o *)*ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (*ppUVar2 != (UnityEngine_AssetBundle_o *)0x0) {
    UnityEngine_AssetBundle__Unload(*ppUVar2,EEODCFBPGAL,(MethodInfo *)0x0);
    *ppUVar2 = (UnityEngine_AssetBundle_o *)0x0;
    thunk_FUN_01c20e04(ppUVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool PBACHEOJBGG()  [RVA 0x3322DCC]
// IAGNPGHOAIC$$PBACHEOJBGG @ RVA 0x3322DCC

bool IAGNPGHOAIC__PBACHEOJBGG(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  pSVar2 = IAGNPGHOAIC__DCLCMBBOGDD(__this,method);
  pSVar2 = IAGNPGHOAIC__HLLOEIGKDPL(pSVar2,method_00);
  bVar1 = System_String__op_Equality((__this->fields).KONIAHBKEKO,pSVar2,(MethodInfo *)0x0);
  return bVar1;
}

