// SFButton$$DGIMIOFPGCI @ RVA 0x34BAA8C

System_Collections_IEnumerator_o *
SFButton__DGIMIOFPGCI
          (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045685c8 & 1) == 0) {
    FUN_01bab630(&SFButton_NLBDFBJDJDH_TypeInfo);
    DAT_045685c8 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFButton_NLBDFBJDJDH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = MELGPLLNBGH;
  thunk_FUN_01c20e04(&__this_00[2].monitor,MELGPLLNBGH);
  return (System_Collections_IEnumerator_o *)__this_00;
}

