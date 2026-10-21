// KKLJIDJBFEI$$INBCMIJNADF @ RVA 0x31455CC

void KKLJIDJBFEI__INBCMIJNADF(KKLJIDJBFEI_o *__this,ELBBEAGGAOH_o *PKOGACBGAJJ,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  Il2CppObject *arg0;
  System_String_o *value;
  MethodInfo *in_x4;
  KKLJIDJBFEI_EKJEAINHKPL_o local_40;
  undefined1 local_24 [4];
  
  if ((DAT_04566779 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_20285);
    FUN_01bab630(&StringLiteral_16218);
    FUN_01bab630(&StringLiteral_8612);
    FUN_01bab630(&StringLiteral_20721);
    DAT_04566779 = 1;
  }
  local_40.fields.sb = (System_Text_StringBuilder_o *)0x0;
  local_40.fields.p = PKOGACBGAJJ;
  thunk_FUN_01c20e04(&local_40.fields.p,PKOGACBGAJJ);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  local_40.fields.sb = pSVar1;
  thunk_FUN_01c20e04(&local_40,pSVar1);
  if (local_40.fields.sb != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(local_40.fields.sb,StringLiteral_8612,(MethodInfo *)0x0);
    pSVar1 = local_40.fields.sb;
    local_24[0] = (__this->fields).MIPDMFDHHAP;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
    value = System_String__Format(StringLiteral_16218,arg0,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(pSVar1,value,(MethodInfo *)0x0);
      if (local_40.fields.p != (ELBBEAGGAOH_o *)0x0) {
        KKLJIDJBFEI__PFBKEJLANIE
                  (StringLiteral_20285,((local_40.fields.p)->fields).CBHDCHDBFGB,
                   ((local_40.fields.p)->fields).DNKENJFJOMD,&local_40,in_x4);
        if (local_40.fields.p != (ELBBEAGGAOH_o *)0x0) {
          KKLJIDJBFEI__PFBKEJLANIE
                    (StringLiteral_20721,((local_40.fields.p)->fields).IFDHENIKFKC,
                     ((local_40.fields.p)->fields).FFDNNGLMPJJ,&local_40,in_x4);
          pSVar1 = local_40.fields.sb;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

