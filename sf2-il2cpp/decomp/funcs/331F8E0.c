// Nekki.SF2.GUI.Shop.ParameterProgressBar$$Init @ RVA 0x331F8E0

void Nekki_SF2_GUI_Shop_ParameterProgressBar__Init
               (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_ResolutionImage__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456783b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
    DAT_0456783b = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).Stripes;
  if (__this_01 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                        );
      __this_00 = local_38.fields._current;
      if (!bVar1) break;
      if ((UnityEngine_UI_Image_o *)local_38.fields._current == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_UI_Image__set_type
                ((UnityEngine_UI_Image_o *)local_38.fields._current,3,(MethodInfo *)0x0);
      UnityEngine_UI_Image__set_fillMethod((UnityEngine_UI_Image_o *)__this_00,0,(MethodInfo *)0x0);
      UnityEngine_UI_Image__set_fillOrigin((UnityEngine_UI_Image_o *)__this_00,0,(MethodInfo *)0x0);
      UnityEngine_UI_Image__set_fillAmount
                ((UnityEngine_UI_Image_o *)__this_00,0.0,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
  }
  return;
}

