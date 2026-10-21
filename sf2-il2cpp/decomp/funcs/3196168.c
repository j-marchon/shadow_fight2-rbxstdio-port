// CMEBCBKGFFL$$PMNIOGKDGFD @ RVA 0x3196168

System_String_o * CMEBCBKGFFL__PMNIOGKDGFD(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *exists;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566a6d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566a6d = 1;
    method = extraout_x1;
  }
  pSVar2 = CMEBCBKGFFL__BPMILMCCBEI(EIJDDKJONFO,method);
  pSVar2 = CMEBCBKGFFL__OLJOOCGKALN(pSVar2,method_00);
  exists = (UnityEngine_Object_o *)
           UnityEngine_ResourcesAndBundles__Load<object>
                     (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    if (exists != (UnityEngine_Object_o *)0x0) {
      pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)exists,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return string_TypeInfo->static_fields->Empty;
}

