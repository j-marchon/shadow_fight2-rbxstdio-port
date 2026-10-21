// SFToggle$$DGIMIOFPGCI @ RVA 0x30D5874

System_Collections_IEnumerator_o *
SFToggle__DGIMIOFPGCI
          (SFToggle_o *__this,UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04566329 & 1) == 0) {
    FUN_01bab630(&SFToggle_MHGDIPJANID_TypeInfo);
    DAT_04566329 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(SFToggle_MHGDIPJANID_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = OHNNFPGGEFK;
  thunk_FUN_01c20e04(&__this_00[2].monitor,OHNNFPGGEFK);
  return (System_Collections_IEnumerator_o *)__this_00;
}

