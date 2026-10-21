// KKCBGIBKOCP$$GMNKLNDACOO @ RVA 0x307673C

UnityEngine_Sprite_o *
KKCBGIBKOCP__GMNKLNDACOO
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Sprite_o *pUVar2;
  MethodInfo *in_x5;
  
  if ((DAT_04565fa9 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565fa9 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
  }
  pUVar2 = KKCBGIBKOCP__EAJNBBHMMLB(OOKEKJMFKPE,HCAAAAMDCNO,false,bVar1 == false,false,in_x5);
  return pUVar2;
}

