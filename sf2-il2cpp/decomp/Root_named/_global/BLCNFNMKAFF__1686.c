// TypeDefIndex 1686
// Namespace: 
// public class BLCNFNMKAFF : HPEENDCCJND
// Fields:

// ===== protected override string AKPPNIPNKDH()  [RVA 0x31CF320]
// BLCNFNMKAFF$$AKPPNIPNKDH @ RVA 0x31CF320

System_String_o * BLCNFNMKAFF__AKPPNIPNKDH(BLCNFNMKAFF_o *__this,MethodInfo *method)

{
  if ((DAT_04566c95 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20260/*"pow( ?Fight[ZONE_v1|Tournament|v2].WinCount, v3)"*/);
    DAT_04566c95 = 1;
  }
  return StringLiteral_20260/*"pow( ?Fight[ZONE_v1|Tournament|v2].WinCount, v3)"*/;
}


// ===== public void .ctor()  [RVA 0x31CF360]
// BLCNFNMKAFF$$.ctor @ RVA 0x31CF360

void BLCNFNMKAFF___ctor(BLCNFNMKAFF_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x31CF368]
// BLCNFNMKAFF$$ODGFCLOEKJD @ RVA 0x31CF368

void BLCNFNMKAFF__ODGFCLOEKJD(BLCNFNMKAFF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t local_2c;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_04566c96 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04566c96 = 1;
  }
  local_24 = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,1,7,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  local_28 = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,1,0x18,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  local_2c = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,0,2,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_2c);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x31CF458]
// BLCNFNMKAFF$$CJOHHBMFAAG @ RVA 0x31CF458

Il2CppObject * BLCNFNMKAFF__CJOHHBMFAAG(BLCNFNMKAFF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_o *str3;
  NLPJLHOEAOE_o *__this_00;
  FightList_o *pAVar3;
  Il2CppObject *pIVar4;
  PAMEPBLOLPB_o *pPVar5;
  double dVar6;
  double local_48;
  int32_t local_34;
  
  if ((DAT_04566c97 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22490/*"|Tournament|"*/);
    FUN_01bab630(&StringLiteral_18233/*"fight not found"*/);
    FUN_01bab630(&StringLiteral_15235/*"ZONE_"*/);
    DAT_04566c97 = 1;
  }
  local_34 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  local_34 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  str3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat
                     (StringLiteral_15235/*"ZONE_"*/,pSVar2,StringLiteral_22490/*"|Tournament|"*/,str3,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar3 = NLPJLHOEAOE__POGAPHAJGBC(__this_00,pSVar2,(MethodInfo *)0x0);
  pIVar4 = StringLiteral_18233/*"fight not found"*/;
  if (pAVar3 != (FightList_o *)0x0) {
    pPVar5 = (pAVar3->fields).JPBIBBBMCCD;
    if (pPVar5 == (PAMEPBLOLPB_o *)0x0) {
      dVar6 = 0.0;
    }
    else {
      dVar6 = (double)(pPVar5->fields).AAECGBAMDEL;
    }
    iVar1 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    dVar6 = System_Math__Pow(dVar6,(double)iVar1,(MethodInfo *)0x0);
    local_48 = HPEENDCCJND__AJKIGPMHEEO((HPEENDCCJND_o *)__this,dVar6,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  }
  return pIVar4;
}

