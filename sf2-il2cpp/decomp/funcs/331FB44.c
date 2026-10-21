// Nekki.SF2.GUI.Shop.ParameterProgressBar$$SetValue @ RVA 0x331FB44

void Nekki_SF2_GUI_Shop_ParameterProgressBar__SetValue
               (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *__this,float NBHHBBOJJME,
               float PNEIGGOFIOA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_ResolutionImage__o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456783d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
    DAT_0456783d = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).Stripes;
  if (__this_01 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
    while( true ) {
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                          );
        __this_00 = local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
          return;
        }
        iVar2 = DG_Tweening_ShortcutExtensions__DOKill
                          ((UnityEngine_Component_o *)local_48.fields._current,false,
                           (MethodInfo *)0x0);
        if (PNEIGGOFIOA <= 0.0) break;
        DG_Tweening_DOTweenModuleUI__DOFillAmount
                  ((UnityEngine_UI_Image_o *)__this_00,NBHHBBOJJME,PNEIGGOFIOA,(MethodInfo *)0x0);
      }
      if ((UnityEngine_UI_Image_o *)__this_00 == (UnityEngine_UI_Image_o *)0x0) break;
      UnityEngine_UI_Image__set_fillAmount
                ((UnityEngine_UI_Image_o *)__this_00,NBHHBBOJJME,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

