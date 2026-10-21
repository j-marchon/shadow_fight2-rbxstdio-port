// SFButton$$AddFlashImage @ RVA 0x34BB7EC

void SFButton__AddFlashImage(SFButton_o *__this,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_045685d6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_6496);
    DAT_045685d6 = 1;
  }
  __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,StringLiteral_6496,(MethodInfo *)0x0);
    __this_01 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      pNVar2 = (Nekki_SF2_GUI_ResolutionImage_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)__this_00,
                          Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
      ppNVar1 = &(__this->fields).FlashingImage;
      (__this->fields).FlashingImage = pNVar2;
      thunk_FUN_01c20e04(ppNVar1,pNVar2);
      pNVar2 = (__this->fields).FlashingImage;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,HCAAAAMDCNO,(MethodInfo *)0x0);
        pNVar2 = *ppNVar1;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035bb900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

