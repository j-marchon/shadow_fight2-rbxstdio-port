// Nekki.SF2.GUI.Common.SceneSelector$$Refresh @ RVA 0x3399398

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Common_SceneSelector__Refresh
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t NFOBCFADDHA;
  byte bVar2;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04567c6a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04567c6a = 1;
  }
  __this_02 = (__this->fields)._Title;
  pSVar4 = MEJPIPJPKNP__LJOKKJPBMGO((__this->fields)._TargetScene,(MethodInfo *)0x0);
  if (__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03499554;
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_02,pSVar4,(MethodInfo *)0x0);
  pNVar5 = (__this->fields)._Button;
  if (pNVar5 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_03499554;
  __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)
              (pNVar5->fields).super.super.super.super.m_TargetGraphic;
  if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_03499430:
    __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
  }
  else {
    bVar2 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((__this_01->klass->_2).naturalAligment < bVar2) goto LAB_03499430;
    if ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
      __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar3) {
    iVar1 = (__this->fields)._TargetScene;
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
      DAT_04565e5a = '\x01';
    }
    if (iVar1 == KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
      pSVar4 = MEJPIPJPKNP__HLKGHMBHAEF((__this->fields)._TargetScene,(MethodInfo *)0x0);
    }
    else {
      NFOBCFADDHA = (__this->fields)._TargetScene;
      if ((__this->fields).KCBIPKCIGMO == false) {
        pSVar4 = MEJPIPJPKNP__GDFIHPLOOGM(NFOBCFADDHA,(MethodInfo *)0x0);
      }
      else {
        pSVar4 = MEJPIPJPKNP__NABCOFEDBGM(NFOBCFADDHA,(MethodInfo *)0x0);
      }
    }
    if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03499554;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,pSVar4,(MethodInfo *)0x0);
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pNVar6 = (__this->fields)._TutorialNode;
  pSVar4 = MEJPIPJPKNP__BELOCFNPIAN((__this->fields)._TargetScene,(MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
    ppSVar7 = &(pNVar6->fields)._ID;
    *ppSVar7 = pSVar4;
    thunk_FUN_01c20e04(ppSVar7,pSVar4);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03499554:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

