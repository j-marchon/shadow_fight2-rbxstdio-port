// Nekki.SF2.GUI.StrikeThroughTextLine$$Update @ RVA 0x327203C

void Nekki_SF2_GUI_StrikeThroughTextLine__Update
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_RectTransform_o *thiz;
  UnityEngine_RectTransform_o *that;
  Nekki_SF2_GUI_StrikeThroughTextLine_c *pNVar2;
  
  if ((DAT_0456722c & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456722c = 1;
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsLastSibling(pUVar1,(MethodInfo *)0x0);
    thiz = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      that = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
      if (that == (UnityEngine_RectTransform_o *)0x0) {
        that = (UnityEngine_RectTransform_o *)0x0;
      }
      else if (that->klass != UnityEngine_RectTransform_TypeInfo) {
        that = (UnityEngine_RectTransform_o *)0x0;
      }
      UnityEngine_TransformExtensions__ImposeOn(thiz,that,(MethodInfo *)0x0);
      if (*(char *)&(__this->fields)._IAGANEPIJNF_k__BackingField == '\0') {
        return;
      }
      pNVar2 = __this->klass;
      *(undefined1 *)&(__this->fields)._IAGANEPIJNF_k__BackingField = 0;
      (*(pNVar2->vtable)._28_SetVerticesDirty.methodPtr)
                (__this,(pNVar2->vtable)._28_SetVerticesDirty.method);
                    /* WARNING: Could not recover jumptable at 0x03372110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._27_SetLayoutDirty.methodPtr)
                (__this,(__this->klass->vtable)._27_SetLayoutDirty.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

