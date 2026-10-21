// TypeDefIndex 2330
// Namespace: Nekki.SF2.GUI.Shop
// public class ParameterProgressBar : MonoBehaviour
// Fields:
//   private ResolutionImage Background; // 0x20
//   private List<ResolutionImage> Stripes; // 0x28

// ===== public virtual void Init()  [RVA 0x331F8E0]
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


// ===== public virtual void SetValue(float NBHHBBOJJME, int EPLIHDPAKDE, float PNEIGGOFIOA = 0)  [RVA 0x331FA68]
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


// ===== public virtual void SetValue(float NBHHBBOJJME, float PNEIGGOFIOA = 0)  [RVA 0x331FB44]
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


// ===== public virtual float GetValue(int EPLIHDPAKDE)  [RVA 0x331FCE0]
// Nekki.SF2.GUI.Shop.ParameterProgressBar$$GetValue @ RVA 0x331FCE0

float Nekki_SF2_GUI_Shop_ParameterProgressBar__GetValue
                (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *__this,int32_t EPLIHDPAKDE,
                MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  
  if ((DAT_0456783e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    DAT_0456783e = 1;
  }
  __this_00 = (__this->fields).Stripes;
  if (__this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
    fVar2 = 0.0;
    if (EPLIHDPAKDE < (__this_00->fields)._size) {
                    /* try { // try from 0341fd44 to 0351fd4b has its CatchHandler @ 0341fe90 */
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,EPLIHDPAKDE,
                          Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_0341fd5c;
      fVar2 = *(float *)((long)&pIVar1[0xf].klass + 4);
    }
    return fVar2;
  }
LAB_0341fd5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x331FD60]
// Nekki.SF2.GUI.Shop.ParameterProgressBar$$.ctor @ RVA 0x331FD60

void Nekki_SF2_GUI_Shop_ParameterProgressBar___ctor
               (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *__this,MethodInfo *method)

{
                    /* try { // try from 0341fd60 to 0351fd67 has its CatchHandler @ 0341fe84 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

