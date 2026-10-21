// Nekki.SF2.GUI.LabelAlias$$JNDEHBOKKAN @ RVA 0x31AE948

void Nekki_SF2_GUI_LabelAlias__JNDEHBOKKAN(Nekki_SF2_GUI_LabelAlias_o *__this)

{
  char cVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar3;
  
  if ((DAT_04566b66 & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b66 = 1;
  }
  bVar2 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar2)) {
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,(MethodInfo *)0x0
                      );
    method = extraout_x1;
    if (!bVar2) {
      pSVar3 = *(System_String_o **)&(__this->fields)._useLabelLineSpacing;
      cVar1 = *(char *)&(__this->fields)._Alias;
      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = KGFBAIBBNNH__KKFDNDIPEHH(pSVar3,cVar1 != '\0',(MethodInfo *)0x0);
      Nekki_SF2_GUI_TextPic__set_text((Nekki_SF2_GUI_TextPic_o *)__this,pSVar3,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
    Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,method);
    Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(__this,method_00);
    Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(__this,method_01);
    return;
  }
  return;
}

