// Nekki.SF2.GUI.Map.MapScene$$OpenRaids @ RVA 0x3587290

void Nekki_SF2_GUI_Map_MapScene__OpenRaids(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  System_Action_o *pSVar1;
  undefined1 auVar2 [16];
  
  Nekki_SF2_GUI_Map_MapScene__FNOPCFKAOEF(__this,method);
  Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
  Nekki_SF2_GUI_Map_MapScene__LNEFBMFLDDG(__this,method_01);
  method_03 = method_02;
  if ((__this->fields).IAAABJBDEMK != 1) {
    Nekki_SF2_GUI_Map_MapScene__SetRaidMode(__this,method_02);
    (__this->fields).IAAABJBDEMK = 1;
    method_03 = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapScene__PCDOAIDDKPP(__this,method_03);
  Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_04);
  Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_05);
  Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC(__this,method_06);
  Nekki_SF2_GUI_Map_MapScene__MKDPNEIAKBM(__this,method_07);
  pSVar1 = (__this->fields).IGDMLILCCJP;
  if (pSVar1 != (System_Action_o *)0x0) {
    auVar2 = (*(code *)(pSVar1->fields).super.super.invoke_impl)
                       ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method
                       );
    Nekki_SF2_GUI_Map_MapScene__EADCMKDANAH(auVar2._0_8_,auVar2._8_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

