// TypeDefIndex 1268
// Namespace: 
// public class BKIEPGOFNHA : HPEENDCCJND
// Fields:

// ===== public void .ctor()  [RVA 0x314C3A4]
// BKIEPGOFNHA$$.ctor @ RVA 0x314C3A4

void BKIEPGOFNHA___ctor(BKIEPGOFNHA_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private string IKNABHOIHHE()  [RVA 0x314C3AC]
// BKIEPGOFNHA$$IKNABHOIHHE @ RVA 0x314C3AC

System_String_o * BKIEPGOFNHA__IKNABHOIHHE(BKIEPGOFNHA_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  undefined8 *puVar2;
  
  if ((DAT_045667cf & 1) == 0) {
    FUN_01bab630(&StringLiteral_1411/*".12345"*/);
    FUN_01bab630(&StringLiteral_1440/*".5555"*/);
    FUN_01bab630(&StringLiteral_1404/*".00000"*/);
    FUN_01bab630(&StringLiteral_1149/*"+.5"*/);
    FUN_01bab630(&StringLiteral_1316/*"-.8"*/);
    FUN_01bab630(&StringLiteral_1403/*".0"*/);
    DAT_045667cf = 1;
  }
  iVar1 = UnityEngine_Random__Range(0,10,(MethodInfo *)0x0);
  if (iVar1 < 10) {
    if (iVar1 == 9) {
      puVar2 = &StringLiteral_1440/*".5555"*/;
    }
    else if (iVar1 < 8) {
      if (iVar1 < 3) {
        puVar2 = &StringLiteral_1404/*".00000"*/;
        if (iVar1 != 2) {
          puVar2 = &StringLiteral_1403/*".0"*/;
        }
      }
      else {
        puVar2 = &StringLiteral_1411/*".12345"*/;
      }
    }
    else {
      puVar2 = &StringLiteral_1149/*"+.5"*/;
    }
  }
  else {
    puVar2 = &StringLiteral_1316/*"-.8"*/;
  }
  return (System_String_o *)*puVar2;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x314C488]
// BKIEPGOFNHA$$AKPPNIPNKDH @ RVA 0x314C488

System_String_o * BKIEPGOFNHA__AKPPNIPNKDH(BKIEPGOFNHA_o *__this,MethodInfo *method)

{
  if ((DAT_045667d0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_21923/*"v1 + ?Test.TestValue[ v2 ]"*/);
    DAT_045667d0 = 1;
  }
  return StringLiteral_21923/*"v1 + ?Test.TestValue[ v2 ]"*/;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x314C4C8]
// BKIEPGOFNHA$$ODGFCLOEKJD @ RVA 0x314C4C8

void BKIEPGOFNHA__ODGFCLOEKJD(BKIEPGOFNHA_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  BKIEPGOFNHA_o *__this_00;
  MethodInfo *method_00;
  
  pSVar1 = BKIEPGOFNHA__IKNABHOIHHE(__this,method);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = BKIEPGOFNHA__IKNABHOIHHE(__this_00,method_00);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x314C4FC]
// BKIEPGOFNHA$$CJOHHBMFAAG @ RVA 0x314C4FC

Il2CppObject * BKIEPGOFNHA__CJOHHBMFAAG(BKIEPGOFNHA_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  double dVar3;
  double dVar4;
  double local_28;
  
  if ((DAT_045667d1 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    DAT_045667d1 = 1;
  }
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  local_28 = HPEENDCCJND__AJKIGPMHEEO((HPEENDCCJND_o *)__this,dVar3 + dVar4,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
  return pIVar2;
}


// ===== private double NFOKEJDBDPI(int OGPGLGPMEPD)  [RVA 0x314C598]
// BKIEPGOFNHA$$NFOKEJDBDPI @ RVA 0x314C598

double BKIEPGOFNHA__NFOKEJDBDPI(BKIEPGOFNHA_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_String_o *ODAMFBHJKIH;
  double dVar1;
  
  ODAMFBHJKIH = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,OGPGLGPMEPD,(MethodInfo *)0x0);
  dVar1 = BKOHHDBBJML__HNIHOIAMDPC(ODAMFBHJKIH,(MethodInfo *)0x0);
  return dVar1;
}

