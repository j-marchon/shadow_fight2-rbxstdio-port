// JDJOEMLOACI$$MAHFCKJGBPP @ RVA 0x332D270

void JDJOEMLOACI__MAHFCKJGBPP(JDJOEMLOACI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int32_t BFGHCDJJJOO;
  long lVar2;
  System_String_o *OOGPLJBADCD;
  Nekki_SF2_GUI_Map_MapScene_o *__this_00;
  
  if ((DAT_045678e4 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045678e4 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).JFNNLEIIIFM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BFGHCDJJJOO = MFBNFJGBPBB__JBAMHPFEPLG(AAJBIMFNMBB,OOGPLJBADCD,(MethodInfo *)0x0);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Map_MapScene__ChangeRaid(__this_00,BFGHCDJJJOO,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

