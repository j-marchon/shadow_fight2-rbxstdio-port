// Nekki.SF2.GUI.LabelAliasTMP$$GBPDDFOIDPG @ RVA 0x314F0E0

void Nekki_SF2_GUI_LabelAliasTMP__GBPDDFOIDPG
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar3;
  
  if ((DAT_045667fb & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_045667fb = 1;
  }
  bVar2 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar2)) {
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      (*(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12,
                       (MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (!bVar2) {
      pSVar3 = *(System_String_o **)&(__this->fields).super.m_EnvMapMatrix.fields.m12;
      cVar1 = *(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m32;
      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = KGFBAIBBNNH__KKFDNDIPEHH(pSVar3,cVar1 != '\0',(MethodInfo *)0x0);
      TMPro_TMP_Text__set_text((TMPro_TMP_Text_o *)__this,pSVar3,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
                    /* try { // try from 0324f194 to 0334f19b has its CatchHandler @ 0324f394 */
    Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ(__this,method_00);
    Nekki_SF2_GUI_LabelAliasTMP__HBHAKJAFIDP(__this,method_01);
    return;
  }
                    /* try { // try from 0324f1a8 to 0334f1c7 has its CatchHandler @ 0324f398 */
  return;
}

