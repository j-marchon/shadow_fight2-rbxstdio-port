// Nekki.SF2.GUI.Profile.PerkContent$$Refresh @ RVA 0x32972B4

void Nekki_SF2_GUI_Profile_PerkContent__Refresh
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
               bool LOBGCBPLKFJ,MethodInfo *method)

{
  bool bVar1;
  ECENNHNBAME_o *pEVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  JLGNBOILFLN_o *pJVar6;
  JLGNBOILFLN_o **ppJVar7;
  
  ppJVar7 = &(__this->fields).OFLJEENFLDG;
  *ppJVar7 = CDEABOAKDEJ;
  thunk_FUN_01c20e04(ppJVar7);
  (__this->fields).PABIMIFJJKF = LOBGCBPLKFJ;
  if (CDEABOAKDEJ == (JLGNBOILFLN_o *)0x0) goto LAB_033973f8;
  pEVar2 = JLGNBOILFLN__MJKINAHFKIG(CDEABOAKDEJ,(MethodInfo *)0x0);
  (__this->fields).GGGJLIBFAOI = pEVar2;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Profile_PerkContent__KBMNKDPMMPE(__this,method_00);
  Nekki_SF2_GUI_Profile_PerkContent__BDIDKFGDFIL(__this,method_01);
  pNVar3 = (__this->fields)._DescriptionLabel;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033973f8;
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
  if (*ppJVar7 == (JLGNBOILFLN_o *)0x0) goto LAB_033973f8;
  if (((*ppJVar7)->fields).OIKLOAGFFGO == 3) {
LAB_03397358:
    bVar1 = false;
  }
  else {
    pUVar5 = (__this->fields)._Keys;
    if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033973f8;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03397358;
    bVar1 = (__this->fields).PABIMIFJJKF == false;
  }
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,bVar1,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._DescriptionLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if (bVar1) {
        pJVar6 = (__this->fields).OFLJEENFLDG;
        if ((pJVar6 == (JLGNBOILFLN_o *)0x0) ||
           (pNVar3 = (__this->fields)._DescriptionLabel, pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0
           )) goto LAB_033973f8;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(pJVar6->fields).BJMHBMDFFPA,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._ImprovedLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
        if ((*ppJVar7 != (JLGNBOILFLN_o *)0x0) && (pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (pUVar4,((*ppJVar7)->fields).OIKLOAGFFGO == 2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_033973f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

