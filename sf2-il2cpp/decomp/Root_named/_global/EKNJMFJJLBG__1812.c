// TypeDefIndex 1812
// Namespace: 
// public class EKNJMFJJLBG : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x3219A88]
// EKNJMFJJLBG$$ODGFCLOEKJD @ RVA 0x3219A88

void EKNJMFJJLBG__ODGFCLOEKJD(EKNJMFJJLBG_o *__this,MethodInfo *method)

{
  System_String_o *MNODCIGLHEL;
  EKNJMFJJLBG_o *extraout_x0;
  MethodInfo *extraout_x1;
  int iVar1;
  EKNJMFJJLBG_o *__this_00;
  
  iVar1 = 4;
  __this_00 = __this;
  do {
    MNODCIGLHEL = EKNJMFJJLBG__IKNABHOIHHE(__this_00,method);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
    __this_00 = extraout_x0;
    method = extraout_x1;
  } while (iVar1 != 0);
  return;
}


// ===== private double NFOKEJDBDPI(int OGPGLGPMEPD)  [RVA 0x3219BF8]
// EKNJMFJJLBG$$NFOKEJDBDPI @ RVA 0x3219BF8

double EKNJMFJJLBG__NFOKEJDBDPI(EKNJMFJJLBG_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_String_o *ODAMFBHJKIH;
  double dVar1;
  
  ODAMFBHJKIH = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,OGPGLGPMEPD,(MethodInfo *)0x0);
  dVar1 = BKOHHDBBJML__HNIHOIAMDPC(ODAMFBHJKIH,(MethodInfo *)0x0);
  return dVar1;
}


// ===== public void .ctor()  [RVA 0x3219C10]
// EKNJMFJJLBG$$.ctor @ RVA 0x3219C10

void EKNJMFJJLBG___ctor(EKNJMFJJLBG_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x3219C18]
// EKNJMFJJLBG$$AKPPNIPNKDH @ RVA 0x3219C18

System_String_o * EKNJMFJJLBG__AKPPNIPNKDH(EKNJMFJJLBG_o *__this,MethodInfo *method)

{
  if ((DAT_04566eef & 1) == 0) {
    FUN_01bab630(&StringLiteral_21172/*"sqrt(abs(?Sum[v1, v2, v3, v4]))"*/);
    DAT_04566eef = 1;
  }
  return StringLiteral_21172/*"sqrt(abs(?Sum[v1, v2, v3, v4]))"*/;
}


// ===== private string IKNABHOIHHE()  [RVA 0x3219AC0]
// EKNJMFJJLBG$$IKNABHOIHHE @ RVA 0x3219AC0

System_String_o * EKNJMFJJLBG__IKNABHOIHHE(EKNJMFJJLBG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  undefined8 *puVar2;
  
  if ((DAT_04566ef0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1411/*".12345"*/);
    FUN_01bab630(&StringLiteral_1440/*".5555"*/);
    FUN_01bab630(&StringLiteral_1404/*".00000"*/);
    FUN_01bab630(&StringLiteral_1314/*"-.0"*/);
    FUN_01bab630(&StringLiteral_1320/*"-0.12345"*/);
    FUN_01bab630(&StringLiteral_1149/*"+.5"*/);
    FUN_01bab630(&StringLiteral_1321/*"-0.8"*/);
    FUN_01bab630(&StringLiteral_1570/*"0.0"*/);
    FUN_01bab630(&StringLiteral_1576/*"0.12345"*/);
    DAT_04566ef0 = 1;
  }
  iVar1 = UnityEngine_Random__Range(0,10,(MethodInfo *)0x0);
  if (iVar1 < 10) {
    if (iVar1 == 9) {
      puVar2 = &StringLiteral_1440/*".5555"*/;
    }
    else if (iVar1 < 8) {
      if (iVar1 < 6) {
        if (iVar1 == 5) {
          puVar2 = &StringLiteral_1320/*"-0.12345"*/;
        }
        else if (iVar1 < 4) {
          if (iVar1 == 3) {
            puVar2 = &StringLiteral_1411/*".12345"*/;
          }
          else {
            puVar2 = &StringLiteral_1404/*".00000"*/;
            if (iVar1 < 2) {
              puVar2 = &StringLiteral_1570/*"0.0"*/;
            }
          }
        }
        else {
          puVar2 = &StringLiteral_1576/*"0.12345"*/;
        }
      }
      else {
        puVar2 = &StringLiteral_1314/*"-.0"*/;
      }
    }
    else {
      puVar2 = &StringLiteral_1149/*"+.5"*/;
    }
  }
  else {
    puVar2 = &StringLiteral_1321/*"-0.8"*/;
  }
  return (System_String_o *)*puVar2;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3219C58]
// EKNJMFJJLBG$$CJOHHBMFAAG @ RVA 0x3219C58

Il2CppObject * EKNJMFJJLBG__CJOHHBMFAAG(EKNJMFJJLBG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((DAT_04566ef1 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566ef1 = 1;
  }
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  dVar3 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  dVar4 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  dVar5 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  dVar6 = BKOHHDBBJML__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_48 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,SQRT(ABS(dVar3 + dVar4 + dVar5 + dVar6)),
                        (MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
  return pIVar2;
}

