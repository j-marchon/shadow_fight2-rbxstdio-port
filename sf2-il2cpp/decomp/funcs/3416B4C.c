// Nekki.SF2.GUI.Common.SectionButton$$NECCNHODCAE @ RVA 0x3416B4C

UnityEngine_Sprite_o *
Nekki_SF2_GUI_Common_SectionButton__NECCNHODCAE
          (Nekki_SF2_GUI_Common_SectionButton_o *__this,UnityEngine_Sprite_o *AHDLJIHNKIO,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *HCAAAAMDCNO;
  UnityEngine_Object_o *x;
  
  if ((DAT_045680a6 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680a6 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)AHDLJIHNKIO,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (AHDLJIHNKIO == (UnityEngine_Sprite_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    HCAAAAMDCNO = UnityEngine_Object__get_name
                            ((UnityEngine_Object_o *)AHDLJIHNKIO,(MethodInfo *)0x0);
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
    }
    x = (UnityEngine_Object_o *)
        KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1,HCAAAAMDCNO,false,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)AHDLJIHNKIO,x,(MethodInfo *)0x0);
      if (bVar1) {
        return (UnityEngine_Sprite_o *)x;
      }
    }
  }
  return (UnityEngine_Sprite_o *)0x0;
}

