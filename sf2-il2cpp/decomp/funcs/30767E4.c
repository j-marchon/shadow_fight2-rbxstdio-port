// KKCBGIBKOCP$$EAJNBBHMMLB @ RVA 0x30767E4

UnityEngine_Sprite_o *
KKCBGIBKOCP__EAJNBBHMMLB
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,bool CKNMMCNCCCL,
          bool GMDKAHCJGBD,bool NHOBJGPBONB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *__this;
  UnityEngine_Sprite_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)NHOBJGPBONB;
  if ((DAT_04565faf & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04565faf = 1;
  }
  if (HCAAAAMDCNO == (System_String_o *)0x0) {
    return (UnityEngine_Sprite_o *)0x0;
  }
  bVar1 = System_String__Contains(HCAAAAMDCNO,StringLiteral_1492,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    iVar2 = System_String__LastIndexOf(HCAAAAMDCNO,0x2f,(MethodInfo *)0x0);
    OOKEKJMFKPE = System_String__Substring(HCAAAAMDCNO,0,iVar2 + 1,(MethodInfo *)0x0);
    HCAAAAMDCNO = System_String__Substring(HCAAAAMDCNO,iVar2 + 1,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_01;
  }
  __this = KKCBGIBKOCP__KMCFMENCOAH(HCAAAAMDCNO,method_00);
  if (__this != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(__this,0x2e,(MethodInfo *)0x0);
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
    }
    if (bVar1) {
      pUVar3 = KKCBGIBKOCP__EGKJEEBJAGH(OOKEKJMFKPE,__this,CKNMMCNCCCL,GMDKAHCJGBD,method_01);
      return pUVar3;
    }
    pUVar3 = KKCBGIBKOCP__CMMAOAPNOMN(OOKEKJMFKPE,__this,CKNMMCNCCCL,GMDKAHCJGBD,NHOBJGPBONB,method)
    ;
    return pUVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

