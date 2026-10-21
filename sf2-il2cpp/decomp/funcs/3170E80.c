// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$Awake @ RVA 0x3170E80

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__Awake
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o **ppUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  if ((DAT_04566920 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566920 = 1;
  }
  __this_01 = (__this->fields)._IconReadyImage;
  if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pUVar2 = (UnityEngine_UI_Image_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)__this_01,pUVar1,
                        Method_UnityEngine_Object_Instantiate<ResolutionImage>__);
    ppUVar3 = &(__this->fields).JDDOPDPMFGJ;
    *ppUVar3 = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
    if ((*ppUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

