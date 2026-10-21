// TypeDefIndex 1473
// Namespace: 
// public class ICBKPCDHONO : HPEENDCCJND
// Fields:

// ===== protected override object CJOHHBMFAAG()  [RVA 0x31953AC]
// ICBKPCDHONO$$CJOHHBMFAAG @ RVA 0x31953AC

Il2CppObject * ICBKPCDHONO__CJOHHBMFAAG(ICBKPCDHONO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str3;
  NLPJLHOEAOE_o *__this_00;
  AFFHKININGD_o *pAVar2;
  PAMEPBLOLPB_o *pPVar3;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04566a68 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22490/*"|Tournament|"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_18233/*"fight not found"*/);
    FUN_01bab630(&StringLiteral_15235/*"ZONE_"*/);
    FUN_01bab630(&StringLiteral_21620/*"tutorial_move_switch{prefabid:;.,)("*/);
    DAT_04566a68 = 1;
  }
  local_34 = 0;
  local_38 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
  local_38 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  str3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (StringLiteral_15235/*"ZONE_"*/,pSVar1,StringLiteral_22490/*"|Tournament|"*/,str3,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pAVar2 = NLPJLHOEAOE__POGAPHAJGBC(__this_00,pSVar1,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_18233/*"fight not found"*/;
  if (pAVar2 != (AFFHKININGD_o *)0x0) {
    pPVar3 = (pAVar2->fields).JPBIBBBMCCD;
    local_34 = 0;
    if (pPVar3 != (PAMEPBLOLPB_o *)0x0) {
      local_34 = (pPVar3->fields).AAECGBAMDEL;
    }
    pSVar1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_21620/*"tutorial_move_switch{prefabid:;.,)("*/,pSVar1,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0)
    ;
  }
  return (Il2CppObject *)pSVar1;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x3195538]
// ICBKPCDHONO$$AKPPNIPNKDH @ RVA 0x3195538

System_String_o * ICBKPCDHONO__AKPPNIPNKDH(ICBKPCDHONO_o *__this,MethodInfo *method)

{
  if ((DAT_04566a69 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2496/*"?Concat[ tutorial_move_switch@{prefabid, @:, @;, @., @,@)@( , ?Fight[ZONE_v1|Tournament|v2].WinCount, @} ]"*/);
    DAT_04566a69 = 1;
  }
  return StringLiteral_2496/*"?Concat[ tutorial_move_switch@{prefabid, @:, @;, @., @,@)@( , ?Fight[ZONE_v1|Tournament|v2].WinCount, @} ]"*/;
}


// ===== public void .ctor()  [RVA 0x3195578]
// ICBKPCDHONO$$.ctor @ RVA 0x3195578

void ICBKPCDHONO___ctor(ICBKPCDHONO_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x3195580]
// ICBKPCDHONO$$ODGFCLOEKJD @ RVA 0x3195580

void ICBKPCDHONO__ODGFCLOEKJD(ICBKPCDHONO_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_04566a6a & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04566a6a = 1;
  }
  local_24 = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,1,7,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  local_28 = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,1,0x18,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  return;
}

