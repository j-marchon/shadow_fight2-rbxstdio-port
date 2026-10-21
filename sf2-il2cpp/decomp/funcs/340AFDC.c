// MGNPHCAAEIO$$NKJFPKDJKEN @ RVA 0x340AFDC

void MGNPHCAAEIO__NKJFPKDJKEN(System_String_o *DJGADBDBBAN,MethodInfo *method)

{
  bool bVar1;
  DEKKGJNMFEB_o *__this;
  AMJMGFCCAKN_o *IKKAMAMLIKA;
  MGNPHCAAEIO_c *JCLPIKHEKBB;
  long lVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  UnityEngine_Object_o *x;
  
  if ((DAT_04568033 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_18031);
    DAT_04568033 = 1;
    method = extraout_x1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo,method);
  }
  __this = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this == (DEKKGJNMFEB_o *)0x0) {
LAB_0350b164:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)0x0;
  IKKAMAMLIKA = DEKKGJNMFEB__BEENALLFOCN(__this,DJGADBDBBAN,(MethodInfo *)0x0);
  if (IKKAMAMLIKA != (AMJMGFCCAKN_o *)0x0) {
    JCLPIKHEKBB = MGNPHCAAEIO_TypeInfo;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      JCLPIKHEKBB = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__KKJLFPHPGKP((System_String_o *)JCLPIKHEKBB,IKKAMAMLIKA,method_00);
    MGNPHCAAEIO__IAGKBFCKFKB
              ((HOOAAGABMBL_o *)IKKAMAMLIKA,(IKKAMAMLIKA->fields).MNELBNHIKGH,0x12,1,
               (System_Action_BKKPAKHJDKB__o *)0x0,true,in_x6);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopScene__Refresh
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                   (MethodInfo *)0x0);
        return;
      }
      goto LAB_0350b164;
    }
  }
  return;
}

