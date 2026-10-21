// OGNCMFBMBMB$$.ctor @ RVA 0x33C44B8

void OGNCMFBMBMB___ctor(OGNCMFBMBMB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_03;
  UnityEngine_Transform_o *p;
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar2;
  
  if ((DAT_04567de9 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TypeInfo);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_14124);
    DAT_04567de9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>__ctor__);
  (__this->fields).EMOGELNBIOO =
       (System_Collections_Generic_Dictionary_string__OGNCMFBMBMB_AFGELJDFHIF__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_14124,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    __this_03 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if ((__this_03 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) &&
       (p = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_02,p,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_RectTransform_o *)
               Util__OHBILOGJCLA<object>(__this_01,Method_Util_OHBILOGJCLA<RectTransform>__);
      ppUVar2 = &(__this->fields).HHCKEAILEEN;
      *ppUVar2 = pUVar1;
      thunk_FUN_01c20e04(ppUVar2,pUVar1);
      pUVar1 = *ppUVar2;
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
      }
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_sizeDelta
                  (pUVar1,(UnityEngine_Vector2_o)
                          (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        pUVar1 = *ppUVar2;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
        }
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar1,(UnityEngine_Vector2_o)
                            (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar1 = *ppUVar2;
          if (DAT_0455fa7e == '\0') {
            FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
            DAT_0455fa7e = '\x01';
          }
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMax
                      (pUVar1,(UnityEngine_Vector2_o)
                              (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            pUVar1 = *ppUVar2;
            if (DAT_0455fa77 == '\0') {
              FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
              DAT_0455fa77 = '\x01';
            }
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchoredPosition3D
                        (pUVar1,(UnityEngine_Vector3_o)
                                (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              pUVar1 = *ppUVar2;
              if (DAT_0455fa7f == '\0') {
                FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                DAT_0455fa7f = '\x01';
              }
              if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_Transform__set_localScale
                          ((UnityEngine_Transform_o *)pUVar1,
                           (UnityEngine_Vector3_o)
                           (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                           (MethodInfo *)0x0);
                UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

