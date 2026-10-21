// TypeDefIndex 1621
// Namespace: 
// public class OMBBEJKHLAF : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x31BC64C]
// OMBBEJKHLAF$$ODGFCLOEKJD @ RVA 0x31BC64C

void OMBBEJKHLAF__ODGFCLOEKJD(OMBBEJKHLAF_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_04566bf3 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_04566bf3 = 1;
  }
  iVar1 = 10;
  do {
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,-1000,1000,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x31BC6D4]
// OMBBEJKHLAF$$AKPPNIPNKDH @ RVA 0x31BC6D4

System_String_o * OMBBEJKHLAF__AKPPNIPNKDH(OMBBEJKHLAF_o *__this,MethodInfo *method)

{
  if ((DAT_04566bf4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1085/*"(v1 * ?Player[].Level) - ?Purchase[_$Purchase].UpgradeLevel + ?Sub[-v2, +(+v3)] -- ?Multi[+v4, ?Sum[v5, -(v6)] ]"*/);
    DAT_04566bf4 = 1;
  }
  return StringLiteral_1085/*"(v1 * ?Player[].Level) - ?Purchase[_$Purchase].UpgradeLevel + ?Sub[-v2, +(+v3)] -- ?Multi[+v4, ?Sum[v5, -(v6)] ]"*/;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x31BC714]
// OMBBEJKHLAF$$CJOHHBMFAAG @ RVA 0x31BC714

Il2CppObject * OMBBEJKHLAF__CJOHHBMFAAG(OMBBEJKHLAF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  Il2CppObject *pIVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_48;
  
  if ((DAT_04566bf5 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566bf5 = 1;
  }
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
    dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
    dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
    dVar7 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
    dVar8 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
    local_48 = HPEENDCCJND__AJKIGPMHEEO
                         ((HPEENDCCJND_o *)__this,
                          dVar3 * (double)iVar1 + (-dVar4 - dVar5) + dVar6 * (dVar7 - dVar8),
                          (MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31BC890]
// OMBBEJKHLAF$$.ctor @ RVA 0x31BC890

void OMBBEJKHLAF___ctor(OMBBEJKHLAF_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}

