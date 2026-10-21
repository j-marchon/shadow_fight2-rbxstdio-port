// SFButton$$JBPDECOFFNG @ RVA 0x34BB048

System_Collections_IEnumerator_o *
SFButton__JBPDECOFFNG
          (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
          int32_t ABKNPBMGHKH,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045685dd & 1) == 0) {
    FUN_01bab630(&SFButton_FLGPNLOPAJN_TypeInfo);
    DAT_045685dd = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFButton_FLGPNLOPAJN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[3].klass = (Il2CppClass *)MELGPLLNBGH;
  thunk_FUN_01c20e04(__this_00 + 3,MELGPLLNBGH);
  *(int32_t *)&__this_00[2].monitor = ABKNPBMGHKH;
  return (System_Collections_IEnumerator_o *)__this_00;
}

