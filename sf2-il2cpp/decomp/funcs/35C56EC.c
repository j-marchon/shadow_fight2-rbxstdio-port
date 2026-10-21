// HJNDPNIMBBG$$PJJJCGCPIBD @ RVA 0x35C56EC

UnityEngine_Sprite_o * HJNDPNIMBBG__PJJJCGCPIBD(System_String_o *ELNOBGPJBKH,MethodInfo *method)

{
  System_String_o *NPNDHEBBEAD;
  UnityEngine_Sprite_o *pUVar1;
  
  if ((DAT_04568f5f & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3289);
    FUN_01bab630(&StringLiteral_1501);
    FUN_01bab630(&StringLiteral_12920);
    DAT_04568f5f = 1;
  }
  NPNDHEBBEAD = System_String__Concat
                          (StringLiteral_12920,ELNOBGPJBKH,StringLiteral_1501,(MethodInfo *)0x0);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
  }
  pUVar1 = NGCBNMBJMOE__NECCNHODCAE
                     (NPNDHEBBEAD,StringLiteral_3289,StringLiteral_3289,false,(MethodInfo *)0x0);
  return pUVar1;
}

