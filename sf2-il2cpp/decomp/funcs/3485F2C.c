// Nekki.SF2.GUI.Map.RaidQuestsButton$$DLDJLKECDAN @ RVA 0x3485F2C

void Nekki_SF2_GUI_Map_RaidQuestsButton__DLDJLKECDAN
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  
  if ((DAT_045683ac & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_045683ac = 1;
  }
  __this_00 = (__this->fields)._image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._label;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._label;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x03585fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->LDIIEEOLEMM).fields.r,(pBVar3->LDIIEEOLEMM).fields.g,
                   (pBVar3->LDIIEEOLEMM).fields.b,(pBVar3->LDIIEEOLEMM).fields.a,pNVar2,
                   (pNVar2->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

