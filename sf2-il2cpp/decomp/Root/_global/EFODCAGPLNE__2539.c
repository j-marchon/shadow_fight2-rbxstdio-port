// TypeDefIndex 2539
// Namespace: 
// public class EFODCAGPLNE : HPEENDCCJND
// Fields:

// ===== public void .ctor()  [RVA 0x33936C8]
// EFODCAGPLNE$$.ctor @ RVA 0x33936C8

void EFODCAGPLNE___ctor(EFODCAGPLNE_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x33936D0]
// EFODCAGPLNE$$ODGFCLOEKJD @ RVA 0x33936D0

void EFODCAGPLNE__ODGFCLOEKJD(EFODCAGPLNE_o *__this,MethodInfo *method)

{
  System_String_o *MNODCIGLHEL;
  Il2CppObject *pIVar1;
  int32_t local_2c;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_04567c38 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04567c38 = 1;
  }
  MNODCIGLHEL = HPEENDCCJND__PFHOGFBJGDE((HPEENDCCJND_o *)__this,10,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)MNODCIGLHEL,(MethodInfo *)0x0);
  local_24 = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,0,0xff,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  local_28 = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,0,0xff,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  local_2c = HPEENDCCJND__MNAABHNFFGN((HPEENDCCJND_o *)__this,0,0xff,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_2c);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,pIVar1,(MethodInfo *)0x0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x33937E0]
// EFODCAGPLNE$$CJOHHBMFAAG @ RVA 0x33937E0

Il2CppObject * EFODCAGPLNE__CJOHHBMFAAG(EFODCAGPLNE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_array *values;
  int local_34;
  
  if ((DAT_04567c39 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22506/*"}{"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_2634/*"ALIAS{%"*/);
    DAT_04567c39 = 1;
  }
  pSVar4 = HPEENDCCJND__FECLPLFHJAL((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
  iVar1 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
  iVar2 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
  iVar3 = HPEENDCCJND__MGOAMGFLEAL((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
  local_34 = iVar3 * (iVar2 + iVar1);
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2634/*"ALIAS{%"*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar4;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_22506/*"}{"*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar4 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar4;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_22500/*"}"*/;
              thunk_FUN_01c20e04();
              pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
              return (Il2CppObject *)pSVar4;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x3393994]
// EFODCAGPLNE$$AKPPNIPNKDH @ RVA 0x3393994

System_String_o * EFODCAGPLNE__AKPPNIPNKDH(EFODCAGPLNE_o *__this,MethodInfo *method)

{
  if ((DAT_04567c3a & 1) == 0) {
    FUN_01bab630(&StringLiteral_2635/*"ALIAS{?Concat[%,v1]}{((v2 + v3) * v4)}"*/);
    DAT_04567c3a = 1;
  }
  return StringLiteral_2635/*"ALIAS{?Concat[%,v1]}{((v2 + v3) * v4)}"*/;
}

