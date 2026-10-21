// Nekki.SF2.GUI.Shop.ParameterProgressBar$$SetValue @ RVA 0x331FA68

void Nekki_SF2_GUI_Shop_ParameterProgressBar__SetValue
               (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *__this,float NBHHBBOJJME,
               int32_t EPLIHDPAKDE,float PNEIGGOFIOA,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  
  if ((DAT_0456783c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    DAT_0456783c = 1;
  }
  __this_00 = (__this->fields).Stripes;
  iVar1 = 0;
  if (__this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
    if ((__this_00->fields)._size <= EPLIHDPAKDE) {
      return;
    }
    __this_01 = (UnityEngine_UI_Image_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,EPLIHDPAKDE,
                           Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    iVar1 = DG_Tweening_ShortcutExtensions__DOKill
                      ((UnityEngine_Component_o *)__this_01,false,(MethodInfo *)0x0);
    if (0.0 < PNEIGGOFIOA) {
      DG_Tweening_DOTweenModuleUI__DOFillAmount(__this_01,NBHHBBOJJME,PNEIGGOFIOA,(MethodInfo *)0x0)
      ;
      return;
    }
    if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_fillAmount(__this_01,NBHHBBOJJME,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar1);
}

